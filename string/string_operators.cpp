#include <iostream>
#include <string>
using namespace std;

int test() {
    string abc = "abc";
    abc.append("xxx");
    cout << abc << endl;

    abc.assign("abcdefg");
    cout << abc << endl;

    if (abc == "xxxx")
        cout << "equal xxx" << endl;
    else
        cout << "not equal xxx" << endl;

    int pos = abc.find("b");
    cout << pos << " " << abc.length() << endl;
    pos = abc.find("z");
    cout << "npos:" << string::npos << endl;
    if (pos == string::npos)
        cout << "haha" << endl;
    cout << pos << endl;

    return 0;
}

bool append() {
    string abc;
    if (abc == "")
        cout << "abc is empty" << endl;
    abc = abc.append("hello").append("world");
    cout << abc << endl;
}

int main() {
    append();
    return 0;
}

