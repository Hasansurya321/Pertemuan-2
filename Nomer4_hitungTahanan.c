/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : hitungTahanan.c
   Deskripsi    : Menghitung 3 tahanan yang hanya berniali positif
*/

#include <stdio.h>

int main() {
  int a, b, c, tahanan;
  printf("Masukan nilai tahanan ke -1 :");
  scanf("%d", &a);
  printf("Masukan nilai tahanan ke -2 :");
  scanf("%d", &b);
  printf("Masukan nilai tahanan ke -3 :");
  scanf("%d", &c);
  
  if (a <= 0 ||b <= 0||c <= 0) {
     printf ("Masukan tahanan tidak boleh negatif");
      
  } else { (a > 0 && b > 0 && c > 0);
      tahanan = a + b + c;
      printf("Total tahanan: %d\n", tahanan);
  }

  return 0;
}




