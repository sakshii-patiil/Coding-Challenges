#include <iostream>
using namespace std;

class challenge
{
    int size=0;
    public:
        int array[50];
        challenge(int s)
        {
            size = s;
        }
        void bird_watching();
};

void challenge::bird_watching()                         //logic of the problem
{
    int max=0,count=0,val;
    
   for(int i=0;i<size;i++)                             //accept the values in array
   {
       cin>>array[i];
   }
   
   for(int i=0;i<size;i++)                              //calculating repeatation of elements in the array
   {
       for(int j=0;j<size;j++)
       {
           if(array[i]==array[j])
           {
               count++;
           }
       }
       if(count>max)                                    // storing the maximum count of element in max 
        {                                               //val the the value in array with maximum number of repetation
            max=count;
            val=array[i];
        }
        count=0;
   }
   
   cout<<val<<" "<<max;
   
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    challenge c(size);
    c.bird_watching();
    return 0;
}

