#include "Стек.h"

using namespace std;

void printMENU() {
    cout << "\n     MENU\n\n";
    cout << "1) Print Stack\n";
    cout << "2) Append element\n";
    cout << "3) Delete element\n";
    cout << "4) Edit element\n";
    cout << "5) Print Stack ('<<' overload)\n";
    cout << "\nExit - q\n";
}

void printElements(Stack M) {
    if (M.getSize() == 0) {
        cout << "Stack is empty!" << endl;
    }
    else if (M.getSize() == 1) {
        cout << M.get() << endl;
    }
    else {
        for (int i = 1; i < M.getSize(); i++) {
            cout << " ... ";
        };
        cout << M.get() << endl;
    }
};

int main()
{
    Stack M;
    char key = '0';
    while (key != 'q') {
        system("cls");
        printMENU();
        cin >> key;
        int k = 0;
        switch (key) {
        case '1':
            cout << "Stack items: ";
            printElements(M);
            break;
        case '2':
            cout << "Enter element to append: ";
            cin >> k;
            M.push(k);
            cout << "Done." << endl;
            break;
        case '3':
            M.pop();
            cout << "Done." << endl;
            break;
        case '4':
            cout << "Enter new value: ";
            cin >> k;
            M.edit(k);
            cout << "Done." << endl;
            break;
        case '5':
            cout << "Elements of Stack: " << M << endl;
            cout << "Done." << endl;
            break;
        }
        system("pause");
    }
    return 0;
}