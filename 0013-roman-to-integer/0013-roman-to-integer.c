int romanToInt(char* s) {
int values[128]={0};
values['I']=1;
values['V']=5;
values['X']=10;
values['L']=50;
values['C']=100;
values['D']=500;
values['M']=1000;
int total=0,i;
for(i=0;s[i]!='\0';i++){
    if(values[(int)s[i]]<values[(int)s[i+1]])
      total-=values[(int)s[i]];
    else
      total+=values[(int)s[i]];   
}
return total;
    
}