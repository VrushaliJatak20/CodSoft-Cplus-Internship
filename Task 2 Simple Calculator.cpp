#include<iostream>
using namespace std;

int main()
{
    cout<<"Welcome!!!\n";
    cout<<"Choose Opeartion you want to perform\n";
    cout<<"1 For Addition\n";
    cout<<"2 For Subtraction\n";
    cout<<"3 For Multiplication\n";
    cout<<"4 For Division\n";

    int choice;
    cout<<"Enter your choice: \n";
    cin>>choice;

    int n1,n2,res;
    cout << "Enter First numbers: \n";
    cout<< "Enter Second number: \n";
    cin>>n1>>n2;

    switch(choice)
    {
        case 1:
        res = n1+n2;
        cout<<"result = \n"<<res;
        break;

        case 2:
        res = n1-n2;
        cout<<"result = \n"<<res;
        break;

        case 3:
        res = n1*n2;
        cout<<"result = \n"<<res;
        break;

        case 4:
        res = n1/n2;
        cout<<"result = \n"<<res;
        break;

        default:
        cout<<"wrong choice !! \n";
        break;

    }

}    