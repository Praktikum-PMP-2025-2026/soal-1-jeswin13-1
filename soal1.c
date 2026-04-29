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


typedef struct{
    char nama [101];
    char kategori [101];
    int tahun;
    int value;
} artefak;

int komper(const void *a,const void *b){
    artefak*x = (artefak *)a;
    artefak *y = (artefak*)b;
    int c = strcmp(x->kategori,y->kategori);
    if (c != 0) return c;
    if (x->tahun!=y->tahun)return (x->tahun - y->tahun);
    if (x->value!=y->value)return (x->value - y->value);
    return strcmp(x->nama,y->nama);


}
int main(){
    int n;
    scanf("%d",&n);

    artefak daftar[n];

    for (int i = 0; i <n; i++){
        scanf("%s %s %d %d",daftar[i].nama, daftar[i].kategori, &daftar[i].tahun, &daftar[i].value);
    }

    qsort(daftar, n, sizeof(artefak),komper);

    for (int i = 0; i<n; i++){
        printf("%s %s %d %d\n",
        daftar[i].nama,
        daftar[i].kategori,
        daftar[i].tahun,
        daftar[i].value);
    }

    return 0;
}
