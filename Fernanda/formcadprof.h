#ifndef FORMCADPROF_H
#define FORMCADPROF_H

#include <QDialog>

namespace Ui {
class formcadprof;
}

class formcadprof : public QDialog
{
    Q_OBJECT

public:
    explicit formcadprof(QWidget *parent = 0);
    ~formcadprof();
    
private:
    Ui::formcadprof *ui;
};

#endif // FORMCADPROF_H
