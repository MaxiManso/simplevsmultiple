#include <iostream>
using namespace std;

class NintendoSwitch: public ConsolaDeJuego, public DispositivoTactilPortatil{
protected:
    string listaJuego[4];

public:
    NintendoSwitch(): ConsolaDeJuego(), DispositivoTactilPortatil(){
        listaJuego[0] = "Super Mario";
        listaJuego[1] = "Zelda: Tears of the Kingdom";
        listaJuego[2] = "Mario Kart 8";
        listaJuego[3] = "Animal Crossing: New Horizons";
    }
    void jugar();
    void listarJuegos();
    using ConsolaDeJuego::encender;
    using ConsolaDeJuego::apagar;
    using ConsolaDeJuego::encendida;
};


void NintendoSwitch::jugar(){
    if(encendida==true){
        if (juegoActual != ""){
            cout<<"Jugando "+juegoActual<<endl;
            bateria -=  5;
            if (bateria < 0){
                bateria = 0;
                encendida = false;
            }
        }else{
            cout<<"No hay ningun juego abierto para juegar"<<endl;
        }
    }else{
        cout<<"La Nintendo Switch se encuentra apagada"<<endl;
    }

}

void NintendoSwitch::listarJuegos(){
    cout<<"Lista de juegos"<<endl;
    cout<<"---------------"<<endl;
    for(int i = 0; i<4; i++){
        cout<<listaJuego[i]<<endl;
    }
    cout<<"---------------"<<endl;
}
