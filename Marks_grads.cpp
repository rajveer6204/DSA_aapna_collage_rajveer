#include<iostream>
using namespace std;

int main(){
    int Grads;
    cout<<"Enter Student Marks : ";
    cin>>Grads;
    
    if(Grads>=90){
        cout<<"Your are PASS \n"<<"A";
    }else if(Grads>=80 && Grads<90){
       cout<<"Your are PASS \n"<<"B";
    }else if(Grads>=60 && Grads<70){
       cout<<"You are PASS \n"<<"C";
    }else{
        cout<<"FAIL\n"<<"TRY NEXT TIME";
    }
   return 0;
}