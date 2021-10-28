#inlcude<iostream>
using namespace std;

void Bubblesort(int A[],int n){
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n-i-1; j++)
        {
            if (A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }

            
        }
        if (flag==0)
        {
             break;
        }
        
        
    }
    
}



int main(){
    int A[]={64,34,25,12,22,11,90};
   // int n=sizeof(A)/sizeof(A[0]);
    Bubblesort(A,7);
    for (int i = 0; i < 7; i++)
    {
        cout<<A[i]<<" ";
    }
    
}
