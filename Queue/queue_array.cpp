#include<iostream>
#include <stdlib.h>
using namespace std;
const int capacity=10;

struct queue{
    int*array;
    int front;
    int back;
};

queue*initialistion(){
    queue*n;
    n=(queue*)malloc(sizeof(queue));
    n->array=(int*)malloc(capacity*sizeof(int));
    n->back=-1;
    n->front=0;
    return n;
}

bool isFull(queue*c){
    if(capacity-1==c->back)
        return true;
    else    
        return false;
}

bool isEmpty(queue*c){
    if(c->back==-1)
        return true;
    else    
        return false;
}
void display(queue*s){
    cout<<"---------------------------------------------"<<endl;
    for(int i=s->front;i<=s->back;i++){
        cout<<"element at position "<<i+1<<" is "<<s->array[i]<<endl;
    }
    cout<<"---------------------------------------------"<<endl;
}

void enqueue(queue*c,int data){
    if(isFull(c)==true){
        cout<<"Can't Enqueue"<<endl;

    }
    else{
        c->back++;
        c->array[c->back]=data;
        cout<<data<<" enqueued successfulley"<<endl;
    }
}
void dequeue(queue*c){
    if(isEmpty(c)==true){
        cout<<"Can't Enqueue"<<endl;
    //    return -1;

    }
    else{
        int b=c->array[c->front];
        c->front++;
        
        cout<<b<<" dequeued successfulley"<<endl;
    //    return b;
    }
}
int peek(queue*c){
    if(isEmpty(c)==true){
        cout<<"Can't Peek"<<endl;
        return -1;

    }
    else
        return c->array[c->front];
}