#include "opcoes.h"
#include "ui_opcoes.h"

opcoes::opcoes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::opcoes)
{
    ui->setupUi(this);
}

opcoes::~opcoes()
{
    delete ui;
}

void opcoes::on_pushButton_3_clicked()
{
    close();
}
