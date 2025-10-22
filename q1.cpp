// student id 1024030287
// asst 3 q1
#include <iostream>
using namespace std;

#define SIZE 100

class Stack {
private:
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed" << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << arr[top--] << " popped" << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top: " << arr[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        } else {
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.isEmpty 5.isFull 6.Display 7.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
        } else if (choice == 2) {
            s.pop();
        } else if (choice == 3) {
            s.peek();
        } else if (choice == 4) {
            if (s.isEmpty())
                cout << "Stack is empty" << endl;
            else
                cout << "Stack is not empty" << endl;
        } else if (choice == 5) {
            if (s.isFull())
                cout << "Stack is full" << endl;
            else
                cout << "Stack is not full" << endl;
        } else if (choice == 6) {
            s.display();
        } else if (choice == 7) {
            cout << "Exiting" << endl;
        } else {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 7);

    return 0;
}
