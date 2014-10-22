#include "cadastrodisciplina.h"
#include "ui_cadastrodisciplina.h"

cadastrodisciplina::cadastrodisciplina(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrodisciplina)
{
    ui->setupUi(this);
}

cadastrodisciplina::~cadastrodisciplina()
{
    delete ui;
}
