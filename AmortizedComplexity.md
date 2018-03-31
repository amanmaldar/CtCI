Amortized complexity is the total expense per operation, evaluated over a sequence of operations.

The idea is to guarantee the total expense of the entire sequence, while permitting individual operations 
to be much more expensive than the amortized cost.

Example:
The behavior of C++ std::vector<>. When push_back() increases the vector size above its pre-allocated value,
it doubles the allocated length.

So a single push_back() may take O(N) time to execute (as the contents of the array are copied to the new memory allocation).

However, because the size of the allocation was doubled, the next N-1 calls to push_back() will each take O(1) time to execute. 
So, the total of N operations will still take O(N) time; thereby giving push_back() an amortized cost of O(1) per operation.

ref- https://stackoverflow.com/questions/15079327/amortized-complexity-in-laymans-terms?
utm_medium=organic&utm_source=google_rich_qa&utm_campaign=google_rich_qa
