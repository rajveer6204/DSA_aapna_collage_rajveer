#include<iostream>
using namespace std;
int main(){

    char ch;
    cout<<"Enter the char : ";
    cin>>ch;
 
    while (ch>='a'&& ch<'z')
    {
        cout<<ch<<" ";
        ch++;
    }
return 0;
}