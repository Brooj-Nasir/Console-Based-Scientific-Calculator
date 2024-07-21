#include<iostream>
#include<conio.h>
#include<cmath>
#include<complex>
using namespace std;
int main()

{
	int n ;
	cout<<"WELCOME TO SCIENTIFIC CALCULATOR!\n";
	cout<<"Please press 1 for absolute value\n 2 for exponetial function\n 3 for logrithm\n 4 for base 10 logrithm\n 5 for square root\n";
	cout<<" 6 for rounding value\n 7 for power function\n 8 for sine\n 9 for cosine\n 10 for tangent\n 11 for sin inverse\n 12 for cosine inverse ";
	cout<<"\n 13 for tangent inverse\n 14 for cube\n 15 for square\n Enter=";
	cin>>n;
	switch(n){
		case 1:
			{   int m,f;
				cout <<"Enter value=";
				cin>>m;
				f=abs(m);
				cout<<"Absolute value of given number is="<<f;
				break;
			 }
		case 2:{  double x,g;
		       cout<<"Enter value for exponent=";
			   cin>>x; 
		       g=exp(x);
		       cout<<"Exponential of given value is="<<g;
			break;
		}
		case 3:{ double x,g;
		cout<<"Enter value for log=";
		cin>>x;
		g=log(x);
		cout<<"Logrithum of given valuse is="<<g;
		
			break;
		}
		case 4:{ double x,g;
		cout<<"Enter value for base 10 log=";
		cin>>x;
		g=log10(x);
		cout<<"Base 10 logrithum of given value is="<<g;
		
			
			break;
		}
		case 5 :{ double x,g;
		   cout<<"Enter value for Square root=";
		   cin>>x;
		   g=sqrt(x);
		   cout<<"Square root of given value is="<<g;
			break;
		}
		case 6 :{ double x,g;
		cout<<"Enter value to be rounded=";
		cin>>x;
		g=round(x);
		cout<<"Rounded value is ="<<g;
			break;
		}
		case 7:{double a,b,c;
		cout<<"Enter value =";
		cin>>a;
		cout<<"\n Enter power of value=";
		cin>>b;
		c=pow(a,b);
		cout<<"Answer is="<<c;
			break;
		}
		case 8:{ double x,n;
    	cout<<"Enter value for sine function=";
	     cin>>x;
    	n=sin(x);
	     cout<<"Answer is="<<n;
		break;
	          }
	    case 9:{ double x,g;
	    cout<<"Enter value for cosine=";
	    cin>>x;
	 g=cos(x);
		break;
	          }	
	    case 10:{double x,g;
	    cout<<"Enter value for tangent=";
	    cin>>x;
	    g=tan(x);
	    cout<<"Answer is ="<<g;
			break;
		}  
		case 11: {double x,b;
		cout<<"Enter value for sin inverse=";
		cin>>x;
		b=asin(x);
		cout<<"Value of sin inverse is="<<b;
			break;
		} 
		case 12:{double x,c;
		cout<<"Enter value for cos inverse=";
		cin>>x;
		c=acos(x);
		cout<<"Value of cos inverse= "<<c;
			break;
		}  
		case 13:{double x,g;
	    cout<<"Enter value for tan inverse=";
		cin>>x;
	    g=atan(x);
	    cout<<"Value of tan inverse= "<<g;
			break;
		} 
		case 14:{double x,v;
		cout<<"Enter value=";
		cin>>x;
		v=pow(x,3);
		cout<<"Cube is ="<<v;
			break;
		}
		case 15:{double x,v;
		cout<<"Enter value=";
		cin>>x;
		v=pow(x,2);
		cout<<"Square is ="<<v;
			break;
		}
	}cout<<"\nThank you for using:)";
	
}
