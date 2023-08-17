#include <iostream>
#include <cmath>
#include <conio.h>
#include <windows.h>

using namespace std;

int getScreenWidth() {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(hConsole, &csbi);
  return csbi.srWindow.Right - csbi.srWindow.Left;
}

int getScreenHeight() {
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(hConsole, &csbi);
  return csbi.srWindow.Bottom - csbi.srWindow.Top;
}

int main() {
  // Get the screen size.
  int screenWidth = getScreenWidth();
  int screenHeight = getScreenHeight();

  // Calculate the aspect ratio.
  double aspectRatio = (double)screenWidth / screenHeight;

  // Create a window with the same aspect ratio as the screen.
  int windowWidth = (int)(screenHeight * aspectRatio);
  int windowHeight = screenHeight;
  int windowX = (screenWidth - windowWidth) / 2;
  int windowY = (screenHeight - windowHeight) / 2;
  
  // Create a label and position it in the center of the window.
  cout << "Hello, world!" << endl;

  // Get the handle to the console window.
  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  // Create a COORD variable to store the cursor position.
  COORD cursorPosition;
  cursorPosition.X = windowX + windowWidth / 2;
  cursorPosition.Y = windowY + windowHeight / 2;

  // Set the cursor position to the center of the window.
  SetConsoleCursorPosition(hConsole, cursorPosition);

  // Print "Hello, world!" again.
  cout << "Hello, world!" << endl;

  // Wait for the user to press a key.
  cin.get();

  return 0;
}