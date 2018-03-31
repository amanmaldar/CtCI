// Which one is faster?The frst one does one for loop and the other one does two for loops. But then, the frst
// solution has two lines of code per for loop rather than one.

/*
max: 100 min: 1
Execution time is:     27.107 mS
max: 100 min: 1
Execution time is:     27.476 mS

*/

#include <iostream>
#include <chrono>
#include <vector>
#include<time.h>
#include <Windows.h>
using namespace std;

int main(){


vector <int> data;
int length = 5;
// load the data in vector
int sum=0;
int prod=0;
for (int i =0; i < length ; i++)
{
  data.push_back((rand() % 100) + 1 );
 // cout << data.at(i) << " " ;
}
  cout << endl;

  // ----------------- trial 1
auto start = chrono::high_resolution_clock::now();
for(int i=0;i<length;i++)
{
    sum += data.at(i);
	    Sleep(1);
}

auto end = chrono::high_resolution_clock::now();
 chrono::duration<double> el = end - start;
    cout<<"Execution time is:     " << el.count() * 1000 << " mS " << endl;

  
  //--------------------trial 2
  
start = chrono::high_resolution_clock::now();

for(int i =0; i < length; i ++){
	    prod += data.at(i);
	    Sleep(1);
	}

end = chrono::high_resolution_clock::now();
el = end - start;
cout<<"Execution time is:     " << el.count() * 1000 << " mS " << endl;

return 1;
}
