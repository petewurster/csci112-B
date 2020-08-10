/**
 * main.cpp
 *
 * 2020-08-10 pWurster
 *
 * This program demonstrates familiarity with various C++ syntax features
 * by capturing user input time (in seconds) and determining the distance
 * an object will fall in that amount of time.
 *
 * Features demonstrated:
 * for-loop, do-while-loop, constants, strings, namespaces, typecasting, void-functions,
 * return-value-functions, parameter usage, try-catch block, console input/output
 *
 */


#include <iostream>
using namespace std;

double GRAVITY = 9.8; //meters per second squared



//calculates fall distance
double calculateDistance(double time) {
    return 0.5 * GRAVITY * time * time;
}





//prompt user & store input
double grabInput() {
    //prompt user
    cout << endl << "How many seconds will the object fall?" << endl << "\t> ";

    //take cin as a string just to demonstrate typecasting
    string x;
    cin >> x;

    //return typecasted input
    return stod(x);
}





//displays fall data
double displayDistanceFallenOverTime(double step) {

    //loop to show 10 ticks of data
    for (double time = 0.0; time <= 10.0; time++) {

        //1st row gets headers
        if (time == 0.0) {
            cout << "Seconds Elapsed : Meters Fallen" << endl;

        //other rows show distance fallen at elapsed time
        } else {
            //show data
            cout << time * step << "\t\t:\t\t" <<  calculateDistance(time * step) << endl;
        }
    }//end loop
}




int main() {

    double input;

    //loop until sentinel value 0
    do {

        //handle exception if typecasting fails in grabInput()
        try {
            //get user input
            input = grabInput();

            //set ticks
            double step = input / 10.0;

            //show fall data
            if (input > 0.0) displayDistanceFallenOverTime(step);


        } catch (exception) {
            //ignore bad data
        }

    } while (input != 0.0);



    return 0;
}//end main
