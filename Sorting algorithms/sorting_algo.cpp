#include<iostream>
using namespace std;
void linear_search(int array[],int data){
    bool a=false;
    int array_length=sizeof(array[array_length])/sizeof(int);
    for(int i=0;i<array_length;i++){
        if(array[i]==data){
            a=true;
            cout<<"the value "<<data<<" is found at position "<<i+1<<endl;
            return;
        }
    }
    if(a==false)
        
        cout<<"the value "<<data<<" is Not-found at position "<<endl;   
}

int binary_search(int array[], int x,int l,int r)
{
    // int l=0, r=sizeof(array)/sizeof(array[0]);
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (array[m] == x)
            cout<<"found"<<endl;

            return 1;
  
        // If x greater, ignore left half
        if (array[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    //linear_search(a,55);
    cout<<""<<binary_search(a,10,0,10);


    //binarySearch(a,0,array_length,10);
    return 0;
}
