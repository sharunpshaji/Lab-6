#include<iostream>
using namespace std;

// declaring function Search

void Search(int arr[],int lsize, int rsize, int key){
	// Make a variable which is to make our array into two parts and find it's middle
	int mid = (lsize +rsize)/2;
	// assuming the array to be sorted
	if (key <= arr[rsize] && key >= arr[lsize]){
		// if the mid is our searched element
		if(arr[mid] == key){
			cout << " Found at " << mid;
		}
		else{
                //if the value of the required element is greater than mid
			if(arr[mid] < key){
				Search(arr,mid+1,rsize,key);
			}
        //if the value of the required element is lesser than mid
			else{
                    // not in the specified limit then gives output as -1
				Search(arr,lsize,mid-1,key);
			}
		}
	}
	else{
		cout << "-1";
	}
}









int main(){
int x;
cout<<"Enter the number to be searched"<<endl;
cin>>x;

int a[6]={5,8,10,45,95,455};
//calling the function search
Search ( a , 0 , 5 , x);

return 0;

}
