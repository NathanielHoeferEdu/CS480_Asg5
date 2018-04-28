TEMPLATE = app
CONFIG += console c++11
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    movie.cpp \
    statement.cpp

HEADERS += \
    transaction.h \
    movie.h \
    statement.h
