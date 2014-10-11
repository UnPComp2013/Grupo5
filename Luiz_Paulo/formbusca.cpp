#include "formbusca.h"
#include "ui_formbusca.h"
#include <QMessageBox>
#include <formcadprof.h>

formbusca::formbusca(QWidget *parent) :
    QMainWindow(parent),

 ui(new Ui::formbusca)
 
{
ui->setupUi(this);
}

formbusca::~formbusca()
{
    delete ui;
}

void formbusca::on_btLimpar_clicked()
{
    ui->cbopBusca->setCurrentText("Selecione:");
    ui->textBusca->clear();
    
}

void formbusca::on_btBuscar_clicked()
{
     if(ui->cbopBusca->currentText() == "Por Professor"){
