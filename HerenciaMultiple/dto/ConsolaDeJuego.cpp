#include <iostream>
using namespace std;

class ConsolaDeJuego{

    protected:
    string juegoActual;
    bool encendida;

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

};


string ConsolaDeJuego::toString(){
    cout<<"Encendida: "+std::to_string(encendida)+"| Juego: "+juegoActual<<endl;
}

void ConsolaDeJuego::encender(){
    if(encendida == false){
        encendida = true;
        cout<<"Encendiendo"<<endl;
    }else{
        cout<<"La consola ya se encuentra encendido."<<endl;
    }
}

void ConsolaDeJuego::apagar(){
    if(encendida == true){
        encendida = false;
        cout<<"Apagando"<<endl;
    }else{
        cout<<"La consola ya se encuentra apagado."<<endl;
    }

}

void ConsolaDeJuego::abrirJuego(string jue){
    if(encendida == true){
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
    if(encendida == true){
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
    if(encendida == true){
        if(juegoActual != ""){
            cout<<"jugando " + juegoActual<<endl;
        }else{
            cout<<"No hay ningun juego abierto para juegar"<<endl;
        }

    }else {
        cout<<"La consola se encuentra apagado."<<endl;

    }
}
