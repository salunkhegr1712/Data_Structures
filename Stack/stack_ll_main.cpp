#include<iostream>
#include"stack_ll.cpp"
using namespace std;


int main()
{   //top is first node of stack
    node*top;
    top=initialisation(10);
    top=push(top,12);
    top=push(top,14);
    top=push(top,16);
    top=push(top,18);
    display(top);
    top=pop(top);
    top=pop(top);
    display(top);
    
    return 0;
}