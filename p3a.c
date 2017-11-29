#include<stdio.h>
int main()
{
int n=0,k=0;

while(scanf("%d",&n)!=EOF && n>1){
  
  printf("n:%d ",n);
  k=0;
  while (n>1){  
    k++;
    if (n%2==0) {
      n/=2;
    }else {
      n*=3;
      n++;
    }
  }
  printf("steps:%d\n",k);
}
return 0;
}