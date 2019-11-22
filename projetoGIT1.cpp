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
}

void substituirLetra(char letra1,char letra2, string texto)
{
	
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	int c;
	string copia;
	for(int i=0;i<texto.length();i++){
		for(int i=0;i<texto.length();i++){
			copia= texto[i];
			if(texto[i]==" ")
				break;
		}
		if(palavra==copia)
			c++;
	}
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
	
}

int main(){

	cout << "Entre com o texto para fazer o teste:";
	return 0;
}
