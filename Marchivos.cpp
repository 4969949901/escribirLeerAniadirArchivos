#include <iostream>
#include <fstream>

using namespace std;

void escribirArchivos(){  // abrir archivo
    ofstream archivo;
    string nomArchk;

    //cout<<"Digite el nombre para el archivo";
    //getline(cin,nomArchk);

    archivo.open("c:parcial.txt",ios::out);

    if (archivo.fail()){
        cout<<"No se puede abrir el archivo";
        exit(1);

    }
    cout<<"Helen Acevedo Tobar";
    archivo.close();//se cierra el archivo

}

void leerArchivos(){
    ifstream archivo;
    string texto;

    archivo.open ("c:parcial.txt",ios::in);//Abrimos el archivo

    if(archivo.fail()){
        cout<<"Error al intentar abrir el archivo";
        exit(1);
    }
    while(!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<endl;

    }
    archivo.close();//cerramos el archivo

}
void aniadirArchivo(){
    ofstream archivo;

    archivo.open("c:parcial.txt",ios::app);

    if (archivo.fail()){
        cout<<"Error no se puede abrir el archivo";
        exit(1);
    }
        archivo<<"carne: 0909-21-1802";
        archivo.close();

}