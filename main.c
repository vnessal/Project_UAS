#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 6");
    char menu [8][30] ={"     1. Belah Ketupat","     2. Jajar Genjang","     3. Layang-layang","     4. Lingkaran","     5. Persegi","     6. Persegi Panjang","     7. Segitiga","     8. Trapesium"};
    char which[2][30]={"   1. LUAS","   2. KELILING"};
    int x,i,choose,choose1,a,b,t,data,p,l,sisi,s1,s2,s3,s4;
    int r_keliling_belah_ketupat,r_keliling_jajar_genjang,r_keliling_layang,r_luas_persegi,r_keliling_persegi,r_keliling_trapesium,r_keliling_segitiga;
    float r,phi,r_luas_lingkaran,r_keliling_lingkaran,r_luas_segitiga;
    float r_luas_belah_ketupat,r_luas_jajar_genjang,r_luas_layang,r_luas_trapesium,r_keliling_persegi_panjang,r_luas_persegi_panjang;


    puts("\n==============================================SELAMAT DATANG DI PROGRAM UNTUK MENGHITUNG LUAS & KELILING PADA BANGUN DATAR==================================================");
    puts("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>MENU PROGRAM MENGHITUNG LUAS & KELILING PADA BANGUN DATAR<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");

    for(x=0;x<8;x++)
{
    printf("%s\n",menu[x]);
}
    ulang:
    printf ("\n     Masukkan Pilihan Menu : ");
    scanf  ("%d",&choose);

    if (choose == 1){
        puts("\n---------------------------------------------------------------------BANGUN DATAR BELAH KETUPAT-----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 1 Berarti Anda Ingin Menghitung Bangun Datar Belah Ketupat");
        for(int i=0;i<2;i++)
        {
        printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1)
        {
            puts("\n====================================================================MENGHITUNG LUAS BELAH KETUPAT===========================================================================");
            puts ("\n  Rumus Luas Bangun Belah Ketupat");
            puts ("\n  Luas = 1/2 x d1 x d2");

            printf ("\n    Masukkan nilai d1 : ");
            scanf  ("%d",&a);

            printf ("\n    Masukkan nilai d2 : ");
            scanf  ("%d",&b);

            data=a*b;
            r_luas_belah_ketupat = data/2;
            printf ("\n    Hasil Luas Belah Ketupat adalah %f",r_luas_belah_ketupat);

        } else if(choose1 == 2){
            puts("\n==================================================================MENGHITUNG KELILING BELAH KETUPAT=========================================================================");
            puts ("\n  Rumus Keliling Bangun Belah Ketupat");
            puts("\n   Keliling = a + b + c + d");

            printf ("\n     Masukkan nilai a : ");
            scanf  ("%d",&s1);

            printf ("\n     Masukkan nilai b : ");
            scanf  ("%d",&s2);

            printf ("\n     Masukkan nilai c : ");
            scanf  ("%d",&s3);

            printf ("\n     Masukkan nilai d : ");
            scanf  ("%d",&s4);

            r_keliling_belah_ketupat= s1 + s2 + s3 + s4;
            printf ("\n     Hasil Keliling Belah Ketupat adalah %d",r_keliling_belah_ketupat);
        }
    }
    else if (choose == 2)
    {
        puts("\n---------------------------------------------------------------------BANGUN DATAR JAJAR GENJANG-----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 2 yaitu Anda Ingin Menghitung Bangun Jajar Genjang");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n====================================================================MENGHITUNG LUAS JAJAR GENJANG===========================================================================");
            puts ("\n  Rumus Luas Bangun Datar Jajar Genjang");
            puts ("\n  Luas = alas x tinggi");

            printf ("\n     Masukkan nilai alas : ");
            scanf  ("%d",&a);

            printf ("\n     Masukkan nilai tinggi : ");
            scanf  ("%d",&t);

            r_luas_jajar_genjang = a*t;
            printf ("\n     Hasil Luas Jajar Genjang adalah %f",r_luas_jajar_genjang);

        } else if(choose1 == 2){
            puts("\n====================================================================MENGHITUNG KELILING JAJAR GENJANG===========================================================================");
            puts ("\n  Rumus Keliling Bangun Jajar Genjang");
            puts ("\n  Keliling = a + b + c + d");
            printf ("\n     Masukkan nilai a : ");
            scanf  ("%d",&s1);

            printf ("\n     Masukkan nilai b : ");
            scanf  ("%d",&s2);

            printf ("\n     Masukkan nilai c : ");
            scanf  ("%d",&s3);

            printf ("\n     Masukkan nilai d : ");
            scanf  ("%d",&s4);

            r_keliling_jajar_genjang= s1+s2+s3+s4;
            printf ("\n     Hasil Keliling Jajar Genjang adalah %d",r_keliling_jajar_genjang);
        }
   }
   else if (choose == 3)
   {
        puts("\n---------------------------------------------------------------------BANGUN DATAR LAYANG-LAYANG-----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 3 Berarti Anda Ingin Menghitung Bangun Datar Layang-layang");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n====================================================================MENGHITUNG LUAS LAYANG-LAYANG===========================================================================");
            puts ("\n  Rumus Luas Bangun Datar Layang-layang");
            puts ("\n  Luas = 1/2 x d1 x d2");
            printf ("\n     Masukkan nilai d1 : ");
            scanf  ("%d",&a);

            printf ("\n     Masukkan nilai d2: ");
            scanf  ("%d",&b);

            data=a*b;
            r_luas_layang = data/2;
            printf ("\n     Hasil Luas Layang-layang adalah %f",r_luas_layang);

        } else if(choose1 == 2){
            puts("\n==================================================================MENGHITUNG KELILING LAYANG-LAYANG=========================================================================");
            puts ("\n  Rumus Keliling Bangun Layang-layang");
            puts ("\n  Keliling = a + b + c + d");

            printf ("\n     Masukkan nilai a : ");
            scanf  ("%d",&s1);

            printf ("\n     Masukkan nilai b : ");
            scanf  ("%d",&s2);

            printf ("\n     Masukkan nilai c : ");
            scanf  ("%d",&s3);

            printf ("\n     Masukkan nilai d : ");
            scanf  ("%d",&s4);

            r_keliling_layang= s1+s2+s3+s4;
            printf ("\n     Hasil Keliling Layang-layang adalah %d",r_keliling_layang);
        }
   }
   else if (choose == 4)
   {
        puts("\n---------------------------------------------------------------------BANGUN DATAR LINGKARAN-----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 4 Berarti Anda Ingin Menghitung Bangun Datar Lingkaran");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n====================================================================MENGHITUNG LUAS LINGKARAN===========================================================================");
            puts ("\n  Rumus Luas Bangun Datar Lingkaran");
            puts ("\n  Luas = phi (22/7 atau 3,14) x r x r");

            printf ("\n     Masukkan nilai jari-jari : ");
            scanf  ("%f",&r);

            phi=r*r;
            r_luas_lingkaran = 3.14* phi;
            printf ("\n     Hasil Luas Lingkaran adalah %f",r_luas_lingkaran);

        } else if(choose1 == 2){
            puts("\n====================================================================MENGHITUNG KELILING LINGKARAN===========================================================================");
            puts ("\n  Rumus Keliling Bangun Lingkaran");
            puts ("\n  Keliling = 2 x phi atau 3,14 x r");

            printf ("\n     Masukkan nilai jari-jari : ");
            scanf  ("%f",&r);

            data=3.14*r;
            r_keliling_lingkaran = 2*data;
            printf ("\n     Hasil Keliling Lingkaran adalah %f",r_keliling_lingkaran);
        }
   }
   else if (choose == 5)
   {
        puts("\n---------------------------------------------------------------------BANGUN DATAR PERSEGI-----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 5 Berarti Anda Ingin Menghitung Bangun Datar Persegi");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n====================================================================MENGHITUNG LUAS PERSEGI===========================================================================");
            puts ("\n  RUMUS LUAS DARI BANGUN PERSEGI");
            puts ("\n  Luas = sisi x sisi");

            printf ("\n     Masukkan nilai sisi : ");
            scanf  ("%d",&sisi);

            r_luas_persegi = sisi*sisi;
            printf ("\n     Hasil Luas Persegi adalah %d",r_luas_persegi);

        } else if(choose1 == 2){
            puts("\n====================================================================MENGHITUNG KELILING PERSEGI===========================================================================");
            puts ("\n  RUMUS KELILING DARI BANGUN PERSEGI");
            puts ("\n  Keliling = 4 x sisi");

            printf ("\n     Masukkan nilai sisi : ");
            scanf  ("%d",&sisi);

            r_keliling_persegi = 4*sisi;
            printf ("\n     Hasil Keliling Persegi adalah %d",r_keliling_persegi);
        }
   }
   else if (choose == 6)
   {
        puts("\n--------------------------------------------------------------------BANGUN DATAR PERSEGI PANJANG----------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 6 Berarti Anda Ingin Menghitung Bangun Datar Persegi Panjang");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n===================================================================MENGHITUNG LUAS PERSEGI PANJANG==========================================================================");
            puts ("\n  RUMUS LUAS DARI BANGUN PERSEGI PANJANG");
            puts ("\n  Luas = panjang x lebar");

            printf ("\n     Masukkan nilai panjang : ");
            scanf  ("%d",&p);

            printf ("\n     Masukkan nilai lebar : ");
            scanf  ("%d",&l);

            r_luas_persegi_panjang = p*l;
            printf ("\n     Hasil Luas Persegi Panjang adalah %f",r_luas_persegi_panjang);

        } else if(choose1 == 2){
            puts("\n=================================================================MENGHITUNG KELILING PERSEGI PANJANG========================================================================");
            puts ("\n  RUMUS KELILING DARI BANGUN PERSEGI PANJANG");
            puts ("\n  Keliling = 2 (p + l)");

            printf ("\n     Masukkan nilai panjang : ");
            scanf  ("%d",&p);

            printf ("\n     Masukkan nilai lebar : ");
            scanf  ("%d",&l);

            data=p+l;
            r_keliling_persegi_panjang = 2*data;
            printf ("\n     Hasil Keliling Persegi Panjang adalah %f",r_keliling_persegi_panjang);
        }
   }
   else if (choose == 7)
   {
        puts("\n-----------------------------------------------------------------------BANGUN DATAR SEGITIGA--------------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 7 Berarti Anda Ingin Menghitung Bangun Datar Segitiga");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n======================================================================MENGHITUNG LUAS SEGITIGA==============================================================================");
            puts ("\n  RUMUS LUAS DARI BANGUN SEGITIGA");
            puts ("\n  Luas = 1/2 x alas x tinggi");

            printf ("\n     Masukkan nilai alas : ");
            scanf  ("%d",&a);

            printf ("\n     Masukkan nilai tinggi : ");
            scanf  ("%d",&t);

            r_luas_segitiga = a*t/2;
            printf ("\n     Hasil Luas Segitiga adalah %f",r_luas_segitiga);

        } else if(choose1 == 2){
            puts("\n=====================================================================MENGHITUNG KELILING SEGITIGA===========================================================================");
            puts ("\n  RUMUS KELILING DARI SEGITIGA");
            puts ("\n  Keliling = a + b + c");

            printf ("\n     Masukkan nilai sisi a : ");
            scanf  ("%d",&s1);

            printf ("\n     Masukkan nilai sisi b : ");

            scanf  ("%d",&s2);

            printf ("\n     Masukkan nilai sisi c : ");
            scanf  ("%d",&s3);

            r_keliling_segitiga = s1+s2+s3;

            printf ("\n     Hasil Keliling Segitiga adalah %d",r_keliling_segitiga);
        }
   }
   else if (choose == 8)
   {
        puts("\n-----------------------------------------------------------------------BANGUN DATAR TRAPESIUM-------------------------------------------------------------------------------");
        puts ("\n   Anda Memilih Menu 8 Berarti Anda Ingin Menghitung Bangun Datar Trapesium");
        for(int i=0;i<2;i++)
        {
            printf("\n%s\n",which[i]);
        }
        printf ("\n   Apa yang anda ingin hitung 1/2 : ");
        scanf  ("%d",&choose1);

        if(choose1 == 1){
            puts("\n======================================================================MENGHITUNG LUAS TRAPESIUM=============================================================================");
            puts ("\n  RUMUS LUAS DARI BANGUN TRAPESIUM");
            puts ("\n  Luas = ( a + b )/2 x tinggi");

            printf ("\n     Masukkan nilai a : ");
            scanf  ("%d",&a);

            printf ("\n     Masukkan nilai b : ");
            scanf  ("%d",&b);

            printf ("\n     Masukkan nilai tinggi : ");
            scanf  ("%d",&t);

            data=a+b/2;
            r_luas_trapesium = data*t;
            printf ("\n     Hasil Luas Trapesium adalah %f",r_luas_trapesium);

        } else if(choose1 == 2){
            puts("\n====================================================================MENGHITUNG KELILING TRAPESIUM===========================================================================");
            puts ("\n  RUMUS KELILING DARI KELILING BANGUN TRAPESIUM");
            puts ("\n  Keliling = a + b + c + d");

            printf ("\n     Masukkan nilai a : ");
            scanf  ("%d",&s1);

            printf ("\n     Masukkan nilai b : ");
            scanf ("%d",&s2);

            printf ("\n     Masukkan nilai c : ");
            scanf  ("%d",&s3);

            printf ("\n     Masukkan nilai d : ");
            scanf  ("%d",&s4);

            r_keliling_trapesium= s1+s2+s3+s4;
            printf ("\n     Hasil Keliling Trapesium adalah %d",r_keliling_trapesium);
        }}
        else
        {
            printf ("\n     Maaf Menu Tidak Tersedia");
        }


        int pilihan2;
        printf ("\n\n  ~> Apakah anda ingin melakukan penghitungan lagi? 1=YA/2=TIDAK :  ");
        scanf  ("%d",&pilihan2);

        if (pilihan2== 1)
        {
        goto ulang;
        }
        else if (pilihan2== 2)
        {
         puts ("\n   TERIMA KASIH TELAH MENGHITUNG MELALUI PROGRAM INI ^-^");
        }
        return 0;
}
