#include <iostream>
#include "stack.h"

int main() {
    // Integer stack
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Top element in intStack: " << intStack.top() << std::endl;
    intStack.pop();
    std::cout << "Top element after pop: " << intStack.top() << std::endl;

    // String stack
    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    std::cout << "Top element in stringStack: " << stringStack.top() << std::endl;
    stringStack.pop();
    std::cout << "Top element after pop: " << stringStack.top() << std::endl;

    return 0;
}
