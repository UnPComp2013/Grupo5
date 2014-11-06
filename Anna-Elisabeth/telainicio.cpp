#include "telainicio.h"
#include "ui_telainicio.h"
#include <QMessageBox>
telainicio::telainicio(QWidget *parent) :
     QDialog(parent),
    ui(new Ui::telainicio)
{
    ui->setupUi(this);
}
telainicio::~telainicio()
{
    delete ui;
}
void telainicio::on_btEntrar_clicked()
{

    login = new telalogin(this);
    login->show();
}
