#include <iostream>
#include "dto/ConsolaDeJuego.cpp"
#include "dto/DispositivoTactilPortatil.cpp"
#include "dto/NintendoSwitch.cpp"
#include "dto/PlayStation5.cpp"
#include "dto/Ipad.cpp"
using namespace std;




int main()
{
    DispositivoTactilPortatil dis;
    dis.encender();
    dis.disminuirBrillo(20);
    dis.copiar("Prueba de  portapapeles");
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

    nin.insertarCartucho("marioasdasdasdasd");
    nin.apagar();

    nin.jugar();

    PlayStation5 ps5;
    ps5.encender();
    ps5.abrirJuego("FIFA 24");
    ps5.insertarDisco("PES");
    ps5.jugar();
    ps5.sacarDisco();

    Ipad ip;
    ip.abrirAplicacion("WhatsApp");


    return 0;
}
