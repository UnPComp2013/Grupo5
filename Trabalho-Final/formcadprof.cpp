#include "formcadprof.h"
#include "ui_formcadprof.h"
#include <QMessageBox>
//#include <formcaddis.h>

formcadprof::formcadprof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadprof)
{
    ui->setupUi(this);
    formlogin conn;
    if(!conn.conOpen()){
        ui->labelStatus->setText("Erro na conexão ao Banco de Dados.");
    }else{
        ui->labelStatus->setText("Banco de Dados conectado com sucesso!");
    }

    QString busca;

    QSqlQueryModel * modal = new QSqlQueryModel();
    conn.conOpen();
    QSqlQuery* qry = new QSqlQuery(conn.mydb);
    qry->prepare("select nomeDis from tbl_CadDis");
    qry->exec();
    modal->setQuery(*qry);
    ui->cbDisciplinas->setModel(modal);

    conn.conClose();
    qDebug()<<(modal->rowCount());
}

formcadprof::~formcadprof()
{
    delete ui;
}

void formcadprof::on_btCancelar_clicked()
{
    //this->hide();
    close();
}

void formcadprof::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leEndereco->setText("");
    ui->leCPF->setText("");
    ui->leRG->setText("");
    ui->leTelefone->setText("");
    ui->leCelular->setText("");
    ui->leEmail->setText("");
    ui->leUsuario->setText("");
    ui->leSenha->setText("");
    ui->cbHorarios->setCurrentIndex(0);
    ui->cbDisciplinas->setCurrentIndex(0);
}

void formcadprof::on_btSalvar_clicked()
{
    formlogin conn;
    QString nome, endereco, cpf, rg, email, celular, telefone, matricula, horarios, disciplinas, usuario, senha;
    nome = ui->leNome->text();
    endereco = ui->leEndereco->text();
    cpf = ui->leCPF->text();
    email = ui->leEmail->text();
    celular = ui->leCelular->text();
    telefone = ui->leTelefone->text();
    matricula = ui->leMatricula->text();
    usuario = ui->leUsuario->text();
    senha = ui->leSenha->text();


    if(!conn.conOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    conn.conOpen();
    QSqlQuery qry;
    qry.prepare("insert into tbl_CadProf (nome, endereco, cpf, rg, email, celular, telefone, matricula, usuario, senha) values ('"+nome+"','"+endereco+"','"+cpf+"','"+rg+"','"+email+"','"+celular+"','"
                +telefone+"','"+matricula+"','"+usuario+"','"+senha+"')");

    if(qry.exec()){
        QMessageBox::information(this, tr("Salvando"), tr("Salvo com sucesso"));
        conn.conClose();
        this->hide();
    }else{
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }

}

void formcadprof::on_btAddDisciplina_clicked()
{

   fcaddis = new caddisciplina(this);
   fcaddis->show();
}
