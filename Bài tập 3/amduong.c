#include <stdio.h>

int main() {
  //khai bao bien a
  int a ;
  // gan gia tri a
  printf (" nhap a = ");
  scanf("%d", &a);
  // kiem tra a la duong hay am
  if ( a > 0 ){
    printf ("%d la so duong ",a);
  }else if ( a == 0){
    printf (" a = 0");
  }else {
    printf ("%d la so am ",a);
  }

  getchar ();
  return 1;
}
