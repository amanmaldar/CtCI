// This is recursion example

#include <iostream>
#include <chrono>

#include<time.h>
#include <Windows.h>
using namespace std;


int f(int n) {
	if (n <= 1) {
		return 1;
	   }
	  Sleep(1000);
	  return f(n - 1) + f(n - 1);
}


int main(){
	auto start = chrono::high_resolution_clock::now();

	f(2);
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> el = end - start;
    
	return 1;
}
