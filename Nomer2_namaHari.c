/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : namaHari.c
   Deskripsi    : Menuliskan ke layar nama-nama Hari dari nomor hari, yaitu 1 s.d. 7
*/

#include <stdio.h>

int main() {
  int i;
  printf("Masukan hari ke- :");
  scanf("%d", &i);
  
  if (i >= 1 && i <= 7) {
      if (i == 1) printf("Senin");
      else if (i == 2) printf("Selasa");
      else if (i == 3) printf("Rabu");
      else if (i == 4) printf("Kamis");
      else if (i == 5) printf("Jum'at");
      else if (i == 6) printf("Sabtu");
      else printf("Minggu");
  } else {
      printf("Masukan nomor hari tidak tepat");
  }

  return 0;
}




