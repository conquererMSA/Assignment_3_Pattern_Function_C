// #include<stdio.h>
// #include<string.h>
// int is_palindrome(char * givenStr){
// int i=0, j=strlen(givenStr)-1;
//     int palindrome=1;
//     while(i<j){
//         if(givenStr[i]==givenStr[j]){
//             i++;
//             j--;
//         }else{
//           palindrome=0;
//           break;
//         }
//     }
//     return palindrome;
// }
// int main(){
//     char givenStr[1000];
//     scanf("%s",&givenStr);
//     int palindrome=is_palindrome(givenStr);
//   if(palindrome==1){
//     printf("Palindrome");
//   }else{
//     printf("Not Palindrome");
//   }
//     return 0;
// }