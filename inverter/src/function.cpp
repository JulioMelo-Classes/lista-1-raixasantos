#include <array>
#include <iterator>
using std::iter_swap;

/*!
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    size_t tam = arr.size();

    std::string aux;

    if(tam != 0)
    {      
      for(int i = 0; i < tam/2; i++){
          aux.swap(arr[i]);
          arr[i].swap(arr[tam-(i+1)]);
          arr[tam-(i+1)].swap(aux);
      }      
    }
}
