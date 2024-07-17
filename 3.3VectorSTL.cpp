// #include<iostream>
// using namespace std;

// void fun(int arr[],int n){
//     for(int i=0;i<n+100;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     //static memo.allocation of array
//     // int arr[5]={1,2,3,4,5}

//     //dynamic memo. allocation of array
//     int n;
//     cout<<"Enter number of elements of arrar : ";
//     cin>>n;
//     int *arr=new int[n]; //each element can be 0 or garbage value

//     //taking elements of array
//     for(int i=0;i<n;++i){
//         int data;
//         cin>>data;
//         arr[i]=data;
//     }

//     //inserting more elements
//     for(int i=0;i<100;i++){      //by this it can crash in some  compiler - so its solution is using vector
//         arr[n+i]=80;
//     }
//     fun(arr,n);
//     return 0;
// }

// vector stl in c++
#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    cout << "Printing vector " << endl;
    int size = v.size(); // to know size
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // in vector we don't tell size of vector
    // just keeep inserting, i will manage the allocations.
    vector<int> v; // array hi hai.

    // Since condition 1 is always true, the code inside the curly braces {} will execute indefinitely, creating an infinite loop.
    // to know capacity and size.
    //  while(1){
    //      int d;
    //      cin>>d;
    //      v.push_back(d);
    //      cout<<"capacity "<<v.capacity()<<"size "<<v.size()<<endl;
    //  }

    // insert
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);

    // pop ->delete-> from end
    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back();
    print(v);

    v.pop_back(); // bad_array_new_length Aborted
    print(v);

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v)
{
    cout << "Printing vector " << endl;
    int size = v.size(); // to know size
    for (int i = 0; i < size; i++)
    {
        // cout<<v[i]<<" ";
        // another way to print vector
        cout << v.at(i) << endl;
    }
    cout << endl;
}
int main()
{
    // vector initialization
    // in vector we don't tell size of vector
    // just keeep inserting, i will manage the allocations.
    vector<int> v; // array hi hai.

    vector<int> arr;         // default with no data, 0 size
    vector<int> arr2(5, -1); // init with n size with specific data
    // arr2.push_back(50);
    // print(arr2);

    vector<int> arr3 = {1, 2, 3, 4, 5};
    // arr3.pop_back();
    // print(arr3);

    vector<int> arr4{1, 2, 3, 4, 5};
    // print(arr4);

    // how to copy vector
    vector<int> arr5 = {1, 2, 3, 4, 5};
    vector<int> arr6(arr5);
    print(arr6);

    // to insert by user
    cout << "enser number of elements : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int d;
        cout << "Ensert element : ";
        cin >> d;
        v.push_back(d);
    }
    print(v);

    for (int i = 0; i < 100; i++)
    { // here is the solution of problem faced in array, in vector we can increase the size as we want without mentioning the amount
        v.push_back(80);
    }
    print(v);

    // To clear the vector
    v.clear();
    print(v);

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void print2(vector<char> v)
{
    cout << "Printing vector method 2" << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    vector<char> v; // char type
    v.push_back('a');

    v.push_back('b');
    v.push_back('c');

    v.push_back('d');
    print2(v);

    cout << "Front element: " << v[0] << endl;
    cout << "Front element: " << v.front() << endl;
    cout << "End Element: " << v[v.size() - 1] << endl;
    cout << "End Element: " << v.back() << endl;
    return 0;
}