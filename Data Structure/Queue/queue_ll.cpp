#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
    int data;
    node*next;
};
//it initialise the node and return it as pointer
node*initialisation(int data){
    node*new1;
    
    new1=(node*)malloc(sizeof(node));
    if(new1==NULL){
        return NULL;
    }
    else{
        new1->next=NULL;
        new1->data=data;
        return new1;
    }
}
void display(node*a){
    node*c=a;
    cout<<"element  are::"<<endl;
    while(c->next!=NULL){
        cout<<"  "<<c->data;
        c=c->next;
    }
    //as when null happens last node is not printed so we do this so we can print the 
    //last element inside the node
    cout<<"  "<<c->data<<endl;
}
node*insertion_at_last(node*head,node*last,int data){
    node*ptr=head;
    node*h1=initialisation(data);
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=h1;
    last=h1;
    return head;
}
node*deletion_head(node*head){
    node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

void enqueque(node*front,node*back,int data){
    front=insertion_at_last(front,back,data);
    cout<<"enquequed succesfully "<<endl;

}
node* dequeque(node*front){
    front=deletion_head(front);
    cout<<"dequequed succesfully "<<endl;
    return front;
}
int peek(node*front){
    return front->data;
    
}