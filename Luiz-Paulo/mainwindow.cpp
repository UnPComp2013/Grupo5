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
