TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    ellipse.cpp \
    figure.cpp \
    lineclass.cpp \
    rectangle.cpp \
    zeichnung.cpp

HEADERS += \
    ellipse.hpp \
    figure.hpp \
    lineclass.hpp \
    rectangle.hpp \
    zeichnung.hpp
