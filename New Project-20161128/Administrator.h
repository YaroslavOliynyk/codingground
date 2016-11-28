/***********************************************************************
 * Module:  Administrator.h
 * Author:  is5320
 * Modified: Wednesday, November 23, 2016 11:15:50 AM
 * Purpose: Declaration of the class Administrator
 ***********************************************************************/
/***********************************************************************
 * Module:  Administrator.java
 * Author:  yarik
 * Purpose: Defines the Class Administrator
 ***********************************************************************/

#if !defined(__CoursesOliynyk_UML_Administrator_h)
#define __CoursesOliynyk_UML_Administrator_h
#include<string>

class Administrator
{
public:
	Administrator();
   void viewAllUsers(void);
   void viewAllCourses(void);
   std::string getReview(std::string review);
   void setCompanyDescription(std::string desc);

protected:
private:
	
   std::string name;
   std::string surname;


};

#endif