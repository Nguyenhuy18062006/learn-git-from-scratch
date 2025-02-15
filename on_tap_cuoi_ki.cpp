#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
    //Nhap mot N nguyên duong
	int N;
	do{printf("Nhap mot N nguyen duong:");
	scanf("%d",&N);
	}
	while(N<=0);
//	Hien thi ra màn hình các so nguyên duong tu 1 den N
	for(int i=1;i<=N;i++){
		printf("%d ",i);
	}printf("\n");
//Hien thi ra màn hình các so nguyên duong tu N den 1
	for(int i=N;i>=1;i--){
		printf("%d ",i);
	}
//Hien thi ra màn hình các so nguyên duong le tu 1 den N
	printf("\nCac so nguyen duong le tu 1 den N: ");
	for(int i=1;i<=N;i++){
	if(i%2!=0){printf("%d ",i);}
	}
//Hien thi ra màn hình các so nguyên duong chan tu 1 den N
	printf("\nCac so nguyen duong chan tu 1 den N: ");
	for(int i=1;i<=N;i++){
	if(i%2==0){printf("%d ",i);}
	}
//Hien thi ra màn hình các so nguyên âm le tu -1 den –N
	printf("\nCac so nguyen duong le tu -1 den -N: ");
	for(int i=-1;i>=-N;i--){
	if(i%2!=0){printf("%d ",i);}
	}
//Hien thi ra màn hình các so nguyên âm chan tu -1 den –N
	printf("\nCac so nguyen duong chan tu -1 den -N: ");
	for(int i=-1;i>=-N;i--){
	if(i%2==0){printf("%d ",i);}
	}
//Hien thi ra màn hình các so chia het cho 3 trong khoang tu -N den N
	printf("\ncac so chia het cho 3 trong khoang tu -N den N: ");
	for(int i=-N;i<=N;i++){
	if(i%3==0){printf("%d ",i);}}
//Tinh trung binh cong các so le tu 1 den N
	int tong=0,dem=0;
	for(int i=1;i<=N;i++){
		if(i%2!=0)
			{tong=tong+i;
			dem++;}
		}
	if(dem!=0){printf("\nTinh trung binh cong cac so le tu 1 den N: %d",tong/dem);
}
	else{printf("\nkhong co cac so le trong day");}
//Tinh trung binh cong cac so chan tu 1 den N
		int tong_chan=0; 
		int dem_chan=0;
	for(int i=1;i<=N;i++){
		if(i%2==0)
			{tong_chan=tong_chan+i;
			dem_chan++;}
		}
	if(dem_chan!=0){printf("\nTinh trung binh cong cac so chan tu 1 den N: %d",tong_chan/dem_chan);
}
	else{printf("\nkhong co cac so chan trong day");}
//Hien thi các so nguyên to <=N
	printf("\ncac so nguyen to là: ");
    for(int i=2;i<=N;i++){
        int dem=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                dem++;
                }
            }
        if(dem==2){
        printf("%d ",i);
        }
    }
// Hien thi cac so chinh phuong <=N
printf("\nCac so chinh phuong <= N la: ");
    for (int i = 0; i * i <= N; i++) {
        printf("%d ",i*i);
    }
//Kiem tra so N có phai so hoan hao hay khong? (So hoàn hao là so có tong cac uoc duong
//nho hon no bang chinh no, vi du 6=3+2+1; 28=14+7+4+2+1). Neu N là so hoan hao thi
int sum =0;
for (int i=1;i<N;i++){
	if (N%i==0){
		sum+=i; }
	}
	if( sum ==N){
		printf("\nSo %d la so hoan hao.",N);
	}
	else{
		printf("\nSo %d khong phai la so hoan hao.",N);
	}
//- Hien thi day so fibonaci gom N phan tu ( dãy Fibonaci có F 1 =1, F 2 =1, F N =F N-1 +F N-2 ).
printf("\nHien thi day so fibonaci gom N phan tu: ");
printf("0 ");            // binh thuong minh cho chay tu i=1 nhung ma vi day f bat dau tu 0 nen minh se no no chay tu 2
    long long fn1= 1, fn2= 0, fn; //long long là 1 kieu du lieu cua int danh cho cac so nguyen qua lon
        for(int i=2;i<=N;i++){        //Fibonacci là 1 so rat lon de them i<92 de ko bi no may :)))
            fn=fn1+fn2;                    // no so se tinh 2 so trc cong lai
            printf("%lld ",fn);            // roi in ra
            fn1=fn2;                    // sau do so thu 2 se thanh so thu nhat
            fn2=fn;                        // so thu 2 se thanh so sau khi da cong
          }                            //1. fn=1+0=1 / 2.fn=0+1 /3.fn=1+1 /4.fn=1+2/.....
//Tinh,hien thi gia tri bieu thuc N!!(voi N le thi N!!=1*3*5...*N; voi N chan thi N!!=2*4*6..*N)
printf("\nGia tri cua bieu thuc N!! la:");
int bien_1=1,bien_2=1,check_1=0;
if(N%2==0){
	for(int i=2;i<=N;i++){
		if(i%2==0){
			bien_1=bien_1*i;
			}
		}
		check_1=1;	
	}
if(N%2!=0){
	for(int i=1;i<=N;i++){
		if(i%2!=0){
			bien_2=bien_2*i;
		}
	}
}
if(check_1==0){
	printf("%d",bien_2);
	}
else{
	printf("%d",bien_1);
	}
//tinh gia tri bieu thuc A=1/1!+1/2!+1/3!+...+1/N! (voi K!=1*2*3*...*k)
float A=0;
for(int i=1;i<=N;i++){
	float bien_3=1;
	for(int j=1;j<=i;j++){
	bien_3=bien_3*j;
	}
	A=A+1/bien_3;
	}
printf("\nGia tri cua bieu thuc A la:");
printf("%.2f",A);
//tinh gia tri bieu thuc A1
float A1=0;
for(int i=1;i<=N;i++){
	A1=A1+1/pow(i,i);
	}
printf("\nGia tri cua bieu thuc A1 la:");
printf("%.2f",A1);
//Tinh gia tri bieu thuc A2
int x;
float A2=1;
printf("\nNhap vao gia tri x=");
scanf("%d",&x);
for(int i=1;i<=N;i++){
	float bien_4=1;
	for(int j=1;j<=i;j++){
		bien_4=bien_4*j;
		}
	A2=A2+pow(x,i)/bien_4;
	}
printf("\nGia tri cua bieu thuc A2 la:");
printf("%f",A2);
//Tinh gia tri bieu thuc A3
float A3=0;
for(int i=1;i<=N;i++){
	float bien_5=1;
	for(float j=1;j<=2*i+1;j++){
		bien_5=bien_5*j;
		}
	A3=A3+pow(-1,i)*pow(x,2*i+1)/bien_5;
	}
printf("\n Gia tri cua A3 la:");
printf("%f",A3);
//Tinh bieu thuc A4
float A4=1;
for(int i=1;i<=N;i++){
	A4=A4+pow(x,i);
	}
printf("\nGia tri bieu thuc A4 la: %f",A4);
// Hien thi nua tam giac Pascal N
for(int i=1;i<=N;i++){
	printf("\n");
	for(int j=1;j<=i;j++){
		printf("%d ",j);
		}
	}
//Hien thi nua tam giac Pascal N
for(int i=1;i<=N;i++){
	printf("\n");
	for(int j=N;j>=i;j--){
		printf(" ");
		}
	for(int g=1;g<=i;g++){
		printf("%d",g);
		}
	}
//Hien thi tam giac pascal co chieu cao N
for(int i=1;i<=N;i++){
	printf("\n");
	for(int j=N;j>=i;j--){
		printf(" ");
		}
	for(int g=1;g<=i;g++){
		printf("%d",g);
		}
	for(int f=i-1;f>=1;f--){
		printf("%d",f);
		}
	}
//Tim gia tri cua bieu thuc B
float B=0;
printf("\nGia tri cua bieu thuc B la:");
for(int i=1;i<=N;i++){
	float bien_6=1;
	for(int j=1;j<=2*N;j++){
		bien_6=bien_6*j;
		}
	B=B+pow(-1,i)*pow(x,2*i)/bien_6;
	}
printf("%.2f",B);
//tinh gia tri cua bieu thuc A5
float A5=1;
for(int i=1;i<=N;i++){
	A5=A5*1/pow(2,i);
	}
printf("\nGia tri bieu thuc A5 la: %.2f",A5);
//Tinh gia tri bieu thuc B1 la
float B1=1;
for(int i=1;i<=N;i++){
	float bien_7=1;
	for(int j=1;j<=i;j++){
		bien_7=bien_7*j;
		}
	B1=B1+pow(-1,i-1)*1/bien_7;
	}
printf("\nGia tri cua bieu thuc B1 la: %.2f",B);
//Tinh gia tri cua bieu thuc C
float C=1;
for(int i=1;i<=N;i++){
	C=C+pow(-1,i-1)*1/pow(i,i);
	}
printf("\nGia tri cua bieu thuc C la: %.2f",C);
//Tinh gia tri cua S1
float S1=1;
for(int i=1;i<=N;i++){
	S1=sqrt(3+S1);
	}
printf("\nGia tri cua S1 la: %.2f",S1);
//Tinh gia tri cua bieu thuc X
float S2=1;
for(int i=1;i<=N;i++){
	float bien_9=1;
	for(int j=1;j<=i;j++){
		bien_9=bien_9*j;
		}
	S2=S2+pow(-1,i-1)*pow(x,i)/bien_9;
	}
printf("\nGia tri cua bieu thuc S2 la: %.2f",S2);
//Tinh gia tri cua bieu thuc S3 voi N dau chia
float S3=1;
for(int i=1;i<=N;i++){
	float bien_10=1;
	for(int j=1;j<=i;j++){
		bien_10=bien_10+1/2;
		}
	S3=1/(2+bien_10);
	}
printf("\nGia tri cua bieu thuc S3 la:%.2f",S3);
//Tinh gia tri cua bieu thuc S
float S4=0;
for (int i = 0; i < N; i++) {
    S4 = 1.0 / (2.0 + S4);}
printf("\nGia tri bieu thuc S4 la:%.2f",S4);
//tinh gia tri cua bieu thuc B2
float e=exp(1);
float B2=1;
for(int i=1;i<=N;i++){
	B2=B2+pow(e,i*x)/pow(x,i);
	}
printf("\nGia tri cua bieu thuc B2 la: %.2f",B2);
printf("\n%f",e);
//Nhap mot M nguyên duong
	int M;
	do{printf("\nNhap mot M nguyen duong:");
	scanf("%d",&M);
	}
	while(M<=0);
if(N>=M){
	printf("\nGia tri cua M: %d nho hon N: %d",M,N);
	}
else{
	printf("\nGia tri cua N: %d nho hon M: %d",N,M);
}
printf("\nCac gia tri le nam giua M,N la:");
for(int i=M;i<=N;i++){	
	if(i%2!=0){
		printf("%d",i);
		}
	}
}