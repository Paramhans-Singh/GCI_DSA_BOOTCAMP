#include <bits/stdc++.h>
using namespace std;

void shuffleArray(int a[], int n)
{
	for (int i = 0, q = 1, k = n; i < n; i++, k++, q++)
		for (int j = k; j > i + q; j--)
			swap(a[j - 1], a[j]);
}

int main()
{
	int a[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	int n = sizeof(a) / sizeof(a[0]);

	shuffleArray(a, n / 2);

	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	return 0;
}
