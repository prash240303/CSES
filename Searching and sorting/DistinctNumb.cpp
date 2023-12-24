#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    values.erase(unique(values.begin(), values.end()), values.end());

    int distinctValues = values.size();
    cout << distinctValues;

    return 0;
}

// tle when the array is large due to insertion in set
// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     unordered_set<int> s;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         s.insert(x);
//     }

//     cout << s.size();

//     return 0;
// }
