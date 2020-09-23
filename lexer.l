%option yylineno

%{
	#include<stdio.h>
	#include"y.tab.h"
	#include<math.h>
	extern int yylineno;


#define SYMTABSIZE 997

struct node{
	char *name;
	char *type;
	int line;
};

struct node symtab[SYMTABSIZE]; 
int hash(char *str,int i);
int hash_insert(char *str,char *typ,int line);
int hash_search(char *str);
void init_symtable();
void print_table();
int ic_strcmp(char *s1, char *s2);
int COMM = 0;

int tokval=0;
%}

digit [0-9]
letter [a-zA-Z]
identifier {letter}(_|{letter}|{digit})*
float [-+]?{digit}+(\.{digit}+)?([Ee][-+]?{digit}+)?
integer {digit}+
space [ \t]
line [\n]
comment \(\*({letter}|{digit}|{special}|{space}|{line})*\*\)

%%
\(\* {COMM=1;}
\*\) {COMM=0;}

declare {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DECLARE",yylineno);return DECLARE;}}
and {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"AND",yylineno);return AND;}}
array {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"ARRAY",yylineno);return ARRAY;}}
begin {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"BEGIN",yylineno);return BEGIN;}}
case {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"CASE",yylineno);return CASE;}}
div {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DIV",yylineno);return DIV;}}
do {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DO",yylineno);return DO;}}
else {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"ELSE",yylineno);return ELSE;}}
end {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"END",yylineno);return END;}}
for {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"FOR",yylineno);return FOR;}}
from {if(!COMM){printf("\n\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"FROM",yylineno);return FROM;}}
goto {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"GOTO",yylineno);return GOTO;}}
if {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"IF",yylineno);return IF;}}
is {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"IS",yylineno);return IS;}}
mod {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"MOD",yylineno);return MOD;}}
new {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"NEW",yylineno);return NEW;}}
not {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"NOT",yylineno);return NOT;}}
of {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"OF",yylineno);return OF;}}
or {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"OR",yylineno);return OR;}}
procedure {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"PROCEDURE",yylineno);return PROCEDURE;}}
record {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"RECORD",yylineno);return RECORD;}}
ref {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"REF",yylineno);return REF;}}
then {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"THEN",yylineno);return THEN;}}
to {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"TO",yylineno);return TO;}}
type {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"TYPE",yylineno);return TYPE;}}
while {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"WHILE",yylineno);return WHILE;}}

{digit}+ {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"INTEGER",yylineno);return INTEGER;}}//boolean, short, long, char, forgot
{float} {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"FLOAT",yylineno);return FLOAT;}}

{identifier} {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"IDENTIFIER",yylineno);return IDENTIFIER;}}
[ \t\n]*  
\:= {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"ASSIGNMENT",yylineno);return ASSIGNMENT;}}

\: {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"COLON",yylineno);return COLON;}}
; {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"SEMICOLON",yylineno);return SEMICOLON;}}
, {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"COMMA",yylineno);return COMMA;}}
\.  {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DOT",yylineno);return DOT;}}
\/\/ {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DOUBLESLASH",yylineno);return DOUBLESLASH;}}
\( {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"LEFTPAR",yylineno);return LEFTPAR;}}
\) {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"RIGHTPAR",yylineno);return RIGHTPAR;}}
\[ {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"LEFTSQUARE",yylineno);return LEFTSQUARE;}}
\] {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"RIGHTSQUARE",yylineno);return RIGHTSQUARE;}}

\<= {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"LE",yylineno);return LE;}}
\>= {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"GE",yylineno);return GE;}}
\< {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"LT",yylineno);return LT;}}
\> {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"GT",yylineno);return GT;}}
= {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"EQ",yylineno);return EQ;}}
== {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"ET",yylineno);return ET;}}
 
\+  {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"PLUS",yylineno);return PLUS;}}
-  {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"MINUS",yylineno);return MINUS;}}
\*  {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"MULTI",yylineno);return MULTI;}}
\/  {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"DIVIDE",yylineno);return DIVIDE;}}
&&|\|\| {if(!COMM){printf("\ntoken: %s\n\n",yytext);tokval = hash_insert(yytext,"LOGICAL",yylineno);return LOGICAL;}}
. {if(!COMM){printf("\nUnrecognised: %s\n\n",yytext);return UNRECOGNISED;}}
%%

int hash(char *str,int i)
{
    unsigned long hash = 5381;
    int c;
    //printf("str: %d %s\n", *str, str);
//\:|;|,|\.|\/\/|\(|\)|\[|\] {if(!COMM){printf("special: %s\n",yytext);return SPECIAL;}}
//\<=|\>=|\<|\>|=|== {if(!COMM){printf("relational op: %s\n",yytext);return RELATIONAL;}}
//\+|-|\*|\/ {if(!COMM){printf("arithmetic op: %s\n",yytext);return ARITHMETIC;}}
    while (c = *str++){
        hash = ((hash << 4) + hash) + c; /* hash * 33 + c */
        //printf("str: %d %s\n", *str, str);
	//printf("hash val: %lu\nint hash: %d\nc val: %d\n\n",hash,(int)hash,c);
    }
    //printf("in hash while  i val: %d\n",i);
    int val = (int)((hash+i)%SYMTABSIZE);
    //printf("val %d\n",val);
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
int yywrap(){
return 1;
}
