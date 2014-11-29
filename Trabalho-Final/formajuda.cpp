#include "formajuda.h"
#include "ui_formajuda.h"

formajuda::formajuda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formajuda)
{
    ui->setupUi(this);
}

formajuda::~formajuda()
{
    delete ui;
}

void formajuda::on_btOk_clicked()
{
    this->hide();
}
