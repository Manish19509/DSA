#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void findFrequency(const vector<int>& arr) {
    unordered_map<int, int> frequencyMap;

    // Count the frequency of each element in the array
    for (int num : arr) {
        frequencyMap[num]++;
    }

    // Print the frequency of each element
    for (const auto& pair : frequencyMap) {
        cout << "Element " << pair.first << " occurs " << pair.second << " times." << endl;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 5, 5, 5, 5};

    findFrequency(arr);

    return 0;
}
