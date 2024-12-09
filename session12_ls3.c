#include<stdio.h> 
int calculateFactorial(int n){
	int result=1; 
	for(int i=1;i<=n;i++){
		result=result*i; 
	}
	return result; 
}
int main(){
	int n;
	printf("Moi ban nhap so nguyen: ");
	scanf("%d",&n);
	calculateFactorial(n);
	printf("gia thua cua %d la %d",n,calculateFactorial(n));
	
	return 0; 
}
