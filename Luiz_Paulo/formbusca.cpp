#include "formbusca.h"
#include "ui_formbusca.h"
#include <QMessageBox>
#include <formcadprof.h>
#include <formcadcursos.h>
#include <formcaddis.h>

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
    ui->cbopBusca->setCurrentText("Selecione:");
    ui->textBusca->clear();
}

void formbusca::on_btBuscar_clicked(){
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


