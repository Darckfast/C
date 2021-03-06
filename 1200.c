#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

typedef struct regNo{   
   struct regNo *left;
   char info;
   struct regNo *right;
}Node;

typedef struct{
   Node *root;
}Tree;

Node **findDad(Node *root, char info){
   if(root == NULL)
      return NULL;
   else{
      if(info <= root->info){
	 if(root->left == NULL)
	    return &root->left;
	 else
	    return findDad(root->left, info);
      }else{
	 if(root->right == NULL)
	    return &root->right;
	 else
	    return findDad(root->right, info);
      }
   }
}

void initTree(Tree *p_tree){
   p_tree->root = NULL;
}

bool createNode(Node **node, char info){
   *node = (Node *)malloc(sizeof(Node));

   if(*node == NULL)
      return false;

   (*node)->info = info;
   (*node)->left = NULL;
   (*node)->right = NULL;

   return true;
}

void insertInTree(Tree *p_tree, char info){
   Node **dad, *node;
   
   createNode(&node, info);

   dad = findDad(p_tree->root, info);
   if(dad == NULL)
      p_tree->root = node;
   else
      *dad = node;
}
bool searchInTree(Node *root, char info){
   if(root == NULL)
      return false;
   else{
      if(root->info == info)
	 return true;
      else if(root->info < info)
	 return searchInTree(root->right, info);
      else
	 return searchInTree(root->left, info);
   }
}

Node *min(Node *root){
    if(root == NULL)  
       return NULL;   
   else{   
      if(root->left == NULL)  
	 return root;   
      else
	 return min(root->left);       
    }   
}

Node *max(Node *root){
    if(root == NULL)  
       return NULL;   
   else{   
      if(root->right == NULL)  
	 return root;
      else{
	 return max(root->right);       
      }
    }   
}

void removeInTree(Node **root, char info){   
    Node *aux;   
    if(*root != NULL){   
       if(info < (*root)->info)    
	 removeInTree(&((*root)->left), info);    
      else{      
	 if(info > (*root)->info)    
	    removeInTree(&((*root)->right), info);
	 else{  
	    if((*root)->left != NULL && (*root)->right != NULL){    
	       aux = max((*root)->left);    
	       (*root)->info = aux->info;   
	       removeInTree(&((*root)->left), (*root)->info);  
	    }else{  
	       aux = *root;
	       ((*root)->left == NULL) ?     
	          (*root = (*root)->right) :
	          (*root = (*root)->left);                            
	       free(aux);     
	    }   
	 }        
      }    
   }     
}

void printPreOrder(Node *root, Node *node_root){
   if(root != NULL){
      (root == node_root) ?
	 printf("%c", root->info):
	 printf(" %c", root->info);
      printPreOrder(root->left, node_root);
      printPreOrder(root->right, node_root);
   }
}

void printInOrder(Node *root, Node *node_max){   
   if(root != NULL){
      printInOrder(root->left, node_max);
      (root == node_max) ?
	 printf("%c\n", root->info):
	 printf("%c ", root->info);
      printInOrder(root->right, node_max);
   }
}

void printPosOrder(Node *root, Node *node_root){
      if(root != NULL){
      printPosOrder(root->left, node_root);
      printPosOrder(root->right, node_root);
      (root == node_root) ?
	 printf("%c\n", root->info):
	 printf("%c ", root->info);
   }
}
int main(){
   Tree tree;
   char in[13];
   char info;

   initTree(&tree);
 
   
   while(fgets(in, 13, stdin) != NULL){
      switch(*(in+1)){
	 case ' ':
	    info = in[2];
	    switch(*in){
	       case 'I':
	          insertInTree(&tree, info);
	          break;
	       case 'R':
	          removeInTree(&(tree.root), info);
	          break;
	       case 'P':
	          (searchInTree(tree.root, info)) ?
	             printf("%c existe\n", info) :
	             printf("%c nao existe\n", info);
	          break;
	    }
	    break;
	 case 'N':
	    printInOrder(tree.root, max(tree.root));
	    break;
	 case 'R':
	    if(tree.root != NULL){
	       printPreOrder(tree.root, tree.root);
	       puts("");
	    }
	    break;
	 case 'O':
	    printPosOrder(tree.root, tree.root);            
	    break;
      }
   }

   return 0;
}


