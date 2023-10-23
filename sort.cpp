#include <iostream>

using namespace std;


//tc bc=o(n)
void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(a[min]>a[j]){
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
    // swap(a[min],a[i])
}

//TC=o(n); ac,wc=o(n^2)
void bubble_sort(int a[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}

//time complexicity : bc=o(n), avg case,worst case=o(n^2);
void insertion_sort(int a[],int n){
    // int j=
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    // selection_sort(a ,n);
    // bubble_sort(a ,n);
    insertion_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}