TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        cuerda.cpp \
        general.cpp \
        instrumento.cpp \
        main.cpp \
        percusion.cpp \
        viento.cpp

HEADERS += \
    cuerda.h \
    general.h \
    instrumento.h \
    percusion.h \
    viento.h
