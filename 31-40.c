31. Faktorisasi Prima
Diberikan sebuah bilangn bulat positif N. Menentukan faktorisasi prima N dalam bentuk p1^a1 x p2^a2 x ... x pK^aK, dengan p adalah bilangan prima dan a adalah pangkatnya. Apabila pangkatnya 1,maka tidak perlu dituliskan beserta tanda pangkatnya.Bilangan primma harus terurut dari kecil ke besar.

Input Output
56     2^3 x 7

Source code:
#include<stdio.h> #include<string.h>
//author : Evelyn Tjitrodjojo 
int arr[1000001];
int prime[77778];
int cntprime;
void sieve(){ //fungsi sieve dlm mencari bil prima 
        memset(arr,0,sizeof (arr)); //memberi nilai 0 pada isi array 
        int i,j;
cntprime=0;
arr[1]=1;
for(i=2;i<1000001;i++){
if(arr[i]==1) continue;
prime[cntprime++]=i; //bil prima disimpan dalam array prime
for(j=i+i;j<1000001;j+=i) arr[j]=1; //jika angka tdk prima continue
} }
int main(){
        sieve();
int c,n,i;
scanf("%d",&n); //input angka
for(i=0;n>1;i++){
        c=0;
        while(n%prime[i]==0){ //jika mod prima =0
                 n/=prime[i]; //dibagi dgn bil tersebut dan di counter
                 c++;
}
if(c==1) printf("%d",prime[i]);
//jika 1 langsung print angka prima
else if(c>1) printf("%d^%d",prime[i],c);
//jika pangkat, print counter jg
if(c>0 && n>1) printf(" x "); //print kali
}
printf("\n");
}




32. Prima Ke-K
Berapakah angka prima yang ke-K Format Masukan
Baris pertama berisi sebuah bilangan bulat T. T baris berikutnya masing-masing berisi sebuah bilangan bulat K.
Format Keluaran
T buah baris, masing-masing berisi bilangan prima ke-K.Input tput

Input         Output
4 1 3 5       2 5 11 3

Source Code:
#include<stdio.h> 
#include<string.h> 
//author : Evelyn Tjitrodjojo 
int arr[1000001]; 
int prime[77778]; 
int cntprime; 
 
void sieve(){ //fungsi sieve untuk menyimpan bil prima dgn cara cepat 
 memset(arr,0,sizeof (arr)); //mengeset nilai array 0 
 int i,j; 
 cntprime=1; 
 arr[1]=1; 
 for(i=2;i<1000001;i++){ 

  if(arr[i]==1) continue; //jika tdk prima, continue 
  prime[cntprime++]=i; //jika bil prima, simpan di dlm array prime 
  for(j=i+i;j<1000001;j+=i) arr[j]=1; 
 } 
} 
 
int main(){ 
 sieve(); //menjalankan fungsi sieve 
 int t,a; 
 scanf("%d",&t); //input test case 
 while(t--){ 
  scanf("%d",&a); //input angka 
  printf("%d\n",prime[a]); //print bil prima ke angka 
 } 
} 




33. Faktor Persekutuan Terbesar
FPB (Faktor Persekutuan Terbesar) dari dua buah bilangan bulat A dan B adalah bilangan bulat non-negatif

Input         Output
2               4
12 20           1
1 2

Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 long long t,temp,i,a,b,hasil[10000]; 
 scanf("%lld",&t); //input test case 
 for(i=1;i<=t;i++){ 
  scanf("%lld %lld",&a,&b); //angka 
  while(b>0){ 
   temp=a%b; //a mod b 
   a=b; //swab a dan b 
   b=temp; 
  } 
  hasil[i]=a; //simpan a dalam array 
 } 
 for(i=1;i<=t;i++){  
  printf("%lld\n",hasil[i]); //print fpb yg disimpan 
 } 
 return 0; } 




34. Penjumlahan Pecahan
diberikan dua buah pecahan dalam bentuk A/B dan C/D. Hitunglah A/B + C/D, lalu cetak hasilnya dalam bentuk yang paling sederhana. Bentuk paling sederhana dari suatu pecahan adalah ketika FPB dari pembilang dan penyebutnya adalah 1.A, B, C, dan D adalah bilangan bulat positif

Format Masukan
Baris pertama berisi dua buah bilangan bulat A dan B. Baris kedua berisi dua buah bilangan bulat C dan D.

Format Keluaran
Sebuah baris berisi dua buah bilangan bulat, yaitu E dan F, di mana E/F = A/B + C/D dan E/F adalah bentuk yang paling sederhana.

Input Output
2 3   22  15
4 5

Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int FPB(long long x, long long y){ //fungsi fpb 
 long long r,fpb; 
 while(y>0){ 
  r=x%y; 
  x=y; //swap 
  y=r; 
 } 
 fpb=x; 
 return fpb; 
} 
int main(){ 
 long long a,b,c,d,e,f,g,temp; 
 scanf("%lld %lld",&a,&b); //input pembilang 
 scanf("%lld %lld",&c,&d); //input penyebut 
 if(b==0){ 
  e=c; 
  f=d; 
 } 
 else if(d==0){ 
   e=a; 
   f=b; 
  } 
  else{ 
   g=FPB(b,d); //menghitung pecahan 
   b=b/g; 
   d=d/g; 
   a=a*d; 
   c=c*b; 
   f=b*d*g; 
   e=a+c; 
  } 
 while(FPB(e,f)>1){ 
  temp=FPB(e,f); 
  e=e/temp; 
  f=f/temp; 
 } 
 if(e==f) 
 printf("1\n"); 
 else printf("%lld %lld\n",e,f); //print penjumlahan pecahan 
 return 0; 
}  




35. Faktorial
N!, yaitu N faktorial, didefinisikan sebagai N x (N-1) x (N-2) x ... x 1.
Menghitunglah jumlah 0 berurutan yang mengakhiri N!. Misalnya, 10! = 3.628.800, 
maka jumlah 0 berurutan adalah 2. 8! = 40.320, maka jumlah 0 berurutan adalah 1 (nol di tengah tidak dihitung).

Format Masukan
Baris pertama berisi sebuah bilangan bulat N.

Format Keluaran
Sebuah baris berisi sebuah bilangan bulat yaitu jawaban yang dimaksud.
Input    Output
  10        2

Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 long long a,c=0,i,temp; 

 scanf("%lld",&a); //input angka 
 for(i=5;i<=a;i+=5){ 
  temp=i; 
  while(temp%5==0){ //mod 5 
   temp/=5; //dibagi 5 
   c++; //diflag 
  } 
 } 
 printf("%lld\n",c); //print flag sebagai faktorial 
 return 0; 
} 




36. Pemberat
Terdapat masalah ketidakseimbangan jungkat jungkit yang dimana kucing memiliki berat badan yang besar dan 
bebek memiliki berat badan yang kecil supaya seimbang kita menggunakan beberapa pemberat di sisi bebek berada, 
sedemikian sehingga berat satu sisi dan lainnya kini sama. Sayangnya kita tidak memiliki pemberat dalam setiap 
ukurankita hanya memiliki pemberat dengan ukuran 2^K dengan 0 ≤ K ≤ 60. Terlebih lagi, kita hanya memiliki satu buah 
pemberat untuk setiap ukuran tersebut.
Saat ini berat bebek yang bermain adalah B, sedangkan berat kucing yang bermain adalah K (1 ≤ B < K ≤ 2^61). 
Bantulah Pak Dengklek untuk menentukan pemberat mana saja yang harus ia gunakan.

Format Masukan
Baris pertama berisi sebuah bilangan bulat B. Baris kedua berisi sebuah bilangan bulat K.

Format Keluaran
Beberapa baris dengan satu bilangan bulat setiap barisnya yang merupakan berat dari masing-masing pemberat yang digunakan, terurut dari besar ke kecil.

Input         Output
  1             4
  6             1

Source Code:
#include<stdio.h> 
#include<math.h> 
//author : Evelyn Tjitrodjojo 
long long z[64]; 
void precom(){ //precom utk menyimpan bil 
 long long i; 
 for(i=0;i<63;i++){ 
  z[i]=pow(2,i); //simpan kuadrat 2 ke dalam array 
 } 
} 
int main(){ 
 long long a,b; 
 long long n, c, k; 
 scanf("%lld",&a); //input angka 1 
 scanf("%lld",&b); //input angka 2 
 precom(); //fungsi precom 
 n=b-a; //hasil pengurangan angka 2 � angka 1 
   for (c = 61; c >= 0; c--){ 
     k = n >> c; //menggeser biner / dibagi 2 
 
     if (k & 1) printf("%lld\n",z[c]); //print hasil 
 } 
return 0; 
} 




37.Sub Persegi
Ada berapa subpersegi, termasuk persegi itu sendiri, yang terdapat pada sebuah petak berukuran N x N
 (1 ≤ N ≤ 100)?

Format Masukan
Baris pertama berisi sebuah bilangan bulat N.

Format Keluaran
Sebuah baris berisi sebuah bilangan bulat yaitu jumlah yang dimaksud.

Input Output
  2     5

Source Code:
#include<stdio.h> 
#include<math.h> 
//author : Evelyn Tjitrodjojo 
long long cnt,n; 
int square(long long base){ 
long long square; 
 cnt=1; 
 square=0; 
 while (cnt<=base){ 
  square=square+pow(cnt,2); //kuadrat cnt ditambah persegi 
  cnt++; //flag 
 } 
 return square; 
} 
int main(){ 
 long long n; 
 scanf("%lld",&n); //input angka 
 printf("%lld\n",square(n)); //print angka hasil kuadrat 
return 0; 
} 




38.Magic Square
Magic Square adalah persegi yang terdiri atas N x N petak, masing-masing petak berisi sebuah bilangan bulat antara 
1 hingga N2 tanpa ada 2 petak yang berisi angka yang sama, di mana jumlah bilangan yang ada pada setiap baris = 
jumlah bilangan yang ada pada setiap kolom = jumlah bilangan yang terletak pada setiap diagonal utama. 
Yang dimaksud dengan diagonal utama di sini adalah diagonal yang membentang dari pojok kiri atas hingga ke pojok kanan bawah,
dan diagonal yang membentang dari pojok kanan atas hingga pojok kiri bawah persegi. Tentu saja sebuah Magic Square berukuran 
setidaknya 3 x 3 memiliki tepat dua buah diagonal utama.
Pak Dengklek memberikan Anda beberapa pertanyaan yang masing-masing diwakilkan dengan sebuah 
bilangan bulat N (3 ≤ N ≤ 1.000.000). Untuk setiap bilangan bulat N yang ditanyakan, tentukan jumlah bilangan
pada baris pertama magic square berukuran N x N.

Format Masukan
Baris pertama berisi bilangan bulat T (1 ≤ T ≤ 100.000) yaitu banyaknya pertanyaan Pak Dengklek. 
Sebanyak T baris berikutnya masing-masing berisi sebuah bilangan bulat N, yang mewakili pertanyaan Pak Dengklek.

Format Keluaran
Sebanyak T baris, masing-masing berisi sebuah bilangan bulat yang merupakan nilai K untuk setiap N yang ditanyakan, 
sesuai dengan urutan pada masukan.

Input     Output
  2         15
  3         34
  4
  
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 long long a,b,c; 
 scanf("%lld",&a); //input testcase 
 while(a--){ 
  scanf("%lld",&b); //input angka 
  printf("%lld\n",b*(b*b+1)/2); //print hasil rumus magic square 
 } 
}




39. Kelipatan 4 atau 7
diminta Anda untuk menghitung jumlah semua bilangan asli yang tidak lebih besar dari N (1 ≤ N ≤ 1.001.000) yang merupakan
kelipatan 4 atau 7.
Misalnya, bilangan asli yang tidak lebih besar dari 10 yang merupakan kelipatan 4 atau 7 adalah 4, 7, dan 8. 
Jumlah dari keempat bilangan ini adalah 19.

Format Masukan
Baris pertama berisi sebuah bilangan bulat T (1 ≤ T ≤ 100.000) yaitu jumlah pertanyaan. T baris berikutnya masing-masing
berisi sebuah bilangan bulat N.

Format Keluaran
T buah baris, masing-masing berisi sebuah bilangan bulat yaitu jumlah yang dimaksud.

Input    Output
  1       19
  10
  
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
 long long arr[1001001]; 
void precomp(){ //simpan hasil precom 
 long long i; 
 arr[0]=0; 
 for(i=1;i<1001001;i++){ 
  if(i%4==0||i%7==0) arr[i]=arr[i-1]+i; 
  //jika bisa di mod 4 atau 7 berarti kelipatan 4 atau 7 
  else arr[i]=arr[i-1]; 
 } 
} 
int main(){ 
 long long a,b,c; 
 scanf("%lld",&b); //input testcase 
 precomp(); 
 while(b--){ 
 scanf("%lld",&a); //input angka 
 printf("%lld\n",arr[a]); //print hasil dari precomp yg udh disimpan 
 } 
}




40. Memasang lantai
Penjelasan:
Pak Dengklek membuat kandang baru untuk bebek-bebeknya. Kandang baru ini luasnya adalah 3 × N meter. 
Untuk menutupi seluruh permukaan lantai kandang baru tersebut, Pak Dengklek sudah membeli sejumlah papan dengan 
ukuran 1 × 3 meter. Sayangnya Pak Dengklek tidak memiliki gergaji, sehingga ia tidak dapat memotong papan-papannya seenak hati.
Kini ia memikirkan bagaimana cara ia dapat menutupi semua permukaan lantai dengan papan-papan tersebut tanpa memotong satu 
papan pun dan tanpa ada dua atau lebih papan bertumpuk.
Dasar Pak Dengklek, ia tidak puas hanya dengan mengetahui salah satu cara untuk menutup semua permukaan lantai, 
kini ia memikirkan berapa banyak kemungkinan peletakan papan-papan agar semua permukaan lantai tertutupi.

Format Masukan
Sebuah bilangan bulat N (1 ≤ N ≤ 1000) yang berarti luas kandang baru adalah 3 × N meter.

Format Keluaran
Sebuah bilangan bulat yang merupakan banyaknya kemungkinan peletakan papan-papan untuk menutupi lantai. 
Jika bilangan ini lebih besar dari 999999 Anda cukup mencetak sisa bagi bilangan tersebut dengan 
1000000 (bila bilangan tersebut adalah X dan X>999999, Anda cukup mencetak X MOD 1000000).

Input       Output
  4           3

Source Code:
#include <stdio.h> 
#include <string.h> 
//author : Evelyn Tjitrodjojo 
long long data[1010]; 
long long func(long long x){ 
 if(data[x]!=-1) 
  return data[x]; 
 data[x]=(func(x-1)+func(x-3))%1000000; 
 return data[x]; 
} 
int main(){ 
 memset(data, -1, sizeof(data)); 
 data[0]=data[1]=data[2]=1; 
 int n; 
 scanf("%d", &n); 
 printf("%lld\n", func(n)); 
}
