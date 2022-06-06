#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define LIMPA_TELA system("cls")

int imprime_menu (int opcao);
void curiosidades();
void realizar_cadastro ();
void realizar_login ();
int imprime_menu2 (int opcao);
void realizar_reservas ();
int imprime_menu3 (int opcao);

struct cadastro { // Nome, passaporte, CPF, RG, endereço, cidade, telefone, email e senha.
	char nome [50];
	char passaporte [10]; // 8 caracteres: 2 letras e 6 algarismos
	//int cpf [12];
	//int rg [10];
	char endereco [200];
	char cidade [100];
	//int telefone [12];
	char email [100];
	//int senha [8];
};

int main() {

	system("color 1");	
	setlocale(LC_ALL, "Portuguese");
	struct cadastro novo;
	
	int opcao;
	
	srand(time(NULL));

	printf("************************************\n");
	printf("*                                  *\n");
	printf("*  NOVA ZELÂNDIA PARA BRASILEIROS  *\n");
	printf("*                                  *\n");
	printf("************************************\n");

	opcao = 0;
	do {
		if (opcao < 0 || opcao > 3){
			printf("Opção invalida! Tente novamente!\n\n");
		}
		
		opcao = imprime_menu (opcao);
		
		switch (opcao){
			case 1:
				LIMPA_TELA;
				
				curiosidades();
				
				break;
			case 2:
				LIMPA_TELA;
				
				realizar_cadastro (&novo); 
				
				break;
			case 3:
				LIMPA_TELA;
				
				realizar_login (&novo);
				
        		break;
        }

        LIMPA_TELA;
    } while (opcao != 0);
	
	return 0;
}

int imprime_menu (int opcao) {
	
	system("color 1");
	
	printf("\n\n");
	printf("Digite a opção que deseja:\n");
	printf("\n1. Saber mais sobre o país\n");
	printf("2. Realizar cadastro\n");
	printf("3. Logar na conta\n");
	printf("0. Sair");
		
	printf("\n\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	fflush(stdin);
		
	return opcao;
}

void curiosidades() {
	printf("\nCURIOSIDADES DA NOVA ZELÂNDIA\n");

	printf("\n* Para cada pessoa, existem sete ovelhas na Nova Zelândia e menos de 5 porcento dos seres habitantes do país são humanos. O restante são animais.\n");

  	printf("\n* Os filmes da trilogia O Senhor dos Anéis foram totalmente filmados na Nova Zelândia e seu diretor, Peter Jackson, é neozelandês.\n");

	printf("\n* Por ser muito frio e ter muita água, de acordo com James Owen da National Geographic, não há cobras no país.\n");

	printf("\n* A Nova Zelândia foi o primeiro país a dar às mulheres o direito do voto, em 1893.\n");

	printf("\n* O país foi a última massa de terra a ser povoada, com exceção das regiões polares.\n");

	printf("\n\nGostou? Programe sua viagem para esse lugar incrível!");
	
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

void realizar_cadastro (struct cadastro *novo) { // Nome, passaporte, CPF, RG, endereço, cidade, telefone, email e senha.
	
	system("color C");
	
	printf("\n** Cadastro **\n");
	
	printf("Insira seus dados nos campos abaixo:\n");
	
	do {
		printf("\nNome: ");
		gets((*novo).nome); 
		if (strlen((*novo).nome) == 0) {
			printf("\nO campo nome não pode ser vazio! Tente novamente...\n");
		}
	} while (strlen((*novo).nome) == 0);
	
	do {	
		printf("\nPassaporte: ");
		gets((*novo).passaporte);
		if (strlen((*novo).passaporte) == 0) {
			printf("\nO campo passaporte não pode ser vazio! Tente novamente...\n");
		}
	} while (strlen((*novo).passaporte) == 0); 
	
	/*printf("\nCPF: ");
	scanf("%d", &(*novo).cpf);
	fflush(stdin);
	
	printf("\nRG: ");
	scanf("%d", &(*novo).rg);
	fflush(stdin);*/
	
	do {
		printf("\nEndereço: ");
		gets((*novo).endereco);
		if (strlen((*novo).endereco) == 0) {
			printf("\nO campo endereço não pode ser vazio! Tente novamente...\n");
		}
	} while (strlen((*novo).endereco) == 0); 
	
	do {
		printf("\nCidade: ");
		gets((*novo).cidade);
		if (strlen((*novo).cidade) == 0) {
			printf("\nO campo cidade não pode ser vazio! Tente novamente...\n");
		}
	} while (strlen((*novo).cidade) == 0);
	
	/*printf("\nTelefone: ");
	scanf("%d", (*novo).telefone);
	fflush(stdin);*/
	
	do {
		printf("\nEmail: ");
		gets((*novo).email);
		if (strlen((*novo).email) == 0) {
			printf("\nO campo email não pode ser vazio! Tente novamente...\n");
		}
 	} while (strlen((*novo).email) == 0);
 
	//(*novo).senha = rand() % 10;
	//printf("\nSua senha é: %d\n", (*novo).senha);
 
	printf("\n%s\n", (*novo).nome);
	printf("%s\n", (*novo).passaporte);
	//printf("%d\n", (*novo).cpf);
	//printf("%d\n", (*novo).rg);
	printf("%s\n", (*novo).endereco);
	printf("%s\n", (*novo).cidade);
	//printf("%d\n", (*novo).telefone);
	printf("%s\n", (*novo).email);
	//printf("%d\n", (*novo).senha);
	
	printf("\n\nCadastro realizado com sucesso!!\n");
	printf("\nAgora, para realizar reservas, logue na sua conta\n");
	
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

void realizar_login (struct cadastro *novo) {
	int opcao; 
	char email[100];
	char senha[8];
	
	system("color 7");
	
	printf("\n** Login **\n");
	
	printf("\nInsira seus dados nos campos abaixo:\n");
	
	do {
		printf("\nDigite seu email: ");
		gets(email);
		if(email != ((*novo).email) || strlen((*novo).email) == 0){
			printf("\nEmail inválido ou campo vazio. Tente novamente.\n ");
		}
	} while(email!=(*novo).email || strlen((*novo).email) == 0);
	
	/*do {
		printf("Digite sua senha: ");
		gets(senha);
		if(senha!=(*novo).senha || strlen((*novo).senha)){
			printf("\n\n Senha inválida ou campo vazio. Tente novamente.\n ");		
	} while(senha!=(*novo).senha || strlen((*novo).senha));*/
	
	/*if(email==(*novo).email && senha==(*novo).senha){
		printf("\n\nLogin realizado com sucesso!!\n");
	}*/	
	
	printf("\n\nSucesso!!");
	
	printf("\n\nDigite ENTER para continuar...\n");
    getchar();
	
	opcao = 0;
	do {
		if (opcao < 0 || opcao > 2){
			printf("Opção invalida! Tente novamente!\n\n");
		}
		
		LIMPA_TELA;
		
		opcao = imprime_menu2 (opcao);
		
		switch (opcao){
			case 1:
				LIMPA_TELA;
				
				realizar_reservas();
				
				break;
			/*case 2:
				LIMPA_TELA;
				
				checar_reservas(); 
				
				break;*/
        }

        LIMPA_TELA;
    } while (opcao != 0);
	
	printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

int imprime_menu2 (int opcao) {
	
	system("color 1");
	
	printf("\n\n");
	printf("Digite a opção que deseja:\n");
	printf("\n1. Fazer novas reservas\n");
	printf("2. Checar reservas existentes\n");
	printf("0. Sair");
		
	printf("\n\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	fflush(stdin);
		
	return opcao;
}

void realizar_reservas () {
	int opcao; 
	
	opcao = 0;
	do {
		if (opcao < 0 || opcao > 3){
			printf("Opção invalida! Tente novamente!\n\n");
		}
		
		opcao = imprime_menu3 (opcao);
		
		switch (opcao){
			/*case 1:
				LIMPA_TELA;
				
				reservar_atracoes();
				
				break;
			case 2:
				LIMPA_TELA;
				
				reservar_hotel (); 
				
				break;
			case 3:
				LIMPA_TELA;
				
				reservar_voo ();
				
        		break;*/
        }

        LIMPA_TELA;
    } while (opcao != 0);
    
    printf("\n\nDigite ENTER para voltar ao menu...\n");
    getchar();
}

/*void checar_reservas () {
	
}*/

int imprime_menu3 (int opcao) {
	system("color C");
	
	printf("\n\n");
	printf("Digite a opção que deseja:\n");
	printf("\n1. Reservar atrações\n");
	printf("2. Reservar hotéis\n");
	printf("3. Reservar voo\n");
	printf("0. Sair");
		
	printf("\n\nDigite a opção desejada: ");
	scanf("%d", &opcao);
	fflush(stdin);
		
	return opcao;
}
