#include <iostream>
#include <unordered_map>
using namespace std;

void test() {
	unordered_map<string, size_t> word_count;
	string word;
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
