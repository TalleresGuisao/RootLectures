#include<iostream>
using namespace std;

void llenar(int *p,int n, int valor){
    for(int i=0;i<n;i++){
        p[i]=valor;
    }
}
void print(int *p,int n){
    cout<<"[";
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    } 
    cout<<"]"<<endl;
}
void sumar(int *suma, int *v1, int *v2,int n){
    for(int i=0;i<n;i++){
        suma[i] = v1[i]+v2[i];
    }
}
int main(){ // Tanto p1, como p2, como p3 son arreglos, solo que p2 es estático, y p1 y p3 son dinámicos
    unsigned int num=10;  // El unsigned es porque no puede ser negativo.
    int *p1 = new int[num]; // creo un arreglo de 10 enteros,
    int p2[] = {1,1,1,1,1,1,1,1,1,1}; // 10 enteros con asignación estática e inicializado 
                                      // con valores en 1, no necesita usarse delete, se borra solo
    int *p3 = new int[num]; // creo un arreglo de 10 enteros
    llenar(p1,num,2);
    print(p1,num);
    //llenar(p2,num,2); //está inicializado
    print(p2,num);
    sumar(p3,p1,p2,num);
    print(p3,num);

    delete[] p1;  // El [] es porque es un arreglo
    //delete[] p2;//no es necesario cuando es estática
    delete[] p3;
    
    /*
    El p2 no es necesario borrarlo ya que fue inicializado estaticamente, estos el complilador
    los elimina solos
    Si yo lo intentase borrar me saldrá un error.

    Si yo creo un puntero dinámico dentro de una función y no lo elimino, cada que yo llame
    la función estoy almacenando memoria en un puntero de manera innecesaria que nunca se 
    elimina. En cambio, si el puntero hubiese sido declarado estáticamente este se elimina una 
    vez finalice la funcion.

    Buscar qué es el stack y qué es el heap
    */
    return 0;
}