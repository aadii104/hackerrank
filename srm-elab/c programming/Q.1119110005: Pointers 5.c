#include <stdio.h>
int main()
{
  long array[30], *maximum, size, c, location = 1;
 
  scanf("%ld", &size);
 
 
  for ( c = 0 ; c < size ; c++ )
    scanf("%ld", &array[c]);
 
  maximum  = array;
  *maximum = *array;
 
  for (c = 1; c < size; c++)
  {
    if (*(array+c) > *maximum)
    {
       *maximum = *(array+c);
       location = c+1;
    }
  }
  printf("%ld is largest", *maximum);
  return 0;
}