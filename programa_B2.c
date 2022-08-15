#include<stdio.h>

int main(){

int media,numeros[3];


for(int i=0;i<3;i++){
    printf("%d\n",numeros[i]);
}

media=(numeros[0]+numeros[1]+numeros[2])/3;

printf("%d\n",media);

}