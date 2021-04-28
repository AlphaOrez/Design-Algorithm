#include <iostream>
using namespace std;
void getMedian(int ar1[], int ar2[], int n)
{
	int j = 0;
	int i = n - 1;


	while (ar1[i] > ar2[j] && j < n && i > -1)
	{
		int x = ar1[i--];
		ar1[i--] = ar2[j++];
		ar2[j++] = x;

	}	
	cout << "Median is " << (ar1[n - 1]) << "-" << ar2[0];
}


int main()
{
	int ar1[] = { 2, 60, 69, 70, 80 };
	int ar2[] = { 85, 86, 86, 87, 100 };

	int n1 = sizeof(ar1) / sizeof(ar1[0]);
	int n2 = sizeof(ar2) / sizeof(ar2[0]);
	getMedian(ar1, ar2, n1);

	return 0;
}
