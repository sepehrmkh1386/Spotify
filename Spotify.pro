QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abstractrepository.cpp \
    account.cpp \
    accountrepository.cpp \
    addalbumdialog.cpp \
    addsongdialog.cpp \
    album.cpp \
    albumdetailsdialog.cpp \
    albumrepository.cpp \
    albumviewerdialog.cpp \
    artist.cpp \
    artistdashboard.cpp \
    artistrepository.cpp \
    authenticationservice.cpp \
    listener.cpp \
    listenerdashboard.cpp \
    listenerrepository.cpp \
    main.cpp \
    mainwindow.cpp \
    playlist.cpp \
    playlistrepository.cpp \
    repositorymanager.cpp \
    selectsongdialog.cpp \
    song.cpp \
    songrepository.cpp

HEADERS += \
    abstractrepository.h \
    account.h \
    accountrepository.h \
    addalbumdialog.h \
    addsongdialog.h \
    album.h \
    albumdetailsdialog.h \
    albumrepository.h \
    albumviewerdialog.h \
    artist.h \
    artistdashboard.h \
    artistrepository.h \
    authenticationservice.h \
    listener.h \
    listenerdashboard.h \
    listenerrepository.h \
    mainwindow.h \
    playlist.h \
    playlistrepository.h \
    repositorymanager.h \
    selectsongdialog.h \
    song.h \
    songrepository.h

FORMS += \
    addalbumdialog.ui \
    addsongdialog.ui \
    albumdetailsdialog.ui \
    albumviewerdialog.ui \
    artistdashboard.ui \
    listenerdashboard.ui \
    mainwindow.ui \
    selectsongdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
