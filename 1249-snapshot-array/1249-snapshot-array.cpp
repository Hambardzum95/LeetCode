class SnapshotArray
{
    vector<vector<pair<int, int>>> array;
    int i = 0; 
public:
    SnapshotArray(int length)
    {
        array.resize(length, vector<pair<int,int>>(1));
        int j = 0;
        while(j < length)
        {
            array[i][0] = make_pair(0, 0);
            ++j;
        }
    }
    
    void set(int index, int val)
    {
        array[index].push_back(make_pair(i,val));
    }
    
    int snap()
    {
        return i++;
    }
    
    int get(int index, int snap_id)
    {
        if(!array[index].size())
        {
            return 0;
        }
        auto iterator = lower_bound(array[index].begin(),array[index].end(),make_pair(snap_id + 1, INT_MIN));
        iterator--;
        return iterator->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */