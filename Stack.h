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

    /*!
    \brief Запрет конструктора копирования.
    \param[in] const Stack& - ссылка на Stack
    */
    Stack(const Stack&) = delete;

    /*!
    \brief Запрет оператора присваивания копирования.
    \param[in] const Stack& - ссылка на Stack
    */
    Stack& operator=(const Stack&) = delete;

    /*!
    \brief Запрет конструктора перемещения.
    \param[in] const Stack&& - ссылка на Stack
    */
    Stack(Stack&&) = delete;

    /*!
    \brief Запрет оператора присваивания перемещения.
    \param[in] const Stack&& - ссылка на Stack
    */
    Stack& operator=(Stack&&) = delete;

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
    size_t getSize() const;
    /*!
    \brief Метод изменяет последний элемент стека.
    \param[in] value - значение, которое будет записано в элементе стека.
    */
    void edit(const int value);
    /*!
    \brief Метод возвращает значение последнего элемента.
    */
    int get() const;
    friend std::ostream& operator<< (std::ostream& out, Stack& Stack);
};