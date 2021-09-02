/* programam usando switch e função
autor: Rayssa
data: 26/05/2017
última modificação: 01/09/2021*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using namespace std;

float soma (float a, float b)
{
	float s;
	s=a+b;
	return s;
}
float sub (float a, float b)
{
	float s;
	s=a-b;
	return s;
}
float mult (float a, float b)
{
	float m;
	m=a*b;
	return m;
}
float div (float a, float b)
{
	float d;
	d=a/b;
	return d;
}

int main() {
	int op;
	float x, y;
	while (op =! 0)
	{
		cout<<"digite um valor: ";
		cin>>x;
		cout<<"\n digite um valor: ";
		cin>>y;
		cout<<"\n escolha a operaçao \n1:(+) \n2:(-) \n3:(/) \n4:(*) \n";
		cin>>op;
		switch (op)
		{
			case 1:
				cout<<soma(x,y);
				break;
			case 2:
				cout<<sub(x,y);
				break;
			case 3:
				cout<<div(x,y);
				break;
			case 4:
				cout<<mult(x,y);
				break;
			default:
				cout<<"opçao invalida";
				break;
		return 0;
		}
		cout<<"\n\n";
	}
}
