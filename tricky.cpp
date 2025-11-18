#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <cstdlib> // for std::atoi
#include <math.h>
#include <queue>
#include <stack>
#include <deque>
// #define MAX  500000
using namespace std;

char s[111];
char y[111];

int arr[100010];
int f(int a, int b)
{
	// 1 not swap
	int ason, bson;
	int ac = a;
	int bc = b;

	ason = a % 10;

	bson = b % 10;

	//		cout << ason<<" bson: "<<bson;
	if (ason != bson)
		return ason < bson;

	return a < b;
}
int main(void)
{

	int n, a, b, c;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr, arr + n, f);
	for (int i = 0; i < n; i++)
	{

		cout << arr[i] << " ";
	}

	return 0;
}
