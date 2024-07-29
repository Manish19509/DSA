// // display elements
// //  #include<iostream>
// //  using namespace std;
// //  int main()
// //  {
// //      string arr[5];
// //      for(int i=0;i<5;i++){
// //          cout<<"Enter name of "<< i+1 <<" student : ";
// //          cin>>arr[i];
// //      }

// //     for(int i=0;i<5;i++){
// //         cout<<"The name of "<<i+1<<" student is "<<arr[i]<<endl;;
// //     }
// //  return 0;
// // }

// // reverse the array
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the size of array ";
  cin >> n;
  int arr[n];
  // Taking Inputs
  for (int i = 0; i < n; i++)
  {
    cout << "Enter the " << i + 1 << " element : ";
    cin >> arr[i];
  }
  int temp;
  int mid = n / 2;
  for (int i = 0; i < n / 2; i++)
  {
    temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }
  //printing reversed arrrra
  cout << "The reversed array is ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}

// // summ of array elements
// #include <iostream>
// #include <chrono>
// using namespace std;
// using namespace std::chrono;

// int main()
// {
//   int n;
//   cout << "Enter the size of array ";
//   cin >> n;
//   int arr[n];
//   auto start = high_resolution_clock::now(); // Start measuring time
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Enter the " << i + 1 << " element : ";
//     cin >> arr[i];
//   }

//   auto after_input = high_resolution_clock::now(); // Time after input reading

//   int sum = 0;
//   for (int i = 0; i < n; i++)
//   {
//     sum += arr[i];
//   }
//   auto end = high_resolution_clock::now(); // End measuring time    cout<<sum;
//   // Calculate durations
//   auto duration_input = duration_cast<microseconds>(after_input - start);
//   auto duration_sum = duration_cast<microseconds>(end - after_input);
//   auto duration_total = duration_cast<microseconds>(end - start);

//   // Print durations
//   cout << "Time taken for input: " << duration_input.count() << " microseconds" << endl;
//   cout << "Time taken for sum calculation: " << duration_sum.count() << " microseconds" << endl;
//   cout << "Total time taken: " << duration_total.count() << " microseconds" << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     int arr[n];
    
//     // Input array elements
//     cout << "Enter " << n << " integers:\n";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     // Calculate sum of elements
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
    
//     // Output the sum
//     cout << "Sum of array elements: " << sum << endl;
    
//     return 0;
// }
