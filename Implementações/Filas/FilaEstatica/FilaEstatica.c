#include <stdio.h>
#include <stdlib.h>
#include "FilaEstatica.h" //inclui os Prot�tipos

//Defini��o do tipo Fila
struct fila{
    int inicio, final, qtd;
    struct aluno dados[MAX];
};

Fila* cria_Fila(){
    Fila *fi;
    fi = (Fila*) malloc(sizeof(struct fila));
    if(fi != NULL){
        fi->inicio = 0;
        fi->final = 0;
        fi->qtd = 0;
    }
    return fi;
}

void libera_Fila(Fila* fi){
    free(fi);
}

int consulta_Fila(Fila* fi, struct aluno *al){
    if(fi == NULL || Fila_vazia(fi))
        return 0;
    *al = fi->dados[fi->inicio];
    return 1;
}

int insere_Fila(Fila* fi, struct aluno al){
    if(fi == NULL)
        return 0;
    if(Fila_cheia(fi))
        return 0;
    fi->dados[fi->final] = al;
    fi->final = (fi->final+1)%MAX;
    fi->qtd++;
    return 1;
}

int remove_Fila(Fila* fi){
    if(fi == NULL || Fila_vazia(fi))
        return 0;
    fi->inicio = (fi->inicio+1)%MAX;
    fi->qtd--;
    return 1;
}

int tamanho_Fila(Fila* fi){
    if(fi == NULL)
        return -1;
    return fi->qtd;
}

int Fila_cheia(Fila* fi){
    if(fi == NULL)
        return -1;
    if (fi->qtd == MAX)
        return 1;
    else
        return 0;
}

int Fila_vazia(Fila* fi){
    if(fi == NULL)
        return -1;
    if (fi->qtd == 0)
        return 1;
    else
        return 0;
}

void imprime_Fila(Fila* fi){
    if(fi == NULL)
        return;
    int n, i = fi->inicio;
    for(n=0; n < fi->qtd; n++){
        printf("Matricula: %d\n",fi->dados[i].matricula);
        printf("Nome: %s\n",fi->dados[i].nome);
        printf("Notas: %f %f %f\n",fi->dados[i].n1,
                                   fi->dados[i].n2,
                                   fi->dados[i].n3);
        printf("-------------------------------\n");
        i = (i + 1) % MAX;
    }
}

int main(){
    struct aluno al,a[4] = {{2,"Andre",9.5,7.8,8.5},
                         {4,"Ricardo",7.5,8.7,6.8},
                         {1,"Bianca",9.7,6.7,8.4},
                         {3,"Ana",5.7,6.1,7.4}};
    Fila* fi = cria_Fila();
    printf("Tamanho: %d\n\n\n\n",tamanho_Fila(fi));
    int i;
    for(i=0; i < 4; i++){
        insere_Fila(fi,a[i]);
        consulta_Fila(fi,&al);
        printf("Consulta: %d \t %s\n",al.matricula,al.nome);
    }

    imprime_Fila(fi);
    printf("Tamanho: %d\n\n\n\n",tamanho_Fila(fi));

    for(i=0; i < 4; i++){
        remove_Fila(fi);
        consulta_Fila(fi,&al);
        printf("Consulta: %d \t %s\n",al.matricula,al.nome);
    }
    printf("Tamanho: %d\n\n\n\n",tamanho_Fila(fi));
    imprime_Fila(fi);

    for(i=0; i < 4; i++)
        insere_Fila(fi,a[i]);

    printf("Tamanho: %d\n\n\n\n",tamanho_Fila(fi));
    imprime_Fila(fi);

    libera_Fila(fi);
    system("pause");
    return 0;
}

