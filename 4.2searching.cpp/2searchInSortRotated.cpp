//Search Element in Sorted and rotated Array with vector
#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector<int> &v)
{
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // corner case
        if (s == e)
        {
            // single element
            return s;
        }
        if (mid + 1 < n && v[mid] > v[mid + 1]) // important
            return mid;
        else if (mid - 1 >= 0 && v[mid] < v[mid - 1]) // important
            return mid - 1;
        else if (v[s] > v[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int binarySearch(vector<int> &v, int s, int e, int target)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (target > v[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}

int search(vector<int> &v, int target)
{
    int pivotIndex = findPivotIndex(v);
    int n = v.size();
    int ans = -1;
    // search in A
    if (target >= v[0] && target <= v[pivotIndex])
    {
        ans = binarySearch(v, 0, pivotIndex, target);
    }
    else
    {
        ans = binarySearch(v, pivotIndex + 1, n - 1, target);
    }
    return ans;
}

int main()
{
    int target = 8;
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    // int v[8] = {12, 14, 16, 2, 4, 6, 8, 10};
    // int n = 8;

    int ans = -1;
    cout << "pivot index is " << findPivotIndex(v) << " Pivot element is : " << v[findPivotIndex(v)];

    return 0;
}