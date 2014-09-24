#include "formbusca.h"
#include "ui_formbusca.h"
#include <QMessageBox>
#include <formcadprof.h>

formbusca::formbusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formbusca)
{
    ui->setupUi(this);
}

formbusca::~formbusca()
{
    delete ui;
}

void formbusca::on_actionCadastro_Professor_triggered()
{
    formcadprof fcadprof;
    fcadprof.setModal(true);
    fcadprof.exec();
}

void formbusca::on_actionCadastro_de_Disciplina_triggered()
{
    QMessageBox::information(this, "Cadastro de Turma", "Tela teste para cadastro de turma!!");

}

void formbusca::on_actionCadastro_de_Turma_triggered()
{
    QMessageBox::information(this, "Cadastro de Disciplina", "Tela teste para cadastro de disciplina!!");

}

void formbusca::on_actionCadastro_de_Hor_rio_triggered()
{
    QMessageBox::information(this, "Cadastro de Horário", "Tela teste para cadastro de horário!!");
}

void formbusca::on_btLimpar_clicked()
{
    ui->opBusca->setCurrentText("Selecione:");
    ui->textBusca->clear();
}
void formbusca::on_btBuscar_clicked()
{
     if(ui->cbopBusca->currentText() == "Por Professor"){
       QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
       //select * from professor where nome=pega o nome do text line;
    }else{
        if(ui->cbopBusca->currentText() == "Por Turma"){
            QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
        }else{
            if(ui->cbopBusca->currentText() == "Por Disciplina"){
                QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
            }else{
                QMessageBox::information(this, "Busca", "Selecione uma opção de busca.");
            }
        }
    }   
}

