#include <iostream>
using namespace std;
int main()
{
    float a, b, ans;
    int op;
    cout << "enter the value of two number" << endl;
    cin >> a >> b;
    cout << "enter your option\n1->add\n2->sub\n3->multiply\n4->divide" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        ans = a + b;
        break;
    case 2:
        ans = a - b;
        break;
    case 3:
        ans = a * b;
        break;
    case 4:
        ans = a / b;
        break;
    default:
        cout << "invalid operation" << endl;
        return 0;
    }
    cout << "your ans is " << ans << endl;
    return 0;
}