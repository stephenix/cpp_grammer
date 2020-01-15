#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main() {
    unique_ptr<string> films[] = {
        unique_ptr<string>(new string("happiness")),
        unique_ptr<string>(new string("look for dog"))
    };

    unique_ptr<string> temp;
    temp = films[1];

    for (int i = 0; i < 2; i ++)
        cout << *films[i] << endl;

    return 0;
}
