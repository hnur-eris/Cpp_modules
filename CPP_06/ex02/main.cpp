#include <iostream>

using std::cout;
using std::endl;

class Base {

    public :
        virtual ~Base(){}
};


class A : public Base {
    
};

class B : public Base {
    
};

class C : public Base {
};

Base *generate(void) {
    Base *tmp = NULL;
    if (rand() % 3 == 0)
        tmp = new A();
    else if (rand() % 3 == 1)
        tmp = new B();
    else if (rand() % 3 == 2)
        tmp = new C();
    return tmp;
}
void identify (Base *p) {

    cout << "Pointer p is instance of " ;
    if (dynamic_cast <A*> (p)!= nullptr)
        cout << "A " << endl;
    else if (dynamic_cast <B*> (p)!= nullptr)
          cout << "B " << endl;
    else if (dynamic_cast <C*> (p)!= nullptr)
        cout << "C " << endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		cout << "Identified by reference function: A" << endl;
		return;
	} catch (std::bad_cast) {
	}

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified by reference function: B" << std::endl;
		return;
	} catch (std::bad_cast) {

	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified by reference function: C" << std::endl;
		return;
	} catch (std::bad_cast) {

	}
}

int main() {

    srand(time(NULL));
    Base *instance = generate();

    identify(instance);
    identify(*instance);

    delete instance;
    return 0;

}