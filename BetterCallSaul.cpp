// Better Call Saul!
// BetterCallSaul.cpp, made by TheSystemGuy and based off of Rickroll.cpp
#include <windows.h>


int main()
{
    void HideConsole();
    {
        ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
    }
    ShellExecute(0, 0, L"https://www.youtube.com/watch?v=jeM9yRJwKl8", 0, 0, SW_SHOW);
}