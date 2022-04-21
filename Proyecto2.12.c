#include<stdio.h>
#include<stdlib.h>

int main()
{
    float precio,desc,veinte,preciof;

    printf("Igrese el precio: ");
    scanf("%f",&precio);
    printf("Ingrese 1 si el producto tiene descuento o 0 si no lo tiene: ");
    scanf("%f",&desc);

    if(desc==1){
       veinte=(precio*20)/100;
       preciof=precio-veinte;
       printf("El precio de tu producto es: $%0.2f",preciof);
    }
    if(desc==0){
        preciof=precio;
        printf("El precio de tu producto es: $%0.2f",preciof);
    }
    else{
        printf("Error, debe seleccionar 1 o 0");
    }
    return 0;
}
