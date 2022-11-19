#include <iostream>

using namespace std;

int main(){
	int vector1[3] = {1,2,3};
	int vector2[3] = {4,5,6};
	
	cout << "{";
	for(int i = 0;i<3; i++){
		for(int j = 0;j<3; j++){
			cout <<"("<<vector1[i]<<","<<vector2[j]<<"),"; 
		}
	}
	cout << "}";
	//(xyz)
	//(xyz)
	//{(x,x),(x,y),(x,z),(y,x) ... (z,z)}
	return 0;
}
