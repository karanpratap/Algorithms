#include<bits/stdc++.h>
#define MAX 100 
using namespace std;

void swap(int* a,int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void display(int elements[],int noOfElements){
	for(int i=0;i<noOfElements;i++)
		cout<<elements[i]<<"\t";
}

void bubbleSort(int elements[],int noOfElements){
	for(int i=0;i<noOfElements-1;i++)
		for(int j=0;j<noOfElements-i-1;j++)
			if(elements[j+1]<elements[j])
				swap(&elements[j],&elements[j+1]);
}

int main(){
	int noOfElements,elements[MAX];
	cout<<"Number of elements:";
	cin>>noOfElements;
	cout<<"Elements:";
	
	for(int i=0;i<noOfElements;i++)
		cin>>elements[i];
	
	cout<<"\nBefore swapping:";
	
	display(elements,noOfElements);
	cout<<endl;
	bubbleSort(elements,noOfElements);
	cout<<"Sorted Elements:";
	display(elements,noOfElements);
	cout<<endl;
	return 0;
}
