/* programa usando switch
autor: Rayssa
data: 26/05/2017
última modificação: */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>

using namespace std;

int main() {
	int op, x, y, valor;
	valor=0;
	while (valor<3)
	{
		cout<<"\n digite um valor: ";
		cin>>x;
		cout<<"\n digite um valor: ";
		cin>>y;
		cout<<"\n escolha a operaçao 1:(+) 2:(-) 3(/) 4(*) \t";
		cin>>op;
		switch (op)
		{
			case 1:
				cout<<x+y;
				break;
			case 2:
				cout<<x-y;
				break;
			case 3:
				cout<<x*y;
				break;
			case 4:
				cout<<x/y;
				break;
			default:
				cout<<"opçao invalida";
				break;
		return 0;
		}
		cout<<"\n";
	}
}
