#ifndef TELABUSCA_H
#define TELABUSCA_H

#include <QMainWindow>

namespace Ui {
class telabusca;
}

class telabusca : public QMainWindow
{
    Q_OBJECT

public:
    explicit telabusca(QWidget *parent = 0);
    ~telabusca();

private:
    Ui::telabusca *ui;
};

#endif // TELABUSCA_H
