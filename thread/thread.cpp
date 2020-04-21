#include <iostream>
#include <thread>
using namespace std;

void thread_task() {
    cout << "thread run haha" << endl;
}

int main() {
    thread t(thread_task);
    t.join();
    for (int i = 0; i < 3; i ++) {
        thread tt([i]{
                cout << i << endl;
                });
        tt.join();
    }
    return 0;
}
