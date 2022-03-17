#include <stdio.h>

int main() {
   printf("MARATONA DE PROGRAMAÇÃO - IF SUL DEMINAS \n");
  
  int idade;
  
  printf("DIGITE SUA IDADE:\n");
  scanf("%d", &idade);
  
  if(idade<=8) 
  printf("CATEGORIA: Lógica básica");
  
  if(idade>9 && idade<=12)
  printf("CATEGORIA: Lógica");
  
  if(idade>13 && idade<=15)
  printf("CATEGORIA: Lógica avnçada");
  
  if(idade>16 && idade<=20)
  printf("CATEGORIA: Programação Básica");
  
  if(idade>21)
  printf("CATEGORIA: Programação Avançada");
    
    return 0;
}
