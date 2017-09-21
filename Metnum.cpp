#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>

//deklarasi
int main(){
	int menu,opsi;
    int x,y,i;
    int hasil;
	
	Home:
	//tampilan menu
	system("cls");
	printf("\n    Metnum\n");
	printf("\n  ---------- \n");
	printf("\n  Pilih Opsi : \n\n");
    printf("1. X + Y :\n");
    printf("2. X - Y :\n");
    printf("3. X * Y :\n");
    printf("4. X ^ Y :\n");
    printf("5. f(x)=2x^2 - 3x + 1 , X<=x<=Y\n");
	printf("\n Input Menu Pilihan : ");
    scanf("%d",&menu);
    
     //caseMenu
    switch(menu){
		//tambah
		case 1 :
    		printf("\nMasukkan X  : ");
			scanf("%d",&x);
			printf("Masukkan Y  : ");
			scanf("%d",&y);
			hasil=x+y;
			printf("\nHasil Dari = X + Y %d + %d = %d", x,y,hasil);
			getch();
			goto Home;	
		case 2 :
			//kurang
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			hasil=x-y;
			printf("\nHasil Dari = X - Y %d - %d = %d", x,y,hasil);
			getch();
			goto Home;	
		case 3 :
			//kali
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			hasil=x*y;
			printf("\nHasil Dari = X * Y %d * %d = %d", x,y,hasil);
			getch();
			goto Home;	
		case 4 :
			//pangkat
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			hasil = pow(x,y);
			printf("\nHasil Dari = %d X ^ Y %d = %d", x,y,hasil);
			getch();
			goto Home;	
			
		case 5 :
    		printf("\nMasukkan X : ");
			scanf("%d",&x);
			printf("Masukkan Y   : ");
			scanf("%d",&y);
			//Fungsi
			for(i=x;i<=y;i++){
				hasil = 2*(i*i) - (3*i)+1;
				printf("\nHasil Dari = %d",hasil);
				}

			}
			getch();
			goto Home;
			return 0;
    }

