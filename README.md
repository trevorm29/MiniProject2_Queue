# MiniProject4_Queue

## File Structure

MiniProject4_Queue/
├── include/
│   └── Queue.h
├── src/
│   ├── Queue.cpp
│   └── main.cpp
├── tests/
│   └── TESTING.md
└── README.md

## Build & Run

g++ -Iinclude src/Queue.cpp src/main.cpp -o queue
./queue

## Example Usage

1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Print Queue
6. Exit
Choice: 1
Enter value: 42
42 enqueued.

Choice: 3
Front: 42

Choice: 5
[ 42 ]

Choice: 2
Dequeued: 42

Choice: 6

## Design Notes

- Array-based circular queue with a fixed capacity of 10
- Wrap-around is handled using modulo arithmetic on head and tail indices
- enqueue throws std::overflow_error when full
- dequeue and front throw std::underflow_error when empty