#include <Windows.h>
#include <stdio.h>

BOOL WINAPI DllMain(HINSTANCE h, DWORD reason, LPVOID reserved){
    if (reason == DLL_PROCESS_ATTACH) {
        printf("Hello from Cool Dll");
    }
    return TRUE;
}