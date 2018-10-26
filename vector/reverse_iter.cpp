#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a[] = { 23, 11, 77, 36, 222};
    vector<int> nums(a, a + 5);
    
    sort(nums.begin(), nums.end());
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    return 0;
}
