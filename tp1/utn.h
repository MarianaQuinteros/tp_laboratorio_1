# ifndef UTN_H_
# define  UTN_H_

int  utn_getNumero ( int * pResultado, char * mensaje, char * mensajeError, int minimo, int maximo, int reintentos);
int  utn_getNumeroFlotante ( float * pResultado, char * mensaje, char * mensajeError, float minimo, float maximo, int reintentos);
int  utn_getCaracter ( char * pResultado, char * mensaje, char * mensajeError, char minimo, char maximo, int reintentos);



opsumar (float num1, float num2);
oprestar (float num1, float num2);
opmultiplicar (float num1, float num2);
opdividir (float num1, float num2,float*presultado);
opfactorialA (float num1,float* presultado);
opfactorialB (float num2,float* presultado);

# endif  
