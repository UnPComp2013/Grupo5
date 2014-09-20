#include "telalogin.h"
#include "ui_telalogin.h"
#include "telainicial.h"

telalogin::telalogin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telalogin)
{
    ui->setupUi(this);
}

telalogin::~telalogin()
{
    delete ui;
}

void telalogin::on_pushButton_clicked()
{
    setVisible(false);
    tela=new telainicial(this);
    tela->show();
}
