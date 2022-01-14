#include <iostream>
class Node {
    int _value;
    Node* next;
public:
    /*!
    \brief Метод является конструктором с параметрами для класса Node.
    \param[in] value - значение элемента, которое будет записано в стеке.
    */
    Node(const int value) { _value = value; next = nullptr; };
    friend class Stack;
};

class Stack {
    Node* first, * last;
    size_t size;
public:
    /*!
    \brief Метод является конструктором по умолчанию для класса Stack.
    */
    Stack() :first(nullptr), last(nullptr), size(0) {};
    /*!
    \brief Метод вносит новый элемент в стек.
    \param[in] value - значение элемента, которое будет записано в стеке.
    */
    void push(const int value);
    /*!
    \brief Метод удаляет последний элемент из стека.
    */
    int pop();
    /*!
    \brief Метод возвращает количество элементов в стеке.
    */
    size_t getSize();
    /*!
    \brief Метод изменяет последний элемент стека.
    \param[in] value - значение, которое будет записано в элементе стека.
    */
    void edit(const int value);
    /*!
    \brief Метод возвращает значение последнего элемента.
    */
    int get();
    friend std::ostream& operator<< (std::ostream& out, Stack& Stack);
};
