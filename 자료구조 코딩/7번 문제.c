#include <stdio.h>
#pragma warning(disable:4996)
#include <stdlib.h>
#include <string.h>


//����ü�� �Լ��� �����ϴ� �κ��� �˾ƺ��� 
typedef struct complex
{
	float imaginary;
	float real;
} complex;


complex complex_add(complex a, complex b) {
	complex temp;

	temp.real = a.real + b.real;
	temp.imaginary = a.imaginary + b.imaginary;
	return temp;
}

int main()
{
	complex c1;
	complex c2;

}