// Question 3: Largest of Three Numbers

// Write a C++ program to input three numbers and find the largest among them using if-else-if.

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the Value :";
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
         cout<<"The largest number is : "<<a;
    }else if(b>=a && b>=c)
    {
         cout<<"The largest number is: "<<b;
    }else if (c>=a && b>=a)
    {
       cout<<"The largest number is: "<<c;
    }else{
        cout<<"ERROR";
    }
    return 0;
}