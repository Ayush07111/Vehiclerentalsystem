#include<iostream>
#include<fstream>
#include<unistd.h> 
#include<iomanip> 
using namespace std;
class Log{
    string username;
    string pass;
    public:
        Log(){
            cout<<"\t\t\t\t\t||| LOGIN TO YOUR ACCOUNT HERE |||"<<endl;
            cout<<"\t\t\t\t\t||| ENTER THE FOLLOWING DETAILS CORRECTLY |||"<<endl;
        }
        void check(){
            cout<<"\t\t\t\t\t||| Username : ";
            cin>>username;
            cout<<"\t\t\t\t\t||| Password : ";
            char ch;
            ch = _getwch();
            while(ch != 13){
                pass.push_back(ch);
                cout << '*';
                ch = _getwch();
            }
            cout<<endl;
            cout<<"\t\t\t\t\t||| ACCESS GRANTED.......... |||"<<endl;
            system("CLS");        
        }
};
class Reg{
    private:
        string name;
        string user_name;
        string password;
        string con_no;
        string email_id;
    public:
        Reg(){
            cout<<"\t\t\t\t\t||| SIGN UP HERE AND CREATE YOUR PROFILE.... |||"<<endl;
            cout<<"\t\t\t\t\t||| ENTER THE FOLLOWING DETAILS..... |||"<<endl;
        }
        void get_data(){
            cout<<"\t\t\t\t\t||| Name : ";
            cin>>name;
            cout<<"\t\t\t\t\t||| User Name : ";
            cin>>user_name;
            cout<<"\t\t\t\t\t||| Password : ";
            char ch;
            ch = _getwch();
            while(ch != 13){
                password.push_back(ch);
                cout << '*';
                ch = _getwch();
            }
            cout<<endl;
            cout<<"\t\t\t\t\t||| Contact No. : ";
            cin>>con_no;
            cout<<"\t\t\t\t\t||| Email Id : ";
            cin>>email_id;
            cout<<"\t\t\t\t\t||| SIGNED UP SUCCESSFULLY..... |||"<<endl;
        }
};
void login(){
    Log ab;
    ab.check();
}
void signup(){
    Reg obj1;
    obj1.get_data();
}
class Customer{
    public:
        string name;
        char model;
        char sel_model;
        int vehicle;
        string veh_num;
};
class Thanks{
    public:
        void thanku(){
            char a[500];
            ifstream u;
            ifstream inu("thankyou.txt");
            while(inu){
                inu.getline(a,500);
                if(inu) cout<<a<<endl;
            }
            inu.close();
        }
};
class Rent : public Customer{
    int days;
    int rent;
    public:
        Rent(){
            days = 0;
            rent = 0;
        }
        void check(){
            cout<<"\t\t\t\t\t||| Is your Account already exist ||| "<<endl;
            cout<<"\t\t\t\t\t||| Write 'Y for yes and login    |||"<<endl;
            cout<<"\t\t\t\t\t||| Write 'N' for no and sign up  |||"<<endl;
            cout<<"\t\t\t\t\t||| Your ans : ";
            char ch;
            cin>>ch;
            if(ch == 'Y'){
                login();
            } 
            else if (ch == 'N')
            {
                signup();
            }
            else cout<<"\t\t\t\t\t||| INVALID CHARACTER!! PLEASE TRY AGAIN...... |||"<<endl;
        }
        void functioning(){
            cout<<"\t\t\t\t\t||| Press '1' for renting Car and '2' for renting Bike/Scooty |||"<<endl;
            cout<<"\t\t\t\t\t||| Your ans : ";
            cin>>vehicle;
            if (vehicle == 1)
            {
                cout<<"\t\t\t\t\t||| Car Rental System |||"<<endl;
                cout<<"\t\t\t\t\t||| Here are the few available models you can select |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'A' for TATA Nexon details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'B' for Balano details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'C' for Hyundai Venue details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'D' for Ford details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'E' for Swift details |||"<<endl;
                cout<<"\t\t\t\t\t||| Your ans : ";
                cin>>model;
                if(model == 'A'){
                    system("CLS");
                    ifstream inA("model1A.txt");
                    char str[500];
                    while(inA){
                        inA.getline(str,500);
                        if(inA) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'B'){
                    system("CLS");
                    ifstream inB("model1B.txt");
                    char str[500];
                    while(inB){
                        inB.getline(str,500);
                        if(inB) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'C'){
                    system("CLS");
                    ifstream inC("model1C.txt");
                    char str[500];
                    while(inC){
                        inC.getline(str,500);
                        if(inC) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'D'){
                    system("CLS");
                    ifstream inD("model1D.txt");
                    char str[500];
                    while(inD){
                        inD.getline(str,500);
                        if(inD) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'E'){
                    system("CLS");
                    ifstream inE("model1E.txt");
                    char str[500];
                    while(inE){
                        inE.getline(str,500);
                        if(inE) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else{
                    cout<<"\t\t\t\t\t||| INVALID CHARACTER!! PLEASE TRY AGAIN.... |||"<<endl;
                }
                 
                cout<<"\n\n\t\t\t\t\t||| Enter the car model you have selected |||"<<endl;
                cout<<"\t\t\t\t\t||| Your ans : ";
                cin>>sel_model;
                cout<<"\n\t\t\t\t\t||| Please provide us with the following informations |||"<<endl;
                cout<<"\t\t\t\t\t||| Car Number : ";
                cin>>veh_num;
                cout<<"\t\t\t\t\t||| Number of days for rent : ";
                cin>>days;
            }
            else if (vehicle == 2)
            {
                cout<<"\t\t\t\t\t||| Bike/Scooty Rental System |||"<<endl;
                cout<<"\t\t\t\t\t||| Here are the few available models you can select |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'A' for Bajaj Pulsar details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'B' for Royal Enfield details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'C' for Hero Passion details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'D' for Activa 5G details |||"<<endl;
                cout<<"\t\t\t\t\t||| Enter 'E' for Jupiter details |||"<<endl;
                cout<<"\t\t\t\t\t||| Your ans : ";
                cin>>model;
                if(model == 'A'){
                    system("CLS");
                    ifstream inA("model2A.txt");
                    char str[500];
                    while(inA){
                        inA.getline(str,500);
                        if(inA) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'B'){
                    system("CLS");
                    ifstream inB("model2B.txt");
                    char str[500];
                    while(inB){
                        inB.getline(str,500);
                        if(inB) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'C'){
                    system("CLS");
                    ifstream inC("model2C.txt");
                    char str[500];
                    while(inC){
                        inC.getline(str,500);
                        if(inC) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'D'){
                    system("CLS");
                    ifstream inD("model2D.txt");
                    char str[500];
                    while(inD){
                        inD.getline(str,500);
                        if(inD) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else if(model == 'E'){
                    system("CLS");
                    ifstream inE("model2E.txt");
                    char str[500];
                    while(inE){
                        inE.getline(str,500);
                        if(inE) cout<<str<<endl;
                    }
                    sleep(2);
                }
                else{
                    cout<<"\t\t\t\t\t||| INVALID CHARACTER!! PLEASE TRY AGAIN...... |||"<<endl;
                }

                cout<<"\n\n\t\t\t\t\t||| Enter the car model you have selected |||"<<endl;
                cout<<"\t\t\t\t\t||| Your ans : ";
                cin>>sel_model;
                cout<<"\n\t\t\t\t\t||| Please provide us with the following informations |||"<<endl;
                cout<<"\t\t\t\t\t||| 2 Wheeler's Number : ";
                cin>>veh_num;
                cout<<"\t\t\t\t\t||| Number of days for rent : ";
                cin>>days;
            }
            else cout<<"\t\t\t\t\t||| INVALID NUMBER!! PLEASE TRY AGAIN..... |||"<<endl;
        }
        void calculate(){
            sleep(1);
            system("CLS");
            cout<<"\t\t\t\t\t||| Calculating rent!! Please Wait....... |||"<<endl;
            sleep(2);
            if(vehicle == 1){
                if (sel_model == 'A') rent = days * 680;
                if (sel_model == 'B') rent = days * 700;
                if (sel_model == 'C') rent = days * 650;
                if (sel_model == 'D') rent = days * 750;
                if (sel_model == 'E') rent = days * 520;
            }
            if(vehicle == 2){
                if (sel_model == 'A') rent = days * 480;
                if (sel_model == 'B') rent = days * 550;
                if (sel_model == 'C') rent = days * 450;
                if (sel_model == 'D') rent = days * 380;
                if (sel_model == 'E') rent = days * 380;
            }
        }
        void invoice(){
            cout << "\n\t\t                       Vehicle Rental - Customer Invoice                  "<<endl;
            cout << "\t\t	_________________________________________________________"<<endl;
            cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
            cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<name<<" |"<<endl;
            if(vehicle == 1){
                cout << "\t\t	| Vehicle:"<<"-----------------------|"<<setw(10)<<"Car"<<" |"<<endl;
                if (model == 'A')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"TATA Nexon"<<" |"<<endl;
                }
                if (model == 'B')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Balano"<<" |"<<endl;
                }
                if (model == 'C')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Hyundai Venue"<<" |"<<endl;
                }
                if (model == 'D')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Ford"<<" |"<<endl;
                }
                if (model == 'E')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Swift"<<" |"<<endl;
                }
            } 
            if(vehicle == 2){
                cout << "\t\t	| Vehicle:"<<"-----------------------|"<<setw(10)<<"Bike/Scooty"<<" |"<<endl;
                if (model == 'A')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Bajaj Pulsar"<<" |"<<endl;
                }
                if (model == 'B')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Royal Enfield"<<" |"<<endl;
                }
                if (model == 'C')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Hero Passion"<<" |"<<endl;
                }
                if (model == 'D')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Activa 5G"<<" |"<<endl;
                }
                if (model == 'E')
                {
                    cout << "\t\t	| Vehicle Model :"<<"----------------|"<<setw(10)<<"Jupiter"<<" |"<<endl;
                }
            }
            cout << "\t\t	| Vehicle No. :"<<"------------------|"<<setw(10)<<veh_num<<" |"<<endl;
            cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
            cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rent<<" |"<<endl;
            cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
            cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
            cout << "\t\t	_________________________________________________________"<<endl;
            cout <<"\n";
            cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rent<<" |"<<endl;
            cout << "\t\t	_________________________________________________________"<<endl;
            cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
            cout << "\t\t	 require an authorised signture #"<<endl;
            cout <<" "<<endl;
            cout << "\t\t	:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
            cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
            cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
            cout << "\t\t	:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
            int f;
            Thanks obj;
            obj.thanku();
            system("PAUSE");
            system ("CLS");
        }
};
class Greeting{
    public:
        void welcome(){
            char a[500];
            ifstream g;
            ifstream ing("greeting.txt");
            while(ing){
                ing.getline(a,500);
                if(ing) cout<<a<<endl;
            }
            ing.close();
        }
};
int main()
{
    Greeting obj;
    obj.welcome();
    Rent cust;
    cust.check();
    cust.functioning();
    cust.calculate();
    cust.invoice();
    return 0;
}