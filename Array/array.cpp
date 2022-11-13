//including required library
#include<iostream>
#include<stdlib.h>
using namespace std;
 
int* initialisation(int num){
    int *n;
    n=(int*)malloc(sizeof(int)*num);
    return n;

}

//taking input from user 
 int* input(int*array,int limit){
    for(int i=0;i<limit;i++){
        cout<<i+1<<" element ::"<<endl;
        cin>>array[i];
    }
    return array;
}

//traversing and siaplay are different
 void display(int*array,int limit){
    for(int i=0;i<limit;i++){
        cout<<"No "<<i+1<<" element is:: "<<array[i]<<endl;
    }
}
//traversing in array is so easy
 void traverse(int*array,int limit){
    int a;
    cout<<"enter position you want to see::"<<endl;
    cin>>a;
    cout<<" value at position "<<a<<" is "<<array[a-1]<<endl;
}
//this function add a given value to that given position
int* insertion(int*array,int num){
    int a,position;
    cout<<"enter the value you want to insert"<<endl;
    cin>>a;
    cout<<"enter the position at which you want to insert"<<endl;
    cin>>position;
    int i=0;
    array[position-1]=a;
    return array;

}
//after deletion value at that position become numm means 0
int* deletion(int*array,int num){
    int a,position;
    cout<<"enter the position at which you want to delete"<<endl;
    cin>>position;
    int i=0;
    array[position-1]=0;
    return array;
}
void search(int *array,int num){
    int a,i=0;
    cout<<"enter number you want to search"<<endl;
    cin>>a;
    while(i < num){
        if(array[i]==a)
            cout<<"Found Successfully at position "<<i+1<<endl;
        
        i++;
    }
}
//it find sum and average of all element in array
void average(int*a,int num){
    int sum=0;
    for(int i=0;i<num;i++){
        sum=sum + a[i];
    }
    //here i used type casting
    
    cout<<"Sum of all element is :: "<<sum<<endl;
    cout<<"The Average is :: "<<sum/num<<endl;

}
void iszero(int*a,int num){
    int i=0,m=0;

    while(i < num){
        if(a[i]== 0){
            cout<<"Found at position "<<i+1<<endl;
            m=1;
        }
        i++;
    }
    if(m==0){
        cout<<"0 (zero) is not present in array"<<endl;
    }
}
void smallest(int*a,int num){
    int m,i=0;
    m=a[i];
    while(i<num){
        if(a[i] < m ){
            m=a[i];
    
        }
        i++;
    }
    cout<<"The smallest Element in Array is:: "<<m<<endl;
}
void largest(int*a,int num){
    int max,i=0,j;
    max=a[i];
    while(i<num){
        if(a[i] > max ){
            max=a[i];
            j=i+1;
        }
        i++;
    }
    cout<<"The Maximum Element in Array is:: "<<max<<" at position "<<j<<endl;
}


