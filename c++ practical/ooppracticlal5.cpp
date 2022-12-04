#include<iostream>
#include<fstream>
using namespace std;



int main()
{
	
	ofstream outfile;
	outfile.open("temp.txt",ios::app);
	string s;
	while(1)
	{
		cout<<"Enter 1-Line 0-EXIT"<<endl;
		int ch;
		cin>>ch;
		
		if(ch ==1)
		{
			cin.get();
			getline(cin,s);
			outfile<<s<<endl;
		}
		else if(ch ==0){
			cout<<"Exited"<<endl;
			break;
		}
	}
	outfile.close();
    ifstream infile;
	infile.open("temp.txt",ios::in);
	cout<<"File contents"<<endl;
	while(!infile.eof())
	{
		getline(infile,s);
		cout<<s<<endl;
	}
	
return 0;

}





