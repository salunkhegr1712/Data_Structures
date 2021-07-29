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
    if(new1==NULL){
        return NULL;
    }
    else{
        new1->next=NULL;
        new1->data=data;
        return new1;
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
//these will insert new node to the head 
node*insertion_at_head(node*head,int data){

    node*h1=initialisation(h1,data);
    h1->next=head;
    head=h1;
    return head;
}

//these will insert new node to the last
node*insertion_at_last(node*head,node*last,int data){
    node*ptr=head;
    node*h1=initialisation(h1,data);
    while (ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=h1;
    last=h1;
    return last;
}
//it used a new node which you want to insert in a specific index
node*insertion_at_index(node*head,int data,int index){
    int i=1;
    node*ptr=head;
    node*h=ptr->next;
    node*h1=initialisation(h1,data);
    while (i<index){
        h=h->next;
        ptr=ptr->next;
        i++;
    }
        ptr->next=h1;
        h1->next=h;
    
    return head;
}
//to see which node has which data
void traverse(node*a,int num){
    node*b=a;
    int i=1;
    while(i < num){
        i++;
        b=b->next;
    }
    cout<<"element "<< i<<" is "<<b->data<<endl;
}
//to search that a perticular element is present or not
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
//deleteing the element present at head location
node*deletion_head(node*head){
    node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
//deleteing the element present at end location
node*deletion_end(node*head,node*last){
    node*ptr=head;
    node*a;
    while(ptr->next!=NULL){
        a=ptr;
        ptr=ptr->next;
    }
    last=a;
    a->next=NULL;
    free(ptr);
    return last;
}
//deleteing the element present at perticular index
node*deletion_index(node*head,int index){
    int i=1;
    node*ptr=head;
    node*a,*b;
    while(i<index){ 
        b=ptr;   
        ptr=ptr->next;
        a=ptr->next;
        i++;
    }
    b->next=a;
    free(ptr);
    return head;
}
node*deletion_data(node*head,int data){
    int i=1,m=0;
    node*ptr=head;
    node*a,*b;
    while(ptr->next!=NULL){ 
        if(ptr->data==data){
            m=1;
            break;
        }
        b=ptr;   
        ptr=ptr->next;
        a=ptr->next;
        i++;
    }
    if(m==1){
        cout<<"succesfull"<<endl;
        b->next=a;
        free(ptr);
        return head;
    }
    else{
        cout<<"unsuccesfull"<<endl;
        return head;
    }
}

void two_sum(node*head,int target){
    node*p=head,*ptr=head;
    int i=1,j=1;

    while(p->next!=NULL){
        while(ptr->next!=NULL){
            if(p->data+ptr->data==target){
                cout<<"found succesfulley"<<endl;
                cout<<"posittions are : "<<p->data<<" at "<<i<<" and "<<ptr->data<<" at "<<j<<endl;
            }
            j++;
            ptr=ptr->next;
        }
        i++;
        p=p->next;
    }

}

// void loop(node*head){
//     node*p=head,*ptr=head;
//     while(p->next!=NULL){
//         while(ptr->next!=NULL){
//             if(p->next==ptr){
//                 cout<<"loop found"<<endl;
//                 return ;
//             }
        
//             ptr=ptr->next;
//         }
    
//         p=p->next;
//     }
//     cout<<"not found";
//     return ;
// }