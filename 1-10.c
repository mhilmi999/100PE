Penjelasan 100 codingan No 1-10


1. Program Pertamaku
	Source Code :
#include<stdio.h>  
  
int main(){  
    char a[100];        //Deklarasi Variabel  
    scanf("%[^\n]",&a); //input kalimat sampai enter 
    printf("%s\n",a);   //print kalimat yg diinputkan  
    return 0;  
}  
	Penjelasan :
Program tersebut meminta user untuk menginputkan kalimat bebas, dimana kalimat setelah enter tidak akan di simpan.
	Input :
Input dari program tersebut berupa kalimat, yang mana kalimat 	setelah spasi tidak akan disimpan.
	Output :
Menampilkan kalimat yang dimasukan oleh user.




2. A tambah B
	Source Code :
#include<stdio.h>  
  
int main(){  
int a,b;  
scanf("%d %d",&a,&b);  
printf("%d\n",a+b); //penjumlahan dua angka  
}  
	Penjelasan :
Program tersebut akan menghitung penjumlahan dua bilangan 	yang diinputkan oleh user.
	Input :
Input dari program tersebut adalah dua bilangan yang akan di 	hitung hasil penjumlahannya.
	Output :
Hasil Penjumlahan dua bilangan




3. Bebek untuk Teman
	Source Code :
#include<stdio.h>  
  
int main(){  
int n,m;  
scanf("%d %d",&n,&m);  
printf("masing-masing %d\n",n/m); //pembagian dua angka  
printf("bersisa %d\n",n%m); //mod dua angka  
return 0;  
}  
	Penjelasan :
Program tersebut akan menghitung hasil bagi dua bilangan dan 	modulo dari suatu bilangan yang diinput oleh user.
	Input :
Input dari program tersebut adalah dua buah bilangan
	Output :
Hasil pembagian dan modulo dari dua angka




4. Luas Segitiga
	Source Code :
#include<stdio.h>  
  
int main(){  
float a,t;  
scanf("%f %f",&a,&t);  
printf("%.2f\n",a*t/2); //menghitung luas segitiga  
return 0;  
}  
	Penjelasan :
Program tersebut akan menghitung luas dari suatu segitiga yang 	mana input dan ouputnya bertipe data float.
	Input :
Input dari program tersebut adalah alas dan tinggi dari sebuah 	segitiga
	Output :
Hasil dari perhitungan luas segitiga




5. Transpos Matriks
	Source Code :
#include<stdio.h>  
  
int main(){  
int a,b,c,d,e,f,g,h,i;  
scanf("%d %d %d\n",&a,&b,&c); //cara transpos matriks  
scanf("%d %d %d\n",&d,&e,&f);  
scanf("%d %d %d",&g,&h,&i);  
printf("%d %d %d\n",a,d,g);  
printf("%d %d %d\n",b,e,h);  
printf("%d %d %d\n",c,f,i);  
return 0;  
}  
	Penjelasan :
Program tersebut akan menghitung transpose suatu matriks 	dengan ordo dan baris 3x3, perhitungannya adalah	dengan 	melakukan penukaran posisi setiap variabel.
	Input :
Matriks yang akan di transpose
	Output :
Hasil Transpose matriks 3x3




6. If Then
	Source Code :
#include<stdio.h>  
  
int main(){  
int N;  
scanf("%d",&N);  
if (N>0) printf("%d\n",N); //print kalau angka lbh besar dr 0  
return 0;  
}  
	Penjelasan :
Program untuk mencetak angka yang lebih besar dari pada nol, dengan menggunakan logika if yang mana jika angka yang diinputkan oleh user lebih besar dari nol maka akan mencetak kembali angka tersebut. Jika tidak, program tidak akan melakukan apa-apa.
	Input :
Input dari program berupa angka
	Output :
Jika angka lebih besar dari 0 maka akan mencetak bilangan. Jika 	tidak, tidak akan melakukan apa-apa.




7. If Then, Multi Condition
	Source Code :
#include<stdio.h>  
  
int main(){  
int N;  
scanf("%d",&N);  
if ((N>0)&&(N%2==0)) //jika genap dan lbh besar dr 0, diprint  
printf("%d\n",N);  
return 0;  
}  
	Penjelasan :
Progam untuk mencetak bilangan genap dan lebih besar dari 	pada nol, jikan kurang dari nol dan bukan merupakan bilangan 	genap. Program tidak akan melakukan apa-apa.
	Input :
Input berupa satu angka bertipe bilangan bulat
	Output :
Angka yang dicetak kembali jika memenuhi syarat yaitu bilangan lebih besar dari nol dan merupakan bilangan genap.




8. If Then Else
	Source Code :
#include<stdio.h>  
  
int main(){  
int N;  
scanf("%d",&N);  
if (N>0) printf("positif\n"); //jika angka lbh bsr dr 0, maka positif  
else if (N<0) printf("negatif\n"); //jika angka lbh kcl dr 0, negatif  
else  
printf("nol\n"); //jika angka = 0  
return 0;  
}  
	Penjelasan :
Program untuk menentukan suatu akan termasuk bilangan negatif atau positif, dengan menggunakan percabangan yang mana jika bilangan yang diinputkan user lebih besar dari pada nol maka akan mencetak positif, jika lebih kecil dari nol akan mencetak negatf dan jika sama dengan nol akan mencetak nol
	Input :
Bilangan yang akan ditentukan termasuk bilangan positif, negatif 	atau nol.
	Output :
Output dari program adalah bilangan tesebut termasuk bilangan 	positif, negatif atau nol.




9. Case
	Source Code :
#include<stdio.h>  
  
int main(){  
int N;  
scanf("%d",&N);  
if (N<10) printf("satuan\n"); //jika angka kurang dr 10  
else if (N<100) printf("puluhan\n"); //jika angka kurang dr 100  
else if (N<1000) printf("ratusan\n"); //jika angka kurang dr 1000  
else if (N<10000) printf("ribuan\n"); //jika angka kurang dr 10000  
else  
printf("puluhribuan\n"); //angka puluhribuan  
return 0;  
}  
	Penjelasan :
Program untuk menentukan suatu bilangan apakah termasuk 	bilangan puluhribuan, ribuan, ratusan, puluhan, atau satuan. 	Dengan melakukan logika percabangan. Yang mana jika bilangan 	kurang dari 10 mencetak satuan, jika kurang dari 100 mencetak 	puluhan, jika kurang dari 1000 mencetak ratusan, dan jika kurang 	dari 10000 mencetak ribuan, dan jika melebihinya akan mencetak 	puluhribuan.
	Input :
Bilangan yang akan ditentukan
	Output :
Output dari program tersebut adalah bilangan yang diinputkan 	user termasuk satuan, puluhan, ratusan, ribuan atau puluhribuan




10. Jarak Manhattan
	Source Code :
#include<stdio.h>  
  
int main(){  
int x1,x2,y1,y2,hasil;                 //deklarasi variabel  
scanf("%d %d %d %d",&x1,&y1,&x2,&y2);  
hasil = (x1-x2)+ (y1-y2);              //Menghitungan jarak manhattan  
if (hasil<0) printf("%d\n",hasil*-1);  
else printf("%d\n",hasil);  
return 0;  
}  
	Penjelasan :
Program tersebut merupakan program untuk menghitung jarak manhattan, jarak manhattan merupakan jarak dari suatu titik menuju suatu titik lainnya pada suatu koodinat kartesius dengan menyusuri bagian vertikal dan horizontal tanpa pernah kembali. Secara sederhana jumlah dari selisih absis dan selisih ordinatnya.
	Input :
Empat bilangan bulat yang akan dihitung jarak manhattannya 	dengan format x1, y1, x2, dan y2
	Output :
Jarak manhattan dari titik tersebut
