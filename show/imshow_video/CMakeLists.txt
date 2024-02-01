#限定cmake的版本
cmake_minimum_required(VERSION 3.5.1)
 
# Enable C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
 
#产生debug，可以gdb调试
#set(CMAKE_BUILD_TYPE "Debug")
#set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb")
#set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

#产生release版本文件
#cmake -DCMAKE_BUILD_TYPE=Release .. 
#make

#工程名
project( imshow_video )

#发现opencv
find_package( OpenCV REQUIRED )

#添加需要的头文件
include_directories( ${OpenCV_INCLUDE_DIRS} )
 
#添加路径
set(SRC  
${PROJECT_SOURCE_DIR}/main.cpp 
#${PROJECT_SOURCE_DIR}/main.cpp 
#${PROJECT_SOURCE_DIR}/moving.cpp 
#${PROJECT_SOURCE_DIR}/Vibe.h 
#${PROJECT_SOURCE_DIR}/Vibe.cpp 
)

 
add_definitions(-D_GLIBCXX_USE_CXX11_ABI=1)


#声明从源建立的可执行目标  工程名+源文件
add_executable(imshow_video ${SRC})

#将应用程序与OpenCV库链接
target_link_libraries( imshow_video ${OpenCV_LIBS} )
