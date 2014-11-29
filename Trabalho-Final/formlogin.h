#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <formbusca.h>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    if(!conOpen()){
        ui->labelStatus->setText("Erro na conexão ao Banco de Dados.");
    }else{
        ui->labelStatus->setText("Banco de Dados conectado com sucesso!");
    }
}

login::~login()
{
    delete ui;
}

void login::on_btEntrarLogin_clicked()
{
    QString login, senha;
    login = ui->leUsuario->text();
    senha=ui->leSenha->text();

    if(!conOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM tbl_CadProf WHERE usuario='"+login +"'AND senha='"+senha +"'");

    if(qry.exec()){
        int count=0;
        while (qry.next()){
            count++;
        }
        if(count==1){
            conClose();
            this->hide();
            /*fBusca = new formbusca(this);
            fBusca->show();*/

        }
        if(count>1)
            QMessageBox::information(this, "Erro Login", "Nome do usuário repetido.");
        if(count<1)
            QMessageBox::information(this, "Erro Login", "Login e/ou Senha estão incorretos.");

   }

}
