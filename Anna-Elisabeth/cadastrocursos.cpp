#include "cadastrocursos.h"
#include "ui_cadastrocursos.h"

cadastrocursos::cadastrocursos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastrocursos)
{
    ui->setupUi(this);
}

cadastrocursos::~cadastrocursos()
{
    delete ui;
}
