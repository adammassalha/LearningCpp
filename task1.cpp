#include <iostream>
using namespace std;

bool check(int nums[],int size) {
  

  for(int i = 0; i<size/2; i++){
  if(nums[i] != nums[(size)-i-1])
    return false;
  }
  return true;
}


int main()
{
    int size;
     cin>>size ;

    int nums[size];
    cout << "Enter the array: "<<endl;
    for (int i = 0; i<size; i++)
    {
        cin>>nums[i];
    }
    cout <<boolalpha<< check( nums, size);
    
    

    return 0;
}