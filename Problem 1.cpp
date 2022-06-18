//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main()
{
    cout << "\nget sum of all the multiples of 3 below 1000.\n";

    int m3, i = 0;
    //int sum3 = 0;
    int arr3[334];

    for (i = 0; i < 1000; i++) {
        m3 = i * 3;
        //m5 = i * 5; 
        if (m3 > 1000) { break; }
        cout << i << ". m3 = " << m3 << " \n";
        //cout << "m5 = " << m5 << " \n";
        arr3[i] = m3;
        //sum3 += arr3[i];
    }
    for (auto x : arr3)
        cout << x << " ";


    cout << "\n\nget sum of all the multiples of 5 below 1000.\n";

    int m5, j = 0;
    //int sum3 = 0;
    int arr5[200];

    for (j = 0; j < 1000; j++) {
        m5 = j * 5;
        if (m5 >= 1000) { break; }
        cout << j << ". m5 = " << m5 << " \n";
        //cout << "m5 = " << m5 << " \n";
        arr5[j] = m5;
        //sum3 += arr3[i];
    }
    for (auto x : arr5)
        cout << x << " ";


    //int sum = sum3 + sum5;
    //cout << "Sum3 + Sum5 = " << sum << "\n";
}