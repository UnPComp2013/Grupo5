#include "formsobre.h"
#include "ui_formsobre.h"

formsobre::formsobre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formsobre)
{
    ui->setupUi(this);
    ui->labelInfo->setText("Informações sobre quem desenvolveu o software, porque, etc,  ....");
    ui->labelVersao->setText("1.0");
    ui->labelAno->setText("2014");
}

formsobre::~formsobre()
{
    delete ui;
}

void formsobre::on_btOk_clicked()
{
    this->hide();
}
