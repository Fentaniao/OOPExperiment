cmake_minimum_required(VERSION 3.20)
project(OOPExperiment)

set(CMAKE_CXX_STANDARD 14)


#添加目录
include_directories(.)

#支持多文件分别编译运行和GTest
message("<< Support exes & GTest: ")
set(googleTestDir ./googletest)

#Add the google test subdirectory
add_subdirectory(${googleTestDir})
#include googletest/include dir
include_directories(${googleTestDir}/googletest/include)
#include the googlemock/include dir
include_directories(${googleTestDir}/googlemock/include)

#搜索路径下的文件并添加至列表list，列表名为SOURCE_FILE
file(GLOB_RECURSE files *.cpp)
#遍历项目根目录下所有的 .cpp 文件
#要求所有cpp文件命名不重复，不能含有中文，不能含有‘/’等字符
foreach (file ${files})
    #从绝对路径中获取相对路径
    file(RELATIVE_PATH path "${CMAKE_BINARY_DIR}" "${file}")
    #获取文件名
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${path})
    #添加
    add_executable(${exe} ${path})
    target_link_libraries(${exe} gtest gtest_main)
    target_link_libraries(${exe} gmock gmock_main)
    #发送完成消息
    message(\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()