#include<iostream>
using namespace std;


class Test {

private:
    int TestCode;
    string Description;
    int NoCandidates;
    int CALCNTR()   {

        return (NoCandidates/100+1);
    }

public :

    void SCHEDULE();
    void DISPTEST();

};

void Test::SCHEDULE () {

    cout<<"Enter TestCode: ";
    cin>> TestCode;
    cout<<"Enter Description: ";

cin.ignore();
    getline(cin, Description);
    cout<<"Enter NoCandidate: ";
    cin >> NoCandidates ;
    int number_of_centers = CALCNTR();
    cout<<"==========="<<endl;

}
void Test ::DISPTEST() {

    cout<<"TestCode: "<<TestCode<<endl
    <<"Description: "<<Description<<endl
    <<"NoCandidates "<<NoCandidates<<endl
    <<"number_of_centers "<<CALCNTR()<<endl;

}
int main(){
    Test myTest;
    myTest.SCHEDULE();
    myTest.DISPTEST();

    return 0;
}