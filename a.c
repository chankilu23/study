#include <stdio.h>

char judge(int a){
  if(a<0)
    return "負";
  if(a==0)
    return "0";
  if(a>0)
    return "正";
}



int main(void){

  printf("2は%c\n",judge(2));

  return ;
}
