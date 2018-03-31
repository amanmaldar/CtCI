 // This is recursion example fibonacci 1 1 2 3 5 8 13
// ref - https://www.youtube.com/watch?v=zg-ddPbzcKM

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
 /*   if (x == 0)   // if my series starts with 1, return 1. See following if condition
        return 0;

    if (x == 1)
        return 1; */
    if (x < 2)
      return 1;
    else
      return fib(x-1)+fib(x-2);
}

int main() {

int i = 0;
//numberFunction(i);
cout <<  "ans: " << fib(5) << endl; 

return 0;
}
