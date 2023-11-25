#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

// pet class declaration

class Pet {
	private:
		int name;
		string type;
		int age;
	public:
		// Contructors
		Pet();
		Pet(int y, string m);
		void setName(int);
		void setType(string);
		void setAge(int);
		int getName() const;
		string getType() const;
		int getAge() const;
		void gender();
	};
#endif
