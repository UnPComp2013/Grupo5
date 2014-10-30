#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <mainwindow.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    if(!conOpen()){
        ui->msg->setText("Falha na conxão.");
    }else{
        ui->msg->setText("Conectou!!!!:D");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btSalvar_clicked()
{
    QString nome, sobrenome;
    nome = ui->nome->text();
    sobrenome = ui->sobrenome->text();

    if(!conOpen()){
        qDebug()<<"Erro.";
        return;
    }
    conOpen();
    QSqlQuery query;
    query.prepare("select * from nome_tabela where nome='"+nome+"' and sobrenome='"+sobrenome+"'");

    if(query.exec()){
        int cont = 0;
        while(query.next()){
            cout++;
        }
        if(cout == 1){
            ui->msg->setText("Nome certo");
            conClose();
            this->hide();
        }
        if(cont > 1){
            ui->msg->setText("Nome duplicado");
        }
        if(cont < 1){
            ui->msg->setText("Tá errada, sáporra");
        }
    }
}
