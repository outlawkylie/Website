#include <iostream>
using namespace std;

int gcd(int x, int y);

int main()
    {
    int x = 0;
    int y = 0;

    /* Get numbers to find GCD of */
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"\nEnter the second number: ";
    cin>>y;
       
    cout<<"Finding the gcd of "<<x<<" and "<<y<<endl;
    cout<<"The GCD is "<<gcd(x, y)<<endl;
    }

int gcd(int x, int y)
    {
    /* Check the base case (previous x%y == 0!) */
    if(y == 0)
        {
        return x;
        }
    /* If not base case, return gcd of y and x%y */
    int m = 0; /* how many multiples of y there are in x */
    int r = 0; /* what the remainder is of x/y           */

    m = x/y;
    r = x%y;
    cout<<"gcd("<<x<<", "<<y<<") = "<<y<<"*"<<m<<" + "<<r<<endl;

    return gcd(y, x%y);
    }
