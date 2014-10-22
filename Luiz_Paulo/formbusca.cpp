#include "formbusca.h"
#include "ui_formbusca.h"
#include <QMessageBox>
#include <formcadprof.h>
#include <formcadcursos.h>
#include <formcaddis.h>

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
