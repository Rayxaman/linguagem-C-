/* programa com menu de op��es
criador(a): Rayssa
Data de cria��o: 02/06/2017 */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>

using namespace std;

main()
{
	setlocale(LC_ALL, "portuguese");
	int op,i,a,b;
	cout<<"escolha uma op��o:";
	cout<<"\n";
	cout<<"1 - soma"<<endl;
	cout<<"\n";
	cout<<"2 - subtrai"<<endl;
	cout<<"\n";
	cout<<"3 - fim"<<endl;
	cin>>op;
	switch (op)
	{
		case 1:
			cout<<"soma";
			break;
		case 2: 
			cout<<"subtrai";
			break;
		case 3:
			exit;
	}
}
