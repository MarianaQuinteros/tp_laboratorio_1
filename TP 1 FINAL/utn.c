#include <stdio.h>
#include <stdlib.h>
# include "utn.h"


//MENU
int menu (float num1,float num2)
{
	int opcion;


	do {

	printf ("OPCIONES DEL 1 AL 5:\n1. Ingresar 1er operando \n2. Ingresar 2do operando \n3. Calcular todas las operaciones\n   a) Calcular la suma (A+B)\n   b) Calcular la resta (A-B)\n   c) Calcular la division (A/B)\n   d) Calcular la multiplicacion (A*B)\n   e) Calcular el factorial (A!)y (B!)\n4. Informar resultados\n5. Salir \n \nINTRODUZCA UNA OPCION:\n");
	scanf ("%d",&opcion);


	}while (opcion >5 || opcion <1);

	return opcion;
}




//FUNCION SUMAR
float opsumar (float num1,float num2)

{

	float resultado;

	resultado= num1+num2;

	return resultado;

}

//FUNCION RESTAR
float oprestar (float num1,float num2)
{

	float resultado;

	resultado= num1-num2;

	return resultado;



}

//FUNCION MULTIPLICAR
float opmultiplicar (float num1,float num2)
{

	float resultado;

	resultado= num1*num2;
	return resultado;


}


//FUNCION DIVIVIR
float opdividir (float num1,float num2, float*presultado)
{

	float resultado;

	int respuesta=-1;

	if (num2 !=0 && presultado !=NULL)
	{
		resultado= num1/num2;
		*presultado = resultado;
		respuesta= 0;
		return respuesta;

	}
	else
	{
		return respuesta;
	}

}


//FUNCION FACTORIAL A
long long int opfactorialA (float num1)
{
	int i;
	long long int resultado =1;


if (num1 >0 )
{

	for (i=1;i<=num1;i++)
	 {
	 	resultado *=i;

	 }


	return resultado;
}
return num1;

}


//FUNCION FACTORIAL B
long long int opfactorialB (float num2)
{

	int i;
	long long int resultado =1;

//valido que numero ingresado sea mayor que 0
//valido que en la direccion de memoria haya un valor
//si el resultado es no 0, es porque es un numero entero.
if (num2 >0 )
{

	for (i=1;i<=num2;i++)
	 {
	 	resultado *=i;

	 }


	return resultado;

}
return num2;
}




