
#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
    string stack_array[5];
    int top;
public:
    //constructor
    stackArray() {
        top = -1;
    }

    void push() {
        if (top == 4) {//step 1
            cout << "number of data exceeds the limit." << endl;
            return;
        }

        top++;

        cout << "\nenter a element: ";
        string element;
        getline(cin, element);
        top++; //step 2

        stack_array[top] = element; //step 3
        cout << endl;
        cout << element << "ditambahkan(pushed)" << endl;

    }

    void pop() {
        if (empty()) { //step 1
            cout << "\n stack is empty. cannot pop." << endl; //1.a
            return; //1.b
        }

        cout << "\n the popped element is: " << stack_array[top] << endl;
        top--; //step decrement
    }

    //method for check if data is empty
    bool empty() {
        return (top == -1);

    }

    void display() {
        if (empty()) {
            cout << "\nstack is empty." << endl;

        }
        else {
            for (int tmp = 0; tmp <= top; tmp++) {
                cout << stack_array[tmp] << endl;
            }
        }
    }
};

int main()
{
    stackArray s;
    while (true) {
        cout << endl;
        cout << "\n***stack menu**\n";
        cout << "1. push\n";
        cout << "2. pop\n";
        cout << "3. display\n";
        cout << "4. exit\n";
        cout << "\nenter your choice: ";
        string input;
        getline(cin, input);
        char ch = (input.empty() ? '0' : input[0]);
        switch (ch) {
        case '1': {
            cout << "\nenter a element: ";
            string element;
            getline(cin, element);
            s.push();
            break;
        }
        case '2':
            if (s.empty()) {
                cout << "\nstack is empty." << endl;
                break;
                {
                    s.pop();
                    break;
        case '3':
            s.display();
            break;
        case '4':
            return 0;
        default:
            cout << "\ninvalid choice." << endl;
            break;
                }
            }