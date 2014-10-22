#ifndef CADASTRODISCIPLINA_H
#define CADASTRODISCIPLINA_H

#include <QMainWindow>

namespace Ui {
class cadastrodisciplina;
}

class cadastrodisciplina : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadastrodisciplina(QWidget *parent = 0);
    ~cadastrodisciplina();

private:
    Ui::cadastrodisciplina *ui;
};

#endif // CADASTRODISCIPLINA_H
