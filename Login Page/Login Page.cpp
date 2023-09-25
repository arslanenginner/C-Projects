#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	string n, m, o, p, q, r;
    cout<<"       ***Welcome To LMS Portal***"<<endl<<endl;
    cout<<"Teacher or Student : ";
    cin>>n;
    if (n=="Teacher" || n=="teacher" || n=="TEACHER")
    {
	
    cout<<"Login or Signup : ";
    cin>>m;
    	if(m=="Login" || m=="login" || m=="LOGIN")
    	{
    		cout<<"Enter Email : ";
            cin>>o;
            cout<<"Enter Password : ";
            cin>>p;
            cout<<"    *Teacher Login Area*"<<endl;
            cout<<"Result or Attendence : ";
            cin>>q;
            if(q=="result"||q=="Result"||q=="RESULT")
            {   
			    cout<<endl; 
            	cout<<"Name : Ahmad "<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 2.8"<<endl<<endl;
                cout<<"Name : Ali"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.4"<<endl<<endl<<endl;
                cout<<"Name : Hassan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 2.9"<<endl<<endl;
                cout<<"Name : Nabeel"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.0"<<endl<<endl;
                cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.5"<<endl<<endl;
			}
			else if (q=="Attendence"||q=="attendence"||q=="ATTENDENCE")
			{   
			    cout<<endl;
				cout<<"Name : Ahmad "<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 70%"<<endl<<endl;
                cout<<"Name : Ali"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 90%"<<endl<<endl;
                cout<<"Name : Hassan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 75%"<<endl<<endl;
                cout<<"Name : Nabeel"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 90%"<<endl<<endl;
                cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 80%"<<endl<<endl;
			}
		    else
			{
                cout<<endl;
   			    cout<<"You make a mistake,try again.";
			    cout<<endl;
			}
		}
		else if (m=="signup"||m=="SIGNUP"||m=="Signup")
        {
          	cout<<endl;
            cout<<"Enter Email : ";
            cin>>o;
            cout<<"Enter OTP : ";
            cin>>r;
            cout<<"Create Password : ";
            cin>>p;
            cout<<"    *Teacher Login Area*"<<endl;
            cout<<"Result or Attendence : ";
            cin>>q;
            if(q=="result"||q=="Result"||q=="RESULT")
            {
               	cout<<endl;
               	cout<<"Name : Ahmad "<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 2.8"<<endl<<endl;
                cout<<"Name : Ali"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.4"<<endl<<endl;
                cout<<"Name : Hassan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 2.9"<<endl<<endl;
                cout<<"Name : Nabeel"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.0"<<endl<<endl;
                cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.5"<<endl<<endl;
			}
			else if (q=="Attendence"||q=="attendence"||q=="ATTENDENCE")
			{
				cout<<endl;
				cout<<"Name : Ahmad "<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 70%"<<endl<<endl;
                cout<<"Name : Ali"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 90%"<<endl<<endl;
                cout<<"Name : Hassan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 75%"<<endl<<endl;
                cout<<"Name : Nabeel"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 90%"<<endl<<endl;
                cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 80%"<<endl<<endl;
			}
			else 
			{
				cout<<endl;
				cout<<"You make a mistake,try again.";
				cout<<endl;	
			}
        }
        else 
			{
				cout<<endl;
	     	    cout<<"You make a mistake,try again.";
				cout<<endl;	
			}
		
   }
  else if (n=="Student" || n=="student" || n=="STUDENT")
    {
        cout<<"Login or Signup : ";
        cin>>m;
        if(m=="Login" || m=="login" || m=="LOGIN")
            {
            	cout<<"Enter Email : ";
                cin>>o;
                cout<<"Enter Password : ";
                cin>>p;
               	cout<<"    *Student Area*"<<endl;
               	cout<<"Result or Attendence : ";
               	cin>>q;  
                if(q=="result" || q=="Result" || q=="RESULT")
                {
                	cout<<endl;
			        cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.5"<<endl<<endl;
			        cout<<endl;
                }
               else if (q=="Attendence" || q=="attendence" || q=="ATTENDENCE")
               {
               	    cout<<endl;
                  	cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 80%"<<endl<<endl;
                  	cout<<endl;
				}
				else 
				{
					cout<<endl;
				    cout<<"You make a mistake,try again.";	
				    cout<<endl;
				}
			}
		else if (m=="signup" || m=="SIGNUP" || m=="Signup")
		    {
			 	cout<<"Enter Email : ";
                cin>>o;
                cout<<"Enter OTP : ";
                cin>>r;
                cout<<"Create Password : ";
                cin>>p;
                cout<<"    *Student Area*"<<endl;
                cout<<"Result or Attendence : ";
                cin>>q;
                if(q=="result" || q=="Result" || q=="RESULT")
                {
                	cout<<endl;
                   	cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"CGPA : 3.5"<<endl<<endl;
                   	cout<<endl;
				}
	     		else if (q=="Attendence" || q=="attendence" || q=="ATTENDENCE")
				{
					cout<<endl;
				    cout<<"Name : Arslan"<<endl<<"Ag_number : 2022-ag-33**"<<endl<<"Attendence : 80%"<<endl<<endl;
					cout<<endl;	
				}
				else 
				{
					cout<<endl;
					cout<<"You make a mistake,try again.";
					cout<<endl;
				}
		   }
	    else
	       {
	       	   cout<<endl;
		       cout<<"You make a mistake,try again.";
		       cout<<endl;
	       }
    }
	else
	{
		cout<<endl;
		cout<<"You make a mistake,try again.";
		cout<<endl;	
	}
	getch();
}
    	
