cmake_minimum_required(VERSION 3.10)
project(ReactionGame)

# Настройки компилятора
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Настройка wxWidgets
set(wxWidgets_ROOT_DIR "C:/wxWidgets-3.2.8")
find_package(wxWidgets REQUIRED COMPONENTS core base adv)
include(${wxWidgets_USE_FILE})

# Список исходных файлов
set(SOURCE_FILES
    src/App.cpp
    src/MainFrame.cpp
    src/ReactionGame.cpp
)

# Создание исполняемого файла
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Настройка путей для заголовков
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${wxWidgets_INCLUDE_DIRS}
)

# Подключение библиотек
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

# Для статической линковки в MinGW
if(MINGW)
    target_link_options(${PROJECT_NAME} PRIVATE
        -static
        -static-libgcc
        -static-libstdc++
    )
endif()