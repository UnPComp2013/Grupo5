#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include <QMainWindow>

namespace Ui {
class telainicial;
}

class telainicial : public QMainWindow
{
    Q_OBJECT

public:
    explicit telainicial(QWidget *parent = 0);
    ~telainicial();

private:
    Ui::telainicial *ui;
};

#endif // TELAINICIAL_H
