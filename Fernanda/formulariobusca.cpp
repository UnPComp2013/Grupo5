#include "formulariobusca.h"
#include "ui_formulariobusca.h"
#include <QMessageBox>

formulariobusca::formulariobusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formulariobusca)
{
    ui->setupUi(this);
}

formulariobusca::~formulariobusca()
{
    delete ui;
}

void formulariobusca::on_actionCadastro_Professor_triggered()
{
    QMessageBox::information(this, "Cadastro de Professor", "Tela teste para cadastro de professor!!");
}

void formulariobusca::on_actionCadastro_de_Disciplina_triggered()
{
    QMessageBox::information(this, "Cadastro de Turma", "Tela teste para cadastro de turma!!");

}

void formulariobusca::on_actionCadastro_de_Turma_triggered()
{
    QMessageBox::information(this, "Cadastro de Disciplina", "Tela teste para cadastro de disciplina!!");

}

void formulariobusca::on_actionCadastro_de_Hor_rio_triggered()
{
    QMessageBox::information(this, "Cadastro de Horário", "Tela teste para cadastro de horário!!");
}

void formulariobusca::on_btLimpar_clicked()
{
    ui->opBusca->setCurrentText("Selecione:");
    ui->textBusca->clear();
}
void formulariobusca::on_btBuscar_clicked()
{
     if(ui->opBusca->currentText() == "Por Professor"){
       QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
       //select * from professor where nome=pega o nome do text line;
    }else{
        if(ui->opBusca->currentText() == "Por Turma"){
            QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
        }else{
            if(ui->opBusca->currentText() == "Por Disciplina"){
                QMessageBox::information(this, "Busca","Configura o select para buscar no bd pelo nome do professor, aí pode colocar os resultados em uma lista");
            }else{
                QMessageBox::information(this, "Busca", "Selecione uma opção de busca.");
            }
        }
    }   
}

