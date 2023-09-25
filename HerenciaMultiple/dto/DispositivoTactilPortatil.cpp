#include <iostream>
using namespace std;

class DispositivoTactilPortatil{
    protected:
        bool encendida;
        int brillo, bateria;
        string portapapeles;

    public:
        DispositivoTactilPortatil(){
            encendida = false;
            bateria = 100;
            brillo = 50;
            portapapeles = "";
        }

        string toString();
        void encender();
        void apagar();
        void copiar(string);
        void pegar();
        void subirBrillo(int);
        void disminuirBrillo(int);
        void mostrarBateria();

};


void DispositivoTactilPortatil::encender(){
  //  if(encendida == false){
        encendida = true;
        cout<<"Encendiendo"<<endl;
 /*   }else{
        cout<<"El dispositivo ya se encuentra encendido."<<endl;
    }*/
}

void DispositivoTactilPortatil::apagar(){
 //   if(encendida == true){
        encendida = false;
        cout<<"Apagando"<<endl;
 /*   }else{
        cout<<"El dispositivo ya se encuentra apagado."<<endl;
    }*/


}

void DispositivoTactilPortatil::copiar(string texto){
  //  if(encendida == true){
        portapapeles = texto;
        cout<<"texto copiado en el portapapeles."<<endl;
 /*   }else{
        cout<<"El dispositivo se encuentra apagado."<<endl;
    }*/
}

void DispositivoTactilPortatil::pegar(){
  //  if(encendida == true){
        if(portapapeles != ""){
            cout<<"Texto pegado desde el portapapeles: "+portapapeles<<endl;
        }else{
            cout<<"El portapapeles esta vacio."<<endl;
        }
  /*  }else{
        cout<<"El dispositivo se encuentra apagado."<<endl;
    }*/
}

void DispositivoTactilPortatil::disminuirBrillo(int cantidad){
 //   if(encendida == true){
        if (brillo - cantidad >= 0){
            brillo -= cantidad;
            cout<< "Brillo disminuido a "+std::to_string(brillo)+"%."<<endl;
        }else{
            brillo = 0;
            cout<< "El brillo ha sido ajustado al minimo (0%)."<<endl;
        }
  /*  }else{
        cout<<"El dispositivo se encuentra apagado."<<endl;
    }*/
}

void DispositivoTactilPortatil::subirBrillo(int cantidad){
  //  if(encendida == true){
        if( brillo + cantidad <= 100){
            brillo += cantidad;
            cout<< "Brillo aumentado a "+std::to_string(brillo)+"%."<<endl;
        }else{
            brillo = 100;
            cout<< "El brillo ha sido ajustado al maximo (100%)."<<endl;
        }
  /*  }else{
        cout<<"El dispositivo se encuentra apagado."<<endl;
    }*/
}

void DispositivoTactilPortatil::mostrarBateria(){
 //   if(encendida == true){
        cout<<"Bateria actual: "+std::to_string(bateria)+"%."<<endl;
 /*   }else{
        cout<<"El dispositivo se encuentra apagado."<<endl;
    }*/
}

string DispositivoTactilPortatil::toString(){

    return "encendida: "+std::to_string(encendida)+"\nportapapeles: "+portapapeles+"\nbrillo: "+std::to_string(brillo)+"\nbateria: "+std::to_string(bateria);
}
