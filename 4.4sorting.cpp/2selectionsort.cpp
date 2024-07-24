#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {                        // Loop through the array
        cout << v[i] << " "; // Print each element
    }
}

void selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i; // assumed ith element hi smallest hai
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIndex])
            {
                minIndex = j;
            }
        }
        // swap ith and minIndex elements
        swap(v[i], v[minIndex]);
    }
}
int main()
{
    vector<int> v = {-1, 4, 3, 2, 1};
    selectionSort(v);
    print(v);
    return 0;
}






