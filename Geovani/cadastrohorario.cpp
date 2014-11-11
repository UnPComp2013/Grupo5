#include "cadastrohorario.h"
#include "ui_cadastrohorario.h"

cadastrohorario::cadastrohorario(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastrohorario)
{
    ui->setupUi(this);
}

cadastrohorario::~cadastrohorario()
{
    delete ui;
}
