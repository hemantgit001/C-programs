 #include<stdio.h> 
 int fact(int); 
 void main() 
 { int n,f;
 do 
 { 
 printf("enter the number:"); 
 scanf("%d",&n); 
 f=fact(n); 
 printf("%d\n",f); 
 printf("PRESS ENTER FO DO AGAIN:"); 
 }while(1); 
 return; 
 } 
 int fact(int n) 
 { 
 int f; 
 if(n==1) return(1); 
 else f=n*fact(n-1); 
 return(f); 
 }
