#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class SolutionSeventeen{
public:
	void duplicateZeros(vector<int>& arr){
		int n=arr.size();
		for(int i=0; i<n; i++){
			if(arr[i]==0){
				//al insertar agrega no reemplaza ni elimina en automatico
				arr.insert(arr.begin()+i+1,0);
				arr.pop_back();
				i+=1;
			}
		}
		return;
	}
};

int main(){
	return 0;
}