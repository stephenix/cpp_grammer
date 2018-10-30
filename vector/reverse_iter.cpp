#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a[] = { 23, 11, 77, 36, 222};
    vector<int> nums(a, a + 5);
    
    sort(nums.begin(), nums.end());
    //for (int n : nums)
    //    cout << n << " ";
    for (int i = 0; i < nums.size(); i ++)
        cout << nums[i] << " ";
    cout << endl;

    vector<int>::reverse_iterator r_iter = nums.rbegin();
    for (; r_iter != nums.rend(); r_iter ++)
        cout << *r_iter << " ";
    cout << endl;

    return 0;
}
