#include<iostream>
#include"doubley_linked_list.cpp"
using namespace std;

int main()
{
    node*head=initialisation(12);
    node*last=initialisation(14);
    
    head->next=last;
    last->prev=head;

//insertion at the heads location
    head=insertion_head(head,10);
    head=insertion_head(head,8);
    head=insertion_head(head,6);
    
//insertion at last
    last=insertion_last(last,16);
    last=insertion_last(last,18);
    last=insertion_last(last,20);

    display_simple(head);
    //display_reverse(last);

    //head=insertion_index(head,11,3);
    //display_simple(head);
    //head=insertion_after(head,12,13);
    // display_simple(head);
    // //traverse(head,5);
    // head=deletion_head(head);
    // display_simple(head);
    // last=deletion_last(last);
    // head=deletion_index(head,4);
    // display_simple(head);
    search(head,12);
                    
    return 0;
}