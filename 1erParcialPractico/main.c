#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;
} ePais;

int harcodearPaises(ePais paises[],int tam);

void (ePais pais, int recuperados);

void invertirCadena(char cadena1[], char cadena2[], int tam);


int main()
{
   ePais paises[5];
   int idPais;
   int recuperados;

   harcodearPaises(paises,5);
   mostrarPaises(paises,5);
   printf("Ingrese id del pais: ");
   scanf("%d",&idPais);
   printf("Ingrese cantidad de recuperados: ");
   scanf("%d",&recuperados);
   actualizarRecuperados(paises,idPais,recuperados);




}

int harcodearPaises(ePais paises[],int tam)
{
    int id[5]={1,2,3,4,5};
    char nombre[5][20]={"Argentina","Brasil","Chile","Bolivia","Uruguay"};
    int infectados=0;
    int recuperados=0;
    int muertos=0;
    char cadena1[20]="Juan";
    char cadena2[20];

    int error=1;
    if(paises!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            paises[i].id=id;
            strcpy(paises[i].nombre,nombre[i]);
            paises[i].infectados=infectados;
            paises[i].recuperados=recuperados;
            paises[i].muertos=muertos;

        }
    }
}

void actualizarRecuperados(ePais paises[], int idPais int recuperados){
   int index;
    if(paises!=NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
           if(paises[i].id==idPais){
                index=paises[i].id;
           }
        }

    paises[index].recuperados+=recuperados;
    return;
}

int mostrarPaises(ePais paises[], int tam)
{
    int error=1;
    if(paises!=NULL && tam>0)
    {
        printf("Listado paises\n");
        for(int i=0; i<tam; i++)
        {
            printf("id: %d      pais: %20c",paises[i].id,paises[i].nombre);
        }
        printf("\n\n");
        error=0;
    }
    return error;

void invertirCadena(char cadena1[], char cadena2[], int tam){
    for(int i=0;)
}
