#include "telalogin.h"
#include "ui_telalogin.h"

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
