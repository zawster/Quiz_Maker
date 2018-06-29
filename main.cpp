#include "header_Files.h"
#include "Questions.h"
#include "SignUP.h"
#include "SignIN.h"
int main()
{
    int s;
    cout<<"Press 1 for Loin :"<<endl;
    cout<<"Enter 2 for SignUP :";
    cin>>s;
    if(s==1){
        label:;
        system("clear");
        string s4,ke;
        cout<<"Enter your Username : ";
        cin>>s4;
        cout<<"Enter your Password : ";
        cin>>ke;
        if(SignIN(s4,ke)){
            cout<<"You are now loge IN"<<endl;
            //system("clear");
            Rand_Array obj;
            obj.read_Questions();
            obj.Marking();
            return 0;
        }
        else{
            cout<<"Invalid Login "<<endl;
            goto label;
        }
    }
    if(s==2){
        system("clear");
        string s1,s2,s3,s4,ke;
        cout<<"Enter your first name :";
        cin>>s1;
        cout<<"Enter your last name :";
        cin>>s2;
        cout<<"Enter your Email name :";
        cin>>s3;
        cout<<"Enter your Username name :";
        cin>>s4;
        cout<<"Enter your password name :";
        cin>>ke;
        bool x=Sign_up(s1,s2,s3,s4,ke);
        if(x)
            goto label;
        }
    //cout<<"Enter your User Name "; cin>>s4;
    //cout<<"Enter your password ";cin>>ke;

    else
        cout<<"Your are Invalid Student";


   // */

    return 0;

}
