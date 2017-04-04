include(../Markdown.pri)
include(../lib/lib.pri)

QT      += testlib
TARGET   = tests
CONFIG  += console testcase
CONFIG  -= app_bundle
TEMPLATE = app

INCLUDEPATH += $${PWD}/src/ $${PDIR}/lib/src
SOURCES += \
	$${PWD}/src/test-suite.cpp \
	$${PWD}/src/main.cpp
HEADERS += \
	$${PWD}/src/test-suite.h
