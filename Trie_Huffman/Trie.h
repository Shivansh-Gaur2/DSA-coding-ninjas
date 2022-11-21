#include <string>
#include <iostream>
using namespace std;
#include "TrieNode.h"
class Trie {
	TrieNode *root;

	public :

	Trie() {
		root = new TrieNode('\0');
	}

	void insertWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			root -> isTerminal = true;
			return;
		}

		// Small Calculation
		int index = word[0] - 'a';
		TrieNode *child;
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			child = new TrieNode(word[0]);
			root -> children[index] = child;
		}
		
		// Recursive call
		insertWord(child, word.substr(1));
	}

	// For user
	void insertWord(string word) {
		insertWord(root, word);
	}


    void removeWord(TrieNode *root, string word){
        if(word.size() == 0){
            root -> isTerminal = false;
            return;
        }

        TrieNode *child;
        int index = word[0] - 'a';
        if(root -> children[index] != nullptr){
            child = root -> children[index];
        }
        else{
            return;
        } 

        removeWord(child, word.substr(1));

        if(child -> isTerminal == false){
            for (int i = 0; i < 26; i++)
            {
                /* code */
                if (child -> children[i] != nullptr)
                {
                    return;
                }
                delete child;
                root -> children[index] = nullptr;
            }
            
        }
    }
};