#include "formcadturma.h"
#include "ui_formcadturma.h"
#include <QMessageBox>

formcadturma::formcadturma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadturma)
{
    ui->setupUi(this);
}

formcadturma::~formcadturma()
{
    delete ui;
}
void formcadturma::on_btCancelar_clicked()
{
    close();
}

void formcadturma::on_btLimpar_clicked()
{
    ui->cbSelectCurso->setCurrentIndex(0);
    ui->leAnoIng->setText("");
    ui->leQtAlunos->setText("");
    ui->leSala->setText("");
}

void formcadturma::on_btSalvar_clicked()
{
    QMessageBox::information(this, "Sobre dados", "Deseja salvar dados?");
}
