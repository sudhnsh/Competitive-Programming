#include<bits/stdc++.h>
#define im INT_MAX
#define umii map<int,int>
#define w while
#define pback push_back
using namespace std;

vector<int> apd(vector<int> v)
{
    umii as_map;
    int as_size=v.size();
    int i;
    for( i=0;i<as_size;i++)
    {
        as_map[v[i]]=0;
    }
    for( i=0;i<as_size;i++)
    {
        as_map[v[i]]++;
    }
    for( i=0;i < v.size();i++)
    {
        if(as_map[v[i]]==1)
            continue;
        else{
            as_map[v[i]]--;
            v.erase(v.begin()+i);
            i--;
        }
    }
    return v;
}


int code_as(vector<int> v)
{for(int i=0;i<v.size();i++){if(v[i]<=-1)
            return 1;}
    return 0;
}

int code_as1(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
        if((v[i]&1)==0)
            return 1;
    }
    return 0;
}


vector<int> order_of_as()
{
	int empty_element; 
    cin>>empty_element;
	vector<int> as_arr(empty_element);
	for(auto &tempy_var: as_arr)
	{
	    cin>>tempy_var;
	}
	queue<pair<int,int>> as_Q;
	as_Q.push({(int)0,(empty_element-1)/2});
	as_Q.push({(empty_element-1)/2,empty_element-1});
	vector<int> arr(empty_element,-1);
	int tm=0;
	arr[tm]=1;
	if (empty_element>1)
        arr[empty_element-1]=2;
	if (empty_element>2)
        arr[(empty_element-1)/2]=3;
    int te=2;
	int tempy_var=4+((te/2)-1);
	w(as_Q.size())
    {
		pair<int,int> p=as_Q.front();
		as_Q.pop();
		int mid=(p.first+p.second )/2;
		if (arr[mid]==-1)
		{
			arr[mid]=tempy_var;
			tempy_var++;
			as_Q.push({p.first,mid});
			as_Q.push({mid,p.second});
		}
	}
	vector<int>my_as;
    for(auto &ij: arr)
    {
    	my_as.pback(as_arr[ij-1]);
    }
    return my_as;
}

vector<int> as_f1(vector<int> v)
{
    int rep=1;
    w(code_as1(v))
    {
        if(rep==1)
        {
            int o=im,e=im;
            for(int i=0;i<v.size();i++)
            {
                if((v[i]&1)==0)
                {
                    e=i;
                    break;
                }
            }
            for(int i=0;i<v.size();i++)
            {
                if((v[i]&1)!=0)
                {
                    o=i;
                    break;
                }
            }
            v[max(o,e)]=v[o]+v[e];
            int m=min(o,e);
            v.erase(v.begin()+m);
            rep=0;
        }
        else{
            int o=-1,e=-1;
            for(int i=v.size()-1;i>=0;i--)
            {
                if((v[i]&1)==0)
                {
                    e=i;
                    break;
                }
            }
            for(int i=v.size()-1;i>=0;i--)
            {
                if((v[i]&1)!=0){
                    o=i;
                    break;
                }
            }
            v[min(o,e)]=v[o]+v[e];
            v.erase(v.begin()+max(o,e));
            rep=1;}}return v;
}

vector<int> as_f2(vector<int> v)
{int rep=1;
    w(code_as(v))
    {
        if(rep==1)
        {
            int n=im,p=im;
            for(int i=0;i<v.size();i=i+1)
            {
                if(v[i]<=-1)
                {
                    n=i;
                    break;
                }
            }
            for(int i=0;i<v.size();i=i+1)
            {
                if(v[i]>-1)
                {
                    p=i;
                    break;
                }
            }
            v[max(n,p)]=v[n]+v[p];
            int m=min(n,p);
            v.erase(v.begin()+m);
            rep=0;
        }
        else{
            int n=-1,p=-1;
            for(int i=v.size()-1;i>-1;i=i-1)
            {
                if(v[i]<0)
                {
                    n=i;
                    break;
                }
            }
            for(int i=v.size()-1;i>=0;i=i-1)
            {
                if(v[i]>-1)
                {
                    p=i;
                    break;
                }
            }
            v[min(n,p)]=v[n]+v[p];
            int m=max(n,p);
            v.erase(v.begin()+m);
            rep=1;
        }
    }
    return v;
}
int main() {
vector<int>v;
	v=order_of_as();v=as_f1(v);
    v=as_f2(v);v=as_f1(v);
    v=apd(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
	}
return 0;
}