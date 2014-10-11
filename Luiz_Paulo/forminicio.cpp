#include "forminicio.h"
#include "ui_forminicio.h"
#include <QMessageBox>

formInicio::formInicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formInicio)
{
    ui->setupUi(this);
}
