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
			
		
		cout<<"\t\nEnter the first number to be operated\n\t";
		cin>>a;
		
		cout<<"\t\nEnter the second number to be operated\n\t";
		cin>>b;
		
		cout<<"\t\nPress 1 to add above two numbers\nPress 2 to subtarct above two numbers\nPress 3 to multiply above two numbers\nPress 4 to divide above numbers\nPress 5 to find the square-root of the given numbers as per choice\nPress 6 to find the cosine value of above given numbers as per choice\nPress 7 to find the sin value of above given numbers as per choice\n\t";
		cin>>choice;
		
		 switch(choice)
			{
				case 1:
					cout<<"The sum of two given numbers is "<<a+b;
					break;
				case 2:
					cout<<"The subtract of two given numbers is "<<a-b;
					break;
				case 3:
					cout<<"The multilpy of two given numbers is "<<a*b;
					break;
				case 4:
					cout<<"The divide of two given numbers is "<<a/b;
					break;
				case 5:
				    do
				    {				
					cout<<"\t\nFor finding the square-root of the first entered number press 1\nFor finding the square-root of the second entered number press 2\n\t";
					cin>>c;
					if(c==1)
					{
						cout<<"\t\nThe square-root of the first entered number is \n\t"<<sqrt(a);
					}
					if(c==2)
					{
						cout<<"\t\nThe square-root of the second entered number is \n\t"<<sqrt(b);
					}
					if( c != 1 && c != 2 )
					{
						cout<<" \t\nWRONG INPUTED\n\t ";
					}
				    }
					while( c != 1 && c != 2 );
					break;
				case 6:
					do
					{					
						cout<<"\t\nFor finding the cosine value of the first entered number press 1\nFor finding the cosine value of the second entered number press 2\n\t";
						cin>>d;
						if(d==1)
						{
							cout<<"\t\nThe cosine value of the first entered number is \n\t"<<cos(a);
						}
						if(d==2)
						{
							cout<<"\t\nThe cosine value of the second entered number is \n\t"<<cos(b);
						}
						if( d != 1 && d != 2 )
						{
							cout<<" \t\nWRONG INPUTED\n\t ";
						}
					}
					while( d != 1 && d != 2 );
					break;
				case 7:
					do
					{					
						cout<<"\t\nFor finding the sin value of the first entered number press 1\nFor finding the sin value of the second entered number press 2\n\t";
						cin>>e;
						if(e==1)
						{
							cout<<"\t\nThe sin value of the first entered number is \n\t"<<sin(a);
						}
						if(e==2)
						{
							cout<<"\t\nThe sin value of the second entered number is \n\t"<<sin(b);
						}
						if( e != 1 && e != 2 )
						{
							cout<<" \t\nWRONG INPUTED\n\t ";
						}
					}
				 	while( e != 1 && e != 2 );
					break;														
				default:
					cout<<"\t\nInvalid choice inputed\n\t";
					break;						
	        }	
			cout<<"\t\nDo you want to continue?\nPress 0 to Exit and any other number to continue\n\t";
			cin>>mainChoice;
		}
		while(mainChoice!=0);	
		
}
