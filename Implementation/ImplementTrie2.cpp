// www.naukri.com/code360/problems/implement-trie_1387095


#include <iostream>
#include<string>
using namespace std;

struct TrieNode {
       TrieNode* child[26];
       int cnt_prefix = 0;
       int cnt_ends_with = 0;

       TrieNode() {
           cnt_prefix = 0;
           cnt_ends_with = 0;
           for(int i=0;i<26;i++){
               child[i] = nullptr;
           }
       }
};

class Trie{
    private:
    TrieNode* root;
    public:

    Trie(){
        // Write your code here.
        root = new TrieNode();
    }

    void insert(string &word){
        // Write your code here.
        TrieNode* curr = root;
        for(auto ch: word){
            if(curr->child[ch-'a'] == nullptr){
                curr->child[ch-'a'] = new TrieNode();
            }
            
            curr = curr->child[ch-'a'];

            curr->cnt_prefix++;
        }
        curr->cnt_ends_with++;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        TrieNode* curr = root;
        for(auto ch:word){
           if(curr->child[ch-'a'] == nullptr){
               return 0;
           }
           curr = curr->child[ch-'a'];
        }
        return curr->cnt_ends_with;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        TrieNode* curr = root;
        for(auto ch:word){
            if(curr->child[ch-'a'] == nullptr){
                return 0;
            }
            curr = curr->child[ch-'a'];
        }
        return curr->cnt_prefix;
    }

    void erase(string &word){
        // Write your code here.
        TrieNode* curr = root;
        for(auto ch:word){
            if(curr->child[ch-'a'] == nullptr){
                return;
            }
            curr = curr->child[ch-'a'];
            curr->cnt_prefix--;
        }
        curr->cnt_ends_with--;
    }
};
