#include <iostream>
using namespace std;

template <typename T> inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}

int main(void) {
    int i = 29;
    int j = 39;
    cout << Max(i, j) << endl;

    string s = "hello";
    string t = "world";
    cout << Max(s, t) << endl;

    return 0;
}
