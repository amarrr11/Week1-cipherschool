//1
#include<iostream>
using namespace std;
int main(){
	int x[5];
	cout<<"Enter 5 integers:"<<endl;

	for(int i=0;i<5;i++){
		cin>>x[i];
	}
	cout<<"The 5 given inputs are: "<<endl;
	for(int i=0;i<5;i++){
		cout<<x[i];
	}
	return 0;
}
//2
#include<iostream>
using namespace std;
int main(){
	int a[10];
	cout<<"Enter 10 integers:"<<endl;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"The 10 given inputs in reverse order are: "<<endl;
	for(int i=9;i>=0;i--){
		cout<<a[i];
	}
	return 0;
}
