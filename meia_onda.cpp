#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float n1,n2,volt,volt2,freq;//VOLT2 =v2rms
    int verifica;
    float v2p,vrlp,vrlmed,vrlrms,PIV,res;
    float Irlp,Irlmed,Irlrms;
    float Cap,Vrpp,Vmf;
    printf("\nDigite o n1 da prop: ");
    scanf("%f",&n1);
    printf("\nDigite o n2 da prop: ");
    scanf("%f",&n2);
    printf("\nDigite a voltagem: ");
    scanf("%f",&volt);
    printf("\nDigite a resistencia: ");
    scanf("%f",&res);
    printf("\nDigite a frequencia: ");
    scanf("%f",&freq);
    printf("\nDigite 1 se deseja adicionar um filtro: ");
    scanf("%d",&verifica);
    if(verifica == 1){
        printf("\nDigite a capacitancia: ");
        scanf("%f",&Cap);
    }

    volt2 = (volt*n2)/n1;
    v2p = volt2 * sqrt(2);
    vrlp = v2p-0.7;
    vrlmed = 0.318*vrlp;
    vrlrms = vrlp/2;
    PIV = v2p;

    Irlp = vrlp/res;
    Irlmed = vrlmed/res;
    Irlrms = vrlrms/res;


    printf("\nfrequencia = %.3f Hz",freq);
    printf("\nv2rms = %.3f V",volt2);
    printf("\nresistencia = %.2f V",res);
    printf("\nv2p = %.2f V",v2p);
    printf("\nvrlp = %.2f V",vrlp);
    printf("\nvrlmed = %.2f V",vrlmed);
    printf("\nvrlrms = %.2f V",vrlrms);
    printf("\nPIV = %.2f V",PIV);
    printf("\nIrlp = %.2f A",Irlp);
    printf("\nIrlmed = %.2f A",Irlmed);
    printf("\nIrlrms = %.2f A",Irlrms);
     if(verifica == 1){
        Vrpp = Irlp/(freq*Cap);
        Vmf = vrlp -(Vrpp/2);
        printf("\nA tensao de ondulacao(ripple) eh %.3f V",Vrpp);
        printf("\nO valor medio da tensao(CC) eh %.3f V",Vmf);
    }

    return 0;
}
