#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SYMTABSIZE 997
struct node{
	char *name;
	char *type;
	int line;
};

struct node symtab[SYMTABSIZE];
int hash(char *str,int i)
{
    unsigned long hash = 5381;
    int c;
    char *poi;
    printf("str: %d %s\n", *str, str);
    while (c = *str++){
	poi = c;
	printf("c val: %d %c\n",c,poi);
	printf("hash before: %lu\n",hash);
        hash = ((hash << 4) + hash) + c; /* hash * 33 + c */
	printf("hash after: %lu\n",hash);
        //printf("str: %d %s\n", *str, str);
	//printf("hash val: %lu\nint hash: %d\nc val: %d\n\n",hash,(int)hash,c);
    }
    //printf("in hash while  i val: %d\n",i);
    int val = (int)((hash+i)%SYMTABSIZE);
    printf("val %d\n",val);
    return ((int)((hash+i)%SYMTABSIZE));
}
int hash_insert(char *str,char *typ,int line) {
	if(hash_search(str)==-1) {
		int i=0;
		int j;
		//printf("in hash insert\n");
		while(i<SYMTABSIZE) {
			//printf("in hash insert while\n");
			j=hash(str,i);
			if(ic_strcmp(symtab[j].name,"NIL")==0) {
				strcpy(symtab[j].name,str);
				symtab[j].type=(char*)malloc(10*sizeof(char));
				strcpy(symtab[j].type,typ);
				symtab[j].line=(int*)malloc(2*sizeof(int));
				symtab[j].line=line;
				return j;
			}
			i++;
		} 
	}
	return (-1);
}
int hash_search(char *str) {
	int i=0;
	int j=hash(str,i);
	
	char *arr = symtab[j].name;
	//printf("str %s\n", arr);
	while((i<SYMTABSIZE) && (ic_strcmp(arr,"NIL")!=0)) {
		//printf("in hash search while\n");
		if(ic_strcmp(symtab[j].name,str)==0) {
			return j;
		}
		i++;
		j=hash(str,i);
	}
	//printf("str %s\n", symtab[j].name);
	return (-1);
}
void init_symtable() {
	int k;
	for(k=0;k<SYMTABSIZE;k++) {
		symtab[k].name=(char *)malloc (100 + 1);
		//symtab[k].line=(int *)malloc(2*sizeof(int));
		strcpy(symtab[k].name,"NIL");
	}
	return ;
}
void print_table() {
	int i;
	printf("SYMBOL TABLE\n");
	printf("---------------------------------------------------\n");
	printf("|INDEX\t|NAME\t\t| line\t\t|token_VAL\t\t\t\n");
	printf("---------------------------------------------------\n");
	for(i=0;i<SYMTABSIZE;i++) {
		if(ic_strcmp(symtab[i].name,"NIL")!=0)
			if(strlen(symtab[i].name)<=5)
			printf("|%d\t|%s\t\t| %d\t\t|%s\t\t\t\n",i,symtab[i].name,symtab[i].line,symtab[i].type);
			else
			printf("|%d\t|%s\t| %d\t\t|%s\t\t\t\n",i,symtab[i].name,symtab[i].line,symtab[i].type);
	}
	printf("---------------------------------------------------\n");
return;
}
int ic_strcmp(char *s1, char *s2) 
{ 
    int i; 
    for (i = 0; s1[i] && s2[i]; ++i) 
    { 
        /* If characters are same or inverting the  
           6th bit makes them same */
        if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) 
           continue; 
        else
           break; 
    } 
  
    /* Compare the last (or first mismatching in  
       case of not same) characters */
    if (s1[i] == s2[i]) 
        return 0; 
  
    // Set the 6th bit in both, then compare 
    if ((s1[i] | 32) < (s2[i] | 32))  
        return -1; 
    return 1; 
} 
int main(){
int hashed = hash_insert("abcdefghab","DECLARE",1);
printf("\nhashed: %d\n",hashed);
return 0;
}
