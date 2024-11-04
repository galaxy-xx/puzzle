#qt引用模块核心功能,界面,网络,串口
#QT += core gui network sql serialport widgets
QT += gui

#这是Qt5为了兼容Qt4而专门设计的
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#工程所使用的模版;app表示是应用程序;lib则表明是库
TEMPLATE=app

#临时文件存放位置
MOC_DIR         = $$PWD/temp/moc  #指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录
RCC_DIR         = $$PWD/temp/rcc  #指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
UI_DIR          = $$PWD/temp/ui   #指定rcc命令将.qrc文件转换成qrc_*.h文件的存放目录
OBJECTS_DIR     = $$PWD/temp/obj  #指定目标文件(obj)的存放目录

#指定生成的应用程序放置的目录
#DESTDIR         = bin

#指定生成的应用程序放置的目录
IDE_SOURCE_TREE = $$PWD #.pro或.pri文件所在的位置
IDE_BUILD_TREE  = $$IDE_SOURCE_TREE/../
win32:CONFIG(debug, debug|release){
    contains(DEFINES, WIN64) {
    DESTDIR = $$IDE_BUILD_TREE/_debug64
    } else {
    DESTDIR = $$IDE_BUILD_TREE/_debug86
    }
} else:win32:CONFIG(release, debug|release){
    contains(DEFINES, WIN64) {
    DESTDIR = $$IDE_BUILD_TREE/_release64
    } else {
    DESTDIR = $$IDE_BUILD_TREE/_release86
    }
}

macx:CONFIG(debug, debug|release){
    DESTDIR = $$IDE_BUILD_TREE/_debug64
} else:macx:CONFIG(release, debug|release){
    DESTDIR = $$IDE_BUILD_TREE/_release64
}

#指定生成的应用程序名和图标
TARGET   = PuzzleGame
#RC_ICONS = Hello.ico

#定义编译选项
#QT_DEPRECATED_WARNINGS表示当Qt的某些功能被标记为过时的,那么编译器会发出警告
DEFINES += QT_DEPRECATED_WARNINGS

#指定编译器选项和项目配置
CONFIG  += c++11
CONFIG  += warn_on           #告诉qmake要把编译器设置为输出警告信息的
CONFIG  += precompile_header #可以在项目中使用预编译头文件的支持

#预编译头文件路径
#PRECOMPILED_HEADER = $$PWD/stable.h

##disable C4819 warning
#win32:QMAKE_CXXFLAGS_WARN_ON += -wd4819
#win32:QMAKE_CXXFLAGS += /FS
##win32:QMAKE_CXXFLAGS += /utf-8
##避免VC编译器关于fopen等应使用fopen_s的安全警告
#win32:DEFINES += _CRT_SECURE_NO_WARNINGS

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    help.cpp \
    src/DlgPlaying.cpp \
    src/main.cpp \
#    src/dlgplay.cpp \
    src/DlgMenu.cpp \
    src/play4x4.cpp \
    src/play8x8.cpp \
    src/s8number.cpp

HEADERS += \
    help.h \
    src/DlgPlaying.h \
#    src/dlgplay.h \
    src/DlgMenu.h \
    src/play4x4.h \
    src/play8x8.h \
    src/s8number.h

FORMS += \
    help.ui \
    src/DlgPlaying.ui \
#    src/dlgplay.ui \
    src/DlgMenu.ui \
    src/play4x4.ui \
    src/play8x8.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    $$PWD\res\img.qrc
