#ifndef POWERTRACE_H
#define POWERTRACE_H

/**
 * <h1>PowerTrace</h1>
 * <p>A C++ head file designs to trace variable
 * <hr />
 * <h2>Usage</h2>
 * <p>Copy this .h file to your project directory, and include <b><code>#include "PowerTrace.h"</code></b> in your target .cpp file.
 * <h2>Copyright</h2>
 * @author      Fentaniao
 * @version       2021/10/19
 */

// TODO 可以考虑使用修饰符进行控制，如"N2D描述S"表示输出traceNum为2，description为描述，S表示储存为日志

#include <iostream>

#define varName(x) #x
#define printExp(exp) cout<<#exp<<"为:\t\t"<<(exp)<<endl

using namespace std;

//trace simple variable
template<typename T>
void trace(T var, int traceNum = -1, const string &description = "") {
    cout << "TRACE[VarName=" << varName(var) << "] ";

    if (traceNum != -1)
        cout << "[TraceNum=" << traceNum << "] ";

    cout << "[Type=" << typeid(var).name() << "] "
         << "[Value=" << var << "]";

    if (!description.empty())
        cout << "[Desc: " << description << "] ";

    cout << endl;
}


//trace Array variable
template<typename T>
void traceArr(T var, int traceNum = -1, const string &description = "") {
    cout << "TRACE[ArrName=" << varName(var) << "] ";

    if (traceNum != -1)
        cout << "[TraceNum=" << traceNum << "] ";

    cout << "[Type=" << typeid(var).name() << "] "
         << "[Set={";
    for (int i = 0; i < sizeof(var) / sizeof(var[0]); i++)
        cout << var[i] << ", ";
    cout << "}]";

    if (!description.empty())
        cout << "[Desc: " << description << "] ";

    cout << endl;
}

#endif //POWERTRACE_H
