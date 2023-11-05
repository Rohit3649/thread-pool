#include <iostream>
#include "thread_pool_with_waiting.h"

int main()
{
	std::cout << "Thread pool with waiting \n";
	const int size = 1000;
	int* my_array = new int[size];
    std::fill(my_array, my_array + size, 1);

	long result = parallel_accumulate<int*, int>(my_array, my_array + size, 0);
	std::cout << "final sum is  - " << result << std::endl;
	return 0;
}