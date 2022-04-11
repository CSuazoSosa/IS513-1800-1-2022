
char c[100];
int i=0, x=0 , h=0, d=0,y=0, r=0;
//x= Vocales
//h = Numeros
//d= Espaciosafdga
// y = simbolos
// r = restante
void contar();
int main(void){
	contar();
}

void contar()
{
	printf("ingrese una cadena \n");
	gets(c);
	while(c[i]!= '\0')
	{
		if(c[i]=='A'||c[i]=='a'||c[i]=='E'||c[i]=='e'||c[i]=='I'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='U'||c[i]=='u')
			x++;
		else if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9')
			h++;
		else if(c[i]==' ')
			d++;
		else if(c[i]=='<'||c[i]=='>'||c[i]=='-'||c[i]=='x'||c[i]=='+'||c[i]=='/'||c[i]=='*'||c[i]=='>='||c[i]=='<=')
			y++;	
		else 
			r++;
			i++; // repetir el ciclo	
	}
	printf("la cantidad de vocales es: %d\n", x);
	printf("la cantidad de espacios es: %d\n", d);
	printf("la cantidad de palabras es: %d\n", d+1);
	printf("la cantidad de numeros es: %d\n", h);
	printf("la cantidad de consonantes es: %d\n", r);
	printf("la cantidad de simbolos es: %d\n", y);
	printf("la cantidad de letras en total es: %d\n", r+x);

}
