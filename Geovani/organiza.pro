#-------------------------------------------------
#
# Project created by QtCreator 2014-09-20T15:59:20
#
#-------------------------------------------------

QT       += core 
QT       += sql
QT       -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = organiza
TEMPLATE = app


SOURCES += main.cpp\
        telalogin.cpp \
    telainicial.cpp \
    cadastroprofessores.cpp \
    opcoes.cpp

HEADERS  += telalogin.h \
    telainicial.h \
    cadastroprofessores.h \
    opcoes.h

FORMS    += telalogin.ui \
    telainicial.ui \
    cadastroprofessores.ui \
    opcoes.ui

RESOURCES += \
    img.qrc
