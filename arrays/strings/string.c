#include <stdio.h>
#include <string.h>

int main() {

    char name[] = "Koded"; // declare a character array

    char pet[10]; // declare a character array of 9 chars + "\0"

    scanf("%s", pet);

    //  Palindrome String Checker

    char str[100];
    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);

    int isPalindrome = 1;

    for(int i=0; i< len/2; i++) {
        if (str[i] != str[len -i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) printf("Palindrome \n");
    else printf("Not Palindrome \n");


    return 0;
}