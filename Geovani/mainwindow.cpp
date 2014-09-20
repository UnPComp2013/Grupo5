#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionIncluir_3, SIGNAL(triggered()),this,SLOT(Incluir()));

    ui->frame_InclusaoProf->setVisible(false);
    ui->sobreprograma->setVisible(false);
    ui->cadastrodisciplina->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Incluir()
{
    ui->frame_InclusaoProf->setVisible(true);
    QMessageBox::information(this,"Cadastrado com sucesso!!","Foi realizado o cadastro");
}


void MainWindow::setar_sobre()
{
    ui->actionSobre->changed(ui->sobreprograma->setVisible(true););

}

void MainWindow::clicar()
{
    conect(ui->actionSobre,SIGNAL(clicked()),this,SLOT(QWidgetWindow());
}


void MainWindow::on_cadastrodisciplina_activated(const QModelIndex &index)
{
   conect(ui->lineEdit_2,SIGNAL(clcked()),this,SLOT(setVisible(true));
}
