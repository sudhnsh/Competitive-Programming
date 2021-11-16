#include<bits/stdc++.h>
using namespace std;
#define ll int
#define Sttr string
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ffst    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define vpair vector<pair<ll,ll> >
#define ifcondition if
#define elsecondition else
#define endfunc(a) return a
#define pb push_back
#define to_lleger stoi 
#define mod 1000000007
//aparna667
class node
{
public:
	Sttr data;
	node* next;
	node* child;
	ll stock;
	node()
	{
		next = NULL;
		child = NULL;
	}
	node(Sttr s, ll n)
	{
		data = s;
		stock = n;
		next = NULL;
		child = NULL;
	}
};
bool Avalible(node* Node, Sttr s)
{
	if(!Node)
	{
		endfunc(0) ;
	}
	node* temp = Node;
	while(temp != NULL && temp -> data != s)
	{
		temp = temp -> next;
	}
	if(!temp)
	{
		endfunc(0) ;
	}
	endfunc(1) ;
}

bool overhere(node* Node, Sttr s)
{
    node* temp2,*temp1,*temp;
	if(!(s.size() - 2))
	{
		endfunc(Avalible(Node, s)) ;
	}
	else if(!(s.size() - 4))
	{
		Sttr ab = s.substr(0, 2),cd = s.substr(2, 2);
		if(Avalible(Node, ab))
		{
			temp = Node;
			while(temp -> data != ab)
			{
				temp = temp -> next;
			}
			endfunc(Avalible(temp -> child, cd)) ;
		}
		endfunc(0) ;
	}
	else if(!(s.size() - 6))
	{
		Sttr ab = s.substr(0, 2), cd = s.substr(2, 2), ef = s.substr(4, 2);
		if(Avalible(Node, ab))
		{
			temp1 = Node;
			while(temp1 -> data != ab)
			{
				temp1 = temp1 -> next;
			}
			if(Avalible(temp1 -> child, cd))
			{
				temp2 = temp1 -> child;
				while(temp2 -> data != cd)
				{
					temp2 = temp2 -> next;
				}
				endfunc(Avalible(temp2 -> child, ef)) ;
			}
			endfunc(0) ;
		}
		endfunc(0) ;
	}
	endfunc(0) ;
}

ll findLength(node* Node)
{
	ll len = 0;
	while(Node)
	{
		len++;
		Node = Node -> next;
	}
	endfunc(len) ;
}

node* getNode(node*& Node, ll pos)
{
	node* temp = Node;
	while(pos--)
	{
		temp = temp -> next;
	}
	endfunc(temp) ;
}
void deleteNode(node*& Node, Sttr s)
{
    node* curr = Node -> next,* prev = Node,*temp;
	if(Node -> data == s)
	{
	    temp = Node;
		Node = Node -> next;
		delete temp;
        return;
	}
	
	while(!(curr -> data == s))
	{
		curr = curr -> next;
		prev = prev -> next;
	}
	prev -> next = curr -> next;
	delete curr;
    return;	
}

void insertAtEnd(node*& Node, Sttr s, ll n)
{
	node* new_node = new node(s, n);
	if(!Node)
	{
		Node = new_node;
        return;
	}
	node* temp = Node;
	while(temp -> next )
	{
		temp = temp -> next;		
    }
	temp -> next = new_node;
    return;
}



void updateNode(node*& Node, Sttr s, ll n)
{
	node* temp = Node;
	while(!(temp -> data == s))
	{
		temp = temp -> next;
	}
	temp -> stock +=  n;
	if(! (temp -> stock))
	{
		deleteNode(Node, temp -> data);
        endfunc();
	}
    return;
}

void insertCategory(node*& Node, Sttr ab, ll n)
{
	if(!Avalible(Node, ab))
	{
		insertAtEnd(Node, ab, n);
        endfunc();
	}
	updateNode(Node, ab, n);
    return;
}

void insertSubCategory(node*& Node, Sttr ab, Sttr cd, ll n)
{
	node* temp2 = Node;
	while(!(temp2 -> data == ab))
	{
		temp2 = temp2 -> next;
	}
	if(Avalible(temp2 -> child, cd))
	{
		updateNode(temp2 -> child, cd, n);
        return;
	}
    insertAtEnd(temp2 -> child, cd, n);
}

void insertSubSubCategory(node*& Node, Sttr ab, Sttr cd, Sttr ef, ll n)
{
	node* temp1 = Node;
	while(!(temp1 -> data == ab))
	{
		temp1 = temp1 -> next;
	}
	node* temp2 = temp1 -> child;
	while(!(temp2 -> data == cd))
	{
		temp2 = temp2 -> next;
	}
	if(Avalible(temp2 -> child, ef))
	{
		updateNode(temp2 -> child, ef, n);
        return;
	}
    insertAtEnd(temp2 -> child, ef, n);
}

ll findCategoryStock(node*& Node, Sttr ab)
{
	node* temp = Node;
	while(!(temp -> data == ab))
	{
		temp = temp -> next;
	}
	endfunc(temp -> stock) ;
}

ll findSubCategoryStock(node*& Node, Sttr ab, Sttr cd)
{
	node* temp = Node;
	while(!(temp -> data == ab))
	{
		temp = temp -> next;
	}
	temp = temp -> child;
	while(!(temp -> data == cd))
	{
		temp = temp -> next;
	}
	endfunc(temp -> stock) ;
}

ll findSubSubCategoryStock(node*& Node, Sttr ab, Sttr cd, Sttr ef)
{
	node* temp = Node;
	while(!(temp -> data == ab))
	{
		temp = temp -> next;
	}
	temp = temp -> child;
	while(!(temp -> data == cd))
	{
		temp = temp -> next;
	}
	temp = temp -> child;
	while(!(temp -> data == ef))
	{
		temp = temp -> next;
	}
	endfunc(temp -> stock) ;
}

void traverse(node* Node, map <Sttr, ll>& prod_to_stock, vector <Sttr>& prods)
{
	node* temp1 = Node,*temp2;
	while(temp1!=NULL)
	{
		prod_to_stock[temp1 -> data] = temp1 -> stock;
		temp2 = temp1 -> child;
		while(temp2!=NULL)
		{
            Sttr s1=temp1 -> data + temp2 -> data;
			prod_to_stock[s1] = temp2 -> stock;
            prods.pb(s1);
			temp2 = temp2 -> next;
		}
		temp1 = temp1 -> next;
	}
}

void merge(node*& Node, ll n, ll m)
{
	node* a = getNode(Node, n),* b = getNode(Node, m);
    Sttr ab_new;
    ll stock_new;
    map <Sttr, ll> prod_to_stock;
	vector <Sttr> prods;
	if((a -> data)[0] != '0' || (b -> data)[0] != '0')
	{
		endfunc();
	}
	ab_new = (a -> data).substr(1, 1) + (b -> data).substr(1, 1);
	stock_new = a -> stock + b -> stock;
	node* a_cat = a -> child,* b_cat = b -> child;
	traverse(b_cat, prod_to_stock, prods);
	for(Sttr x_data: prods)
	{
        Sttr x_cd = x_data.substr(0, 2),x_ef = x_data.substr(2, 2);
		ll x_stock = prod_to_stock[x_data];
		insertSubCategory(Node, a -> data, x_cd, x_stock);
		insertSubSubCategory(Node, a -> data, x_cd, x_ef, x_stock);
	}
    a -> stock = stock_new;
	sort(ab_new.begin(), (ab_new.begin()+ab_new.size()));
	a -> data = ab_new;
	deleteNode(Node, b -> data);
}

void prll(node* Node)
{
	while(Node!=NULL)
	{
		Sttr ab = Node -> data;
		node* cat = Node -> child;
		while(cat!=NULL)
		{
			Sttr cd = cat -> data;
			node* sub = cat -> child;
			while(sub!=NULL)
			{
				cout << ab << cd << sub -> data << " " << sub -> stock << '\n';
				sub = sub -> next;
			}
			cat = cat -> next;
		}
		Node = Node -> next;
	}
}
void solve()
{
    ll q;
	cin >> q;
	node* Node = NULL;
    Sttr op;
	rep(i,0,q)
	{
		
		cin >> op;
		if(op == "I")
		{
			Sttr s;
			ll n;
			cin >> s;
            cin >> n;
			Sttr ab = s.substr(0, 2), cd = s.substr(2, 2),ef = s.substr(4, 2);
			if(!(n < 0))
			{
				insertCategory(Node, ab, n);
				insertSubCategory(Node, ab, cd, n);
				insertSubSubCategory(Node, ab, cd, ef, n);
                continue;
			}
				insertSubSubCategory(Node, ab, cd, ef, n);
				insertSubCategory(Node, ab, cd, n);
				insertCategory(Node, ab, n);
		}

		else if(op == "M")
		{
			ll n, m;
			cin >> n;
            cin >> m;
			n--;
			m--;
			ll len = findLength(Node);
			merge(Node, n % len, m % len);
		}

		else if(op == "S")
		{
			Sttr s;
			cin >> s;
			if(!overhere(Node, s))
			{
				cout << "";
			}
			else
			{
				ll stock;
				if(!(s.size()-2))
				{
					stock = findCategoryStock(Node, s);
				}
                Sttr ab = s.substr(0, 2), cd = s.substr(2, 2);
				if(!(s.size()- 4))
				{
					stock = findSubCategoryStock(Node, ab, cd);
				}
				else if(!(s.size() -6))
				{
					Sttr ef = s.substr(4, 2);
					stock = findSubSubCategoryStock(Node, ab, cd, ef);
				}
				cout << stock << '\n';
			}
		}

		else if(op == "P")
		{
			prll(Node);
		}
	}
}
int main()
{ ffst;
ll t=1;
//cin>>t;
    while(t--)
    {
    solve();
    }
endfunc(0) ;
}