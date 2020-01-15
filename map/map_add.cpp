#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;


int main() {
    map<int, string> mp;
    mp[1] = "hello"; 
    mp[2] = "world"; 

    map<int, string>::iterator iter; 
    for (iter = mp.begin(); iter != mp.end(); iter ++)
        cout << "index: " << iter->first << " value: " << iter->second << endl;
    mp[1] = "ahaha";
    for (iter = mp.begin(); iter != mp.end(); iter ++)
        cout << "index: " << iter->first << " value: " << iter->second << endl;

    return 0;
}
