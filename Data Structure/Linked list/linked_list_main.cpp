#include<iostream>
#include "linked_list.cpp"
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
    fourth->next=head;
    fifth->next=last;
    display(head);
    head=insertion_at_head(head,8);
    last=insertion_at_last(head,last,22);
    head=insertion_at_index(head,13,3);
    display(head);

    head=deletion_head(head);
    display(head);
    last=deletion_end(head,last);
    
    display(head);
    head = deletion_index(head,3);
    head=deletion_data(head,14);
    display(head);
    two_sum(head,20);

    //loop(head);
    return 0;
}