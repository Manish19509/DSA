// 33. Search pivot element in Rotated Sorted Array
#include <iostream>
using namespace std;
int findPivotIndex(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    // int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // corner case
        if (s == e)
        {
            // single element
            return s;
        }
        if (arr[mid] > arr[mid + 1])
            return mid;
        else if (arr[mid] < arr[mid - 1])
            return mid - 1;
        else if (arr[s] > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
     return -1;
}
int main()
{
    int arr[8] = {12, 14, 16, 2, 4, 6, 8, 10};
    int n = 8;
    cout << "pivot index is " << findPivotIndex(arr, n) << " Pivot element is : " << arr[findPivotIndex(arr, n)];
    return 0;
}


// Search in pivot Element in Sorted and rotated Array with vector
// #include <iostream>
// #include<vector>
// using namespace std;

// int findPivotIndex(vector<int>& arr)
// {
//     int n=arr.size();
//     int s = 0;
//     int e = n - 1;
//     // int mid = s + (e - s) / 2;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         // corner case
//         if (s == e)
//         {
//             // single element
//             return s;
//         }
//         if (arr[mid] > arr[mid + 1])
//             return mid;
//         else if (arr[mid] < arr[mid - 1])
//             return mid - 1;
//         else if (arr[s] > arr[mid])
//             e = mid - 1;
//         else
//             s = mid + 1;
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> v;
//     v.push_back(12);
//     v.push_back(14);
//     v.push_back(16);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(6);
//     v.push_back(8);
//     v.push_back(10);
//     // int v[8] = {12, 14, 16, 2, 4, 6, 8, 10};
//     // int n = 8;
//     cout << "pivot index is " << findPivotIndex(v) << " Pivot element is : " << v[findPivotIndex(v)];
//     return 0;
// }