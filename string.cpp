#include"header.h"
STRING::STRING()
{
	s=nullptr;
	cout<<"\033[31mdefault constructor\033[0m"<<endl;
}

STRING::STRING(const char *p)
{
	s=new char[strlen(p)+1];
	strcpy(s,p);
	cout<<"\033[32mparameterised constructor\033[0m"<<endl;
}

STRING::STRING(const STRING &o)
{
	s=new char[strlen(o.s)+1];
	strcpy(s,o.s);
	cout<<"\033[31mcopy constructor\033[0m"<<endl;
}

STRING::~STRING()
{
	delete []s;
	cout<<"\033[32mdestructor\033[0m"<<endl;
}

STRING& STRING::operator=(const STRING &o)
{
	cout<<"\033[31m= operator overloaded\033[0m"<<endl;
	delete []s;
	s=new char[strlen(o.s) + 1];
	strcpy(s, o.s);
	return *this;
}

STRING STRING::operator+(const STRING &o)
{
	cout<<"\033[32m+ operator oerloaded\033[0m"<<endl;
	char *t=new char[strlen(s) + strlen(o.s) + 1];
	strcpy(t, s);
	strcat(t, o.s);
	STRING res(t);
	delete []t;
	return res;
}

istream &operator>>(istream &in, STRING &obj)
{
    ofstream fout("s1");
    char ch;
    int c=0;
    while(1)
    {
        ch=getchar();
        if(ch==10)
            break;

        fout<<ch;
        c++;
    }

    fout.close();
    ifstream fin("s1");
    delete []obj.s;
    obj.s=new char[c+1];
    char *temp=new char[c+1];
    int i=0;
    while(fin.get(ch))
    {
        temp[i++]=ch;
    }
    temp[i]='\0';
    strcpy(obj.s,temp);
    delete []temp;
    fin.close();
    return in;
}
ostream &operator<<(ostream &out, const STRING &obj)
{
	out<<obj.s;
	return out;
	
}
bool STRING::operator!=(const STRING &o)
{
	return strcmp(s,o.s)!=0;
}
bool STRING::operator==(const STRING &o)
{
	return strcmp(s,o.s)==0;
}
bool STRING::operator>(const STRING &o)
{
	return strcmp(s,o.s)>0;
}
bool STRING::operator<(const STRING &o)
{
	return strcmp(s,o.s)<0;
}
bool STRING::operator<=(const STRING &o)
{
	return strcmp(s,o.s)<=0;
}
bool STRING::operator>=(const STRING &o)
{
	return strcmp(s,o.s)>=0;
}

void my_strtoggle(STRING &o)
{
	int i;
	for(i=0;o.s[i];i++)
	{
		if(o.s[i] >= 'A' && o.s[i] <= 'Z')
			o.s[i]=o.s[i]+32;
		else if(o.s[i] >= 'a' && o.s[i] <= 'z')
			o.s[i]=o.s[i]-32;
	}
}

void my_strlwr(STRING &o)
{
	int i;
	for(i=0;o.s[i];i++)
		if(o.s[i] >= 'A' && o.s[i] <= 'Z')
			o.s[i]=o.s[i]+32;
}

void my_strupr(STRING &o)
{
	int i;
	for(i=0;o.s[i];i++)
		if(o.s[i] >= 'a' && o.s[i] <= 'z')
			o.s[i]=o.s[i] - 32;
}

int my_strlen(const STRING &o)
{
	int len;
	for(len=0;o.s[len];len++);
	return len-1;
}

const char *my_strchr(const STRING &o, char ch)
{
	int i;
	for(i=0;o.s[i];i++)
	{
		if(o.s[i] == ch)
			return &o.s[i];
	}
	return 0;
}

const char *my_strrchr(const STRING &o, char ch, size_t pos)
{
	size_t i;
	for(i=0;i<pos && o.s[i];i++)
	{
		if(o.s[i]==ch)
			return &o.s[i];
	}
	return 0;
}

const char *my_strstr(const STRING &o, const char *substr)
{
	if(!*substr)
		return o.s;
	int i,j=0;
	for(i=0;o.s[i];i++)
	{
		while(substr[j] != '\0' && o.s[i+j] != '\0' && o.s[i+j] == substr[j])
			j++;
		if(substr[j] == '\0')
			return &o.s[i];
	}
	return 0;
}

const char *my_strcpy(STRING &o, const char *src)
{
	delete[]o.s;
	int len=0,i;
	while(src[len] != '\0')
		len++;
	o.s=new char[len+1];
	for(i=0;i<=len;i++)
		o.s[i]=src[i];
	return o.s;
}

const char *my_strncpy(STRING &o, const char *src, size_t pos)
{
	char *temp=new char[pos+1];
	size_t i=0;
	while(i<pos && src[i] != '\0')
	{
		temp[i]=src[i];
		i++;
	}
	temp[i]='\0';
	delete[]o.s;
	o.s=temp;
	return o.s;
}
const char *my_strcat(STRING &o, const char *s1)
{
	int len1=0,len2=0,i;
	while(o.s[len1] != '\0')
		len1++;
	while(s1[len2] != '\0')
		len2++;

	char *temp=new char[len1+len2+1];
	for(i=0;i<len1;i++)
		temp[i]=o.s[i];
	for(i=0;i<len2;i++)
		temp[len1+i]=s1[i];
	temp[len1+len2]='\0';

	delete[]o.s;
	o.s=temp;
	return o.s;
}

const char *my_strncat(STRING &o, const char *s1, size_t pos)
{
	int len1=0,len2=0,i;
	while(o.s[len1] != '\0')
		len1++;
	while(s1[len2] != '\0')
		len2++;

	if(pos>(size_t)len2)
		pos=len2;

	char *temp=new char[len1+pos+1];
	for(i=0;i<len1;i++)
		temp[i]=o.s[i];
	for(i=0;i<(int)pos;i++)
		temp[len1+i]=s1[i];
	temp[len1+pos]='\0';

	delete[]o.s;
	o.s=temp;
	return o.s;
}

int my_strcmp(const STRING &s1, const STRING &s2)
{
	int i=0;
	while(s1.s[i] != '\0' && s2.s[i] != '\0')
	{
		if(s1.s[i] != s2.s[i])
			return s1.s[i]-s2.s[i];
		i++;
	}
	return s1.s[i]-s2.s[i];
}

int my_strncmp(const STRING &s1, const STRING &s2, size_t pos)
{
	size_t i=0;
	while(i<pos && s1.s[i] != '\0' && s2.s[i] != '\0')
	{
		if(s1.s[i] != s2.s[i])
			return s1.s[i]-s2.s[i];
		i++;
	}
	if(i==pos)
		return 0;
	return s1.s[i] - s2.s[i];
}

void my_strrev(STRING &o)
{
	int len=0,i;
	char temp;
	while(o.s[len] != '\0')
		len++;
	for(i=0;i<len/2;i++)
	{
		temp=o.s[i];
		o.s[i]=o.s[len-i-1];
		o.s[len-i-1] = temp;
	}
}

