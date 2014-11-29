#ifndef FORMSOBRE_H
#define FORMSOBRE_H

#include <QDialog>

namespace Ui {
class formsobre;
}

class formsobre : public QDialog
{
    Q_OBJECT

public:
    explicit formsobre(QWidget *parent = 0);
    ~formsobre();

private slots:
    void on_btOk_clicked();

private:
    Ui::formsobre *ui;
};

#endif // FORMSOBRE_H
