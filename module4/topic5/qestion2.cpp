/*Write a program of to sort the array using templates*/
#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
void show(int a[], int array_size) 
{ 
    for (int i = 0; i < array_size; ++i) 
        cout << a[i] << " "; 
} 
   
int main() 
{ 
    int a[] = { 17, 6, 7, 9, 8, 11, 30, 5, 4, 0 }; 
    
    int asize = sizeof(a) / sizeof(a[0]); 
    cout << "The array before sorting is : \n"; 
    
    
    show(a, asize); 
  
      // sort the array 
    sort(a, a + asize); 
  
    cout << "\n\nThe array after sorting is :\n"; 
    
    
    show(a, asize); 
  
    return 0; 
}
