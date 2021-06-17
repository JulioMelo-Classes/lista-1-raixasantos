#include "function.h"

// retorna vazio de toda forma

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    vector<unsigned int> valores;

    int valor = valores.size();

    if(n > 1){
      while(valor < n){
          if(valores.size() == 0 || valores.size() == 1){
              valores.push_back(1);
              valor += 1;
          }
          else{
              valores.push_back(valor);
              valor = valores[valores.size()-2]
                          + valores[valores.size()-1];
          }
      }
    }

    return valores;
}
