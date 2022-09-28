#include <stdio.h>

int main()
{
	//declarando variables
	int Posicion, Tamano, PosicionHexadecimal, TamanoHexadecimal, CeroUno, CeroDos;

	//se inserta valor a las variables
	CeroUno=0000, CeroDos=0000;
	
	//se inserta el tamaño y posicion
	scanf_s("%i", &Tamano), scanf_s("%i", &Posicion);

	//operacion
	TamanoHexadecimal = Tamano, PosicionHexadecimal = Posicion;

	//imprimimos resultado
	printf("%c%c%08X%04i%04i%08X", 66, 77, TamanoHexadecimal, CeroUno, CeroDos, PosicionHexadecimal);
	
	return 0;
}