#include <stdio.h>
//variavel global
int y=2;
void func1(int x);
void func2();
//main
int main() {
   printf("\n%d",y); //2
   func1(3);
   printf("\n%d",y); //6
   func2();
   printf("\n%d",y); //7
   func1(5);
   printf("\n%d",y); //10
   
   .
   .
   .
   
   void func1(int x) {
      y=2x;
   }
   
   void func2() {
      y=y+1;
   }
