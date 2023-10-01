#include <iostream>
using namespace std;

class PlayStation5 : public ConsolaDeJuego{
private:
    string discoInsertado;


public:
    PlayStation5(): ConsolaDeJuego(){
        discoInsertado = "";
        listaJuego[0] = "God of War";
        listaJuego[1] = "Uncharted";
        listaJuego[2] = "Ghost of Tsushima";
        listaJuego[3] = "Bloodborne";
    }

    void insertarDisco(string disco);
    void sacarDisco();
    void listarJuegos();


};

void PlayStation5::insertarDisco(string disco){
    if (estaEncendida()){
        if(discoInsertado == ""){
            discoInsertado = disco;
            juegoActual = disco;
            cout<<"Cargando Juego "+ disco<<endl;
        }else{
            cout<<"ya hay un disco en la consola."<<endl;
        }
    }else{
        cout<<"La consola se encuentra apagada."<<endl;
    }
}

void PlayStation5::sacarDisco(){
    if (estaEncendida()){
        if(discoInsertado != ""){
            discoInsertado = "";
            juegoActual = "";
            cout<<"Guardar el disco en su caja."<<endl;
        }else{
            cout<<"Ya no hay un disco para retirar."<<endl;
        }
    }else{
        cout<<"La consola se encuentra apagada."<<endl;
    }
}

void PlayStation5::listarJuegos(){
    cout<<"Lista de juegos"<<endl;
    cout<<"---------------"<<endl;
    for(int i = 0; i<4; i++){
        cout<<listaJuego[i]<<endl;
    }
    cout<<"---------------"<<endl;
}

