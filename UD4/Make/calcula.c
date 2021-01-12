#include <stdio.h>
#include "calc.h"

int main()
{
        int a=10;
        int b=5;

        printf("La suma de %d y %d és %d\n",a,b,suma(a,b));
        printf("La resta de %d y %d és %d\n",a,b,resta(a,b));
        printf("La multiplicación de %d y %d és %d\n",a,b,multiplica(a,b));
        printf("La divisió de %d y %d és %d\n",a,b,divideix(a,b));
	printf("El mayor de %d y %d és %d\n",a,b,major(a,b));

}

