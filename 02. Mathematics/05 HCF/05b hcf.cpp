#include<bits/stdc++.h>
using namespace std;

/*
Euclid's Theorem:
If we subtract a smaller number from a larger
(we reduce a larger number), GCD doesn’t change.
So if we keep subtracting repeatedly the larger of two,
we end up with GCD.
*/

//Time: O(log(min(a,b)))
int hcf(int a, int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	return a;
}

int main()
{
	int a1 = 13, b1 = 17;
	int a2 = 100, b2 = 200;

	cout << hcf(a1, b1) << endl;
	cout << hcf(a2, b2) << endl;
	return 0;
}