#include <stdio.h>
#include <string.h>

int main(){
   char morse[26][6] = {
{".-"},
{"-..."},
{"-.-."},
{"-.."},
{"."},
{"..-."},
{"--."},
{"...."},
{".."},
{".---"},
{"-.-"},
{".-.."},
{"--"},
{"-."},
{"---"},
{".--."},
{"--.-"},
{".-."},
{"..."},
{"-"},
{"..-"},
{"...-"},
{".--"},
{"-..-"},
{"-.--"},
{"--.."},
{".----"},
{"..---"},
{"...--"},
{"....-"},
{"....."},
{"-...."},
{"--..."},
{"---.."},
{"----."},
{"-----"},
};
   char word[100];
   char curr[7]={0};
   scanf("%[^\n]s",word);

   for(int i = 0;i < strlen(word);i++){
      if(word[i] != ' '){
         strncat(curr,&word[i],1);
      }
      if(word[i] == ' ' || i+1 == strlen(word)){
         for(int j = 0;j < 26;j++){
            if(strcmp(curr,morse[j]) == 0){
               printf("%c",j+97);
               memset(curr,0,7);
            }
         }
      }
   }      
   return 0;
}