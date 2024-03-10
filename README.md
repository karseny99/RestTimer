# Rest timer

### Description
 - 30-minutes Timer that could be launched when windows starts. First sound plays every 30 minutes to inform you that the time has passed, then in 2 minutes plays another sound - you may continue your work

### Compiling and Running
 - To get the program compile in windows like that:
  ``` 
  g++ -std=c++20 main.cpp -o timer -lWinmm -mwindows -o timer.exe
  ```
  - if you wanna launch timer automatically when the windows starts, simply move `timer.exe` file to startup folder with your sounds