
#include <iostream>
using namespace std;

int countDivisors(int n, int k)
{
	int count = 0, i;

	for (i = 1; i <= n; i++) {

		if (n % i == 0 && i % k == 0) {

			count++;
		}
	}

	return count;
}

int main()
{
	int n = 12, k = 3;

	cout << countDivisors(n, k);

	return 0;
}
