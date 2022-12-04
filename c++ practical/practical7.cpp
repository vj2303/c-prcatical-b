#include <iostream>
#include<vector>
using namespace std;

class items
{
  private:
    string name;
    int cost;
    int quantity;
  public:
    int code;
    items(int a, string b ,int c,int d)
    {
        code = a;
        name = b;
        cost =c;
        quantity = d;
    }
    void display()
    {
        cout<<"Item code = "<<code <<" | Name = "<<name<<" | cost = "<<cost;
        cout<<" | Quantity = "<<quantity<<endl;
    }
};


int main()
{
    vector<items> v1;
    int choice; 
    while(1)
    {
        cout<<"Enter 1-Inserting Item | 2-print all items | 3-search an item | 4- sort | 0-exit"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            string name;
            int cost,quantity,code;
            cout<<"enterr Item details: code|Name|Cost|Qty"<<endl;
            cin>>code>>name>>cost>>quantity;
            items item(code,name,cost,quantity);
            v1.push_back(item);
        }
        else if(choice ==2)
        {
            for(int i=0; i<v1.size(); i++)
            {
                v1[i].display();
            }
        }else if(choice == 3)
        {
            int c;
            cout<<"enter the  item code to be searched:"<<endl;
            cin>>c;
            int flag =0;
            for(int i=0; i<v1.size(); i++)
            {
                if(v1[i].code==c)
                {
                    v1[i].display();
                    flag =1;
                    break;
                }
                
            }
            if(flag ==0)
              cout<<"item not found"<<endl;
         
            
        }
        else if(choice == 4)
        {
            
        }else if(choice == 0)
        {
            cout<<"Exited"<<endl;
            break;
        }
    }

    return 0;
}
