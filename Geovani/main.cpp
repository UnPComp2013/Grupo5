#include "telalogin.h"
#include <QApplication>

#include <QtSql/QSql>
#include <QtDebug>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     QString servername = "LOCALHOST\\SQLEXPRESS";
    QString dbname = "organiza";
    
     QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setConnectOptions();
    telalogin w;
    
    telalogin w;
    w.show();

    return a.exec();
}
