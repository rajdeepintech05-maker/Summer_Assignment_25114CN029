/*
Write a program to Write function to find sum
of two numbers.
*/
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main (){
    int a,b;
    cout<<"Enter the Number ";
    cin>>a>>b;
    cout<<"The sum of the two Numbers is : "<<sum(a,b);
    return 0;
}