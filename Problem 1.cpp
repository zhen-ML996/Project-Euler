//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main()
{
    int j,sum = 0;
    for (j = 0; j < 1000; j++) {
        if ( j % 3 == 0 || j % 5 == 0 ) { //perform summation if remainder of division of 3 or 5 is equal to 0.
            sum = sum + j;
            cout << sum << "\n"; //print sum 
    }
  }
}