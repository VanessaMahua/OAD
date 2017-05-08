string word;
    std::map<string, int> frecuenciaMap;
    while(true)
    {
        is>>word;
        if(is.fail()) { break; }
        //cout<<word<<endl;
        ++frecuenciaMap[word];
    }

  map<string, int>::iterator p = frecuenciaMap.begin();
    for(int i=1;i<=24;i++)
    {
        int c=0;
        while(p != frecuenciaMap.end())
        {
            if(p->first.length()==i)
            {
                c++;
            }
            p++;
        }
        cout<<"->"<<i<<" "<<c<<endl;
        p = frecuenciaMap.begin();
    }
