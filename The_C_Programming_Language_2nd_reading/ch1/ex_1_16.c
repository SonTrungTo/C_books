#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getlinec(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */
int main(int argc, char const *argv[])
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    
    max = 0;
    while ((len = getlinec(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);

    return 0;
}

/* getlinec: return the length of each line. An EOF returns 0 */
int getlinec(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    /* Newline character to be added next-to-last */
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

/* copy: copy an array of characters */
void copy(char to[], char from[]) {
    for (int i = 0; (to[i] = from[i]) != '\0'; i++);
}
