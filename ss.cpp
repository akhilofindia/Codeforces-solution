  int n=parent.size();
        vector<Node*> v(n,NULL);
        for(int i=0;i<n;i++){
            v[i]=new Node(i);
        }
        Node*root=NULL;
        for(int i=0;i<n;i++)
        {
            if(parent[i]==-1){
                root=v[i];
            }
            else if(!v[parent[i]]->left){
                v[parent[i]]->left=v[i];
            }
            else v[parent[i]]->right=v[i];
        }
        return root;