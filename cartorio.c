#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o

int registro()
{
	printf("Voc� escolheu o registro de nomes!\n");
	system ("pause");
}

int consulta()
{
	printf("Voc� escolheu consultar nomes!\n");
	system ("pause");
}

int deletar()
{
		printf("Voc� escolheu deletar nomes!\n");
		system ("pause");
}


int main()
{
	int opcao=0; // Definindo as vari�veis
	int x=1;
	
	for (x=1;x=1;)
	{
		
		system ("cls");
		
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
	
		printf ("### Cart�rio da EBAC ###"); // Inicio do menu
		printf ("Escolha a op��o desejada do menu: \n\n");
		printf ("\t1 - Registrar nomes\n");
		printf ("\t2 - Consultar nomes\n");
		printf ("\t3 - Deletar nomes\n"); 
		printf ("\t4 - Sair do sistema\n\n");
		printf ("Op��o: "); // Fim do menu
	
		scanf("%d", &opcao); // Armazenando a escolha do usu�rio
	
		system("cls");
	
 			switch (opcao)
		{
			case 1:
		    registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
		    deletar();
			break;
			
			case 4:
			printf ("Obrigado por utilizar o sistema!\n");
			return 0;
			break;
			
			default:
			printf("Essa opc�o n�o esta dispon�vel!\n");
			system ("pause");
			break;
		// Fim da sele��o
		}
	}
}

