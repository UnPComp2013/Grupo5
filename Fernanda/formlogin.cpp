#include "formlogin.h"
#include "ui_formlogin.h"

formlogin::formlogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formlogin)
{
    ui->setupUi(this);
}

formlogin::~formlogin()
{
    delete ui;
}

void formlogin::on_btEntrarLogin_clicked()
{
    fBusca = new formbusca(this);
    fBusca->show();
}

void formlogin::on_btVoltarLogin_clicked()
{
   close();
}
