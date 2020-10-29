#include "Power.h"
#include "RGBA.h"
#include "Stack.h"

int main() {
    Stack stack;
    stack.Reset();
    stack.Print();

    stack.Push(3);
    stack.Push(7);
    stack.Push(5);
    stack.Print();

    stack.Pop();
    stack.Print();

    stack.Pop();
    stack.Pop();
    stack.Print();

    return 0;

}
