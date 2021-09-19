cmake_minimum_required(VERSION 3.20)
project(OOPExperiment)

set(CMAKE_CXX_STANDARD 14)

#遍历项目根目录下所有的 .cpp 文件
#要求所有cpp文件命名不重复，不能含有中文，不能含有‘/’等字符
file(GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable(${exe} ${file})
    message(\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
