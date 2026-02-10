#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j;
    
    printf("Enter a string: ");
    scanf("%s", str);

    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not a palindrome\n");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome\n");
    return 0;
}
