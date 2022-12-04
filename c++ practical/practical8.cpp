#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> state;
    state.insert(pair<string,int>("maharashtra",9099909));
    state.insert(pair<string,int>("goa",2304509));
    state.insert(pair<string,int>("karnataka",34569));
    state.insert(pair<string,int>("jammu",1234509));
    state.insert(pair<string,int>("haryana",890509));
    state.insert(pair<string,int>("himachal",234509));
    state.insert(pair<string,int>("odisha",2345909));
    string search;
    cout<<"enytr the state to be searched: "<<endl;
    cin>>search;
    map<string,int>::iterator i;
    int f=0;
    for(i=state.begin(); i!=state.end();i++)
    {
        if(search == i->first)
        {
            f++;
            cout<<"The population of "<<i->first<<" = "<<i->second<<endl;
        }
    }
    if(f==0)
    cout<<"state not found"<<endl;

    return 0;
}
