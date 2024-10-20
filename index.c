#include <stdio.h>

int main() {
printf("Printing Ascii value of All characters :\n");
  
  char all_characters[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char lower_chars[]="abcdefghijklmnopqrstuvwxyz";
for(int i =0;i<26;i++){


printf("The ASCII value of %c is %d \n",all_characters[i],all_characters[i]);
  
}
  printf("Now for characters in lower cases : \n");
  for(int i =0;i<26;i++){


  printf("The ASCII value of %c is %d \n",lower_chars[i],lower_chars[i]);

  }
  return 0;
}
