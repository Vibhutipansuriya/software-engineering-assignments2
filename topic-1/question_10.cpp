//WAP to find area of rectangular prism formula:A=2(wl+hl+hw)

#include<stdio.h>
int main()
{
	int l,h,w,a;
	
	//inputs//
	printf("ENTER THE VALUE OF l:");
	scanf("%d",&l);
	printf("ENTER THE VALUW OF h:");
	scanf("%d",&h);
	printf("ENTER THE VALUE OF w:");
	scanf("%d",&w);
	
	//equation to gain output//
	printf("A:%d",a=2*(l+h+w));
	
	
	return 0;
}
