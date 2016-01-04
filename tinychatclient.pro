#-------------------------------------------------
#
# Project created by QtCreator 2016-01-04T13:08:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tinychatclient
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    User.cpp

HEADERS  += mainwindow.h \
    User.h

FORMS    += mainwindow.ui
