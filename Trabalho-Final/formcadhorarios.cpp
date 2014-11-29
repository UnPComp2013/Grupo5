#include "formcadhorario.h"
#include "ui_formcadhorario.h"

formcadhorario::formcadhorario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadhorario)
{
    ui->setupUi(this);
}

formcadhorario::~formcadhorario()
{
    delete ui;
}
