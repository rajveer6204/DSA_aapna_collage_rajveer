#include<iostream>
using namespace std;

int main(){
    int age; 
    cout<<"Enter your age :";
    cin>>age;

    if (age>=18){
        cout<<"You can Vote";
    }else{
        cout<<"You Can't Vote ";
    }
    return 0;
}