def romint(roman):
    ronum = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    high,num='0',0
    if(len(roman)!=1):
        for i in range(1,len(roman)):
            if(ronum[roman[i]]>ronum[roman[i-1]]):
                high,pos=roman[i],i
        if(high!='0'):
            num=ronum[high]
            num-=romint(roman[0:pos])
            for i in range(1,len(roman)):
                num += ronum[roman[i]]
            return num
        else:
            num=ronum[roman[0]]
            for i in range(1,len(roman)):
                num += ronum[roman[i]]
            return num    
    else:
        return ronum[roman]

print(romint('XCVII'))
        