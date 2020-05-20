51. Lomba Makan Beregu
Penjelasan:
input testcase
input banyak data dalam array
input isi array. Dipastikan isi nya hanya angka 1,2, dan 3
ada 3 variabel (l,m,n), jika isi array=1 maka l tambah 1,jika isi array=2 maka m tambah 1,jika isi array=3 maka n tambah 1
cari nilai minimum dari l,m,n tadi lalu cetak
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
 int x[100000];
 int a,b,c;
 int i,j,k;
 scanf("%d",&a); //input testcase
 for(i=1;i<=a;i++){
int l=0,m=0,n=0,min=0;
scanf("%d",&b); //input jumlah data array
for(j=0;j<b;j++){
scanf("%d",&x[i]); //input data array
if(x[i]==1) l++; //jika 1 maka flag L bertambah
else if(x[i]==2) m++; //jika 2 maka flag m bertambah
else if(x[i]==3) n++; //jika 3 maka flag n bertambah
}
if(l<=m&&l<=n) min=l; //mencari nilai min dari l,m atau n
else if(m<=l&&m<=n) min=m;
else if(n<=m&&n<=l) min=n;
printf("Kasus #%d: %d\n",i,min); //print test case dan nilai min
} }




52.Rubik's Cube
Penjelasan:
sudah jelas di source code nya
didalam print ada 3 bagian, buat nyetak jumlah kotak atas-bawah, samping-atas- bawah, dan tengah
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
 int a,b,c;
 scanf("%d",&a); //input test case
 while(a--){
scanf("%d",&b); //input angka 
printf("%d\n",(b*b*2)+((b-2)*b*2)+((b-2)*(b-2)*2)); //print jum kotak atas dan bwh + samping-atas-bwh + tengah
} 
}




53.Choosing a Smartphone
Penjelasan:
input angka pertama buat testcase
di tiap case input, berapa program yang ingin diinstal (sebut saja n program) masukkan input sebanyak n program
jumlah semua bobot dari program yang diinstal. Semisal kurang dari 16k, berarti keluar 16GB. Kurang dari 32k, 
berarti keluar 32GB. Kurang dari 64k, berarti keluar 64GB. Kurang dari 128k, berarti keluar 128GB.
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
 int a,b,c,jum;
 int i,j,k;
 scanf("%d",&a); //input test case
 for(i=1;i<=a;i++){
  jum=0;
  scanf("%d",&b); //input berapa inputan harga

while(b--){ //diulang sesuai input brp harga
 scanf("%d",&c); //input harga
 jum=jum+c; //hasil penjumlahan harga test case tsb
}
if(jum<=16000) printf("Case #%d: 16GB\n",i);
//jika kurang dr sama dgn 16 GB maka print 16GB 
  else if(jum<=32000) printf("Case #%d: 32GB\n",i); //jika kurang dr sama dgn 32 GB maka print 32GB 
  else if(jum<=64000) printf("Case #%d: 64GB\n",i); //jika kurang dr sama dgn 64 GB maka print 64GB 
  else if(jum<=128000) printf("Case #%d: 128GB\n",i); //jika kurang dr sama dgn 128 GB maka print 128GB
} 
}




54. Panda's Salary
Penjelasan:
Fungsi pertama diatas itu, fungsi sorting untuk mengurutkan data input buat testcase
ada input 2 angka. Angka pertama panjang jalan, angka kedua buat looping mencari nilai/harganya
input jalan, berupa char 'X' atau '.'
didalam for (i..) kalian lihat, sudah jelas disana dengan comment nya
sorting array y
biat for baru, yang mengulang dari 1 to angka kedua yang kita input tadi
melakukan penghitungan sedemikian rupa (kalian liat di source code) untuk mencari hasil penjumlahan
cetak deh
#include<stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo
void sort(int arr[],int left,int right){ //fungsi sorting
 int i=left,j=right,data=(arr[right]+arr[left])/2;

 while(i<=j){
  while(arr[i]>data)i++;
  while(arr[j]<data)j--;
  if(i<=j){
   int temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   i++,j--;
} }
 if(left<j) sort(arr,left,j);
 if(i<right) sort(arr,i,right);
}
int main(){
int a,b,c,i,j,k,l,m,n;
 char x[10000];
 int y[10000];
 scanf("%d",&a); //input testcase
 while(a--){
  memset(y,0,sizeof(y)); //mengeset array y dengan nilai 0
  scanf("%d %d",&b,&c); //input panjang jalan
  getchar(); //untuk mengambil enter tanpa dibaca char
  for(i=0;i<b;i++){
   scanf("%c",&x[i]); //untuk input char
  }
  getchar();
  j=0;
  for(i=0;i<b;i++){
   if(x[i]=='X'&&x[i+1]=='X'){ //jika X dan stlhnya X maka
    y[j]++; //array y ditambah
   }
   else if(x[i]=='X'&&i==b-1){ //jika X di akhir
    y[j]++; //array y ditambah
   }
   else if(x[i]=='X'&&x[i+1]=='.'){ //jika X kemudian .
    y[j]++; //array y ditambah
    j++; //j juga ditambah untuk melewati titik
}

 }
 sort(y,0,j); //sorting nilai y
 int sum=0;
 l=0;
 for(k=1;k<=c;k++){
  sum=sum+(y[l]*k); //hasil penjumlahan y dikali dgn k
  l++; //tambah nilai l
 }
 printf("%d\n",sum); //print sum
}
}



55.ROKET-1
Penjelasan:
Pada soal ini, kalian belajar menggunakan Big Mod dimana jika jawaban terlalu besar, 
kalian diminta untuk mencetak jawaban kalian dengan dimodulo sesuatu. Solusinya adalah dengan mengimplementasi teori 
yang sudah dijelaskan di soal.
sudah jelas di source code, ada comment nya
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
 long long a,b,c,d,has;
 long long i,j;
 scanf("%lld",&a); //input testcase
 for(i=1;i<=a;i++){
  scanf("%lld %lld",&b,&c); //input angka modex
  has=1;
  for(j=1;j<=b;j++){
d=10%c; //10 mod angka
has=(has*d)%c;
//hasilnya dikalikan hasil 10 mod kemudian di mod kembali
}
printf("Kasus #%lld: %lld\n",i,has%c); //print hasil di mod c 
}
}




56. Dot inside Circle 
Penjelasan:
sudah jelas banget di comment di source code nya
#include<stdio.h>
#include<math.h>
//author : Evelyn Tjitrodjojo
int main(){
 int a,d,x1,y1,x2,y2,m,n,o;
 int i,j;
 scanf("%d",&a); //input test case
 for(i=1;i<=a;i++){
scanf("%d %d %d",&x1,&y1,&d); //input titik pusat dan jari” 
scanf("%d %d",&x2,&y2); //input letak titik 
m=pow((x2-x1),2); //kuadrat dari letak titik dgn titik pusat 
n=pow((y2-y1),2);
o=sqrt(m+n); //akar kuadrat dari penjumlahan kedua titik kuadrat 
if(o>d)printf("Kasus #%d: LUAR\n",i);
//jika lbh dr jari” maka letak titik di luar
else if(o<d)printf("Kasus #%d: DALAM\n",i);
//jika kurang dr jari” maka letak titik di dalam
else if(o==d)printf("Kasus #%d: GARIS\n",i);
//jika letak titik sama dengan jari” maka letak titik di garis
} 
}




57. Squared Points
Penjelasan:
Diberikan N buah titik pada bidang Kartesian (1 ≤ N ≤ 1,000; -1,000 ≤ xi, yi ≤ 1,000), 
tentukan luas persegi terkecil yang melingkupi semua titik yang diberikan.
Cari titik terkiri dan titik terkanan, hitung selisih jarak x mereka (dx). 
Cari titik teratas dan titik terbawah, hitung selisih jarak y mereka (dy). 
Maka sisi persegi terkecil yang diperlukan adalah s = max(dx, dy). Output s2.
inti dari soal nya kek gituu guys...

kurang jelas ? oke
definisikan nilai max min dulu
input testcase
input banyak data (sebut saja b) untuk dimasukkan ke 2 array 1 dimensi loop sebanyak b untuk input isi array
cari nilai x max, x min, y max, y min
selebihnya di source code sudah jelas.
#include<stdio.h>
//author : Evelyn Tjitrodjojo
int main(){
 int a,b,c,d,e;
 int i,j,k,has;
 int x[10000],y[10000];
 int max=-1001,min=1001,max2=-1001,min2=1001;
 scanf("%d",&a); //input testcase
 for(j=1;j<=a;j++){
max=-1001,min=1001,max2=-1001,min2=1001; scanf("%d",&b); //input banyak data dalam array 
  for(i=0;i<b;i++){
scanf("%d %d",&x[i],&y[i]); //input data array 
   if(x[i]>max) max=x[i]; //mencari nilai x max 
   if(x[i]<min) min=x[i]; //mencari nilai x min 
   if(y[i]>max2) max2=y[i]; //mencari nilai y max 
   if(y[i]<min2) min2=y[i]; //mencari nilai y min
  }
  if((max-min)>(max2-min2))
  //jika selisih max dan min array x lbh besar
   has=(max-min)*(max-min);
  //hasil=selisih max dan min sebagai sisi dikali sisi
  else if((max-min)<=(max2-min2))
  //jika selisih max dan min array y lbh besar
   has=(max2-min2)*(max2-min2);
  //hasil=selisih max dan min array y sebagai sisi dikali sisi

printf("Case #%d: %d\n",j,has); //print test case dan hasil
} }




58. Property Wanted
Penjelasan:
Fungsi pertama diatas tuh, fungsi sorting
input banyak angka yang ingin di input
masukkan isi array. Sekalian itung jumlah totalnya
urutkan semua data pake fungsi sort
cari rata-rata nya
melakukan loop untuk mencari data yang paling dekat dengan rata-rata dan jumlah dari array tadi
cetak data tadi
#include<stdio.h>
//author : Evelyn Tjitrodjojo
void sort(long long arr[],long long left,long long right){ //fungsi sorting
 long long i=left,j=right,data=(arr[right]+arr[left])/2;
 while(i<=j){
  while(arr[i]<data)i++;
  while(arr[j]>data)j--;
  if(i<=j){
   long long temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   i++,j--;
} }
 if(left<j) sort(arr,left,j);
 if(i<right) sort(arr,i,right);
}
int main(){
 long long i,j,a,b,c,d;

 long long sum=0;
 long long x[10000];
 scanf("%lld",&a); //input test case
for(i=0;i<a;i++){
  scanf("%lld",&x[i]); //input data array
  sum=sum+x[i]; //jumlah data
}
sort(x,0,a-1); //sort data 
d=sum/a; //mencari rata-rata data 
j=0;
while(x[j]<=d && j<a){
j++;
//jika data kurang dari rata-rata dan tidak melebihi jum array 
}
printf("%lld\n",x[j-1]); //print array ke j-1
}




59. Old Typewritter
Penjelasan:
input testcase
input string
cek huruf pertama, jika huruf kecil kasih flag, jika tidak gausah
for looping dari 1 to panjang string nya
jika flag 0 dan array x huruf kecil, ditmbh 32 menjadi huruf besar. 
jika flag 1 dan array x huruf besar, dikurang 32 menjadi huruf kecil
setiap pindah huruf, flag diubah cetak string yang telah diubah
#include<stdio.h>
#include<string.h>
//author : Evelyn Tjitrodjojo
int main(){
 int a,i,flag,j,lenght;
 char x[10000];
 scanf("%d",&a); //input test case

while(a--){
 scanf("%s",&x); //input string
 lenght=2; //panjang awal string 2 yang dicek
 if(x[0]<97){ //jika huruf kecil di string ke 0
  flag=1; //beri flag
 }
else flag=0; //jika huruf besar flag=0 
for(i=1;i<strlen(x);lenght++){ //perulangan - panjang string x
  for(j=0;j<lenght && i< strlen(x);j++,i++){
if(flag==1 && x[i]<97) x[i] = x[i]+32;
//jika flag 0 dan array x huruf kecil, ditmbh 32 menjadi huruf besar
  if(flag==0 && x[i]>=97) x[i] = x[i]-32;
//jika flag 1 dan array x huruf besar, dikurang 32 menjadi huruf kecil
}
  flag=(flag+1)%2; //setiap pindah huruf, flag diubah
 }
printf("%s\n",x); //print hasil string yg sdh diubah }
}




60. Flood
Penjelasan:
KAYAKnya programnya ini ngecek apakah dari baris pertama dia itu bisa menuju ke baris terakhir. 
Jadi, jalan nya itu tanda titik, sedangkan # itu kayak pagernya. Kayake gitu
Fungsi pertama itu, digunakan untuk backtracking. Backtracking adalah sebuah algoritma secara umum 
digunakan untuk menemukan semua (atau beberapa) solusi terhadap sebuah permasalahan komputasional. 
Biasanya fungsi ini digunakan untuk menelurusi sebuah maze
input test case
input ukuran array of char 2 dimensi
reset array y
masukkan isi dari array of char 2 dimensi buat for looping sebesar array 2 dimensi itu

jika ada ".", lakukan backtracking
semisal bisa menemukan jalan ujung, cetak IYA. Kalau gabisa ya, TIDAK
#include<stdio.h> 
#include<string.h> 
//author : Evelyn Tjitrodjojo 
int y[1000][1000]; 
int benar; 
void path(int l,int m,int b,int c,char x[][1000]){ //fungsi backtracking 
  y[l][m]=1; 
  if(l==0||l==b-1||m==0||m==c-1){ //batas backtracking 
   benar=0; 
   return; 
  } 
  if((x[l][m+1]=='#'||y[l][m+1]==1)&&(x[l-1][m]=='#'||y[l-1][m]==1) &&(x[l][m-1]=='#'||y[l][m-1]==1)&&(x[l+1][m]=='#'||y[l+1][m]==1)){ 
   benar=1; //batas backtracking 
   return; 
  } 
   
  if (m+1<c&&x[l][m+1]!='#'&&y[l][m+1]==0) path(l,m+1,b,c,x); 
  if (l-1<b&&x[l-1][m]!='#'&&y[l-1][m]==0) path(l-1,m,b,c,x); 
  if (m-1<c&&x[l][m-1]!='#'&&y[l][m-1]==0) path(l,m-1,b,c,x); 
  if (l+1<b&&x[l+1][m]!='#'&&y[l+1][m]==0) path(l+1,m,b,c,x); 
 } //rekursif backtracking 
  
int main(){ 
 int a,b,c,l,m; 
 int i,j,k; 
 char x[1000][1000]; 
 scanf("%d",&a); //input testcase 
 for(i=1;i<=a;i++){ 
  scanf("%d %d",&b,&c); //input ordo 
  memset(y,0,sizeof(y)); //set semua nilai array y = 0 
  benar=0; 
  getchar(); //utk mengambil enter 
  for(j=0;j<b;j++){ 
   for(k=0;k<c;k++){ 
    scanf("%c",&x[j][k]); //input matriks char 
   } 
  getchar(); 
  } 
  for(j=0;j<b;j++){ 
   for(k=0;k<c;k++){ 
    if(x[j][k]=='.'&&y[j][k]==0){ //jika terdpt �.� 
     l=j; //mencatat lokasi 
     m=k; 
     path(l,m,b,c,x); //backtracking 
     if(benar==1)break; 
     //jika sdh benar lgs break 
    } 
   } 
   if(benar==1)break; 
  } 
  if(benar==1)printf("Case #%d: YA\n",i); //jika benar print ya 
  else printf("Case #%d: TIDAK\n",i); //jika salah print tidak 
 } 
} 
