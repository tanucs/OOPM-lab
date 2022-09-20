#include<iostream>
using namespace std;

class student 
{
	 private: 
	      char name[30];
	      int roll_number ;
	      int year;
	      
	 public:
	      
	      void getDetails(void);
	      void putDetails(void);
};
void student::getDetails(void){
	
	
	cout<<"enter name:\n";
	cin>>name;
	cout<<"enter roll_number:\n";
	cin>>roll_number;
	cout<<"enter year:\n";
	cin>>year;
}
void student::putDetails(void){
	cout<<"student Details:\n";
	cout <<"name:"<<name<<"\n"<<"roll_number:"<<roll_number<<"\n"<<"year:"<<year;
	
}
int main(){
	
	student std;
	
	std.getDetails();
	std.putDetails(); 
	
	return 0;
}
