#include <iostream>
#include <chrono>
#include <vector>
using namespace std;

int main(){


vector <int> data;
int length = 10;
// load the data in vector
int min=0;
int max=0;
for (int i =0; i < 10 ; i++)
{
  data.push_back((rand() % 5) + 1 );
  cout << data.at(i) << " " ;
}
  cout << endl;

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
cout<<"Execution time is:     " << el.count() << " mS " << endl;


return 0;
}
