#include<iostream>
#include <stdlib.h>
using namespace std;
int capacity=10;
struct stack{
    int*data;
    int top;
    int bottom;
};
stack*initialization(){
    stack*new1;
    new1=(stack*)malloc(sizeof(stack));
    new1->data=(int*)malloc(capacity*sizeof(int));
    new1->top=-1;
    new1->bottom=0;
    return new1;
}
void display(stack*s){
        cout<<"------------------------------------------"<<endl;
    for(int i=0; i <=s->top ; i++){
        cout<<"No "<<i+1<<" element is:: "<<s->data[i]<<endl;
    }
    cout<<"------------------------------------------"<<endl;
}

bool isEmpty(stack*s){
    if(s->top < 0){
        cout<<"------------------------------------------"<<endl;
        cout<<"Stack Underflow "<<endl;
        cout<<"------------------------------------------"<<endl;
        return true;
    }
    else    
        return false;
}
bool isFull(stack*s){
    if(s->top==capacity-1){
       cout<<"------------------------------------------"<<endl;
        cout<<"Stack Overflow "<<endl;
        cout<<"------------------------------------------"<<endl;
       return true; 
    }
        
    else    
        return false;
}
void push(stack*s,int data){
    if(isFull(s)==true){
        cout<<"can't push stack is full"<<endl;

    }else{
        s->top++;
        s->data[s->top]=data;
        cout<<data<<" pushed succesfulley "<<endl; 
    }
}
int pop(stack*s){
    if(isEmpty(s)==true){
        cout<<"can't pop stack is empty"<<endl;
        return -1;

    }else{
        int p=s->data[s->top];
        s->top--;
        return p;
    }
}
int peek(stack*s){
    if(isEmpty(s)==true){
        cout<<"can't pop stack is empty"<<endl;
        return -1;

    }else{
        return s->data[s->top];
    }
}
void reverse(){
    stack*s1,*s2;
    s1=initialization();
    s2=initialization();
    int num,data;
    cout<<"enter size of number::"<<endl;
    cin>>num;
    for(int j=0 ;j <num;j++){
        cout<<"element"<< j+1 <<" ::";
        cin>>data;
        push(s1,data);
    }
    for(int i=0 ;i < num;i++){
        push(s2,pop(s1));    
    }
    
    display(s2);


}