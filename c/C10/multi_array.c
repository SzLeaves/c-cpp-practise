#include<stdio.h>
int main(void) {
  const int ar1[6] = { 1, 2, 3, 4, 5, 6 };
  const int ar2[3][2] = { {1, 2}, {3, 4}, {5, 6} };

  int *ptr1 = ar1;
  int (*ptr2)[2] = ar2;

  int i, j, k;
  for (i = 0; i <= 5; i++)
    printf("int ar1[%d] = %d \n", i, ar1[i]);
  printf("\n");

  for (j = 0; j <= 2; j++) {
    for (k = 0; k <= 1; k++) {
      printf("int ar2[%d][%d] = %d", j, k, ar2[j][k]);
      printf("\n");
    }
  }

  printf("\n");

  printf("ar1 = %p, *ar1 = %d \n", ar1, *ar1);
  printf("ar1[0] = %p, ar1[0] = %d \n", &ar1[0], ar1[0]);
  printf("\n");

  printf("ar2 = %p, *ar2 = %p, **ar2 = %d \n", ar2, *ar2, **ar2);
  printf("ar2 = %p, ar2[0] = %p, ar2[0][0] = %d \n", ar2, ar2[0], ar2[0][0]);
  printf("ar2[0][0] = %p, %d \n", ar2[0][0], ar2[0][0]);
  printf("ar2[0][1] = %p, %d \n", ar2[0][1], ar2[0][1]);
  printf("\n");

  printf("ar1 + 1 = %p, *(ar1 + 1) = %d, \n", ar1 + 1, *(ar1 + 1));
  printf("ar1[1] = %p, ar1[1] = %d \n", &ar1[1], ar1[1]);

  printf("ar2 + 1 = %p, *(ar2 + 1) = %p, ", ar2 + 1, *(ar2 + 1));
  printf("**(ar2 + 1) = %p, %d \n", **(ar2 + 1), **(ar2 + 1));
  printf("*(ar2 + 1) + 1 = %p, *(*(ar2 + 1) + 1) = %d \n", *(ar2 + 1) + 1,
         *(*(ar2 + 1) + 1));
  printf("ar2[1][1] = %p, %d", &ar2[1][1], ar2[1][1]);

  /* 
     ar2		     	 [Source]
     -> ar2 + 1			 [Move one bit -> left] 
     -> *(ar2 + 1) 		 [Address] 
     -> *(ar2 + 1) + 1		 [Kid-array move one bit -> left] 
     -> *(*(ar2 + 1) + 1) 	 [The kid-array's number] 
  */

  printf("\n \n");

  printf("ptr1 = %p, ptr1 = %d \n", ptr1, *ptr1);
  printf("ptr1 + 3 = %p, *(ptr1 + 3) = %d, \n ar1[3] = %p, %d \n", ptr1 + 3,
         *(ptr1 + 3), &ar1[3], ar1[3]);
  ptr1 = ar1;
  printf("ptr1++ = %p, %d \n", ptr1++, *(ptr1++));

  printf("ptr2 = %p, *ptr2 = %p, **ptr2 = %d \n", ptr2, *ptr2, **ptr2);
  printf("ptr2[0] = %p, ptr2[0][0] = %d \n", ptr2[0], ptr2[0][0]);
  printf("&ptr2[0][0] = %p \n\n", &ptr2[0][0]);

  printf("ptr2 + 1 = %p, *(ptr2 + 1) = %p \n", ptr2 + 1, *(ptr2 + 1));
  printf("*(ptr2 + 1) + 1 = %p, %d", *(ptr2 + 1) + 1, *(*(ptr2 + 1) + 1));

  return 0;
}
