class trieNode{
public:
    bool end;
    trieNode* children[26];
    trieNode(){
        end=false;
        for(int i=0;i<25;i++){
            children[i]=nullptr;
        }
    }
};
class PrefixTree {
private: 
trieNode* root;
public:
    PrefixTree() {
        root=new trieNode();
    }
    
    void insert(string word) {
        trieNode* node=root;
        for(char c:word){
            int index=c-'a';
            if(!node->children[index]){
            node->children[index]=new trieNode();
        }
         node=node->children[index];
        }
        node->end=true;
    }

    
    bool search(string word) {
        trieNode* node=root;
        for(char c:word){
            int index=c-'a';
            if(!node->children[index]){
                return false;
            }
            node=node->children[index];
        }
        return node->end;
        
    }
    
    bool startsWith(string prefix) {
        trieNode* node=root;
        for(char c:prefix){
            int index=c-'a';
            if(!node->children[index]){
                return false;
            }
            node=node->children[index];
        }
        return true;

        
    }
};
