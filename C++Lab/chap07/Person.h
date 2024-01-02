#pragma once
#ifndef __PERSON_H__
#define __PERSON_H__
#include <iostream>
#include <cstring>
using namespace std;

class Person {
public:
	char name[50];
	int age;
	Person(const char* name, int age) : age(age) {
		strcpy(this->name, name);
		cout << "Person 持失切" << endl;
	}
	Person() {}
	~Person() {}
	const char* getName() const {
		return this->name;
	}
	void setName(const char* name) {
		strcpy(this->name, name);
	}
	void print() {
		cout << this->name << ", " << age << endl;
	}
};

class Student : public Person {
public:
	char major[50];
	Student(const char* name, int age, const char* major): Person(name, age){
		strcpy(this->major, major);
		cout << "Student 持失切" << endl;
	}
	~Student() {
		cout << "Student 社瑚切" << endl;
	}
	// override
	void print() {
		cout << this->name << ", " << this->age << ", " << this->major << endl;
	}
};

#endif