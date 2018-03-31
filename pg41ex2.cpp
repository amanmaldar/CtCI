// Which one is faster?The frst one does one for loop and the other one does two for loops. But then, the frst
// solution has two lines of code per for loop rather than one.

/*
Big O just describes the rate of increase.
For this reason, we drop the constants in runtime. An algorithm that one might have described as 0(2N) is actually O(N).


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
int length = 1000000;
// load the data in vector
int min=0;
int max=0;
for (int i =0; i < length ; i++)
{
  data.push_back((rand() % 100) + 1 );
 // cout << data.at(i) << " " ;
}
  cout << endl;

  // ----------------- trial 1
auto start = chrono::high_resolution_clock::now();
min = data.at(0), max = data.at(0);
for(int i=0;i<length;i++)
{
  if (data.at(i) < min)   min = data.at(i);
  if (data.at(i) > max)   max = data.at(i);
}
cout << "max: " << max << " min: " << min << endl; 

auto end = chrono::high_resolution_clock::now();
 chrono::duration<double> el = end - start;
    cout<<"Execution time is:     " << el.count() * 1000 << " mS " << endl;

  
  //--------------------trial 2
  
start = chrono::high_resolution_clock::now();
min = data.at(0), max = data.at(0);
for(int i=0;i<length;i++)
{
  if (data.at(i) < min)   min = data.at(i);
}
  for(int i=0;i<length;i++)
{
  if (data.at(i) > max)   max = data.at(i);
}
cout << "max: " << max << " min: " << min << endl; 

end = chrono::high_resolution_clock::now();
el = end - start;
cout<<"Execution time is:     " << el.count() * 1000 << " mS " << endl;

return 1;
}
