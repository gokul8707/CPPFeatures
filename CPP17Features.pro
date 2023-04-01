TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        ifconstexprtest.cpp \
        ifelseandswitchcaseinitializer.cpp \
        main.cpp \
        stdclamptest.cpp \
        stringviewtest.cpp

HEADERS += \
    ifconstexprtest.h \
    ifelseandswitchcaseinitializer.h \
    stdclamptest.h \
    stringviewtest.h
