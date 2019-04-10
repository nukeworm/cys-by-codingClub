/* 
   Find if atleast N numbers that overlap in given two set of ranges in an array of 5 elements.
   Example: a[5]={10,20,4,14,4};
   Here in the range 10 to 20 and 4 to 14, total of 5 numbers overlap i.e, {10,11,12,13,14}
   Atleast 4 numbers should overlap according to the value given in a[4].
*/

#include<stdio.h>
int main(){
	int a[5],c=0;
	for(int i=0;i<5;i++)
	    scanf("%d",&a[i]);
	int min=a[0]<a[2]?a[0]:a[2];//minimum of both initial values.
	int max=a[1]<a[3]?a[1]:a[3];//maximum of both final values.
	
	for(int i=min;i<=max;i++){
		
		//check if the number lies in both the ranges.
		if((i>=a[0]&&i<=a[1])&&(i>=a[2]&&i<=a[3]))
		    c++;
	}
	
	//check if atlest a[4] elements overlap in the given ranges.

	if(c>=a[4])
	printf("True: %d",c);
	else
	printf("False: %d",c);
}
