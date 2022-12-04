#include<iostream>
using namespace std;

class student;
class person
{
	private:
		string name,blo,add,tele,dlo,dob;
		
	
	public:
		friend class student;
		
		
		person(string name)
		{
			this->name = name;
			name="", add="", blo=" ",tele= "", dlo= "", dob="";
		}
		
		

		person(const person &p)
		{
			name = p.name;
			blo = p.blo;
			add = p.add;
			tele =p.tele;
			dlo= p.dlo;
			dob = p.dob;
			
		}
		
		
		
		
};

class student
{
	private:
		int roll;
		string cn;
		char *div;
	   
	public:
	    static int count;
	    student()
		{
			person();
			roll =0;
			cn = "";
			div = NULL;
			char d;
		}
		
		
		void acceptStudent(person &p)
		{
			cout<<"Enter you name";
			cin>>p.name;
			cout<<"Entr your lood group";
			cin>>p.blo;
			cout<<"Enter your address";
			cin>>p.add;
			cout<<"Enter your telephone number";
			cin>>p.tele;
			cout<<"Enter your driving licence no: ";
			cin>>p.dlo;
			cout<<"enter your dob";
			cin>>p.dob;
			cout<<"Enter your roll noo:";
			cin>>roll;
			cout<<"enter your class name";
			cin>>cn;
			cout<<"enter your division";
			cin>>d;
			div = &d;
		}
		
		
		inline void displayStudent(person &p)
		{
			cout<<"Name: "<<p.name<<" | ";
			cout<<"Blood"<<p.blo<<" | ";
			cout<<"Addresss"<<p.add<<" | ";
			cout<<"Phone"<<p.tele<<" | ";
			cout<<"License"<<p.dlo<<"  | ";
			cout<<"Birthdate"<<p.dob<<"  | ";
			cout<<"Roll"<<roll<<"  | ";
			cout<<"Div"<<div<<"  | ";
			cout<<"className"<<cn<<"  | ";
			cout<<endl;
		}
		student(const student &s1)
		{
			
		}
		~student()
		{
			delete(div);
		}
		static int get()
		{
			return count;
		}
};

int student::count = 0;

int main()
{
//	cout<<student::get()<<endl;
//	student s1= student();
//	cout<<student::get()<<endl;
//	student s2 = student();
//	cout<<student::get()<<endl;
//	student s3 = student();

    person *p[10];
    student *s[10];
    int f=0;
    
    while(1)
    {
    	int ch;
    	cout<<"Enter 1-Enter a student | 2.displaying entire database | 0-exit"<<endl;
    	cin>>ch;
    	
    	
    	if(ch == 1)
    	{
    		s[f] =new student();
    		p[f] = new person();
    		s[f]->acceptStudent(*p[f]);
    		f++;
		}
		else if
		{
			for(int i=0; i<f; i++)
			{
			   s[i]->displayStudent(*p[i]);	
			}
			
		}
		else if(ch == 0)
		{
			cout<<"exited";
			break;
		}
    	
    	
	}
    



	return 0;
}



//		void acceptPerson()
//		{
//			cout<<"Enter you name";
//			cin>>name;
//			cout<<"Entr your lood group";
//			cin>>blo;
//			cout<<"Enter your address";
//			cin>>add;
//			cout<<"Enter your telephone number";
//			cin>>tele;
//			cout<<"Enter your driving licence no: ";
//			cin>>dlo;
//			cout<<"enter your dob";
//			cin>>dob;
//		}
//		void displayPerson()
//		{
//			cout<<"Name: "<<name<<" | ";
//			cout<<"Blood"<<blo<<" | ";
//			cout<<"Addresss"<<add<<" | ";
//			cout<<"Phone"<<tele<<" | ";
//			cout<<"License"<<dlo<<"  | ";
//			cout<<"Birthdate"<<dob<<"  | ";
//			cout<<endl;
//		}







