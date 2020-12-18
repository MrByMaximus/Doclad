#include <iostream>
class  Animal {
    char* name;
public:
    Animal() {
        name = new char[50];
        std::cout << "Animal";
    }
    /*virtual*/ ~Animal() {
        delete name;
        std::cout << "~Animal";
    }
    virtual void say() = 0;
};

class  Cat : public Animal {
public:
    Cat() {
        std::cout << "Cat";
        color = new char[50];
    }

    ~Cat() {
        //delete color;
        std::cout << "~Cat";
    }

    virtual void say() {
        std::cout << "meow";
    }
protected:
    char* color;
};
int main() {
    Animal* p = new Cat();
    p->say();
    //delete p
    return 0;
    
}