cmake_minimum_required(VERSION 3.14)

project(matsya-texteditor LANGUAGES CXX)


set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 COMPONENTS Core Quick REQUIRED)
find_package(KF6SyntaxHighlighting)

set(PROJECT_SOURCES
        src/main.cpp
        src/documenthandler.cpp
        src/highlightmodel.cpp
        src/texteditor.cpp
        qml.qrc
)

add_executable(matsya-texteditor
  ${PROJECT_SOURCES}
)

target_link_libraries(matsya-texteditor
  PRIVATE
  Qt6::Core
  Qt6::Quick
  KF6::SyntaxHighlighting
  )
install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION /usr/bin)

install(FILES
    matsya-texteditor.desktop
    DESTINATION /usr/share/applications/
    COMPONENT Runtime
)
