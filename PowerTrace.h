#ifndef POWERTRACE_H
#define POWERTRACE_H

/*
 * A C++ .h file designs to trace variable
 * Copy this .h file to your directory, and include "#include "PowerTrace.h"" in your target .hpp file.
 */

// TODO 可以使用修饰符进行控制，如"N2D描述S"表示输出traceNum为2，description为描述，S表示储存为日志

#include <iostream>

#define varName(x) #x
#define printExp(exp) std::cout<<#exp<<"为:\t\t"<<(exp)<<std::endl

//trace simple variable
template<typename T>
void trace(T var, int traceNum = -1, const std::string &description = "") {
    std::cout << "*[VarName=" << varName(var) << "] ";

    if (traceNum != -1)
        std::cout << "[TraceNum=" << traceNum << "] ";

    std::cout << "[Type=" << typeid(var).name() << "] "
              << "[Value=" << var << "]";

    if (!description.empty())
        std::cout << "[Desc: " << description << "] ";

    std::cout << std::endl;
}


//trace Array variable
template<typename T>
void traceArr(T var, int traceNum = -1, const std::string &description = "") {
    std::cout << "*[ArrName=" << varName(var) << "] ";

    if (traceNum != -1)
        std::cout << "[TraceNum=" << traceNum << "] ";

    std::cout << "[Type=" << typeid(var).name() << "] "
              << "[Set={";
    for (int i = 0; i < sizeof(var) / sizeof(var[0]); i++)
        std::cout << var[i] << ", ";
    std::cout << "}]";

    if (!description.empty())
        std::cout << "[Desc: " << description << "] ";

    std::cout << std::endl;
}

#endif //POWERTRACE_H
