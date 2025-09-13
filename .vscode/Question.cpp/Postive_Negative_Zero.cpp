// Question 2: Positive, Negative or Zero

// Write a C++ program to input a number and check whether it is positive, negative, or zero.

#include<iostream>
using namespace std;
    int main(){
       int num;
       cout<<"Enter a number :";
       cin>>num;
       if (num>0)       
       {
        cout<<"POSTIVE";
       }else if (num<0)
       {
        cout<<"NEGATIVE";
       }else{
        cout<<"ZERO";
       }
       
       
    return 0;
}