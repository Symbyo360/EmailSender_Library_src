


#ifndef StringUtility_H
#define StringUtility_H



#include <string>





class StringUtility
{
public:
	
	
	

	
	static std::string encodeToBase64String(unsigned char const* , unsigned int len);
	static std::string decodeFromBase64String(std::string const& s);

	private:
		static inline bool is_base64(unsigned char c) ;
		static const std::string base64_chars;
};

#endif // StringUtility_H
