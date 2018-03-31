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

int fib(int x) {
    if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
}

int main() {

int i = 0;
//numberFunction(i);
cout <<  "ans: " << fib(10) << endl; 

return 0;
}
