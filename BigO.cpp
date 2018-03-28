#include <iostream>
#include <chrono>
#include <vector>
#include<time.h>
#include <Windows.h>
using namespace std;

int main(){


vector <int> data;
int length = 10;
// load the data in vector
int min=0;
int max=0;
for (int i =0; i < 10 ; i++)
{
  data.push_back((rand() % 10) + 1 );
  cout << data.at(i) << " " ;
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
//Sleep(1000);
chrono::duration<double>  el = end - start;
cout <<"Execution time is:     " << el.count() << "ello"<<" mS " << endl;

  /*
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
cout<<"Execution time is:     " << el.count() << " mS " << endl;
*/
return 1;
}
