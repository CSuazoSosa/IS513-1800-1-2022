// Parte 1
#define IDENTIFICADOR 2
#define CADENA 1
#define NUMERO 3
#define NINGUNO 0

// Parte 2

enum estado
{
	ESTADO_NINGUNO,
	ESTADO_CADENA,
	ESTADO_NUMERO,
	ESTADO_IDENTIFICADOR
};
typedef enum estado Estado;
Estado estado_actual = ESTADO_NINGUNO;

// Parte 3
typedef struct elementoToken
{
	char *atributo;
	int cant_tipo_token;
	unsigned numero_linea;
} Token;

string linea;

// Lectura de archivo
void lectura()
{
	fstream archivo("archivo.txt");
	string linea;
	int op;
	cout << "1. - Leer archivo\n2.-Salir\n.";
	cin >> op;

	if (op == 1)
	{

		if (!archivo.is_open())
			archivo.open("archivo.tx", ios::in);

		while (getline(archivo, linea))
			cout << linea << "\n";
		archivo.close();
		system("pause");
	}
}
// Contador de letras y espacios que hay en una frase
void contar()
{
	char a[20];
	int x, z, esp = 0, letras = 0;

	printf("escriba una frase: ");
	scanf("%[^\n]", &a);

	z = strlen(a);
	for (x = 0; x <= z; x++)
	{
		if (a[x] == ' ')
		{
			esp++;
		}
	}

	letras = z - esp;

	printf("espacios: %d\n", esp);
	printf("letras: %d\n", letras);

	system("pause");
}

int main()
{

	// Funciones a Crear

	void automata(FILE * archivo, Lista * lista_tokens);
		char caracter;
    		estado_actual = ESTADO_NINGUNO;
    		unsigned contador_lineas = 1;
    		Lista *buffer = (Lista*)malloc(sizeof(Lista));
    		inicializarLista(buffer,INT);
	
		while ((caracter = fgetc(fichero))!=EOF)
	    	{
		if(caracter=='\n')
		    contador_lineas++;
		switch (estado_actual)
		{
				
		case ESTADO_NINGUNO:
		    if((caracter == ' ') || (caracter == '\t') || (caracter == '\n') ){
			estado_actual = ESTADO_NINGUNO;
		    }
		    else{
			if(comprobarCaracter(caracter)){
			    estado_actual=ESTADO_CADENA;
			    insertarUltimo(buffer,&caracter);
			}else{
			    if(comprobarNumero(caracter)){
				estado_actual=ESTADO_NUMERO;
				insertarUltimo(buffer,&caracter);
			    }
			}
		    }
		    break;
		
		case ESTADO_CADENA:
		    if((caracter == ' ') || (caracter == '\t') || (caracter == '\n') ){
			    Token *token = (Token *)malloc(sizeof(Token));
			token->atributo = obtenerAtributo(buffer);
			token->tipo_token = IDENTIFICADOR;
			token->numero_linea = contador_lineas;
			insertarUltimo(lista_tokens,token);
			estado_actual = ESTADO_NINGUNO;
			vaciarLista(buffer);
		    }else
		    {
			if(comprobarCaracter(caracter)){
			    insertarUltimo(buffer,&caracter);
			    estado_actual = ESTADO_CADENA;
			}else
			{
			    if(comprobarNumero(caracter)){
				insertarUltimo(buffer,&caracter);
				estado_actual=ESTADO_IDENTIFICADOR;
			    }
			}

		    }

		    break;
	
	// bool comprobarCaracter(char caracter);
	// bool comprobarNumero(char numero);
	// char *obtenerAtributo(Lista * lista);
	// void presentacion(Lista * lista_tokens);
	// char *tipoToken(Token * token);
	lectura()
			contar();
	return 0;
}
