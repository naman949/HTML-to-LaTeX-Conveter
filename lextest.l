%option noyywrap

%{
	#include<stdio.h>
	#include "ast.h"
	#include "yacctest.tab.h"
	using namespace std;
	
	extern int yylex();
	
	int prev_state = 1;
	int previmage = 0;
%}

SPECIALS [\.,\^\-=+#!\(\)?\<\>\*:;@\'_$%&\[\]\{\}|\/\\\"~`]

%x line 
%x comment 
%x table 
%x figure 
%x l
%x font

%%

<INITIAL>{
"<!--"							{BEGIN(comment); prev_state = 1;}
("<html>"|"<HTML>")      		{return OHTML;}
("</html>"|"</HTML>")    		{return CHTML;}
("<head>"|"<HEAD>")       		{return OHEAD;}
("</head>"|"</HEAD>")     		{return CHEAD;}
("<title>"|"<TITLE>")    		{BEGIN(line);return OTITLE;}
("<body>"|"<BODY>")      		{return OBODY;}
("</body>"|"</BODY>")    		{return CBODY;}
("<h1>"|"<H1>")       			{BEGIN(line);return OH1;}
("<h2>"|"<H2>")       			{BEGIN(line);return OH2;}
("<h3>"|"<H3>")       			{BEGIN(line);return OH3;}
("<h4>"|"<H4>")       			{BEGIN(line);return OH4;}
("<p>"|"<P>")       			{BEGIN(line);return OPAR;}
("<div>"|"<DIV>")				{return ODIV;}
("</div>"|"</DIV>")				{return CDIV;}
("<table"|"<TABLE")				{BEGIN(table);return OTABLE;}
("<figure>"|"<FIGURE>")			{BEGIN(figure); return OFIG;}
("<ol>"|"<OL>")					{return OOL;}
("</ol>"|"</OL>")				{return COL;}
("<ul>"|"<UL>")					{return OUL;}
("</ul>"|"</UL>")				{return CUL;}
("<li>"|"<LI>")					{BEGIN(line);return OLI;}
("<dl>"|"<DL>")					{return ODL;}
("</dl>"|"</DL>")				{return CDL;}
("<dt>"|"<DT>")					{BEGIN(line);return ODT;}
("<dd>"|"<DD>")					{BEGIN(line);return ODD;}
("<br"|"<BR")+[ ]?+[/]?+">"		{return BR;}
[ \t\n]+                		;
.                       		;
}

<line>{
"<!--"								{BEGIN(comment);prev_state = 2;}
("</title>"|"</TITLE>")   			{BEGIN(INITIAL);return CTITLE;}
("</h1>"|"</H1>")     				{BEGIN(INITIAL);return CH1;}
("</h2>"|"</H2>")     				{BEGIN(INITIAL);return CH2;}
("</h3>"|"</H3>")     				{BEGIN(INITIAL);return CH3;}
("</h4>"|"</H4>")     				{BEGIN(INITIAL);return CH4;}
("</p>"|"</P>")     				{BEGIN(INITIAL);return CPAR;}
("</th>"|"</TH>")					{BEGIN(table);return CTH;}
("</td>"|"</TD>")					{BEGIN(table);return CTD;}
("</caption>"|"</CAPTION>")			{BEGIN(table);return CCAPTION;}
("<img"|"<IMG")						{BEGIN(figure);previmage=1;return OIMG;}
("</figcaption>"|"</FIGCAPTION>")	{BEGIN(figure);return CFIGCAPTION;}
("<b>"|"<B>")     					{return OB;}
("</b>"|"</B>")   					{return CB;}
("<i>"|"<I>")       				{return OI;}
("</i>"|"</I>")     				{return CI;}
("<u>"|"<U>")       				{return OU;}
("</u>"|"</U>")     				{return CU;}
("<tt>"|"<TT>")						{return OTT;}
("</tt>"|"</TT>")					{return CTT;}
("<em>"|"<EM>")     				{return OEMP;}
("</em>"|"</EM>")  					{return CEMP;}
("<strong>"|"<STRONG>")				{return OSTRONG;}
("</strong>"|"</STRONG>")			{return CSTRONG;}
("<small>"|"<SMALL>")				{return OSMALL;}
("</small>"|"</SMALL>")				{return CSMALL;}
("<sub>"|"<SUB>")					{return OSUB;}
("</sub>"|"</SUB>")					{return CSUB;}
("<sup>"|"<SUP>")					{return OSUP;}
("</sup>"|"</SUP>")					{return CSUP;}
("<font"|"<FONT")					{BEGIN(font);return OF;}
("</font>"|"</FONT>")				{return CF;}
("<a"|"<A")							{BEGIN(l);return OA;}
("</a>"|"</A>")						{return CA;}
("</li>"|"</LI>")					{BEGIN(INITIAL);return CLI;}
("</dt>"|"</DT>")					{BEGIN(INITIAL);return CDT;}
("</dd>"|"</DD>")					{BEGIN(INITIAL);return CDD;}
("<CENTER>"|"<center>")				{return OCEN;}
("</CENTER>"|"</center>")			{return CCEN;}
("<br"|"<BR")+[ ]?+[/]?+">"			{return BR;}
("&forall;")						{string s = "$\\forall$";yylval.sval = strdup(s.c_str());return WORD;}
("&exist;")							{string s = "$\\exists$";yylval.sval = strdup(s.c_str());return WORD;}
("&sub;")							{string s = "$\\subset$";yylval.sval = strdup(s.c_str());return WORD;}
("&sup;")							{string s = "$\\supset$";yylval.sval = strdup(s.c_str());return WORD;}
("&sube;")							{string s = "$\\subseteq$";yylval.sval = strdup(s.c_str());return WORD;}
("&supe;")							{string s = "$\\supseteq$";yylval.sval = strdup(s.c_str());return WORD;}
("&isin;")							{string s = "$\\in$";yylval.sval = strdup(s.c_str());return WORD;}
("&sum;")							{string s = "$\\sum$";yylval.sval = strdup(s.c_str());return WORD;}
("&prod;")							{string s = "$\\prod$";yylval.sval = strdup(s.c_str());return WORD;}
("&and;")							{string s = "$\\wedge$";yylval.sval = strdup(s.c_str());return WORD;}
("&or;")							{string s = "$\\vee$";yylval.sval = strdup(s.c_str());return WORD;}
("&cap;")							{string s = "$\\cap$";yylval.sval = strdup(s.c_str());return WORD;}
("&cup;")							{string s = "$\\cup$";yylval.sval = strdup(s.c_str());return WORD;}
("&ne;")							{string s = "$\\neq$";yylval.sval = strdup(s.c_str());return WORD;}
("&le;")							{string s = "$\\leq$";yylval.sval = strdup(s.c_str());return WORD;}
("&ge;")							{string s = "$\\geq$";yylval.sval = strdup(s.c_str());return WORD;}
("&Alpha;")							{string s = "A";yylval.sval = strdup(s.c_str());return WORD;}
("&Beta;")							{string s = "B";yylval.sval = strdup(s.c_str());return WORD;}
("&Gamma;"|"&Delta;"|"&Theta;"|"&Lambda;"|"&Xi;"|"&Pi;"|"&Sigma;"|"&Omega;")	{
																					string s(yytext);
																					string p = "$\\";
																					for(int i=1;i<s.length()-1;i++)
																						p = p + s[i];
																					p = p + "$";
																					yylval.sval = strdup(p.c_str());
																					return WORD;
																				}
("&alpha;"|"&beta;"|"&gamma;"|"&delta;"|"&epsilon;"|"&eta;"|"&theta;"|"&lambda;"|"&mu;"|"&phi;"|"&chi;"|"&sigma;"|"&omega;"|"&tau;"|"&iota;")	{
																					string s(yytext);
																					string p = "$\\";
																					for(int i=1;i<s.length()-1;i++)
																						p = p + s[i];
																					p = p + "$";
																					yylval.sval = strdup(p.c_str());
																					return WORD;
																				}
[A-Za-z0-9.,]+      				{yylval.sval = strdup(yytext);return WORD;}
[ \t\n]+							{return SPACE;}
{SPECIALS}							{yylval.sval = strdup(yytext);return SPECIAL;}
}

<table>{
("<!--")																{BEGIN(comment);prev_state=3;}
("BORDER"|"border")+"="+("\'0\'"|"\'1\'"|"\"0\""|"\"1\"")+">"			{yylval.sval = strdup(yytext);return BORDER;}
("<caption>"|"<CAPTION>")												{BEGIN(line);return OCAPTION;}
("<tr>"|"<TR>")															{return OTR;}
("</tr>"|"</TR>")														{return CTR;}
("<th>"|"<TH>")															{BEGIN(line);return OTH;}
("<td>"|"<TD>")															{BEGIN(line);return OTD;}
("</table>"|"</TABLE>")													{BEGIN(INITIAL);return CTABLE;}
[ \t\n]+																;
.																		;
}

<figure>{
("<!--")							{BEGIN(comment);prev_state=4;}
("<figcaption>"|"<FIGCAPTION>")		{BEGIN(line);return OFIGCAPTION;}
("<img"|"<IMG")						{previmage=0;return OIMG;}
("SRC="|"src=")+(("\'"+([A-Za-z0-9._\/:\\|?\*]+)+"\'")|("\""+([A-Za-z0-9._\/:\\|?\*]+)+"\""))		{
																										string src(yytext);
																										string p = "";
																										int i=5;
																										while(src[i]!='\'' && src[i]!='\"')
																											p = p + src[i++];
																										yylval.sval = strdup(p.c_str());
																										return SRC;
																									}
("width="|"WIDTH=")+(("\'"+([0-9]+)+"\'")|("\""+([0-9]+)+"\""))										{
																										string s(yytext);
																										string p = "width=";
																										int i=7;
																										while(s[i]!='\'' && s[i]!='\"')
																											p = p + s[i++];
																										p = p + "px";
																										yylval.sval = strdup(p.c_str());
																										return ATTR;
																									}
("height="|"HEIGHT=")+(("\'"+([0-9]+)+"\'")|("\""+([0-9]+)+"\""))									{
																										string s(yytext);
																										string p = "height=";
																										int i=8;
																										while(s[i]!='\'' && s[i]!='\"')
																											p = p + s[i++];
																										p = p + "px";
																										yylval.sval = strdup(p.c_str());
																										return ATTR;
																									}
(['/']?)+">"																						{
																										if(previmage)
																										{BEGIN(line);previmage=0;}
																										return(CIMG);
																									}
("</figure>"|"</FIGURE>")																			{BEGIN(INITIAL);return CFIG;}
[ \t\n]+																							;
}

<l>{
("<!--")																						{BEGIN(comment);prev_state=5;}
("href="|"HREF=")+(("\'"+([-_=+&!@.?\/:a-zA-Z0-9]+)+"\'")|("\""+([-_=+&!@.?\/:a-zA-Z0-9]+)+"\""))	{
																									string s(yytext);
																									string p = "";
																									for(int i=6;i<s.length()-1;i++)
																										p = p + s[i];
																									yylval.sval = strdup(p.c_str());
																									return HREF;
																								}
">"																								{BEGIN(line);}
[ \t\n]+																						;
}

<font>{
("<!--")														{BEGIN(comment);prev_state=6;}
("size="|"SIZE=")+(("\'"+([0-9]+)+"\'")|("\""+([0-9]+)+"\""))	{
																	string s(yytext);
																	string p = "";
																	for(int i=6;i<s.length()-1;i++)
																		p=p+s[i];
																	yylval.sval = strdup(p.c_str());
																	return SIZE;
																}
">"																{BEGIN(line);}
[ \t\n]+														;
}

<comment>{
"-->"	{
			switch(prev_state)
			{
				case 1: BEGIN(INITIAL);break;
				case 2: BEGIN(line);break;
				case 3: BEGIN(table);break;
				case 4: BEGIN(figure);break;
				case 5: BEGIN(l);break;
				case 6: BEGIN(font);break;
			}
		}
.		;
}


%%
