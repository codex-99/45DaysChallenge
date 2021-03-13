/*
    Question:- Union of two arrays. Return the number of distinct elements and one count of repetitions.

    I/O:
        2 6
        4 4
        0 0 1 2 3 4
    O/p:
        5
*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    unordered_map<int, int> hash;
    int count = n;
    for (int i = 0; i < n; i++)
    {
        if (hash[a[i]] > 0)
        {
            count--;
        }
        else
        {
            hash[a[i]]++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (hash[b[i]] > 1)
        {
            count--;
        }
        if (hash[b[i]] == 0)
        {
            count++;
            hash[b[i]]++;
        }
    }
    return count;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    cout << endl
         << doUnion(a, n, b, m) << endl;
    return 0;
}