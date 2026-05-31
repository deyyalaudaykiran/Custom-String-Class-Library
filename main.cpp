#include"header.h"
int main()
{
STRING s1;
/*cin>>s1;
cout <<s1 << endl;*/


STRING s2("hello");
STRING s3(s2);

cout<<"Enter a string-1:"<<endl;
cin>>s1;

cout<<"s1:"<<s1<<endl;
cout<<"s2:"<<s2<<endl;
cout<<"s3:"<<s3<<endl;

STRING s4=s1+s2;//s4=s1.operator+(s2);
cout<<"concatenated string is:"<<s4<<endl;

if(s1==s2)
{
cout<<"\033[32m== opeartor overloaded\033[0m"<<endl;
cout<<"strings "<<s1<<" and "<<s2<<" are equal"<<endl;
}
else if(s1!=s2)
{
cout<<"\033[32m!= operator overloaded\033[0m"<<endl;
cout<<"strings "<<s1<<" and "<<s2<<" are not equal"<<endl;
}

if(s1<s2)
{
cout<<"\033[32m< operator overloaded\033[0m"<<endl;
cout<<"string "<<s1<<" is less than "<<s2<<endl;
}
else if(s1 > s2)
{
cout<<"\033[32m> operator overloaded\033[0m"<<endl;
cout<<"string "<<s1<<" is greater than "<<s2<<endl;
}

if(s1 <= s2)
{
cout<<"\033[32m<= operator overloaded\033[0m"<<endl;
cout<<"string "<<s1<<" is less than or equals to "<<s2<<endl;
}
else if(s1 >= s2)
{
cout<<"\033[32m>= operator overloaded\033[0m"<<endl;
cout<<"string "<<s1<<" is greater than or equals to "<<s2<<endl;
}

int c=my_strcmp(s1,s2);
if(c==0)
cout<<"string "<<s1<<" and "<<s2<<" are equal"<<endl;
else if(c<0)
cout<<"string "<<s1<<" is  lessthan "<<s2<<endl;
else
cout<<"string "<<s1<<" is greater than "<<s2<<endl;

int nc=my_strncmp(s1,s2,4);
if(c==0)
cout<<"first 4 characters of "<<s1<<" and "<<s2<<" are equal"<<endl;
else if(c<0)
cout<<"first 4 characters of "<<s1<<" are less than "<<s2<<endl;
else 
cout<<" first 4 characters of "<<s1<<" are greater than "<<s2<<endl;

const char *ch=my_strchr(s2,'e');
if(ch)
cout<<"character 'e' found in "<<s2<<endl;
else
cout<<"chaacter 'e' is not found in "<<s2<<endl;

const char *rch=my_strrchr(s2,'e','4');
if(rch)
cout<<"character 'e' found in first 4 letter of "<<s2<<endl;
else
cout<<"character 'e' is not found in first 4 letters of "<<s2<<endl;

const char *str=my_strstr(s2,"esa");
if(str)
cout<<"substring 'esa' found in "<<s2<<endl;
else
cout<<"substring 'esa' is not found in "<<s2<<endl;

my_strcat(s1,"GOOD MORNING");
cout<<"After concatenation s1 is :";
cout<<s1<<endl;

my_strncat(s1,"GOOD MORNING",5);
cout<<"After nconcatenation s1 is :";
cout<<s1<<endl;

my_strcpy(s1,"GOOD NIGHT");
cout<<"After copying s1 is :";
cout<<s1<<endl;

my_strncpy(s1,"GOOD NIGHT",5);
cout<<"After copying s1 is :";
cout<<s1<<endl;

my_strupr(s1);
cout<<"Uppercase s1 :";
cout<<s1<<endl;

my_strlwr(s1);
cout<<"Lowercase s1 :";
cout<<s1<<endl;

my_strtoggle(s1);
cout<<"Toggle of s1 :";
cout<<s1<<endl;

cout<<"After reversing s1 :";
my_strrev(s1);
cout<<s1<<endl;

}

