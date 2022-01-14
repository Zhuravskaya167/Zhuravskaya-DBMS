#include "Stack.h"
#include <sstream>
#include <string>

size_t Stack::getSize() {
    return size;
};
void Stack::push(const int value) {
    Node* temp = new Node(value);
    if (last == nullptr) {
        last = first = temp;
    }
    else {
        last->next = temp;
        last = temp;
    };
    size++;
};
int Stack::pop() {
    const int value = last->_value;
    if (size == 1) {
        delete first;
        first = nullptr;
        last = nullptr;
    }
    else {
        Node* tempNode = first;
        for (int i = 1; i < size - 1; i++) {
            tempNode = tempNode->next;
        }
        tempNode->next = nullptr;
        delete last;
        last = tempNode;
    };
    size--;
    return value;
};
void Stack::edit(const int value) {
    this->pop();
    this->push(value);
};
int Stack::get() {
    return last->_value;
};
std::ostream& operator<< (std::ostream& out, Stack& Stack)
{
    std::string reter;
    const size_t size = Stack.getSize();
    for (int i = 0; i < size; i++) {
        std::ostringstream temp;
        temp << Stack.pop();
        reter += temp.str() + " ";
    };
    return out << reter;
};