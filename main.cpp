#include <iostream>
#include <string>
#include "libraries/calc.hpp"
#include "libraries/procstack.hpp"

using namespace std;


int main(int argc, char *argv[])
{
	int stw;
	int SP = 0; // init stack pointer
	int stack[250]; // A stack of 250 available values
	int a, b;
	float c, d;
	cout << "1 - Test structural LIFO stack\n2 - Test calc function\nInput: ";
	cin >> stw;
	if(stw != 1 && stw != 2)
	{
		cout << "Wrong input, available methods are: " << endl;
		cout << "1 - Test structural LIFO stack\n2 - Test calc function\nInput: ";
		cin >> stw;
	}
	switch(stw)
	{
	case 1:
	{
		cout << "Inserting stack values" << endl;
		for(int i = 0; i <= 10; i++)
		{
			push(stack, SP, i * 3);
			cout << "Element[" << i << "] = " << stack[i] << endl;
			SP++;
		}
		cout << "Removing 5 elements of the stack" << endl;
		for(int i = 0; i <= 5; i++)
		{
			cout << "POP value: " << pop(stack, SP) << endl;
			SP--;
		}
		cout << "Finished";
	}
	break;
	case 2:
	{
		cout << "Main program" << endl;
		cout << "Enter first number: ";
		cin >> a;
		cout << "Enter second number: ";
		cin >> b;
		cout << "The sum is : " << sum(a, b) << endl;
	}
	break;
	default:
		cout << "Default message!!" << endl;
	}
	return 0;
}
