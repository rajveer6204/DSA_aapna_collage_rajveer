// Question 1: Voting Eligibility

// Write a C++ program to input a person’s age and check whether the person is eligible to vote or not.
// (A person is eligible to vote if their age is 18 years or above).

#include<iostream>
using namespace std;
int main(){
    int age ;
    cout<<"Enter your age :";
    cin>>age;
    if (age>=18)
    {
        cout<<"You Can Vote ";
    }else{
        cout<<"You Can't Vote"; 
    }

    return 0;
    
}