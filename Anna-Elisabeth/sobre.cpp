#include "sobre.h"
#include "ui_sobre.h"

sobre::sobre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sobre)
{
    ui->setupUi(this);
    ui->labelInfo->setText("Informações sobre quem desenvolveu o software, porque, etc,  ....");
    ui->labelVersao->setText("1.0");
    ui->labelAno->setText("2014");
}

sobre::~sobre()
{
    delete ui;
}

void sobre::on_btOk_clicked()
{
    close();
}
