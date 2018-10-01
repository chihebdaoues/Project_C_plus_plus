#-------------------------------------------------
#
# Project created by QtCreator 2017-04-22T03:45:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EleveWidget
TEMPLATE = app


SOURCES += main.cpp\
        elevewidget.cpp \
    EBaseWidget/ebasewidget.cpp

HEADERS  += elevewidget.h \
    EBaseWidget/ebasewidget.h

FORMS    += elevewidget.ui \
    EBaseWidget/ebasewidget.ui
