#include "forminicio.h"
#include "ui_forminicio.h"
#include <QMessageBox>


formInicio::formInicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::formInicio)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Fernanda/Desktop/agenda3.jpg"); //adicionar a pasta do qt
    ui->label_img->setPixmap(pix);
}

formInicio::~formInicio()
{
    delete ui;
}

void formInicio::on_btSobre_clicked()
{
    QMessageBox::information(this, "Sobre o programa", "Aqui vão estar algumas informações sobre o programa. Quem desenvolvel, porque, ...");
}

void formInicio::on_btAjuda_clicked()
{

    QMessageBox::information(this, "Ajuda", "Aqui pode estar a documentação do programa. Tipo um tutorial de como usar.");
}

void formInicio::on_btEntrar_clicked()
{
    fLogin = new formlogin(this);
    fLogin->show();
}
