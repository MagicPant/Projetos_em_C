#include "usuario.h"


usuario::usuario()
    :meu_nome(0),
    meu_login(0),
    minha_senha(0),
    meu_email(0),
    meu_cpf(0),
    meu_RG(0)
{

}

usuario::usuario(char nome,char login,char senha,char email,char cpf,char RG)
    :meu_nome(nome),
    meu_login(login),
    minha_senha(senha),
    meu_email(email),
    meu_cpf(cpf),
    meu_RG(RG)
{

}

FILE* arquivo;

usuario::~usuario()
{
    
}
char registra_nome[10],registra_login[10],registra_senha[10],registra_email[10],registra_cpf[10],registra_rg[10];
void usuario::SetUsuario(char* nome,char* login,char* senha,char* email,char* cpf,char* RG)
{
   arquivo = fopen("arquivo.txt","a");
   //encriptar ta ok
    for (int i = 0; i < 6; i++){
         registra_nome[i] = static_cast<char>(nome[i] + 3);
         registra_login[i] = static_cast<char>(login[i] + 3);
         registra_senha[i] = static_cast<char>(senha[i] + 3);
         registra_email[i] = static_cast<char>(email[i] + 3);
         registra_cpf[i] = static_cast<char>(cpf[i] + 3);
         registra_rg[i] = static_cast<char>(RG[i] + 3);
    }
   fprintf(arquivo,"%s",registra_nome);
   fprintf(arquivo,"\n%s",registra_login);
   fprintf(arquivo,"\n%s",registra_senha);
   fprintf(arquivo,"\n%s",registra_email);
   fprintf(arquivo,"\n%s",registra_cpf);
   fprintf(arquivo,"\n%s",registra_rg);
   fclose(arquivo); 
}
char string1[100];
char usuario::GetUsuario(){
    int tamanho;
    char string [100];
    arquivo =fopen("arquivo.txt","r");
    if(arquivo == NULL){
        printf("este arquivo nao existe!");
    }else{
        printf("\n-->conteudo do arquivo {%s}:\n\n","arquivo.txt");
        while(fscanf(arquivo," %[^\n]%*c",string) != EOF){
            tamanho = strlen(string);
            for(int i=0;i<tamanho;i++){
                string1[i] = string[i]-3;
            }
            printf("\n%s",string1);
        }
        printf("\n\n");
    }
    return 0;
}




