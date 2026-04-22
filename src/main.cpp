#include <iostream>
#include "Queue.h"

int main() {
    Queue q;
    int choice, val;

    while (true) {
        std::cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Size\n5. Print Queue\n6. Exit\nChoice: ";
        std::cin >> choice;

        if (choice == 1) {
            std::cout << "Enter value: ";
            std::cin >> val;
            try {
                q.enqueue(val);
                std::cout << val << " enqueued.\n";
            } catch (std::exception& e) {
                std::cout << "Error: " << e.what() << "\n";
            }
        } else if (choice == 2) {
            try {
                std::cout << "Dequeued: " << q.dequeue() << "\n";
            } catch (std::exception& e) {
                std::cout << "Error: " << e.what() << "\n";
            }
        } else if (choice == 3) {
            try {
                std::cout << "Front: " << q.front() << "\n";
            } catch (std::exception& e) {
                std::cout << "Error: " << e.what() << "\n";
            }
        } else if (choice == 4) {
            std::cout << "Size: " << q.size() << "\n";
        } else if (choice == 5) {
            q.print();
        } else if (choice == 6) {
            break;
        } else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}