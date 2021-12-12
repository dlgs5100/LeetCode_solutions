​
​
bool isIsomorphic(char *s, char *t){
​
    int s_map[256] = {0}, t_map[256] = {0};
    while(*s)
    {
        if(s_map[*s] == 0)
        {
            s_map[*s] = *t;
        }
        else if(s_map[*s] != *t)
        {
            return false;
        }
        
        if(t_map[*t] == 0)
        {
            t_map[*t] = *s;
        }
        else if(t_map[*t] != *s)
        {
            return false;
        }
        s++;
        t++;
    }
    return true;
}
