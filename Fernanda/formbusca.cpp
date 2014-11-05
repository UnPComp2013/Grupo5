#include "formbusca.h"
#include "ui_formbusca.h"
#include <QMessageBox>
#include <formcadprof.h>
#include <formcadcursos.h>
#include <formcaddis.h>
#include <formcadturma.h>

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

void formbusca::on_actionCadastro_Professor_triggered()
{
    formcadprof fcadprof;
    fcadprof.setModal(true);
    fcadprof.exec();
}
void formbusca::on_actionCadastro_de_Curso_triggered()
{
    formcadcursos fcadcursos;
    fcadcursos.setModal(true);
    fcadcursos.exec();
}

void formbusca::on_actionCadastro_de_Disciplina_triggered()
{
    formcaddis fcaddis;
    fcaddis.setModal(true);
    fcaddis.exec();
}
void formbusca::on_actionCadastro_de_Turma_triggered()
{
    formcadturma fcadturma;
    fcadturma.setModal(true);
    fcadturma.exec();
}
