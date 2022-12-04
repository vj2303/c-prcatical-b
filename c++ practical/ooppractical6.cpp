#include<iostream>
using namespace std;


class publication
{
	protected:
		string title;
		float price;
		
	public:
		
		publication()
		{
			title ="";
			price = 0.0;
		}
		
		publication(string t, float pr)
		{
			title =t;
			price =pr;
		}
};


class book:public publication
{
	private:
		int pages;
		
	public:
	
	book():publication()
	{
		pages =0;
	}
	
	
	book(string t, int p,float pr ):publication(t,pr)
	{
		
		if(p>0 && pr>0.0)
		{
			
			pages =p;
			
		}else{
			throw(0);
		}
		
		pages =p;
	}
	
	void display()
	{
		cout<<title<<"-"<<pages<<"-"<<price<<endl;
	}
};

class tape:public publication
{
	private:
		float mins;
		
    public:
		
		
		tape():publication()
		{
			mins =0.0;
		}	
		tape(string t, float min,float pr):publication(t,pr)
		{
			mins =min;
		}
		
		void display()
		{
			cout<<title<<"-"<<mins<<"-"<<price<<endl;
		}
		
};

int main()
{
	
	string title;
	float pages,price;
	cout<<"eneter book deyail in order title| pages |price";
	cin>>title>>pages>>price;
	
	
	string t;
	float pr,min;
	cout<<"enetr tape detail in format";
	cin>>t>>min>>pr;
	
	book b;
	tape t1;
	
	try{
		b =book(title,pages,price);
		t1 = tape(t,min,pr);
	}
	catch(...)
	{
		b.display();
		t1.display();
		b =book("",0,0);
		t1 =tape("",0.0,0.0);
	}
	b.display();
	t1.display();
	
	
}











