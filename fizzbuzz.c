#include <stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
inline int scan(){register int n=0,c=gc();while(c<'0'||c>'9')c=gc();while(c<='9'&&c>='0')n=(n<<1)+(n<<3)+c-'0',c=gc();return n;} 
int printFB(int n){
 int i,j;
 for(i=1;i<=n;i++){
  if(i%3==0 && i%5==0)printf("FizzBuzz\n");
  else if(i%3==0)printf("Fizz\n");
  else if(i%5==0)printf("Buzz\n");
  else printf("%d\n",i);
  }
}
int main(void) {
 int t,n;
 t=scan();
   while(t--){
   n=scan();
   printFB(n);
   }
 return 0;
}