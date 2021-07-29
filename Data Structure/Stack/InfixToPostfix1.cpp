#include<iostream>
#include <stdlib.h>
using namespace std;
int capacity=10;
struct stack{
    char*data;
    int top;
    int bottom;
};
stack*initialization(){
    stack*new1;
    new1=(stack*)malloc(sizeof(stack));
    new1->data=(char*)malloc(capacity*sizeof(char));
    new1->top=-1;
    new1->bottom=0;
    return new1;
}

int inPrec(char input) 
{ 
    switch (input) { 
    case '+': 
    case '-': 
        return 2; 
    case '*': 
    case '%': 
    case '/': 
        return 4; 
    case '(': 
        return 0; 
    } 
} 
  
// function to return precedence value 
// if operator is present outside stack. 
int outPrec(char input) 
{ 
    switch (input) { 
    case '+': 
    case '-': 
        return 1; 
    case '*': 
    case '%': 
    case '/': 
        return 3; 
    case '(': 
        return 100; 
    } 
}

void display(stack*s){
        
    for(int i=0; i <=s->top ; i++){
        cout<<"No "<<i+1<<" element is:: "<<s->data[i]<<endl;
    }
    
}

bool isEmpty(stack*s){
    if(s->top < 0){
      return true;
    }
    else    
        return false;
}
bool isFull(stack*s){
    if(s->top==capacity-1){
       
        cout<<"Stack Overflow "<<endl;
        
       return true; 
    }
        
    else    
        return false;
}
void push(stack*s,char data){
    if(isFull(s)==true){
        cout<<"can't push stack is full"<<endl;

    }else{
        s->top++;
        s->data[s->top]=data;
        //cout<<data<<" pushed succesfulley "<<endl; 
    }
}
char pop(stack*s){
    if(isEmpty(s)==true){
        cout<<"can't pop stack is empty"<<endl;
        return -1;

    }else{
        int p=s->data[s->top];
        s->top--;
        return p;
    }
}
char peek(stack*s){
    if(isEmpty(s)==true){
        cout<<"can't pop stack is empty"<<endl;
        return -1;

    }else{
        return s->data[s->top];
    }
}
int isOperand(char input) 
{ 
    if (input >= 65 && input <= 90 
        || input >= 97 && input <= 122) 
        return 1; 
    return 0; 
} 