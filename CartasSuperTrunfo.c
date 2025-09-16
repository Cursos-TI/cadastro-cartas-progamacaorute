#include <stdio.h>

int main(){
  char cidade[20] = Fortaleza;
  int populaçãoFortaleza = 994464;
  double areaFortaleza = 312.441;  //km²
  double PIBFortaleza = 73400000000.0; // 73,4 bilhões em reais
  float pontosturisticosFortaleza = 12;

  printf("Cidade: %s\n", cidade);
  printf("População de Fortaleza: %d habitante\n", populaçãoFortaleza);
  printf("Área de Fortaleza: %.3f km²\n", areaFortaleza);
  printf("PIB de Fortaleza: %.2f reais\n", PIBFortaleza);
  printf("Pontos Turísticos: %f\n", pontosturisticosFortaleza);

}
