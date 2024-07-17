//*find uniqe elements if all other are in pair
// #include <iostream>
// using namespace std;
// int uniqueElement(int arr[], int size)
// {
//     int ans = 0;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^arr[i]; //XOR
//     }
//     return ans;
// }
// int main() {
//     int arr[5]={1,6,1,4,4};
//     int size=5;
//     int finalAns = uniqueElement(arr,size);
//     cout<<"Final answer is : "<<finalAns<<endl;
//     return 0;
// }

// print all possible pairs of elements of array
//  #include <iostream>
//  using namespace std;
//  void pairArr(int arr[], int size)
//  {
//      for(int i=0;i<size;i++)
//      {
//          for(int j=0;j<size; j++)
//          {
//              cout<<"("<<arr[i]<<","<<arr[j]<<")";
//          }
//          cout<<endl;
//      }
//  }
//  int main()
//  {
//      int arr[3]={1,3,4};
//      int size = 3;
//      pairArr(arr,size);
//      return 0;
//  }

// print triplets
//  #include<iostream>
//  using namespace std;
//  void triplet(int arr[], int size)
//  {
//          for(int i=0;i<size;i++)
//      {
//          for(int j=0;j<size; j++)
//          {
//              for(int k=0;k<size;k++)
//              {
//              cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")";
//              }
//              cout<<endl;
//          }
//          cout<<endl;
//      }

// }
// int main()
// {
//     int arr[4]={1,2,3,4};
//     int size=4;
//     triplet(arr,size);
//     return 0;
// }

// sort 0's and 1's of array having 1&0 only
// can be done by
//  1 - counting
//  2 - 2 pointer approach
//  3 - sort() - utility
#include <iostream>
using namespace std;
void zeroOne(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    // int i;
    // for(i=0;i<zeroCount;i++)
    // {
    //     arr[i]=0;
    // }
    // for(int j=i;j<size;j++)
    // {
    //     arr[j]=1;
    // }
    // EASY WAY
    int index = 0;

    while (zeroCount--)
    { // run til zerocount<0
        arr[index] = 0;
        index++;
    }

    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
}
int main()
{
    int arr[9] = {0, 1, 0, 1, 1, 0, 0, 0, 0};
    int size = 9;
    zeroOne(arr, size);
    // printing
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// shift 1