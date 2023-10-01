#include <iostream>
using namespace std;

class Ipad: public DispositivoTactilPortatil{
private:
    string aplicacionesInstaladas[3];

public:
    Ipad(): DispositivoTactilPortatil(){
        aplicacionesInstaladas[0] = "Instagram";
        aplicacionesInstaladas[0] = "Whatsapp";
        aplicacionesInstaladas[0] = "X";
    }
    void abrirAplicacion(string aplicacion);

};

void Ipad::abrirAplicacion(string aplicacion){
     cout<<"Abriendo "+aplicacion  <<endl;
}

