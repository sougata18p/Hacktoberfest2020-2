#include<bits/stdc++.h>
using namespace std;

struct et
{
	char value;
	et* left, *right;
	
	et(char x){
	    value = x;
	    left = right = NULL;
	}
};

bool isOperator(char c)
{
	if (c == '+' || c == '-' ||
			c == '*' || c == '/' ||
			c == '^')
		return true;
	return false;
}

void inorder(et *t)
{
	if(t)
	{
		inorder(t->left);
		printf("%c ", t->value);
		inorder(t->right);
	}
}

et* constructTree(char []);

int main()
{   
    int t;
    cin>>t;
    while(t--){
    char postfix[25];
	cin>>postfix;
	et* r = constructTree(postfix);
	inorder(r);
	cout<<endl;
}
return 0;
}// } Driver Code Ends


/*struct et
{
	char value;
	et* left, *right;
};*/

//function to construct expression tree
et* constructTree(char postfix[])
{
  stack<et*> s;
  for(int i=0;postfix[i];i++)
  {
      if(!(isOperator(postfix[i])))
      {
          struct et* root= new et(postfix[i]);
          s.push(root);
      }
      else
      {
         struct et* root= new et(postfix[i]);
         root->right=s.top();
         s.pop();
         root->left=s.top();
         s.pop();
         s.push(root);
      }
  }
  return s.top();
}
