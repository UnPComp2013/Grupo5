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

void telainicio::on_btSobre_clicked()
{
    sb = new sobre (this);
    sb->show();
}

void telainicio::on_btAjuda_clicked()
{
    QMessageBox::information(this, "Ajuda", "Aqui pode estar a documentação do programa. Tipo um tutorial de como usar.");
}
