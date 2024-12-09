#include<stdio.h> 
#include<math.h> 
int testNumber(int a){
if(a<=1){
	return 0; 
} 
for(int i=2;i<=sqrt(a);i++){
	if(a%i==0){
		return 0; 
	}
}
	return 1; 
}
int main(){
	int num1,num2; 
	printf("Moi nhap so thu nhat: ");
	scanf("%d",&num1); 
	printf("Moi nhap so thu hai: ");
	scanf("%d",&num2); 
	testNumber(num1);
	if(testNumber(num1)){
		printf("la so nguyen to\n");
	}else{
		printf("khong phai la so nguyen to \n");
	} 
	testNumber(num2);
	if(testNumber(num2)){
		printf("la so nguyen to\n");
	}else{
		printf("khong phai la so nguyen to \n");
	} 
	return 0; 
}
