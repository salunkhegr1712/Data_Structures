#include<iostream>
#include "queue_array.cpp"
using namespace std;

int main()
{
    queue*n=initialistion();
    enqueue(n,10);
    enqueue(n,9);
    enqueue(n,8);
    enqueue(n,7);
    enqueue(n,6);
    enqueue(n,5);
    display(n);
    // dequeue(n);
    // dequeue(n);
    // dequeue(n);
    // display(n);
    cout<<"Top element is "<<peek(n)<<endl;
    return 0;
}