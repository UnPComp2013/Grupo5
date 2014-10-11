#include "formcadprof.h"
#include "ui_formcadprof.h"
#include <QMessageBox>

formcadprof::formcadprof(QWidget *parent) :
    QDialog(parent),

  ui(new Ui::formcadprof)
{
    ui->setupUi(this);
}
