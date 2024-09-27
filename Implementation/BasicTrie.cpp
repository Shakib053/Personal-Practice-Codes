/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

//Problem Link: https://www.naukri.com/code360/problems/implement-trie_631356


#include<string>
#include<iostream>

using namespace std;

struct TrieNode {
   TrieNode* child[26];
   bool isWordEnd;
   TrieNode() {
       for(int i=0;i<26;i++){
           child[i] = nullptr;
       }
       isWordEnd = false;
   }
};

class Trie {

private:
   TrieNode* root;

public:

    /** Initialize data structure here. */
    Trie() {
      root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* curr = root;
        for(auto ch: word){
            if(curr->child[ch-'a'] == nullptr){
               TrieNode* newNode = new TrieNode();
               curr->child[ch-'a'] = newNode;
            }
            curr = curr->child[ch-'a'];
        }
        curr->isWordEnd = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
       TrieNode* curr = root;
       for(auto ch: word){
           if(curr->child[ch-'a'] == nullptr){
               return false;
           }
           curr = curr->child[ch-'a'];
       }
       return curr->isWordEnd;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
       TrieNode* curr = root;
       for(auto ch:prefix){
           if(curr->child[ch-'a'] == nullptr){
               return false;
           }
           curr = curr->child[ch-'a'];
       }
       return true;
    }
};