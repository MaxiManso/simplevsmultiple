#include <iostream>
using namespace std;

class ConsolaDeJuego{

    protected:
//    bool encendidaCon;
    bool encendida;
    string juegoActual;
    string listaJuego[4];

    public:
    ConsolaDeJuego(){
        encendida = false;
        juegoActual = "";
    }

    string toString();
    void encender();
    void apagar();
    void abrirJuego(string);
    void cerrarJuego();
    void jugar();
    bool virtual estaEncendida();


};

bool ConsolaDeJuego::estaEncendida(){
    return encendida;
}

string ConsolaDeJuego::toString(){
    cout<<"Encendida: "+std::to_string(encendida)+"| Juego: "+juegoActual<<endl;
}

void ConsolaDeJuego::encender(){
    if(!estaEncendida()){
        encendida = true;
        cout<<"Encendiendo"<<endl;
    }else{
        cout<<"La consola ya se encuentra encendido."<<endl;
    }
}

void ConsolaDeJuego::apagar(){
    if(estaEncendida()){
        encendida = false;
        cout<<"Apagando"<<endl;
    }else{
        cout<<"La consola ya se encuentra apagado."<<endl;
    }

}

void ConsolaDeJuego::abrirJuego(string jue){
    if(estaEncendida()){
        if(juegoActual == ""){
            juegoActual = jue;
            cout<<"Juego "+juegoActual+ " abierto"<<endl;
        }else{
            if( juegoActual != jue){
                cout<<"Cerrando juego "+juegoActual<<endl;
                juegoActual = jue;
                cout<<"Abriendo juego "+juegoActual<<endl;
            }else{
                cout<<"Ya se encuentra en ejecucion dicho juego"<<endl;
            }
        }

    }else {
        cout<<"La consola se encuentra apagado."<<endl;
    }

}

void ConsolaDeJuego::cerrarJuego(){
    if(estaEncendida()){
            if(juegoActual != ""){
                cout<<"Cerrando juego "+juegoActual<<endl;
                juegoActual = "";
            }else{
                cout<<"No hay ningun juego en ejecucion para cerrar"<<endl;
            }
    }else {
        cout<<"La consola se encuentra apagado."<<endl;
    }
}

void ConsolaDeJuego::jugar(){
    if(estaEncendida()){
        if(juegoActual != ""){
            cout<<"jugando " + juegoActual<<endl;
        }else{
            cout<<"No hay ningun juego abierto para juegar"<<endl;
        }

    }else {
        cout<<"La consola se encuentra apagado."<<endl;

    }
}
