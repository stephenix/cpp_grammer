#include <iostream>
#include <iterator>
using namespace std;

int main() {
	int nums[] = { 0, 1, 2, 3, 4};
	int *beg = begin(nums);
	int *last= end(nums);
	for (int *cur = beg; cur != last; cur ++)
		cout << *cur << " ";
	cout << endl;
	return 0;
}
