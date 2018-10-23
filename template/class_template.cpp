#include <iostream>
#include <vector>
using namespace std;

// TODO:Exception not work
template <class T>
class Stack {
private:
    vector<T> elems;
public:
    void push(T const& );
    void pop(); 
    T top() const;
    bool empty() const {
        return elems.empty();
    }
};

template <class T>
void Stack<T>::push(T const& elem) {
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
    if (elems.empty())
        throw "empty stack";
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const {
    if (elems.empty())  
        throw "empty stack";
    return elems.back();
}

int main() {
    try {
        Stack<int> int_stack;
        Stack<string> str_stack;

        int_stack.push(60);
        cout << int_stack.top() << endl;

    }
    catch(exception const& ex) {
        cout << "ception: " << endl;
        return -1;
    }
    return 0;
}
