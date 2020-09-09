#include "search.h"

int main()
{
Search search1;

search1.genVector();
search1.setNum();

search1.busquedaSecuencial(search1.elementos,search1.numeros);
search1.busquedaBinaria(search1.elementos,search1.numeros);

}

