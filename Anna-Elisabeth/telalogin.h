#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QMainWindow>

namespace Ui {
class telalogin;
}

class telalogin : public QMainWindow
{
    Q_OBJECT

public:
    explicit telalogin(QWidget *parent = 0);
    ~telalogin();

private:
    Ui::telalogin *ui;
};

#endif // TELALOGIN_H
