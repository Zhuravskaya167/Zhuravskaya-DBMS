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

    /*!
    \brief ������ ������������ �����������.
    \param[in] const Stack& - ������ �� Stack
    */
    Stack(const Stack&) = delete;

    /*!
    \brief ������ ��������� ������������ �����������.
    \param[in] const Stack& - ������ �� Stack
    */
    Stack& operator=(const Stack&) = delete;

    /*!
    \brief ������ ������������ �����������.
    \param[in] const Stack&& - ������ �� Stack
    */
    Stack(Stack&&) = delete;

    /*!
    \brief ������ ��������� ������������ �����������.
    \param[in] const Stack&& - ������ �� Stack
    */
    Stack& operator=(Stack&&) = delete;

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
    size_t getSize() const;
    /*!
    \brief ����� �������� ��������� ������� �����.
    \param[in] value - ��������, ������� ����� �������� � �������� �����.
    */
    void edit(const int value);
    /*!
    \brief ����� ���������� �������� ���������� ��������.
    */
    int get() const;
    friend std::ostream& operator<< (std::ostream& out, Stack& Stack);
};