#include <iostream>
#include <limits>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    float num1, num2;
    float result;
    string choice;

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter a number please!"<<endl;
        cin>>num1;
    }


    cout<<"Enter second number: "<<endl;
    cin>>num2;
     while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Enter a number please!"<<endl;
        cin>>num2;
    }


    cout<<"What operation do you want to perform?";
    cout<<"Choose from the following letters: "<<endl;
    cout<<"a. addition"<<endl<< "b. subtract"<< endl<< "c. multiply"<<endl<< "d. divide"<<endl;
    cin>>choice;


    while(!(choice=="a"|| choice=="A" || choice=="b" || choice=="B" || choice=="c" || choice=="C" || choice=="d" || choice=="D"))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid Input! Please make sure to input 'a' or 'b' or 'c' or 'd'."<<endl;
        cout<<"Try again!"<<endl;
        cin>>choice;
    }


    switch(choice[0])
    {
    case 'a': case 'A':
       result= num1 + num2;
       break;
    case 'b': case 'B':
        result= num1 - num2;
        break;
    case 'c': case 'C':
        result=num1 * num2;
        break;
    case 'd': case 'D':
        if(num2!=0){
            result= num1/num2;
            }
            else{
                cout<<"the second number you entered is 0. Invalid operation!"<<endl;
                return 1;
                }
        break;
    }


    cout<<"The result is: "<<result<<endl;

    return 0;
}
