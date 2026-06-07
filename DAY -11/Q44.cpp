/*
Write a program to Write function to find
factorial.
*/
#include<iostream>
using namespace std;
int factorial(int a){
    if(a==0 || a==1) return 1;
 return a*factorial(a-1);
}
int main (){
    int a;
    cout<<"Enter the Number ";
    cin>>a;
    cout<<"The factorial of the Numbers is : "<<factorial(a);
    return 0;
}