/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

void verificarIntervalos(int x, int * vec){
    if(x >= 0 && x < 25)
      vec[0]++;
    else if(x >= 25 && x < 50)
      vec[1]++;
    else if(x >= 50 && x < 75)
      vec[2]++;
    else if(x >= 75 && x < 100)
      vec[3]++;
    else if(x < 0 || x >= 100)
      vec[4]++;
}

void imprimirPorcentagens(int * vec, double total){
    for(int i = 0; i < 5; i++){
      cout << std::setprecision(4) << (vec[i]/total) * 100 << '\n';
    }
}

int main(void)
{
    int x, total = 0;
    int * vetor_intervalos = new int [5];

    while(cin >> std::ws >> x) {
      total++;
      verificarIntervalos(x, vetor_intervalos);
    }

    imprimirPorcentagens(vetor_intervalos, total);

    return 0;
}
