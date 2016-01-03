#include <stdio.h>
#include "complex.c"
#include "mandelbrot.c"
#include "bitmap.c"
#include "color.c"

#define SIZE 128  // Half the dimension of the bitmap
#define PRINT 25

int main()
{
	FILE* image = fopen("image.bmp", "ab+");
	setup(image);
	int i,j,a;
	complex z;
	
	for( j = 0; j < SIZE*2; j++)
	{
		for( i = 0; i < SIZE*2; i++)
		{
			z.re = (double)(2*(i-SIZE)) / (double)(SIZE);
			z.im = (double)(2*(j-SIZE)) / (double)(SIZE);
			a = ITER - iteration(z);

			if ( i%PRINT == 0 && j%PRINT == 0)
				printf("%f\t%f\t%d\n",z.re,z.im,a);

			color(a,image);
		}
	}

	readbitmap(image, 200);
	fclose(image);

	return 0;
}