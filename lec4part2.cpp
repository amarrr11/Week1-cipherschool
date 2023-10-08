//1
#include<iostream>
using namespace std;

int main(){
	float a,b;
	cout<<"give 2 floating point numbers as input"<<endl;
	cin>>a>>b;
	if(a>0.01 && b>a){
		cout<<"The condition in if statement is correct"<<endl;
	}
	else{
		cout<<"The condition is false"<<endl;
	}
	return 0;
}

//2
#include<iostream>
using namespace std;
int main(){
	 int a,b,c,d;
//	 cout<<"give 4 integers as input a,b,c,d"<<endl;
//	 cin>>a>>b>>c>>d;
//
//	 if(a>b && c>d){
//	 	cout<<"haha";
//	 }
//	 else if(a>b && c<d){
//	 	cout<<"hehe";
//	 }
//	 else{
//	 	cout<<"huhu";
//	 }
    cout<<"enter a int:"<<endl;
    cin>>a;

    switch(a){  //to the condition in this paranthesis //it will first evaluate the value inside the switch paranthesis
    	case 1:
    		cout<<"The value of a is 1"<<endl;
    		break;
    	case 2:
    		cout<<"The value of a is 2"<<endl;
    		break;
    	case 3:
    		cout<<"The value of a is 3"<<endl;
    		break;
		default:
		    cout<<"default will always be printed";
			break;
	}
	return 0;
}

//3
#include<iostream>
using namespace std;
int main(){
	 int marks;
	 cout<<"Student, please enter the marks to calculate the grade: "<,endl;
	 cin>>marks;
	 if(marks>90){
	 	cout<<"A";
	 }
	 else if(marks>80){
	 	cout<<"B";
	 }
	 else if(marks>70){
	 	cout<<"C";
	 }
	 else{
	 	cout<<"Pass";
	 }
	return 0;
}
