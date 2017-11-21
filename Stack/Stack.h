//
//  Stack.h
//  Stack
//
//  Created by Hunaid Hassan on 21/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

class Stack {
private:
    int *arr;
    int size; //max size
    int top; //index of top
public:
    Stack(int);
    ~Stack();
    void push(int);
    bool pop(int &);
    bool isFull();
    bool isEmpty();
    int getSize();
};

#endif /* Stack_h */
