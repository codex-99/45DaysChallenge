/*
    Question:- Sort an array containing 0s,1s and 2s without sorting algos

    I/O:-
    N = 5
    arr[]={0 2 1 2 0}

    O/P:
    0 0 1 2 2
*/

#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    int i = 0;
    while (i < n)
    {
        if (a[i] == 0)
        {
            c0++;
        }
        if (a[i] == 1)
        {
            c1++;
        }
        if (a[i] == 2)
        {
            c2++;
        }
        i++;
    }
    i = 0;
    while (i < n)
    {
        if (i < c0)
        {
            a[i] = 0;
        }
        if (i < (c1 + c0) && i >= c0)
        {
            a[i] = 1;
        }
        if (i < (c2 + c1 + c0) && i >= (c1 + c0))
        {
            a[i] = 2;
        }
        i++;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort012(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}