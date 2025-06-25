#include <stdbool.h>
#include <stdio.h>
#include <string.h>
//#include <windows.h>

typedef struct {
  char nome[200];
  int cpf;
  char dataNasci[50];
  char email[50];
  char senha[50]; // s
  int telefone;
} Usuario;

int quantidadeUsuario = 0;
Usuario id[20];
int escolha;
int cpfLogin;
char senhaLogin[50];

void registro(int i) {
  printf("Digite seu Nome Completo!\n");
  fgets(id[i].nome, 200, stdin);
  id[i].nome[strcspn(id[i].nome, "\n")] = '\0';

  printf("\n");
  ////////////////////////////////
  printf("Digite seu CPF!\n");
  scanf("%d", &id[i].cpf);
  getchar();

  printf("\n");
  ////////////////////////////////
  printf("Digite seu Email!\n");
  fgets(id[i].email, 50, stdin);
  id[i].email[strcspn(id[i].email, "\n")] = '\0';

  printf("\n");
  ////////////////////////////////
  printf("Digite seu Telefone!\n");
  scanf("%d", &id[i].telefone);
  getchar();

  printf("\n");
  ////////////////////////////////
  printf("Digite sua Data de Nascimento!\n");
  fgets(id[i].dataNasci, 50, stdin);
  id[i].dataNasci[strcspn(id[i].dataNasci, "\n")] = '\0';

  printf("\n");
  ////////////////////////////////
  printf("Escolha uma Senha!\n");
  fgets(id[i].senha, 50, stdin);
  id[i].senha[strcspn(id[i].senha, "\n")] = '\0';

  printf("\n");
  ////////////////////////////////

  quantidadeUsuario++;
  return;
};

bool verificacao() {
  bool aff = false;
  for (int i = 0; i <= quantidadeUsuario - 1; i++) {
    if (id[i].cpf == cpfLogin && strcmp(id[i].senha, senhaLogin) == 0) {
      aff = true;
      return true;
    }
  }
  return false;
}

void mensagem(int heh) {
  switch (heh) {
  case 1:
    printf("\nEscolha uma opção:\n");
    printf("============================\n");
    printf("1 - Registrar\n");
    printf("2 - Login\n");
    printf("0 - Sair\n");
    printf("============================\n");
    printf("Opção: ");
    scanf("%d", &escolha);
    getchar();
    break;

  case 2:
    system("clear"); // trocar para cls
    printf("\n===== REGISTRO DE USUÁRIO =====\n");
    printf("Por favor, preencha os dados abaixo:\n\n");
    break;

  case 3:
    system("clear"); // trocar para cls
    printf("\n========== LOGIN ==========\n");
    printf("Digite seu CPF:");
    scanf("%d", &cpfLogin);
    getchar();

    printf("Digite sua senha:");
    fgets(senhaLogin, 50, stdin);
    senhaLogin[strcspn(senhaLogin, "\n")] = '\0';
    system("clear"); // trocar para cls
    printf("Aguardando Verificação");
    // Sleep(2000);
    system("clear");
    if (verificacao() == true) {
      printf("\nLOGIN CONCLUIDO\n");
    } else {
      printf("\nFALHA AO ENCONTRAR CONTA VERIFIQUE O CPF E SENHA PARA TENTAR "
             "NOVAMENTE\n");
    }

    break;

  case 4:

    break;
  }
  return;
}

void execucao() {
  mensagem(1);
  switch (escolha) {
  case 1:
    mensagem(2);
    registro(quantidadeUsuario);
    system("clear"); // trocar para cls
    printf("\n//SEU REGISTRO FOI CONCLUIDO// \n");
    execucao();
    break;

  case 2:
    mensagem(3);
    execucao();
    break;

  case 0:

    break;
  }
  return;
}

int main(void) { execucao(); }
