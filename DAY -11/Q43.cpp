/*
Write a program to Write function to check
prime.
*/
#include<iostream>
using namespace std;
int prime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return 0;
    }
    return 1;
}
int main (){
    int a;
    cout<<"Enter the Number ";
    cin>>a;
    if(prime(a)){ 
    cout<<"The given number is Prime Number"; }
    else{
        cout<<"The given number is not prime Number";
    }
    return 0;
}