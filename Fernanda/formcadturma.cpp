#include "formcadturma.h"
#include "ui_formcadturma.h"
#include <QMessageBox>

formcadturma::formcadturma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcadturma)
{
    ui->setupUi(this);
}

formcadturma::~formcadturma()
{
    delete ui;
}
