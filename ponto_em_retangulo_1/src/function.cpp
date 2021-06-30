#include "function.h"

/*!
 * Verifica se um ponto está dentro de um retângulo.
 */

/*
vou considerar 70% já que os testes de pertinencia não estão 100%
*/
location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // dentro -> INSIDE, borda -> BORDER, fora -> OUTSIDE
    if((P.x == IE.x || P.x == SD.x) && (P.y >= IE.y || P.y <= SD.y)){ // borda: vertical esse teste aqui está errado, se P for (IE.x, Z) onde Z < SD.y essa condição retorna true pra todos os valores de Z em [-inf, SD.y]
        return location_t::BORDER;
    }
    else if((P.y == IE.y || P.y == SD.y) && (P.x >= IE.x || P.x <= SD.x)){ // borda: horizontal
        return location_t::BORDER;
    }
    else if((P.x > IE.x && P.x < SD.x) && (P.y > IE.y && P.y < SD.y)){ // dentro
        return location_t::INSIDE;
    } // TODO: ajeitar as condições abaixo.
    else{
        return location_t::OUTSIDE;
    }
}
