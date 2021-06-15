#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int N = 0, qtd = 0;
    for (int i = 0; i < SIZE; i++) {
      std::cin >> N;
      if (N < 0) qtd++;
    }

    std::cout << qtd;

    return 0;
}
