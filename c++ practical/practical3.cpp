#include<iostream>
using namespace std;

class student;

class person
{
    
  private:
     string name,blo,add,tele,dlo,dob; 
    
  public:
    friend class student;
    person()
    {
        name="", blo="", add="",tele="",dlo="",dob="";
        
    }
    void acceptPerson()
    {
        cout<<"enter your name:"<<endl;
        cin>>name;
        cout<<"enter your boold group"<<endl;
        cin>>blo;
        cout<<"enter you Address:"<<endl;
        cin>>add;
        cout<<"enter your telephone number"<<endl;
        cin>>tele;
        cout<<"enter your drving license"<<endl;
        cin>>dlo;
        cout<<"enter your date of birth";
        cin>>dob;
    }
    
    person()
    {
        
    }
    
  
    
};
class student
{
    private:
          int roll;
          string cn;
          char *div;
          char d;
           
           
    public:
        student()
        {
            roll=0;
            cn="";
            div = NULL;
        }
        
        void acceptStudent()
        {
            cout<<"enter your roll no";
            cin>>roll;
            cout<<"Enter your your class name";
            cin>>cn;
            cout<<"enter your division";
            cin>>d;
            div =&d;
        }
        void displayPerson()
    {
        cout<<"name:"<<name<<"|";
        cout<<"Blood:"<<blo<<"|";
        cout<<"Address:"<<add<<"|";
        cout<<"Phone:"<<tele<<"|";
        cout<<"license:"<<dlo<<"|";
        cout<<"Birthdata"<<dob<<"|";
        cout<<endl;
    }

        student()
        {
            
        }
        ~student()
        {
            delete(div);
        }
          
          
    
    
};

int main()
{
    
}