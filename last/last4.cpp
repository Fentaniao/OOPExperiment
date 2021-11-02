#include <iostream>
#include <string>

using namespace std;

class Pet {
public:
    string name;

    Pet(string s) : name(s) {};

    virtual void printname() = 0;   //printname()纯虚函数,在派生类中不同的实现
};

class Dog : public Pet {
public:
    Dog(string s) : Pet(s) {};

    void printname() {
        cout << " this is ：" << name << endl;
    }
};

class Cat : public Pet {
public:
    Cat(string s) : Pet(s) {};

    void printname() { cout << " this is ：" << name << endl; }
};

class Rabbit : public Pet {
public:
    Rabbit(string s) : Pet(s) {};

    void printname() { cout << " this is ：" << name << endl; }
};

class Home {
private:
    int nPets;
    Pet *pPets[20]; //基类指针，可指向各派生类对象，表现多态
public:
    void Add(Pet *pPet) {
        pPets[nPets++] = pPet;
    }

    void printAll() {
        for (int i = 0; i < nPets; i++)
            pPets[i]->printname(); //运行时多态性
    }

    Home() : nPets(0) {}
};

int main() {
    Home myhome;
    myhome.Add(new Dog("dog1"));
    myhome.Add(new Dog("dog2"));
    myhome.Add(new Dog("dog3"));

    myhome.Add(new Cat("cat1"));
    myhome.Add(new Cat("cat2"));
    myhome.Add(new Cat("cat3"));

    myhome.Add(new Rabbit("rabbit1"));
    myhome.Add(new Rabbit("rabbit2"));
    myhome.Add(new Rabbit("rabbit3"));

    myhome.printAll();

    return 0;
}
