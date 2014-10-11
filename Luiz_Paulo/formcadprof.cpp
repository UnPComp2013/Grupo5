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
