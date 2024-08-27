#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

unordered_map<int, int> findFrequency(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;
    for (int element : arr) {
        frequencyMap[element]++;
    }
    return frequencyMap;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    unordered_map<int, int> frequencyMap = findFrequency(arr);
    cout << "Element frequencies:" << endl;
    for (const auto& pair : frequencyMap) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times." << endl;
    }
    return 0;
}