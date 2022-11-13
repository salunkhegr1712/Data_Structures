#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    node*next;
    node*prev;
};
node*initialisation(int data){
    node*a;
    a=(node*)malloc(sizeof(node));
    a->data=data;
    a->next=NULL;
    a->prev=NULL;
    return a;
}
void display_simple(node*head){
    node*a=head;
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"elements are simple traversal ::" <<endl;
    while(a->next!=NULL){
        cout<<""<<a->data<<" ";
        a=a->next;
    }
    cout<<""<<a->data<<" ";
    cout<<endl<<"-------------------------------------------------------"<<endl;
    
}
void display_reverse(node*last){
    node*a=last;
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"elements are reverse traversal ::" <<endl;
    while(a->prev!=NULL){
        cout<<""<<a->data<<" ";
        a=a->prev;
    }
    cout<<""<<a->data<<" ";
    cout<<endl<<"-------------------------------------------------------"<<endl;

}

void search(node*a,int data){
    node*c=a;
    int m=0;
    while(c->next!=NULL){
        if(c->data==data){
            cout<<"Found succesfully"<<endl;
            m=1;
            break;
        }
        c=c->next;
    }
    if(m==0){
            cout<<" Not Found "<<endl;
        }
}

node*insertion_head(node*head,int data){
    node*ptr=initialisation(data);
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    
    return head;
}
node*insertion_last(node*last,int data){
    node*ptr=initialisation(data);
    last->next=ptr;
    ptr->prev=last;
    last=ptr;
    return last;
}
node* insertion_index(node*head,int data,int index ){
    node*p,*ptr=head;
    node*c=initialisation(data);
    int i=1;
    while(i < index){
        ptr=ptr->next;
        p=ptr->next;
        i++;
    }
    ptr->next=c;
    c->next=p;
    p->prev=c;
    c->prev=ptr;
    return head;    
}
node*insertion_after(node*head,int data,int data1){
    node*a=head,*c,*d;
    d=initialisation(data1);
    while(a->data!=data){
        a=a->next;
        c=a->next;
    }
    a->next=d;
    d->prev=a;
    d->next=c;
    c->prev=d;
    return head;

}
void traverse(node*head,int index){
    node*a=head;
    int i=1;

    while(i<index){
        a=a->next;
        i++;
    }
    cout<<"Node "<< i<<" is "<<a->data<<endl;

}

node*deletion_head(node*head){
    node*a=head;
    a=a->next;
    a->prev=NULL;
    free(head);
    return a;
}

node*deletion_last(node*last){
    node*a=last;
    a=a->prev;
    a->next=NULL;
    free(last);
    return a;
}

node*deletion_index(node*head,int index){
    node*a=head,*b,*c;
    int i=1;
    while (i < index)
    {   
        b=a;
        a=a->next;
        c=a->next;
        i++;
    }
    b->next=c;
    c->prev=b;
    free(a);
    return head;
}
