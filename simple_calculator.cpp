#include<iostream>
using namespace std;
int main()
{    
   
	int num1 , num2;
	cout<<"Select an operator to performe a simple calculator:-"
	    <<"\n 1 = Addition"
	    <<"\n 2 = Subtraction"
	    <<"\n 3 = Division"
	    <<"\n 4 = Multiplication"
	    <<"\n 5 = Square"
	    <<"\n Exit"<<endl;
	
	int op;
	cin>>op;
    switch(op)
    {
    	case 1:cout<<"You Selected + operator To perform the operation "<<endl;
    	       cout<<"Enter Tow Numbers"<<endl;
    	       cin>>num1>>num2;
    	       cout<<"Adition = "<<num1+num2<<endl;
    	       break;
        case 2:cout<<"You Selected - operator To perform the operation "<<endl;
    	       cout<<"Enter Tow Numbers"<<endl;
    	       cin>>num1>>num2;
    	       cout<<"Subtraction = "<<num1-num2<<endl;
    	       break;
        case 3:cout<<"You Selected / operator To perform the operation "<<endl;
    	       cout<<"Enter Tow Numbers"<<endl;
    	       cin>>num1>>num2;
    	       cout<<"Division = "<<num1/num2<<endl;
    	       break;
        case 4:cout<<"You Selected * operator To perform the operation "<<endl;
    	       cout<<"Enter Tow Numbers"<<endl;
    	       cin>>num1>>num2;
    	       cout<<"Multiplication = "<<num1*num2<<endl;
    	       break;
    	case 5:cout<<"You Selected * operator To perform the operation "<<endl;
    	       cout<<"Enter a number of which you whant to fine the square :-"<<endl;
    	       cin>>num1;
    	       cout<<"Square = "<<num1*num1<<endl;
    	       break;
    	deafult:cout<<"Enter the another operator :-"<<endl;
	}
	
	
}
