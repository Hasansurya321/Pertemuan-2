/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : namaBulan.c
   Deskripsi    : Menuliskan ke layar nama-nama bulan dari nomor bulan, yaitu 1 s.d. 12
*/

#include <stdio.h>

int main() {
  int i;
  printf("Masukan bulan ke- :");
  scanf("%d", &i);
  
  if (i >= 1 && i <= 12) {
      if (i == 1) printf("Januari");
      else if (i == 2) printf("Februari");
      else if (i == 3) printf("Maret");
      else if (i == 4) printf("April");
      else if (i == 5) printf("Mei");
      else if (i == 6) printf("Juni");
      else if (i == 7) printf("Juli");
      else if (i == 8) printf("Agustus");
      else if (i == 9) printf("September");
      else if (i == 10) printf("Oktober");
      else if (i == 11) printf("November");
      else printf("Desember");
  } else {
      printf("Masukan nomor bulan tidak tepat");
  }

  return 0;
}




