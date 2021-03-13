/*
    Question:- Given an array (or string), the task is to reverse the array/string.

    Input  : arr[] = {1, 2, 3}
    Output : arr[] = {3, 2, 1}

    Input :  arr[] = {4, 5, 1, 2}
    Output : arr[] = {2, 1, 5, 4}
*/

#include <iostream>
using namespace std;

string reverseWord(string str)
{

    int n = str.length();
    string str1 = "";
    for (int i = n - 1; i >= 0; i--)
    {
        str1 += str[i];
        //cout<<str1;
    }
    return (str1);
}

int main()
{
    string s;
    cin >> s;
    cout << reverseWord(s) << endl;
    return 0;
}
