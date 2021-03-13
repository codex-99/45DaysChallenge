/*
    Question:- Find the Kth Smallest element in a given array

    N = 6
    arr[] = 7 10 4 3 20 15
    K = 3
    Output : 7
    Explanation :
    3rd smallest element in the given array is 7.
*/

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    int n = r - l + 1;
    std::sort(arr, arr + n);
    // for(int i=l;i<l+n;i++){
    //     cout<<arr[i]<<endl;
    // }
    return (arr[l + k - 1]);
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

    int k;
    cin >> k;
    cout << kthSmallest(a, 0, n - 1, k) << endl;

    return 0;
}