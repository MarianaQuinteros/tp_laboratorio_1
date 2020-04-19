#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

//prototipos 
float opsumar (float num1, float num2);
float oprestar (float num1, float num2);
float opmultiplicar (float num1, float num2);
float opdividir (float num1, float num2,float*presultado);
float opfactorialA (float num1,float* presultado);
float opfactorialB (float num2,float* presultado);
int menu (float num1, float num2);


int main ()
{

	int opcion;
	//definir 2 datos que ingresa
	float a;
	float b;
	float resultado;
	int respuestadiv;
	float resultadosuma;
	float resultadoresta;
	float resultadodiv;
	float resultadomult;
	int datoa=-1;
	int datob=-1;
	int respuestafb;
	int respuestafa;
	float resultadofb;
	float resultadofa;
	
			
	opcion = menu (a,b);
	
	
	switch (opcion)
	{
		
		case 1:
			printf ("Ingresar 1er operando:");
			scanf ("%f",&a);
			datoa=0;
			opcion = menu (a,b);
			break;

		case 2: 
			printf ("Ingresar 2do operando:");
			scanf ("%f",&b);
			datob=0;
			opcion = menu (a,b);
			break;

		case 3: 
		
		if (datoa==0 &&datob==0) 
		{
		
		//SUMAR
		opsumar (a,b);
		//RESTAR
		oprestar (a,b);
		//DIVIDIR
		respuestadiv = opdividir ( a, b, &resultado);
		//MULTIPLICAR		
		opmultiplicar (a,b);
		//FACTORIAL A Y B
		
		respuestafa = opfactorialA (a,&resultado) ;
					
		respuestafb =opfactorialB (b,&resultado);
			
			
		
			break;
		}
		
		else 
		{
			printf ("PRIMERO DEBES INGRESAR INGRESAR OPERADOR 1 Y OPERADOR 2\n\n");
		}
		
	
		case 4: 	
		//SUMA
		printf ("El resultado de %f+%f es: %f\n", a,b,resultadosuma);
		//RESTA
		printf ("El resultado de %f-%f es: %f\n", a,b,resultadoresta);	
		
		//MULTIPLICACION
		
		printf ("El resultado de %f*%f es: %f\n", a,b,resultadomult);
		
		//DIVISION
			if (respuestadiv == 0 ) 
		{
			printf ("\nEl resultado de %f/%f es: %f\n", a,b,resultadodiv);
		}
		else 
		{
			printf ("\nNo es posible dividir por cero\n");
		}
		
		//FACTORIAL A
			if (respuestafa == 0 ) 
		{
			printf ("\nEl factorial de %f es: %f\n", a,resultadofa);
		}
		else 
		{
			printf ("\nNo es posible calcular el factorial de %f\n",a);
		}
		
		//FACTORIAL B
		if (respuestafa == 0 ) 
		{
			printf ("\nEl factorial de %f es: %f\n", a,resultadofa);
		}
		else 
		{
			printf ("\nNo es posible calcular el factorial de %f\n",a);
		}
		
		break;
		
		case 5:
			
		break;
		
	}
	


	

	
	system ("pause");
	return 0;
	
}
