/*Programa de controle de reservas de lugares de ônibus.
Autor(a): Rayssa C. de Asevedo
Criação: 29/05/2017
Última modificação: 01/06/17*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>

using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	char busao [4][10];
	int lin, col, usu_l, usu_c, res=0;
	cout<<"\n \n \n";
	cout<<"\n 1 2 3 4 5 6 7 8 9 10 \n";
	for(lin=0;lin<4;lin++)
	{	
		cout<<lin+1;
			for(col=0;col<10;col++)
			{
				busao[lin][col]='.';
				cout<<busao[lin][col];
			}
		cout<<"\n";
	}
	do
	{	
		cout<<"\n Escolha a poltrona desejada"; //ou 0 para sair
		cout<<"\n Digite a fileira: ";
		cin>>usu_l;
			if(usu_l==0)
			break;
				cout<<"Digite a coluna:";
				cin>>usu_c;
				system("cls");
				usu_l--;
				usu_c--;
					if(busao [usu_l][usu_c]=='.')
					{	
						cout<<"Reserva realizada com sucesso!";
						busao[usu_l][usu_c]='*';
						res++;
					}
					else
					{	
						cout<<"Poltrona ocupada, favor escolher outra.";
					}
					cout<<"\n \n \n";
					cout<<"\n 1 2 3 4 5 6 7 8 9 10 \n";
						for(lin=0;lin<4;lin++)
						{	cout<<lin+1;
							for(col=0;col<10;col++)
							{
								cout<<busao[lin][col];
							}
							cout<<"\n";
					}	
	}
	while(res<40);
}

