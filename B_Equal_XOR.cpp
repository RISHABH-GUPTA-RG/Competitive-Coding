#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

#define int long long

// Function to read input for a single test case
void readTestCase(int &n, int &k, vector<int> &arr) {
    cin >> n >> k;
    arr.resize(2 * n);
    for (int i = 0; i < 2 * n; ++i)
        cin >> arr[i];
}

// Function to calculate the answer for a single test case
void calculateAnswer(int n, int k, vector<int> &arr) {
    set<int> uniqueElements;
    map<int, int> firstHalfOccurrences, secondHalfOccurrences;

    // Populate sets and maps for the first and second halves of the array
    for (int i = 0; i < n; ++i) {
        uniqueElements.insert(arr[i]);
        firstHalfOccurrences[arr[i]]++;
    }
    vector<int> commonElements;
    for (int i = n; i < 2 * n; ++i) {
        if (uniqueElements.find(arr[i]) != uniqueElements.end())
            commonElements.push_back(arr[i]);
        secondHalfOccurrences[arr[i]]++;
    }

    // Construct vectors to store the final answers
    vector<int> answer1, answer2;

    // Distribute common elements between answer1 and answer2
    for (auto &elem : firstHalfOccurrences) {
        while (elem.second >= 2 && k > 0) {
            answer1.push_back(elem.first);
            answer2.push_back(elem.first);
            elem.second -= 2;
            k--;
        }
    }
    for (auto &elem : secondHalfOccurrences) {
        while (elem.second >= 2 && k > 0) {
            answer1.push_back(elem.first);
            answer2.push_back(elem.first);
            elem.second -= 2;
            k--;
        }
    }

    // Distribute remaining common elements between answer1 and answer2
    k *= 2;
    for (int i = 0; i < commonElements.size() && k > 0; ++i) {
        answer1.push_back(commonElements[i]);
        answer2.push_back(commonElements[i]);
        k--;
    }

    // Print the final answers
    for (auto &x : answer1)
        cout << x << " ";
    cout << endl;
    for (auto &x : answer2)
        cout << x << " ";
    cout << endl;
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        vector<int> arr;
        readTestCase(n, k, arr);
        calculateAnswer(n, k, arr);
    }
    return 0;
}
