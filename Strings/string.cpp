#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string a;
    string b;

    cout<<"enter the first string"<<endl;
    getline(cin,a);

    cout<<"enter the second string"<<endl;
    getline(cin,b);

    string c;
    c=a+b;
    string d=a,e=b;
    cout<<"concatation is "<< c<<endl;
    cout<<"copy string of first string is :: "<<d<<endl;
    cout<<"copy string of second string is :: "<<e<<endl;
    //there are library function with respect top the the string as object in cpp
    //there are string library is also there to deal with char*
    //you have see that which will you prefer but cpp string are far supirior
    // than char* string  sdecide wisely.
    return 0;
}