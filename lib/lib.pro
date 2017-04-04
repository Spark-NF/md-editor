include(../Markdown.pri)

TEMPLATE = lib
TARGET = lib
CONFIG += staticlib

INCLUDEPATH += $${PWD}/src
HEADERS += \
	$${PWD}/src/logger.h
SOURCES += \
	$${PWD}/src/logger.cpp
