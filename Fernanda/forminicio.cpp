#include "forminicio.h"
#include "ui_primeira.h"
#include <QMessageBox>


primeira::primeira(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::primeira)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/Fernanda/Desktop/agenda3.jpg"); //adicionar a pasta do qt
    ui->label_img->setPixmap(pix);
}

primeira::~primeira()
{
    delete ui;
}

void primeira::on_btSobre_clicked()
{
    QMessageBox::information(this, "Sobre o programa", "Aqui vão estar algumas informações sobre o programa. Quem desenvolvel, porque, ...");
}

void primeira::on_btAjuda_clicked()
{

    QMessageBox::information(this, "Ajuda", "Aqui pode estar a documentação do programa. Tipo um tutorial de como usar.");
}

void primeira::on_btEntrar_clicked()
{
    busca = new formulariobusca(this);
    busca->show();
}
