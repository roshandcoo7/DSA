#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX 100;

class stack{
    int top;

public:
    int a[MAX];

    stack() { top = -1 }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
}