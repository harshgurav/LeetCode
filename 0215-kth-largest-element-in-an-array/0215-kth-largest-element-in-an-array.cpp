class Solution {
public:
class Heap{
    public:
    int size;
    vector<int>heap;
    Heap(vector<int> nums){
        size = 0;
    }
void insert_node(int val){
    heap.push_back(val);
    int i = size;
    size++;
    
    while(i > 0 && heap[(i - 1) / 2] > heap[i]){
        swap(heap[(i - 1) / 2], heap[i]);
        i = (i - 1) / 2;
    }
}
    void heapify(int i){
        int leftChild = 2*i + 1;
        int rightChild = 2*i + 2;
        int smallest = i;
        if(leftChild < size && heap[leftChild] < heap[smallest]){
            smallest = leftChild;
        }
        if(rightChild < size && heap[rightChild] < heap[smallest]){
            smallest = rightChild;
        }
        if(smallest != i){
            swap(heap[smallest], heap[i]);
            heapify(smallest);
        }
    }
    void delete_root(){
        swap(heap[0], heap[size-1]);
        heap.pop_back();
        size--;
        heapify(0);
    }
};

    int findKthLargest(vector<int>& nums, int k) {
        Heap heap1(nums);
        for(int i =0; i<nums.size(); i++){
            if(heap1.size<k){
                heap1.insert_node(nums[i]);
            }
            else if(nums[i] > heap1.heap[0]){
                heap1.delete_root();
                heap1.insert_node(nums[i]);
            }
            else{continue;}
        }
    
    
    return heap1.heap[0];
    }
};