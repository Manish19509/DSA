//passins array in an function
// #include <iostream>
// using namespace std;
// void printArray(int arr[], int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
// int arr[5]={2,3,4,2,6};
// int size =5;
// printArray(arr, size);
//     return 0;
// }

//linear search by array passing in function

// #include <iostream>
// using namespace std;
// bool linear(int arr[], int size, int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return true;
//         }
//     }
//     //not found
//     return false;
// }
// int main() {
//     int arr[5]={2,3,4,6,5};
//     int size=5;
//     int target =5;
    
//     bool ans =linear(arr,size,target);
//     if(ans==true){
//         cout<<"target found"<<endl;
//     }
//     else{
//         cout<<"target not found"<<endl;
//     }
//     return 0;
// }

// count 0 and 1 in an array

// #include <iostream>
// using namespace std;
// void zeroOneSearch(int arr[],int size)
// {int zero=0;
// int one=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//           zero=zero+1; 
//         }
//       if(arr[i]==1){
//           one++;
//       }
//     }
//     cout<<"Number of zeroes are "<<zero<<endl;
//     cout<<"Number of one are "<<one<<endl;
// }
// int main() {
// int arr[5]={1,0,1,1,0};
// int size=5;
// zeroOneSearch(arr,size);
// // int ans=
//     return 0;
// }

//INT_MIN INT_MAX
// #include <iostream>
// #include<limits.h>
// using namespace std;

// int main() {
//     //-2^31=-2147483648
//     cout<<INT_MIN<<endl;
//     //2^31=2147483647
//     cout<<INT_MAX<<endl; 
//     return 0;
// }
//min No. in an array
// #include <iostream>
// #include<limits.h>
// using namespace std;
// int findMInInArray(int arr[],int size)
// {
//   int minAns = INT_MAX;
// for(int i=0;i<size;i++)
// { minAns=min(minAns,arr[i]);}
//     cout<<"Minimun number in arr is "<<minAns<<endl;
// return 0;
// }
// int main() {
// int arr[7]={10,8,31,4,3,1,-100};
// int size=7;
// findMInInArray(arr,size);
//  return 0;
// }

//reverse array
// #include<iostream>
// using namespace std;
// int revArr(int arr[],int size){
//     int c;
//     for(int i =0;i<size/2;i++){
//         c=arr[i];
//         cout<<"c"<<c;
//         arr[i]=arr[size-i-1];
//         cout<<"arr i "<<arr[i];
//         arr[size-i-1]=c;
//         cout<<"arr size-i"<<arr[size-i];
//         cout<<endl;
//     }
        
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     return 0;
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60,70};
//     int size=7;
// revArr(arr,size);
//     // cout<<"Reversed array is "<<reversedArray<<endl;
// }
//reverse array using swap utility
// #include<iostream>
// using namespace std;
// int revArr(int arr[],int size){
//     for(int left=0,right=size-1;left<right;left++,right--){
//         swap(arr[left],arr[right]);
//     }
//     for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     return 0;
// }
// int main(){
//     int arr[7]={10,20,30,40,50,60};
//     int size=6;
// revArr(arr,size);
// }

//extrerme priint in an array
// #include<iostream>
// using namespace std;
//  void extremePrint(int arr[],int size){
//      int left=0;
//      int right=size-1;
//      while(left<=right){
//          if(left==right){
//              cout<<arr[left]<<endl;
//          }
//          else{
//              cout<<arr[left]<<endl;
//              cout<<arr[right]<<endl;
//          }
//          left++;
//          right--;
//      }
//      for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//  }
// int main(){
//     int arr[6]={10,20,30,40,50,60};
//     int size=6;
//     extremePrint(arr,size);
//     return 0;
// }