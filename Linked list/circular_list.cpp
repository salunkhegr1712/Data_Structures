#include<iostream>
#include<stdlib.h>
using namespace std;

//in cpp there tis no need for using struct node* or typedef you just can
// use node* just like we are you using the class in the program 
struct node{
    int data;
    node*next;
};
//it initialise the node and return it as pointer
node*initialisation(node*head,int data){
    node*new1;
    
    new1=(node*)malloc(sizeof(node));
    
    new1->next=NULL;
    new1->data=data;
    return new1;
    
}
void display(node*head){
    node*ptr=head;
    cout<<endl<<"elements are::"<<endl;
    do{
       
        cout<<"  "<<ptr->data;
        ptr=ptr->next; 
    }while(ptr!=head);
      
   //as when null happens last node is not printed so we do this so we can print the 
    //last element inside the node
}
node*insertion_start(node*head,node*last,int data){
    node*ptr=head;
    node*s=initialisation(s,data);
    last->next=s;
    s->next=head;
    last=s;
    return head;
}
node*insertion_after(node*head,int data){

    node*ptr=head;
    while(ptr->data != data){
        ptr=ptr->next;
    }

    node*s=initialisation(s,data);
    s->next=ptr->next;
    ptr->next=s;
    return head;
}