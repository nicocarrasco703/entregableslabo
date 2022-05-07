#include <iostream>

using namespace std;

int maximo(int x, int y){
  if(x<0)
    x=-x;
  if(y<0)
    y=-y;
  if(x>y)
    return x;
  else
    return y;
}

int minimo(int x, int y){
  if(x<0)
    x=-x;
  if(y<0)
    y=-y;
  if(x<y)
    return x;
  else
    return y;
}

int maximoComunDivisor(int x, int y){
  int a = maximo(x,y);
  int b = minimo(x,y);
  int resto;
  while((b!=0) || (b!=1)){
    resto = a%b;
    b = a;
    a = resto;
  }
  if(a==0)
    return a;
  else
    return 1;
 }

int main() {
    /* No hace falta modificar el main */
    int a,b;
    //Leo a
    cin >> a >> b;
    
    int res = maximoComunDivisor(a,b);
    
    //Devuelvo el maximo comun divisor
    cout << res;
    return 0;
}
