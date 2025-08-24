                else{
                    size++;
                }
                    flag=1;
                    pos=i;
                    i=pos;
                    flag=0;
                    size=0;
                }
            }
            mx=max(mx,size);
        }
        return mx-1;
    }
};