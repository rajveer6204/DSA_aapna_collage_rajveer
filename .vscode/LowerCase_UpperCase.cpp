#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a CHar : ";
    cin>>ch;
    if (ch>='a'&&ch<'z')
    {
        cout<<"LowerCase";
    }else{
        cout<<"UpperCase";
    }
    
return 0;
}