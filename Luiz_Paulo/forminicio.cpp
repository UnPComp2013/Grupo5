#include "forminicio.h"
#include "ui_forminicio.h"
#include <QMessageBox>

formInicio::formInicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formInicio)
{
    ui->setupUi(this);
}

formInicio::~formInicio()
{
    delete ui;
}

void formInicio::on_btEntrar_clicked()
{

    fLogin = new formlogin(this);
    fLogin->show();
}
