#-------------------------------------------------
#
# Project created by QtCreator 2017-04-21T19:34:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Application
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    startform.cpp \
    eleveform.cpp \
    employeform.cpp \
    classeform.cpp \
    clubform.cpp \
    EWidget/ebasewidget.cpp \
    EWidget/elevespwidget.cpp \
    EWidget/employespwidget.cpp \
    PrimitiveClasses/Eleve.cpp \
    PrimitiveClasses/Personne.cpp \
    PrimitiveClasses/Date.cpp \
    PrimitiveClasses/Employee.cpp

HEADERS  += mainwindow.h \
    startform.h \
    eleveform.h \
    employeform.h \
    classeform.h \
    clubform.h \
    EWidget/ebasewidget.h \
    EWidget/elevespwidget.h \
    EWidget/employespwidget.h \
    PrimitiveClasses/Eleve.h \
    PrimitiveClasses/Personne.h \
    PrimitiveClasses/Date.h \
    PrimitiveClasses/Employee.h

FORMS    += mainwindow.ui \
    startform.ui \
    eleveform.ui \
    employeform.ui \
    classeform.ui \
    clubform.ui \
    EWidget/ebasewidget.ui \
    EWidget/elevespwidget.ui \
    EWidget/employespwidget.ui

RESOURCES += \
    res.qrc
