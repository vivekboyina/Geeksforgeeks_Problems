class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int a = 0,b = 0,c = 0;
        for(int i : arr)
        {
            if(i == 0) a+=1;
            else if(i == 1) b+=1;
            else if(i == 2) c+=1;
        }
        for(int i = 0; i < arr.size(); i++)
        {
            if(a > 0)
            {
                arr[i] = 0;
                a-=1;
            }
            else if(b > 0)
            {
                arr[i] = 1;
                b-=1;
            }
            else if(c > 0)
            {
                arr[i] = 2;
                c-=1;
            }
        }
    }
};