#include <iostream>
#include <vector>
using namespace std;

int binarySearchMinDifference(vector<int>& a, int target) {
    int n = a.size();

    if (target < a[0])
        return a[0];
    if (target > a[n - 1])
        return a[n - 1];

    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;

        if (target == a[mid]) {
            return a[mid];
        } else if (target < a[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if ((a[start] - target) < (target - a[end]))
        return a[start];
    return a[end];
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int target;
    cin >> target;

    cout << "MinimumDifferenceElementWith(" << target << ") = " << binarySearchMinDifference(a, target) << endl;

    return 0;
}
