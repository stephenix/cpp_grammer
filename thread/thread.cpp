#include <iostream>
#include <thread>
using namespace std;

void thread_task() {
    cout << "thread run haha" << endl;
}

int main() {
    thread t(thread_task);
    t.join();
    return 0;
}
