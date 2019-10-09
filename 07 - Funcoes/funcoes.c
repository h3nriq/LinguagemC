//============================================================================
// Programa que tem por objetivo mostrar o acesso a uma variável global.
// Deve ser evitado o uso de variáveis globais.
//============================================================================

#include <stdio.h>
#include <stdlib.h>

//Declaração de uma variável global.
int g1;

/**********************************************************************************
funcao1(): imprime na tela o valor da variável global g1.
parâmetros: nenhhum.
retorno: não retorna nenhum valor.
**********************************************************************************/
void funcao1(){
	//funcao tem acesso à variável global g1.
	printf("funcao1: g1=%d\n", g1);
}//funcao1()

/**********************************************************************************
funcao2(): modifica o valor da variável global g1.
Está simulando uma função que calcularia um valor para g1.
parâmetros: nenhum.
retorno: não retorna nenhum valor.
**********************************************************************************/
void funcao2(){
	//Modifica a variável g1.
	//Poderia ser um cálculo complexo: g1 = x - sqrt(b*b - 4*a*c) / 2*a;
	g1 = 20;
}//funcao2()

/**********************************************************************************
main() : Programa Principal
**********************************************************************************/
int main(int argc, char *argv[]) {
	//Programa principal atribuindo um valor à variável global g1.
	g1 = 10;
	
	//Imprimindo a variável g1.
	printf("g1 = %d\n", g1);
	
	//Chamando a funcao1() para imprimir a variavel global g1.
	funcao1();
	
	//Chamando a funcao2() para atribuir um valor à variável global g1.
	funcao2();
	
	//Chamando novamente a funcao1() para imprimir a variavel global g1.
	funcao1();

  system("pause");
	return 0;
}//main()