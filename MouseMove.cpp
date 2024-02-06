//
// Created by youzi on 2024/2/5.
//

#include "MouseMove.h"

#include <Windows.h>
#include <tchar.h>
#include <iostream>

// ���庯��ָ������
typedef int (*AgulllFunc)();
typedef int (*MachMoveFunc)(int, int);
typedef int (*LeoKickFunc)(int);
typedef int (*NimanYearsFunc)();
typedef int (*MebiuspinFunc)(int);
typedef int (*ShwajiFunc)();
typedef int64_t (*M_OpenFunc)(int);
typedef int (*M_MoveRFunc)(int64_t, int, int);
typedef int (*M_MouseWheelFunc)(int64_t, int);
// ��������ԭ����������

int main() {
    // ����DLL
// ����DLL
    HMODULE ghubDll = LoadLibrary("C:\\Users\\86159\\Desktop\\C-\\ghub_mouse.dll");
    HMODULE msdkDll = LoadLibrary("C:\\Users\\86159\\Desktop\\C-\\msdk.dll");
    if (!ghubDll || !msdkDll) {
        std::cerr << "Failed to load one or more DLLs." << std::endl;
        return 1;
    }
    // ��ȡ����ָ��
    AgulllFunc Agulll = (AgulllFunc)GetProcAddress(ghubDll, "Agulll");
    MachMoveFunc Mach_Move = (MachMoveFunc)GetProcAddress(ghubDll, "Mach_Move");
    LeoKickFunc Leo_Kick = (LeoKickFunc)GetProcAddress(ghubDll, "Leo_Kick");
    // ��������ָ���ȡ��������

    // ����ʾ������ʼ��ghub_mouse.dll
    if (Agulll) {
        int gmok = Agulll();
        std::cout << "Agulll initialization: " << gmok << std::endl;
    }

    // ����ʾ�����ƶ����
    if (Mach_Move) {
        int result = Mach_Move(100, 100); // �ƶ���(100, 100)
        std::cout << "Mach_Move result: " << result << std::endl;
    }

    // ȷ���ڳ������ǰж��DLL
    FreeLibrary(ghubDll);
    FreeLibrary(msdkDll);

    return 0;
}



