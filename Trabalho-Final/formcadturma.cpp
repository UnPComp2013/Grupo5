#include "formcadturma.h"
#include "ui_formcadturma.h"
#include <QMessageBox>

formcadturma::formcadturma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadturma)
{
    ui->setupUi(this);
    formlogin conn;
    if(!conn.conOpen()){
        ui->labelStatus->setText("Erro na conexão ao Banco de Dados.");
    }else{
        ui->labelStatus->setText("Banco de Dados conectado com sucesso!");
    }


}

formcadturma::~formcadturma()
{
    delete ui;
}

void formcadturma::on_btCancelar_clicked()
{
    this->hide();
}

void formcadturma::on_btLimpar_clicked()
{
    ui->cbSelectCurso->setCurrentIndex(0);
    ui->leAnoIng->setText("");
    ui->leQtAlunos->setText("");
    ui->leSala->setText("");
}

void formcadturma::on_btSalvar_clicked()
{
    formlogin conn;
        QString ano, qtalunos, sala, nomeTurma;
        ano = ui->leAnoIng->text();
        qtalunos = ui->leQtAlunos->text();
        sala = ui->leSala->text();
        nomeTurma = ui->leNomeTurma->text();
        //curso = ui->cbSelectCurso->text();
        //sala = ui->cbSelectTurno->text();

        if(!conn.conOpen()){
            qDebug()<<"Failed to open the database";
            return;
        }
        conn.conOpen();
        QSqlQuery qry;

        qry.prepare("insert into tbl_CadTurma (ano, qtAlunos, sala, nomeTurma) values ('"+ano+"','"+qtalunos+"','"+sala+"','"+nomeTurma+"')");

        if(qry.exec()){
            QMessageBox::information(this, tr("Salvando"), tr("Salvo com sucesso"));
            conn.conClose();
            this->hide();
        }else{
            QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
        }

}
