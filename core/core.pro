TEMPLATE = lib
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS += -std=c99
TARGET = engine-core

SOURCES += \
    point2d.c \
    rect.c

HEADERS += \
    point2d.h \
    rect.h \
    types.h
