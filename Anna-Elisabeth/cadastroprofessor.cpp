#include "cadastroprofessor.h"
#include "ui_cadastroprofessor.h"
#include <QMessageBox>

cadastroprofessor::cadastroprofessor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastroprofessor)
{
    ui->setupUi(this);
}

cadastroprofessor::~cadastroprofessor()
{
    delete ui;
}

void cadastroprofessor::on_btCancelar_clicked()
{
    close();
}

void cadastroprofessor::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leEndereco->setText("");
    ui->leCPF->setText("");
    ui->leRG->setText("");
    ui->leTelefone->setText("");
    ui->leCelular->setText("");
    ui->leEmail->setText("");
}

void cadastroprofessor::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
