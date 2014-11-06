#ifndef TELAINICIO_H
#define TELAINICIO_H

#include <QMainWindow>
#include <telalogin.h>
#include <sobre.h>

namespace Ui {
class telainicio;
}

class telainicio : public QDialog
{
    Q_OBJECT
public:
    explicit telainicio(QWidget *parent = 0);
    ~telainicio();
