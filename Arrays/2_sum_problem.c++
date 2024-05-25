#include <bits/stdc++.h>
using namespace std;

// Brute force approach Variant-1

// string twoSum(int n, vector<int> &arr, int target) {
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) return "YES";
//         }
//     }
//     return "NO";
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;
//     return 0;
// }

// Brute Force Approach Variant-2

// vector<int> twoSum(int n, vector<int> &arr, int target) {
//     vector<int> ans;
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] + arr[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return { -1, -1};
// }

// int main()
// {
//     int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     vector<int> ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 2: [" << ans[0] << ", "
//          << ans[1] << "]" << endl;
//     return 0;
// }

// Better Approach Variant -1

string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}

// Optimal approach

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}