#include "cadastrocurso.h"
#include "ui_cadastrocurso.h"

cadastrocurso::cadastrocurso(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cadastrocurso)
{
    ui->setupUi(this);
}

cadastrocurso::~cadastrocurso()
{
    delete ui;
}
