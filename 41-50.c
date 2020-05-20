41. Pecahan Uang
Source Code:
#include<stdio.h>
int main()
{
    int k,t,i;
    int c[10]={1,2,5,10,20,50,100,200,500,1000};// merupakan daftar pecahan uang yang ada
    scanf("%d",&k);
    for(i=9;i>=0;i--)
    {
        if(k>=c[i])
        {
            t=k/c[i];
            k=k-c[i]*t;
            printf("%d %d\n",c[i],t);
        }
    }
    return 0;
}

Penjelasan:
Kode diatas berfungsi untuk membagi uang dengan jumlah tertinggi dahulu. Missal input data 9820. 
Pertama 9820 itu akan dibagi oleh c[9]=1000 nah hasilnya itu disimpan dalam t. dan nilai uang sekarang ada 820. 
Lalu di print data yg berhubungan. Nah untuk perulangan berikutnya 820 akan dibagi dengan array c[8] nah begitu seterusnya..  
sampai i=0




42. Periksa Palindrom
Source Code:
#include<stdio.h> 
#include<string.h>
//author : Evelyn Tjitrodjojo 
int main(){
int h=0,j,t,k,c=0;
char z[100000],tanda;
while(1){
scanf("%s%c",&z,&tanda);
c++;
t=strlen(z);
h=0; 
for(j=0,k=t-1;j<=((t-1)/2);j++,k--){
 if(z[j]!=z[k])
 {
        h++;} }
if(h==0&&c==1)printf("%s",z);
else if(h==0) printf(" %s",z); if(tanda=='\n') break;
}
printf("\n");
return 0; }

Penjelasan:
for(j=0,k=t-1;j<=((t-1)/2);j++,k--){ if(z[j]!=z[k]){ h++; } }
inisiasi j = 0, k = t -1
jika j <= itu maka eksekusi
jika code for sudah jalan maka j++, k--
if :
jika z[0] != z[t-1] //intinya dia ngecek belakang depan apa sama sampe ke tengah
maka h ++
untuk kode
 if(h==0&&c==1)printf("%s",z); 
else if(h==0) printf(" %s",z); 
if(tanda=='\n') break;
jika selama perulangan ditemukan kata palindrom maka kalimat tersebut akan di cetak. 
Nah fungsi if(tanda=='\n') break; menunjukkan bahwa jika ditekan enter maka program akan berhenti.



43. SDS
Source Code:
#include<stdio.h>
#include<math.h>
//author : Evelyn Tjitrodjojo
        long long n,i;
double simpbaku=0,a,a1,min,max,rt=0,rtk=0; 
int main(){
        scanf("%lld",&n);
        scanf("%lf",&a1);
        max=a1;
        min=a1;
        for(i=1;i<n;i++){
                 scanf("%lf",&a);
                 rt=rt+a;
                 rtk=rtk+pow(a,2);
                 if (max<a) max=a;
                 if (min>a) min=a;
        }
        rtk=rtk+pow(a1,2);
rt=rt+a1;
rt=rt/n;
simpbaku= sqrt((rtk-(pow(rt,2))*n)/(n-1)); 
printf("%.2lf %.2lf %.2lf %.2lf\n",min,max,rt,simpbaku);
return 0; 
}

Penjelasan:
scanf("%lld",&n); // menerima input data
scanf("%lf",&a1); //menerima input data
max=a1; // memisalkan max=a1 biasanya untuk dijadikan perbandingan
min=a1; // memisalkan min=a1 bisanya dijadikan perbadandingan
for(i=1;i<n;i++){  // melakukan perulangan
scanf("%lf",&a); input data a
rt=rt+a; // dalam setiap perulangan rt dijumlahkan dengan a
rtk=rtk+pow(a,2); rtk dijumlahkan dengan a pangkat 2
if (max<a) max=a;  // mengecek nilai max
if (min>a) min=a; // mengecek nilai min
}
rtk=rtk+pow(a1,2);  // rtk hasil perulangan ditambahkan 
rt=rt+a1; //hasil rt di perulangan ditambahkan dengan a1
rt=rt/n; // lalu rt dibagi dengan n
simpbaku= sqrt((rtk-(pow(rt,2))*n)/(n-1)); // menghitung simbaku
printf("%.2lf %.2lf %.2lf %.2lf\n",min,max,rt,simpbaku); // menampilkan hasil
soalnya ga bisa dibuka, jadi hanya menuliskan komentar pada kode. Lebih lengkap 
cek https://github.com/ia-toki/training-gate-issues/issues/59




44. Refleksi Matriks
Source Code:
#include<stdio.h>
//author : Evelyn Tjitrodjojo int main(){
        int a,b,c,d,i,j;
        scanf("%d %d",&a,&b);
        int x[a][b];
        for(i=0;i<a;i++){
                 for(j=0;j<b;j++){
                         scanf("%d",&x[i][j]);
} }
        scanf("%d %d",&c,&d);
        int y[c][d];
        for(i=0;i<c;i++){
for(j=0;j<d;j++){
                 scanf("%d",&y[i][j]);
} }
int l=0,m=0,n=0,o=0,p=0;
for(i=0;i<c;i++){
  for(j=0;j<d;j++){
    if(x[i][j]==y[i][j]) l++; //identik 
    if(x[i][j]==y[c-i-1][j]) m++; //horisontal 
    if(x[i][j]==y[i][c-j-1]) n++; //vertikal
    if(x[i][j]==y[j][i]) o++; //diagonal kanan bawah 
    if(x[i][j]==y[c-j-1][c-i-1]) p++; //diagonal kiri bawah
  } 
}
  if(l==(c*d)) printf("identik\n");
  else if(m==(c*d)) printf("horisontal\n");
  else if(n==(c*d)) printf("vertikal\n");
  else if(o==(c*d)) printf("diagonal kanan bawah\n"); 
  else if(p==(c*d)) printf("diagonal kiri bawah\n");
  else printf("tidak identik\n");
}

Penjelasan:

Pertama inputnya kita memasukkan ukuran matriks[a][b]
for(i=0;i<a;i++){ 
for(j=0;j<b;j++){ 
scanf("%d",&x[i][j]); 
} 
}
Perulangan pertama untuk mendafarkan matriks pertama

int y[c][d]; 
for(i=0;i<c;i++){ 
for(j=0;j<d;j++){ 
scanf("%d",&y[i][j]); 
} 
} 
Perulangan kedua tersebut untuk mendaftarkan matriks kedua
Untuk kode dibawah ini
int l=0,m=0,n=0,o=0,p=0; 
for(i=0;i<c;i++){ 
for(j=0;j<d;j++){ 
if(x[i][j]==y[i][j]) l++; //identik 
if(x[i][j]==y[c-i-1][j]) m++; // cek horisontal 
if(x[i][j]==y[i][c-j-1]) n++; //vertical
if(x[i][j]==y[j][i]) o++; //cek diagonal kanan bawah 
if(x[i][j]==y[c-j-1][c-i-1]) p++; //cek diagonal kiri bawah 
} 
} 
if(l==(c*d)) printf("identik\n"); 
else if(m==(c*d)) printf("horisontal\n"); 
else if(n==(c*d)) printf("vertikal\n"); 
else if(o==(c*d)) printf("diagonal kanan bawah\n"); 
else if(p==(c*d)) printf("diagonal kiri bawah\n"); 
else printf("tidak identik\n");
nah dilakukan perulangan untuk setiap matriks dan dilakukan pengecekan. 
Kita ambil satu contoh misal if(x[i][j]==y[i][j]) l++;
kan nilai awal l itu sama dengan 0. Kalau untuk setiap indeks matriks1[1][1]=matrik2[1][1] maka 
nilai l akan di increase 1. Nah, bayangkan jika semua indeks nya sama, maka nilai l tentu akan sama dengan c*d. 
oleh karena itu di 
if(l==(c*d)) printf("identik\n"); nah seperti itu seterusnya



45. Hanacaraka
Source Code:
#include<stdio.h> 
#include<string.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 int a,b,c,d,i,j; 
 char x[4001]; 
 scanf("%s",&x); //input string 
 for(i=strlen(x)-1;i>=0;i--){ //diulang dari belakang string sampai huruf terdepan 
  if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o'){ //Jika ada huruf vokal 
  printf("%c",x[i]); //print huruf vokal 
  i-=2; //dilompati dua huruf 
  } 
  else 
  printf("%c",x[i]); //selain itu print biasa 
 } 
 printf("\n"); //print enter 
}

Penjelasan:
Inti dari program ini adalah, string yg diketik akan dicek dari huruf paling belakang. Apa hal yg cek?
Pada setiap pengecekan huruf dari belakang akan di cek
if(x[i]=='a'||x[i]=='i'||x[i]=='u'||x[i]=='e'||x[i]=='o') nah jika ada huruf vocal maka di print 
huruf vocal nya truss jika dilompati 2 huruf nya. Jika bukan huruf vocal, print huruf tersebut.




46. A + B + ....
Source Code:
#include<stdio.h>
//author : Evelyn Tjitrodjojo int main(){
    int i,b=0,a,x[10000];
    scanf("%d",&a); //input besar array
    for(i=0;i<a;i++){
        scanf("%d",&x[i]); //input angka
        b=b+x[i]; //jumlah semua angka
    }
    printf("%d",b); //print angka
}

Penjelasan:
Nah initinya pertama kita input jumlah angka yg hendak dijumlahkan. 
Lalu kita input angka angka yg dijumlahkan. B merupakan jumlah total dari semua bilangan.




47. Utak-Atik Lampu
Source Code:
#include<stdio.h> #include<string.h>
//author : Evelyn Tjitrodjojo int main(){
        int n,a,b,c,i,j,x[10000],y;
        scanf("%d",&a); //input test case
        for(n=1;n<=a;n++){
scanf("%d %d",&b,&c); //input angka memset(x,0,sizeof(x)); //set array x dengan nilai 0
y=0;
for(i=1;i<=c;i++){
        for(j=i;j<=b;j+=i){
                 if(x[j]==0){ //jika array x = 0
                         y++; //flag y
                         x[j]=1; //nilai x menjadi 1
                 }
                 else if(x[j]==1){ //jika nilai array x = 1
                         y--; //flag dikurangi
                         x[j]=0; //nilai x menjadi 0
                } 
            }
}
printf("Kasus #%d: %d\n",n,y); //print hasil
} 
}

Penjelasan:
Masih belum ditemukan akses link 404 https://pandaoj.com/problem/BNPCHS2016F




48. Word Words Wordsz
Source Code:
#include <stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo int main(){
        int i,j,k,a,b,c,d;
        int l=0,m=0,n=0;
        char x[1000];
        scanf("%d",&a);
        for(i=1;i<=a;i++){
                 l=0; m=0; n=0;
scanf("%d",&b);
for(j=0;j<b;j++){
        c=0;
        scanf("%s",&x);
        c=strlen(x);
        if(c==4)l++;
        else if(c==5)m++;
        else if(c==6)n++;
        }
      printf("Case #%d: %d %d %d\n",i,l,m,n);
    } 
}

Penjelasan:
Nah initinya itu, inputan pertama menentukan jumlah test case nya. Nah missal 3
Maka akan terjadi 3 test case.
Pada setiap test case akan menerima inputan lagi, missal inptuannya 5. Maka pada testcase1 akan menerima 5 inputan kata. 
Nah Panjang setiap kata yg diinput itu akan dihitung. L melambangkan jumlah huruf pada kata berjumlah 4. 
M melambangkan jumlah huruf pada kata ada 5 dan n melambangkan jumlah huruf pada kata berjumlah 6. 
Di akhir akan dicetas Case #1 : ada berapa huruf yg berjumlah 4,5,6.




49. Squareception
Source Code:
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int power(long long x, unsigned long long y, long long p){
    long long res = 1; // Initialize result 
    x=x%p; //Updatexifitismorethanor
                // equal to p
    while (y > 0){
    // If y is odd, multiply x with result
            if (y%2== 1) //y&1
                res = (res*x) % p;
            // y must be even now
            y = y/2; // y = y>>1
            x = (x*x) % p;
          } 
          return res; 
}
int main(){
        long long a,b,c,d,i,j;
        scanf("%lld",&a); //input tes case
        for(i=1;i<=a;i++){
          c=0; d=0;
          scanf("%lld",&b); //input angka 
          c=power(5,b-1,1000000007); //modex angka 
          d=4*c%1000000007; //hasilnya dikalikan 4 
          printf("Case #%lld: %lld\n",i,d); //print hasil
          } 
}

Penjelasan:
Inputan pertama unutk menuntukan banyak testcase
Inputan brikutnya merupakan suatu test case. 
Inputan akan disimpan kedalam variabel b.
Lalu nilai dari c merupakan hasil pemanggilan fungsi power(5,b-1,100000007)
Nah bagaimana cara kerja fungsi tersebut?
Missal testcase b=1
b-1=0

int power(long long x, unsigned long long y, long long p){ 
    long long res = 1; // Initialize result 
    x = x % p; // Update x if it is more than or // equal to p 
    while (y > 0){
        // If y is odd, multiply x with result 
    if (y%2== 1) //y&1 
    res = (res*x) % p; // y must be even now 
    y = y/2; // y = y>>1 
    x = (x*x) % p;    } 
    
    return res; 
    
}

Nah dari program diatas maka x=5 , y=0 , p=1000000007
X % y = 5.
Nah kan ada perulangan while(y>0) ini tidak memenuhi kondisi sehingga nilai yng dikembalikan adalah res=1
Kembali ke fungsi main nilai c=1
d=4*c%1000000007
maka nilai d sama dengan 1

missal input b=2
Nah dari program diatas maka x=5 , y=1 , p=1000000007
X % y = 5.
Nah dia akan masuk ke perulangan while. Untuk 
if (y%2== 1) memenuhi maka dilakukan res = (res*x) % p = 5
 y = y/2; maka y=0
x = 25 karena sekarng y=0 maka akan keluar perulangan dan res=5
kembali ke fungsi main c=5
d=4*c%1000000007
maka nilai d samadengan 20




50. Basic Conversion
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 int i,a,b,c,biner=0,j; 
 int x[100000]; 
 scanf("%d",&a); //input testcase 
 for(j=1;j<=a;j++){ 
  scanf("%d %d",&b,&c); //input angka 
  printf("%d %d",b,c); //print angka 
  i=0; 
  while(b>0){ //diulang hingga b>0 
   x[i]=b%c; //b mod c 
   b=b/c; //b/c 
   printf("%d",b); //print b 
   i++; //flag 
  } 
  printf("Case #%d: ",j); //print hasil j 
  while(i--){ //print huruf sesuai inputan yg dikonversikan 
   if(x[i]==10) printf("A"); 
   else if(x[i]==11) printf("B"); 
   else if(x[i]==12) printf("C"); 
   else if(x[i]==13) printf("D"); 
   else if(x[i]==14) printf("E"); 
   else if(x[i]==15) printf("F"); 
   else if(x[i]==16) printf("G"); 
   else if(x[i]==17) printf("H"); 
   else if(x[i]==18) printf("I"); 
   else if(x[i]==19) printf("J"); 
   else if(x[i]==20) printf("K"); 
   else if(x[i]==21) printf("L"); 
   else if(x[i]==22) printf("M"); 
   else if(x[i]==23) printf("N"); 
   else if(x[i]==24) printf("O"); 
   else if(x[i]==25) printf("P"); 
   else if(x[i]==26) printf("Q"); 
   else if(x[i]==27) printf("R"); 
   else if(x[i]==28) printf("S"); 
   else if(x[i]==29) printf("T"); 
   else if(x[i]==30) printf("U"); 
   else if(x[i]==31) printf("V"); 
   else if(x[i]==32) printf("W"); 
   else if(x[i]==33) printf("X"); 
   else if(x[i]==34) printf("Y"); 
   else if(x[i]==35) printf("Z"); 
   else printf("%d",x[i]); 
  } 
  printf("\n"); 
 } 
} 
 
Penjelasan:
Nah ini cuman program sederhana conversi biasa. 
Input pertama menandakan banyak testcase
Input kedua berupa 2 angka yg merupakan test case

while(b>0){ //diulang hingga b>0 
x[i]=b%c; //b mod c 
b=b/c; //b/c 
printf("%d",b); //print b 
i++; //flag 
} 

Nah  perulangan diatas berlaku selama b>0;
Nah nilai array x[i]itu adalah b mod x
Lalu b dibagi dengan c.  begitu seterusnya selama b>0

Nah diberikutnya itu hasil x[i] akan dibandingkan lalu cetak sesuai kondisi. 
X[i] yg dicek mulai dari paling terakhir sampai ke awal
