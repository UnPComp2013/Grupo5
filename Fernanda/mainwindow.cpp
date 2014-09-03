#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    ui->comboBox->addItem("Por Professor");
    ui->comboBox->addItem("Por Turma");
    ui->comboBox->addItem("Por Disciplina");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actionCadastro_de_Professor_triggered()
{
    QMessageBox::information(this, "Cadastro de Professor", "Mensagem Teste!!");
}

void MainWindow::on_actionCadastro_de_Turma_triggered()
{
    QMessageBox::information(this, "Cadastro de Turma", "Mensagem Teste!!");

}

void MainWindow::on_actionCAdastro_de_Disciplina_triggered()
{
    QMessageBox::information(this, "Cadastro de Disciplina", "Mensagem Teste!!");
}

void MainWindow::on_actionCadastro_de_Hor_rios_triggered()
{
    QMessageBox::information(this, "Cadastro de Horários", "Mensagem Teste!!");
}
