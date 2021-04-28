#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

//---------------------------------------<função exercicio 1>--------------------------------
//int * soma_vetores(int *v1, int *v2, int N){
//
//    int *p,i;
//
//    /*alocando dinamicamente o vetor*/
//    p=(int*)calloc(N,sizeof(int));
//    /*printar mensagem de erro caso não tenha memoria disponível*/
//    if(p==NULL){
//       printf("Erro: Sem Memoria disponivel");
//       exit(1);
//    }
//
//    /*somando os vetores v1 e v2 e adicionando ao v3*/
//    for(i=0;i<N;i++){
//        p[i]=v1[i]+v2[i];
//    }
//
//    return p;
//
//    /*liberando a memoria alocada para o vetor*/
//    free(p);
//}


//---------------------------------------<função exercicio 2>--------------------------------
//int procurar(int **pont, int linha, int coluna){
//    int i,j,num;
//    _Bool identi = false;
//
//    /*recebendo um valor*/
//    printf("qual valor vocês gostaria de procurar na matriz?");
//    scanf("%d",&num);
//
//    /*loop para procurar o valor na matriz*/
//    for(i=0;i<linha;i++){
//         for(j=0;j<coluna;j++){
//            if(num==pont[i][j]){
//                /*caso ache, faz o boolean ser verdadeiro e retorna 1*/
//                identi=1;
//                return 1;
//                break;
//            }
//        }
//    }
//
//    /*caso o boolean cotinue sendo falso, retorna 0*/
//    if(identi==false){
//        return 0;
//     }
//}

int main()
{

    setlocale(LC_ALL, "portuguese");

////---------------------------------------<exercicio 1>--------------------------------

//    int vet1[10],vet2[10],n=10,test[14];
//
//    srand(time(NULL));/*alimentando a seed com o relogio*/
//
//    /*adicionando elementos aos vetores 1 e 2*/
//    for(int i=0;i<n;i++){
//            vet1[i]=rand() % 100;
//            vet2[i]=rand() % 100;
//    }
//
//    /*printando os vetores*/
//    printf("v1 ");
//    for(int i=0;i<n;i++){
//        printf("%d ",vet1[i]);
//    }
//        printf("\n");
//
//    printf("v2 ");
//    for(int i=0;i<n;i++){
//        printf("%d ",vet2[i]);
//    }
//        printf("\n");
//
//
//    printf("\n");
//    int *result=soma_vetores(vet1,vet2,n);/*chamando a função e repassando o retorno a variavel result*/
//    printf("\nv3 ");
//    /*printando resultado*/
//    for(int i=0;i<n;i++){
//        printf("%d ",result[i]);
//    }



////---------------------------------------<exercicio 2>--------------------------------


//    int **p, i, j, l, c, result;
//
//    /*pegando as dimenções da matriz*/
//    printf("quantas linhas a matriz terá?\n");
//    scanf("%d",&l);
//    printf("quantas colunas a matriz terá?\n");
//    scanf("%d",&c);
//
//    /*alocando memoria para as linhas da matriz*/
//    p=(int**)malloc(l*sizeof(int*));
//    /*printar mensagem de erro caso não tenha memoria disponível*/
//    if(p==NULL){
//       printf("Erro: Sem Memoria disponivel");
//       exit(1);
//    }
//
//    srand(time(NULL));/*alimentando o seed com o relogio*/
//
//    for(i=0;i<l;i++){
//        /*alocando memoria para as colunas  da matriz*/
//        p[i]=(int*)malloc(c*sizeof(int));
//        for(j=0;j<c;j++){
//            /*enchendo a matriz com numeros aleatorios*/
//            p[i][j]=rand();
//        }
//    }
//
//    /*chamando a função e passando o retorno para a variavel result*/
//    result=procurar(p,l,c);
//
//    /*printando o q a função retornou*/
//    printf("\nvalor retornado foi %d\n", result);
//
//    /*liberando memoria alocada para as colunas*/
//    for(i=0;i<l;i++){
//        free(p[i]);
//    }
//
//    free(p);


////---------------------------------------<exercicio 3>--------------------------------


    int **p, **t, i, j, n, m, aux;

    /*pegando as dimenções da matriz*/
    printf("quantas linhas a matriz terá?\n");
    scanf("%d",&n);
    printf("quantas colunas a matriz terá?\n");
    scanf("%d",&m);
    system("cls");

    /*alocando memoria para as linhas da matriz*/
    p=(int**)malloc(n*sizeof(int*));
    /*printar mensagem de erro caso não tenha memoria disponível*/
    if(p==NULL){
       printf("Erro: Sem Memoria disponivel");
       exit(1);
    }

    for(i=0;i<n;i++){
        /*alocando memoria para as colunas  da matriz*/
        p[i]=(int*)malloc(m*sizeof(int));
        /*adicionando valores a na matriz*/
        for(j=0;j<m;j++){
            printf("digite o valor da %d linha com a %d coluna ",i+1,j+1);
            scanf("%d",&p[i][j]);
            system("cls");
        }
    }

    /*alocando memoria para as linhas da matriz transposta*/
    t=(int**)malloc(m*sizeof(int*));
    /*printar mensagem de erro caso não tenha memoria disponível*/
    if(t==NULL){
       printf("Erro: Sem Memoria disponivel");
       exit(1);
    }

    /*alocando memoria para as colunas da matriz transposta*/
    for(i=0;i<m;i++){
        t[i]=(int*)malloc(n*sizeof(int));
    }

    /*printando a matriz*/
    printf("matriz\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" %d",p[i][j]);
        }
        printf("\n");
    }

    //fazendo a matriz transposta
    for (i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            t[j][i]=p[i][j];
        }
    }

    /*printando a matriz*/
    printf("\nmatriz transposta\n\n");
    for (i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf(" %d", t[i][j]);
        }
        printf("\n");
    }

    /*liberando memoria alocada para a matriz*/
    for(i=0;i<n;i++){
        free(p[i]);
    }

    free(p);

    /*liberando memoria alocada para a matriz transposta*/
    for(i=0;i<n;i++){
        free(t[i]);
    }

    free(t);

////---------------------------------------<exercicio 4>--------------------------------

//    int *p,i, verific=0;
//
//    /*alocando o vetor*/
//    p=(int*)calloc(1500,sizeof(int));
//    /*printar mensagem de erro caso não tenha memoria disponível*/
//    if(p==NULL){
//       printf("Erro: Sem Memoria disponivel");
//       exit(1);
//    }
//
//    /*fazendo o loop para ver se todos valores são iguais a zero*/
//    for(i=0;i<1500;i++){
//        if(p[i]==0){
//            /*caso seja, incrementa o verific*/
//            verific++;
//        }
//        /*aproveitando o loop para atribuir para cada elemento do vetor o valor do seu índice*/
//        p[i]=i;
//    }
//    /*printando o resultado do for*/
//    printf("\n%d elementos são iguais a zero\n",verific);
//
//    /*printando os 10 primeiro elemetos do vetor*/
//    for(i=0;i<10;i++){
//        printf("%d ", p[i]);
//    }
//
//    printf("\n");
//
//    /*printando os 10 últimos elemetos do vetor*/
//    for(i=1499;i>1489;i--){
//        printf("%d ",p[i]);
//    }
//
//    /*liberando memoria alocada para o vetor*/
//    free(p);


    return 0;


}
