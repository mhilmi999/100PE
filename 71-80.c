71. CPTTR4
• Source Code
  • Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal SPOJ yang berjudul CPTTR4 dimana user diberi 5 macam input yang terdiri dari t yaitu banyak test case, dan untuk tiap test case akan diberi l yaitu banyak baris, c banyak kolom, h tinggi persegi, dan w lebar persegi. Nanti untuk tiap test case, user harus mengoutputkan sebuah pola dimana tiap pola itu terdiri dari persegi yang bertumpuk-tumpuk, dimana banyak baris dan banyak kolom berarti berapa banyak persegi yang harus dioutputkan dan persegi tersebut harus memenuhi pola yang diminta SPOJ. Untuk melihat pola tersebut bisa langsung melihat di SPOJ agar lebih jelas.
• Input
t = banyak test case, l = banyak baris, c = banyak kolom, h = tinggi persegi, w = lebar persegi
• Output
Pola yang diminta oleh SPOJ
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 int t,l,c,x,i,j,m,n,a,b,h,w,a1,b1; 
 scanf("%d",&t); //input testcase 
 for(x=1;x<=t;x++){ 
  scanf("%d %d %d %d",&l,&c,&h,&w); 
  //input panjang baris, kolom,tinggi dan lebar persegi 
  a=h+1; //tinggi persegi ditambah 1 
  b=w+1; //lebar persegi ditambah 1 
  a1=(a*l)+1; //panjang baris dikali tinggi ditambah 1 
  b1=(b*c)+1; //panjang kolom dikali lebar ditambah 1 
  for(i=0;i<a1;i++){ 
   for(j=0;j<b1;j++){ 
    if(i==0||j==0||i==a1-1||j==b1-1)printf("*"); 
    //print * diujung-ujung baris dan kolom 
    else if(i%a==0||j%b==0) printf("*"); 
    //print jika dimod a atau b, print * 
    else printf("."); //selain itu peint . 
   } 
   printf("\n"); //print enter untuk baris 
  } 
  printf("\n"); 
 } 
 return 0; 
} 




72. TWINS
• Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal vJudge yang berjudul TWINS dimana user diminta untuk membuat sebuah Menara kembar dengan tinggi yang sama. User akan diberi Menara dengan tinggi bermacam-macam dan diminta untuk menentukan apakah memungkinkan untuk membuat Menara kembar tersebut (contoh

semisal mereka diberi 4 menara dengan tinggi masing-masing 4, 2, 2, dan 3. Maka mereka akan bisa membuat 2 menara dengan tinggi 4 yaitu mengambil Menara tinggi 4 dan satunya 2+2, 3 tidak perlu dipakai)
• Input
t = banyak test case, n = banyak Menara yang diberikan, h tiap n = tinggi Menara tersebut
• Output
Bisa membuat Menara kembar tersebut atau tidak
• Source Code
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
void sort(int arr[],int left,int right){ //fungsi sorting 
 int i=left,j=right,data=(arr[right]+arr[left])/2; 
 while(i<=j){ 
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
 int a,i,b=0,c; 
 scanf("%d",&a); //input brp koin 
 int x[a]; 
 for(i=0;i<a;i++){ 
  scanf("%d",&x[i]); //input angka koin 
  b=b+x[i]; //jumlah kan semua 
 } 
 c=b/2; //dirata-rata 
 sort(x,0,a-1); //sort array data koin 
 int d=0,e=0; 
 for(i=a-1;i>=0;i--){ 
  d++; //flag bertambah 
  e=e+x[i]; //tambahkan terus data koin dari belakang 
  if(e>c)break; //jika jumlah sudah lebih besar dari rata�, dibreak 
 } 
 printf("%d\n",d); //print jumlah flag 
return 0; 
}  
 




73. HIGH CG BOY • Source Code
 • Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal SPOJ yang berjudul HIGH CG BOY dimana user diminta untuk mengoutputkan IPK final dari suatu mahasiswa yang kuliah selama 8 semester. Disini diasumsikan bahwa dari semester ke n sampai ke semester 8, mahasiswa tersebut akan selalu mendapatkan IPK 4. User akan diberikan input tc atau banyak test case, n adalah semester mahasiswa tersebut saat ini, dan untuk tiap n, akan ada nilai IPK mahasiswa tersebut dari 1 sampai ke n.
• Input
t = banyak test case, n = semester mahasiswa tersebut sekarang, x tiap n = nilai mahasiswa tersebut di semester sebelumnya
• Output
IPK final mahasiswa tersebut
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 float a,b,c,d; 
 scanf("%f",&a); //input testcase 
 while(a--){ 
  d=0; 
  scanf("%f %f",&b,&c); //input semester dan ipk 
  if(b>1&&b<=8){ 
  //jika semester lebih besar dari 1 dan kurang dari sama dengan 8 
   d=((c*(b-1))+(4*(8-(b-1))))/8; 
//ipk dikali dengan semester-1 ditambah ipk 4 dikali sisa semester dibagi 8 
  } 
  else if(b==1) d=4; //jika msh semester satu artinya lgs ipk 4 
  printf("%.2f\n",d); //print hasil d 
 } 
}  
 




74. CODER OR NONCODER • Source Code
  • Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal SPOJ yang berjudul CODER OR NONCODER dimana user diminta untuk mengoutputkan persentase kemungkinan seorang mahasiswa untuk bisa menebak (mahasiswa ini punya kemampuan khusus) bahwa seseorang adalah seorang programmer di suatu universitas. User akan diberikan input berupa tc atau test case, x yang mana adalah persentase banyak programmer di dalam universitas tersebut, dan y adalah persentase kemungkinan mahasiswa tersebut bisa menebak dengan benar
• Input
t = banyak test case, x = persentase banyak programmer, y = kemungkinan mahasiswa tersebut bisa menebak dengan benar
• Output
Persentase kemungkinan dia bisa menebak dengan benar semua mahasiswa di universitas tersebut
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 float a,b,c,d,e,f; 
 scanf("%f",&a); //input testcase  
 while(a--){ 
  scanf("%f %f",&b,&c); //input banyak coder non coder 
  d=b*(c/100); //banyak coder dikali persen coder 
  e=(100-b)*((100-c)/100); 
  //banyak non coder dikali persen non coder 
  printf("%.2f%%\n",d+e); //print jumlah persen coder dan non coder 
 } 
}  
 
 





75. MAGNETS
• Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal Codeforces yang berjudul MAGNETS dimana user ditugaskan membantu untuk menentukan berapa banyak grup magnet yang akan terbentuk dari suatu susunan magnet. Cara Menyusun magnet tersebut adalah dengan cara meletakkannya di meja kemudian disambung dengan magnet berikutnya, apabila magnet tersebut saling Tarik-menarik maka magnet tersebut akan menjadi 1 grup, tetapi apabila saling tolak menolak, maka grup sebelumnya akan berhenti disusun dan ditinggal lalu grup berikutnya inilah yang akan dilanjutkan disusun. (pokoknya tinggal cek aja berapa kali magnet tersebut tolak-menolak dan kita akan dapat berapa banyak grup yang terbentuk)
• Input
n = banyak magnet, I tiap n = posisi terakhir magnet tersebut (positif atau negatife)
• Output
Banyak grup yang terbentuk
• Source Code
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 long long i,a,c=0; 
 scanf("%lld",&a); //input test case 
 long long x[a]; 
 for(i=0;i<a;i++){ 
  scanf("%lld",&x[i]); //input angka 
  c++; //flag c bertambah 
  if(x[i]==x[i-1]) c--; //jika ada huruf kembar kurangi flag 
 } 
 printf("%lld\n",c); //print flag 
} 




76. LUCKY DIVISION • Source Code
 • Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal CODEFORCES yang berjudul LUCKY DIVISION dimana user diminta untuk menentukan apakah sebuah angka adalah angka yang “almost lucky” atau hampir beruntung. Apakah angka “almost lucky” itu? Mereka adalah angka yang bisa dibagi tanpa bersisa oleh angka “lucky” atau beruntung. Apakah angka “lucky” itu? Mereka adalah angka yang mengandung 4, 7 atau keduanya. (Seperti 4, 7, 47, 477, dsb)
• Input
X = angka yang akan dicari tahu
• Output
Ya atau tidak
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
int main (){ 
 int a,b=0,i; 
 scanf("%d",&a); //input test case 
 int x[14]={4,7,47,44,74,77,444,447,474,477,744,747,774,777};//angka lucky 
 for(i=0;i<14;i++){ 
  if(a%x[i]==0){ //jika angka dapat dimod=0 salah satu angka lucky 
  b++; //ditandai 
  break; 
  } 
 } 
 if (b>0) printf("YES\n"); //jika dapat di mod, print yes 
 else printf("NO\n"); //selain itu print tidak 
return 0; 
} 




77. WORD CAPITALIZATION • Source Code
• Penjelasan
Program ini adalah program yang dibuat untuk menyelesaikan soal CODEFORCES yang berjudul WORD CAPITALIZATION dimana user diminta untuk memeriksa huruf pertama saja dari sebuah kalimat, dan membuatnya menjadi huruf besar jika dia masih huruf kecil dan tidak diapa-apakan jika sudah berhuruf besar. (Meskipun nanti di tengah kata ada huruf besar, tidak perlu diapa-apakan, huruf pertama saja yang penting)
• Input
X = sebuah kata
• Output
Kapitalisasi kata tersebut
Source Code:
#include<stdio.h> 
#include<string.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 char x[1001]; 
 int i; 
 scanf("%s",&x); //input string 
 if(x[0]=='Q'||x[0]=='W'||x[0]=='E'||x[0]=='R'||x[0]=='T'||x[0]=='Y'||x[0] =='U'||x[0]=='I'||x[0]=='O'||x[0]=='P'||x[0]=='A'||x[0]=='S'||x[0]=='D'||x[0]=='F' ||x[0]=='G'||x[0]=='H'||x[0]=='J'||x[0]=='K'||x[0]=='L'||x[0]=='Z'||x[0]=='X'||x [0]=='C'||x[0]=='V'||x[0]=='B'||x[0]=='N'||x[0]=='M'){ 
 //jika string ke 0 huruf besar 
 printf("%s",x); //langsung print string 
 } 
 else{ 
  printf("%c",(x[i]-32)); 
  //jika huruf kecil, maka dikurang 32,menjadi huruf besar 
  for(i=1;i<strlen(x);i++){ 
   printf("%c",x[i]); //print string stlh diubah 
  } 
 } 
 printf("\n"); //beri enter 
}  




78. QUICKSORT • Source Code
• Penjelasan
Program ini adalah program yang dibuat untuk mengimplementasikan algoritma Quicksort, dimana algoritma ini dibuat untuk mengurutkan data dari terkecil sampai terbesar. Algoritma ini bekerja dengan cara memilih 1 elemen terserah sebagai elemen pivot dan kemudian mengelompokkan elemen yang lain menjadi 2 grup, yaitu lebih kecil atau lebih besar dari elemen pivot tersebut. Lalu di 2 grup ini akan dijalankan Kembali algoritma quicksort secara rekursif sampai akhirnya semua elemen pivot yang terpilih menjadi urut.
• Input
n = banyak angka, x tiap n = angka yang akan diurutkan
• Output
Angka setelah diurutkan
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
void sort(int arr[],int left,int right){ //fungsi sorting 
 int i=left,j=right,data=(arr[right]+arr[left])/2; //data=panjang array/2 
 while(i<=j){ //diulang selama i lebih kecil dr j 
  while(arr[i]<data)i++; //jika array sudah benar, flag ditambah 
  while(arr[j]>data)j--; 
  if(i<=j){ //jika i lebih kecil 
   int temp=arr[i]; 
   arr[i]=arr[j]; //swap 
   arr[j]=temp; 
   i++,j--; 
  } 
 } 
 if(left<j) sort(arr,left,j); //rekursi dari kiri 
 if(i<right) sort(arr,i,right); //rekursi dari kanan 
} 
int main(){ 
 int i,a; 
 int arr[1000]; 
 scanf("%d",&a); //input test case 
 for(i=0;i<a;i++){ 
  scanf("%d",&arr[i]); //input data 
 } 
 sort(arr,0,a-1); //jalankan fungsi sorting 
 for(i=0;i<a;i++){ 
  printf("%d ",arr[i]); //print data setelah disorting 
 } 
 printf("\n"); //enter akhir 
 return 0; 
}




79. COUNTING SORT • Source Code
• Penjelasan
Program ini adalah program yang dibuat untuk mengimplementasikan algoritma Counting Sort, dimana algoritma ini dibuat untuk mengurutkan data dari terkecil sampai terbesar. Algoritma ini bekerja dengan cara menghitung berapa banyak elemen integer yang berbeda dari suatu range integer, kemudian berdasarkan perhitungan ini kita bisa mengetahui posisi dari tiap angka yang tadi kita hitung
• Input
n = banyak angka, x tiap n = angka yang akan diurutkan
• Output
Angka setelah diurutkan
Source Code:
#include<stdio.h> 
#include<string.h> 
//author : Evelyn Tjitrodjojo 
int main(){ 
 int basket[8]; 
 int arr[]={1,2,3,5,6,7,4,3,3,1,3,1,5,1,5,1,4,5}; //isi array 
 memset(basket,0,sizeof(basket)); //mengeset array basket menjadi 0 
 int i; 
 printf("%d %d\n",sizeof(arr),sizeof(int)); //print ukuran array 
 for(i=0;i<(sizeof(arr)/sizeof(int));i++){ 
 //bagi ukuran array dan ukuran integer sebagai batas 
  basket[arr[i]]++; //tambah array basket 
 } 
 for(i=0;i<=7;i++) 
 while(basket[i]--) 
 printf("%d",i); //print data yang sudah disort 
}  
 




80. BUBBLE SWAP • Source Code
• Penjelasan
Program ini adalah program yang dibuat untuk mengimplementasikan Bubble Sort, dimana algoritma ini dibuat untuk mengurutkan data. Algoritma ini bekerja dengan cara membandingkan anggota ke 1 dengan anggota ke 2 dari sebiah array sepanjang n, jika anggota berikutnya lebih besar / kecil (tergantung kemauan) maka dilakukan penukaran. Lalu lanjut ke anggota berikutnya lagi, terus sampai habis. Lalu dilakukan pengulangan lagi dari anggota ke dua, dan seterusnya sampai urut. (sama seperti sorting di harga sepeda Tugas PATP)

• Input
n = banyak angka, x tiap n = angka yang akan diurutkan
• Output
Angka setelah diurutkan
Source Code:
#include<stdio.h> 
//author : Evelyn Tjitrodjojo 
void swap(int*a,int*b){ //fungsi swap 
 int temp=*a; 
 *a=*b; 
 *b=temp; 
} 
int main(){ 
 int i,j,n=4; 
 int arr[4]={1,3,4,2}; //data 
 //sort dari 1-4 
 for(i=0;i<n;i++){ 
  for(j=0;j<n;j++){ 
   if(arr[i]<arr[j]){ //jika ada yang belum urut diswap 
    swap(&arr[i],&arr[j]); 
   } 
  } 
 } 
 for(j=0;j<n;j++) printf("%d",arr[j]); //print data sort dari 1-4 
 printf("\n"); 
  
 //sort dari 4-1 
 for(i=0;i<n;i++){ 
  for(j=0;j<n;j++){ 
   if(arr[i]>arr[j]){ //jika sebelah kanan masih lebih besar 
    swap(&arr[i],&arr[j]); //diswap 
   } 
  } 
 } 
 for(j=0;j<n;j++) printf("%d",arr[j]); //print data hasil sorting 
 printf("\n");//print enter akhir 
}  
 
