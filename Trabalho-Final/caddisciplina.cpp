#include "caddisciplina.h"
#include "ui_caddisciplina.h"
#include <QMessageBox>

caddisciplina::caddisciplina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::caddisciplina)
{
    ui->setupUi(this);
    formlogin conn;
    if(!conn.conOpen()){
        ui->labelStatus->setText("Erro na conexão ao Banco de Dados.");
    }else{
        ui->labelStatus->setText("Banco de Dados conectado com sucesso!");
    }
}

caddisciplina::~caddisciplina()
{
    delete ui;
}

void caddisciplina::on_btCancelar_clicked()
{
    this->hide();
}

void caddisciplina::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leCargaH->setText("");
}

void caddisciplina::on_btSalvar_clicked()
{
    formlogin conn;
    QString nome, choraria;
    nome = ui->leNome->text();
    choraria = ui->leCargaH->text();

    if(!conn.conOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    conn.conOpen();
    QSqlQuery qry;

    qry.prepare("insert into tbl_CadDis (nomeDis, choraria) values ('"+nome+"','"+choraria+"')");

    if(qry.exec()){
        QMessageBox::information(this, tr("Salvando"), tr("Salvo com sucesso"));
        conn.conClose();
        this->hide();
    }else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
