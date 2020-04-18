#include <stdio.h>
#include <stdlib.h>
# include "utn.h"



//FUNCION SUMAR
opsumar (float num1, float num2)

{
	
	float resultado;
	
	resultado= num1+num2;
	
	
	printf ("El resultado de %f+%f es: %f\n", num1,num2,resultado);
}

//FUNCION RESTAR
oprestar (float num1, float num2)
{
	
	float resultado;
	
	resultado= num1-num2;
	
	
	printf ("El resultado de %f-%f es: %f\n", num1,num2,resultado);
}

//FUNCION MULTIPLICAR
opmultiplicar (float num1, float num2)
{
	
	float resultado;
	
	resultado= num1*num2;
	
	
	printf ("El resultado de %f*%f es: %f\n", num1,num2,resultado);
}


//FUNCION DIVIVIR
opdividir (float num1, float num2, float*presultado)
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
opfactorialA (float num1,float* presultado)
{
	int i;
	float resultado =1;
	int respuesta =-1;
	int num1entero = (int) num1;
	float decimales = num1-num1entero;
//valido que numero ingresado sea mayor que 0
//valido que en la direccion de memoria haya un valor
//si el resultado es no 0, es porque es un numero entero.	
if (num1 >0 && presultado !=NULL  && (decimales==0))
{
	for (i=1;i<=num1;i++)
	 {
	 	resultado *=i;
	 	
	 }
	
	*presultado = resultado;
	return respuesta=0;
}
else 
{
	return respuesta;
}
}


//FUNCION FACTORIAL B
opfactorialB (float num2,float* presultado)
{
	
	int i;
	float resultado =1;
	int respuesta =-1;
	int num1entero = (int) num2;
	float decimales = num2-num1entero;
//valido que numero ingresado sea mayor que 0
//valido que en la direccion de memoria haya un valor
//si el resultado es no 0, es porque es un numero entero.		
if (num2 >0 && presultado !=NULL && decimales == 0)
{
	
	for (i=1;i<=num2;i++)
	 {
	 	resultado *=i;
	 	
	 }
	
	*presultado = resultado;
	return respuesta=0;
}
else 
{
	return respuesta;
}
}


































