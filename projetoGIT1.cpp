#include <iostream>
#include <string.h>
/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	int c;
	for(int i=0; i<texto.length();i++)
	{
		if(letra==texto[i])
		c++;
	}
	cout<<c;
}

void substituirLetra(char letra1,char letra2, string texto)
{
		for(int i=0;i<texto.length();i++)
	{
		if(texto[i]==letra1)
			texto[i]= letra2;
	}
	cout<<texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	int c;
	string copia;
	for(int i=0;i<texto.length();i++){
		for(int i=0;i<palavra.length();i++){
			copia= texto[i];
			if(texto[i]==" ")
				break;
		}
		if(palavra==copia)
			c++;
	}
	cout<<c;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
	int c;
	string copia;
	for(int i=0;i<texto.length();i++){
		for(int i=0;i<palavra1.length();i++){
			copia= texto[i];
			if(texto[i]==" ")
				break;
		}
		if(palavra1==copia)
			for(int d=0;d<palavra2.length();d++){
				for(int k=0;d<palavra2.length();d++){
						copia= palavra2[k];
				}
				texto[d]= copia[d];
			}
	}
	cout<<texto;
}

int main(){

	cout << "Entre com o texto para fazer o teste:";
	string texto;
	getline(cin, texto);
	cout<<"O que Você quer fazer?";
	cout<<"1-Ver ocorrencia de caracter no texto";
	cout<<"2-Trocar caracter no texto";
	cout<<"3-Ver ocorrencia de palavra no texto";
	cout<<"4-Trocar palavra no texto";
	int i;
	cin>>i;
	if(i==1){
		cout<<"Qual letra Voce Quer ver a ocorrencia no texto?";
		char letra;
		cin>> letra;
		contaLetras(letra, texto);
	}
	if(i==2){
		cout<<"Qual letra Voce Quer substituir no texto?";
		char letra, letra2;
		cin>> letra;
		cout<<"Por qual? ";
		cin>>letra2;
		substituirLetras(letra, letra2, texto);
	}
	if(i==3){
		cout<<"Qual palavra Voce Quer ver a ocorrencia no texto?";
		string letra;
		getline(cin, letra);
		substituirLetras(letra, texto);
	}
	if(i==4){
		cout<<"Qual palavra Voce Quer substituir no texto? ";
		string letra, letra2;
		getline(cin, letra);
		cout<<"Por qual? ";
		getline(cin, letra2);
		substituirLetras(letra, letra2, texto);
	}
	
	return 0;
}
