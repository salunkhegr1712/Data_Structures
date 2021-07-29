#include<iostream>
#include "circular_list.cpp"
using namespace std;

int main()
{   
    node*head=initialisation(head,10);
    node*second=initialisation(second,12);
    node*third=initialisation(third,14);
    node*fourth=initialisation(fourth,16);
    node*fifth=initialisation(fifth,18);
    node*last=initialisation(last,20);

    head->next=second;

    second->next=third;
    
    third->next=fourth;
    
    fourth->next=fifth;
    
    fifth->next=last;
    
    last->next=head;

    display(head);
    head=insertion_start(head,last,22);
    head=insertion_start(head,last,24);
    head=insertion_start(head,last,26);
    display(head);

    
    return 0;
}