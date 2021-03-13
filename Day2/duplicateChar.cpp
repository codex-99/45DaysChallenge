/*
    Question:- Print count of duplicate in a string.
    
    I/O:- S = 'test string'
    O/P:-
        s, count = 2
        t, count = 3 

    Data Structure/Technique used: Hashmap/Hash Table/Hashing
*/

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void print_duplicate(string S)
{
    unordered_map<char, int> hash;
    int len = S.length();
    for (auto &ch : S)
    {
        hash[ch]++;
    }

    for (auto x : hash)
    {
        if (x.second > 1)
        {
            cout << x.first << ", count = " << x.second << endl;
        }
    }
}

int main()
{
    string s;
    getline(cin, s); // To get whitespace as an input use getline(cin, string_name) method.
    print_duplicate(s);
}