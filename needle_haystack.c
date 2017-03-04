#include <printf.h>
#include <string.h>

char *strstr(const char *, const char *);

void printHaystack(const char *haystack);

/**
 * strstr attempts to find the 'needle' in the 'haystack' and returns
 * a pointer to the beginning of where the needle appears
 */
int main() {
    const char *haystack = "This is a sentence";
    const char *needle = "sent";

    printHaystack(haystack);
    char *pos = strstr(haystack, needle);

    if (pos != NULL)
        printf("[%p] %c\n", (void *) pos, *pos);
    else
        printf("Can't find the string.\n");

    return 0;
}

void printHaystack(const char *haystack) {
    for (int i = 0; i < strlen(haystack); i++) {
        printf("[%p] %c\n", (void *) haystack + i, haystack[i]);
    }
    printf("\n");
}

char *strstr(const char *haystack, const char *needle) {
    if (haystack == NULL || needle == NULL) {
        return NULL;
    }

    int f = 0;
    char *begin;
    for (int i = 0; i < strlen(haystack); i++) {
        begin = (char *) (haystack + i);
        for (int j = 0; j < strlen(needle); j++) {
            if (haystack[i + j] == needle[j]) {
                f = 1;
            } else {
                f = 0;
                break;
            }
        }

        if (f == 1) { return begin; }
    }

    return NULL;
}