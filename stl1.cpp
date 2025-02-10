#include<bits/stdc++.h>
#include<math.h>
#include<unordered_set>
using namespace std;

void printPair() { 
    pair<int,int> p(2,4);
    cout << p.first << " " << p.second;
    cout << endl;
    //int,int,int pair<pair<int,int>, pair<int,int> >b
    pair<int, pair<int,int> > a(1, make_pair(2,3));
    cout << a.first << " " << a.second.second << " " << a.second.first;
    cout << endl;
    
    pair<int,int> arr[] = {make_pair(1,2), make_pair(2,3), make_pair(4,5)};
    cout << arr[1].second;
    cout << endl;
}

void printVectors() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    cout << v[2] << endl;
    
    vector<int>::iterator it = v.begin();
    cout << *it << endl;
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    v.erase(v.begin() + 1);
    v.erase(v.begin() + 2, v.begin() + 3);
    
    vector<int> a(2, 100);//100,100
    a.insert(a.begin() + 1, 300);//100,300
    a.insert(a.begin() + 1, 2, 30);//100,30,30
    
    for(vector<int>::iterator it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    vector<int> c(5, 10);//10,10,10,10,10
    v.insert(v.begin() + 1, c.begin(), c.end());//1,10,10,10,10,10,3,4,5,6
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
	}
}
void printLists()
{
    list<int>lst;
    lst.push_back(2);
    lst.push_front(3);
    lst.push_back(5);
    for(list<int>::iterator it = lst.begin(); it != lst.end(); it++) {
        cout << *it << " ";
	}
  
}
void printDeque()
{
    deque<int>dq;
    dq.push_back(1);
    dq.push_front(3);
    dq.push_back(5);
    deque<int>::iterator it = dq.begin();
    advance(it, 2);
    cout << *it;


}
void printStack()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.top();
	cout<<st.top();
}
void printQueue()
{
	queue<int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.back()+=5;
	cout<<q.back();
}
void printPQ(){
		priority_queue<int>pq;
		pq.push(1);
		pq.push(10);
		pq.push(45);
		pq.push(22);
		
	while(!pq.empty()) {
        cout << pq.top() << " ";  // prints 45 22 10 1
        pq.pop();
}
cout<<endl;
priority_queue<int,vector<int>,greater<int> >mpq;
mpq.push(30);
mpq.push(5);
mpq.push(62);
mpq.push(69);
mpq.push(45);
while(!mpq.empty()) {
        cout << mpq.top() << " ";  // prints 45 22 10 1
        mpq.pop();
}
}
void printSet(){
	set<int>se;
	se.insert(1);
	se.insert(5);
	se.insert(9);
	se.insert(1);
	se.insert(2);
	for(set<int>::iterator it=se.begin();it!=se.end();it++)
	{
		cout<<*it;
	}cout<<endl;
	set<int>::iterator it1=se.find(1);
	cout<<*it1;
	cout<<endl;
	set<int>::iterator it2=se.find(4);
	cout<<*it2;
	cout<<endl;
	se.erase(it1);
	for(set<int>::iterator it=se.begin();it!=se.end();it++)
	{
		cout<<*it;
}
}


void printMap() {
    map<int, int> m;
    map<int, pair<int, int>> mp;
    map<pair<int, int>, int> pm;

    // Assigning values
    m[1] = 2;
    mp[2] = make_pair(3, 4);
    pm[{5, 6}] = 7;

    // Printing map m
    cout << "Map m: ";
    for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;

    // Printing map mp
    cout << "Map mp: ";
    for (map<int, pair<int, int>>::iterator it = mp.begin(); it != mp.end(); it++) {
        cout << "(" << it->first << ", (" << it->second.first << ", " << it->second.second << ")) ";
    }
    cout << endl;

    // Printing map pm
    cout << "Map pm: ";
    for (map<pair<int, int>, int>::iterator it = pm.begin(); it != pm.end(); it++) {
        cout << "((" << it->first.first << ", " << it->first.second << "), " << it->second << ") ";
    }
    cout << endl;
}
void printMS()
{
	multiset<int>ms;
	ms.insert(1);
	ms.insert(1);
	ms.insert(1);
	ms.insert(2);	
	ms.insert(1);
	
		for(multiset<int>::iterator it=ms.begin();it!=ms.end();it++)
	{
		cout<<*it;
	}cout<<endl;
}
void printSort() {
    // Declare an array of pairs
    pair<int, int> arr[] = {make_pair(1, 3), make_pair(5, 7), make_pair(4, 7)};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    sort(arr, arr + n);

    // Print the sorted pairs
    cout << "Sorted Pairs: ";
    for (int i = 0; i < n; i++) {
        cout << "(" << arr[i].first << ", " << arr[i].second << ") ";
    }
    cout << endl;
    bool comp(pair<int,int>p1,pair<int,int>p2)
    {
		if (p1.second<p2.second) return true;
		if (p2.second<p1.second) return false;
		if (p1.first<p2.first) return true;
		if(p1.first>p2.first)return false;
	}
sort(arr,arr+n,comp);
for (int i = 0; i < n; i++) {
        cout << "(" << arr[i].first << ", " << arr[i].second << ") ";
    }
    cout << endl;
    //maximum function
    int max=max_element(a,a+n);

    
}

 void printbIpC()
{
	int n=6;
	int bin=__builtin_popcount(n);
	cout<<bin;
	long long l=13357225465;
	int bin2=__builtin_popcountll(l);
	cout<<bin2;
}
void printPermutatons(){
	string s="BUCKY";
	sort(s.begin(),s.end());
	do{
		cout<<s<<" ";
	}
		while(next_permutation(s.begin(),s.end()));
	
}

int main() {
    printPair();
    cout << "now vectors" << endl;
    printVectors();
    cout<<endl;
    cout<<"lists"<<endl;
    printLists();
    cout<<endl;
    cout<<"Deque";
    cout<<endl;
    printDeque();
    cout<<"stacks"<<endl;
    printStack();
    cout<<endl;
    cout<<"queue";
    printQueue();
    cout<<"PQ";
    printPQ();
    cout<<endl;
    printSet();
    cout<<endl;
   


    return 0;
}

