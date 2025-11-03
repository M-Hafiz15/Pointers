#include<stdio.h>
int MeasureLength(char *p);

int MeasureLength(char *p){
 int length = 0;
 while (*p != '\0')
 {
 length++;
 p++;
 }
 return (length -1);
}

int main (){
 int length = 0;
 char n[100];
 char *p;
 printf("Enter a string = ");
 fgets(n,sizeof(n),stdin);
 p = n;
 printf("Length = %d",MeasureLength(n));
 return 0;
}

