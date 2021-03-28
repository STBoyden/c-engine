TEMPLATE = lib
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
TARGET = engine-windowing
QMAKE_CFLAGS += -std=c99

SOURCES += \
    window.c

HEADERS += \
    window.h

unix|win32: LIBS += -lSDL2

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../core/release/ -lengine-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../core/debug/ -lengine-core
else:unix: LIBS += -L$$OUT_PWD/../core/ -lengine-core

INCLUDEPATH += $$PWD/../core
DEPENDPATH += $$PWD/../core
