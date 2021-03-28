TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CFLAGS += -std=c99

SOURCES += \
        main.c

INCLUDEPATH += $$PWD/../windowing
DEPENDPATH += $$PWD/../windowing

unix|win32: LIBS += -lSDL2

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../core/release/ -lengine-core
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../core/debug/ -lengine-core
else:unix: LIBS += -L$$OUT_PWD/../core/ -lengine-core

INCLUDEPATH += $$PWD/../core
DEPENDPATH += $$PWD/../core

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../windowing/release/ -lengine-windowing
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../windowing/debug/ -lengine-windowing
else:unix: LIBS += -L$$OUT_PWD/../windowing/ -lengine-windowing

INCLUDEPATH += $$PWD/../windowing
DEPENDPATH += $$PWD/../windowing
