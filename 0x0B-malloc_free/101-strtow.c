#include "main.h"
#include <stdlib.h>

void addtoArr(char **, char *);
void makeWord(char **, char *, int, int, int);

/**
 * strtow - splits a string into words.
 * @str: the string
 *
 * Return: returns a pointer to an array of strings
 */
char **strtow(char *str)
{
int i, flag, len;
char **words;

if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
return (NULL);

i = flag = len = 0;
while (str[i])
{
if (flag == 0 && str[i] != ' ')
flag = 1;
if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
{
flag = 0;
len++;
}
i++;
}

len += flag == 1 ? 1 : 0;
if (len == 0)
return (NULL);

words = (char **)malloc(sizeof(char *) * (len + 1));
if (words == NULL)
return (NULL);

addtoArr(words, str);
words[len] = NULL;
return (words);
}

/**
 * addtoArr - a addtoArr function for fetching words into an array
 * @words: the strings array
 * @str: the string
 */
void addtoArr(char **words, char *str)
{
int i, j, start, flag;

i = j = flag = 0;
while (str[i])
{
if (flag == 0 && str[i] != ' ')
{
start = i;
flag = 1;
}

if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
{
makeWord(words, str, start, i, j);
j++;
flag = 0;
}

i++;
}

if (flag == 1)
makeWord(words, str, start, i, j);
}

/**
 * makeWord - creates a word and insert it into the array
 * @words: the array of strings
 * @str: the string
 * @start: the starting index of the word
 * @end: the stopping index of the word
 * @index: the index of the array to insert the word
 */
void makeWord(char **words, char *str, int start, int end, int index)
{
int i, j;

i = end - start;
words[index] = (char *)malloc(sizeof(char) * (i + 1));

for (j = 0; start < end; start++, j++)
words[index][j] = str[start];
words[index][j] = '\0';
}
