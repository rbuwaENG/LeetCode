class Solution {
public:
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2.at(i));
        }
        quickSort(nums1,0,nums1.size()-1);
        
        double mid =0;
        int num = 0;
        if(nums1.size()%2 == 0){
            
            num = nums1.size()/2;
            mid =(nums1.at(num)+nums1.at(num-1))/2.0;
          
            
            
        }
        else{
            
            num = (nums1.size()+1)/2;
            mid = nums1.at(num-1);
          
            
        }
        
        return mid;
        
    }
    
};