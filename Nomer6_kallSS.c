/* Nama         : Hasan Suryadharma
   NIM          : 24060123140208
   Kelas        : C
   Nama Program : kallSS.c
   Deskripsi    : Menghitung operasi sederhana 
*/
#include <stdio.h>

#include <stdio.h>

int main() {
  char pil;
  int iA, iB, hasil2;
  float hasil1;
  
  printf("Pilih operasi bilangan : ");
  scanf("%c", &pil); //(%c jangan lupa gunakan untuk jenis tipe data char)
  
  printf("Masukan nilai ke-1 : ");
  scanf("%d", &iA);
  
  printf("Masukan nilai ke-2 : ");
  scanf("%d", &iB);
  
  if (pil != 'a' && pil != 'b' && pil != 'c' && pil != 'd' && pil != 'e' && pil != 'f') { //!= (untuk menyatakan bukan anggota)
    printf("Bukan pilihan menu yang benar\n");
  } else {
    if (pil == 'a') {
      hasil1 = iA + iB;
      printf("Total: %f\n", hasil1); //(%f jangan lupa gunakan untuk tipe data float)
    } else if (pil == 'b') {
      hasil1 = iA - iB;
      printf("Total: %f\n", hasil1);
    } else if (pil == 'c'){
        hasil1 =iA * iB;
        printf("Total: %f\n", hasil1);
    } else if (pil == 'd'){
        hasil1 = iA / iB;
        printf("Total: %f\n", hasil1);
    } else if (pil == 'e'){
        hasil2 = iA / iB;
        printf("Total: %d\n", hasil2);
    } else if (pil == 'f'){
        hasil1 = iA % iB;
        printf("Total: %f\n", hasil1);
    }
  }

  return 0;
}




