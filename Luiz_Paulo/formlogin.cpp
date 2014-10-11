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
