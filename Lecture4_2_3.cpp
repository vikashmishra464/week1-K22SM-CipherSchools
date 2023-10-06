#include<iostream>
using namespace std;
int main(){
	 int a,b,c,d;
    cout<<"enter a int:";
    cin>>a;
    
    switch(a){  //to the condition in this paranthesis //it will first evaluate the value inside the switch paranthesis 
    	case 1:
    		cout<<"The value of a is 1";
    		break;
    	case 2:
    		cout<<"The value of a is 2";
    		break;
    	case 3:
    		cout<<"The value of a is 3";
    		break;	
		default:
		    cout<<"default will always be printed";
			break;		
	} 
	return 0;
}
