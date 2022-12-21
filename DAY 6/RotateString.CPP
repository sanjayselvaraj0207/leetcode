class Solution {
public:
bool rotateString(string A, string B) {
string temp="";
if(A.length()!=B.length())
return false;
temp=A+A;
return (temp.find(B)!=string ::npos);
}
};
