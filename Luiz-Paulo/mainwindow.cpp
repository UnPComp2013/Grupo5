#include "mainwindow.h"
#include "ui_mainwindow.h"
 
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
 
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCadastrar_Professor_triggered()
{
  QMessageBox::information(this, "Cadastro de professor", "Tela de teste de cadastro");
}

void MainWindow::on_actionCadastrar_Turma_triggered()
{
  QMessageBox::information(this, "Cadastro de Turma", "Tela de teste de cadastro");
}

void MainWindow::on_actionCadastrar_Disciplina_triggered()
{
  QMessageBox::information(this, "Cadastro de Disciplina", "Tela de teste de cadastro");
}

void MainWindow::on_actionCadastrar_Horario_triggered()
{
   QMessageBox::information(this,"Cadastro Horario","Tela de teste para cadastro de Horario");
}

void MainWindow::on_actionProfessor_triggered()
{
  QMessageBox::information(this, "Consulta de Professor", "Tela de teste de consulta");
}

void MainWindow::on_actionTurma_triggered()
{
  QMessageBox::information(this, "Consulta de Turma", "Tela de teste de consulta");
}

void MainWindow::on_actionConsultar_Horario_triggered()
{
    QMessageBox::information(this, "Consulta de Horario", "Tela de teste para consulta de horario.");
}

void MainWindow::on_btBuscar_clicked()
{
 if(ui->opBusca->currentText() == "Por Professor"){
  QMessageBox::information(this,"Buscar Professor","Quando clicar no botao fazer a busca bd pelo nome do professor");
 }
}

void MainWindow::on_btLimpar_clicked()
{
 ui->opBusca->setCurrentText("Selecione:");
 ui->buscar->clear();
}
