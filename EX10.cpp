/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Robert McQueen
 */
#include "std_lib_facilities.h"

int main(){
int num1;
int num2;
String operation;

cout<<"Enter operation and two numbers"<<endl;
cin>>operation>>num1>>num2;

if(operation == "+"){
    double add = num1 + num2;
    cout<<"the sum is "<<add<<endl;
}else if(operation == "-"){
    double sub = num1 - num2;
    cout<<"the difference is "<<sub<<endl;
}else if(operation == "*"){
    double mul= num1 * num2;
    cout<<"the product is "<<mul<<endl;
}else if(operation == "/"){
    double div = num1 / num2;
    cout<<"the quotient is "<<div<<endl;
}


}