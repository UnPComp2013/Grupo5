#include "formcadprof.h"
#include "ui_formcadprof.h"
#include <QMessageBox>

formcadprof::formcadprof(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadprof)
{
    ui->setupUi(this);
}

formcadprof::~formcadprof()
{
    delete ui;
}

void formcadprof::on_btCancelar_clicked()
{
    close();
}

void formcadprof::on_btLimpar_clicked()
{
    ui->leNome->setText("");
    ui->leEndereco->setText("");
    ui->leCPF->setText("");
    ui->leRG->setText("");
    ui->leTelefone->setText("");
    ui->leCelular->setText("");
    ui->leEmail->setText("");
}

void formcadprof::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
