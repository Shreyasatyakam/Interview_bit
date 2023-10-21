class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        unordered_set<char> count;
        for(char c:s){
            if(count.find(c)==count.end()){
                count.insert(c);
            }
            else
            return false;
        }
        return true;
    }
};
