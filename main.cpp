#include <iostream>
using namespace std;


template<size_t N>
int doSearch(int(&arr)[N], int target)
{
	int max = N - 1;
	int min = 0;
	int returnValue = -1;


	while (min <= max)
	{
		int avg = (min + max) / 2;
		if (arr[avg] < target) {
			min = avg + 1;
		}
		else if (arr[avg] > target) {
			max = avg - 1;
		}
		else if (arr[avg] == target)
		{
			return  avg;
		}

	}
	return returnValue;
}


int main()
{
	int primes[] = { 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

	int result = doSearch(primes, 47);
	cout << "Found prime at index " << result<<endl;


	system("PAUSE");
	return 0;
}
