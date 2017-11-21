//
//  Stack.cpp
//  Stack
//
//  Created by Hunaid Hassan on 21/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#include "Stack.h"

Stack::Stack(int size) {
    this->top  = 0;
    this->size = size;
    arr = new int[size];
}

Stack::~Stack(){
    delete [] arr;
}

bool Stack::isFull() {
    return size == top;
}

bool Stack::isEmpty(){
    return top == 0;
}

int Stack::getSize() {
    return size;
}

void Stack::push(int num) {
    if (isFull()) {
        return;
    }
    arr[top++] = num;
}

bool Stack::pop(int & num) {
    if (isEmpty()) {
        return false;
    }
    num = arr[--top];
    return true;
}
