21.Nilai Kalimat Matematika
Input :
Terdapat 3 variabel yaitu a, b dan c. variable a dan b sebagai angka
yang akan dibandingkan, dan b sebagai operasi matematika dibaca
bertipe char.
Proses :
Setelah diinputkan oleh user. Program akan membaca variable b terlebih
dahulu, apakah dia {-,+,<,>,=}dengan else if. Jika “+” atau “-“ akan
dilakukan operasi penambahan/pengurangan, jika “<”, “>” atau “=” nilai
a dan b akan dibandingkan, apakah lebih besar, lebih kecil atau sama
dengan.
Output :
Jika “+” atau “-“ output hasil pertambahan atau pengurangan dari a dan
b, jika “>” atau “<” atau “=” output “benar” jika kondisi memenuhi,
output salah jika kondisi tidak memenuhi.
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main()
{ 
  int a,c; 
  char b; 
  while(scanf("%d %c %d",&a,&b,&c)!=EOF)
  { //input hingga EOF 
   if(b=='-') printf("%d\n",a-c); //operasi pengurangan 
   else if(b=='+') printf("%d\n",a+c); //operasi pertambahan 
   else if(b=='*') printf("%d\n",a*c); //operasi perkalian 
   else if(b=='<')
   { //cek apakah a<b 
    if (a<c)
    { 
     printf("benar\n"); 
    } 
    else printf("salah\n"); 
   } 
   else if(b=='>') 
   { //cek apakah b>c 
    if (a>c)
    { 
     printf("benar\n"); 
    } 
    else printf("salah\n"); 
   } 
   else if(b=='=') 
   { //cek apakah a=c 
    if (a==c)
    { 
     printf("benar\n"); 
    } 
    else printf("salah\n"); 
   } 
  } 
  return 0; 
}
 




22. Rata-rata
Input :
n sebagai test case, a1 sebagai angka pertama yg diinputkan, dan a sebagai angka selanjutnya yang diinputkan, dan rt kita beri nilai 0 karena rt sebagai variable yang menyimpan nilai rata2.
Proses :
Setelah menginputkan angka pertama. Kita memasukkan nilai dari angka pertama ke variable max dan min sebagai pembanding nantinya. Lalu kita lakukan perulangan untuk menginputkan angka-angka selanjutnya sebanyak n-1 kali (jika n=5 lakukan perulangan 4 kali karena angka pertama sudah diinputkan terlebih dahulu). rt=rt+a kita menjumlahkan semua angka, lalu setiap seleasi input kita langsung membandingkan nilai yang baru saja diinputkan dengan max dan min. jika ada yg lebih besar dari max, maka nilai max diganti dengan nilai tersebut dan jika ada yg lebih kecil dari min, maka nilai min diganti dengan nilai tersebut. Lalu jika loop sudah selesai. Kita lakukan penjumlahan rt dengan a1 (angka pertama) sebagai nilai total, lalu kita bagi rt dengan banyak angka yaitu n sehingga didapat nilai rata2.
Output: max, min, rt
#include<stdio.h>
//author : Evelyn Tjitrodjojo
long long n,i;
double a,a1,min,max,rt=0;
int main(){
scanf("%lld",&n); //input testcase
scanf("%lf",&a1); //input angka pertama yg dirata-rata
max=a1; //masukkan angka pertama sebagai max dan min
min=a1;
for(i=1;i<n;i++){
scanf("%lf",&a); //input angka berikutnya hingga selesai rt=rt+a; //jumlah semua angka
if (max<a) max=a; //cari nilai max
if (min>a) min=a; //cari nilai min
}
rt=rt+a1; //jumlah dgn angka pertama
rt=rt/n; //jum dibagi dgn banyak angka sebagai rata” printf("%.2lf %.2lf %.2lf\n",min,max,rt); //print min,max,rata” return 0;
}




23. Bukit dan Lembah
Input :
User menginputkan angka yang akan dicari sebagai selisih dari max dan min sampai user menekan Ctrl+Z (EOF) program tidak akan berhenti.
Proses :
Pertama, kita buat variable max=0 sebagai tempat mencari nilai max. lalu while loop digunakan untuk menginputkan semua angka yg akan di cek nantinya. Dengan bantuan for loop secara decrement(menurun) program mengecek apakah ada nilai yg lebih besar dari variable max atau tidak. Jika ada maka nilai tersebut disimpan di variable max. dengan cara yg sama dengan bantuan for loop untuk mencari nilai minimum, program mencari dari semua angka yg diinputkan apakah ada angka yg lebih kecil dari variable min (array ke 0) jika ada maka disimpan ke variable min. setelah semua pencarian selesai sekarang tinggal output max-min (selisih) dan program selesai.
Output :
Selisih dan max dan min
#include <stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
long long arr[600001];
long long a,n=0,m,modus=0,x,y,b;
long long i=0;
while (scanf("%lld",&arr[i])!=EOF){ //input smpai EOF i++;
 }
long long max=0,min=arr[0];
for(x=i-1;x>=0;x--){
if(arr[x]>max) max=arr[x]; //cari nilai max dari semua angka }
for(y=i-1;y>=0;y--){
          if(arr[y]<min) //cari nilai min
    min=arr[y];
}

printf("%lld\n",max-min); //print hasil pengurangan nilai max dan min return 0;
}




24. Tinggi Kandang Susun
Input :
User menginputkan jumlah tinggi dan jumlah kucing, deklarasi variable lantai, total, jumlah semuanya=0.
Proses :
Masuk ke proses while dengan syarat (x>y) lalu, nilai max=0 untuk mencari nilai maksimum nantinya. Lalu masuk for loop menginputkan tinggi dan dicari tinggi maksimalnya. Setelah keluar dari for loop terdapat lantai++ artinya lantai sebelumnya sudah terpenuhi. Lalu x=x-y artinya masih kurang berapa yang belum diinput krn lantai sebelumnya kan sudah terpenuhi. Terus jmlh=jmlh+max=0+nilai maksimalnya disimpan di variable jmlh. Lalu max=0 untuk mereset nilai maksimumnya karena untuk lantai berikutnya bisa saja nilai max nya berubah. Dengan for loop kita menginputkan sisa yg blm diinputkan, kita cari nilai max nya lagi. Lalu kita jumlah kan semua jumlah sebelumnya dengan nilai max yg baru ditambah dengan lantai + 2(untuk alas dan atapnya).
Output :
Total tinggi kandang susun yang akan dibangun #include<stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo
int main (){
long long total=0;
long long arr;
long long x,y,a,max,jmlh,lantai;
scanf("%lld %lld", &x, &y); //input jum tinggi dan jum kucing lantai=0;
jmlh=0;
while(x>y){ //diulang selama jum tinggi lbh besar dr jum kucing
  max=0;
  for(a=0;a<y;a++) {

scanf("%lld", &arr); //input tinggi
if(arr>max) max=arr; //cari tinggi max }
lantai++; //tambah lantai
x=x-y; //kurangi jum tinggi dgn jum kucing jmlh=jmlh+max;
}
max=0;
for(a=0;a<x;a++){
scanf("%lld", &arr); //input jum lantai
 if(arr>max) max=arr; //cari max
}
jmlh=jmlh+max+lantai+2; //total tinggi
 printf("%lld\n", jmlh);
}




25. Perkalian Pak Dengklek
Input :
Dua angka a dan b
Proses :
Inti dari soal ini adalah kita mengkalikan dua buah bilangan (a dan b) dari angka paling belakang terlebih dahulu. contoh a= 12, b=34. Hasil akhir = (4*2)+(3*2)+(4*1)+(3*1).
Masuk ke while loop selama (a>=1) kita mencari nilai belakang dari a dengan cara a%10 disimpan di variable c. Lalu nilai a dibagi 10 (bertujuan untuk mencari nilai belakang selanjutnya dan jangan takut hasilnya decimal karena variable a bertipe integer jadi yg dipake angka di depan koma), ke while loop selama (b>=1) mencari nilai belakang dari b dengan b%10 disimpan di variable d, setelah itu nilai b dibagi 10 (b juga integer). Nilai e sebagai variable penjumlahan yaitu e=e+(c*d). setelah menghitung nilai e program kembali ke while (a>=1) dengan cara yg sama seperti sebelumnya sampai a dan b kurang dari 1.
Output :
Nilai e

#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
int a,b,e=0,c,d,g;
int i,j;
scanf("%d %d",&a,&b); //input dua angka g=b;
while(a>=1){
c=a%10; //di mod utk angka terbelakang a=a/10; //lalu dibagi 10
b=g;
while(b>=1){
d=b%10; //dimod utk mengetahui angka terbelakang b=b/10; //dibagi 10
e=e+(c*d); //dikalikan dgn angka blkg pertama
} }
printf("%d\n",e); //print jumlah
return 0; }




26. Parkir Truck
Input :
Harga tiket untuk satu kali, dua kali, tiga kali parkir, dan waktu truk parkir.
Proses :
Sepertinya di website dibatasi hanya 3 kali waktu untuk parkir selama sehari. Sehingga for loop 3x, inputkan waktu parkir dan cari nilai maksimalnya. Lalu penanda truk parkir dari inputan sebelumnya a < b-1 jadi jika kita input sebelumnya a=1 dan b=6 maka akan ada 5 penanda truk parkir (1 s/d 5) disimpan pada array. Jadi nilai array ke-1 sampai array ke-5 untuk saat ini adalah 1 semua. Lakukan langkah sebelumnya 2 kali lagi karena waktu parkir sehari ada 3 kali. Selanjutnya for loop kita mencari harga parkir yg harus dibayar
setiap truk dengan cara for loop dari indeks 1 sampai indeks maks-1. Kenapa maks-1 ? karena penanda truknya juga b-1 dan nilai dari maks sendiri adalah nilai maksimal dari b. setelah itu kita if kan, jika array ke-i parkir 1x maka harga yg harus dibayar jum+=la, jika 2x jum+=2*li, jika 3x jum+=3*lu. Dan tidak mungkin bisa lebih dari 3 karena waktu parkir sehari hanya 3 kali.
Output : total harga parkir dari semua truk yg ada #include <stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo
int main(){
int arr[100];
int a,n=0,m,jum=0,x,y,b,la,li,lu; memset(arr,0,sizeof(arr)); //semua isi nilai array di 0 kan scanf("%d %d %d",&la,&li,&lu); //harga parkir
int jMax=0;
for(x=0;x<3;x++){
scanf("%d %d",&a,&b); //waktu truk parkit if(b>=jMax){ //cari yang maks
jMax=b; }
for(y=a;y<=b-1;y++){ //penanda truk parkir arr[y]++;
} }
for(x=1;x<=jMax-1;x++){
if(arr[x]==1) jum=jum+la;
//jika satu truk saja yg parkir, ditambah harga pertama if(arr[x]==2) jum=jum+2*li;
//jika dua truk yg parkir, ditambah dgn dua kali harga kedua if(arr[x]==3) jum=jum+3*lu;
//jika tiga truk yg parkir, ditambah dgn dua kali harga ketiga

}
    printf("%d\n",jum);
return 0; }




27. Bola dan Gelas
Penjelasan :
Input banyak gelas (n) dan banyak kali penukaran(m). memanggil fungsi isiarray jika n=5 maka banyak gelas ke-1 s/d 5 mempunyai nilai yg sama dengan nomornya (gelas[3] nilainya 3). Lanjut ke for loop selama m kali, lalu inputkan posisi gelas yg ingin ditukar. Selanjutnya menginputkan nilai d untuk banyaknya jumlah pertanyaan. Masuk ke while selama d kali, kita menginputkan posisi gelas maka akan muncul nilai terakhir setelah ditukar pada proses sebelumnya dari gelas tersebut.
#include<stdio.h>
//author : Evelyn Tjitrodjojo
void tukar(long long x,long long y){ //fungsi untuk swap
 long long temp;
 temp=x;
 x=y;
 y=temp;
}
void isiarray(long long n,long long gelas[]){ //fungsi utk isi array gelas
 long long i;
 for(i=1;i<=n;i++){
  gelas[i]=i;
 }
}
int main(){
long long gelas[100000]; long long bny,tkr,a,b,c,d,e; long long temp;

scanf("%d %d",&bny,&tkr); //input posisi gelas isiarray(bny,gelas);
for(a=0;a<tkr;a++){
scanf("%d %d",&b,&c); //input letak gelas temp=gelas[b]; //swap
  gelas[b]=gelas[c];
  gelas[c]=temp;
 }
scanf("%d",&d);
while(d--){ //print letak gelas
  scanf("%d",&e);
  printf("%d\n",gelas[e]);
}
return 0; }




28. Median
Penjelasan :
Pertama inputkan testcase (banyak angka) lalu inputkan angka-angka yang akan dicari mediannya(nilai tengahnya). Setelah diinputkan semua angkanya maka angka” tersebut akan di sorting dengan fungsi sort yang ada bisa bubble sort, quick sort, merge sort atau lainnya. Setelah di sorting akan di cek apakah banyak angka ganjil atau genap, jika genap maka angka di tengah ditambah angka berikutnya lalu dibagi 2 adalah mediannya, namun jika ganjl maka nilai tengah langsung menjadi mediannya.
#include <stdio.h>
/*Judul: Median
      Author : Evelyn Tjitrodjojo*/
void Sort(float Data[],int L, int R){ //fungsi sort int i=L, j=R;
float temp, x=Data[(L+R)/2];

 while (i <= j){
  while(Data[i] < x) i++;
  while(Data[j] > x) j--;
  if(i <= j){
   temp=Data[i];
   Data[i]=Data[j];
   Data[j]=temp;
   i++;
j--; }
 }
 if(L < j) Sort(Data,L, j);
 if(i < R) Sort(Data,i, R);
}
int main(){
int i, count;
float median,number[2000000]; scanf("%d", &count); //input testcase for (i = 0; i < count; ++i)
scanf("%f", &number[i]); //input angka Sort(number, 0,count-1); //disort
if(count%2==0)
//jika genap, angka ditengah dgn angka berikutnya ditmbh bagi dua
median=(number[count/2]+number[count/2-1])/2;
else median=number[count/2]; //jika ganjil, angka yg ditengah = median printf("%.2f\n", median);
}




29. Tukar Kartu
Penjelasan :
Pertama inputkan banyak kartu(test case), lalu inputkan data setiap kartunya. Selanjutnya semua kartu tersebut di sorting dengan menggunakan bubble sort. Algoritma bubble sort cukup simple hanya membandingkan kartu ke-i dengan
kartu lainnya. Di sini
kartu ke-i lebih besar
variable c bertambah 1
penukaran). Jika semua
mengoutputkan nilai c.
#include<stdio.h>
/*Judul: Tukar Kartu
sortingnya secara increment (meningkat) sehingga jika dari pada ke-i+1 maka akan ditukar posisinya dan (variable c berguna untuk menghitung banyak
kartu sudah terurut pada akhir program, program
      Author : Evelyn Tjitrodjojo*/
long long n,c,i,j;
void bubblesort(int data[],int n){ //fungsi bubble sort int temp,i,j;
 for(i=0;i<n;i++){
  for(j=0;j<n-1;j++){
   if(data[j]>data[j+1]){
    temp=data[j];
    data[j]=data[j+1];
    data[j+1]=temp;
    c++; //flag jumlah penukaran
   }
} }
}
int main(){
 scanf("%d",&n); //input test case
 int data[n];
 for(i=0;i<n;i++){

scanf("%d",&data[i]); //input data angka }
bubblesort(data,n); //disort
printf("%d\n",c); //hasil penukaran terkecil dari data }



30. Pustakawan
Penjelasan :
Pertama inputkan test case, lalu inputkan setiap datanya. Terus kita sorting dengan algoritma selection sort. Lalu saat melakukan penukaran, c++ (sebagai banyak penukaran berapa kali). Di akhir program outputkan nilai c
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int c;
void swap(long long *xp, long long *yp) { //fungsi swap
 long long temp = *xp;
 *xp = *yp;
 *yp = temp;
 c++; //flag berapa kali diswap
}
void selectionsort(long long n,long long arr[]) { //fungsi selection sort
long long i, j, min_idx;
// One by one move boundary of unsorted subarray for (i = 0; i < n-1; i++) {
// Find the minimum element in unsorted array min_idx = i;
for (j = i+1; j < n; j++)
   if (arr[j] < arr[min_idx])
    min_idx = j;
// Swap the found minimum element with the first element

if(i!=min_idx)swap(&arr[min_idx], &arr[i]); }
}
int main(){
long long n,i;
c=0;
scanf("%lld",&n); //input test case long long data[1001]; for(i=0;i<n;i++){
scanf("%lld",&data[i]); //input data }
selectionsort(n,data); //disort menggunakan fungsi
printf("%lld\n",c); //jumlah total swap data }
