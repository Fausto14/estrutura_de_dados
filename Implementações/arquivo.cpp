#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // criando a variável ponteiro para o arquivo
  FILE *p;
  
  //abrindo o arquivo
  p = fopen("arquivo.txt", "a");
  
  // fechando arquivo
  fclose(p);
  
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!");
  
  system("pause");
  return(0);
}
