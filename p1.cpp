/*
1. Write a program to compute the sum of the first o tenns of the followiog series:
S = I - I / (2" 2) + I / (3" 3) - ... I / (o "n)
where " is exponentiation.
The number of terms n is to be taken from user through command line. If command line
argument is not found then prompt the user to enter the value of n.
*/

#include <bits/stdc++.h>
using namespace std;

double Series(int n)
{
    int i;
    double sum = 0.0;
    for (i = 1; i <= n; ++i)
    {
        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int n;
        cout << "Enter your number : ";
        cin >> n;
        cout << Series(n);
    }

    int i;
    double sum = 0.0;
    char *n = argv[1];

    for (i = 1; i <= (*n - 48); ++i) // because ASCII of '0' is 48;
    {

        if (i % 2 == 0)
            sum -= (1 / pow(i, i));
        else
            sum += (1 / pow(i, i));
    }

    cout << sum;

    return 0;
}