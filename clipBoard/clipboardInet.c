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

    int msg = MessageBoxA(NULL, ("%s\n Co",data), NULL, 3);

    switch (msg)
    {
    case 6:
        printf("Opening url\n");
        ShellExecute(NULL, NULL, "C:\\Program Files\\Google\\Chrome\\Application\\chrome.exe", msg, NULL, SW_HIDE);
        break;
        
    case 7:
        printf("Exiting\n");
        break;
    default:
        break;
    }


    CloseClipboard();

    return 0;
}