#include "Queue.h"
#include <stdexcept>
#include <iostream>

Queue::Queue() : head(0), tail(0), count(0) {}

void Queue::enqueue(int item) {
    if (isFull()) throw std::overflow_error("Queue is full");
    data[tail] = item;
    tail = (tail + 1) % CAP;
    count++;
}

int Queue::dequeue() {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    int val = data[head];
    head = (head + 1) % CAP;
    count--;
    return val;
}

int Queue::front() {
    if (isEmpty()) throw std::underflow_error("Queue is empty");
    return data[head];
}

bool Queue::isEmpty() {
    return count == 0;
}

bool Queue::isFull() {
    return count == CAP;
}

int Queue::size() {
    return count;
}

void Queue::clear() {
    head = 0;
    tail = 0;
    count = 0;
}

void Queue::print() {
    if (isEmpty()) {
        std::cout << "[ empty ]\n";
        return;
    }
    std::cout << "[ ";
    for (int i = 0; i < count; i++) {
        std::cout << data[(head + i) % CAP];
        if (i < count - 1) std::cout << ", ";
    }
    std::cout << " ]\n";
}