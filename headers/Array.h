#ifndef ARRAY_H
#define ARRAY_H

class DynamicArray {
private:
    double* data; // указатель на динамический массив
    int size; // размер динамического массива
public:
    DynamicArray(); // конструктор по умолчанию
    DynamicArray(int size); // конструктор с заданием размера
    DynamicArray(const DynamicArray& other); // конструктор копирования
    ~DynamicArray(); // деструктор

    void resize(int newSize); // изменение размера массива
    double& operator[](int index); // перегрузка оператора индексации для доступа к элементу массива
    const double& operator[](int index) const; // перегрузка оператора индексации для доступа к элементу массива (в режиме только чтения)

    int getSize() const; // получение размера массива
    double getMax() const; // получение максимального элемента массива
    double getMin() const; // получение минимального элемента массива
    int getMaxIndex() const; // получение индекса максимального элемента массива
    int getMinIndex() const; // получение индекса минимального элемента массива

    void assign(const DynamicArray& other); // присваивание одного массива другому с выравниванием размеров
};

#endif