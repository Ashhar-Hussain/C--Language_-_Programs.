#include<iostream>
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
	
	
		cout<<"Enter the first number to be operated";
		cin>>a;
		
		cout<<"Enter the second number to be operated";
		cin>>b;
		
		cout<<"Press 1 to add above two numbers\nPress 2 to subtarct above two numbers\nPress 3 to multiply above two numbers\nPress 4 to divide above numbers\nPress 5 to find the square-root of the given numbers as per choice\nPress 6 to find the cosine value of above given numbers as per choice\nPress 7 to find the sin value of above given numbers as per choice";
		cin>>choice;
		
		do 
		
			switch(choice)
			{
				case 1:
					cout<<a+b;
				case 2:
					cout<<a-b;
				case 3:
					cout<<a*b;
				case 4:
					cout<<a/b;
				case 5:
				    do
					cout<<"For finding the square-root of the first entered number press 1\nFor finding the square-root of the second entered number press 2";
					cin>>c;
					if(c==1)
					{
						cout<<"The square-root of the first entered number is "<<sqrt(a);
					}
					if(c==2)
					{
						cout<<"The square-root of the second entered number is "<<sqrt(b);
					}
					if( c != 1 || c != 2 )
					{
						cout<<" WRONG INPUTED ";
					}
					
					while( c != 1 || c != 2 )
				case 6:
					do
						cout<<"For finding the cosine value of the first entered number press 1\nFor finding the cosine value of the second entered number press 2";
						cin>>d;
						if(d==1)
						{
							cout<<"The cosine value of the first entered number is "<<cos(a);
						}
						if(d==2)
						{
							cout<<"The cosine value of the second entered number is "<<cos(b);
						}
						if( d != 1 || d != 2 )
						{
							cout<<" WRONG INPUTED ";
						}
						
						while( d != 1 || d != 2 )
				case 7:
					do
						cout<<"For finding the sin value of the first entered number press 1\nFor finding the sin value of the second entered number press 2";
						cin>>e;
						if(e==1)
						{
							cout<<"The sin value of the first entered number is "<<sin(a);
						}
						if(e==2)
						{
							cout<<"The sin value of the second entered number is "<<sin(b);
						}
						if( e != 1 || e != 2 )
						{
							cout<<" WRONG INPUTED ";
						}
						
						while( e != 1 || e != 2 )		
				default:
					cout<<"Invalid choice inputed";
						cout<<"Do you want to continue operating ?"
						cin>>ans;
						
						if( ans == 'n' || ans == 'N')
						{
							cout<<"Good-Bye"
						}	
			while( ans == 'y' || ans == 'Y' )		
						
			
						
						
					
				
	
			}
}
