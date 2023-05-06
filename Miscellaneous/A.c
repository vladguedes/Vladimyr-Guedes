#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para strings

int main () {
	
	char nome [20], nomeM[20], nomem[20]; //As variáveis 'nomeM' e 'nomem' também devem ser vetores
	int idade [3], idadeM, idadem; //Aqui nessa situação em específico não vai ser necessario inicializar a variáveis 'idadeM' e 'idadem' com 0
	
	for (int c = 0; c < 3; c++) {
	    printf ("Digite o seu nome e idade: "); //Coloque o printf dentro do 'for', assim fica mais organizado :)
		scanf (" %s", nome); //Em scanf de string, sempre coloque ele isolado, fica melhor, e também coloque um espaço antes do '%s' (" %s"), pois assim impede que seu scanf "bug"
		scanf("%d", &idade[c]);
		
		if (c == 0) {
			idadem = idade[c];
            idadeM = idade[c]; //Tanto 'idadem' e 'idadeM' recebem 'idade[c]'
			strcpy(nomeM, nome); //O mesmo vale para 'nomem' e 'nomeM'
			strcpy(nomem, nome);
		}
		if (idade[c] > idadeM) {
			idadeM = idade[c];
			strcpy(nomeM, nome); //'strcpy' é a função que vai fazer uma variável do tipo vetor de char receber uma string de outra variável também do tipo vetor de char
            //strcpy("variável que irá receber a string", "variável que irá passar sua string")
		} 
        if (idade[c] < idadem) {
			idadem = idade[c];
			strcpy(nomem, nome);
		}
	}
	
	printf ("A pessoa com maior idade eh: %s com %i anos\n", nomeM, idadeM);
	printf ("A pessoa com menor idade eh: %s com %i anos\n", nomem, idadem);
	
	
	return 0;
}