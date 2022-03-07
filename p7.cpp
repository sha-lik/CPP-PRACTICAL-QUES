// 7. Write a program to calculate GCD of two numbers (i) with recursion (ii) without
// recursion.

#include <bits/stdc++.h>
using namespace std;
int gcd_recursion(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd_recursion(a - b, b);
    else
        return gcd_recursion(a, b - a);
}
int gcd_without_recursion(int a, int b)
{
    int gcd = 1;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a < b)
    {

        for (int i = 2; i <= a; i++)
        {
            if (b % a == 0)
                return a;

            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
    else
    {

        for (int i = 2; i <= b; i++)
        {
            if (a % b == 0)
                return a;

            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }
        }
        return gcd;
    }
}
int main()
{
    int a, b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Using recursion the GCD is : " << gcd_recursion(a, b) << endl;
    cout << "Without recursion the GCD is : " << gcd_without_recursion(a, b) << endl;

    return 0;
}