#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class STRING
{
  char *s;
   public:
  	STRING();
  	STRING(const char *);
 	STRING(const STRING &);
 	~STRING();

 	STRING &operator=(const STRING &);
	STRING operator+(const STRING &);

	bool operator!=(const STRING &);
	bool operator==(const STRING &);
	bool operator<(const STRING &);
	bool operator<=(const STRING &);	
	bool operator>(const STRING &);
	bool operator>=(const STRING &);

	friend istream &operator>>(istream &, STRING &);
    	friend ostream &operator<<(ostream &, const STRING &);
	
	friend int my_strcmp(const STRING &,const STRING &);
	friend int my_strncmp(const STRING &,const STRING &,size_t);
	friend int my_strlen(const STRING &);
	friend void my_strrev(STRING &);
	friend const char *my_strstr(const STRING &,const char *);
	friend const char *my_strchr(const STRING &,char);
	friend const char *my_strrchr(const STRING &,char,size_t);
	friend const char *my_strcpy(STRING &,const char *);
 	friend const char *my_strncpy(STRING &,const char *,size_t);
 	friend const char *my_strcat(STRING &,const char *);
 	friend const char *my_strncat(STRING &,const char *,size_t);
	friend void my_strtoggle(STRING &);
 	friend void my_strupr(STRING &);
 	friend void my_strlwr(STRING &);


};


