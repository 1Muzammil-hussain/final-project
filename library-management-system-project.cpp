
//***************************************************************
//                   HEADER FILE USED IN PROJECT
//****************************************************************

#include <iostream>
#include <fstream>
#include<stdio.h>
#include<conio.h>
#include <string>
#include<windows.h>
using namespace std;
void bar();
void menus();
void input(string title,string publisher,string issn,float cost);
void output();
void stinput(string name,string clas,string no);
void stoutput();
void iss();
void viwiss();
void retur();
void viwret();
void searchr();
int main(){
	 bar();
  string title,publisher,issn;
  string name,clas,no;
  float  cost;
  int choice;
  while (true) 
{
        
        menus();       
        cout << "Enter your choice: ";
        cin >> choice;
        system("cls");
        
  switch (choice)
   {
            case 1:
            input(title,publisher,issn,cost);	
            break;
            case 2:
            output(); 	
            break;
            case 3:
            stinput(name,clas,no);
            break;
            case 4:
            stoutput();
            break;
            case 5:
            stoutput();
            cout<<endl;
            output();
			cout<<endl;
			iss();
			break;
			case 6:
            viwiss();
            break;
            case 7:
            retur();
            break;
            case 8:
            viwret();
            break;
            case 9:
            searchr();
            break;
		    case 0:
            exit(0);
            break;
            default:
            cout << "Invalid choice. Please try again." <<endl;
            break;	
  
   }
  
 }
  
	
}
void bar()
{     
        system("color 0B");
        char a = 177, b = 219;
		 cout<<"\n\n\n\n\n\n\n\n";
		 cout<<"\t\t\t\t\t---------------------------\n";
		 cout<<"\t\t\t\t\t--Developer----------------\n";
		 cout<<"\t\t\t\t\t           Muzammil Hussain\n";
		 cout<<"\t\t\t\t\t           Ali 	haide    \n";
		 cout<<"\t\t\t\t\t           Hafiz jhanzaib  \n";
		 cout<<"\t\t\t\t\t---------------------------\n";
		 cout<<"\t\t\t\t\t Library Management system \n";
		 cout<<"\t\t\t\t\t---------------------------\n";
		 cout<<"\t\t\t\t\t---------------------------\n";
     cout<<"\n\t\t\t\t\t"
            "Loading...\n";
    cout<<"\t\t\t\t\t";
for (int i = 0; i < 26; i++)
        cout<<a;
		cout<<"\r";
    cout<<"\t\t\t\t\t";
  for (int i = 0; i < 26; i++) {
        cout<<b;
		 Sleep(300);	}
		 system("cls");
}
	
	
void menus(){
         cout<<"\n\n\n\n\n\n\n\n";
	     cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t      Library Record            \n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
		 cout<<"\t\t\t\t\t--------------------------------\n";
	     cout<<"\t\t\t\t\t| [1] Add  books                 |\n";
		 cout<<"\t\t\t\t\t| [2] display all books          |\n";
		 cout<<"\t\t\t\t\t| [3] Add students               |\n";
		 cout<<"\t\t\t\t\t| [4] display all students       |\n";
		 cout<<"\t\t\t\t\t| [5] Issue book to student      |\n";
		 cout<<"\t\t\t\t\t| [6] display Issue book         |\n";
		 cout<<"\t\t\t\t\t| [7] return book                |\n";
		 cout<<"\t\t\t\t\t| [8] display all return book    |\n";
		 cout<<"\t\t\t\t\t| [9] Search by return books     |\n";
	     cout<<"\t\t\t\t\t---------------------------------\n";
	     cout<<"\t\t\t\t\t  [0] Exits                      \n";
		 cout<<"\t\t\t\t\t----------------------------------\n";
		   
		 
}
void input(string title,string publisher,string issn,float cost)
{
  char c;
   ofstream file("books.txt" ,ios :: app);
  do{
  cout<<"Enter the title of the book: ";
  cin.ignore();
  getline(cin,title);
  cout<<"Enter the publisher of the book:"; 
  getline(cin,publisher);
  cout<<"Enter the ISSN of the book: ";
  getline(cin,issn);
  cout<<"Enter the cost of the book: ";
  cin>>cost;
 
  file<<title<<"\t\t\t "<<publisher<<"\t\t\t "<<issn<<"\t\t\t "<<cost<<endl;
  	cout<<"\n\nDo you want to add more record..(y/n?)";
	cin>>c;  

	}while(c=='y'||c=='Y');
 	file.close();
  cout << "Book added successfully!" <<endl;  	
}
void output()
{
	cout<<"============================books============================================================\n";
	cout<<"Book Number"<<"\t\t\t "<<"publisher"<<"\t\t\t "<<" ISSN "<<"\t\t\t "<<"COST \n";
	cout<<"=============================================================================================\n";
	            ifstream file("books.txt");
                string line;
                while (getline(file, line)) 
				{
                    cout << line <<endl;
                }
                
                file.close();
	
}

void stinput(string name,string clas,string no)
{
	char ch;
   ofstream file("student.txt" ,ios :: app);
  do{
  cout<<"Enter  the name of student: ";
  cin.ignore();
  getline(cin,name);
  cout<<"Enter the class of the student:"; 
  getline(cin,clas);
  cout<<"Enter the Roll number: ";
  getline(cin,no);
 
  file<<name<<"\t\t\t "<<clas<<"\t\t\t "<<no<<endl;
  	cout<<"\n\nDo you want to add more record..(y/n?)";
	cin>>ch;  

	}while(ch=='y'||ch=='Y');
 	file.close();
  cout << "student  added successfully!" <<endl;  	
}
void stoutput()
{
	cout<<"=======================student===========================================\n";
	cout<<"student name"<<"\t\t\t"<<"class"<<"\t\t\t"<<"ROLL number"<<"\n";
	cout<<"=========================================================================\n";
	            ifstream sfile("student.txt");
                string sline;
                while (getline(sfile, sline)) 
				{
                    cout << sline <<endl;
                }
                
                sfile.close();
	
}
void iss()
{
 char c;
   ofstream file("issue.txt" ,ios :: app);
  do{ string r,i;
  cout<<"Enter the roll numbers: ";
  cin.ignore();
  getline(cin,r);

  cout<<"Enter the ISSN of the book: ";
  getline(cin,i);
 
  file<<r<<"\t\t\t "<<i<<endl;
  	cout<<"\n\nDo you want to add more record..(y/n?)";
	cin>>c;  

	}while(c=='y'||c=='Y');
 	file.close();
  cout << "issue  added successfully!" <<endl;
	
	
}
void viwiss(){
	cout<<"=======================issue books=======================================\n";
	cout<<"ROLL number"<<"\t\t\t"<<"issne"<<"\n";
	cout<<"=========================================================================\n";
	
	            ifstream sfile("issue.txt");
                string sline;
                while (getline(sfile, sline)) 
				{
                    cout << sline <<endl;
                }
                
                sfile.close();	
}
void retur(){
	
	char c;
   ofstream file("return.txt" ,ios :: app);
  do{ string r,i;
  cout<<"Enter the roll numbers: ";
  cin.ignore();
  getline(cin,r);

  cout<<"Enter the ISSN of the book: ";
  getline(cin,i);
 
  file<<r<<"\t\t\t "<<i<<endl;
  	cout<<"\n\nDo you want to add more record..(y/n?)";
	cin>>c;  

	}while(c=='y'||c=='Y');
 	file.close();
  cout << "return  books successfully!" <<endl;
	
	
}
void viwret()
{
	cout<<"=======================return books====================================\n";
	cout<<"ROLL number"<<"\t\t\t"<<"issne"<<"\n";
	cout<<"=========================================================================\n";
	            ifstream rfile("return.txt");
                string rline;
                while (getline(rfile, rline)) 
				{
                    cout << rline <<endl;
                }
                
                rfile.close();	
	
}
void searchr(){
    string rolnu;
	cout<<"enter the number for roll number";
	cin.ignore();
	getline(cin,rolnu);
	ifstream rfile("return.txt");
	string line;
	int f=0;
	while(rfile >> line)
	{
		if(line==rolnu){
			cout<<"==========================================================\n";
			cout<<"you  return books so you New book is  issue"<<endl;
			cout<<"==========================================================\n";
			stoutput();
            cout<<"-------------------------------------------------------"<<endl;
            output();
            iss();
			
			f=1;
		}	
	}
	if(f==0)
	{
		cout<<"=====================================================\n";
		cout<<"You  not return books so not New book is not issued\n";
		cout<<"=====================================================\n";
	}
		
	rfile.close();
	
}
