/* programa identifica n�mero primo
autor: Rayssa
data: 26/05/2017
�ltima modifica��o: 01/09/21 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
#include<iostream>

using namespace std;

int main(){
	bool primo;
	int i,n;
	setlocale(LC_ALL,"portuguese");
	cout<<"digite um n�mero: ";
	cin>>n;
	i=2; primo=true;
	while(i<n)
	{
		if(n%i==0)
		{
			primo=false;
			break;
		}
		i=i+1;
	}
	if(primo)
		cout<<"� primo";
	else
		cout<<"n�o � primo";
}
