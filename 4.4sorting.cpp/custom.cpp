// #include <iostream>
// #include <vector>
// #include<algorithm> //for sorting

// using namespace std;

// void print(vector<int> &v)  //*use & bcz it will by reference and will not make its copy
// {
//     for (int i = 0; i < v.size(); i++)
//     {                        // Loop through the array
//         cout << v[i] << " "; // Print each element
//     }
// }

// bool myComp(int &a, int&b){
// // return a<b; //inc oreder sorting
// return a>b; //dec oreder sorting
// }

// int main()
// {

//     vector<int> v = {-1, 4, 3, 2, 1};
//     sort(v.begin(), v.end()); //inc order sorting
//     print(v);
//     cout<<endl;
//     sort(v.begin(), v.end(), myComp); //myComp is comporater
//     print(v);

//     return 0;
// }

// vector of vector sorting
#include <iostream>
#include <vector>
#include <algorithm> //for sorting

using namespace std;

void printvv(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
        ;
    }
}

bool myCompForFirstIndex(vector<int> &a, vector<int> &b)
{
    // return a[0]<b[0]; //inc oreder 0 th index sorting
    return a[1] < b[1]; // inc oreder 1st index sorting
    // return a[0] > b[0]; // dec oreder sorting
}

int main()
{
    // vector of vector
    vector<vector<int>> v;
    int n;
    cout << "Enter size : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "Enter a, b" << endl;
        cin >> a >> b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "Here are the values " << endl;
    printvv(v);
    cout << "sorted by 0th index" << endl;
    sort(v.begin(), v.end());
    printvv(v);
    cout << "sorted by 1st index" << endl;

    sort(v.begin(), v.end(), myCompForFirstIndex);
    printvv(v);
    return 0;
}
