#include <assert.h>
#include <stdio.h>
#include "function_multiplicar.c"

void main()
{
    assert(multiplicar(2,0)==0);
    assert(multiplicar(3,6)==0);
    assert(multiplicar(42,64));
    printf("Teste executado com sucesso");
}