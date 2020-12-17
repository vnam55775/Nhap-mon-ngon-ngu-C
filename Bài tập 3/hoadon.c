#include <stdio.h>


int main()
{

        //Khai bao bien kieu
    float dongia, soluong, thanhtien;
        //Hien thi ra man hinh
        printf("Nhap vao so luong va don gia:\n");
        //Nhap mot so ra tu ban phim
        scanf("%f%f",&soluong,&dongia);
        //Tinh thanh tien
        thanhtien = soluong * dongia;

    if(soluong  >= 5 && dongia >= 500)
    {
        //Hien thi ra man hinh
        printf("%f so luong",thanhtien * 50 / 100);
    }

    else
        {
        //Hien thi ra man hinh
        printf("%f so luong",thanhtien);

        }

    return 0;
  }
