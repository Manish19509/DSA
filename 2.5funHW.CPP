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
// #include <iostream>
// using namespace std;
// void printPrime(int n)
// {
//     if (n == 1)
//     {
//         cout << " no prime numer " << endl;
//     }
//     else
//     {
//         for (int j = 2; j <= n; j++)
//         {
//             if (j == 2)
//             {
//                 cout << "Prime numer between 1 and given number : 2 ";
//             }
//             else
//             {
//                 bool flag = true;
//                 for (int i = 2; i < j; i++)
//                 {
//                     if (j % i == 0)
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }
//                 if (flag == true)
//                 {
//                     cout << j << " ";
//                 }
//             }
//         }
//     }
// }
// int main()
// {
//     printPrime(11);
//     return 0;
// }

// PRINT ALL DIGITS OF AN INTEGER**
#include <iostream>
using namespace std;
void digit(int n)
{
    int x = n % 10;
    cout << x << " ";
    // int j = sizeof(n) / 4;
    // cout << j << endl;
    for (int i = 1; i < j; i++)
    {
        int y = n / 10;
        cout << y % 10;
        n = y;
    }
}
int main()
{
    digit(45);
    return 0;
}
// CREATE A NO. USING DAIGITS**
// PRINT BINARY REPRESENTATION OF a deciMAL NO.**
// CONVERT KM->MILES
// CONVERT FERENHITE->CELCIUS
//  COUNT ALL SET BITS OF A NUMBER
//  CHECK EVEN ODD USING BITWISE OPERATOR
