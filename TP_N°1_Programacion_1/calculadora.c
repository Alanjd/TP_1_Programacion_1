/**
*\brief  Recibe dos numeros enteros .
*\param  Se declara una variable entera resultado1.
*\param  A la variable resultado1 se le asigna la suma de los enteros.
*\return El resultado de la suma.
*
*/
int suma(int A,int B){
   int resultado1;
   resultado1= A + B;
   return resultado1;
}

/**
*\brief  Recibe dos numeros enteros.
*\param  Se declara una variable entera resultado2.
*\param  A la variable resultado2 se le asigna la resta de los enteros.
*\return El resultado de la resta.
*
*/
int resta(int A,int B){
   int resultado2;
   resultado2= A - B;
   return resultado2;

}

/**
*\brief  Recibe dos numeros flotantes.
*\param  Se declara una variable flotante resultado5.
*\param  A la variable resultado5 se le asigna la division de los flotantes.
*\return El resultado de la division.
*
*/
float division(float A,float B){
   float resultado5;
   resultado5= A / B;
   return resultado5;

}

/**
*\brief  Recibe dos numeros enteros.
*\param  Se declara una variable entera resultado3.
*\param  A la variable resultado3 se le asigna la multiplicacion de los enteros.
*\return El resultado de la multiplicacion.
*
*/
int multiplicacion(int A,int B){
   int resultado3;
   resultado3= A * B;
   return resultado3;

}

/**
*\brief  Recibe un numero entero.
*\param  Se declara una variable entera resultado4.
*\param  Si el entero en igaul a uno retorna 1.
*\param
*\return El resultado del factorial.
*
*/
long int factorial(long int A){
    long int resultado4;
    if(A==1)
    return 1;
    resultado4=A* factorial(A-1);
    return (resultado4);
}

