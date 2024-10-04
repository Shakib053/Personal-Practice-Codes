// https://www.naukri.com/code360/problems/complete-string_2687860


#include <iostream>
#include<string>
using namespace std; 

struct TrieNode {
   TrieNode* child[26];
   bool isEnd;
   TrieNode(){
       isEnd = false;
       for(int i=0;i<26;i++){
           child[i] = nullptr;
       }
   }
};

TrieNode* root;

void buildTrie(string word) {
    TrieNode* curr = root;

    for(auto ch:word){
        if(curr->child[ch-'a'] == nullptr){
           curr->child[ch-'a'] = new TrieNode();
        }
        curr = curr->child[ch-'a'];
    }
    curr->isEnd = true;
}

bool isWordExistInTrie(string word){
    TrieNode* curr = root;
    for(auto ch: word){
        if(!curr->child[ch-'a']){
           return false;
        }
        curr = curr->child[ch-'a'];
    }  
    return curr->isEnd;
}

string completeString(int n, vector<string> &a){
    root = new TrieNode();
    for(auto it:a){
        buildTrie(it);
    }
    string ans = "";
    for(auto it: a){
        string check;
        int f = 0;

        for(int i=0;i<it.size();i++){
          check.push_back(it[i]);
          if(!isWordExistInTrie(check)){ 
              f = 1;
              break;
          } 
        }

        if(f == 1) continue;
        
        if(ans.size()<check.size()){
           ans = check;
        } else if(ans.size() == check.size()){
           ans = min(ans,check);
        }
    }

    return ans.size()!=0 ? ans: "None";
}
