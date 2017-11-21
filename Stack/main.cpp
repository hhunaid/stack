//
//  main.cpp
//  Stack
//
//  Created by Hunaid Hassan on 21/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#include <iostream>
#include "Stack.h"
#include <string>
using namespace std;

Stack * inputNumInStack() {
    string num;
    cin >> num;
    Stack * stack = new Stack((int)num.length());
    
    for (int i = 0; i < num.length(); i++) {
        char num_st = num.c_str()[i];
        stack->push(atoi(&num_st));
    }
    return stack;
}

void add(int num1, int num2, int& unit, int&carry) {
    int sum = num1 + num2 + carry;
    unit    = sum % 10;
    carry   = sum / 10;
}

Stack * addStacks(Stack *first, Stack * second) {
    int stackSize = max(first->getSize(), first->getSize()) + 1;
    Stack * resultStack = new Stack(stackSize);
    int carry = 0;
    while (!(first->isEmpty() || second->isEmpty())) {
        int num1, num2, unit;
        first->pop(num1);
        second->pop(num2);
        add(num1, num2, unit, carry);
        resultStack->push(unit);
    }
    while (!first->isEmpty()) {
        int num, unit;
        first->pop(num);
        add(num, 0, unit, carry);
        resultStack->push(unit);
    }
    while (!second->isEmpty()) {
        int num, unit;
        first->pop(num);
        add(num, 0, unit, carry);
        resultStack->push(unit);
    }
    return resultStack;
}

void displayStack(Stack *stack) {
    while (!stack->isEmpty()) {
        int num;
        stack->pop(num);
        cout<<num;
    }
}

int main(int argc, const char * argv[]) {
    Stack * stack1 = inputNumInStack();
    Stack * stack2 = inputNumInStack();
    Stack * result = addStacks(stack1, stack2);
    displayStack(result);
    return 0;
}
