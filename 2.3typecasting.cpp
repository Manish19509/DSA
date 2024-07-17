// implicit type castig - automatic

// #include <iostream>
// using namespace std;
// int main()
// {
//
//     //  converted to float
//     int num1 = 10;
//     float num2 = 5.5;
//     float result = num1 + num2;
//     cout << "The sum of the two numbers is: " << result << endl;
//     // converted to float then int
//     int num11 = 10;
//     float num22 = 5.5;
//     int result2 = num11 + num22;
//     cout << "The sum of the two numbers is: " << result2 << endl;

//     // 2.char to int
//     // char c = 'A';
//     // int b = c + 1;
//     // cout << "Char value : " << b << endl;
//     // char a = c + 1;
//     // cout << "Char value : " << a << endl;
//     // int to char
//     int a = 97;
//     char ch = a;
//     cout << ch << endl;
//     char g = 'A';
//     int gg = g;
//     cout << gg << endl;
//     return 0;
// }

// explicit type casting - manual
#include <iostream>
using namespace std;
int main()
{
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + (int)num2;
    // cout << result << endl;
    // return 0;
    // 1double to int
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout << intpi << endl;

    // 2. float to char
    float floatnum = 65.5;
    char charvalue = (char)floatnum;
    cout << charvalue << endl;

    // 3.int to float
    // int a = 10;
    // int b = 3.5;       // implicit type conversion
    // float c = a / (b); // int/int will alwAYS give int
    // cout << c << endl;
    // int a = 10;
    // int b = 3.5; // implicit type conversion
    // float c = a / ((float)b); //int/float will always givefloat
    // cout << c << endl;
    // int a = 10;
    // int b = 3.5;              // implicit type conversion
    // int c = ((float)a) / (b); // int
    // cout << c << endl;
}