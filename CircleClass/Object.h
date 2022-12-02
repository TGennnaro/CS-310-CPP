#pragma once
#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <string>
using namespace std;

class Object {
	private:
		string name;
	public:
		Object(string name);
		void print();
};

#endif