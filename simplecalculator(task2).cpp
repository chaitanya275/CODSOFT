#include<iostream>
using namespace std;
int main()
{
    float number1;
    float number2;
    float ans;
    cout<< "Enter First number: ";
    cin>> number1;
    cout<< "Enter Second number: ";
    cin>> number2;
    char op;
    cout<< "Enter operator: ";
    cin>> op;
    if(op == '+')
    {
        ans = number1 + number2;
        cout<< "Result is: " << number1 <<" "<< op <<" " << number2 <<" = " <<ans;
    }
    else if(op == '-')
    {
        ans = number1 - number2;
        cout<< "Result is: " << number1 <<" "<< op <<" " << number2 <<" = " <<ans;
    }
    else if(op == '*')
    {
        ans = number1 * number2;
        cout<< "Result is: " << number1 <<" "<< op <<" " << number2 <<" = " <<ans;
    }
    else if(op == '/')
    {
        ans = number1 / number2;
        cout<< "Result is: " << number1 <<" "<< op <<" " << number2 <<" = " <<ans;
    }
    else
    {
        cout<< "Enter correct operator" <<endl;

    }
    
}
