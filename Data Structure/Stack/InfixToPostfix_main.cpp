#include<iostream>
#include<string.h>
#include "InfixToPostfix1.cpp"
using namespace std;

void Infix_To_Postfix(char a[]){
    stack*b=initialization();
    
    
    int i=0;
    while(a[i]!='\0'){
        if(isOperand(a[i])){
            cout<<""<<a[i];
            
        }
        else if(a[i]=='/' ||a[i]=='+' ||a[i]=='-' ||a[i]=='*' ||a[i]=='%' || a[i] =='('){
            if(isEmpty(b)==true){
                push(b,a[i]);
            }
            else if(outPrec(a[i]) > inPrec(b->data[b->top])){
                
                cout<<""<<pop(b);
                
            }
            else {
                while(isEmpty(b)!=1 &&outPrec(a[i]) < inPrec(b->data[b->top])){
                   cout<<""<<pop(b);
                    }
                
                  
            }    
        }
        else if(a[i]==')'){
                while(b->data[b->top]='('){
                    cout<<""<<pop(b);
                    if(isEmpty(b)==1){
                        cout<<endl<<"Invalid!!"<<endl;
                        exit(1);
                    }
                }
                    cout<<""<<pop(b);

            }

        i++;
    }
    while(isEmpty(b)!=1){
        cout<<""<<pop(b);
    }
       while (isEmpty(b)!=1) { 
        if (b->data[b->top] == '(') { 
            printf("\n Wrong input\n"); 
            exit(1); 
        } 
        cout<<""<<b->data[b->top]; 
        pop(b); 
    }
}

int main(){
    
    char c[20];

    cout<<"=============================================="<<endl;
    cout<<"enter the string::"<<endl;
    cin.getline(c,20);
    cout<<endl<<"=============================================="<<endl;
    cout<<"entered string::"<<endl<<c<<endl;
    cout<<"=============================================="<<endl;
    
    Infix_To_Postfix(c);
}