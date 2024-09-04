#include "Array.h"
#include <iostream>

using namespace std;

DynamicArray::DynamicArray() : data(nullptr), size(0) {}

DynamicArray::DynamicArray(int size) : data(new double[size]), size(size) {}

DynamicArray::DynamicArray(const DynamicArray& other) : data(new double[other.size]), size(other.size) {
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}

DynamicArray::~DynamicArray() {
    delete[] data;
}

void DynamicArray::resize(int newSize) {
    double* newData = new double[newSize];
    int copySize = newSize < size ? newSize : size;
    for (int i = 0; i < copySize; i++) {
        newData[i] = data[i];
    }
    delete[] data;
    data = newData;
    size = newSize;
}

double& DynamicArray::operator[](int index) {
    return data[index];
}

const double& DynamicArray::operator[](int index) const {
    return data[index];
}

int DynamicArray::getSize() const {
    return size;
}

double DynamicArray::getMax() const {
    double max = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max;
}

double DynamicArray::getMin() const {
    double min = data[0];
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }
    return min;
}

int DynamicArray::getMaxIndex() const {
    double max = data[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (data[i] > max) {
            max = data[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int DynamicArray::getMinIndex() const {
    double min = data[0];
    int minIndex = 0;
    for (int i = 1; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void DynamicArray::assign(const DynamicArray& other) {
    resize(other.size);
    for (int i = 0; i < size; i++) {
        data[i] = other.data[i];
    }
}