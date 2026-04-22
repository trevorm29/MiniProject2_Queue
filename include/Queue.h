#ifndef QUEUE_H
#define QUEUE_H

class Queue {
public:
    static const int CAP = 10;

    Queue();
    void enqueue(int item); // adds item to the back
    int dequeue();          // removes and returns item from the front
    int front();            // returns front item without removing it
    bool isEmpty();         // returns true if queue has no elements
    bool isFull();          // returns true if queue is at max capacity
    int size();             // returns number of elements in the queue
    void clear();           // removes all elements and resets the queue
    void print();           // prints all elements from front to back

private:
    int data[CAP];
    int head;
    int tail;
    int count;
};

#endif