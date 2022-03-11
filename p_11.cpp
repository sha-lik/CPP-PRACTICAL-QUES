// 11. Write a program to read two numbers p and q. If q is O then throw an exception else
// display the result of p/q.

#include <iostream>
using namespace std;

int main()
{

    float p;
    float q;
    cout << "Enter value of p : ";
    cin >> p;
    cout << "Enter value of q : ";
    cin >> q;
    float c;

    try
    {
        if (q == 0)
        {
            throw q;
        }
        c = p / q;
        cout << "Result of p/q is : " << c;
    }

    catch (float x)
    {
        cout << "The divisor can't be zero !!" << endl;
        exit(-1);
    }
}
