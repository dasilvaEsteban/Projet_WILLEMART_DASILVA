#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>


class Car;
class Pieton;

class Bus {
private:
	float x, y;
	float angle;
	float speed;
	float patern;
	float initangle;
public:
	Bus(const float x, const float y, const float angle, const float speed, const float patern);

	float getX() const;
	float getY() const;
	float getinitAngle() const;
	float getAngle() const;
	float getSpeed() const;
	float getPatern() const;
	float distanceTo(const Bus& other) const;
	float distanceToPiet(const Pieton& other) const;
	float distanceToCar(const Car& other) const;


	void move();
	void turnLeft();
	void turnRight();
	void speedUp();
	void speedDown();
};