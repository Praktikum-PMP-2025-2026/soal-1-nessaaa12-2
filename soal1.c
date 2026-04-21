// EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 //*   Modul               : 01 
 //*   Hari dan Tanggal    : Selasa, 21 April 2026
 //*   Nama (NIM)          : Maria Vanessa Soritan (13224078)
 //*   Nama File           : soal1.c
 //*   Deskripsi           : Membuat sistem izin yang inputnya terdiri dari 4 bilangan bulat (izin suhu radiasi jam )

 
 #include<stdio.h>
 #include<string.h>

 int main(){
    char teks[20];
    int panjang;

    fgets(teks, sizeof(teks), stdin);
    panjang = strlen(teks);

    int i;
    int salah;
    int x=0;
    int y=0;

    for(i=0; i<panjang+1; i++){
        if(teks[i]=='('){
            x++;
        }
    }
       
    for(i=0; i<panjang+1; i++){
        if(teks[i]==')'){
            y++;
        }
    }

    for(i=0; i<panjang+1; i++){
        if(teks[i]==teks[i+1]){
            int j;
            for(j=i; teks[j]!='\0'; j++){
                teks[j]=teks[j+1];
            }
            teks[j]='\0';
        }
    }

    printf("%s", teks);
    return 0;
 }


 
