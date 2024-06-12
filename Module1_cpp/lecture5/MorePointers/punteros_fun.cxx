#include<iostream>
using namespace std;

int suma(int a,int b){
    return a+b;
}
void suma_vec(int *sum,int *a, int *b, int n){  // n no tiene el *, a diferencia de a y b porque n es la que dicide el tamaño y debe ser un valor fijo
    for(int i=0;i<n;i++){
        sum[i]=a[i]+b[i];
    }
}
void resta_vec(int *sum,int *a, int *b, int n){
    for(int i=0;i<n;i++){
        sum[i]=a[i]-b[i];
    }
}
void operar(void (*op)(int*,int*,int*,int),int *sum,int *a, int *b, int n){
    op(sum,a,b,3);
} 
/* operar toma como primer parámetro: void (*op)(int*,int*,int*,int), que es una función 
que definen como op.
*/
int main(){
    int (*suma_prt)(int,int); // es int al principio porque la función suma me retornará un entero
    suma_prt = &suma;
    cout<<suma_prt(2,2)<<endl;

    void (*suma_v_prt)(int*,int*,int*,int);
    suma_v_prt = &suma_vec;
    
    int a[]={1,1,1};
    int b[]={2,2,2};
    int c[3];
    
    //suma_v_prt(c,a,b,3);
    //cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;

    operar(suma_vec,c,a,b,3);
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;

    operar(resta_vec,c,a,b,3);
    cout<<c[0]<<" "<<c[1]<<" "<<c[2]<<endl;
    return 0;
}
