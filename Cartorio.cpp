#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o portugues
#include <string.h> //Responsavel por cuidar da string
int registro()

{   
    char arquivo[60];   // cadastrar usuarios no sistema
    // inicio cria��o de variaveis/string
    char cpf[15];  
    char nascimento[10];
    char nome[60];
    char sobrenome[60];
    char cargo[60];
    // final da cria��o de usuarios
    
	printf("digite o CPF a ser cadastrado: \n"); //coletando informa��o do usuario
	scanf("%s,",cpf); //%s refere-se a string
	strcpy(arquivo,cpf); // responsavel por copiar os valores da string
	
	FILE *file; // Cria arquivo
	file= fopen(arquivo,"w"); //cria o arquivo e escrever w significa escrever
	fprintf(file, "%s,", cpf); // salva o arquivo da variavel
	fclose(file); //fecha arquivo
	
	
	printf("Digite seu nascimento: \n");
	scanf("%s", nascimento);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fprintf(file, nascimento);
	
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite seu primeiro nome: \n");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a");
	
	fprintf(file, nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite seu sobrenome: \n");
	scanf("%s", sobrenome);
	
	file= fopen(arquivo, "a");
	
	fprintf(file, sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite seu cargo: \n");
	scanf("%s", cargo);
	
	file= fopen(arquivo, "a");
	fprintf(file, cargo);
	
	fclose(file);
	
	file = fopen(arquivo, "a");
	fclose(file);
	
	system("pause");
			
}

int consulta()
{
	
	setlocale(LC_ALL, "Portuguese");  // Definicao de linguagem (portugues)
	
	char cpf[40];
	char conteudo[100];
	
	printf("Digite o cpf a ser consultado: \n");
	scanf("%s,",cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	
	
	
	
	if(file == NULL)
	{
	printf("N�o foi possivel localizar o arquivo, cadastro n�o existe!. \n");
	}
	
	while(fgets(conteudo, 100, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s", conteudo);
		printf("\n\n");
		
	system("pause");
	
		
	}
	
	
	
}

int deletar()
{
 	char cpf[40];
 	
 	printf("digite o CPF a ser deletado\n");
 	scanf("%s,", cpf);
 	
    remove(cpf);
    FILE *file;
    file = fopen(cpf, "r");
    
    if(file == NULL)
    {
    printf("Este CPF n�o foi encontrado!.\n");
    system("pause");
    
    
	}
    
 	   
 	
		
}




int main()
{

	int opcao=0; // Defini��o de variavel
	int R=1;
	
	for(R=1;R=1;)
	
	{
	
		
	 system("cls");  //responsavel por limpar a tela 
	 
	 
	 setlocale(LC_ALL, "Portuguese");  // Definicao de linguagem (portugues)
	
	 printf("### Cart�rio da EBAC ###\n\n");  // Inicio de menu
	 printf("Escolha a op��o desejada no menu:\n\n");
	 printf("\t1 - Registrar Nomes\n");  // Tomada de decis�o conforme fluxograma
	 printf("\t2 - Consultar Nomes\n");
	 printf("\t3 - Deletar Nomes\n\n");  // final de menu
	 printf("Seja muito bem vindo a EBAC!\n\n");
	 printf("Qual op��o voc� deseja!\n");
	
	 scanf("%d", &opcao); 
	
	 system("cls"); //responsavel por limpar a tela 
	 
	 switch(opcao)   //inicio de sele��o do menu
	 
	 {
	 
	  case 1: 
	  registro(); //chamada de fun��es
	  break;
			
	  case 2:
	  consulta();
	  break;
	  
	  case 3:
	  deletar();
	  break;
		
	  default:
	  printf("Esta op��o n�o � valida\n");
	  system("pause");
	  break; 
	    
	}
	    
	}
	
}
	

