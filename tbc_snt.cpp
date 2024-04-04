//NHAP MANG GOM N PHAN TU, TINH TRUNG BINH CONG CAC SO NGUYEN TO TRONG MANG
#include <stdio.h>
#include <math.h>
void Nhapmang(int n, int a[]);
void Xuatmang(int n, int a[]);
int KTnguyento(int kt);
float tbc_snt(int n,int a[]);
int main(){
  int n,a[100];
  printf("Nhap n= ");
  scanf("%d",&n);
  Nhapmang(n,a);//Nhap mang
  printf("Mang vua nhap la:\n");
  Xuatmang(n,a);//Xuatmang
  printf("\n");
  printf("Cac so nguyen to trong day la:\n");
  printf("\nTrung binh cong cac so nguyen to trong mang:%.2f",tbc_snt(n,a));//TRUNG BINH CONG SO NGUYEN TO CO TRONG MANG 
  return 0;
}
void Nhapmang(int n, int a[]){
  for( int i = 0; i <=n-1; i++)
  {
    printf("Nhap phan tu thu a[%d]=", i);
    scanf("%d",&a[i]);
  }
}
void Xuatmang(int n, int a[]){
  for (int i = 0; i <= n-1; i++)
     printf("%d\t",a[i]);
}
int KTnguyento(int kt){
 if (kt<=1)
  return 0;
 for ( int i = 2; i < kt/*if i use (kt/2) or sqrt(kt) it will get wrong answer*/; i++){
  if (kt%i==0) return 0;
 }
 return 1;
}
float tbc_snt(int n,int a[]){
  int tong=0;
  float dem=0;
  for (int i = 0; i <=n-1; i++){
    if (KTnguyento(a[i])){//default KTnguyento(a[i])==1
      tong+=a[i];
      dem++;
      printf("%d\t",a[i]);
    }
  }
  return tong/dem;
}
