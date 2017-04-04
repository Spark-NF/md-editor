PDIR = $${PWD}

CONFIG(debug, debug|release) {
	DESTDIR = build/debug
}
CONFIG(release, debug|release) {
	DESTDIR = build/release
}
OBJECTS_DIR = $$DESTDIR/obj
MOC_DIR     = $$DESTDIR/moc
RCC_DIR     = $$DESTDIR/qrc
UI_DIR      = $$DESTDIR/ui

CONFIG += plugin c++11
CODECFORTR = UTF-8

# Code coverage
@
T = $$(TRAVIS)
!isEmpty(T) {
        unix:!macx {
                QMAKE_CXXFLAGS -= -O2
                QMAKE_CXXFLAGS_RELEASE -= -O2

                LIBS += -lgcov
                QMAKE_CXXFLAGS += -g -fprofile-arcs -ftest-coverage -O0 --coverage
        }
}
@
