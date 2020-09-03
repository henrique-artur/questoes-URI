#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    //Lembrando que o protótipo torna-se desnecessário se a função for declarada antes de main.
    long long int calcularFatorial(int n);
    
    
    int num1, num2;
    //Não precisaremos mais da variável resultado. 
    
    while (scanf("%d%d", &num1, &num2) != EOF){
    	/* Observe que esses dois ifs seguintes fazem exatamente a mesma coisa. Então, a gente pode unir os dois utilizando
    	 * o operador lógico ou [ 'or' ou '||' ]
        if(num1 == 0){
            resultado += 1;
        }
        else if(num2 == 0){ //Tinha um erro de sintaxe aqui
            resultado += 1;
        }
        
        * Aqui também temos um problema, pois, se ea condição anterior já verificava se os números sãoo iguais a 0, 
        * o próximo teste (num1 != 0 && num2 != 0) sempre seria verdadeiro quando não passar nos ifs anteriores. 
        * Bastaria então utilizar o else.
        else if(num1 != 0 && num2 != 0){
        
        * Primeiramente, resultado sempre terá valor 0 nesse caso. Sendo assim, não é necessário utilizar '+='. 
        * Além disso, observe que eu pososo somar diretamente o fatorial dessas duas funções (vide linha 42)
            resultado += fatorialNum1(num1);
            resultado += fatorialNum2(num2);
        }
        
    	* Agora reescrevendo abaixo o trecho de código comentado.
        */
        
        if(num1 == 0 || num2 == 0) 
        	cout << "2\n";
	else 
		cout << (calcularFatorial(num1) + calcularFatorial(num2)) << endl;
		
        
        /* Aqui, a gente poderia imprimir o resultado diretamente nos ifs, que foi oq eu fiz. Dessa forma, 
         * não precisaremos ficar reatribuindo 0 ao resultado.
		 */
    }
    return 0;
}

/* Primeiramente, cada função é um independente. 
 * A função não sabe do funcionamento interno da outra. Sendo assim, não é interessante criar uma função para tratar num1,
 * que é uma particularidade de main(). É importante que as funções sejam criadas de forma genérica, e focando somente em 
 * resolver determinada questão. Por isso, vamos renomear essa função.
 *
 * Além disso, temos duas funções que executam a mesma tarefa. A ideia de utilizar funções é justamente utilizar o mesmo algoritmo
 * em casos diferentes. Então, não faz sentido criar uma função 'fatorialNum1' e 'fatorialNum2', já que ambas possuem a 
 * a mesma funcionalidade ('calcularFatorial de N').
 *
 * Também é possível criar esse algoritmo de calcular fatorial utilizando funções recursivas.
 */
 
long long int calcularFatorial(int n){
	// Aqui, vc inicializou a variável com 0. Logo, todos os produtos das multiplicações feitas na linha 67 terão valor igual ao atribuido.
    long long int fatorial = 1; // vamos atribuir 1 então, até pq 1 é o menor  fatorial que existe (1! = 1) 
    for(int i = n; i > 0; i--)
        fatorial *= i;
    
    return fatorial;
}

// Implementação com função anterior de forma recursiva
long long int fatorial(int n) {
	return n <= 1 ? 1 : n * fatorial(n - 1);
}
