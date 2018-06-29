#include "header_Files.h"
bool Sign_up(string fname,string lname,string email,string Uname,string key){
    ofstream in;
    in.open("logIN.txt",ios::app);
    if(in.is_open()){
        in<<Uname<<" "<<key<<" "<<fname<<" "<<lname<<" "<<email<<endl;
        return true;
    }
    return false;

}






















/*
class LOGIN{
    private:
        string name,fname,lname,dpt,roll;
        int x,key;
    public:
        LOGIN(){
            cout<<"  Press 1 to Create a new account :"<<endl;
            cout<<"  Press 2 for login :";
            cin >> x;

            if(x==1){
                system("clear");
                cout<<" Enter your First name :";
                  cin>>fname;
                cout<<" Enter your First name :";
                  cin>>lname;
                cout<<" Enter your department name :";
                  cin>>dpt;
                cout<<" Enter your Roll number (p106142) :";
                  cin>>roll;
                cout<<" Enter your Username  :";
                  cin>>name;
                cout<<" Enter your Password  :";
                  cin>>key;
                ofstream in("logIN.txt");
                if(in.is_open()){
                    in<<" "<<name<<" "<<key<<" "<<fname<<" "<<lname<<" "<<dpt<<" "<<roll;
                }
                in.close();
                x=2;

            }
            if(x==2){
                system("clear");
                cout<<  "Enter your Username :";
                cin>>name;
                cout<<"Enter your password :";
                cin>>key;
            }
        }

};
*/
