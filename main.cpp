/************************************************************
* programa : exercicio1
*
* autor : Luciano H Barroqueiro  dt 31/05/2016
*
* objetivo : fazer uma funcao que verifique se o numero existe numa determinada sequencia
*
*
*************************************************************/


#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 *
 */
template <typename T, size_t N>
inline
size_t SizeOfArray( const T(&)[ N ] )
{
  return N;
}

int existe(int n, double a[] , long total )
{
    if(total == -1)
        return 0;
    else
    {
        if(a[total] == n)
            return 1;
        else
        {
           total = total - 1;
           return ( existe(n, a, total ));
        }
    }
}

int main(int argc, char** argv) {
    int n;
    double a[8] =  {1,2,3,4,5,6,7,8};
    int resultado;
    printf( "sizeof( s ) = %d\n",  SizeOfArray( a ) );
    printf("Digite um numero : ");
    scanf("%d", &n);
    resultado = existe(n,a,SizeOfArray( a ) - 1 ) ;
    //printf("\nExiste no array? %d\n " , existe(n,a,SizeOfArray( a ) - 1 ) );
    //scanf("%d", &n);
    printf("\nExiste o numero no array ? %s"  , (resultado == 1) ? ("existe") : ("não existe"));



    //cout << "Existstee %d\n", existe(n, a[1,2,3,4,5,6,7,8]);

}




