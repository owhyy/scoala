
void sort_SELECTIE(vector<int> v)
{
    for(auto i = 0; i<v.size()-1; i++)
    {
        for(auto j = i+1; j<v.size(); i++)
        {
            if(v[i]>v[j])
                swap(v[i], v[j]);
        }
    }
    for(auto i:v)
        cout<<i<< " ";
    cout<<endl;
}