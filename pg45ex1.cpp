// This is recursion example

#include <iostream>
#include <chrono>

#include<time.h>
#include <Windows.h>
using namespace std;


void numberFunction(int i) {
  cout << "The number is: " << i << endl;
  i++;
  if(i<10) {
    numberFunction(i);
  }
}

int main() {

int i = 0;
numberFunction(i);

return 0;
}
