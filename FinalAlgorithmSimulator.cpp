#include <iostream>
using namespace std;

int arr[100];
int n;
int choice1,choice2;

void arrInsert(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void arrDisp(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
// ----------------------------------------------------Searching--------------------------------------------------------

int LinearSearch(int key) {
    for (int i = 0; i < n; i++) {
        cout<<"\nThe value present at "<<i<<" index is "<<arr[i];
        if (arr[i] == key) {
            cout<<", which is equal to the key->"<<key<<"."<<endl<<"So the key is present at "<< i <<" index."<<endl<<endl;
            return i;  
        }else{
            cout<<", which is not equal to the key->"<<key<<"."<<endl;
        }
    }
    return -1; 
}

void LinearSearchDetails(){
    int key;
    cout<<"You have choosed Linear Search."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    cout<<"Enter the key you want to find : ";
    cin>>key;
    if(LinearSearch(key) == -1){
        cout<<"The key isn't present in the array.";
    }
}

int BinarySearch(int key){
    int beg = 0;
    int end = n-1;
    int mid;
    int count =1;
    cout<<"\n=>> In starting the beg is at "<<beg<<" index and the end is at "<<end<<" index."<<endl;
    while(beg<=end){
        mid = (beg+end)/2;
        cout<<"And the middle element is at "<<mid<<" index."<<endl<<endl;
        if(arr[mid]>key){
            cout<<"=>> Iteration no. "<<count<<endl;
            cout<<"Currently key->"<<key<<" is less than mid element->"<<arr[mid]<<"."<<endl;
            end = mid-1;
            cout<<"So now the beg is at "<<beg<<" index and end is at "<<end<<" index."<<endl;
        }else if(arr[mid]<key){
            cout<<"=>> Iteration no. "<<count<<endl;
            cout<<"Currently key->"<<key<<" is greater than mid element->"<<arr[mid]<<"."<<endl;
            beg = mid+1;
            cout<<"So now the beg is at "<<beg<<" index and end is at "<<end<<" index."<<endl;
        }else{
            cout<<"=>> Result : "<<endl;
            cout<<"And key->"<<key<<" is equal to the current middle element->"<<arr[mid]<<"."<<endl;
            cout<<"So, the key is present at "<<mid<<" index."<<endl;
            return mid;
        }
        count++;
    }
    return -1;
}

void BinarySearchDetails(){
    int key;
    cout<<"You have choosed Binary Search."<<endl;
    cout<<"Please enter elements in sorted order in ascending."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    cout<<"Enter the key you want to find : ";
    cin>>key;
    if(BinarySearch(key) == -1){
        cout<<"The key isn't present in the array.";
    }
}
// ----------------------------------------------------Sorting----------------------------------------------------------

void BubbleSort(int arr[], int n){
    int count1=1;
    for(int i=0;i<n-1;i++){
        int count2=1;
        cout<<"\n=>> Iteration no. "<<count1<<endl;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                cout<<"Iteration no. "<<count1<<"."<<count2<<" : ";
                arrDisp(arr,n);
                cout<<"\t"<<arr[j]<<" > "<<arr[j+1]<<"\tSWAP";
                cout<<endl;
                swap(arr, j, j+1);
                count2++;
            }else{
                cout<<"Iteration no. "<<count1<<"."<<count2<<" : ";
                arrDisp(arr,n);
                cout<<"\t"<<arr[j]<<" < "<<arr[j+1]<<"\tNO SWAP";
                cout<<endl;
                count2++;
            }
        }
        cout<<"Final result :      ";
        arrDisp(arr,n);
        cout<<endl;
        count1++;
    }

}

void BubbleSortDetails(){
    cout<<"You have choosed Bubble Sort."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    BubbleSort(arr,n);
    cout<<endl;
    cout<<"Array after bubble sorting : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
}


void InsertionSort(int arr[], int n){
    int count1=1;
    for(int i=1;i<n;i++){
        int count2=1;
        cout<<"\n=>> Iteration no. "<<count1;
        int temp = arr[i];
        cout<<"\t\t\t\t\t\tStored value is "<<temp<<endl;
        cout<<"Iteration no. "<<count1<<".0 : ";
        arrDisp(arr,n);
        // cout<<endl;
        int j = i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1] = arr[j];
            j--;
            cout<<"\t"<<arr[j+1]<<" > "<<temp<<"\tShifting "<<arr[j+1]<<" to right";
            cout<<"\nIteration no. "<<count1<<"."<<count2<<" : ";
            arrDisp(arr,n);
            count2++;
        }
        if(arr[j]<arr[j+1] ){
            cout<<"\tSwapping with stored value or already Sorted till stored value";
        }else{
            cout<<"\tReached at top, So replacing "<<arr[j+1]<<"(index "<<j+1<<") with "<<temp;
        }
        arr[j+1] = temp;
        cout<<"\nFinal result :      ";
        arrDisp(arr,n);
        cout<<endl;
        count1++;
    }
}

void InsertionSortDetails(){
    cout<<"You have choosed Insertion Sort."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    InsertionSort(arr,n);
    cout<<endl;
    cout<<"Array after insertion sorting : "<<endl;
    arrDisp(arr,n);
    cout<<endl; 
}

void SelsectionSort(int arr[], int n){
    int count1=1;
    for(int i=0;i<n-1;i++){
        int min = i;
        int j=i+1;
        int count2=1;
        cout<<"\n=>> Iteration no. "<<count1;
        cout<<"\t\t\t\t\t\tStarting from index "<<min<<"."<<endl;
        cout<<"Iteration no. "<<count1<<".0 : ";
        arrDisp(arr,n);
        cout<<"\tMin value at index : "<<min;
        cout<<endl;
        for(;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                cout<<"Iteration no. "<<count1<<"."<<count2<<" : ";
                arrDisp(arr,n);
                cout<<"\tMin value at index : "<<min;
                cout<<endl;
                count2++;
            }else{
                cout<<"Iteration no. "<<count1<<"."<<count2<<" : ";
                arrDisp(arr,n);
                cout<<"\tMin value at index : "<<min;
                cout<<endl;
                count2++;
            }
        }
        if(min!=j)
        swap(arr,min,i);
        cout<<"Final result :      ";
        arrDisp(arr,n);
        if(min!=i){
            cout<<"\tAfter, swapping "<<arr[min]<<"(index "<<i<<") with "<<arr[i]<<"(index "<<min<<").";
        }else{
            cout<<"\tAlready at it's sorted place.";
        }
        cout<<endl;
        count1++;
    }
}

void SelsectionSortDetails(){
    cout<<"You have choosed Selection Sort."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    SelsectionSort(arr,n);
    cout<<endl;
    cout<<"Array after selection sorting : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
}
// ----------------------------------------------------LinkedList------------------------------------------------------

struct node{
    int data;
    node *next;
};

node *start = NULL;

void LlDisp(){
    node *ptr = start;
    while(ptr!=NULL){
        cout<<ptr->data<<"-->";
        ptr = ptr->next;
    }
    cout<<"\b\b\b   "<<endl;
}

void LlDispWithAddress(){
    cout<<"LinkedList : => ";
    node *ptr = start;
    if(ptr == NULL){
        cout<<"Linked List is empty."<<endl;
        exit(0);
    }
    while(ptr!=NULL){
        cout<<"|"<<ptr->data<<"|"<<ptr->next<<"| -->";
        ptr = ptr->next;
    }
    cout<<"\b\b\b   "<<endl;
    cout<<"\t\t";
    ptr = start;
    while(ptr!=NULL){
        cout<<ptr<<"\t  ";
        ptr = ptr->next;
    }
    cout<<"\b\b\b   "<<endl;
}

void begDelete(){
    if(start == NULL){
        cout<<"Linked List is empty."<<endl;
        exit(0);
    }else{
        node *ptr = start;
        cout<<"Deleted Item is : "<<ptr->data<<endl;
        start = ptr->next;
        delete(ptr);
        cout<<"LinkedList after deletion : "<<endl;
        LlDispWithAddress();
    }
}


void endDelete(){
    if(start == NULL || start->next == NULL){
        cout<<"Deleted Item is : "<<start->data<<endl;
        cout<<"LinkedList : => ";
        cout<<"Linked List is empty."<<endl;
        exit(0);
    }else{
        node *ptr = start;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        cout<<"Deleted Item is : "<<ptr->next->data<<endl;
        delete(ptr->next);
        ptr->next = NULL;
        cout<<"LinkedList after deletion : "<<endl;
        LlDispWithAddress();
    }
}

void begInsert(int values){
    node *n1 = new node;
    n1->data = values;
    n1->next = start;
    start = n1;
}

void begInsertDetails(){
    int n,values,c1,count;
    cout<<"You have choosed Beginning Insertion."<<endl;
    cout<<"Enter the number of items you wants to insert : ";
    cin>>n;
    count = n;
    if(n<1){
        exit(0);
    }
    cout<<"Enter the values : "<<endl;
    for(int i=0;i<n;i++){
        cin>>values;
        begInsert(values);
    }
    cout<<"The values are : "<<endl;
    LlDisp();
    cout<<endl;
    node *ptr = start;
    while(ptr!=NULL){
        cout<<"Iteration "<<count<<" : ";
        cout<<"Node"<<count<<"=>> Address : "<<ptr<<" || Data: "<<ptr->data<<" || "<<"Next: "<<ptr->next<<endl;
        ptr = ptr->next;
        count--;
    }
    cout<<"\b\b\b   "<<endl;
    LlDispWithAddress();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Choose a choice : "<<endl;
    cout<<"Type 1 ,If you want to simulate deletion from beginning."<<endl;
    cout<<"Type 2 ,If you want to simulate deletion from end."<<endl;
    cout<<"Type 0 ,If you want to exit or skip deletion."<<endl<<endl;
    do{
        cout<<"Enter your choice : ";
        cin>>c1;
        switch(c1){
            case 0:  cout<<"Skipping or Exiting deletion"<<endl;
                break;
            case 1: begDelete();
                break;
            case 2: endDelete();
                break;
            default: cout<<"invalid choice\n\n";
        }
    }while(c1!=0);
}

void endInsert(int values){
    node *n1 = new node;
    n1->data = values;
    if(start == NULL){
        n1->next = NULL;
        start = n1;
    }else{
        node *p = start;
        while(p->next!=NULL){
            p=p->next;
        }
        n1->next=NULL;
        p->next = n1;
    }
}

void endInsertDetails(){
    int n,values,c1,count=1;
    cout<<"You have choosed End Insertion."<<endl;
    cout<<"Enter the number of items you wants to insert : ";
    cin>>n;
    if(n<1){
        exit(0);
    }
    cout<<"Enter the values : "<<endl;
    for(int i=0;i<n;i++){
        cin>>values;
        endInsert(values);
    }
    cout<<"The values are : "<<endl;
    LlDisp();
    cout<<endl;
    node *ptr = start;
    while(ptr!=NULL){
        cout<<"Iteration "<<count<<" : ";
        cout<<"Node"<<count<<"=>> Address : "<<ptr<<" || Data: "<<ptr->data<<" || "<<"Next: "<<ptr->next<<endl;
        ptr = ptr->next;
        count++;
    }
    cout<<"\b\b\b   "<<endl;
    LlDispWithAddress();
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Choose a choice : "<<endl;
    cout<<"Type 1 ,If you want to simulate deletion from beginning."<<endl;
    cout<<"Type 2 ,If you want to simulate deletion from end."<<endl;
    cout<<"Type 0 ,If you want to exit or skip deletion."<<endl<<endl;
    do{
        cout<<"Enter your choice : ";
        cin>>c1;
        switch(c1){
            case 0: cout<<"Skipping or Exiting deletion"<<endl;
                break;
            case 1: begDelete();
                break;
            case 2: endDelete();
                break;
            default: cout<<"invalid choice\n\n";
        }
    }while(c1!=0);
}
// ----------------------------------------------------SubArrayWithGivenSum-------------------------------------------

void SubArrayWithGivenSum(int s){
    int count1 = 1;
    int i = 0, j = 0;
    int sum = arr[j];
    cout<<"Initially "<<arr[j]<<" of index["<<j<<"] is added to the sum."<<endl;
    cout<<"So the sum is : "<<sum<<endl<<endl;
    while(j<n){
        if(sum<s){
            j++;
            cout<<"Iteration no. "<<count1<<" : "<<endl;
            cout<<"Current sum "<<sum<<" < "<<"Given sum "<<s<<endl;
            cout<<"So "<<arr[j]<<" of index["<<j<<"] is added to the sum "<<sum<<"."<<endl;
            sum+=arr[j];
            cout<<"Now sum is : "<<sum<<endl<<endl;
            count1++;
        }else if(sum>s){
            int m=sum;
            sum-=arr[i];
            cout<<"Iteration no. "<<count1<<" : "<<endl;
            cout<<"Current sum "<<m<<" > "<<"Given sum "<<s<<endl;
            cout<<"So "<<arr[i]<<" of index["<<i<<"] is subtracted from the sum "<<m<<"."<<endl;
            i++;
            cout<<"Now sum is : "<<sum<<endl<<endl;
            count1++;
        }else if(sum == s){
            cout<<"=>>Result : "<<endl;
            cout<<"So the indexes of Sub Array are from " << i << " to " << j << ".";
            cout<<endl<<"Whose values are : "<<endl;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<"\t";
            }
            return;
        }
    }
    cout<<"=>>No Sub Array Found"<<endl<<endl;
    return;
}

void SubArrayWithGivenSumDetails(){
    int s;
    cout<<"You have choosed Sub Array With Given Sum problem."<<endl;
    cout<<"Enter the number of elements you wants to insert : ";
    cin>>n;
    arr[n];
    cout<<"Enter the values : "<<endl;
    arrInsert(arr,n);
    cout<<endl;
    cout<<"The values are : "<<endl;
    arrDisp(arr,n);
    cout<<endl;
    cout<<"Enter the sum : ";
    cin>>s;
    cout<<"Given SUM is : "<<s<<endl<<endl;
    SubArrayWithGivenSum(s);
}
// ----------------------------------------------------MainMenu--------------------------------------------------------

void SearchingChoice(){
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Choose which type of Searching algorithm you want to simulate : "<<endl;
    cout<<"Type 1 ,If you want to simulate Linear Search algorithm."<<endl;
    cout<<"Type 2 ,If you want to simulate Binary Search algorithm."<<endl<<endl;
    do{
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2){
            case 1: LinearSearchDetails();
                break;
            case 2: BinarySearchDetails();
                break;
            default: cout<<"Invalid choice\n\n";
        }
    }while(choice2!=1 && choice2!=2);
}

void SortingChoice(){
    cout<<"-----------------------------------------------------------------------------------"<<endl;
    cout<<"Choose which type of Sorting algorithm you want to simulate : "<<endl;
    cout<<"Type 1 ,If you want to simulate Bubble Sort algorithm."<<endl;
    cout<<"Type 2 ,If you want to simulate Insertion Sort algorithm."<<endl;
    cout<<"Type 3 ,If you want to simulate Selection Sort algorithm."<<endl<<endl;
    do{
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2){
            case 1: BubbleSortDetails();
                break;
            case 2: InsertionSortDetails();
                break;
            case 3: SelsectionSortDetails();
                break;
            default: cout<<"Invalid choice\n\n";
        }
    }while(choice2!=1 && choice2!=2 && choice2!=3 && choice2!=4);
}

void SinglyLLChoice(){
    cout<<"";
        cout<<"-----------------------------------------------------------------------------------"<<endl;
        cout<<"Choose a choice : "<<endl;
        cout<<"Type 1 ,If you want to insert from beginning."<<endl;
        cout<<"Type 2 ,If you want to insert from end."<<endl<<endl;
        do{
        cout<<"Enter your choice : ";
        cin>>choice2;
        switch(choice2){
            case 1: begInsertDetails();
                break;
            case 2: endInsertDetails();
                break;
            default: cout<<"invalid choice\n\n";
        }
    }while(choice2!=1 && choice2!=2);
}

int main(){
    cout<<"\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*Welcome To Algorithm Simulator-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl<<endl;
    cout<<"Choose which type of algorithm you want to simulate : "<<endl;
    cout<<"Type 1 ,If you want to simulate any Searching algorithm."<<endl;
    cout<<"Type 2 ,If you want to simulate any Sorting algorithm."<<endl;
    cout<<"Type 3 ,If you want to simulate Singly LinkedList."<<endl;
    cout<<"Type 4 ,If you want to simulate Sub Array With Given Sum."<<endl<<endl;
    do{
        cout<<"Enter your choice : ";
        cin>>choice1;
        switch(choice1){
            case 0: cout<<"Exiting"<<endl;
                break;
            case 1:
                SearchingChoice();
                break;
            case 2:
                SortingChoice();
                break;
            case 3:
                SinglyLLChoice();
                break;
            case 4:
                SubArrayWithGivenSumDetails();
                break;
            default: cout<<"Invalid choice\n\n";
        }
    }while(choice1!=1 && choice1!=2 && choice1!=3 && choice1!=4);   
    return 0;
}