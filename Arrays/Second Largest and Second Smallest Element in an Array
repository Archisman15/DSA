int getSecondLargest(vector<int>arr, int size)
{
    int largest=-1;
    int secondl;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondl=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondl){
            secondl=arr[i];
        }
    }
    return secondl;
}
int getSecondSmallest(vector<int>arr, int size)
{
    int smallest=INT_MAX;
    int seconds;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            seconds=smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<seconds){
            seconds=arr[i];
        }
    }
    return seconds;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondlargest=getSecondLargest(a,n);
    int secondsmallest=getSecondSmallest(a,n);
    return {secondlargest,secondsmallest};
}
