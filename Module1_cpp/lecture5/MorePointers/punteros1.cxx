#include<iostream>
using namespace std;
 /* Cuando yo hago int a lo que estoy haciendo es tomar el valor de la variable 
que me pasan, hacerle una copia y dicho valor usarlo ahí.
Sin embargo, si yo lo que quiero es modificar el valor de a debo usar punteros.
*/
void test(int a)  
{
    a++;
    cout<<a<<endl;
}
void incremento_ptr(int *p)  // Aquí le estoy diciendo, cójame el valor de p e incremente uno
{
    (*p)++;
}
void incremento_ref(int &n)  // Con el & me recibe la dirección de memoria, por lo que si yo imprimo un n que esté afuera de la función, se va a ver modificado. Si yo no quiero que se me modifique, debo quitarle el &, tal como lo hice en test
{
    n++; //como es referencia no necesito la sintaxis de aritmética de punteros
}
int main()
{
    int num;
    //int *p = new int;
    int *p;
    p = new int; // Asigno la variable puntero 
    (*p) = 321;  // Le doy el valor a puntero
    cout<<"dirreccón de memeria = "<<p<<endl;
    cout<<"valor = "<<*p<<endl;  

    
    incremento_ptr(p);
    cout<<"valor (p) = "<<*p<<endl;
    delete p;
    p=nullptr;
    cout<<"dirreccón de memeria (p) = "<<p<<endl;
    cout<< " " <<endl;

    p = &num; // asi se le asigna un valor a p, el operador & retorna la posición de memoria de num
    num = 1;

    cout<<"dirreccón de memeria (p) = "<<p<<endl;
    cout<<"dirreccón de memeria (num) = "<<&num<<endl;
    cout<<"valor (p) = "<<*p<<endl;
    cout<<"valor (num) = "<<num<<endl;
    
    incremento_ref(num);
    cout<<"valor (p) = "<<*p<<endl;
    cout<<"valor (num) = "<<num<<endl;
    return 0;
    
}
