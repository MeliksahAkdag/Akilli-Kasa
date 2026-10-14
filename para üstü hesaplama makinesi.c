#include <stdio.h>
#include <stdlib.h>

int main() {


     int pembe, mavi, turuncu, yesil, kirmizi, kahverengi, tam, yarim, ceyrek,
      ondabir, yirmidebir, yuzdebir, toplam, kurusparaustu;
     float a, b, paraustu;
    
     printf("urundegeri:");
     scanf("%f" , &b);

     printf("gelenpara:");
     scanf("%f" , &a);


     (b > a) ? (system("cls"), printf("yetersiz para"), exit(0)) : 
     (b == a) ? (system("cls"), printf("para ustu yok"), exit(0)) : 0;


     paraustu = a - b;
     system("cls");

     printf("para ustu : %.2f\n " , paraustu);

     kurusparaustu = paraustu * 100;
     

     //200lük kısım

     pembe = kurusparaustu / 20000;

     printf("200luk banknot: %d\n", pembe);

     kurusparaustu = kurusparaustu - 20000 * pembe;


     //100lük kısım

     mavi = kurusparaustu / 10000;

     printf("100luk banknot: %d\n", mavi);

     kurusparaustu = kurusparaustu - 10000 * mavi;

     //50lik kısım

     turuncu = kurusparaustu / 5000;

     printf("50lik banknot: %d\n", turuncu);

     kurusparaustu = kurusparaustu - 5000 * turuncu;

     //20lik kısım

     yesil = kurusparaustu / 2000;

     printf("20lik banknot: %d\n", yesil);

     kurusparaustu = kurusparaustu - 2000 * yesil;

     //10luk kısım

     kirmizi = kurusparaustu / 1000;

     printf("10luk banknot: %d\n", kirmizi);

    kurusparaustu = kurusparaustu - 1000 * kirmizi;

     //5lik kısım

     kahverengi = kurusparaustu / 500;

     printf("5lik banknot: %d\n", kahverengi);

     kurusparaustu = kurusparaustu - 500 * kahverengi;

     //1lik kısım

     tam = kurusparaustu / 100;

     printf("1lik madeni para: %d\n", tam);

     kurusparaustu = kurusparaustu - 100 * tam;

     //50 kuruşluk kısım

     yarim = kurusparaustu / 50;

     printf("0.5 lik madeni para: %d\n", yarim);

     kurusparaustu = kurusparaustu - 50 * yarim;

     //25 kurusluk kısım

     ceyrek = kurusparaustu / 25;

     printf("0.25 lik madeni para: %d\n", ceyrek);

     kurusparaustu = kurusparaustu - 25 * ceyrek;

     //10 kurusluk kısım

     ondabir = kurusparaustu / 10;

     printf("0.10 lik madeni para: %d\n", ondabir);

     kurusparaustu = kurusparaustu - 10 * ondabir;

     //5 kuruşluk kısım

     yirmidebir = kurusparaustu / 5;

     printf("0.05 lik madeni para: %d\n", yirmidebir);

     kurusparaustu = kurusparaustu - 5 * yirmidebir;

     //1 kuruşluk kısım

     yuzdebir = kurusparaustu / 1;
     
     printf("0.01 lik madeni para: %d\n", yuzdebir);

     //toplam banknot

     toplam = yuzdebir + yirmidebir + ondabir + ceyrek + yarim + tam + kahverengi + kirmizi + yesil + turuncu + mavi + pembe;


     printf("toplam banknot sayisi: %d\n", toplam);
    
     
     return 0;

}