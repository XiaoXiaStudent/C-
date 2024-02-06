//
// Created by youzi on 2024/2/5.
//

#include "MouseMove.h"

#include <Windows.h>
#include <tchar.h>
#include <iostream>

// 定义函数指针类型
typedef int (*AgulllFunc)();
typedef int (*MachMoveFunc)(int, int);
typedef int (*LeoKickFunc)(int);
typedef int (*NimanYearsFunc)();
typedef int (*MebiuspinFunc)(int);
typedef int (*ShwajiFunc)();
typedef int64_t (*M_OpenFunc)(int);
typedef int (*M_MoveRFunc)(int64_t, int, int);
typedef int (*M_MouseWheelFunc)(int64_t, int);
// 其他函数原型依此类推

int main() {
    // 加载DLL
// 加载DLL
    HMODULE ghubDll = LoadLibrary("C:\\Users\\86159\\Desktop\\C-\\ghub_mouse.dll");
    HMODULE msdkDll = LoadLibrary("C:\\Users\\86159\\Desktop\\C-\\msdk.dll");
    if (!ghubDll || !msdkDll) {
        std::cerr << "Failed to load one or more DLLs." << std::endl;
        return 1;
    }
    // 获取函数指针
    AgulllFunc Agulll = (AgulllFunc)GetProcAddress(ghubDll, "Agulll");
    MachMoveFunc Mach_Move = (MachMoveFunc)GetProcAddress(ghubDll, "Mach_Move");
    LeoKickFunc Leo_Kick = (LeoKickFunc)GetProcAddress(ghubDll, "Leo_Kick");
    // 其他函数指针获取依此类推

    // 调用示例：初始化ghub_mouse.dll
    if (Agulll) {
        int gmok = Agulll();
        std::cout << "Agulll initialization: " << gmok << std::endl;
    }

    // 调用示例：移动鼠标
    if (Mach_Move) {
        int result = Mach_Move(100, 100); // 移动到(100, 100)
        std::cout << "Mach_Move result: " << result << std::endl;
    }

    // 确保在程序结束前卸载DLL
    FreeLibrary(ghubDll);
    FreeLibrary(msdkDll);

    return 0;
}



