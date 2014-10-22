#include "formcaddis.h"
#include "ui_formcaddis.h"
#include <QMessageBox>

formcaddis::formcaddis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formcaddis)

{
    ui->setupUi(this);
}

formcaddis::~formcaddis()
{
    delete ui;
}

void formcaddis::on_btCancelar_clicked()
{
    close();
}
