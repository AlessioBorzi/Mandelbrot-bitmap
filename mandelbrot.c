#define ITER 255

int iteration(complex z)
{
	int iter=0;
	complex c = z;
	while ( (modulo(z) <= 4) && (iter < ITER) )
	{
		z = csum( csquare(z), c); // z^2 +c
		iter++;
	}
	return iter;
}