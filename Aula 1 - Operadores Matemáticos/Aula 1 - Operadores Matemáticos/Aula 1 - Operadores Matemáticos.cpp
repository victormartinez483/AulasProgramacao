//Exercício para uso de operadores matemáticos (soma, subtração,  divisão, multiplicação, mod, incremento e decremento)

#include <iostream>

using namespace std;

int main()
{
	double a, b, resultado;

	a = 5; //Declarando o valor da variável a = 5
	b = 3; //Declarando o valor da variável b = 2

	cout << "" << endl;
	cout << "Declaracao dos valores de a e b" << endl;
	cout << "" << endl;

	//imprime os valores das variáveis "a" e "b" para melhor visualização
	cout << "Valor de a = " << a << endl ;
	cout << "Valor de b = " << b << endl ;
	
	cout << "" << endl;
	cout << "Operacoes basicas: Soma, subtracao, multiplicacao, divisao (Inteira) e mod (Resto) " << endl;
	cout << "" << endl;


	//Teste 1 - Soma (+)
	resultado = a + b; //resultado esperado = 7
	cout << "Soma			| a + b = " << resultado << endl;

	//Teste 2 - Subtração (-)
	resultado = a - b; //resultado esperado = 3
	cout << "Subtracao		| a - b = " << resultado << endl;

	//Teste 3 - Multiplicação (*)
	resultado = a * b; //resultado esperado = 10
	cout << "Multiplicacao		| a * b = " << resultado << endl;

	//Teste 4 - Divisão (Inteira) (/)
	resultado = a / b; //resultado esperado = 2,5 (Por se tratar de divisao por uma variável inteira o decimal será "ignorado", portanto o resultado previsto é 2)
	cout << "Divisao (inteira)	| a / b = " << resultado << endl;

	//Teste 5 - Operação de Resto - Mod (%)
	//resultado = a % b; //resultado esperado = 1 (sobra da multiplicação inteira acima, ex.: 2x2=4...assindo o resto dessa conta resulta 1)
	//cout << "Resto/ Mod		| a % b = " << resultado << endl;

	cout << "" << endl;
	cout << "Operacoes de incremento e decremento: pre-incremento, pre-decremento, pos-incremento e pos-decremento " << endl;
	cout << "" << endl;

	//Teste 6 - pre-Incremento - ++variavel
	resultado = ++a; //resultado esperado = 6
	cout << "pre-Incremento de a	| resultado = " << resultado << endl;
	resultado = ++b; //resultado esperado = 6
	cout << "pre-Incremento de b	| resultado = " << resultado << endl;
	
	cout << "" << endl;

	//Teste 7 - pre-Decremento - ++variavel
	resultado = --a; //resultado esperado = 5
	cout << "pre-Decremento de a	| resultado = " << resultado << endl;
	resultado = --b; //resultado esperado = 5
	cout << "pre-Decremento de b	| resultado = " << resultado << endl;

	cout << "" << endl;

	//Teste 8 - pos-Incremento - ++variavel
	resultado = a++; //resultado esperado = 6
	cout << "pos-Incremento de a	| resultado = " << resultado << endl;
	cout << "Valor atualizado de a	| a = " << a << endl;
	resultado = b++; //resultado esperado = 6
	cout << "pos-Incremento de b	| resultado = " << resultado << endl;
	cout << "Valor atualizado de b	| a = " << b << endl;

	cout << "" << endl;

	//Teste 9 - pos-Decremento - ++variavel
	resultado = a--; //resultado esperado = 5
	cout << "pos-Decremento de a	| resultado = " << resultado << endl;
	cout << "Valor atualizado de a	| a = " << a << endl;
	resultado = b--; //resultado esperado = 5
	cout << "pos-Decremento de b	| resultado = " << resultado << endl;
	cout << "Valor atualizado de b	| a = " << b<< endl;
}