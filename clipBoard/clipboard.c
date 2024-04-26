#include <Windows.h>
#include <stdio.h>
#include <wininet.h>
#include <string.h>


int main() {
    if (!OpenClipboard(NULL)) {
        return 1;
    }

    HANDLE data = GetClipboardData(CF_TEXT);
    if (data == NULL) {
        CloseClipboard();
        return 1;
    }

    int test = MessageBoxA(NULL, ("%s\n Co",data), NULL, 3);

    switch (test)
    {
    case 6:
        printf("Yes\n");
        break;
    case 7:
        printf("No\n");
        break;
    default:
        break;
    }

    HINTERNET InternetOpenA(
        [in] LPCSTR lpszAgent,
        [in] DWORD  dwAccessType,
        [in] LPCSTR lpszProxy,
        [in] LPCSTR lpszProxyBypass,
        [in] DWORD  dwFlags
    );

    CloseClipboard();

    return 0;
}