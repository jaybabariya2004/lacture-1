#include<iostream>

using namespace std;

class Data{
	
	private:
		int id,age;
		char name[50],course[50],email[50],city[50],college[50];
		
		public:
			void setter(){
				
				cout<<"Enter Id :";
				cin>>id;
				
				cout<<"Enter Name :";
				cin>>name;
				
				cout<<"Enter Age :";
				cin>>age;
				
				cout<<"Enter course :";
				cin>>course;
				
				cout<<"Enter email :";
				cin>>email;
				
				cout<<"Enter city :";
				cin>>city;
				
				cout<<"Enter college :";
				cin>>college;
			}
			void getter(){
				
				cout<<"ID :"<<id<<endl;
				cout<<"Name :"<<name<<endl;
				cout<<"Age :"<<age<<endl;
				cout<<"course :"<<course<<endl;
				cout<<"email :"<<email<<endl;
				cout<<"city :"<<city<<endl;
				cout<<"college :"<<college<<endl<<endl;;
			}
};
int main(){
	
	Data obj1,obj2,obj3,onj4,obj5;
	
	obj1.setter();
	obj2.setter();
	
	obj1.getter();
	obj2.getter();
}
