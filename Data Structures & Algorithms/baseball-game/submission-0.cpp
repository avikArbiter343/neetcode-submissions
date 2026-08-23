class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> track;
        int total = 0;
        int n = operations.size();
        for(int i=0; i<n; i++){
            if(operations[i]=="+"){
                int b = track.top();
                track.pop();
                int a = track.top();
                track.push(b);
                track.push(a+b);
                total+=track.top();
            }
            else if(operations[i]=="C"){
                total-=track.top();
                track.pop();
            }
            else if(operations[i]=="D"){
                track.push(track.top()*2);
                total+=track.top();
            }
            else{
                track.push(stoi(operations[i]));
                total+=track.top();
            }
        }
        return total;
    }
};