#include <iostream>
using namespace std;

int main() {
	// not a string
	char dog[2] = { 'a', 'b'};
	// a string
	char cat[2] = { 'a', '\0'};
	cout << dog << endl;
	cout << cat << endl;
	return 0;
}
