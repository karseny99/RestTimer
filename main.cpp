#include <Windows.h>
#include <iostream>
#include <mmsystem.h>


using namespace std;

// g++ -std=c++20 main.cpp -o timer -lWinmm -mwindows


int main() {

    system("cmd /k start");

    while(1) {
        Sleep(1000 * 60 * 30); // 30 minutes
        PlaySound(TEXT("standNotification.wav"), NULL, SND_FILENAME | SND_ASYNC);
        Sleep(1000 * 60 * 2); // 2 minutes
        PlaySound(TEXT("endNotification.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }

}
