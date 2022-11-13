#include<iostream>
#include"array.cpp"
using namespace std;
//say target is 10 and so we search for two numbers inside from the array that will 
//add and achieve target i.e. 10 say 7,3 in a prticular array so yiu have to return 
//here location
void two_sum(int*a,int num,int target){

    int i=0,j=0;
    for(i;i<num;i++){
        for(j;i<j<num;j++){
            if(a[i]+a[j]==target){
                cout<<"found succesfulley"<<endl;
                cout<<"posittions are : "<<i<<" and "<<j<<endl;
            }
        }
    }
}

int main()
{   int num=5;
    int a[]={7,5,8,9,10,16,1};
    // cout<<"enter the size of the arrray";
    // cin>>num;
    //int*a=initialisation(num);
    // input(a,num);
    
    two_sum(a,5,17);

    return 0;
}