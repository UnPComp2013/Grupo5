#ifndef CADASTROHORARIO_H
#define CADASTROHORARIO_H

#include <QMainWindow>

namespace Ui {
class cadastrohorario;
}

class cadastrohorario : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastrohorario(QWidget *parent = 0);
    ~cadastrohorario();

private:
    Ui::cadastrohorario *ui;
};

#endif // CADASTROHORARIO_H
