#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <new>

using namespace std;

class trieNode{
	public:
		bool end;
		char ch;
		int prefixes;
		int words;
		trieNode *children[150];
	trieNode(char val){
		this->end = false;
		this->ch = val;
		for(int i = 97; i <= 122 ; i++){
			this->children[i] = NULL;
		}
		this->prefixes = 0;
		this->words = 0;
	}
};

void addWord(trieNode *node , string word){
	if(word.empty()){
		node->words = node->words + 1;
		node->end = true;
	}
	else{
		node->prefixes = node->prefixes + 1;
		char tmp = *(word.begin());
		//cout <<"char = "<<tmp<<endl;
		if(node->children[tmp] == NULL){
			trieNode *newnode = new trieNode(tmp);
			node->children[tmp] = newnode;
		}
	//	cout<<node->children[tmp]->ch;
		word.erase(word.begin());
		addWord(node->children[tmp] , word);
	}
}

int countWords(trieNode *node, string word){
	char tmp = *(word.begin());
	if (word.empty()){
		return node->words;
	}
	else if (node->children[tmp] == NULL){
		return 0;
	}
	else{
		word.erase(word.begin());
		return countWords(node->children[tmp] , word);
	}
}

void printIt(trieNode *node, string pre){
	if(node->end){
		cout<<pre<<endl;
	}
	else
	{
		for(int i = 97 ; i <= 122 ; i++){
			if(node->children[i] != NULL){
				string tmp = pre + node->children[i]->ch;
				printIt(node->children[i] , tmp);
			}
		}
	}
}
int main()
{
	string pre = "";
	trieNode *root = new trieNode(' ');
	//root->end = true;
	addWord(root, "akshit");
	addWord(root, "akshay");
	//cout<<"first = "<<(root->children['a']->prefixes);
	addWord(root,"aks");
	cout<<"word = "<<countWords(root,"akshay");
	printIt(root,pre);
	return 0;
}
