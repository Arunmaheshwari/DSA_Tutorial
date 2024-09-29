#include<iostream>
using namespace std;

int main(){

//1
// Write a program which takes the values of length and breadth from user and check if it is a square or not.

// int length, breadth;
// cout<<"Enter length: "<<endl;
// cin>>length;
// cout<<"Enter breadth: "<<endl;
// cin>>breadth;

// if(length == breadth){
//     cout<<"It is 4Square"<<endl;
// }else{
//     cout<<"It is not square"<<endl;
// }

//2
//Write a program to print absolute value of a number entered by the user

// int num;
// cout<<"Enter number: "<<endl;
// cin>>num;

// if(num<1){
//     num = num*(-1);
// }

// cout<<"The absolute value is: "<<num<<endl;

//3
//Write a program to take input from user for cost price and selling price and calculate profit and loss

// int sp, cp, amt;
// cout<<"Enter Cost price: "<<endl;
// cin>>cp;
// cout<<"Enter Selling price: "<<endl;
// cin>>sp;

// if(sp>cp){
//     amt = sp - cp;
//     cout<<"Profit: "<<amt<<endl;
// }

// if(sp<cp){
//     amt = cp - sp;
//     cout<<"Loss: "<<amt<<endl;
// }

//4
// Write a program to print positive number entered by the user, if user enters a negative number, it is skipped

// int num;
// cout<<"Enter a num: "<<endl;
// cin>>num;

// if(num>0){
//     cout<<"Entered num is Postive"<<endl;
// }else{
//     cout<<"Skipped"<<endl;
// }

//5
// Create a calculator using switch statement to perform addiion, subtraction, multiplication adn division.

char op;
float num1, num2;
cout<<"Enter an operator(+,-,*,/): "<<endl;
cin>>op;
cout<<"Enter two numbers: "<<endl;
cin>>num1>>num2;

switch(op){
    case '+':
    cout<<num1<< " + " <<num2 <<" = "<<num1+num2;
    break;
    case '-':
    cout<<num1<< " - " <<num2 <<" = "<<num1-num2;
    break;
    case '*':
    cout<<num1<< " * " <<num2 <<" = "<<num1*num2;
    break;
    case '/':
    cout<<num1<< " / " <<num2 <<" = "<<num1/num2;
    break;
    default:
    cout<<"The operator is not correct"<<endl;
    break;
}












    return 0;
}