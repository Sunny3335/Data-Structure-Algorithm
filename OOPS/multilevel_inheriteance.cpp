#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{

};

class Germanshepher: public Dog{

};


int main(){

    Germanshepher g;
    g.speak();



}
