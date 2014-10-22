#include "telainicio.h"
#include "ui_telainicio.h"

telainicio::telainicio(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telainicio)
{
    ui->setupUi(this);
}

telainicio::~telainicio()
{
    delete ui;
}
