#include<iostream>

using namespace std;

namespace spa
{
    void saludo()
    {
        cout<<"hola"<<endl;        
    }
}


namespace eng
{
    void saludo()
    {
        cout<<"hello"<<endl;        
    }
}

//using namespace spa; 
//using namespace eng;

int main()
{
    spa::saludo();
    eng::saludo();
    return 0;
}