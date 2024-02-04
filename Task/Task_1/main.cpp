#include <iostream>
using namespace std;


void summation(int* number_array,int len){
    int total = 0;

    for (int i=0; i<len; i++){
        total += *(number_array+i);
    }

    cout << "Sum of all integers: " << total << endl;

}

void maximum(int* number_array,int len){
    int max_num = 0;

    for (int i=0; i<len; i++){
        if (*(number_array+i) > max_num)
            max_num = *(number_array+i);
    }

    cout << "Largest integers: " << max_num << endl;
}

int main()
{   int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int numbers[n];

    for(int i=0; i<n; i++){
        cout << "Enter a number: ";
        cin >> numbers[i];
    }
    cout<<'\n';

    summation(numbers,n);
    maximum(numbers,n);

   return 0;
}
