#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<math.h>
class student
{
		 private:
int rn;
char nm[20];
int cl;
char stream[20];
int sub;
int eng;
int hin;
int mat;
int phy;
int che;
int ip;
int cs;
int bio;
float marks;
float avg;
float per;
char bh[5];
char add[50];
char bg[5];
long double mn;
char email[50];
char ch;

int rnS;
char nmS[20];
int clS;
char streamS[20];
int subS;
int engS;
int hinS;
int matS;
int phyS;
int cheS;
int ipS;
int csS;
int bioS;
float marksS;
float avgS;
float perS;
char bhS[5];
char addS[50];
char bgS[5];
long double mnS;
char emailS[50];
		 public:
void addnew()
{ eng=0;
hin=0;
mat=0;
phy=0;
che=0;
ip=0;
cs=0;
bio=0;
marks=0;
avg=0;
per=0;
clrscr();
cout<<"################################################################################################################################################################\n";
cout<<"\t\t\t  ** ADD NEW DATA **\n";
cout<<"################################################################################################################################################################\n";
cout<<"\nWRITE ROLL NUMBER OF STUDENT = ";
cin>>rn;
cout<<"\n";
for(int w=0;w<79;w++)
{
cout<<"*";
}
cout<<"\nWRITE NAME OF STUDENT = ";
gets(nm);
cout<<"\n";
for(int x=0;x<79;x++)
{
cout<<"*";
}
cout<<"\n WRITE CLASS OF STUDENT = ";
cin>>cl;
cout<<"\n";
for(int y=0;y<79;y++)
{
cout<<"*";
}
cout<<"\n WRITE STREAM OF STUDENT (medical,non medical,commerse,arts)= ";
gets(stream);
cout<<"\n";
for(int z=0;z<79;z++)
{
cout<<"*";
}
cout<<"\n WRITE SUBJECT OF STUDENT (eg: 1,2 etc...)\n1. for PCM & IP\n2. for PCM & CS\n3. for PCM & HINDI\n4.FOR PCM & bio\n5. forPC & bio & IP = ";
cin>>sub;
cout<<"\n";
for(int ab=0;ab<79;ab++)
{
cout<<"*";
}
cout<<"\nWRITE MARKS OF STUDENT OBTAINED = ";
subjtc();
mark();
cout<<"\n";
for(int ac=0;ac<79;ac++)
{
cout<<"*";
}
cout<<"\nTHE STUDENT IS BADGE HOLDER(yes/no) = ";
gets(bh);
cout<<"\n";
for(int ad=0;ad<79;ad++)
{
cout<<"*";
}
cout<<"\nWRITE BLOOD GROUP OF STUDENT (eg: B pos,B neg) = ";
gets(bg);
cout<<"\n";
for(int ae=0;ae<79;ae++)
{
cout<<"*";
}
cout<<"\nWRITE ADDRESS OF STUDENT = ";
gets(add);
cout<<"\n";
for(int af=0;af<79;af++)
{
cout<<"*";
}
cout<<"\nWRITE MOBILE NUMBER OF STUDENT = ";
cin>>mn;
cout<<"\n";
for(int ag=0;ag<79;ag++)
{
cout<<"*";
}
cout<<"\nWRITE E-mail OF STUDENT = ";
gets(email);
cout<<"\n\n";
for(int ah=0;ah<160;ah++)
{
cout<<"*!";
}
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MODIFY
void modify()
{clrscr();
for(int al=0;al<160;al++)
{
cout<<"|";
}
cout<<"\n\tROLL NUMBER     = "<<rn;
cout<<"\n\tNAME          = "<<nm;
cout<<"\n\tCLASS         = "<<cl;
cout<<"\n\tSTREAM        = "<<stream;
cout<<"\n\tSUBJECT       = "<<sub;
if(sub==1)
{
cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & IP.";
}
else if(sub==2)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & CS";
}
else if(sub==3)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & HINDI";
}
else if(sub==4)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & BIOLOGY";
}
else if (sub==5)
{cout<<".PHYSICS,CHEMISTRY,ENGLISH,BIOLOGY & IP";
}
cout<<"\n\tMARKS         = "<<marks;
cout<<"\n\tAVERAGE       = "<<avg;
cout<<"\n\tPERCENTAGE    = "<<per<<"%";
cout<<"\n\tBADGE HOLDER  = "<<bh;
cout<<"\n\tADDRESS       = "<<add;
cout<<"\n\tBLOOD GROUP   = "<<bg;
cout<<"\n\tMOBILE NUMBER = "<<mn;
cout<<"\n\tE-mail ID     = "<<email;
cout<<"\n\n\n\t\t\t\t PRESS ENTER...";
getch();
clrscr();
for(int am=0;am<80;am++)
{
cout<<"=";
}
cout<<"\n\t\t\t*** ENTER NEW DETAILS ***";
for(int an=0;an<80;an++)
{
cout<<"=";
}
cout<<"\n\nNEW NAME OF STUDENT(Enter'.'to retain old one)= ";
gets(nmS);
for(int ao=0;ao<80;ao++)
{
cout<<"#";
}
cout<<"\nNEW CLASS OF STUDENT(Enter -1 to retain old one)= ";
cin>>clS;
 for(int ap=0;ap<80;ap++)
{
cout<<"#";
}
cout<<"\nNEW STREAM OF STUDENT(Enter'.'to retain old one)= ";
gets(streamS);
for(int aq=0;aq<80;aq++)
{
cout<<"#";
}
cout<<"\nNEW SUBJECT OF STUDENT(Enter -1to retain old one)= ";
cin>>subS;
for(int ar=0;ar<80;ar++)
{
cout<<"#";
}
cout<<"\nNEW MARKS OF STUDENT(Enter -1to retain old one)= ";
int retain;
cin>>retain;
if(retain==-1)
{
}
else{
subjtc();
mark();
}
for(int dr=0;dr<80;dr++)
{
cout<<"#";
}
cout<<"\nNEW BADGE HOLDER OF STUDENT(Enter'.'to retain old one)= ";
gets(bhS);
for(int as=0;as<80;as++)
{
cout<<"#";
}
cout<<"\nNEW ADDRESS OF STUDENT(Enter'.'to retain old one)= ";
gets(addS);
for(int at=0;at<80;at++)
{
cout<<"#";
}
cout<<"\nNEW BLOOD GROUP OF STUDENT(Enter'.'to retain old one)= ";
gets(bgS);
for(int au=0;au<80;au++)
{
cout<<"#";
}
cout<<"\nNEW MOBILE NUMBER OF STUDENT(Enter -1to retain old one)= ";
cin>>mnS;
for(int av=0;av<80;av++)
{
cout<<"#";
}
cout<<"\nNEW E-mail OF STUDENT(Enter'.'to retain old one)= ";
gets(emailS);
for(int aw=0;aw<160;aw++)
{
cout<<"%";
}
if(strcmp(nmS,".")!=0)
strcpy(nm,nmS);
if(clS!=-1)
{cl=clS;}
if(strcmp(streamS,".")!=0)
strcpy(stream,streamS);
if(subS!=-1)
{sub=subS;}
if(strcmp(bhS,".")!=0)
strcpy(bh,bhS);
if(strcmp(addS,".")!=0)
strcpy(add,addS);
if(strcmp(bgS,".")!=0)
strcpy(bg,bgS);
if(mnS!=-1)
{mn=mnS;}
if(strcmp(emailS,".")!=0)
strcpy(email,emailS);
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%ROLL NO.
int getrno()
{return rn;
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%MARKS,AVERAGE,PERCENTAGE.
float mark()
{marks=phy+che+mat+ip+cs+hin+bio+eng;
avg=marks/5;
per=(avg*100)/100;
return marks;
return avg;
return per;
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%SUBJECT SELECTION.
int subjtc()
{
cout<<"\n\n\tPHYSICS = ";
cin>>phy;
cout<<"\n\tCHEMISTRY = ";
cin>>che;
cout<<"\n\tENGLISH = ";
cin>>eng;
if(sub==1||subS==1)
{
cout<<"\n\tMATHS = ";
cin>>mat;
cout<<"\n\tINFORMATION PRACTICE = ";
cin>>ip;
}
else if(sub==2||subS==2)
{
cout<<"\n\tMATHS = ";
cin>>mat;
cout<<"\n\tCOMPUTER SCIENCE = ";
cin>>cs;
}
else if(sub==3||subS==3)
{
cout<<"\n\tMATHS = ";
cin>>mat;
cout<<"\n\tHINDI = ";
cin>>hin;
}
else if(sub==4||subS==4)
{
cout<<"\n\tMATHS = ";
cin>>mat;
cout<<"\n\tBIOLOGY = ";
cin>>bio;
}
else if(sub==5||subS==5)
{
cout<<"\n\tBIOLOGY = ";
cin>>bio;
cout<<"\n\tINFORMATION PRACTICS = ";
cin>>ip;
}
else
{cout<<"\n\tMATHS = ";
cin>>mat;
cout<<"\n\tIP = ";
cin>>ip;
cout<<"\n\tBIOLOGY = ";
cin>>bio;
}
}

//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%SHOW DATA.
void putdata()
{
clrscr();
for(int aq=0;aq<80;aq++)
{
cout<<"|";
}
cout<<"\t\t\tROLL NUMBER     = "<<rn<<"\n";
for(int ar=0;ar<80;ar++)
{
cout<<"+";
}
cout<<"\tNAME          = "<<nm<<"\n";
for(int as=0;as<80;as++)
{
cout<<"+";
}
cout<<"\tCLASS         = "<<cl<<"\t\tBLOOD GROUP   = "<<bg<<"\n";
for(int at=0;at<80;at++)
{
cout<<"+";
}
cout<<"\tSTREAM        = "<<stream<<"\n";
for(int au=0;au<80;au++)
{
cout<<"+";
}
cout<<"\tSUBJECT       = "<<sub;
if(sub==1)
{
cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & IP.";
}
else if(sub==2)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & CS";
}
else if(sub==3)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & HINDI";
}
else if(sub==4)
{cout<<".PHYSICS,CHEMISTRY,MATHS,ENGLISH & BIOLOGY";
}
else if (sub==5)
{cout<<".PHYSICS,CHEMISTRY,ENGLISH,BIOLOGY & IP";
}cout<<"\n";
for(int aw=0;aw<80;aw++)
{
cout<<"+";
}
cout<<"\tMARKS         = "<<marks<<"\n";
cout<<"\tAVERAGE       = "<<avg<<"\n";
cout<<"\tPERCENTAGE    = "<<per<<"%\n";
for(int Dw=0;Dw<80;Dw++)
{
cout<<"+";
}
cout<<"\tBADGE HOLDER  = "<<bh<<"\n";
for(int ax=0;ax<80;ax++)
{
cout<<"+";
}
cout<<"\tADDRESS       = "<<add<<"\n";
for(int ay=0;ay<80;ay++)
{
cout<<"+";
}
cout<<"\tMOBILE NUMBER = "<<mn<<"\n";
for(int ba=0;ba<80;ba++)
{
cout<<"+";
}
cout<<"\tE-mail ID     = "<<email<<"\n";
for(int bc=0;bc<80;bc++)
{
cout<<"+";
}
}
}s1,stud;
//+++++++++++++++++++++++++++++++++END OF CLASS.
int main()
{
clrscr();
for(int a=0;a<160;a++)
{
cout<<"%";
}
cout<<"\n\n\n";
cout<<"################################################################################################################################################################\n";
cout<<"        _            _ ______   ^     _____  .----.  _     _   ______ \n";
cout<<"        ||          //||-----| ||    | ___.| | __ | | I   //| ||-----|\n";
cout<<"         ||   /|   // ||====   ||    ||      ||  || ||II_//|| ||====  \n";
cout<<"          ||_//||_//  ||_____  ||___ ||___.  ||__|| || I-/ || ||_____ \n";
cout<<"           |_/  |_/   |------| |____||_____| |____| ||     || |------|\n\n";
cout<<"################################################################################################################################################################\n";
cout<<"\n\n\n\n\t\t\t**PRESS ENTER to Continue...**\n";

for(int b=0;b<160;b++)
{
cout<<"%";
}
getch();
clrscr();
//+++++++++++++++++++++++++++++++++++PASSWORD
for(int c=0;c<320;c++)
{
cout<<"!";
}
int aa,cc,ee;
char bb[20];
char dd;
cout<<"\n\n\t\t\tWRITE THE PASSWORD = ";
cin>>aa;
if(aa==100)
{
cout<<"\n\n";
for(int d=0;d<160;d++)
{
cout<<"=";
}
cout<<"\n\t\t\t**PASSWORD IS CORRECT**\n";
for(int e=0;e<160;e++)
{
cout<<"=";
}
cout<<"\n\n";
for(int f=0;f<400;f++)
{
cout<<"?";
}
cout<<"\n\t\t\t**PRESS ENTER TO CONTINUE...**";
getch();
}
else
{
for(int m=0;m<300;m++)
{
cout<<"\n\n";
for(int g=0;g<160;g++)
{
cout<<"$";
}
cout<<"\n\t\t\t**PASSWORD IS NOT CORRECT**\n";
for(int h=0;h<160;h++)
{
cout<<"$";
}
cout<<"\n\n";
for(int i=0;i<320;i++)
{
cout<<"?";
}
}
cout<<"\n\t\t\t ** PRESS ENTER TO EXIT **";
getch();
exit(0);
}
//++++++++++++++++++++++++++++++++++++ USER.
clrscr();
for(int k=0;k<160;k++)
{
cout<<"/";
}
cout<<"\n\n\n";
for(int l=0;l<160;l++)
{
cout<<"+";
}
cout<<"\n\t\t   ## ## ## WRITE YOUR USERNAME ## ## ##\n";
for(int n=0;n<160;n++)
{
cout<<"+";
}
cout<<"\n\n\n";
for(int o=0;o<160;o++)
{
cout<<"/";
}
cout<<"\n\n\t\t\t  :- ";
gets (bb);
//++++++++++++++++++++++++++++++++ MAIN MENU.
clrscr();
for(int p=0;p<5000;p++)
{
cout<<"############ LOADING ***** LOADING $$$$$$ LOADING ***** LOADING #############\n";
cout<<"************ LOADING ##### LOADING ====== LOADING ##### LOADING *************\n";
}
do
{
clrscr();
for(int q=0;q<80;q++)
{
cout<<"/";
}
cout<<"\n";
for(int r=0;r<160;r++)
{
cout<<"=";
}
cout<<"\n\t\t\t** WELCOME "<<bb<<" IN **\n";
for(int s=0;s<160;s++)
{
cout<<"=";
}
cout<<"\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% MAIN MENU %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
cout<<"%%\t\t1. STUDENT MANAGEMENT SYSTEM\t\t\t\t     %%\n%%\n%%\n";
cout<<"%%\t\t2. CALCULATOR                     \t     %%\n%%\n%%\n";
cout<<"%%\t\t3. << EXIT >>\t\t\t\t%%\n\n\n\n";
for(int t=0;t<80;t++)
{
cout<<"%";
}
cout<<"\t\t\t>>>> CHOOSE YOUR CHOICE = ";
cin>>cc;
//************************************star loading
for(int ba=0;ba<700;ba++)
{
cout<<"\n";
for(int bc=0;bc<ba;bc++)
cout<<"%";
}
clrscr();
if(cc==1)
{
//++++++++++++++++++++++++++++++STUDENT MANAGEMENT SYSTEM.
for(int ax=0;ax<160;ax++)
{
cout<<"$";
}
cout<<"\n";
for(int ay=0;ay<80;ay++)
{
cout<<"[]";
}
cout<<"\n\t\t\tWELCOME "<<bb<<" IN\n\t\t     *** STUDENT MANAGEMENT SYSTEM ***\n";
for(int az=0;az<80;az++)
{
cout<<"[]";
}
cout<<"\t\t\t _______________________     ";
cout<<"\n\t\t\t/ +--------------------+ |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| |     1. ADD NEW     | |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| |     2. MODIFY      | |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| |     3. SEARCH      | |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| |     4. SHOW ALL    | |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| |     5. DELETE      | |   ";
cout<<"\n\t\t\t| |                    | |   ";
cout<<"\n\t\t\t| +--------------------+ |\t   **<< 6. EXIT >>**";
cout<<"\n\t\t\t|-----------------------/ \\\\\CHOOSE YOUR CHOICE >>> ";
cin>>ee;
for(int bd=0;bd<700;bd++)
{
cout<<"\n";
for(int be=0;be<bd;be++)
cout<<"%";
}
clrscr();
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%ADD NEW.
if(ee==1)
{
ofstream go("stu.dat",ios::out);
go.close();
ifstream fi("stu.dat",ios::in);
ofstream fo("temp.dat",ios::out);
char last='y';
for(int ee=0;ee<10;ee++)
{
s1.addnew();
while(!fi.eof() )
{
fi.read((char*)&stud,sizeof(stud));
if (s1.getrno()<=stud.getrno())
{
fo.write((char*)&s1,sizeof(s1));
last ='n';
break;
}
else
fo.write((char*)&stud,sizeof(stud));
}
if (last=='y')
fo.write((char*)&s1,sizeof(s1));
else if (!fi.eof())
{
while(!fi.eof())
{fi.read((char*)&stud,sizeof(stud));
fo.write((char*)&stud,sizeof(stud));
}
}
fi.close();
fo.close();
remove("stu.dat");
rename("temp.dat","stu.dat");
char dd;
cout<<"\t\tWANT TO ADD MORE DATA... (y/n) =";
cin>>dd;
if(dd=='y')
{
continue;
}
else
{break;
}
}
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%MODIFY.
else if(ee==2)
{
for(int ai=0;ai<80;ai++)
{
cout<<"<";
}
cout<<"\n";
for(int aj=0;aj<160;aj++)
{
cout<<"=";
}
cout<<"\n\t\t\t## MODIFY DATA ##\n";
for(int ak=0;ak<160;ak++)
{
cout<<"=";
}
fstream fio("stu.dat",ios::in|ios::out|ios::binary);
int rno;long pos;char found='f';
cout<<"\nENTER ROLL NO OF STUDENT WHOSE RECORD IS TO BE MODIFIED = ";
cin>>rno;
while(!fio.eof())
{
pos=fio.tellg();
fio.read((char*)&s1,sizeof(s1));
if(s1.getrno()==rno)
{s1.modify();
fio.seekg(pos);
fio.write((char*)&s1,sizeof(s1));
found='t';
break;
}
}
if(found=='f')
{cout<<"\n\n";
for(int az=0;az<80;az++)
{cout<<"?^?";
}
cout<<"\n\n\t\tRECORD NOT FOUND ..???\n";
}
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%SEARCH.
else if(ee==3)
{
int nr;char found='n';
ifstream fi("stu.dat",ios::in);
for(int am=0;am<160;am++)
{
cout<<"<>";
} cout<<"\n\n\n\n";
for(int al=0;al<160;al++)
{
cout<<"*";
}
cout<<"ENTER ROLL.NO TO BE SEARCHED FOR : ";
for(int an=0;an<200;an++)
{
cout<<"*";
}     cout<<"\n\n\t\t\t= ";
cin>>nr;
while(!fi.eof())
{
fi.read((char*)&s1,sizeof(s1));
if(s1.getrno()==nr)
{
s1.putdata();
found='y';
break;
}
}
if(found=='n')
{
cout<<"\n\n\n\n";
for(int ao=0;ao<160;ao++)
{
cout<<"-!";
}
cout<<"\n\n\t\tROLL.NO NOT FOUND IN FILE !!!...\n\n";
for(int ap=0;ap<160;ap++)
{
cout<<"?+";
}
}
fi.close();
getch();
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%SHOW ALL.
else if(ee==4)
{
ifstream fio;
fio.open("stu.dat",ios::in);
while(!fio.eof())
{
fio.read((char*)&stud,sizeof(stud));
if(fio.eof())break;
stud.putdata();
cout<<"\t\t\tPRESS ENTER for next DATA.......................";
getch();
}
fio.close();
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%DELETE.
else if(ee==5)
{
ifstream fio("stu.dat",ios::in);
ofstream file("temp.dat",ios::out);
int rno1;
char found='f',confirm='n';
for(int ds=0;ds<160;ds++)
{
cout<<"~";
}  cout<<"\n\n\n";
for(int dT=0;dT<160;dT++)
{
cout<<"/";
}
cout<<"\n\n\tENTER ROLLNO OF THE STUDENT WHOSE RECORD IS TO BE DELETED\n";
for(int dV=0;dV<160;dV++)
{
cout<<"/";
}
cout<<"\t\t\t\:-"; cin>>rno1;
while(!fio.eof())
{
fio.read((char*)&s1,sizeof(s1));
if(s1.getrno()==rno1)
{
s1.putdata();
found='t';
cout<<"ARE YOU SURE, YOU WANT TO DELETE THIS RECORD ?(Y/N)...";
cin>>confirm;
if(confirm=='n')
file.write((char*)&s1,sizeof(s1));
}
else
file.write((char*)&s1,sizeof(s1));
}
if(found=='f')
for(int dU=0;dU<80;dU++)
{
cout<<"?!";
}
cout<<"\n\t\t\tRECORD NOT FOUND .....";
for(int dW=0;dW<160;dW++)
{
cout<<"!?";
}
fio.close();
file.close();
remove("stu.dat");
rename("temp.dat","stu.dat");
}
//%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%EXIT.
else if(ee==6)
{
for(int dx=0;dx<160;dx++)
{
cout<<"#";
}
cout<<"\n\n    MADE BY  :-\n\t\t SUNNY.M.NABHARE\n\t\t VIJAY BIST\n\t\t VISHALI NAIR\n";
for(int dy=0;dy<160;dy++)
{
cout<<"#";
}
char zz;
cout<<"\n\n\t\tWANT TO EXIT FROM THIS WINDOW...(y/n) ?";
cin>>zz;
if(zz=='y'||zz=='Y')
{
exit(0);
}
else if(zz=='n'||zz=='N')
{
continue;
}
for(int dz=0;dz<160;dz++)
{
cout<<"&";
}
}
else
{
continue;
}
}
else if(cc==2)
{
int ia;
float jk,jl,jm,jn,jo,jp,jq,jr,js,jt,jv,jw,jx,ju,jy,jz;
float ib,ic,id,ie,ig,ih,ij;
for(int ea=0;ea<160;ea++)
{
cout<<"<";
}
cout<<"\t\t\t\t WELCOME "<<bb<<" IN\n";
cout<<"\t\t\t   ^^ SMART CALCULATOR ^^\n";
for(int eb=0;eb<160;eb++)
{
cout<<">";
}
cout<<"\n\t\t\t\t  ** MAIN MENU **\n";
for(int ec=0;ec<160;ec++)
{
cout<<"#";
}
cout<<"\n\t1. ADDITION, SUBSTRACTION, DIVISON, MULTIPLICATION.\n";
cout<<"\n\t2. PERIMETER OF A FIGURE\n";
cout<<"\n\t3. AREA OF A CLOSED FIGURE.\n";
cout<<"\n\t4. VOLUME OF A CLOSED BODY. \n";
cout<<"\n\t5. ** EXIT **.\n";
for(int ed=0;ed<160;ed++)
{
cout<<"=";
}
//jjjjjjjjjjjjjjjj
cout<<"\nENTER YOUR CHOICE = ";
cin>>ia;
for(int ef=0;ef<20000;ef++)
{
cout<<"@";
}
clrscr();
if(ia==1)
{
for(int eg=0;eg<80;eg++)
{
cout<<"+*";
}
cout<<"\n\nENTER THE 1st VALUE   = ";
cin>>ib;
cout<<"\nENTER THE 2nd VALUE   = ";
cin>>ic;
cout<<"\nENTER THE 3rd VALUE   = ";
cin>>id;
cout<<"\nENTER THE 4th VALUE   = ";
cin>>ie;
for(int eh=0;eh<160;eh++)
{
cout<<"*";
}
cout<<"WHAT WANT TO DO :: 1.sum, 2.sub, 3.mul, 4.div.";
cin>>ig;
ih=0;
if(ig==1)
{
ih=ib+ic+id+ie;
}
else if(ig==2)
{
ih=ib-ic-id-ie;
}
else if(ig==3)
{
ih=ib*ic*id*ie;
}
else if(ig==4)
{
ih=ib/ic;
}
else
{
continue;
}
for(int ei=0;ei<160;ei++)
{
cout<<"=";
}
cout<<"\n\t\t\tANSWER :: "<<ih<<"\n";
getch();
}
else if(ia==2)
{
float il,im,in,io,ip,iq;
for(int ek=0;ek<160;ek++)
{
cout<<"%>";
}
cout<<"\n\n\t1. PERIMETER OF SQUARE ";
cout<<"\n\n\t2. PERIMETER OF RECTANGLE  ";
cout<<"\n\n\t3. CIRCUMFERENCE OF CIRCLE  \n";
for(int ej=0;ej<160;ej++)
{
cout<<"+";
}
cout<<"\n\t\t\tENTER YOUR CHOICE :: ";
cin>>il;
clrscr();
for(int el=0;el<160;el++)
{
cout<<"\|";
}
cout<<"\n\n";in=0;
for(int em=0;em<160;em++)
{
cout<<"=";
}
if(il==1)
{
cout<<"\n\n\n\tENTER THE SIDE OF THE SQUARE = ";
cin>>im;
in=4*im;
}
else if(il==2)
{
cout<<"\n\n\n\tENTER THE LENGTH OF RECTANGLE = ";
cin>>io;
cout<<"\n\n\tENTER THE BREATH OF RECTANGLE = ";
cin>>ip;
in=(io+ip)*2;
}
else if(il==3)
{
cout<<"\n\n\n\tENTER THE RADIUS OF CIRCLE = ";
cin>>iq;
in=2*3.14*ip;
}
else
{
cout<<"\n\n\t\t\t%% WRONG CHOICE %%\n\n";
getch();
}
for(int en=0;en<160;en++)
{
cout<<"\|";
}
cout<<"\n\n\n\t\t\t\tANSWER :: "<<in<<"\n\n\n";
getch();
}
else if(ia==3)
{
for(int eo=0;eo<80;eo++)
{
cout<<"(*)";
}
float ir,is,it,iu,iv,iw,ix,iy,iz,ja,jb,jc,jd,je,jf,jh,ji;
cout<<"\n\n\n\t1. AREA OF A SQUARE";
cout<<"\n\t2. AREA OF A RECTANGLE";
cout<<"\n\t3. AREA OF PARALLELOGRAM";
cout<<"\n\t4. AREA OF TRAPEZIUM";
cout<<"\n\t5. AREA OF A CIRCLE";
cout<<"\n\t6. AREA OF A curved surface CONE";
cout<<"\n\t7. AREA OF A curved surface CYCLINDER";
cout<<"\n\t8. AREA OF A SURFACE OF SPHERE";
cout<<"\n\t9. AREA OF TRIANGLE\n";
for(int ep=0;ep<160;ep++)
{
cout<<"~";
}
cout<<"\n\t\tENTER YOUR CHOICE :: ";
cin>>ir;
clrscr();
for(int et=0;et<160;et++)
{
cout<<"$+";
}      cout<<"\n\n";   it=0;
for(int eu=0;eu<80;eu++)
{
cout<<"|:";
}
if(ir==1)
{
cout<<"\n\n\tENTER THE SIDE OF SQUARE = ";
cin>>is;
it=is*is;
}
else if(ir==2)
{
cout<<"\n\n\tENTER THE LENGTH OF A RECTANGLE = ";
cin>>iu;
cout<<"\n\n\tENTER THE BREATH OF A RECTANGLE = ";
cin>>iv;
it=iu*iv;
}
else if(ir==3)
{
cout<<"\n\n\tENTER THE BASE OF A PARALLELOGRAM = ";
cin>>iw;
cout<<"\n\n\tENTER THE PERPENDICULAR HEIGHT = ";
cin>>ix;
it=iw*ix;
}
else if(ir==4)
{
cout<<"\n\n\tENTER THE TRAPEZIUM PARALLEL SIDE = ";
cin>>iy;
cout<<"\n\n\tENTER THE HEIGHT OF TRAPEZIUM = ";
cin>>iz;
it=(iy+iy)*iz/2;
}
else if(ir==5)
{
cout<<"\n\n\tENTER THE RADIUS OF CIRCLE = ";
cin>>ja;
it=3.14*sqrt(ja);
}
else if(ir==6)
{
cout<<"\n\n\tENTER THE RADIUS OF CONE = ";
cin>>jb;
cout<<"\n\n\tENTER THE SLANT HEIGHT OF CONE = ";
cin>>jc;
it=3.14*jb*jc;
}
else if(ir==7)
{
cout<<"\n\n\tENTER THE RADIUS OF CYCLINDER = ";
cin>>jd;
cout<<"\n\n\tENTER THE HEIGHT OF CYCLINDER = ";
cin>>je;
it=2*3.14*jd*je;
}
else if(ir==8)
{
cout<<"\n\n\tENTER THE RADIUS OF SPHERE = ";
cin>>jf;
it=4*3.14*sqrt(jf);
}
else if(ir==9)
{
cout<<"\n\n\tENTER THE BASE OF TRIANGLE = ";
cin>>jh;
cout<<"\n\n\tENTER THE PERPENDICULAR HEIGHT = ";
cin>>ji;
it=jh*ji/2;
}
else
{
cout<<"\n\n\t\t..^^ WRONG CHOICE ^^..\n\n";
}
for(int em=0;em<160;em++)
{
cout<<"=";
}
cout<<"\n\n\t\t\tANSWER :: "<<it<<"\n\n\n";
}
else if(ia==4)
{
for(int en=0;en<80;en++)
{
cout<<"<\>";
} cout<<"\n\n";
for(int eo=0;eo<160;eo++)
{
cout<<".'";
}
cout<<"\n\n\t1. VOLUME OF A CUBOID";
cout<<"\n\n\t2. VOLUME OF A CYCLINDER";
cout<<"\n\n\t3. VOLUME OF A CONE";
cout<<"\n\n\t4. VOLUME OF A SPHERE";
cout<<"\n\n\t5. VOLUME OF A PYRAMIDE\n\n";
for(int ep=0;ep<160;ep++)
{
cout<<"[";
}
cout<<"\n\n\t\tENTER YOUR CHOICE :: ";
cin>>jk;
clrscr();
for(int eq=0;eq<160;eq++)
{
cout<<"#%";
}        cout<<"\n\n";  jo=0;
for(int er=0;er<80;er++)
{
cout<<">";
}
if(jk==1)
{
cout<<"\n\n\tENTER THE LENGTH OF CUBOID = ";
cin>>jl;
cout<<"\n\n\tENTER THE BREATH OF CUBOID = ";
cin>>jm;
cout<<"\n\n\tENTER THE HEIGHT OF CUBOID = ";
cin>>jn;
jo=jl*jm*jn;
}
else if(jk==2)
{
cout<<"\n\n\tENTER THE RADIUS OF CYCLINDER = ";
cin>>jp;
cout<<"\n\n\tENTER THE HEIGHT OF CYCLINDER = ";
cin>>jq;
jo=3.14*sqrt(jp)*jq;
}
else if(jk==3)
{
cout<<"\n\n\tENTER THE RADIUS OF CONE = ";
cin>>jr;
cout<<"\n\n\tENTER THE PERPENDICULAR HEIGHT = ";
cin>>js;
jo=3.14*sqrt(jr)*js;
}
else if(jk==4)
{
cout<<"\n\n\tENTER THE RADIUS OF SPHERE = ";
cin>>jt;
jo=4*3.14*(jt*jt*jt)/3;
}
else if(jk==5)
{
cout<<"\n\n\tENTER THE BASE OF PYRAMID = ";
cin>>js;
cout<<"\n\n\tENTER THE HEIGHT OF PYRAMID = ";
cin>>ju;
jo=js*ju/3;
}
else
{cout<<"\n\n\t\t\t@@ .. WRONG CHOICE .. @@\n\n";
}
for(int es=0;es<160;es++)
{
cout<<"*";
}
cout<<"\n\n\t\t\tANSWER :: "<<jo<<"\n\n";
}

else if(ia==5)
{
for(int xA=0;xA<160;xA++)
{
cout<<"#";
}
cout<<"\n\n    MADE BY  :-\n\t\t SUNNY.M.NABHARE\n\t\t VIJAY BIST\n\t\t VISHALI NAIR\n";
for(int xB=0;xB<160;xB++)
{
cout<<"#";
}
char zD;
cout<<"\n\n\t\tWANT TO EXIT FROM THIS WINDOW...(y/n) ?  ";
cin>>zD;
if(zD=='y'||zD=='Y')
{
exit(0);
}
}

}
else if (cc==3)
{ for(int xx=0;xx<160;xx++)
{
cout<<"#";
}
cout<<"\n\n    MADE BY  :-\n\t\t SUNNY.M.NABHARE\n\t\t VIJAY BIST\n\t\t VISHALI NAIR\n";
for(int xy=0;xy<160;xy++)
{
cout<<"#";
}
char zy;
cout<<"\n\n\t\tWANT TO EXIT FROM THIS WINDOW...(y/n) ?  ";
cin>>zy;
if(zy=='y'||zy=='Y')
{
exit(0);
}
}
else
{cout<<"\n\n\n\n\t\t\t\twrong choice";     getch();
}
cout<<"\n\t\t^^WANT TO GO MAIN MENU^^.....(y/n)? = ";
cin>>dd;
if(dd=='n'||dd=='N')
{
exit(0);
}
////////////////////////////// end of do- while.......
}while(dd=='y'||dd=='Y');
//end of main\\
return 0;
}