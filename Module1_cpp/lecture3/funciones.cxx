#include<iostream>
#include<string>

using namespace std;

int sumar(int x, int y) {
   int resultado = x + y;
   return resultado;
}


// Función para imprimir un mensaje por pantalla
void imprimirMensaje(string mensaje) {
   cout << mensaje << endl;
}

int main()
{
    int a = 5;
    int b = 7;
    int c = sumar(a, b); // c tendrá el valor 12

    cout<<"la suma de 5+7 es = "<<c<<endl;
    imprimirMensaje("finalizando programa");
    return 0;
}