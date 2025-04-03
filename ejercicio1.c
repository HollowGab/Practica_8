//Arellanes Aniceto Gabriel
//ejercicio1
// Programa en C que calcula n numeros pares y n numeros impares y muestre el ultimo numero par e impar
#include <stdio.h>
int main ()
{
  int n,m;
  int par, impar;
  int i=1;
  printf ("Cuantos numero quieres calcular evaluar?\n");
  scanf ("%i",&n);
  while (i<=n)
    {
      if (i%2==0)
        {
        par=i;
      
      }
      else 
      {
        impar=i;
      }
      i++;
    }
    printf ("El ultimo numero par es: %i \n",par);
    printf ("El ultimo numero impar es: %i \n",impar);
  return 0;
  // Falta ghacer el do-while
}
