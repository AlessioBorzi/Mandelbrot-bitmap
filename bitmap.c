#define START 122

// Setup a bitmap file 256x256

void setup(FILE* file)
{
	int a[122] = {66, 77, 122, 0, 3, 0, 0, 0, 0, 0, 122, 0, 0, 0, 108, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 24, 0, 0, 0, 0, 0, 0, 0, 3, 0, 19, 11, 0, 0, 19, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 71, 82, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	int i;
	for( i = 0; i <122; i++)
		fputc(a[i], file);
}


void drawpixel(int R,int G,int B, FILE* file)
{
	int i,RGB[3] = {R,G,B};
	for( i = 2; i >= 0; i--)
	{
		if( RGB[i] < 256 && RGB[i-1] >= 0)
			fputc(RGB[i], file);
	}
}


void readbitmap(FILE* image, int limit)
{
	fseek(image, 0, SEEK_SET);
	int i,a=0;
	printf("\n\n");
	for(i=0; a != -1 && i < limit; i++)
	{
		a = fgetc(image);
		printf("%d\t%d\n",a,i);
		fseek(image, i+1, SEEK_SET);
	}
	printf("\n\n");
}