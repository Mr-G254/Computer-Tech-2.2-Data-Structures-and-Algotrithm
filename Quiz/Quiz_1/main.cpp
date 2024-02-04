#include <iostream>

using namespace std;

int remove_duplicates(int num_array[],int length){
    int len = length;
    int k;
    for(k=0;k<len;k++){
        int num_count = 0;
        for(int i=0;i<len;i++){
            if(num_array[i]==num_array[k]){
                if(num_count == 0){
                    num_count++;
                }
                else{
                    for(int j=i;j<len-1;j++){
                        num_array[j] = num_array[j+1];
                    }
                    len = len -1;

                }
            }
        }
    }
    return k;
}
int main()
{
    int nums[] = {1,2,2,3,4,5,5,5,6,77};
    int length = sizeof(nums)/sizeof(int);
    int new_len = remove_duplicates(nums,length);
    cout<<"New length : "<<new_len;

    return 0;


}
