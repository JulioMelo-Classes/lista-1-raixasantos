/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m = 0, n = 0, soma, aux;

    while(cin >> m >> n){
      aux = m;
      soma = 0;

      if(n > 0){
        for (int i = 0; i < n; i++) {
          soma += aux;
          aux++;
        }
      }
      else if(n < 0) {
        for (int i = 0; i < (-n); i++) {
          soma += aux;
          aux--;
        }
      }
      else
        soma = m;

      cout << soma << endl;
    }

    return 0;
}
