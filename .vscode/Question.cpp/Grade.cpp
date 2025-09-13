// Question 4: Grade Calculator

// Write a C++ program to input marks (0–100) of a student and print the grade according to the following conditions:

// 90–100 → Grade A

// 75–89 → Grade B

// 50–74 → Grade C

// Below 50 → Fail

#include<iostream>
using namespace std;
int main(){
    int Grade;
    cout<<"Student Marks :";
    cin>>Grade;
     
    if (Grade>=90 && Grade<=100)
    {
        cout<<"Grade A";

    } else if(Grade>=75 && Grade<=89)
    {
        cout<<"Grade B";

    }
    else if (Grade>=50 && Grade<=74)
    {
        cout<<"Grade C";
    }
    else
    {
        cout<<"invalid";
    }
    return 0;

}
