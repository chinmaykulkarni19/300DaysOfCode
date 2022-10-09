vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int>res;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k])
                {
                    res.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j])
                {
                    i++;
                }
                else if(B[j]<C[k])
                {
                    j++;
                }
                else{
                    k++;
                }
                int xx = A[i-1];
                while(A[i]==xx) i++;
                int yy = B[j-1];
                while(B[j]==yy) j++;
                int zz = C[k-1];
                while(C[k]==zz) k++;
            }
            if(res.size()==0)
            {
                return {-1};
            }
            return res;
        }