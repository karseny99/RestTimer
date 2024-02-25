#include <Windows.h>
#include <iostream>
#include <chrono>
#include <mmsystem.h>


using namespace std;

// g++ -std=c++20 main.cpp -o timer -lWinmm -mwindows


void fallAsleep(int time) {
    auto start = std::chrono::high_resolution_clock::now();
    std::chrono::minutes duration(time);

    while(start + duration >= std::chrono::high_resolution_clock::now()) {}

}

int main() {

    system("cmd /k start");

    while(1) {
        fallAsleep(30); // minutes
        PlaySound(TEXT("4.wav"), NULL, SND_FILENAME | SND_ASYNC);
        fallAsleep(2);
        PlaySound(TEXT("2.wav"), NULL, SND_FILENAME | SND_ASYNC);
    }

}
