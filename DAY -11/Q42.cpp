/*
Write a program to Write function to find
maximum.
*/
#include<iostream>
using namespace std;
int max(int a,int b,int c){
    return (a>b)?a:(b>c)?b:c;
}
int main (){
    int a,b,c;
    cout<<"Enter the Numbers ";
    cin>>a>>b>>c;
    cout<<"The Max number btw three number is  : "<<max(a,b,c);
    return 0;
}