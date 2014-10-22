#ifndef TELAINICIO_H
#define TELAINICIO_H

#include <QDialog>

namespace Ui {
class telainicio;
}

class telainicio : public QDialog
{
    Q_OBJECT

public:
    explicit telainicio(QWidget *parent = 0);
    ~telainicio();

private:
    Ui::telainicio *ui;
};

#endif // TELAINICIO_H
