TEMPLATE = app
CONFIG += console c++11
CONFIG += c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    movie.cpp \
    statement.cpp \
    transaction.cpp \
    customer.cpp

HEADERS += \
    movie.h \
    statement.h \
    transaction.h \
    customer.h
