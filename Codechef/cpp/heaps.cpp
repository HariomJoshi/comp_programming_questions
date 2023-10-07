#include<iostream>
#include<queue>

using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    
    heap(){
        arr[0] = -1;
        size =0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index >1){
            int parent = index/2;
            if(arr[parent]< arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }else{
                return;
            }
            
        }

    }
    void print(){
        for(int i =1; i<=size; i++){
            cout<< arr[i]<< " ";
        }
    }


    void deleteFromHeap(){
        if(size == 0){
            cout<< "Nothing to delete"<< endl;
            return;
        }

        // Step 1: put last element into first element 
        arr[1] = arr[size];
        // Step 2: remove last element
        arr[size] = 0;
        size--;

        // Step 3: take root node to correct position
        int i =1;
        while(i< size){
            int left = 2*i;
            int right = 2*i +1;
            
            if(left< size && arr[i]< arr[left]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right< size && arr[i]< arr[right]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }



};

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;
    if(left <= size && arr[largest]< arr[left]){
        largest = left;
    }
    if(right <= size && arr[largest]< arr[right]){
        largest = right;
    }
    if(largest !=i){
        swap(arr[largest], arr[i]);
        heapify(arr, size, largest);
    }
    
}


void heapSort(int arr[], int size){
    int n = size;   
    while(n >=1){
        // step 1:
        swap(arr[1], arr[n]);
        // step 2:
        n--;
        // step 3:
        heapify(arr, n, 1);
    }
}




int main(){
    // heap h;
    // h.insert(4);
    // h.insert(443);
    // h.insert(7);
    // h.insert(654);
    // h.print();
    // cout<< endl;
    // h.deleteFromHeap();
    // h.print();

    int arr[8] = {-1, 43,54, 6, 7, 654, 9, 434};
    // first element is -1 so there are 5 remaining elements
    int n =7;
    for(int i =n/2; i>0; i--){
        heapify(arr, 6, 1);
        
    }

    cout<< "Printing the array now: "<< endl;
    for(int i =1; i<n; i++){
        cout<< arr[i]<<" ";
    }

    heapSort(arr, n);
    cout<< endl;
    for(int i =1; i<n; i++){
        cout<< arr[i]<< " ";
    }
    priority_queue<int> pq; //by default a max heap
    

    priority_queue<int, vector<int>, greater<int>> pqMin; // makes a min heap

}