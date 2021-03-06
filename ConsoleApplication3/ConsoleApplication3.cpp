// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int isPrime(int n)
{
	int i, length = (int)sqrtf(n);
	for (i = 2; i < length; i++)
		if (n%i == 0)
			return 0;
	return 1;
}
int main()
{
	int i,
		copy,
		temp,
		sum,
		product,
		squresum,
		superPrime = 0,
		superPrimeCount = 0,
		superPrimeSum = 0;
	for (i = 100; i < 10000; i++)
	{
		if (isPrime(i))
		{
			sum = squresum = 0;
			product = 1;
			copy = i;
			while (copy)
			{
				temp = copy % 10;
				sum += temp;
				product *= temp;
				squresum += temp*temp;
				copy /= 10;
			}
			if (isPrime(sum))
				if (isPrime(product))
					if (isPrime(squresum))
					{
						superPrimeCount++;
						superPrimeSum += superPrime = i;
					}
		}
	}
	puts("[100,9999]内：");
	printf("超级素数的个数：%d\n", superPrimeCount);
	printf("所有超级素数之和：%d\n", superPrimeSum);
	printf("最大的超级素数：%d\n", superPrime);

	return 0;
}

