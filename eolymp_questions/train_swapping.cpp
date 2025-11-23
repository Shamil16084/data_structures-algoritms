

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <queue>
#include <stack>
#include <deque>
// #define MAX  50000000
using namespace std;

int arr[11111];
int main(void)
{

    int n, x, cnt = 0, j;
    cin >> n;

    while (n--)
    {
        cin >> x;
        cnt = 0;

        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < x; i++)
        {
            for (int j = i; j < x; j++)
            {
                if (arr[i] > arr[j])
                    cnt++;
            }
        }

        cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
    }

    return 0;
}
