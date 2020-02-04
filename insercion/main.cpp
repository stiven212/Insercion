#include <iostream>

using namespace std;

void ingresar(int arreglo[], int a);
void ordenar (int arreglo[], int a);
void imprimir(int arreglo[], int a);

int main()
{



   int a;


   cout << "Ingrese tamanio del arreglo: ";
    cin >> a;

    int arreglo[a];
    ingresar(arreglo, a);
    ordenar (arreglo, a);
    imprimir(arreglo, a);


    return 0;
}

void ingresar(int arreglo[], int a){

    for(int i=0; i< a; i++){
        cout << "Elemento "<< i+1 << ": ";
        cin >> arreglo[i];
    }

}
void ordenar (int arreglo[], int a){

for(int i=0; i<a; i++){

int     pos=i;
 int    aux=arreglo[i];

    while((pos>0)&&(arreglo[pos-1]>aux)){


        arreglo[pos]=arreglo[pos-1];
        pos--;
    }
    arreglo[pos]=aux;
   }


}
void imprimir(int arreglo[], int a){

for(int i=0; i<a; i++){


        cout <<"|"<<arreglo[i]<<"|";

    }



}
