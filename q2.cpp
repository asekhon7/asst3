// student id 1024030287
// asst3 q2
#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
private:
    char arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void push(char c) {
        if (!isFull()) {
            arr[++top] = c;
        }
    }

    char pop() {
        if (!isEmpty()) {
            return arr[top--];
        }
        return '\0';
    }
};

int main() {
    string str;
    Stack s;

    cout << "Enter a string: ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        s.push(str[i]);
    }

    cout << "Reversed string: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }

    cout << endl;
    return 0;
}
