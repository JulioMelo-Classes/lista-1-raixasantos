#include <array>
#include <iterator>
using std::iter_swap;

/*!
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 ok
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    size_t tam = arr.size();

    std::string aux;

    if(tam != 0)
    {      
      for(int i = 0; i < tam/2; i++){
          aux.swap(arr[i]); //aqui vc podia colocar aux = arr[i]
          arr[i].swap(arr[tam-(i+1)]); //quando vc faz dessa forma é equivalente à atribuir, mas arr[tam-(i+1)] é uma cópia do valor do vetor naquela posição, por isso que vc tem que usar a instrução abaixo.
          arr[tam-(i+1)].swap(aux);
          //mas se vc quer mesmo usar swap, poderia fazer std::swap(arr[i], arr[tam-(i+1)]);
      }      
    }
}
