#include "formcadprof.h"
#include "ui_formcadprof.h"
#include <QMessageBox>

formcadprof::formcadprof(QWidget *parent) :
    QDialog(parent),

  ui(new Ui::formcadprof)
{
    ui->setupUi(this);
}

formcadprof::~formcadprof()
{
    delete ui;
}

void formcadprof::on_btCancelar_clicked()
{
    close();
}
