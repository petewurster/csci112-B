/**
 * carDemo.cpp
 *
 * 2020-08-10 pWurster
 *
 * A quick implementation of a Car class.
 * main() instantiates the class and demonstrates the use of
 * basic object methods in C++
 *
 *
 */


#include <iostream>
#include <string>

using namespace std;

class Car{

private:
    int year;
    string make;
    string engine;
    int speed;


public:
    //constructors
    Car() {}
    Car(int year, string make) {
        this->year = year;
        this->make = make;
        this->speed = 0;
    }


    //setters//////////////////////////
    void setYear(int year) {
        this->year = year;
    }
    void setMake(string make) {
        this->make = make;
    }
    void setEngine(string engine) {
        this->engine = engine;
    }
    void setSpeed(int speed) {
        this->speed = speed;
    }


    //getters///////////////////////////
    int getYear() {
        return this->year;
    }
    string getMake() {
        return this->make;
    }
    string getEngine() {
        return this->engine;
    }
    int getSpeed() {
        return this->speed;
    }
    string toString() {
        return "year: " + to_string(this->year)
               + ", make: " + this->make
               + ", engine: " + this->engine
               + ", speed: " + to_string(this->speed);
    }


    //utility methods//////////////////////
    void accelerate() {
        this->speed += 5;
    }

    void brake() {
        this->speed -= 5;
        if (this->speed < 0) this->speed = 0;
    }


};









int main() {
    //instantiation
    Car test = Car(1999, "Ford");

    //loop to accelerate
    cout << endl << "Accelerating 5 times:" << endl;
    for (int i = 0; i < 5; i++) {
        test.accelerate();
        cout << "current speed: " << to_string(test.getSpeed()) << endl;
    }

    //loop to brake
    cout << endl << "Braking 5 times:" << endl;
    for (int i = 0; i < 5; i++) {
        test.brake();
        cout << "current speed: " << to_string(test.getSpeed()) << endl;
    }

    //set engine
    test.setEngine("4-cyl");

    //demonstrate toString()
    cout << endl << test.toString() << endl;
    return 0;
}
