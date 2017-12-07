// Exercise 3: Describing the results of conversions
float     f = 1.00;
short int i = 100;
long int  l = 500L;
double    d = 15.00;

f + i
// float since one of the two is float and the other is int.
l / d
// double since one of the two is double.
i / l + f
// float; the first expression is long int and the second is a float; hence the result is a float.
l * i
// long int; the second is an int; hence, the result is a long int.
f / 2
// float, for one of the two is float.
i / (d + f)
// double, for in the denominator, the result is double; in the numerator is an int
l / (i * 2.0)
// float, for in the denominator, the result is a float; the numerator is a long int.
l + i / (double) l
// double, for the denominator is double, while the numerator is a long int.
