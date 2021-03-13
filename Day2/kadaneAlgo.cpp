/*
    Question: Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
    
    I/O:
    N=4
    arr[4]={-1,-2,-3,-4}
    O/P: -1

    Famous Algo used: Kadane's Algo
    Time Complexity: O(N)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int kadaneAlgo(int a[], int n)
{
    int curr = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        curr += a[i];
        if (max < curr)
        {
            max = curr;
        }
        if (curr < 0)
        {
            curr = 0;
        }
    }
    return max;
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
    cout << kadaneAlgo(a, n);
}