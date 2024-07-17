// FUNCTION TO FIND AREA OF CIRCLE
// #include <iostream>
// using namespace std;
// void areaCircle(int r)
// {
//     float area = 3.14 * r * r;
//     cout << area << endl;
// }
// int main()
// {
//     areaCircle(2);
//     return 0;
// }

// FUNCTION TO FIND FACTORIAL OF A NUMBER
// #include <iostream>
// using namespace std;
// void factorial(int n)
// {
//     int m = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         m = m * i;
//     }
//     cout << m << endl;
// }
// int main()
// {
//     factorial(3);
//     return 0;
// }

// PRINT ALL PRIME NO. FROM 1->N
#include <iostream>
using namespace std;
void printPrime(int n)
{
    if (n == 1)
    {
        cout << " no prime numer " << endl;
    }
    for (int j = 2; j <= n; j++)
    {

        for (int i = 2; i <= j; i++)
        {
            if (n % i == 0)
            {
                cout << " " << endl;
            }
            else
            {
                cout << j << endl;
            }
        }
    }
}
int main()
{
    printPrime(7);
    return 0;
}
// PRINT ALL DIGITS OF AN INTEGER**
// CREATE A NO. USING DAIGITS**
// PRINT BINARY REPRESENTATION OF a deciMAL NO.**
// CONVERT KM->MILES
// CONVERT FERENHITE->CELCIUS
//  COUNT ALL SET BITS OF A NUMBER
//  CHECK EVEN ODD USING BITWISE OPERATOR

