#include<iostream>
using namespace std;

class Batsman {

private:

    int bcode;
    char bname[20];
    int innings, notout, runs;
    int batavg;
   void calcavg(){
        
        if(innings!=notout)
        batavg = runs/(innings-notout);
        else
          batavg=0;
}
public :

   void readdata();
   void displaydata();

};
void Batsman::readdata () {
    cout<<"Enter Batsman code: ";
    cin>> bcode;
    cout<<"Enter Batsman name: ";

    cin.ignore();
    cin.getline(bname, 20);
    cout<<"Enter innings: ";
    cin >> innings;
    cout<<"Enter notout: ";
    cin >> notout;
    cout<<"Enter runs: ";
    cin >> runs;
    calcavg();
    cout<<"==="<<endl;

}
void Batsman::displaydata() {

    cout<<"Batsman code "<<bcode<<endl
    cout<<"Batsman name "<<bname<<endl
    cout<<"Innings "<<innings<<endl
    cout<<"Not out "<<notout<<endl
    cout<<"Runs "<<runs<<endl
    cout<<"Batting Average "<<batavg<<endl;
}

int main()

{
    Batsman myBatsman;
    myBatsman.readdata();
    myBatsman.displaydata();
    
    return 0;

}
