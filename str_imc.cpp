/* programa calculo de imc
autor: Rayssa
data: 02/06/2017
última modificação: */


#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
#include<locale>
#include<math.h>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	string str_imc;
	char nome [50];
	int idade;
	float peso, altura, imc;
	printf ("\n Digite seu nome:");
	gets(nome);
	printf("\n sua idade:");
	cin>>idade;
	printf("\n seu peso:");
	cin>>peso;
	printf("\n sua altura:");
	cin>>altura;
	imc= peso/(altura*altura);
	cout<<"\n Olá \t"<<nome<<"\n Sua altura: \t"<<altura;
	cout<<"\n Seu peso: \t"<<peso;
	cout<<"\n Seu imc: \t"<<imc;
	if (imc<=18.5)
		str_imc=("\n abaixo do peso");
	else
		if (imc>18 and imc<=29.9)
			str_imc="\n levemente acima do peso";
		else
			if (imc>29.9 && imc<=34.9)
				str_imc="\n com obesidade de grau 1";
			else
				if (imc>34.9 and imc<=39.9)
					str_imc="\n com obesidade de grau 2";
				else
					str_imc="\n com obesidade bórbida";
	std::cout<<"\n Você está \t"<<str_imc;
	printf("\n");
	system("pause");
}
