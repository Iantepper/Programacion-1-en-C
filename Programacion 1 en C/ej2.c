#include<stdio.h>
int main() {


 int a = 1, b = 3;
 int c, *pa, *pb;

 pa = &a;
 *pa = 2 * a;
 pb = &b;

 c = 3 * (*pb - *pa);
 printf("a=%d, b=%d, c=%d, *pa=%d, *pb=%d\n", a, b, c, *pa, *pb);
 return 0;

}
