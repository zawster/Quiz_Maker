#include "header_Files.h"
class Rand_Array{
    private:
        int *arr=NULL;
        char *ans=NULL;
        string *temp=NULL;
        int siz,y,x;        //  x = variable to store the number in
    public:
        Rand_Array(){

            label:cout<<"How many questions you want to attempt :";
            cin>>siz;
            if(siz > 30){
                system("clear");
                cout<<endl<<endl<<endl<<"           _____WARNING____"<<endl<<endl;
                cout<<"         Questions should be less then 30 :"<<endl<<endl<<endl;
                goto label;
                //Rand_Array();
            }
            system("clear");
            arr=new int[siz];       //    to store rendom numbers
            ans=new char[siz];      //    an array for storing answers
            for(int i=0;i<siz;i++)
            {
                bool check; //variable to check or number is already used
                do
                 {
                    y=rand()% siz+2;   // generate rendome number
                    check=true;     //check for is number is already used:
                    for (int j=0;j<i;j++){
                        if (y == arr[j]) //if number is already used
                        {
                            check=false; //set check to false
                            break; //no need to check the other elements of value[]
                        }
                    }
                 }
                while (!check); //loop until new, unique number is found
                arr[i]=y;

            }
                //cout<<"_____"<<endl;
        }
        ////////////////////////////            Read Questions and read Options and print on console
        void read_Questions(){
            string str,line,word;   //  for questions
            string optLine,wrd;     //  for options
            ifstream in("questions.txt");

            int i = 0;
            while(i<siz)
            {
                ifstream in("questions.txt");
                ifstream option("options.txt");
                x=arr[i];
                for(int j=1;j<=30;j++){
                    getline(in, line);          //   Reading line by line
                    stringstream ss(line);      //
                    ss >> word;                 //    Reading each word from a line
                    stringstream obj;     //   converting Integer number into string
                    obj << x;
                    str = obj.str();
                    if(word==str){         //   check to take proper line according to random array number
                        line=line.substr(line.find_first_of(" \t")+1);
                        cout<<line<<endl;
                        for(int k=0;k<30;k++){           //    loop  on Options.txt file to print options on console
                            getline(option, optLine);
                            stringstream opt(optLine);
                            opt >> wrd;
                            if(wrd == word){    //   check for question's related option
                                optLine=optLine.substr(optLine.find_first_of(" \t")+1);
                                cout<<optLine<<endl<<endl;
                                cin>>ans[i];
                                //temp[i]=wrd;   //  store appropriate question number for marking

                                break;
                                option.close();
                            }
                        }
                        break;
                    }
                }
                i=i+1;
                in.close();
            }
                //while(i<siz);
                //cout<<endl;
            in.close();
        }
        void Marking(){
            int tru=0;
            int fals=0;
            string str;
            int d,chk;
            char ansr,s;
            int result=0;
            for(int i=0;i<siz;i++){
                ansr=ans[i];
                chk=arr[i];
                ifstream in("answers.txt");
                for(int j=0;j<30;j++){
                    in>>d;
                    in>>s;
                    if(chk==d){
                        if(ansr==s){
                            result +=3;
                            tru +=1;
                            break;
                        }
                    }
                }
                in.close();
            }
            system("clear");
            cout<<endl<<endl<<endl<<"           *********       Result      *********"<<endl;
            cout<<"             You got "<<result<<" marks out of "<<siz*3<<endl<<endl;
            if(siz-tru==1 || siz-tru==0 && tru>1){
                cout<<"         Your "<<siz-tru<<" question is False and "<<tru<<" questions are True..."<<endl;
                return;}
            if(siz-tru==1 || siz-tru==0 && tru==1 || tru==0){
                cout<<"         Your "<<siz-tru<<" question is False and "<<tru<<" question is True..."<<endl;
                return;}
            if(siz-tru>1 && tru==1 || tru==0){
                cout<<"         Your "<<siz-tru<<" questions are False and "<<tru<<" question is True..."<<endl;
                return;}
            else
                cout<<"         Your "<<siz-tru<<" questions are False and "<<tru<<" questions are True..."<<endl;
        }
        ~Rand_Array(){
            delete [] arr;
            delete [] ans;

        }

};
 /*for(int i=0;i<x;i++){
                    z=arr[i];
                    while(!in.eof()){
                        in>>st;
                        if(z==st){
                            getline(in,str);
                        string line;



                        //for(int i=0;i<str.length();i++){
                          //  cout<<str[i];
                          //
                        //} // cout<<str<<endl;
                        }
                    }
                        //break;
                    }*/
