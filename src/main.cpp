#include <iostream>
#include <Porcentaje.hpp>
#include <list>
int main()
{
  std::list<Porcentaje> focos;

  Porcentaje foco1, foco2, foco3;

  foco1.Incrementar(10);
  foco1.Incrementar(10);
  foco1.Disminuir(4);

focos.emplace_back(foco1);
focos.emplace_back(foco2);
focos.emplace_back(foco3);


for (auto &&f : focos){
f.Incrementar(10);

}

  std::cout << "Foco1: " << foco1.Imprimir() << std::endl;
}