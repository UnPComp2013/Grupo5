#ifndef FORMCADDIS_H
#define FORMCADDIS_H

#include <QDialog>

namespace Ui {
class formcaddis;
}

class formcaddis : public QDialog
{
    Q_OBJECT

public:
    explicit formcaddis(QWidget *parent = 0);
    ~formcaddis();
