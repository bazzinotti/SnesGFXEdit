#############################################################################
# Makefile for building: SNESGfxEdit.app/Contents/MacOS/SNESGfxEdit
# Generated by qmake (2.01a) (Qt 4.7.4) on: Tue May 29 22:09:47 2012
# Project:  SNESGfxEdit.pro
# Template: app
# Command: /opt/local/bin/qmake -spec /opt/local/share/qt4/mkspecs/macx-xcode -o SNESGfxEdit.xcodeproj/project.pbxproj SNESGfxEdit.pro
#############################################################################

MOC       = /opt/local/bin/moc
UIC       = /opt/local/bin/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
INCPATH       = -I/opt/local/share/qt4/mkspecs/macx-xcode -I. -I. -I. -I/opt/local/include/QtGui -I/opt/local/include/QtCore -I/opt/local/include -I/usr/local/include -I/System/Library/Frameworks/CarbonCore.framework/Headers
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compilers: ./moc_editor.cpp ./moc_mainwindow.cpp ./moc_tileview.cpp ./qrc_mdieditor.cpp
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_editor.cpp moc_mainwindow.cpp moc_tileview.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_editor.cpp moc_mainwindow.cpp moc_tileview.cpp
moc_editor.cpp: editor.h
	/opt/local/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ editor.h -o moc_editor.cpp

moc_mainwindow.cpp: mainwindow.h
	/opt/local/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ mainwindow.h -o moc_mainwindow.cpp

moc_tileview.cpp: tile.h \
		tileview.h
	/opt/local/bin/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ tileview.h -o moc_tileview.cpp

compiler_rcc_make_all: qrc_mdieditor.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_mdieditor.cpp
qrc_mdieditor.cpp: mdieditor.qrc
	/opt/local/bin/rcc -name mdieditor mdieditor.qrc -o qrc_mdieditor.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 
