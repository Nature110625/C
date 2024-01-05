     #include<stdio.h>
     #define MAX 5

    void selection(int*);
    void bubble(int*);
    void insertion(int*);

     void swap(int*, int*);
     void show(int*); //display the array.

   int main() 
     {
int a[MAX] = { 5,1,4,2,7 }, b[MAX] = { 5, 2, 3, 9, 0 }, c[MAX] = {6, 23,1, 6, 2};
printf("\nSelection sort.");
selection(a);
show(a);
printf("\nBubble sort.");
bubble(b);
show(b);
printf("\nInsertion sort.");
insertion(c);
show(c);
return 0;
 }
  void selection(int *a)
  {
 int i, j;
for (i = 0; i < MAX; i++)
	for (j = i + 1; j < MAX; j++)
		if (a[i] > a[j])
			swap(&a[i], &a[j]);
 }

    void bubble(int *a)
   {
   int i, j;
   for (i = 0; i < MAX; i++)
	for (j = 0; j < MAX - 1; j++)
		if (a[j] > a[j + 1])
			swap(&a[j], &a[j + 1]);
 }
    void insertion(int *arr)
   {
 int key, j, k;

/* Grabs the next key on each iteration. */
for (int i = 1; i < MAX; i++)
{
	/* Selecting the number. */
	key = arr[i];

	/* Finding the position to insert viz. j */
	for (j = 0; arr[j] < key; j++);

	/* Shifting numbers to left. */
	for (k = i; k > j; k--)
		arr[k] = arr[k - 1];

	/* Inserting the number. */
	arr[j] = key;
      }
   }

      void swap(int *a, int *b)
        {
         int temp;
         temp = *a;
         *a = *b;
         *b = temp;
        }
     void show(int *a)
       {
         int i;
         printf("\n");
   for (i = 0; i < MAX; i++)
	 printf("%d\t", a[i]);
 	printf("\n");
   }