#include <iostream>

using namespace std;

void rotate_array(int num_array[],int array_len,int rotate_val){
    int new_array[array_len];
    copy(num_array,num_array+array_len,new_array);

    for(int i=0;i<array_len;i++){
        int position = i - rotate_val;
        if(position<0){
            position *= -1;
            position = array_len - position;
        }

        num_array[position] = new_array[i];
    }
}
int main()
{
    int num[5] = {1,2,3,4,5};
    int len = sizeof(num)/sizeof(int);
    rotate_array(num,len,3);

    for(int i: num){
        cout<<i;
    }
    return 0;
}
