#include<stdio.h> 
int perfectNumber(int a){
	if(a<=1){
		return 0; 
	}
	int total=0; 
	for(int i=1;i<a;i++){
		if(a%i==0){
			total+=i; 
		}
	}
	return total==a; 
}
int main(){
	int num1,num2; 
	printf("Moi nhap so thu nhat: ");
	scanf("%d",&num1); 
	printf("Moi nhap so thu hai: ");
	scanf("%d",&num2); 
	perfectNumber(num1);
	if(perfectNumber(num1)){
		printf("la so hoan hao \n");
	}else{
		printf("khong phai la hoan hao \n");
	} 
	perfectNumber(num2);
	if(perfectNumber(num2)){
		printf("la so hoan hao \n");
	}else{
		printf("khong phai la so hoan hao  \n");
	} 
	return 0; 
}
