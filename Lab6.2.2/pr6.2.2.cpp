#include <iostream>
#include <vector>
using namespace std;

int FindLargestOddElement(const vector<int>& a) {
    int largestOdd = INT_MIN;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 2 != 0 && a[i] > largestOdd) {
            largestOdd = a[i];
        }
    }

    return largestOdd;
}

int main() {
    vector<int> a = { 2, 4, 7, 18, 15, 3, 8, 9 };
    int largestOdd = FindLargestOddElement(a);

    if (largestOdd != INT_MIN) {
        cout << "The largest odd element is: " << largestOdd << endl;
    }

    return 0;
}

