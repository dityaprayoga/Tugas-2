#include <stdio.h>

int main() {
    int sisi, volume;
  
    printf("\nIni adalah Program Untuk Menghitung Volume Kubus oleh Aditya Prayoga");
    printf("\n--------------------------------------------------------------------\n");
   
    printf("\nInput Nilai Sisi (1-10): "); 
    scanf("%i", &sisi);
    volume = sisi * sisi * sisi;
    
    if (sisi > 10 || sisi < 1 ){
        printf("\nNilai Sisi Tidak Sesuai");}
    else {
        printf("\nTotal Volume Kubus adalah : %i", volume);}
            
         printf("\nPerhitugan Volume Kubus Telah Selesai");

return 0;
}

