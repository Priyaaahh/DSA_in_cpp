class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int zeros = 0;
        int ones = 0;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] == 0){
                zeros++;
            }
            if(arr[i] == ones){
                ones++;
            }
        }    
        for(int i = 0; i < zeros; i++){
            arr[i] = 0;
        }
        for(int i = zeros; i < arr.size(); i++){
            arr[i] = 1;
        }    
    }
};
