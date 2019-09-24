#include <stdio.h>
nt main()
{
	float p1[100], p2[100], res[100];
	int i, deg1, deg2, rdeg;
	
	printf("\nEnter the degree of Polynomial1: ");
	scanf("%d", &deg1);
	
	for(i=0; i<=deg1; i++)
	{
		printf("\nEnter the value of %d, power of x: ", i);
		scanf("%f", &p1[i]);
	}
	printf("\nEnter the degree of Polynomial2: ");
	scanf("%d", &deg2);

	for(i=0; i<=deg2; i++)
	{
		printf("\nEnter the value of %d, power of x: ", i);
		scanf("%f", &p2[i]);
	}
	
	if(deg1>deg2)
	{
		for(i=0; i<=deg2; i++)
			res[i]=p1[i]+p2[i];
		for(i=deg2+1; i<=deg1; i++)
			res[i]=p1[i];

		rdeg = deg2;
	}
	
	else
	{
		for(i=0; i<=deg1; i++)
			res[i]=p1[i]+p2[i];
		for(i=deg1+1; i<=deg2; i++)
			res[i]=p2[i];

		rdeg = deg2;
	}
	printf("\nPolynomial1: ");
	for(i=deg1; i>0; i--)
		printf("%fx^%d+", p1[i], i);
	printf("%f", p1[0]);

	printf("\nPolynomial2: ");
	for(i=deg2; i>0; i--)
		printf("%fx^%d+", p2[i], i);
	printf("%f", p2[0]);

	printf("\nSum of two polynomials: ");
	for(i=rdeg+1; i>0; i--)
		printf("%fx^%d+", res[i], i);
	printf("%f", res[0]);
	
	return 0;
}









	
	
	
	
	

