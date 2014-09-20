#include "telainicial.h"
#include "ui_telainicial.h"

telainicial::telainicial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::telainicial)
{
    ui->setupUi(this);
}

telainicial::~telainicial()
{
    delete ui;
}
