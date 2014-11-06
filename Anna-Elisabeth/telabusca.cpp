#include "telabusca.h"
#include "ui_telabusca.h"
#include <QMessageBox>
#include <cadastroprofessor.h>
#include <cadastrocursos.h>
#include <cadastrodisciplina.h>
telabusca::telabusca(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telabusca)
{
    ui->setupUi(this);
}
telabusca::~telabusca()
{
    delete ui;
}
void telabusca::on_btLimpar_clicked()
{
    ui->cbopBusca->setCurrentText("Selecione:");
    ui->textBusca->clear();
}
void telabusca::on_btBuscar_clicked()
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
void telabusca::on_actionCadastro_de_Professor_triggered()
{
    cadastroprofessor cadprof;
    cadprof.setModal(true);
    cadprof.exec();

}
void telabusca::on_actionCadastro_de_Curso_triggered()
{
    cadastrocursos cadcursos;
    cadcursos.setModal(true);
    cadcursos.exec();
}
void telabusca::on_actionCadastro_de_Disciplina_triggered()
{
    cadastrodisciplina caddisciplina;
    caddisciplina.setModal(true);
    caddisciplina.exec();
}
