vector<pair<int,int> >v;
MinStack() {}

void push(int x) {
        if(v.size()==0)v.emplace_back(make_pair(x,x));
        else if(x<v[v.size()-1].second)v.emplace_back(make_pair(x,x));
        else v.emplace_back(make_pair(x,v[v.size()-1].second));
}

void pop() {
    if(v.size()>0)v.pop_back();
}

int top() {
    return v.size()==0 ? INT_MAX : v[v.size()-1].first;
}

int getMin() {
    return v.size()==0 ? INT_MAX : v[v.size()-1].second;
}