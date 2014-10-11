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

void formlogin::on_btVoltarLogin_clicked()
{
    close();
}

void formlogin::on_btEntrarLogin_clicked()
{
    setVisible(false);
    fBusca = new formbusca(this);
    fBusca->show();
}
