#include<stdio.h>

int add(int a,int b){

   int c=a+b;
   return c;
}

int main(){
   int a=10;
   int b=50,c;

   c=add(a,b);
   printf("val is c=%d\n",c);
   return 0;

}
	
