#include<stdio.h> 
#include<math.h> 
int main() 
{
	unsigned int a,b,c;
	float CV,S,p; 
	printf("nhap 3 so nguyen duong: ");
	scanf("%u%u%u" ,&a,&b,&c); 
	if (a+b>c && a+c>b && b+c>a)
	{
		printf("la tam giac :");
		 
        CV = a+b+c; 
       	printf("chu vi tam giac = %f" ,CV);
       	p = CV/2; 
    	S = sqrt(p*(p-a)*(p-b)*(p-c));
	    printf("\n dien tich tam giac = %f" ,S);
	}
	else printf("\n khong la tam giac :"); 
	
	return 0; 
}
