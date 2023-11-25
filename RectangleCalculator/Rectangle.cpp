#include "Rectangle.h"
//Accessors
double Rectangle::getWidth() {
	return width;
}
double Rectangle::getLength() {
	return length;
}
double Rectangle::getWidth() const
{
	return 0.0;
}
double Rectangle::getLength() const
{
	return 0.0;
}
//Mutators
void Rectangle::setWidth(double w) {
	width = w;
}
void Rectangle::setLength(double l) {
	length = l;
}

double Rectangle::getAera() {
	return width * length;
}