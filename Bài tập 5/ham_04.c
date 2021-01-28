#include <stdio.h>

  int LN_n(int a[], int n)
{
    int LN_n = a[0];
    for (int i = 1; i < n; i++)
    {
        if   (LN_n < a[i]) 
            LN_n = a[i];
        
    }
    return LN_n;
}
//Ham tinh n!
  int giai (int n)
{
    if (n == 1)
    return 1;
    return n * giai (n-1);
}
int main(void) 
{
  //Khai bao bien n
int n;
//Khai bao mang (Chiec hopp 100 ngan)
int a[100];
//Hien thi ra man hinh
printf("Nhap n = ");
//Nhap tu ban phim
scanf("%d",&n);
//Vong lap for nhap phan tu
for (int i = 0 ; i < n; i++)
{
  printf("Nhap phan tu %d: \n", i);
  scanf("%d", &a[i]);
}
    //Hien thi ket qua gia tri lon nhat ra man hinh
    printf("gia tri to nhat la: %d",LN_n(a, n));
    //Hien thi keu qua giai thua
    printf("\nGiai: %d",giai(n));
return 0;
}
