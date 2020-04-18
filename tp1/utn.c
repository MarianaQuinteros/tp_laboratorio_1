#include <stdio.h>
#include <stdlib.h>
# include "utn.h"




opsumar (float num1, float num2)

{
	
	float resultado;
	
	resultado= num1+num2;
	
	
	printf ("El resultado de %f+%f es: %f\n", num1,num2,resultado);
}


oprestar (float num1, float num2)
{
	
	float resultado;
	
	resultado= num1-num2;
	
	
	printf ("El resultado de %f-%f es: %f\n", num1,num2,resultado);
}

opmultiplicar (float num1, float num2)
{
	
	float resultado;
	
	resultado= num1*num2;
	
	
	printf ("El resultado de %f*%f es: %f\n", num1,num2,resultado);
}

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

opfactorialA (float num1,float* presultado)
{
	int i;
	float resultado =1;
	int respuesta =-1;
	
if (num1 ==(int)num1 && presultado !=NULL)
{
	for (i=1;i<num1;i++)
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



opfactorialB (float num2,float* presultado)
{
	
	int i;
	float resultado =1;
	int respuesta =-1;
	
if (num2 ==(int)num2 && presultado !=NULL)
{
	for (i=1;i<num2;i++)
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




































int  utn_getNumero ( int * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = - 1 ;
	int bufferInt;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0 )
	{
		do
		{
			printf ( " % s " , mensaje);
			fflush (stdin);
			scanf ( " % d " , & bufferInt);
			if (bufferInt >= minimo && bufferInt <= maximo)
			{
				* pResultado = bufferInt;
				retorno = 0 ;
				break ;
			}
			else
			{
				printf ( " % s " , mensajeError);
				reintentos--;
			}
		} while (reintentos >= 0 );
	}
	return retorno;
}









int  utn_getCaracter ( char * pResultado, char * mensaje, char * mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = - 1 ;
	char buffer;
	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0 )
	{
		do
		{
			printf ( " % s " , mensaje);
			fflush (stdin);
			scanf ( " % c " , & buffer);
			if (buffer >= minimo && buffer <= maximo)
			{
				* pResultado = buffer;
				retorno = 0 ;
				break ;
			}
			printf ( " % s " , mensajeError);
			reintentos--;
		} while (reintentos >= 0 );

	}
	return retorno;
	
}
