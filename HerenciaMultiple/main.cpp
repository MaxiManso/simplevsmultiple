#include <iostream>
#include "dto/ConsolaDeJuego.cpp"
#include "dto/DispositivoTactilPortatil.cpp"
#include "dto/NintendoSwitch.cpp"
using namespace std;




int main()
{
    DispositivoTactilPortatil dis;

    dis.encender();
    dis.disminuirBrillo(20);
    dis.copiar("BOCA JUNIORS EL MAS GRANDE");
    dis.pegar();
    dis.subirBrillo(60);
    dis.mostrarBateria();
    dis.apagar();

    cout <<"***********************************************"<<endl;

    ConsolaDeJuego con;

    con.encender();
    con.abrirJuego("fifa");
    con.jugar();
    con.abrirJuego("fifa");
    con.abrirJuego("assassing");
    con.jugar();
    con.cerrarJuego();
    con.apagar();

    cout <<"***********************************************"<<endl;


    NintendoSwitch nin;
    nin.encender();
    nin.listarJuegos();
    nin.abrirJuego("Super Mario");
    nin.jugar();
    nin.copiar("prueba del portapapeles");
    nin.pegar();
    nin.disminuirBrillo(30);
    nin.subirBrillo(60);
    nin.abrirJuego("Mario Kart 8");
    nin.jugar();
    nin.jugar();
    nin.jugar();
    nin.cerrarJuego();
    nin.mostrarBateria();
    nin.apagar();
    nin.jugar();

    return 0;
}
