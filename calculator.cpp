#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int ans;
	int choice;
	int mainChoice; // variable to deal with the main do-while
		
		do 
		{
			
		
		cout<<"\nEnter the first number to be operated\n";
		cin>>a;
		
		cout<<"\nEnter the second number to be operated\n";
		cin>>b;
		
		cout<<"\nPress 1 to add above two numbers\nPress 2 to subtarct above two numbers\nPress 3 to multiply above two numbers\nPress 4 to divide above numbers\nPress 5 to find the square-root of the given numbers as per choice\nPress 6 to find the cosine value of above given numbers as per choice\nPress 7 to find the sin value of above given numbers as per choice\n";
		cin>>choice;
		
		 switch(choice)
			{
				case 1:
					cout<<a+b;
					break;
				case 2:
					cout<<a-b;
					break;
				case 3:
					cout<<a*b;
					break;
				case 4:
					cout<<a/b;
					break;
				case 5:
				    do
				    {				
					cout<<"\nFor finding the square-root of the first entered number press 1\nFor finding the square-root of the second entered number press 2\n";
					cin>>c;
					if(c==1)
					{
						cout<<"\nThe square-root of the first entered number is \n"<<sqrt(a);
					}
					if(c==2)
					{
						cout<<"\nThe square-root of the second entered number is \n"<<sqrt(b);
					}
					if( c != 1 && c != 2 )
					{
						cout<<" \nWRONG INPUTED\n ";
					}
				    }
					while( c != 1 && c != 2 );
					break;
				case 6:
					do
					{					
						cout<<"\nFor finding the cosine value of the first entered number press 1\nFor finding the cosine value of the second entered number press 2\n";
						cin>>d;
						if(d==1)
						{
							cout<<"\nThe cosine value of the first entered number is \n"<<cos(a);
						}
						if(d==2)
						{
							cout<<"\nThe cosine value of the second entered number is \n"<<cos(b);
						}
						if( d != 1 && d != 2 )
						{
							cout<<" \nWRONG INPUTED\n ";
						}
					}
					while( d != 1 && d != 2 );
					break;
				case 7:
					do
					{					
						cout<<"\nFor finding the sin value of the first entered number press 1\nFor finding the sin value of the second entered number press 2\n";
						cin>>e;
						if(e==1)
						{
							cout<<"\nThe sin value of the first entered number is \n"<<sin(a);
						}
						if(e==2)
						{
							cout<<"\nThe sin value of the second entered number is \n"<<sin(b);
						}
						if( e != 1 && e != 2 )
						{
							cout<<" \nWRONG INPUTED\n ";
						}
					}
				 	while( e != 1 && e != 2 );
					break;														
				default:
					cout<<"\nInvalid choice inputed\n";
					break;						
	        }	
			cout<<"Do you want to continue? Press 0 to Exit and 1 to continue";
			cin>>mainChoice;
		}
		while(mainChoice!=0);	
		
}
