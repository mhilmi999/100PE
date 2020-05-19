11. Array
Penjelasan:
intinya itu menginput array sebanyak End of File (tekan Ctrl+z (lambang nya ^Z disana)) kalau merasa sudah selesai input
lalu mencetaknya secara terbalik dari indeks terakhir ke pertama
Input :
Memasukkan array sampai EOF
Output :
Print array yang sudah diinput
Source :
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int x[25001];
int main(){
int i=0;
while (scanf("%d",&x[i])!=EOF){ //diulang sampai EOF i++; //scanf array ke i
}
while (i--){
printf("%d\n",x[i]); //print array
}
return 0;
}



12. Modus Terbesar
Penjelasan :
mencari data terbesar yang sering keluar dari array inputan
buat array untuk menyimpan kemunculan suatu angka. Misal input nya 5, maka array indeks 5 ditambah 1
semisal array yang kita buat tadi isinya lebih besar dari nilai max awal kita, maka swap nilai nya. Dan seterusnya sampai array indeks terakhir
cetak nilai max itu
Input :
1. Memasukkan jumlah data yang akan diinput
2. Memasukkan angka yang akan dicari modusnya
Output :
data terbesar yang sering keluar dari array inputan
Source :
#include <stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
int arr[1001];
int a,n=0,m,modus=0,x,y,b;
scanf("%d",&m); //input angka for(a=0;a<1001;a++)arr[a]=0;
for(b=0;b<m;b++){
scanf("%d",&n); //input angka yg yg akan dicari modusnya
arr[n]++; }
int jMax=0,yMax=0; for(x=0;x<1001;x++){
if(arr[x]>=jMax){
jMax=arr[x]; //cara menentukan modus modus=x;
}
}
printf("%d\n",modus); return 0;
}



13. Matriks
Penjelasan :
Soal meminta kita untuk menginput matriks lalu memutar matriks n x m itu sebesar 90 derajat searah jarum jam. Solusi yang saya dapatkan adalah mencetak indeks matriks dari kolom pertama , baris terakhir hingga baris pertama ; kolom kedua, baris terakhir hingga baris pertama ; dan seterusnya.
Input :
1. Memasukkan ordo matriks
2. Memasukkan isi matriks
Output :
Mencetak hasil transpose matriks
Source :
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main () {
int i, j, t,s;
scanf("%d %d", &t,&s); //input ordo matriks
int mabok[t][s];
for (i=0;i<t;i++){
for(j=0;j<s;j++){
scanf("%d",&mabok[i][j]); //input matriks
}
}
for (i=0;i<s;i++){
for(j=0;j<t;j++){
if(j<t-1){
printf("%d ",mabok[t-j-1][i]); //print transpose matriks }
else
printf("%d",mabok[t-j-1][i]);
}
printf("\n"); }
}



14. Perkalian matriks
Penjelasan :
Saya menggunakan nested loop agar bisa mengakses baris 1 matriks pertama dan kolom 1 matriks kedua untuk melakukan pengalian yang nantinya akan dijumlahkan untuk menjadi nilai baris 1 dan kolom 1 di matriks ketiga. Lalu akses baris 1 matriks pertama dan kolom 2 matriks kedua, untuk mengulang cara yang sama.
Input :
1. input matriks pertama nxm
2. input matriks kedua mxp
buat for looping nxp. Buat for loop lagi didalamnya sebesar m simpan hasil perkalian matriks 1 dan 2(baris dan kolom lihat source code atau penjelasan soal diatas) ke matriks 3
Output :
Mencetak hasil perkalian matriks
Source :
#include<stdio.h>
//Author : Evelyn Tjitrodjojo
int main () {
int i,j,k,n,u,v,m,p,q,r,s,t;
scanf("%d %d", &m, &n); //input ordo 1
int x[m][n];
for (i=0;i<m;i++){
for(j=0;j<n;j++){
scanf("%d",&x[i][j]); //input matriks 1
}
}
scanf("%d %d", &p, &q); //input ordo matriks kedua int y[p][q];
for (i=0;i<p;i++){
for(j=0;j<q;j++){
scanf("%d",&y[i][j]); //input matriks kedua
}
}
int z[m][q];
for (i=0;i<m;i++){ //fungsi perkalian matriks for(j=0;j<q;j++){
z[i][j]=0;
for(k=0;k<p;k++){
z[i][j]+= x[i][k]*y[k][j];
}
}
}
for (i=0;i<m;i++){
for(j=0;j<q;j++){
printf("%d",z[i][j]); //print matriks yg dikalikan if(j<q-1){
printf(" "); //print spasi tiap angka
}
else printf("\n"); //print enter tiap ganti baris
}
}
return 0;
}


15. Membalik bilangan
Penjelasan  :
membalik suatu bilangan, tapi jangan sampai leading zero (angka 0 didepan itu ga boleh)
Input :
1. Memasukkan jumlah test case
2. Memasukkan angka yang akan dibalik
Output :
Hasil angka yang sudah dibalik
Source :
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
int T,N,a,b;
scanf("%d",&T); //input testcase
while (T--){
scanf("%d",&N); //input angka
if (N==0) printf("%d\n",N); //jika 0 lgs print
else {while (N%10==0){
//untuk menghilangkan 0 diblkg angka sblm dibalik N=N/10; //angka dibagi 10
}
while (N>0){ //dibalik semua bilangannya hingga >0 b=N%10; //di modulo utk mengetahui angka belakangnya N=N/10; //dibagi sepuluh
printf("%d",b); //diprint
}
printf("\n");
}
}
return 0;
}



16. Operasi string
Penjelasan :
inti dari soalnya itu, ada 4 string inputan (sebut aja s1,s2,s3,s4). Cari di s1 apakah ada s2 didalamnya. Jika ada, hapus s2 didalam s1. Cek s3 di s1. Lalu tambahkan s4 setelah s3 pada s1
Input :
1. Memasukkan 4 buah string
Output :
Mencetak string kata akhir yang diminta
Source :
#include<stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo
int main(){
char s1[1001],s2[1001],s3[1001],s4[1001];
int i,j,start,en,tambah,m;
scanf("%s",s1); //input kata utama
scanf("%s",s2); //input kata kedua
scanf("%s",s3); //input kata ketiga
scanf("%s",s4); //input kata ketiga for(i=0;i<=strlen(s1)-strlen(s2);i++){
//fungsi untuk mengetahui kata pertama yg sama dengan kata kedua int sama=1;
for(j=0;j<strlen(s2);j++){
if(s1[i+j]!=s2[j]){
sama=0;
}
}
if(sama){
start=i;
en=i+strlen(s2)-1;
break;
}
}
for(i=0;i<=strlen(s1)-strlen(s3);i++){
//fungsi untuk menambah kata ketiga ke kata pertama int sama=1;
if(i>=start && i<=en) continue; for(j=0;j<strlen(s3);j++){ while((i+j)>=start&&(i+j)<=en) i++; if(s1[i+j]!=s3[j]){
sama=0;
break;
}
}
if(sama){ tambah=i+strlen(s3)-1; break;
}
}
for(i=0;i<strlen(s1);i++){
//fungsi print kata akhir yg diminta if(i>=start && i<=en){
continue;
}
printf("%c",s1[i]);
if(i==tambah){
printf("%s",s4);
}
}
printf("\n");

return 0; }



17. Reverse
Penjelasan :
Menulis ulang kalimat/string dari belakang
Input :
input string (array of char)
Output :
Cetak dari indeks paling belakang ke depan
Source :
#include <stdio.h>
#include <string.h>
//author : Evelyn Tjitrodjojo int main()
{
int n,t;
char arr[1100]; gets(arr); //input kata
n= strlen(arr);
for(t=n-1;t>=0;t--)
printf("%c", arr[t]); //print dr blkg printf("\n");
}



18. Bilangan agak prima
Penjelasan :
Kalau bilangan prima punya max. 2 faktor pembagi, kalau agak prima, punya max. 4 faktor pembagi
Input :
1. Memasukkan jumlah test case
2. Memasukkan angka yang akan dicek
Output :
Hasil pengecekan berupa Ya/Tidak
Source :
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
int n,i,a,b,c;
scanf("%d",&n); //input test case
while(n--){
scanf("%d",&i); //input angka
a=0;
b=2;
while (b<i){ //while sampai b< inputan
if(i%b==0){ //jika input di modulo b = 0
c=1; //penanda bisa di modulo
a++; //flag
}
if(a>2) break; //jika angka bisa di mod lbh dr dua kali dibreak b++;
}
if(c==1&&a>2) printf("TIDAK\n");
//jika angka dpt di mod lbh dr dua kali print tidak
else printf("YA\n");
}
}



19. Bilangan Prima
Penjelasan :
Mengecek bilangan prima sampai EOF
Input :
Input angka yang akan dicek bilangan prima atau tidak
Output :
Hasil pengecekan berupa Ya/Tidak
Source :
#include<stdio.h>
#include<math.h>
//author : Evelyn Tjitrodjojo
int main(){
int T,N,a,b,c;
while (scanf("%d",&N)!=EOF){ //input sampai EOF
c=1;
if (N>0){ //jika angka lbh dr 0
for(b=2;b<=sqrt(N);b++){ //fungsi mencari bil prima
c=N%b;
if(c==0){
//jika bs dimod dgn angka sampai akar angka tersebut, di break artinya bkn prima break;
}
}
if(c==0||N==1){
printf("TIDAK\n");
}
else if(c!=0||N!=1){
printf("YA\n");
}
}
else printf("TIDAK\n");} return 0;
}



20. Dua Pangkat
Penjelasan :
Ngecek suatu bilangan itu dua pangkat apa tidak
Input :
Input angka yang akan dicek sampai EOF
Output :
Mencetak hasil berupa True/False
Source :
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
int N;
while(scanf("%d",&N)!=EOF){ //input sampai EOF while(N%2==0){ //perulangan angka dibagi 2 N=N/2;
}
if(N==1){ //jika hasilnya satu berarti dua pangkat printf("TRUE\n");
}
else
printf("FALSE\n");
return 0;
}
}
