/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 3 - Structures and Dynamic Array
 *   Hari dan Tanggal    : Rabu 29-04-2026
 *   Nama (NIM)          : Jeswinder Singh (13224063)
 *   Nama File           : soal1-3.c
 *   Deskripsi           : Mengurutkan struct
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef struct{
    char nama [100];
    char kategori [100];
    int tahun;
    int value;
} artefak;

int komper(const void *a,const void *b){
    artefak*x = (artefak *)a;
    artefak *y = (artefak*)b;
    return strcmp (x->kategori,y->kategori);
    if (x->tahun>y->tahun) return (x->tahun - y->tahun);
    if (x->value<y->value) return (x->value - y->value);


}
int main(){
    int n;
    if (scanf("%d",&n)!= 1) return 0;

    artefak daftar[n];
    artefak temp;

    for (int i = 0; i <n; i++){
        scanf("%s %s %d %d",daftar[i].nama, daftar[i].kategori, &daftar[i].tahun, &daftar[i].value);
    }

    qsort (daftar, n, sizeof(artefak),komper);

    for (int j = 0; j<n; j++){
        printf("%s %s %d %d\n",daftar[j].nama,daftar[j].kategori,daftar[j].tahun,daftar[j].value);
    }
    return 0;
}
