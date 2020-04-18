#include <stdio.h>
#include <stdlib.h>
# include "utn.h"

//prototipos 
opsumar (float num1, float num2);
oprestar (float num1, float num2);
opmultiplicar (float num1, float num2);
opdividir (float num1, float num2,float*presultado);
opfactorialA (float num1,float* presultado);
opfactorialB (float num2,float* presultado);


int main ()
{

	int operacion;
	//definir 2 datos que ingresa
	float a;
	float b;
	float resultado;
	int respuesta;
	
	
	
	
	
	
	printf ("BIENVENIDO A LA CALCULADORA\n\n1.Ingresar 1er operando: \n");
	scanf ("%f", &a);
	 /*if (a == NULL && a ) {
		print ("operando A no valido, ingrese un numero valido: ");
		scanf ("%f", &a);
	}
	*/

	
	printf ("Ingresar 2do operando: \n");
	scanf ("%f", &b);
	
	

	printf ("1. Calcular suma (%f+%f)", a,b);
	printf ("\n2. Calcular resta (%f-%f)",a,b);
	printf ("\n3. Calcular division (%f/%f)",a,b);
	printf ("\n4. Calcular multiplicacion (%f*%f)",a,b);
	printf ("\n5. Calcular factorial (%f !) y (%f !)\n",a,b);
	printf ("INGRESE NUMERO DE OPERACIÓN A REALIZAR?: \n");
	scanf ("%d", &operacion);
	
	while (operacion <=1 && operacion >=5) {
		
		printf ("\nNUMERO DE OPERACION NO VALIDA, INGRESE UNA OPERACION DE 1 A 5:");
		scanf ("%d", &operacion);
		
		}
	
	switch (operacion)
	{
		
		case 1: 
		opsumar (a,b);
		break;
		
		case 2: 
		oprestar (a,b);
		break;
		
		case 3: 
		opmultiplicar (a,b);
		break;
		
		case 4: 
		respuesta = opdividir ( a, b, &resultado);
		
		if (respuesta == 0 ) 
		{
			printf ("El resultado de %f/%f es: %f\n", a,b,&resultado);
		}
		else 
		{
			printf ("No es posible dividir por cero\n");
		}
				
		break;
		
		case 5:
		 
		respuesta = opfactorialA (a,&resultado) ;
		
				if (respuesta == 0 ) 
		{
			printf ("El factorial de %f es: %f\n", a,&resultado);
		}
		else 
		{
			printf ("No es posible calcular el factorial de %f\n",a);
		}
		
		
		
		
		respuesta =	opfactorialB (b,&resultado);
			
			
			if (respuesta == 0 ) 
		{
			printf ("El factorial de %f es: %f\n", b,&resultado);
		}
		else 
		{
			printf ("No es posible calcular el factorial de %f\n",b);
		}
		
		
		break;
		
		
	}
	

	
	
	system ("pause");
	return 0;
	
}
