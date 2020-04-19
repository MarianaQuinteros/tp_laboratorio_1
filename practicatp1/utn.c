#include <stdio.h>
#include <stdlib.h>
# include "utn.h"


//MENU

menu (float num1, float num2)
{
	int opcion;
	
	
	do {		
	
	printf ("OPCIONES DEL 1 AL 5: \n\n1. Ingresar 1er operando \n2. Ingresar 2do operando \n3. Calcular todas las operaciones\n   a) Calcular la suma (A+B)\n   b) Calcular la resta (A-B)\n   c) Calcular la division (A/B)\n   d) Calcular la multiplicacion (A*B)\n   e) Calcular el factorial (A!)y (B!)\n4. Informar resultados\n5. Salir \n INTRODUZCA UNA OPCION:");
	scanf ("%d",&opcion);
	
	
	}while (opcion >5 || opcion <1);
	
	return opcion;
}









//FUNCION SUMAR
float opsumar (float num1, float num2)

{
	
	float resultadosuma;
	
	resultadosuma= num1+num2;
	
	
	
}

//FUNCION RESTAR
float oprestar (float num1, float num2)
{
	
	float resultadoresta;
	
	resultadoresta= num1-num2;
	
	

}

//FUNCION MULTIPLICAR
float opmultiplicar (float num1, float num2)
{
	
	float resultadomult;
	
	resultadomult= num1*num2;
	
	
	
}


//FUNCION DIVIVIR
float opdividir (float num1, float num2, float*presultado)
{
	
	float resultadodiv;
	
	int respuestadiv=-1;
	
	if (num2 !=0 && presultado !=NULL) 
	{
		resultadodiv= num1/num2;
		*presultado = resultadodiv;
		respuestadiv= 0;
		return respuestadiv;
	
	}
	else 
	{
		return respuestadiv;
	}
	
}


//FUNCION FACTORIAL A
float opfactorialA (float num1,float* presultado)
{
	int i;
	float resultadofa =1;
	int respuestafa =-1;
	int num1entero = (int) num1;
	float decimales = num1-num1entero;
//valido que numero ingresado sea mayor que 0
//valido que en la direccion de memoria haya un valor
//si el resultado es no 0, es porque es un numero entero.	
if (num1 >0 && presultado !=NULL  && (decimales==0))
{
	for (i=1;i<=num1;i++)
	 {
	 	resultadofa *=i;
	 	
	 }
	
	*presultado = resultadofa;
	return respuestafa=0;
}
else 
{
	return respuestafa;
}

}


//FUNCION FACTORIAL B
float opfactorialB (float num2,float* presultado)
{
	
	int i;
	float resultadofb =1;
	int respuestafb =-1;
	int num1entero = (int) num2;
	float decimales = num2-num1entero;
//valido que numero ingresado sea mayor que 0
//valido que en la direccion de memoria haya un valor
//si el resultado es no 0, es porque es un numero entero.		
if (num2 >0 && presultado !=NULL && decimales == 0)
{
	
	for (i=1;i<=num2;i++)
	 {
	 	resultadofb *=i;
	 	
	 }
	
	*presultado = (int)resultadofb;
	return respuestafb=0;
}
else 
{
	return respuestafb;
}
}











 utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%d",&bufferInt);
			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}









int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char buffer;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			fflush(stdin);
			scanf("%c",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>=0);

	}
	return retorno;
	
}






















