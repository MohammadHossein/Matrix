#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void enter(int n,int a[n][n]){
int i,j;
for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
}
void print(int n,int a[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf(" %d ",a[i][j]);
        printf("\n");
    }
}
void swap(int *a,int *b){
int tmp;
tmp=*a;*a=*b;*b=tmp;
}
int my_pow(int a,int b){
int i,tmp=1;
for(i=0;i<b;i++)
    tmp*=a;
return tmp;
}
void remove_ss(int n,int tmp[n][n],int a[n][n],int q){
   int i,j,k=0,h=0;
    for(i=1;i<n;i++){
        for(j=0;j<n;j++){
            if(j==q)
                continue;
            tmp[h][k]=a[i][j];
            k++;
            if(k==n-1)
                h++,k=0;
        }
}
}
int det(int a[100][100], int n){
	int i, sum = 0;
	int b[100][100];
	if (n == 2){
		sum = a[0][0] * a[1][1] - a[0][1] * a[1][0];
		return sum;
	}
	else{
		for (i = 0; i<n; i++){
			remove_ss(n,b,a,i);
			sum += a[0][i] * pow(-1, i)*det(b, (n - 1));
		}
	}
	return sum;
}
int tara(int n,int a[n][n]){
    int i,j;
    for(i=1;i<n;i++)
        for(j=0;j<i;j++)
            swap(&a[i][j],&a[j][i]);
}
void varoon(int n,int a[n][n]){
    int i,j;
    double deta=det(a,n);
    if(deta==0){
        printf("Has not Inversion!!\n");
        return;
    }
     printf("Inverted!\n");
    deta=1/deta;
    for(i=1;i<n;i++)
        for(j=0;j<i;j++){
            a[i][j]=deta*a[i][j];
        }
}
int main()
{
    printf("Dahanet Servis Piram Daroomad ta tamoom shod :(\n");
    Sleep(5000);
    printf("%c",7);
    Sleep(1000);
    Beep(10000,8000);
    while(1){
    int n,p,cccccc=0;
printf("Size of matrix:");
scanf("%d",&n);
    int a[n][n];
    enter(n,a);
    while(1){
    printf("1)Determinate\t2)Transpose\t3)Inversion\t4)Print matrix\t5)Return top\t6)Exit\n");
    scanf("%d",&p);
    switch(p){
    case 1:
        printf("Determinate is:%d\n",det(a,n));
        break;
    case 2:
        printf("Transposed!\n");
        tara(n,a);
        break;
    case 3:
        varoon(n,a);
        break;
    case 4:
        print(n,a);
        break;
    case 5:
        cccccc=1;
        break;
    case 6:
        exit(1);
    }
    if(cccccc==1)
        break;
    }
    }

    return 0;
}
