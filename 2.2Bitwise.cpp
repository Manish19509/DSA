// #include <iostream>
// using namespace std;

// int main()
// {
//         int a = 5;
//         int b = 10;
//         cout << (a & b) << endl;
//         cout << (a | b) << endl;
//         int num = 1;
//         cout << ~num << endl;
//         cout << (~num) << endl;
//         cout << ~(num) << endl;

//         int p = 5;
//         int q = 5;
//         cout << (p ^ q) << endl;
//         cout << (a ^ b) << endl;
//         cout << (5 ^ -5) << endl;
//         return 0;
// }

// left right shift operator
// #include <iostream>
// using namespace std;
// int main()
// {
//         int a = 7;
//         int ans = (a << 1);
//         cout << ans << endl;
//         int b = -100;
//         // right shift
//         int bns = (b >> 2);
//         cout << bns << endl;
//         // right shift of unsigned negative number
//         unsigned int c = -100;
//         int uns = (c >> 2);
//         cout << uns << endl;

//         // negative number shift give garbage value
//         int d = 100;
//         cout << (d << -2) << endl;
//         return 0;
// }

// pre/post increment and decrement operators
// #include <iostream>
// using namespace std;
// int main()
// {
//         // int a = 5;
//         // cout << (++a) << endl;
//         // cout << (a++) << endl;
//         // cout << a << endl;

//         int b = 10;
//         cout << ((++b) * (b++)) << endl;
//         int a = 10;
//         cout << ((a++) * (++a)) << endl;
//         return 0;
// }

// break, continue
// #include <iostream>
// using namespace std;
// int main()
// {
//         for (int i = 0; i < 5; i++)
//         {
//                 if (i == 2)
//                         break;
//                 cout << i << endl;
//         }
//         for (int i = 0; i < 5; i++)
//         {
//                 if (i == 2)
//                         continue;
//                 cout << i << endl;
//         }

//         for (int i = 0; i < 5; i++)
//         {
//                 cout << "Hello" << endl;
//                 continue;
//                 cout << i << endl;
//         }
//         return 0;
// }

// local and global variable
// #include <iostream>
// using namespace std;
// int main()
// {
//         int i = 10;
//         if (true)
//         {
//                 int i = 25;
//                 cout << i << endl;
//                 if (true)
//                 {
//                         cout << i << endl;
//                 }
//         }
//         cout << i << endl;
//         return 0;
// }
