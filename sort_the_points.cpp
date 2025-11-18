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

class c
{
public:
    int x;
    int y;
};

c arr[100010];
c var;

int f(c a, c b)
{

    int s1 = a.x + a.y;
    int s2 = b.x + b.y;

    if (s1 != s2)
        return s1 < s2;
    return a.x < b.x;
}
int main(void)
{

    int n, a, b, c, i = 0;

    while (cin >> a >> b)
    {
        var.x = a;
        var.y = b;
        arr[i] = var;
        i++;
    }

    sort(arr, arr + i, f);
    int j = 0;
    while (j != i)
    {
        cout << arr[j].x << " " << arr[j].y << endl;
        j++;
    }

    return 0;
}
