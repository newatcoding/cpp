#include<iostream>
#include<vector>
#include<string>
using namespace std;

string  codes[10]={
    ".","abc","def","gji","jklm","no","pqrs","tu","vwxy","ez"
};

vector<string> getkpc(string str){
    if(str.length()==0)
    {
        vector<string> rem;
        rem.push_back("");
        return rem;
    }
    char ch=str[0];
    string substr=str.substr(1,str.length()-1);
    string code=codes[ch-48];
    vector<string> rres=getkpc(substr);
    vector<string> mres;
   
    for(int j=0;j<code.length();j++)
    {
        char chcode=code[j];
        for(int i=0;i<rres.size();i++)
        {
            string rstr=rres[i];
            mres.push_back(chcode +rstr);
        }

            
    }


    return mres;
}
int main(int argc,char** argv)
{
    vector<string> kpc=getkpc("835");
    for(int i=0;i<kpc.size();i++){
        cout<<kpc[i]<<endl;
    }
}