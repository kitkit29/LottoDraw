TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    drawmachine.cpp \
    _6_45.cpp \
    _6_42.cpp \
    _6_49.cpp \
    _6_55.cpp \
    _6digit.cpp \
    _4digit.cpp \
    _2digit.cpp \
    _3digit.cpp

HEADERS += \
    drawmachine.h \
    _6_45.h \
    _6_42.h \
    _6_49.h \
    _6_55.h \
    _6digit.h \
    _4digit.h \
    _2digit.h \
    _3digit.h

*-g++:QMAKE_CXXFLAGS += "-std=c++0x"
