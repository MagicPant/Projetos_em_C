#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    //int produtos[4];

    printf("Informe a quantidade de itens: ");
    scanf("%d",&n);

    int produtos[n];
    int *pprod;
    pprod = produtos;


    for (i=0;i<n;i++){
        printf("\nInforme o cod para o item [%d]: ",i+1);
        scanf("%d",&pprod[i]);
    }

    for (i=0;i<n;i++){
        printf("\nCod para o item [%d]: %d \n",i+1,*(pprod+i));
    }


    return 0;
}
