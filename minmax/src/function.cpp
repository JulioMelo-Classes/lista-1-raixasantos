#include "function.h"

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], int n )
{
    int menor = V[0], maior = V[0],
        posMenor = -1, posMaior = -1;

    if(n > 0){
        posMenor = 0;
        posMaior = 0;

        for(int i = 0; i < n; i++){
            if(V[i] < menor){
                posMenor = i;
                menor = V[i];
            }
            if(V[i] >= maior){
                posMaior = i;
                maior = V[i];
            }
        }
    }

    return std::make_pair(posMenor, posMaior);
}
