#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    nums.reserve(4);
    cout << nums.size() << endl;
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(5);
    cout << nums[0] << endl;
    
    return 0;
}
