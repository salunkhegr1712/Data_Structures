#include<iostream>
#include "stack_array.cpp"
using namespace std;

int main()
{
    stack*s=initialization();
    push(s,5);
    push(s,7);
    push(s,9);
    push(s,11);
    display(s);

    cout<<"peeked element is :: "<<peek(s)<<endl;
    cout<<"popped element is :: "<<pop(s)<<endl;
    cout<<"popped element is :: "<<pop(s)<<endl;
    
    //reverse();
    return 0;
}