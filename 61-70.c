61. Nosy Duck
Penjelasan : program untuk mengurutkan bilangan yang diinputkan dari besar ke kecil. algoritma sort nya adalah dengan membagi dua barisan tersebut, kemudian dicek awal dan akhir, apabila tidak sesuai (kecil ke besar) maka ditukar sampai bertemu di tengah baris bilangan, kemudian barisan tersebut dibagi 2, depan dan belakang, setelah itu sort lagi dari awal sampai tengah dan dari tengah sampai akhir, lanjut cek awal dan akhir dari tiap bagian, kemudian barisan depan dan belakang masing masing dibagi 2 lagi dan seterusnya

Input: baris pertama input testcase, baris kedua itu tiap test case inputkan jumlah bilangan yang akan diurutkan, baris berikutnya masukkan bilangan bilangan yang akan diurutkan

Output: bilangan yang sudah terurut dari besar sampai kecil

#include<stdio.h>

void sort(int arr[],int left,int right){ //fungsi sort int i=left,j=right,data=(arr[right]+arr[left])/2; while(i<=j){
while(arr[i]>data)i++;

while(arr[j]<data)j--;

if(i<=j){

int temp=arr[i];

arr[i]=arr[j];

arr[j]=temp;

i++,j--;

}

}

if(left<j) sort(arr,left,j);

if(i<right) sort(arr,i,right);

}

int main(){

int a,b,c,d,i,j;

int x[10000];

scanf("%d",&a); //input test case

while(a--){

scanf("%d",&b); //input banyak bebek

for(i=0;i<b;i++){

scanf("%d",&x[i]); //input umur bebek

}

sort(x,0,b-1); //sort umur bebek

for(i=0;i<b;i++){

printf("%d ",x[i]); //print umur bebek

}

printf("\n");

}

}




62. Musical Instrument
Penjelasan : program untuk mengecek sebuah barisan bilangan dimana jika bilangan pertama ganjil, maka setiap lompat 1 bilangan seterusnya bernilai ganjil, bagitu pula bila bilangan pertama genap, setiap lompat 1 bilangan bernilai genap.

Input : baris pertama jumlah test case, baris kedua inputkan barisan bilangan yang akan dicek

Output : apabila barisan tersebut sesuai maka print 1, jika tidak print 0

#include<stdio.h>

int main(){

int a,b=0,c,i,j;

int x[10000];

scanf("%d",&a); //input test case

for(i=0;i<a;i++){

scanf("%d",&x[i]); //input array note

}

if(x[0]%2==0){ //jika note pertama bisa di mod 2 for(i=1;i<a;i+=2){

if(x[i]%2==0){ //jika note bisa di mod 2

b++;

break; //flag + break

}

}

for(i=2;i<a;i+=2){

if(x[i]%2==1){ //jika note di mod 2 == 1

b++;

break; //b ditambah dan break

}

}

}

if(x[0]%2==1){ //jika note pertama di mod 2 = 1 for(i=1;i<a;i+=2){

if(x[i]%2==1){ //jika note berikutnya di mod 2=1 b++;

break; //tandai dan break

}

}

for(i=2;i<a;i+=2){

if(x[i]%2==0){ //jika array berikutnya dimod 2= 0 b++;

break; //tandai b dan break

}

}

}

if(b!=0)printf("0\n");

//jika tanda b tidak sm dengan 0, print 0 (tdk suka)

else printf("1\n");

//jika tanda b sm dengan 0, print 1 (note disukai)

}




63. Jumlah Pangkat
Penjelasan:”kurang tau maksut soalnya, programnya membuat sebuah array dengan bilangan 0 1 5 2 8 3 9 2 8 7 7 8 4 7 3 8 4 1 5 4…dst (dimulai dari 0)”

Input : barisan pertama berupa testcase, baris berikutnya berisi nilai dari array ke-i yang akan di output

Output: nilai dari array precomp

#include<stdio.h>

#include<string.h>

int arr[1000001];

long long N=10;

int exponentiation(long long base,long long exp){ // fungsi exponen

if (exp == 0) return 1; 
if (exp == 1) return base % N; 
long int t = exponentiation(base, exp / 2); 
t = (t * t) % N; 
// if exponent is even value 
if (exp % 2 == 0) return t; 
// if exponent is odd value 
else return ((base % N) * t) % N;
}

void precomp(){ //fungsi simpan dalam array long long i;

arr[0]=0;

for(i=1;i<=1000000;i++){

arr[i]=(arr[i-1]+exponentiation(i,i))%10; //hasil jumlah pangkat

}

}

int main(){

int a,b;

memset(arr,0,sizeof(arr)); //mereset semua nilai arr = 0 precomp(); //menjalankan fungsi precom scanf("%d",&a); //input test case

while(a--){

scanf("%d",&b);//input angka

printf("%d\n",arr[b]); //langsung print arr ke angka

}

}




64. Tunnel of Love
Penjelasan : program tersebut untuk mengecek 4 (a1,a2,b,c) buah bilangan yang diinputkan Bersama dengan 1 (kapal) bilangan dibelakangnya, bila a1+a2+b+c <= kapal print 0. Bila a1+a2 >= kapal print next queue. Bila b > kapal-a1-a2-c print 3. Bila c > kapal-a1-a2-b print 4. Bila (b+c) > kapal-a1-a2 print perfect ride.

Input : 5 buah bilangan

Output : 0 / 3 / 4 / next queue / perfect ride

#include<stdio.h>

int main(){

long long a1,a2,b,c,sum,kapal; scanf("%lld%lld%lld%lld%lld",&a1,&a2,&b,&c,&kapal);

//input berat pasangan a, dan dua penumpang lain serta berat maks pd kapal sum=a1+a2+b+c; //jumlah berat semua penumpang if(sum<=kapal)printf("0\n"); //jika jumlah kurang dari berat kapal else if((a1+a2)>kapal)printf("NEXT QUEUE\n");

//jika berat pasangan melebihi berat kapal

else if((a1+a2)<=kapal){ //jika berat pasangan kurang dari berat kapal if((sum-b)<=kapal||(sum-c)<=kapal){

//jika dikurangi salah satu penumpang selain pasangan if(b>c)printf("3\n");

//jika berat penumpang satu lbh berat dari penumpang kedua else printf("4\n");

//jika berat penumpang kedua lbh berat dari penumpang pertama

}

else printf("PERFECT RIDE\n"); //selain semua syarat

}
return 0;

}




65. Dividing Sweets
Penjelasan : Inout berupa bilangan 1 dan 2 yang merupakan jenis permen. Bila ada permen jenis 1 dan jumlahnya permen 1 genap print 0. Bila ada permen 1 dan jumlahnya ganjil print 1. Bila tidak ada permen 1 dan jumlah permen 2 ganjil print 2. Bila tidak ada permen 1 dan jumlah permen 2 genap print 0.

Input : baris pertama berupa test case. Baris berikutnya jumlah permen tiap testcase. Baris berikutnya barisan bilangan permen

Output : 0 / 1 / 2

#include<stdio.h>

int main(){

int a,b,c,d,i,j,m;

scanf("%d",&a); //input test case

for(i=1;i<=a;i++){

c=0; d=0;

scanf("%d",&b); //input jumlah permen

for(j=0;j<b;j++){

scanf("%d",&m); //input jenis permen if(m==1) c++; //tambah c bila isi permen 1 else if(m==2) d++; //tambah d bila isi permen 2

}

if(c%2==0 && c>0) printf("Case #%d: 0\n",i);

//jika jumlah permen isi 1 di mod 2 = 0 dan jumlah permen isi 1>0 else if(c%2==1&&c>0) printf("Case #%d: 1\n",i);

//jika jumlah permen isi 1 di mod 2 = 1 dan jumlah permen isi 1>0 else if(d%2==1 && c==0) printf("Case #%d: 2\n",i);

//jika jumlah permen isi 2 di mod 2 = 1 dan jumlah permen isi 1=0 else if(d%2==0 && c==0) printf("Case #%d: 0\n",i);

//jika jumlah permen isi 2 di mod 2 = 0 dan jumlah permen isi 1=0

}

}




66. Turnamen Panco
Penjelasan : program untuk mencari bilangan terbesar dan memprint bilangan ke berapakah bilangan terbesar tersebut

Input : baris pertama test case. Baris berikutnya n, sehingga baris berikutnya input barisan bilangan sejumlah 2^n

Output : bilangan ke berapakah yang nilaiya paling besar

#include<stdio.h>

#include<math.h>

int main(){

int a,b,c,d,e,i,j,k;

scanf("%d",&a); //input test case

while(a--){

d=0; e;

scanf("%d",&b); //input jumlah array 2 pangkat b for(i=1;i<=pow(2,b);i++){

scanf("%d",&c); //input data power

if(d<c){ //jika d < c maka ambil nilai i nya d=c;

e=i;

}

}

printf("%d\n",e); //print nilai i

}

}




67. Play, play, play!
Penjelasan : program untuk menghitung menghitung bilangan. Pertama tama input arisan bilangan. Kemudian sort, algoritma sort nya adalah dengan membagi dua barisan tersebut, kemudian dicek awal dan akhir, apabila tidak sesuai (kecil ke besar) maka ditukar sampai bertemu di tengah baris bilangan, kemudian barisan tersebut dibagi 2, depan dan belakang, setelah itu sort lagi dari awal sampai tengah dan dari tengah sampai akhir, lanjut cek awal dan akhir dari tiap bagian, kemudian barisan depan dan belakang masing masing dibagi 2 lagi dan seterusnya setlah di sort jumlahkan seluruh bilangan digit ganjil, juga jumlahkan seluruh bilangan digit genap. Kemudian selisihkan.

Input : baris pertama jumlah barisan bilangan, baris berikutnya barisan bilangna, 

Output : baris berikutnya selisih bilnagan digit genap dan bilangan digit ganjil

#include<stdio.h>

void sort(int arr[],int left,int right){ //fungsi sorting int i=left,j=right,data=(arr[right]+arr[left])/2; while(i<=j){

while(arr[i]<data)i++;

while(arr[j]>data)j--;

if(i<=j){

int temp=arr[i];

arr[i]=arr[j];

arr[j]=temp;

i++,j--;

}

}

if(left<j) sort(arr,left,j);

if(i<right) sort(arr,i,right);

}


int main(){

int a,b,c,d;

int i,j,k,x[1000],m,n;

scanf("%d",&a); //input test case

for(i=0;i<a;i++){

scanf("%d",&x[i]); //input data array score

}

m=0; n=0;

sort(x,0,a-1); //sort data array score

for(j=0;j<a;j+=2){

n=n+x[j]; //jumlahkan data nomer genap

}

for(k=1;k<a;k+=2){

m=m+x[k]; //jumlahkan data nomer ganjil

}

if(n<m) b=m-n; //jika n<m maka m-n

else b=n-m; //jika n>m maka n-m

printf("%d\n",b); //print selisih

}




68.	CPTTRN1 - Character Patterns (Act 1)
Penjelasan : program yang menghasilakn sebuah segi empat dimana seperti papan catur, selang seling antara symbol * (bintang) dan titik (.)

Input : 2 bilangan dimana merupakan lebar x Panjang

Output : pola bentuk yang ditentukan

#include<stdio.h>

int main(){

int t,l,c,x,i,j,baris,kolom;

scanf("%d",&t); //input tes case

for(x=1;x<=t;x++){

scanf("%d %d",&l,&c); //input baris dan kolom for(i=0;i<l;i++){

for(j=0;j<c;j++){

if((i+j)%2==0)	printf("*");

//jika baris ditambah kolom di mod 2 = 0, print * else printf("."); //selain itu print titik }

printf("\n");

}

}

return 0;

}




69.	CPTTRN2 - Character Patterns (Act 2)
Penjelasan : program untuk membuat pola karakter dimana tepianya berupa bintang dan tengahnya titik. 

Input : 2 bilangan dimana merupakan lebar x Panjang

Output : pola bentuk yang ditentukan

#include<stdio.h>

int main(){

int t,l,c,x,i,j,m,n;

scanf("%d",&t); //input test case

for(x=1;x<=t;x++){

scanf("%d %d",&l,&c); //input baris dan kolom for(i=0;i<l;i++){

for(j=0;j<c;j++){

if(i==0||j==0||i==l-1||j==c-1) printf("*");

//Jika diujung-ujung baris dan kolom print *

else printf("."); //selain itu print .

}

printf("\n"); //enter setiap baris

}

}

return 0;

}




70.	CPTTRN3 - Character Patterns (Act 3)
Penjelasan : program untuk membuat pola karakter dimana tiap satuan bilangan melambangkan sebuah petak dengan tepianya berupa bintang dan tengahnya titik.

Input : 2 bilangan dimana merupakan lebar x Panjang

Output : pola bentuk yang ditentukan

#include<stdio.h>

int main(){

int t,l,c,x,i,j,m,n,a,b;

scanf("%d",&t); //input testcase

for(x=1;x<=t;x++){

scanf("%d %d",&l,&c); //input panjang baris dan kolom a=(l*3)+1; //panjang baris dikalikan 3 ditambah 1 b=(c*3)+1; //panjang kolom dikalikan 3 ditambah 1 for(i=0;i<a;i++){

for(j=0;j<b;j++){

if(i==0||j==0||i==a-1||j==b-1)printf("*");

//jika diujung” baris dan kolom diberi *

else if(i%3==0||j%3==0)	printf("*");

//jika baris atau kolom ke tiga print *

else printf("."); //selain itu print . 
} 
printf("\n"); //print enter tiap baris 
} 
printf("\n"); 
} 
return 0; 
}
 
