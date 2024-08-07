// #include <iostream>

// using namespace std;

// template <typename T>
// class Stack
// {
//     int top;

// public:
//     T a[5]; 
//     Stack() { top = -1; } 
//     bool push(T x);
//     T pop();
//     bool isEmpty();
//     bool isFull();
// };

// template <typename T>
// bool Stack<T>::push(T x)
// {
//     if (isFull())
//     {
//         cout << "Stack Overflow\n";
//         return false;
//     }
//     else
//     {
//         a[++top] = x;
//         cout << x << " pushed into stack\n";
//         return true;
//     }
// }

// template <typename T>
// T Stack<T>::pop()
// {
//     if (isEmpty())
//     {
//         cout << "Stack Underflow\n";
//         return -1;
//     }
//     else
//     {
//         T x = a[top--];
//         return x;
//     }
// }

// template <typename T>
// bool Stack<T>::isEmpty()
// {
//     return (top < 0);
// }

// template <typename T>
// bool Stack<T>::isFull()
// {
//     return (top >= (5 - 1));
// }

// int main()
// {
//     Stack<int> stack;
//     int choice, value;

//     while (true)
//     {
//         cout << "\n1. Push\n2. Pop\n3. Check if Empty\n4. Check if Full\n5. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice)
//         {
//         case 1:
//             cout << "Enter value to push: ";
//             cin >> value;
//             stack.push(value);
//             break;
//         case 2:
//             cout << stack.pop() << " popped from stack\n";
//             break;
//         case 3:
//             if (stack.isEmpty())
//                 cout << "Stack is empty\n";
//             else
//                 cout << "Stack is not empty\n";
//             break;
//         case 4:
//             if (stack.isFull())
//                 cout << "Stack is full\n";
//             else
//                 cout << "Stack is not full\n";
//             break;
//         case 5:
//             exit(0);
//         default:
//             cout << "Invalid choice\n";
//         }
//     }

//     return 0;
// }


#include<iostream> 
using namespace std; 
double power(double x, int n){ 
if(n==0){ 
return 1; 
} 
double half = power(x, n/2); 
if(n % 2 == 0){ 
return half * half; 
} 
else{ 
return half * half * x; 
} 
} 
int main() 
{ 
double x; 
int n; 
cout<<"Enter the value of x: "; 
cin>>x; 
cout<<"Enter the value of n: "; 
cin>>n;



evaluate the complexity of the developed program to find the frequency of the elements in the given array