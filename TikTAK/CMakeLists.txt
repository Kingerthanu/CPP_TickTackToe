cmake_minimum_required(VERSION 3.5)

project(TikTAK VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        square.cpp
        square.h
        bot.h
        bot.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(TikTAK
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(TikTAK SHARED
            ${PROJECT_SOURCES}
        )
    else()
        add_executable(TikTAK
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(TikTAK PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

set_target_properties(TikTAK PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(TikTAK)
endif()

# Deploy Qt libraries on Windows using windeployqt
if(WIN32)
    add_custom_command(TARGET TikTAK POST_BUILD
        COMMAND "${CMAKE_PREFIX_PATH}/bin/windeployqt.exe" --quick $<TARGET_FILE:TikTAK>
    )
endif()
