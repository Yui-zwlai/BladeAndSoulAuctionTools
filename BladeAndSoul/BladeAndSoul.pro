#-------------------------------------------------
#
# Project created by QtCreator 2020-06-12T10:43:31
#
#-------------------------------------------------

QT       += core gui sql
RC_ICONS = darkness.ico
#RC_FILE += res.rc

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BladeAndSoul
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    materialcalculation.cpp \
    pricelist.cpp \
    epricelist.cpp \
    takecolor.cpp

HEADERS += \
        mainwindow.h \
    materialcalculation.h \
    pricelist.h \
    epricelist.h \
    takecolor.h

FORMS += \
        mainwindow.ui \
    materialcalculation.ui \
    pricelist.ui \
    epricelist.ui \
    takecolor.ui

RESOURCES += \
    img.qrc

DISTFILES += \
    res.rc
