#include<iostream>
using namespace std;
#define SIZE 5
template <class X>
class queue{
	
	//int size;
	int r=-1,f=-1;
	X arr[SIZE];
	bool isfull(X arr[]){
		if(f==0 && r==SIZE-1)
		return true;
		return false;
	}
	bool isempty(X arr[]){
		if(f==-1)
		return true;
		return false;
	}
	public:
		
		
		void push(X data){
			if(isfull(arr)) cout<<"Queue is Overflow"<<endl;
			else{
				if(f==-1) f=0;
				//else{
					
					arr[++r]=data;
					cout<<"Inserted Element is :"<<arr[r]<<endl;
				//}
			}
			
		}
		void pop(){
			if(isempty(arr)) cout<<"Queue UnderFlow:"<<endl;
			else{
				if(f==SIZE) f=-1;
				else{
					cout<<"Deleted element is :"<<arr[f++]<<endl;
				}
			}
			
		}
		/*void display(){
			if(isempty(arr))cout<<"Queue UnderFlow:"<<endl;
			else{
				for(int i=f;i<=r;i++){
					cout<<arr[i]<<"  ";
				}cout<<endl;
			}
		}*/
};
/*If you want to display you just to uncommend display function */

main(){
	queue<int> q;
	q.push(5);
	q.pop();
	q.pop();
}
