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
bool isEmpty(node*top){
    if(top==NULL)
        return true;
    else 
        return false;
}

node* push(node*top,int data){
    
    node*h1=initialisation(data);
    h1->next=top;
    top=h1;
    cout<<"push successfulley"<<endl;
    return top;

}
node* pop(node*top){
    if(isEmpty(top)==true){
        return NULL;
    }
    else{
    
        node*ptr=top;
        top=top->next;
        free(ptr);
        return top;
        
    }
    
}

//it is used to display element or data given inside of the blocks
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


//these will insert new node to the top
// node*insertion_at_head(node*head,int data){

//     node*h1=initialisation(data);
//     h1->next=head;
//     head=h1;
//     return head;
// }

//deleteing the element present at head location
// node*deletion_head(node*head){
//     node*ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }





