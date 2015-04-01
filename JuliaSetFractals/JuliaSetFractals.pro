#-------------------------------------------------
#
# Project created by QtCreator 2015-02-23T22:29:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JuliaSetFractals
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    openglwindow.cpp

HEADERS  += mainwindow.h \
    openglwindow.h

FORMS    += mainwindow.ui \
    openglwindow.ui
