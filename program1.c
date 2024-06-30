#include <stdio.h>
#define SIZE 10
#define spl_char '$'

void replace_$ (int a[], int size);
void print_array (int a[], int size);
void desending (int a[], int size);


int
main ()
{
  int a[SIZE] = { 42, 3, 6, 12, 2, 7, 8, 13, 21, 20 }, size = 10;

  printf ("Hello LET START ARRAY QUESTION");
  print_array (a, size);
  desending (a, size);
  replace_$ (a, size);
  print_array (a, size);
  desending (a, size);
  return 0;
}

void
print_array (int a[], int size)
{
  int i, j;
  printf ("\n ARRAY \n");
  for (i = 0; i < size; i++)
	{
	  if (a[i] == spl_char)
		{
		  printf ("%c ", a[i]);
		}
	  else
		{
		  printf ("%d ", a[i]);
		}
	}
}

void
replace_$ (int a[], int size)
{

  int i, j;
  printf ("\n ARRAY replaced $ ");
  for (i = 0; i < size; i++)
	{
	  if (a[i] % 2 == 0)
		a[i] = spl_char;
	}
  print_array (a, size);
}

void
desending (int a[], int size)
{
  int i, j, temp;
  printf ("\n ARRAY desend sorted ");

  for (i = 0; i < size; i++)
	{
	  for (j = i + 1; j < size; j++)
		{
		  if (a[i] < a[j])
			{
			  temp = a[j];
			  a[j] = a[i];
			  a[i] = temp;
			}
		}
	}
  print_array (a, size);
}
