/*
    Question:- Check a String is pallindrome or not

    I/O:- S = 'abba'
    O/P:- 1

    I/O:- S = 'Yash'
    O/P:- 0
*/
#include <stdio.h>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int pallindrome(char s[])
{
    int i = 0, ch,
        check = 1,
        l = strlen(s);
    if (l % 2 != 0)
        ch = (l + 1) / 2;
    else
        ch = l / 2;
    while (i < ch)
    {
        if (s[i] != s[l - 1 - i])
        {
            check = 0;
            break;
        }
        else
        {
            i++;
        }
    }
    return check;
}

int main()
{
    char s[10];
    scanf("%s", &s);
    printf("%d", pallindrome(s));
}