#include <iostream>
#include <string>
using namespace std;


class REPORT 
{
private:
    char adno[5];
    char name[21];
    float marks[5];
    float average;
    void GETAVG();


public:    
    void READINFO();
    void DISPLAYINFO();
};


void REPORT::GETAVG() {
    average = 0.0;
    for (int i=0; i<5; ++i)
        average += marks[i];
    average /= 5;
}


void REPORT::READINFO() {


    cout << "Enter an admission number: ";
    cin.getline(adno, 5);
    cout << "Enter a name: ";
    cin.getline(name, 21);


    for (int i=0; i<5; i++) {
        cout << "Enter " << i+1 << "th mark: ";
        cin >> marks[i];
    }
    GETAVG();
}


void REPORT::DISPLAYINFO() {
    cout << "Admisson number: " << adno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks obtained:" << endl;
    for (int i=0; i<5; ++i) {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Average marks: " << average << endl;
}



int main() {
    REPORT report;

    report.READINFO();
    cout << endl;
    report.DISPLAYINFO();
    
}