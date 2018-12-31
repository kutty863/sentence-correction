#include<stdio.h>
#include<conio.h>
#include<string.h>
void space(char S[],char A[][25]);
int main()
{
char S[1000];
char a[][25]={"A","about","above","across","act","active","activity","add","afraid","after","again","age","ago","agree","air","all","alone","along","already","always","am","amount","an","and","angry","another","answer","any","anyone","anything","anytime","appear","apple","are","area","arm","army","around","arrive","art","as","ask","at","attack","aunt","autumn","away"};
char b[][25]={"baby","back","bad","bag","ball","bank","base","basket","bath","be","bean","bear","beautiful","bed","bedroom","beer","behave","before","begin","behind","bell","below","besides","best","better","between","big","bird","birth","birthday","bit","bite","black","bleed","block","blood","blow","blue","board","boat","body","boil","bone","book","border","born","borrow","both","bottle","bottom","bowl","box","boy","branch","brave","bread","break","breakfast","breathe","bridge","bright","bring","brother","brown","brush","build","burn","business","bus","busy","but","buy","by"};
char c[][25]={"cake","call","can","candle","cap","car","card","care","careful","careless","carry","case","cat","catch","central","century","certain","chair","chance","change","chase","cheap","cheese","chicken","child","children","chocolate","choice","choose","circle","city","class","clever","clean","clear","climb","clock","cloth","clothes","cloud","cloudy","close","coffee","coat","coin","cold","collect","colour"," comb","comfortable","common","compare","come","complete","computer","condition","continue","control","cook","cool","copper","corn","corner","correct","cost","contain","count","country","course","cover","crash","cross","cry","cup","cupboard","cut"};
char d[][25]={"dance","dangerous","dark","daughter","day","dead","decide","decrease","deep","deer","depend","desk","destroy","develop","die","different","difficult","dinner","direction","dirty","discover","dish","do","dog","door","double","down","dozen","draw","dream","dress","drink","drive","drop","dry","duck","dust","duty" };
char e[][25]={"each","ear","early","earn","earth","east","easy","eat","education","effect","egg","eight","either","electric","elephant","else","empty","end","enemy","enjoy","enough","enter","equal","entrance","escape","even","evening","event","ever","every","everyone","exact","everybody","examination","example","except","excited","exercise","expect","expensive","explain","extremely","eye"};
char f[][25]={"face","fact","fail","fall","false","family","famous","far","farm","father","fast","fat","fault","fear","feed","feel","female","fever","few","fight","fill","film","find","fine","finger","finish","fire","first","fish","fit","five","fix","flag","flat","float","floor","flour","flower","fly","fold","food","fool","foot","football","for","force","foreign","forest","forget","forgive","fork","form","fox","four","free","freedom","freeze","fresh","friend","friendly","from","front","fruit","full","fun","funny","furniture","further","future"};
char g[][25]={"game","garden","gate","general","gentleman","get","gift","give","glad","glass","go","goat","god","gold","good","goodbye","grandfather","grandmother","grass","grave","great","green","gray","ground","group","grow","gun"};
char h[][25]={"hair","half","hall","hammer","hand","happen","happy","hard","hat","hate","have","he","head","healthy","hear","heavy","heart","heaven","height","hello","help","hen","her","here","hers","hide","high","hill","him","his","hit","hobby","hold","hole","holiday","home","hope","horse","hospital","hot","hotel","house","how","hundred","hungry","hour","hurry","husband","hurt"};
char i[][25]={"I","ice","idea","if","important","in","increase","inside","into","introduce","invent","iron","invite","is","island","it","its"};
char j[][25]={"jelly","job","join","juice","jugs","jump","just"};
char k[][25]={"keep","key","kill","kind","king","kitchen","knee","knife","knock","know"};
char l[][25]={"ladder","lady","lamp","land","large","last","late","lately","laugh","lazy","lead","leaf","learn","leave","leg","left","lend","length","less","lesson","let","letter","library","lie","life","light","like","lion","lip","liquor","list","listen","little","live","lock","lonely","long","look","lose","lot","love","low","lower","luck"};
char m[][25]={"machine","main","make","male","man","many","map","mark","market","marry","matter","may","me","meal","mean","measure","meat","medicine","meet","member","mention","method","middle","milk","million","mind","minute","miss","mistake","mix","model","modern","moment","money","monkey","month","moon","more","morning","most","mother","mountain","mouth","move","much","music","must","my"};
char n[][25]={"name","narrow","nation","nature","near","nearly","neck","need","needle","neighbour","neither","net","never","new","news","newspaper","next","nice","night","nine","no","noble","noise","none","nor","north","nose","not","nothing","notice","now","number"};
char o[][25]={"obey","object","ocean","of","off","offer","office","often","oil","old","on","one","only","open","opposite","or","orange","order","other","our","out","outside","over","own"};
char p[][25]={"pack","page","pain","paint","pair","pan","paper","parent","park","part","partner","party","pass","past","path","pay","peace","pen","pencil","people","pepper","per","perfect","period","person","petrol","photograph","piano","pick","picture","piece","pig","pin","pink","place","plane","plant","plastic","plate","play","please","pleased","plenty","pocket","point","poison","police","polite","pool","poor","popular","position","possible","potato","pour","power","present","press","pretty","prevent","price","prince","prison","private","prize","probably","problem","produce","promise","proper","protect","provide","public","pull","punish","pupil","push","put"};
char q[][25]={"queen","question","quick","quiet","quite"};
char r[][25]={"radio","rain","rainy","raise","reach","read","ready","real","really","receive","record","red","remember","remind","remove","rent","repair","repeat","reply","report","rest","restaurant","result","return","rice","rich","ride","right","ring","rise","road","rob","rock","room","round","rubber","rude","rule","ruler","run","rush"};
char s[][25]={"sad","safe","salt","same","sand","save","say","school","science","scissors","search","seat","second","see","seem","sell","send","sentence","serve","seven","several","sex","shade","shadow","shake","shape","share","sharp","she","sheep","sheet","shelf","shine","ship","shirt","shoe","shoot","shop","short","should","shoulder","shout","show","sick","side","signal","silence","silly","silver","similar","simple","single","since","sing","sink","sister","sit","six","size","skill","skin","skirt","sky","sleep","slip","slow","small","smell","smile","smoke","snow","so","soap","sock","soft","some","someone","something","sometimes","son","soon","sorry","sound","soup","south","space","speak","special","speed","spell","spend","spoon","sport","spread","spring","square","stamp","stand","star","start","station","stay","steal","steam","step","still","stomach","stone","stop","store","storm","story","strange","street","strong","structure","student","study","stupid","subject","substance","successful","such","sudden"};
char t[][25]={"table","take","talk","tall","taste","taxi","tea","teach","team","tear","telephone","television","tell","ten","tennis","terrible","test","than","that","the","their","then","there","therefore","these","thick","thin","thing","think","third","this","though","threat","three","tidy","tie","title","to","today","toe","together","tomorrow","tonight","too","tool","tooth","top","total","touch","town","train","tram","travel","tree","trouble","true","trust","twice","try","tur","type"};
char u[][25]={"ugly","uncle","under","understand","unit","until","up","use","useful","usual","usually"};
char v[][25]={"vegetable","very","village","voice","visit"};
char w[][25]={"wait","wake","walk","want","warm","was","wash","waste","watch","water","way","we","weak","wear","weather","wedding","week","weight","welcome","were","well","west","wet","what","wheel","when","where","which","while","white","who","why","wide","wife","wild","will","win","wind","window","wine","winter","wire","wise","wish","with","without","woman","wonder","word","work","world","worry"};
char y[][25]={"yard","yell","yesterday","yet","you","young","your"} ;
char z[][25]={"zero","zoo" }   ;
clrscr();
int sizea=sizeof(a)/sizeof(a[0]);
int sizeb=sizeof(b)/sizeof(b[0]);
int sizec=sizeof(c)/sizeof(c[0]);
int sized=sizeof(d)/sizeof(d[0]);
int sizee=sizeof(e)/sizeof(e[0]);
int sizef=sizeof(f)/sizeof(f[0]);
int sizeg=sizeof(g)/sizeof(g[0]);
int sizeh=sizeof(h)/sizeof(h[0]);
int sizei=sizeof(i)/sizeof(i[0]);
int sizej=sizeof(j)/sizeof(j[0]);
int sizek=sizeof(k)/sizeof(k[0]);
int sizel=sizeof(l)/sizeof(l[0]);
int sizem=sizeof(m)/sizeof(m[0]);
int sizen=sizeof(n)/sizeof(n[0]);
int sizeo=sizeof(o)/sizeof(o[0]);
int sizep=sizeof(p)/sizeof(p[0]);
int sizeq=sizeof(q)/sizeof(q[0]);
int sizer=sizeof(r)/sizeof(r[0]);
int sizes=sizeof(s)/sizeof(s[0]);
int sizet=sizeof(t)/sizeof(t[0]);
int sizeu=sizeof(u)/sizeof(u[0]);
int sizev=sizeof(v)/sizeof(v[0]);
int sizew=sizeof(w)/sizeof(w[0]);
int sizey=sizeof(y)/sizeof(y[0]);
int sizez=sizeof(z)/sizeof(z[0]);

printf("enter the string:");
scanf("%s",&S);
if(S[0]=='a')
space(S,a,sizea);
if(S[0]=='b')
space(S,b,sizeb);
if(S[0]=='c')
space(S,c,sizec);
if(S[0]=='d')
space(S,d,szed);
if(S[0]=='e')
space(S,e,sizee);
if(S[0]=='f')
space(S,f,sizef);
if(S[0]=='g')
space(S,g,sizeg);
if(S[0]=='h')
space(S,h,sizeh);
if(S[0]=='i')
space(S,i,sizei);
if(S[0]=='j')
space(S,j,sizej);
if(S[0]=='k')
space(S,k,sizek);
if(S[0]=='l')
space(S,l,sizel);
if(S[0]=='m')
space(S,m,sizem);
if(S[0]=='n')
space(S,n,sizen);
if(S[0]=='o')
space(S,o,sizeo);
if(S[0]=='p')
space(S,p,sizep);
if(S[0]=='q')
space(S,q,sizeq);
if(S[0]=='r')
space(S,r,sizer);
if(S[0]=='s')
space(S,s,sizes);
if(S[0]=='t')
space(S,t,sizet);
if(S[0]=='u')
space(S,u,sizeu);
if(S[0]=='v')
space(S,v,sizev);
if(S[0]=='w')
space(S,w,sizew);
if(S[0]=='y')
space(S,y,sizey);
if(S[0]=='z')
space(S,z,sizez);
getch();
return 0;
}
void space(char S[],char A[][25],int M)
{
int N=strlen(S);
for(int K=0;K<M;K++)
{
int F=strlen(A[K]);
for(int i=0;i<=N-F;i++)
{
 for(int j=0;j<F;j++)
 {
  if(S[i+j]!=A[K][j])
  break;
 }
  if(j==F)
  {
     for(i=N;i>j;i--)
     {
       S[i]=S[i-1];
     }
    S[j]=' ';
   }
printf("%s",S);
}}}


