
#pragma once
#include <stdio.h>




class point{
private: 
	int x;
	int y;

public:
	int getX();
	int getY();
	void setGeom(int x, int y);

};

class line{
	private:
	point  pts[2];
public:


	void setGeom(point A, point B)
	{

	}
};
class person{

pulbic:
	person(int age, int weight)
{
	m_age=  age;
	m_weight = weight;
}
int  setID() = 0;
private:
int m_age;
int m_weight; 
};

class employee: public person
{
	// question regarding constroctor
	public:
	employee(int salary, int age, int weight) : person(int age, int weight)
{
 m_salary = salary;
} 

private:
int m_salary;

	
};