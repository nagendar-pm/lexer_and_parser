**LAnguage eXample (LAX)** is a basic programming language given for the purpose of studying Compilers (here Lexical and Syntax Analysis). It is stated in the **Waitegoose** book. <br/>
Link for the same is given [here](https://www.cs.cmu.edu/~aplatzer/course/Compilers/waitegoos.pdf)<br/>
## Lexical Analysis:
Using **regular expressions**, we identify the tokens first, then categorise them. This can be seen in **lexer.l** file. We perform this using Lex language.<br/>
## Syntax Analysis:
Using LR-parser technique, we perform this part. We take the categorised tokens and build an LR-parser (Bottom-Top tree). If we can build the whole tree, then parsing is successful, else there is an error. This can be observed in **parser.y** file, using Yacc.<br/>

## Instructions for compilation & execution:
open the current dir in terminal<br/>
follow these instructions then:<br/>
1.<tt>chmod +x run.sh</tt><br/>
2.<tt>./run.sh</tt></br>
It is to be noted that the lex file tokenises the program in "<tt>input.txt</tt>" written in LAX(LAnguage eXample) language and the yacc file parses it, if any error is found in the input file, parsing is stopped with an error.<br/>
For more information on states, Action and Goto elements of the parser, <tt>y.output</tt> file is to be get in reference with.<br/>
