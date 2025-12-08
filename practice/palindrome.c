#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1024];
    printf("Enter a string (max 1023 chars): ");
    // read a line including spaces
    fgets(s, sizeof(s), stdin);
    // If previous scanf left newline, fgets may read empty line; handle that
    if (s[0] == '\n') fgets(s, sizeof(s), stdin);

    // remove trailing newline
    size_t len = strlen(s);
    if (len > 0 && s[len-1] == '\n') s[--len] = '\0';

    // build normalized string: keep alphanumeric, lowercase
    char t[1024];
    int j = 0;
    for (size_t i = 0; i < len; ++i) {
        if (isalnum((unsigned char)s[i])) {
            t[j++] = tolower((unsigned char)s[i]);
        }
    }
    if (j == 0) {
        printf("Empty or no alphanumeric characters to check.\n");
        return 0;
    }
    t[j] = '\0';

    // check palindrome
    int i = 0, k = j - 1;
    int is_pal = 1;
    while (i < k) {
        if (t[i] != t[k]) { is_pal = 0; break; }
        i++; k--;
    }

    if (is_pal)
        printf("The input is a palindrome.\n");
    else
        printf("The input is not a palindrome.\n");

    return 0;
}