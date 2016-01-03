// Exists arleady a library for complex numbers in C but I written my own code for it anyway

typedef struct nameless {
	double re;
	double im;
}complex;

complex csum(complex x, complex y)
{
	complex z;
	z.re = x.re + y.re;
	z.im = x.im + y.im;
	return z;
}

complex cprod(complex x, complex y)
{
	complex z;
	z.re = x.re*y.re - x.im*y.im;
	z.im = x.re*y.im + x.im*y.re;
	return z;
}

complex csquare(complex z)
{
	return cprod(z,z);
}

double modulo (complex z)
{
	return ( z.re*z.re + z.im*z.im );
}