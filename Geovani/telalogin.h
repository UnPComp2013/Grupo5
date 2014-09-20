#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>
#include <telainicial.h>

namespace Ui {
class telalogin;
}

class telalogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit telalogin(QWidget *parent = 0);
    ~telalogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::telalogin *ui;
    telainicial *tela;

};

#endif // TELALOGIN_H
