#include <stdlib.h>
#include "../headers/pixel.h"

void initPixel(Pixel* pixel)
{
	pixel->r = 0;
	pixel->g = 0;
	pixel->b = 0;
}

Pixel* getRGB(unsigned char r, unsigned char g, unsigned char b)
{
	Pixel* pixel = malloc(3 * sizeof(unsigned char));
	pixel->r = r;
	pixel->g = g;
	pixel->b = b;
	
	return pixel;
}

unsigned char getRed(Pixel* pixel)
{
	return pixel->r;
}

unsigned char getGreen(Pixel* pixel)
{
	return pixel->g;
}

unsigned char getBlue(Pixel* pixel)
{
	return pixel->b;
}

void modifyPixel(Pixel* pixel, unsigned char r, unsigned char g, unsigned char b)
{
	pixel->r = r;
	pixel->g = g;
	pixel->b = b;
}

void increasePixel(Pixel* pixel, unsigned char r, unsigned char g, unsigned char b)
{
	pixel->r += r;
	pixel->g += g;
	pixel->b += b;
}

void substractPixel(Pixel* pixel, unsigned char r, unsigned char g, unsigned char b)
{
	pixel->r -= r;
	pixel->g -= g;
	pixel->b -= b;
}

void multiplyPixel(Pixel* pixel, unsigned char r, unsigned char g, unsigned char b)
{
	pixel->r *= r;
	pixel->g *= g;
	pixel->b *= b;
}

void dividePixel(Pixel* pixel, unsigned char r, unsigned char g, unsigned char b)
{
	pixel->r /= r;
	pixel->g /= g;
	pixel->b /= b;
}
