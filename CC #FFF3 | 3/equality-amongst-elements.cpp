#include <iostream>

using namespace std;
class challenge
{
    int size;
    public:
        int array[20];           //to store the input
        challenge(int s)        //accept lenght of array
        {
            size = s;
        }
        void equality();        //to obtain the equality amongst the elements
};

void challenge::equality()
{
    int max,count=0,j;
    for(int i=0;i<size;i++)      //accept the input
    {
        cin>>array[i];
    }
                                //sorting the data using bubble sort
    int temp;
    for(int i = 0; i<size; i++) 
    {
        for(int j = i+1; j<size; j++)
         {
             if(array[j] < array[i]) 
             {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
              }
         }
    }
     
    max = array[size-1];                    //logic for the problem statement
    int i=0;                                // assigning maz to last element of the sorted array
    while(array[i]!=max)                // iterating till all values in array are equal to largest element 
    {                                   
        while(array[j]!=max)                    
        {
            if(array[j]!=max)
            {
                array[j]+=1;                //adding one to each element in the array
            }
            j++;
        }
        j=0;
        count+=1;                       //maitaining a count of minimum number of operations required
    }
    
    cout<<count;
}

int main()
{
    int size;
    cout<<"Enter size of array : ";         //accepeting size of array
    cin>>size;
    challenge c(size);                      
    
    c.equality();               //function call to perform the logic 
    return 0;
}
