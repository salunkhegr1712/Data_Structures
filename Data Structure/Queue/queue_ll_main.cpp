#include<iostream>
#include "queue_ll.cpp"
using namespace std;

int main()
{
    node*front=initialisation(17);
    node*back=initialisation(18);
    front->next=back;
    enqueque(front,back,19);
    enqueque(front,back,20);
    enqueque(front,back,21);
    enqueque(front,back,22);
    display(front);
    front=dequeque(front);
    front=dequeque(front);
    display(front);
    cout<<"peeked element :: "<<peek(front)<<endl;
    return 0;
}