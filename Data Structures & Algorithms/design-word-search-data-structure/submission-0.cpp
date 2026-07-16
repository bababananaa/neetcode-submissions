class trieNode{
public:
    bool end;
    unordered_map<char,trieNode*> children;
    trieNode(){
        end=false;
    }
};
class WordDictionary {
private:
trieNode* root;
public:
    WordDictionary() {
        root=new trieNode();
    }
    
    void addWord(string word) {
        trieNode* node=root;
        for (char c:word){
            int index=c-'a';
            if(node->children[index]==nullptr){
                node->children[index]=new trieNode();
            }
            //fix add reassignment
            node=node->children[index];
        }
        node->end=true;
    }
    
    bool search(string word) {
        return dfs(word,0,root);
    }

    bool dfs(string word, int index,trieNode* node){
        //baaaaaase case
        if(index==word.size()){
            return node->end;
        }
        char c=word[index];
            if(c=='.'){
                for(int i=0;i<26;++i){
                    if(node->children[i]!=nullptr && dfs(word, index+1,node->children[i])){
                        return true;
                    }
                }
                return false;
            }
            else{
                //fix  recurisve call goes inside the charindex
                int charindex=c-'a';
                if(node->children[charindex]==nullptr){
                    return false;
                }

                return dfs(word,index+1,node->children[charindex]);
            }
           
    
        
    }
};
