#include <windows.h>
#include <iostream>

void clickMouseAtPosition(int x, int y) {
    INPUT input = { 0 };
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN;
    input.mi.dx = x * (65535 / GetSystemMetrics(SM_CXSCREEN));
    input.mi.dy = y * (65535 / GetSystemMetrics(SM_CYSCREEN));
    SendInput(1, &input, sizeof(INPUT));
    
    ZeroMemory(&input, sizeof(INPUT));
    input.type = INPUT_MOUSE;
    input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP;
    input.mi.dx = x * (65535 / GetSystemMetrics(SM_CXSCREEN));
    input.mi.dy = y * (65535 / GetSystemMetrics(SM_CYSCREEN));
    SendInput(1, &input, sizeof(INPUT));
}

int main() {
    POINT cursorPos;
    GetCursorPos(&cursorPos);
    
    int x = cursorPos.x;
    int y = cursorPos.y;
    

    while(1 == 1){

    clickMouseAtPosition(x, y);
    Sleep(700);
    };
    return 0;
}
