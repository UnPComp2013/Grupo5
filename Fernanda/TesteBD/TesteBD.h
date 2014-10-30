#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <Qfileinfo.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QSqlDatabase mydb;

    bool conOpen(){
        mydb = QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:/Users/Fernanda/Desktop/Banco QT/teste.db");
        if(!mydb.open()){
            qDebug()<<("Falha na conexão.");
            return false;

        }else{
            qDebug()<<("Conectou!!!!:D");
            return true;
        }
    }
    void conClose(){
        mydb.close();
        mydb.removeDatabase(QSqlDatabase::defaultConnection);
    }

private slots:
    void on_btSalvar_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
