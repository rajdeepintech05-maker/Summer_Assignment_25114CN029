//Write a program to Write function for Amstrong number.

#include<iostream>
using namespace std;

bool isArmstrong(int n){
    int original=n;
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return sum==original;
}

int main (){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(isArmstrong(n)){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}