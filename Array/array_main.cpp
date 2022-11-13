#include<iostream>
#include "array.cpp"
using namespace std;


int main()
{   int num;
    cout<<"Enter Size of array::"<<endl;
    cin>>num;
    int*a=initialisation(num);
    a=input(a,num);
    display(a,num);
    // a=insertion(a,num);
    // display(a,num);
    // traverse(a,num);
    // a=deletion(a,num);
    // display(a,num);
    //search(a,num);
    //average(a,num);
    //iszero(a,num);
    largest(a,num);
    smallest(a,num);
    return 0;
}