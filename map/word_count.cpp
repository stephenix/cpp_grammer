#include <iostream>
#include <map>
using namespace std;

void test() {
	map<string, size_t> word_count;
	string word;
	// jump out:ctrl+D
	while (cin >> word) {
		++ word_count[word];
	}
	for (const auto w:word_count) {
		cout << w.first << " " << w.second << " ";
	}
}

int main() {
	test();
	return 0;
}
