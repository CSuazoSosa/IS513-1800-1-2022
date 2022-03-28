#include <iostream>
#include <string.h>

using namespace std;

string cadena[500] = "";
int nCadenas=0;
int contador=0;



void entradaCadenas() {
	
	cout << "\nFavor escriba cuantas cadenas desea ingresar: ";
	cin >>nCadenas;
    
    while( contador < nCadenas){
        cout << "\nFavor Ingresar una Palabra: "<<endl;
        cin>>cadena[contador];
        
        cout << "\n";
        
        contador++;
        
    }
}


char salidaCadena() {
	
	contador = 0;
    for(unsigned int i = 0; i < nCadenas; i++){
		cout<<cadena[i]<<" ";
	}
}

int main() {
    
    //declararVariables();
	entradaCadenas();
	//unirCadenas();
	salidaCadena();
  
    return 0;
}
