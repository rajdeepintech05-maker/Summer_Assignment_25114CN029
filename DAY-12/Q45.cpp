/*
Write a program to Write function for 
palindrome. 

*/
#include<iostream>
#include<string.h>
using namespace std;    
bool palindrome(char str[]){
    int n=strlen(str);
    for(int i=0;i<n/2;i++){
        if(str[i]!=str[n-1-i]){
            return false;
        }
    }
    return true;
}

int main (){
char str[100];
cout<<"Enter a string: ";
cin.getline(str,100);
if(palindrome(str)){
    cout<<"Palindrome";
}
else{
    cout<<"Not a palindrome";
}
}