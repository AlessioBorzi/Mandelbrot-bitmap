#define COLOR 6

void color(int a, FILE* image)
{
	if( a == 0)
		drawpixel(0,0,0,image);
	else
	{
		switch(a%COLOR)
		{
			case 0: drawpixel(255,0,0,image);
			break;
			case 1: drawpixel(128,128,0,image);
			break;
			case 2: drawpixel(0,255,0,image);
			break;
			case 3: drawpixel(0,128,128,image);
			break;
			case 4: drawpixel(0,0,255,image);
			break;
			case 5: drawpixel(128,0,128,image);
			break;
		}
	}
}