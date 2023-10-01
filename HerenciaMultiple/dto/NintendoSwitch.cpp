#include <iostream>
using namespace std;

class NintendoSwitch: public ConsolaDeJuego, public DispositivoTactilPortatil{

private:
    string cartuchoInsertado="";
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
    bool estaEncendida();
    void insertarCartucho(string cartucho);
    void sacarCartucho();

};


bool NintendoSwitch::estaEncendida(){
    return encendida;
}

void NintendoSwitch::insertarCartucho(string cartucho){
    if (estaEncendida()){
        if(cartuchoInsertado == ""){
            cartuchoInsertado = cartucho;
            juegoActual = cartucho;
            cout<<"Cargando Juego "+ cartucho<<endl;
        }else{
            cout<<"ya hay cartucho en la consola."<<endl;
        }
    }else{
        cout<<"La consola se encuentra apagada."<<endl;
    }
}

void NintendoSwitch::sacarCartucho(){
    if (estaEncendida()){
        if(cartuchoInsertado != ""){
            cartuchoInsertado = "";
            juegoActual = "";
            cout<<"Guardar el cartucho en su caja."<<endl;
        }else{
            cout<<"Ya no hay cartucho para retirar."<<endl;
        }
    }else{
        cout<<"La consola se encuentra apagada."<<endl;
    }
}


void NintendoSwitch::jugar(){
    if(estaEncendida()){
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
