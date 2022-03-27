void lectura(); //Funcion de Leer
void escribir();//Funcion de Escribir
void conteo();
char cadena[100];
int indice,base,contador=0,leerCaracteres=0;
int main(){
	//lectura();
	conteo();
	//escribir();
	system("pause");
	return 0;
}
void lectura(){
fstream archivo("archivo.txt");
    string linea;
    int op;
    cout <<  "1. - Leer archivo\n2.-Salir\n.";
    cin >> op;

    if(op == 1)
        {

            if(!archivo.is_open())
                archivo.open("archivo.tx",ios::in);

            while(getline(archivo, linea))
                cout << linea << "\n";
                archivo.close();
            	system("pause");
            
        }
}

void conteo(){
	cadena << linea
	gets(cadena);
	l= strlen(cadena);
	
	for(indice=0;indice<base;indice++)
	{
	 if(cadena[indice]==' ')
	 {
	  if(leerCaracteres==1)
	   if(cadena [indice+1]!=' ')
	    contador=contador+1;
	         }
	   else
	    leerCaracteres=1;
	   }
	  
	if(cadena[indice-1]!=' '){
	 contador=contador+1;
	}
	printf("\nel numero de palabras de la frase es: %d",contador);
	return 0;
	

}
 
void escribir() {
	ofstream archivo;
	string nombreArchivo, analisis;
	
	cout<<"Digite el nombre como desea guardar su lectura de archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out); //Abriendo el archivo

	if(archivo.fail()){
		cout<<"No se pudo leer el archivo.txt";
		exit(1);
	}	

	archivo << cadena + contador;
	archivo.close();
}
