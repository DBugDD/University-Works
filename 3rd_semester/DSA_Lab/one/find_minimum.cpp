#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> my_array;
    int n, input;

    cout<< "Enter elements number: "<< endl;
    cin>> n;

    cout<< "Enter the elements: "<< endl;

    for(int i=0; i<n; i++){
        cin>> input;
        my_array.push_back(input);
    }
    if(my_array.size()==0){
        cout<< "Array is empty";
        return 1;
    }

    int min_value;
    min_value=my_array[0];

    for(int i=0; i<my_array.size(); i++){
        if(my_array[i]<min_value){
            min_value=my_array[i];
        }
    }

    cout<<"Lowest Value: "<<min_value<<endl;
}
