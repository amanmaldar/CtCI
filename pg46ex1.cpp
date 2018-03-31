// Which one is faster?The frst one does one for loop and the other one does two for loops. But then, the frst
// solution has two lines of code per for loop rather than one.

/*
Ref : CtCI Page 46 - example 1
Total Execution time would be 10000 ms. But we still call it as O(N). We skip constants. It technically has to be O(2N);
Loop 1 Execution time is:     5049.31 mS
Loop 2 Execution time is:     5034.76 mS
Total Execution time is:     10084.1 mS


O(1) means in constant time - independent of the number of items.
O(N) means in proportion to the number of items.
O(log N) means a time proportional to log(N)

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
}
  cout << endl;

  // ----------------- trial 1
auto start = chrono::high_resolution_clock::now();
for(int i=0;i<length;i++)
{
    sum += data.at(i);
	    Sleep(1000);
}

auto end = chrono::high_resolution_clock::now();
 chrono::duration<double> el = end - start;
    cout<<"Loop 1 Execution time is:     " << el.count() * 1000 << " mS " << endl;

  
  //--------------------trial 2
  
auto start1 = chrono::high_resolution_clock::now();

for(int i =0; i < length; i ++){
	    prod += data.at(i);
	    Sleep(1000);
	}

end = chrono::high_resolution_clock::now();
el = end - start1;
cout<<"Loop 2 Execution time is:     " << el.count() * 1000 << " mS " << endl;

el = end - start;
cout<<"Total Execution time is:     " << el.count() * 1000 << " mS " << endl;

return 1;
}
