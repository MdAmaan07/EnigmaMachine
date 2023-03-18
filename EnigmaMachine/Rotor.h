#include<iostream>
#include "initialization.h"

using namespace std;

//Note :- All Arrays are working in circular way

int result;
int r1top;
int r2top;
int r3top;

class rotor
{
private:
	int* plugboard;
	int* r1;
	int* r2;
	int* r3;
	int* reflector;
public:
	rotor();
	//rotor(int r1top, int r2top, int r3top);
	void rotorinitialize();

	//findindex function is used to find which index we have to go from top or from where head is pointing.
	//here top may be r1top or r2top or r3top.
	//here a is telling how much index we have to go down from where top or head is pointing.
	//here a equals to what calculate_count function returns and a is calculation of previous rotor.
	//suppose top is pointing on (5 or e) and a is 10 then function will return 14. sum of a and 10 and subtracting 1.
	//here rotor 1 metal node is attached beside to which rotor 2 metal node will be find out.
	int findindex(int a, int top);

	//search function is called when we comeback to rotors after we passed the reflector.
	//here we are finding at which index ind is present in rotors array like r1 or r2 or r3.
	//ind is data or element which we have to find in respective arrays like r1 or r2 or r3.
	//this function is used so we can comeback to the respective index.
	//this is like ind is connected to which index.
	//Like 1 is connected to 15 then 15 is connected to 1.
	//if ind is 1 then it will return 15 and if ind is 15 then it will return 1.
	int search(int* r, int ind);

	//calculate_count function is used to find how much we have to go down to find the changed letter from where top is pointing.
	//here ind is r1top or r2top or r3top.
	//i is the changed letter.
	//count is how much we have gone down from where top is pointing in search of i.
	//suppose ind is 10 and i is 5 then function will return 22.
	//so to reach 5th position from 10 we have to go 22 steps down.
	int calculate_count(int i, int ind);

	void passplugboard(int a);
	void passreciever(int a);
	void passrotor1(int a);
	void passrotor2(int a);
	void passrotor3(int a);
	void passreflector(int a);
	void backpassrotor3(int a);
	void backpassrotor2(int a);
	void backpassrotor1(int a);
	void backpassreciever(int a);
	void backpassplugboard(int a);
	void rotation();

	~rotor();
};

rotor::rotor()
{
	//r1 is rotor 1 , r2 is rotor 2 and r3 is rotor 3.
	plugboard = new int[69];
	r1 = new int[69];
	r2 = new int[69];
	r3 = new int[69];
	reflector = new int[69];
	rotorinitialize();
	result = 0;
}

void rotor::rotorinitialize()
{
	plugboardinitialize(plugboard);
	rotor1(r1);
	rotor2(r2);
	rotor3(r3);
	reflectorinitialize(reflector);
}

int rotor::findindex(int a, int top)
{
	//subtracting 1 so that ind will be pointing in front of a.
	int ind = top + a - 1;
	if (ind > 68)
	{
		ind = ind - 68;
	}
	return ind;
}

int rotor::search(int* r, int ind)
{
	int i;
	for (i = 1; i <= 68; i++)
	{
		if (r[i] == ind)
		{
			break;
		}
	}
	return i;
}

int rotor::calculate_count(int i, int ind)
{
	//adding 1 so that we reach the correct position and count is pointing in front of i.
	int count = 1;
	if (i > ind)
	{
		count = i - ind + 1;
	}
	else if (ind > i)
	{
		count = 68 - ind;
		count = count + i + 1;
	}
	return count;
}

void rotor::passplugboard(int a)
{
	passreciever(plugboard[a]);
}

void rotor::passreciever(int a)
{
	passrotor1(a);
}

void rotor::passrotor1(int a)
{
	int ind = findindex(a, r1top);
	int v = r1[ind]; //to find the scrambled character of ind

	ind = r1top;
	//int count = calculate_count(v, ind);
	int count = calculate_count(v, ind);
	passrotor2(count);
}

void rotor::passrotor2(int a)
{
	int ind = findindex(a, r2top);
	int v = r2[ind]; //to find the scrambled character of ind

	ind = r2top;
	int count = calculate_count(v, ind);

	passrotor3(count);
}

void rotor::passrotor3(int a)
{
	int ind = findindex(a, r3top);
	int v = r3[ind]; //to find the scrambled character of ind

	ind = r3top;
	int count = calculate_count(v, ind);

	passreflector(count);
}

void rotor::passreflector(int a)
{
	backpassrotor3(reflector[a]); //to find the scrambled character of ind
}

void rotor::backpassrotor3(int a)
{
	int ind = findindex(r3top, a);

	int i = search(r3, ind);
	ind = r3top;
	int count = calculate_count(i, ind);

	backpassrotor2(count);
}

void rotor::backpassrotor2(int a)
{
	int ind = findindex(a, r2top);

	int i = search(r2, ind);
	ind = r2top;
	int count = calculate_count(i, ind);

	backpassrotor1(count);
}

void rotor::backpassrotor1(int a)
{
	int ind = findindex(a, r1top);

	int i = search(r1, ind);
	ind = r1top;
	int count = calculate_count(i, ind);

	backpassreciever(count);
}

void rotor::backpassreciever(int a)
{
	//to check which metal of rotor 1 is connected with reciever metal in the same index or position
	backpassplugboard(a);
}

void rotor::backpassplugboard(int a)
{
	a = plugboard[a];
	if (a >= 65 && a <= 68)
	{
		result = a + 58;
	}
	else
	{
		result = a + 32;
	}
}

void rotor::rotation()
{
	r1top++;
	if (r1top > 68)
	{
		r1top = 1;
		r2top++;
	}
	if (r2top > 68)
	{
		r2top = 1;
		r3top++;
	}
	if (r3top > 68)
	{
		r3top = 1;
	}
}

rotor::~rotor()
{
	delete[]plugboard;
	delete[]r1;
	delete[]r2;
	delete[]r3;
	delete[]reflector;
	plugboard = nullptr;
	r1 = nullptr;
	r2 = nullptr;
	r3 = nullptr;
	reflector = nullptr;
}

rotor r;
int message(char str)
{
	int a;
	if (str >= 97 && str <= 122)
	{
		str = str - 32;
	}
	if (str >= 123 && str <= 126)
	{
		a = str - 58;
	}
	else
	{
		a = str - 32;
	}

	r.passplugboard(a);
	r.rotation();
	return result;
}

