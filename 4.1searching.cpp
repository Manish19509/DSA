// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int target){
//     int start=0;
//     int end =n-1;
//     //int mid=(start+end)/2; //IT MAY OVERFLOW INT SO WE CAN USE BELOW LINE CODE
// best practice
//   int mid = start+(end - start)/2;

//     while(start <= end){
//         if(arr[mid] ==target){
//             //return index of found element
//             return mid;
//         }
//         else if(target> arr[mid]){
//             //right me jao
//             start=mid+1;
//         }
//         else if(target < arr[mid]){
//             //left jao
//             end=mid-1;
//         }
//         //mid update
//         mid=(start+end)/2; //important
//     }
//     //agar yahan tak pohcha matlab elment nai mila hai
//     return -1;
// }
// int main() {
// int arr[]={10,20,30,40,50,60,70,80,90,100};
// int target =50;
// int n=10;
// int ansIndex = binarySearch(arr,n,target);

// if(ansIndex ==-1){
//     cout<<"Element not found "<<endl;
// }
// else{
//     cout<<" Elment found at Index : "<<ansIndex<<" and element is : "<< arr[ansIndex];
// }

//     return 0;
// }

// FIND THE FIRST OCCURANCE OF A MUNBER IN A SORTED ARRAY
//  #include<iostream>
//  using namespace std;

// int firstOccurence(int arr[], int n, int target){
//       int start=0;
//     int end =n-1;
//     // int mid=(start+end)/2;// it may overflow int
//     int mid=start+(end-start)/2;
//     int ans =-1;

//     while(start <= end){
//         if(arr[mid] ==target){
//             //ans store
//             ans=mid;
//             //left me jao
//             end=mid-1;

//         }
//         else if(target> arr[mid]){
//             //right me jao
//             start=mid+1;
//         }
//         else if(target < arr[mid]){
//             //left me jao
//             end=mid-1;
//         }
//         //mid update
//         mid=(start+end)/2; //important
//     }
//     //agar yahan tak pohcha matlab elment nai mila hai
//     return ans;

// }
// int main(){
// int arr[]={10,20,30,50,50,60,70,80,90,100};
// int target =50;
// int n=10;
// int ansIndex = firstOccurence(arr,n,target);

// if(ansIndex ==-1){
//     cout<<"Element not found "<<endl;
// }
// else{
//     cout<<" Elment found at Index : "<<ansIndex<<" and element is : "<< arr[ansIndex];
// }

//     return 0;
// }

// //FIND THE LAST OCCURANCE OF A MUNBER IN A SORTED ARRAY
// #include<iostream>
// using namespace std;

// int lastOccurence(int arr[], int n, int target){
//       int start=0;
//     int end =n-1;
//     // int mid=(start+end)/2;// it may overflow int
//     int mid=start+(end-start)/2;
//     int ans =-1;

//     while(start <= end){
//         if(arr[mid] ==target){
//             //ans store
//             ans=mid;
//             //right me jao
//             start= mid+1;

//         }
//         else if(target> arr[mid]){
//             //right me jao
//             start=mid+1;
//         }
//         else if(target < arr[mid]){
//             //left me jao
//             end=mid-1;
//         }
//         //mid update
//         mid=(start+end)/2; //important
//     }
//     //agar yahan tak pohcha matlab elment nai mila hai
//     return ans;

// }
// int main(){
// int arr[]={10,20,30,50,50,60,70,80,90,100};
// int target =50;
// int n=10;
// int lastIndex = lastOccurence(arr,n,target);

// if(ansIndex ==-1){
//     cout<<"Element not found "<<endl;
// }
// else{
//     cout<<" Elment found at Index : "<<ansIndex<<" and element is : "<< arr[ansIndex];
// }

//     return 0;
// }

// //FIND TOTAL OCCURRENCE OF AN ELEMENT IN A SORTED ARRAY

// #include<iostream>
// using namespace std;

// int firstOccurence(int arr[], int n, int target){
//       int start=0;
//     int end =n-1;
//     // int mid=(start+end)/2;// it may overflow int
//     int mid=start+(end-start)/2;
//     int ans =-1;

//     while(start <= end){
//         if(arr[mid] ==target){
//             //ans store
//             ans=mid;
//             //left me jao
//             end=mid-1;

//         }
//         else if(target> arr[mid]){
//             //right me jao
//             start=mid+1;
//         }
//         else if(target < arr[mid]){
//             //left me jao
//             end=mid-1;
//         }
//         //mid update
//         mid=(start+end)/2; //important
//     }
//     //agar yahan tak pohcha matlab elment nai mila hai
//     return ans;

// }

// int lastOccurence(int arr[], int n, int target){
//       int start=0;
//     int end =n-1;
//     // int mid=(start+end)/2;// it may overflow int
//     int mid=start+(end-start)/2;
//     int ans =-1;

//     while(start <= end){
//         if(arr[mid] ==target){
//             //ans store
//             ans=mid;
//             //right me jao
//             start= mid+1;

//         }
//         else if(target> arr[mid]){
//             //right me jao
//             start=mid+1;
//         }
//         else if(target < arr[mid]){
//             //left me jao
//             end=mid-1;
//         }
//         //mid update
//         mid=(start+end)/2; //important
//     }
//     //agar yahan tak pohcha matlab elment nai mila hai
//     return ans;

// }

// int totalOccurence(int arr[], int n, int target){

//   int firstIndex = firstOccurence(arr,n,target);

//   int lastIndex = lastOccurence(arr,n,target);

//   int totalOccurrence = lastIndex - firstIndex + 1;
//   return totalOccurrence;

// }
// int main(){
// int arr[]={10,20,30,50,50,60,70,80,90,100};
// int target =50;
// int n=10;
// int ans = totalOccurence(arr,n,target);

//     cout<<"Total Occurrence is : "<<ans<<endl;
//     return 0;
// }

// // Find missing element in a sorted array
// #include <iostream>
// using namespace std;
// int main()
// {
//     return 0;
// }