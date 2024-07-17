// #include <iostream>
// using namespace std;

// void printline(); // declare
// int main()
// {
//     printline(); // call
//     return 0;
// }
// void printline() // define
// {
//     for (int i = 0; i < 10; i++)
//     {
//         cout << "manish" << endl;
//     }
// }

// define->call
// #include <iostream>
// using namespace std;
// void print()
// {
//     cout << "i am inside  the function\n";
// }
// int main()
// {
//     print();
//     return 0;
// }

// 1.WA Function to print sum of three numbers
// #include <iostream>
// using namespace std;

// void printSum(int a, int b, int c)
// {
//     int answer = a + b + c;
//     cout << "sum of " << a << ", " << b << " and " << c << " is " << answer << endl;
// }
// int main()
// {
//     printSum(2, 3, 4);
//     return 0;
// }

// 2. WA function to return sum of 3
// #include <iostream>
// using namespace std;
// int printSum(int a, int b, int c)
// {
//     int ans = a + b + c;
//     return ans;
// }
// int main()
// {
//     int sum = printSum(2, 2, 2); // to store returned value
//     cout << "The Sum is : " << sum << "\n";
//     // or
//     cout << "sum is " << printSum(1, 1, 1) << endl;
//     return 0;
// }

// 3.find max of three numbers
// #include <iostream>
// using namespace std;
// void findMax(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         cout << a << " is max among " << a << "," << b << ",& " << c;
//     }
//     else if (b > a && b >> c)
//     {
//         cout << b << " is max among " << a << "," << b << ",& " << c;
//     }
//     else
//     {
//         cout << c << " is  max among " << a << "," << b << ",& " << c;
//     }
// }
// int main()
// {
//     findMax(3, 2, 1);
//     return 0;
// }

// using max inbuilt function
// #include <iostream>
// using namespace std;
// void printMax(int n1, int n2, int n3)
// {
//     int ans1 = max(n1, n2);
//     int finalAns = max(ans1, n3);
//     cout << "The maximum number is: " << finalAns << endl;
// }
// int main()
// {
//     printMax(1, 3, 2);
//     return 0;
// }

// 4. counting from 1 to N
// #include <iostream>
// using namespace std;
// void counting(int N)
// {
//     for (int i = 1; i <= N; i++)
//     {
//         cout << i << endl;
//     }
// }
// int main()
// {
//     counting(5);
//     return 0;
// }

// 5.check prime number or not
// #include <iostream>
// using namespace std;
// void primeNo(int n)
// {
//     int check = 0;
//     if (n == 1)
//     {
//         cout << "given no. is prime no" << endl;
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0)
//                 check++;
//         }
//         if (check == 2)
//         {
//             cout << "number is prime number" << endl;
//         }
//         else
//         {
//             cout << "number is not prime" << endl;
//         }
//     }
// }
// int main()
// {
//     primeNo(50);
//     return 0;
// }

// **********through bool method*************
// return true-> if N is A prime numer else false if->non-prime
// #include <iostream>
// using namespace std;
// bool checkPrime(int n)
// {
//     // if (n == 1)
//     // {
//     //     cout << "number is not prime" << endl;
//     // }
//     // else
//     for (int i = 2; i < n; i++)

//     {
//         if (n % i == 0)
//         { // remainder =0->perfectly divisible
//             // not a prime
//             return false;
//         }
//         // yahan par main keh skta hu ki {2,3,4,5,..n-1} koi bhi n ko perfectly divide nai kr paya
//         // it means ,n is prime
//         return true;
//     }
// }
// int main()
// {
    // bool prime = checkPrime(1);
    // if (prime)
    // {
    //     cout << "its a prime number" << endl;
    // }
    // else
    // {
    //     cout << "its not a prime" << endl;
    // }
//     return 0;
// }

// 6.check even or odd
// #include <iostream>
// using namespace std;
// void oddEven(int n)
// {
//     if (n % 2 == 0)
//         cout << "number is even" << endl;
//     else
//         cout << "number is odd" << endl;
// }
// int main()
// {
//     oddEven(19);
//     return 0;
// }

// 7.sum of all numbers  till 1->N
// #include <iostream>
// using namespace std;
// void sum(int n)
// {
//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i; // or sum+= i;
//     }
//     cout << "Final Sum = " << sum << " till " << n << endl;
// }
// int main()
// {
//     sum(5);
//     return 0;
// }

// 8.sum of all even number till 1->N
// #include <iostream>
// using namespace std;
// void evenSum(int n)
// {
//     int sum = 0;

//     for (int i = 2; i <= n; i = i + 2)
//     {
//         sum = sum + i; // or if(i%2==0){sum=sum+i} keep i++ and start from 1
//     }
//     cout << "Final Sum of even number = " << sum << " till " << n << endl;
// }
// int main()
// {
//     evenSum(3);
//     return 0;
// }