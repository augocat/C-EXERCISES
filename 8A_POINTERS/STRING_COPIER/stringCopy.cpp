//STRING_COPIER
#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src){
  int c = 0;
    int l = strlen(src); //MUST HAVE OUTSIDE OF CONDITION
  while (c <= l) {
    //printf("%i", strlen(src));

    *dst = *src;
    //printf("%c", *src);
    //printf("%c", *dst);
    src++;
    dst++;
    c++;

  }
    *dst = '\0';
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int l = strlen(srcString);
  char dstString[l];
    //printf("%i", l);

  copy(dstString, srcString);
    printf("%s\n", dstString);
  //printf("\n");
}