#include <stdio.h>

int main(void) {
  int x;
  int i=1;
  int suma=0;
  printf("Wprowadź liczbę: ");
  scanf("%d",&x);

  while(i<=x/2){
    if(x%i==0){
      suma+=i;
    }
    i++;
  }
  if(suma==x){
    printf("Wpisana liczba jest liczbą doskonałą.");
    }
  else{
    printf("Wpisana liczba nie jest doskonała.");
  }
  
  return 0;
}