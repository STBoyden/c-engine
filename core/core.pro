TEMPLATE = lib
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS += -std=c99

SOURCES += \
    rect.c \
    vector2d.c

HEADERS += \
    rect.h \
    types.h \
    vector2d.h
