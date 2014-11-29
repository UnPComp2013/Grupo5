#ifndef FORMAJUDA_H
#define FORMAJUDA_H

#include <QDialog>

namespace Ui {
class formajuda;
}

class formajuda : public QDialog
{
    Q_OBJECT

public:
    explicit formajuda(QWidget *parent = 0);
    ~formajuda();

private slots:
    void on_btOk_clicked();

private:
    Ui::formajuda *ui;
};

#endif // FORMAJUDA_H
