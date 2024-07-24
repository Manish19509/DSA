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

void bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            int c;
            if (v[j + 1] < v[j])
            {
                // c = v[j];
                // v[j] = v[j + 1];
                // v[j + 1] = c;
                //or
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main()
{
    vector<int> v = {-1,4, 3, 2, 1};
    bubbleSort(v);
    print(v);
    return 0;
}



