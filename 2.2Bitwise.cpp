#include <iostream>
using namespace std;

int main()
{
        int a = 5;
        int b = 10;
        cout << (a & b) << endl;
        cout << (a | b) << endl;
        int num = 1;
        cout << ~num << endl;
        cout << (~num) << endl;
        cout << ~(num) << endl;

        int p = 5;
        int q = 5;
        cout << (p ^ q) << endl;
        cout << (a ^ b) << endl;
        cout << (5 ^ -5) << endl;
        return 0;
}