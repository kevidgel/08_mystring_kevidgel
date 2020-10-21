#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrlen( char *s)
{
  int i = 0;
  while(*(s+i))
  {
    i++;
  }
  return i;
}

char * mystrcpy(char *s1, char *s2)
{
  int i = 0;
  while(*(s2 + i))
  {
    *(s1 + i) = *(s2 + i);
    i++;
  }
  return s1;
}

char * mystrcat(char *s1, char *s2)
{
  int end = mystrlen(s1);
  int i = 0;
  while(*(s2 + i))
  {
    *(s1 + end + i) = *(s2 + i);
    i++;
  }
  return s1;
}

char * mystrncpy(char *s1, char *s2, int size)
{
  int i = 0;
  while(i < size)
  {
    *(s1 + i) = *(s2 + i);
    i++;
  }
  return s1;
}

char * mystrncat(char *s1, char *s2, int size)
{
  int end = mystrlen(s1);
  int i = 0;
  while(i < size)
  {
    *(s1 + end + i) = *(s2 + i);
    i++;
  }
  return s1;
}

char * mystrchr(char * s, int c)
{
  int i = 0;
  while(*(s + i))
  {
    if (*(s+i) == c)
    {
      return s+i;
    }
    i++;
  }
  if (*(s+i) == c)
  {
    return s+i;
  }
  return NULL;
}

int mystrcmp(char *s1, char *s2)
{
  int i = 0;
  while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
  {
    if (*(s1 + i) - *(s2 + i) != 0)
    {
      return *(s1 + i) - *(s2 + i);
      break;
    }
    i++;
  }
  return 0;
}
