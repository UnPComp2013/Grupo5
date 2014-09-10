#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionIncluir_3, SIGNAL(triggered()),this,SLOT(Incluir()));

    ui->frame_InclusaoProf->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//A classe Incluir() deixa visivel a janela em que aparecerá as caixas de texto para realizar o cadastro do professor.


void MainWindow::Incluir()
{
    ui->frame_InclusaoProf->setVisible(true);
    //QMessageBox::information(this,"Cadastrado com sucesso!!","Foi realizado o cadastro");
}

//A classe on_sobre_widget_clicked() mostrará uma janela com informações na aba SOBRE.

void MainWindow::on_sobre_widget_clicked()
{
    conect(ui->actionSobre,SIGNAL(clicked()),this,SLOT(QWidgetWindow());
}
