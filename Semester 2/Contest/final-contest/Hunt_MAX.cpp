#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 


    int n;
    cin >> n;

    vector<int> arr;
    unordered_map<int, int> frequency;

    for (int i = 0; i < n; ++i) {
        int queryType, element;
        cin >> queryType >> element;

        if (queryType == 1) {
            arr.push_back(element);
            frequency[element]++;
        } else {
            if (arr.empty()) {
                cout << "empty\n";
            } else {
                int maxFrequency = 0;
                int maxElement = -1;

                for (auto& entry : frequency) {
                    if (entry.second > maxFrequency) {
                        maxFrequency = entry.second;
                        maxElement = entry.first;
                    } else if (entry.second == maxFrequency && entry.first > maxElement) {
                        maxElement = entry.first;
                    }
                }

                cout << maxElement << "\n";

                // Erase occurrences of the maximum element
                for (int j = 0; j < arr.size(); ++j) {
                    if (arr[j] == maxElement) {
                        arr.erase(arr.begin() + j);
                        --j;
                    }
                }

                frequency.erase(maxElement);
            }
        }
    }

    return 0;
}