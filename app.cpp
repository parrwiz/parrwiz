#include <iostream>
#include <iomanip>
using namespace std;
string feetM(double feet);
string meterF(double meter);
int main(){

    int choice; 
    double feet;
    double meter;
    int exit=0;

    while(true){
        if(exit==1){
            break;
        }
        cout<<"\nWelcome to the most advanced feet to meter and\nmeter to feet calculator"<<endl;
        cout<<"\tChoose an option:"<<endl;
        cout<<"\t\t1: Feet to meters: "<<endl;
        cout<<"\t\t2: Meters to feet: "<<endl;
        cout<<"\t\t3: Exit: "<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Please enter feet that you want in meters:";
            cin>>feet;
            cout<<feetM(feet);
            cout<<endl;
            break;
        case 2: 
            cout<<"Please enter meters that you want in feet:";
            cin>>meter;
            cout<<meterF(meter);
            cout<<endl;
            break;
    

        default:
            cout<<"Exiting............\n";
            exit =1;

            break;
        }


    }

}

string feetM(double feet){
    //variables
   double meter=0.3048;
   double total = feet*meter;
   cout<<feet<<" feets to meters are: ";
   cout<<fixed<<setprecision(3)<<total;
   string a = " meters";
   return a;

}

string meterF(double meter){
    double feet = 3.280;
    double total =meter*feet;
     cout<<meter<<" meters to feet are: ";
   cout<<fixed<<setprecision(3)<<total;
   string a = " feet";
   return a;


}