//arrays
//we have 2 types of array
//1d-array:linear array
//2d-array:
//-----------How to insert an element in the arrray-------
//
//#include <stdio.h>
//int main(){
//	int a[100],size,position,value,i;
//	printf("enter the size");
//	scanf("%d",&size);
//	for(i=0; i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("enter the position");
//	scanf("%d",&position);
//	printf("enter the value");
//	scanf("%d",&value);
//	for(i=size;i>=position-1; i--){
//		a[i+1]=a[i];
//	}
//	a[position-1]=value;
//	printf("Resultant array is: \n");
//	for(i=0; i<=size; i++){
//		printf("%d\n",a[i]);
//	}
//}
//-----------How to delete an element in the arrray-------
//#include <stdio.h>
//int main(){
//	int a[100],size,position,value,i;
//	printf("enter the size");
//	scanf("%d",&size);
//	for(i=0; i<size;i++){
//		scanf("%d",&a[i]);
//	}
//	printf("enter the position");
//	scanf("%d",&position);
//	for(i=position-1;i<size-1; i++){
//		a[i]=a[i+1];
//	}
//	for(i=0; i<size-1; i++){
//		printf("%d\n",a[i]);
//	}
//}

//#include <stdio.h>
//int main(){
//int a[3][3],i,j;
//for(i=0; i<3;i++){
//for (j=0;j<3;j++){
//printf("a[%d][%d]->",i,j);
//scanf("%d",&a[i][j]);}}
//for(i=0;i<3;i++){
//for(j=0;j<3;j++){
//printf("%d",a[i][j]);}
//printf("\n");}
//}

				
	
	
//write a c program to print 1 st diagonal in 2d matrix
#include <stdio.h>
int main(){
int a[3][3],i,j;
for(i=0; i<3;i++){
for (j=0;j<3;j++){
printf("a[%d][%d]->",i,j);
scanf("%d",&a[i][j]);}}
for(i=0;i<3;i++){
for(j=0;j<3;j++){
	if (i==j)
printf("%d",a[i][j]);}
printf("\n");}
}



//
////write a program to print the transpose of a given matrix
//#include <stdio.h>
//int main(){	
//	
//	
//	
//}


