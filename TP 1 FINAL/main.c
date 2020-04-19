#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

//prototipos
float opsumar (float num1,float num2);
float oprestar (float num1,float num2);
float opmultiplicar (float num1,float num2);
float opdividir (float num1,float num2,float*presultado);
long long int opfactorialA (float num1);
long long int opfactorialB (float num2);
int menu (float num1,float num2);


int main ()
{

    float a;
    float b;
    float resultadosuma;
    float resultadoresta;
    float resultadodiv;
    int respuestadiv;
    float resultadomultiplicacion;
    long long int resultadofa;
    long long int resultadofb;

    int opcion;



    do {
           opcion =  menu (a,b);





    switch (opcion)
    {
        case 1:
            printf ("\n\nIngresar 1er operando A= \n\n");
            fflush (stdin);
            scanf("%f", &a);

            break;

        case 2:
            printf ("\n\nIngresar 2do operando B= \n\n");
            fflush (stdin);
            scanf("%f", &b);

            break;

        case 3:

                    resultadosuma= opsumar (a,b);
                    resultadoresta = oprestar (a,b);
                    resultadomultiplicacion = opmultiplicar (a,b);
                    respuestadiv = opdividir (a,b,&resultadodiv);
                    resultadofa = opfactorialA (a);
                    resultadofb = opfactorialB ( b);
                    printf("\n\nCalculando operaciones...\n\n");


            break;

        case 4:


                    printf ("El resultado de %.2f+%.2f es: %.2f\n", a,b,resultadosuma);
                    printf ("El resultado de %.2f-%.2f es: %.2f\n", a,b,resultadoresta);
                    printf ("El resultado de %.2f*%.2f es: %.2f\n", a,b,resultadomultiplicacion);

            //division
             if (respuestadiv == 0 )
                {
                    printf ("\nEl resultado de %.2f/%.2f es: %.2f\n", a,b,resultadodiv);
                }
                else
                    {
                        printf ("\nNo es posible dividir por cero\n");
                	}
				//FACORIALES

             if (a >0 )
                {
                    printf ("\nEl factorial de %i es: %lld\n", (int)a,resultadofa);

            	}
            	else
                    {
                        printf ("\nNo es posible calcular el factorial de %f",a);
                    }

		//FACTORIAL B

			if (b>0 )
                {
                    printf ("\nEl factorial de %d es: %lld\n",(int) (int)b,resultadofb);
                }
                else
                    {
                        printf ("\nNo es posible calcular el factorial de %f\n",b);
                    }



            break;





    }
    } while (opcion !=5);

	system ("pause");
	return 0;

}
