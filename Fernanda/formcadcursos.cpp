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

void formcadcursos::on_btCancelar_clicked()
{
    close();
}

void formcadcursos::on_btLimpar_clicked()
{
   
}


