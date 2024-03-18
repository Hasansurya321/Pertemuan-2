/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : CekSegitiga.c
   Deskripsi    : Menentukan jenis segitiga berdasarkan panjang sisi
*/

#include <stdio.h>

int main() {
  int a, b, c;
  printf("Masukan sisi segitiga ke -1 :");
  scanf("%d", &a);
  printf("Masukan sisi segitiga ke -2 :");
  scanf("%d", &b);
  printf("Masukan sisi segitiga ke -3 :");
  scanf("%d", &c);
  
 if (a > 0 && b > 0 && c > 0) {
     if (a == b && b == c) 
         printf("Segitiga Sama Sisi");
     else if (a == b || b == c || a == c) 
         printf("Segitiga Sama Kaki");
     else 
         printf("Segitiga Sembarang");
  } else {
      printf("Terdapat nilai yang bukan sisi segitiga");
  }

  return 0;
}




