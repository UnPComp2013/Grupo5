#include "formcadcursos.h"
#include "ui_formcadcursos.h"
#include <QMessageBox>

formcadcursos::formcadcursos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadcursos)
{
    ui->setupUi(this);
}

formcadcursos::~formcadcursos()
{
    delete ui;
}


