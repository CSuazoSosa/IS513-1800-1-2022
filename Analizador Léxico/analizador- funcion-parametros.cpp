#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//string linea;

//Lectura de archivo
//void lectura(){
//fstream archivo("archivo.txt");
//    string linea;
//    int op;
//    cout <<  "1. - Leer archivo\n2.-Salir\n.";
//    cin >> op;
//
//    if(op == 1)
//        {
//
//            if(!archivo.is_open())
//                archivo.open("archivo.tx",ios::in);
//
//            while(getline(archivo, linea))
//                cout << linea << "\n";
//                archivo.close();
//            	system("pause");
//            
//        }
//}
// Contador de letras y espacios que hay en una frase
void contar(){
	char a[20];
  	int x,z,esp=0,letras=0;
  	
  	printf("escriba una frase: ");
  	scanf("%[^\n]",&a);
  	
  	z = strlen(a);
  	for(x = 0; x <= z; x++)
	  {
  		if(a[x] == ' ')
  		{
  			esp++;		
		}
	  }
	  
	  letras = z - esp;
	  
	  printf("espacios: %d\n",esp);
	  printf("letras: %d\n",letras);
	  
	system("pause");  	
}

int main() 
{
  	contar();
	return 0;
}


