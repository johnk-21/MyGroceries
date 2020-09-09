#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;
	int count;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
				count++;
    }
  }while( input != 'q' && input != 'Q' );

	cout << "Items entered: " << count << endl;
    
  return 0;
}
