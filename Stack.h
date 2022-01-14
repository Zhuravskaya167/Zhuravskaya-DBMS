#include <iostream>
class Node {
    int _value;
    Node* next;
public:
    /*!
    \brief ����� �������� ������������� � ����������� ��� ������ Node.
    \param[in] value - �������� ��������, ������� ����� �������� � �����.
    */
    Node(const int value) { _value = value; next = nullptr; };
    friend class Stack;
};

class Stack {
    Node* first, * last;
    size_t size;
public:
    /*!
    \brief ����� �������� ������������� �� ��������� ��� ������ Stack.
    */
    Stack() :first(nullptr), last(nullptr), size(0) {};
    /*!
    \brief ����� ������ ����� ������� � ����.
    \param[in] value - �������� ��������, ������� ����� �������� � �����.
    */
    void push(const int value);
    /*!
    \brief ����� ������� ��������� ������� �� �����.
    */
    int pop();
    /*!
    \brief ����� ���������� ���������� ��������� � �����.
    */
    size_t getSize();
    /*!
    \brief ����� �������� ��������� ������� �����.
    \param[in] value - ��������, ������� ����� �������� � �������� �����.
    */
    void edit(const int value);
    /*!
    \brief ����� ���������� �������� ���������� ��������.
    */
    int get();
    friend std::ostream& operator<< (std::ostream& out, Stack& Stack);
};