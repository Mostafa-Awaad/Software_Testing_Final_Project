#include "Tests.h"

/* Test Code to test the Sign Up */
static struct User_Input_Type Test1_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ahmed",
	26,
	23,
	10,
	1998,
	Male,
	Masters_Student,
	},
	{
		{
			"EdgesAcademy",
			"Edges123"
		},
	"Edges123"
	}
};

/* Test Code to test the Sign Up */
static struct User_Input_Type Test2_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Rania",
	54,
	31,
	12,
	1970,
	Female,
	PHD_Holder,
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_$$"
		},
	"Edges_123_"
	}
};
/********************************************************************************************************************/

/* Test Code to test the Sign Up 3 characters name length*/
static struct User_Input_Type Test3_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	54,
	31,
	12,
	1970,
	Male,
	PHD_Holder,
	},
	{
		{
			"EdgesAcademy2024",
			"Edges_123_@"
		},
	"Edges_123_@"
	}
};

/* Test Code to test the Sign Up 31 characters name length */
static struct User_Input_Type Test4_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"XyloZentaCraftMorphoStormBlaze",
	24,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 0 age  */
static struct User_Input_Type Test5_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	0,
	14,
	12,
	2024,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up with 100 age */
static struct User_Input_Type Test6_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	100,
	2,
	8,
	1924,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up with 101 age */
static struct User_Input_Type Test7_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	101,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 31 day DOB */
static struct User_Input_Type Test8_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	24,
	31,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 1 day DOB */
static struct User_Input_Type Test9_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Ali",
	24,
	1,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 1 month DOB */
static struct User_Input_Type Test10_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"XyloZentaCraftMorphoStor",
	24,
	2,
	1,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 12 month DOB */
static struct User_Input_Type Test11_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"XyloZentaCraftMorphoSto",
	24,
	2,
	12,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 8 characters User name length */
static struct User_Input_Type Test12_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"Mostafa",
	24,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"moustafa",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 31 characters User name length */
static struct User_Input_Type Test13_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"mostafakamal",
	24,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"XyloZentaCraftMorphoStormBlazeT",
			"mostafakamal123"
		},
	"mostafakamal123"
	}
};

/* Test Code to test the Sign Up 8 password length */
static struct User_Input_Type Test14_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"XyloZentaCraftMorphoStoa",
	24,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"mostafaa"
		},
	"mostafaa"
	}
};

/* Test Code to test the Sign Up 31 password length */ /*When entering 32 program crahses due to null operator*/
static struct User_Input_Type Test15_User =
{
	{
	-1, // this is to indecate user hasn't assigned ID 
	"XyloZentaCraftMorphoStorm",
	24,
	2,
	8,
	2000,
	Male,
	Masters_Student,
	},
	{
		{
			"mostafakamal",
			"XyloZentaCraftMorphoStormBlazeT"
		},
	"XyloZentaCraftMorphoStormBlazeT"
	}
};


/* init function for Test Suite 1*/
static unsigned char test1_start(void)
{
	unsigned char RET = Add_Account(&Test1_User);
	Test1_User.PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* Closure Function For Test Suite 1*/
static unsigned char test1_end(void)
{
	unsigned char RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* init function for Test Suite 2*/
static unsigned char test2_start(void)
{
	unsigned char RET = Add_Account(&Test2_User);
	Test2_User.PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* Closure Function For Test Suite 1*/
static unsigned char test2_end(void)
{
	unsigned char RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/* Test Suite Initialization Function for Test3 */
static unsigned char test3_start(void) {
	unsigned char RET = Add_Account(&Test3_User);
	Test3_User.PersonalInfo_Form.id = current_user_test - 1;
	DBM_PrintUsers();
	return !RET;
}

/* Test Suite Cleanup Function for Test3 */
static unsigned char test3_end(void) {
	unsigned char RET = Delete_Account(current_user_test - 1);
	DBM_PrintUsers();
	return !RET;
}

/************************************************************************************
* Test ID                : TestCase 1
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ahmed
*                          Age                          -> 26
*                          DOB_day                      -> 01
*                          DOB_Month                    -> 02
*                          DOB_Year                     -> 1999
*                          Educational_Status           -> Masters_Student
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy
*                          Password                     -> Edges123
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase1(void)
{
	unsigned int Test_id = Test1_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test1_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test1_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test1_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test1_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test1_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test1_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test1_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test1_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test1_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test1_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 2
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Rania
*                          Age                          -> 54
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1970
*                          Educational_Status           -> PHD_Holder
*                          Gender                       -> Female
*                          UserName                     -> EdgesAcademy2024
*                          Password                     -> Edges_123_$$
*                          Password Recheck             -> Edges123
* Test Expected output   : The DB shouldn't be updated with the previous inputs
* Reason                 : Password inputs mismatch so the suite willn't initiallize 
*************************************************************************************/
static void TestCase2(void)
{
	unsigned int Test_id = Test2_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test2_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test2_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test2_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test2_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test2_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test2_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test2_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test2_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test2_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test2_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 3
* Description            : Testing the Add Account Functionality with 3 characters name length
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 54
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 1970
*                          Educational_Status           -> PHD_Holder
*                          Gender                       -> Male
*                          UserName                     -> EdgesAcademy2024
*                          Password                     -> Edges_123_@
*                          Password Recheck             -> Edges_123_@
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase3(void)
{
	unsigned int Test_id = Test3_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test3_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test3_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test3_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test3_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test3_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test3_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test3_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test3_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test3_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test3_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 4
* Description            : Testing the Add Account Functionality
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> XyloZentaCraftMorphoStormBlazeTi
*                          Age                          -> 24
*                          DOB_day                      -> 2
*                          DOB_Month                    -> 8
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase4(void)
{
	unsigned int Test_id = Test4_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test4_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test4_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test4_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test4_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test4_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test4_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test4_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test4_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test4_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test4_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 5
* Description            : Testing the Add Account Functionality with zero age value
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 0
*                          DOB_day                      -> 2
*                          DOB_Month                    -> 8
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase5(void)
{
	unsigned int Test_id = Test5_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test5_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test5_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test5_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test5_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test5_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test5_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test5_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test5_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test5_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test5_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 6
* Description            : Testing the Add Account Functionality with 100 age value
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 100
*                          DOB_day                      -> 2
*                          DOB_Month                    -> 8
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase6(void)
{
	unsigned int Test_id = Test6_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test6_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test6_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test6_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test6_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test6_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test6_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test6_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test6_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test6_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test6_User.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TestCase 8
* Description            : Testing the Add Account Functionality with 31 day DOB
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 31
*                          DOB_Month                    -> 8
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase8(void)
{
	unsigned int Test_id = Test8_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test8_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test8_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test8_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test8_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test8_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test8_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test8_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test8_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test8_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test8_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 9
* Description            : Testing the Add Account Functionality with 1 day DOB
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 8
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase9(void)
{
	unsigned int Test_id = Test9_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test9_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test9_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test9_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test9_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test9_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test9_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test9_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test9_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test9_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test9_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 10
* Description            : Testing the Add Account Functionality with 1 month DOB
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 1
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase10(void)
{
	unsigned int Test_id = Test10_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test10_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test10_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test10_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test10_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test10_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test10_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test10_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test10_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test10_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test10_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 11
* Description            : Testing the Add Account Functionality with 12 month DOB
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> mostafakamal
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase11(void)
{
	unsigned int Test_id = Test11_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test11_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test11_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test11_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test11_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test11_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test11_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test11_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test11_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test11_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test11_User.PersonalInfo_Form.id);
}


/************************************************************************************
* Test ID                : TestCase 12
* Description            : Testing the Add Account Functionality with 8 chars username
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> moustafa
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase12(void)
{
	unsigned int Test_id = Test12_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test12_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test12_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test12_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test12_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test12_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test12_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test12_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test12_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test12_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test12_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 13
* Description            : Testing the Add Account Functionality with 32 chars username
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> XyloZentaCraftMorphoStormBlazeTi
*                          Password                     -> mostafakamal123
*                          Password Recheck             -> mostafakamal123
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase13(void)
{
	unsigned int Test_id = Test13_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test13_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test13_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test13_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test13_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test13_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test13_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test13_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test13_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test13_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test13_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 14
* Description            : Testing the Add Account Functionality with 8 chars password
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> XyloZentaCraftMorphoStormBlazeTi
*                          Password                     -> moustafa
*                          Password Recheck             -> moustafa
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase14(void)
{
	unsigned int Test_id = Test14_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test14_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test14_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test14_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test14_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test14_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test14_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test14_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test14_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test14_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test14_User.PersonalInfo_Form.id);
}

/************************************************************************************
* Test ID                : TestCase 15
* Description            : Testing the Add Account Functionality with 32 chars password
* Pre-requisits          : There is a User Assigned to DB
* Test inputs            :
*                          Name                         -> Ali
*                          Age                          -> 24
*                          DOB_day                      -> 1
*                          DOB_Month                    -> 12
*                          DOB_Year                     -> 2000
*                          Educational_Status           -> Graduate
*                          Gender                       -> Male
*                          UserName                     -> moustafaa
*                          Password                     -> XyloZentaCraftMorphoStormBlazeTi
*                          Password Recheck             -> XyloZentaCraftMorphoStormBlazeTi
* Test Expected output   : The DB should be updated with the previous inputs correctly
* Reason                 : All inputs are in correct format
*************************************************************************************/
static void TestCase15(void)
{
	unsigned int Test_id = Test15_User.PersonalInfo_Form.id;
	CU_ASSERT_EQUAL(DB_info[Test_id].Age, Test15_User.PersonalInfo_Form.Age);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_day, Test15_User.PersonalInfo_Form.DOB_day);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_month, Test15_User.PersonalInfo_Form.DOB_month);
	CU_ASSERT_EQUAL(DB_info[Test_id].DOB_year, Test15_User.PersonalInfo_Form.DOB_year);
	CU_ASSERT_EQUAL(DB_info[Test_id].educational_status, Test15_User.PersonalInfo_Form.educational_status);
	CU_ASSERT_EQUAL(DB_info[Test_id].gender, Test15_User.PersonalInfo_Form.gender);
	CU_ASSERT_STRING_EQUAL(DB_info[Test_id].name, Test15_User.PersonalInfo_Form.name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].User_Name, Test15_User.LoginCredentials_Form.LoginCredentials.User_Name);
	CU_ASSERT_STRING_EQUAL(DB_LoginCredentials[Test_id].Password, Test15_User.LoginCredentials_Form.LoginCredentials.Password);
	CU_ASSERT_EQUAL(DB_info[Test_id].id, Test15_User.PersonalInfo_Form.id);
}

void Main_Test_Runner(void)
{
	/* initialize the Registry */
	CU_initialize_registry();

	/* Adding Test Suite to the Registry */
	CU_pSuite suite_positive = CU_add_suite("Creaet Valid Account", test1_start, test1_end);
	// this suite is expected to fail and not to run due to to the invalid creation of the account 
	CU_pSuite suite_negative = CU_add_suite("Creaet InValid Account", test2_start, test2_end);

	CU_pSuite suite_positive2 = CU_add_suite("Create Valid Account (Positive Test 3)", test3_start, test3_end);

	
	CU_add_test(suite_positive, "Creaet Valid Account", TestCase1);
	CU_add_test(suite_negative, "Creaet InValid Account", TestCase2);

	// Adding test cases from TestCase3 to TestCase15
	CU_add_test(suite_positive2, "Valid Account Creation (Test 3)", TestCase3);

	/*CU_add_test(Add_account_suite_valid, "Create valid account - TestCase4", TestCase4);
	Test4_User.PersonalInfo_Form.id = current_user_test - 1;
	Add_Account(&TestCase4);
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase5", TestCase5);
	Test5_User.PersonalInfo_Form.id = current_user_test - 1;
	Add_Account(&TestCase5);
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase6", TestCase6);
	Test6_User.PersonalInfo_Form.id = current_user_test - 1;
	Add_Account(&TestCase6);
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase8", TestCase8);
	Add_Account(&TestCase8);
	Test8_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(Test6_User.PersonalInfo_Form.id);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase9", TestCase9);
	Add_Account(&TestCase9);
	Test9_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase10", TestCase10);
	Add_Account(&TestCase10);
	Test10_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase11", TestCase11);
	Test11_User.PersonalInfo_Form.id = current_user_test - 1;
	Add_Account(&TestCase11);
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase12", TestCase12);
	Add_Account(&TestCase12);
	Test12_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase13", TestCase13);
	Add_Account(&TestCase13);
	Test13_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase14", TestCase14);
	Add_Account(&TestCase14);
	Test14_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;

	CU_add_test(Add_account_suite_valid, "Create valid account - TestCase15", TestCase15);
	Add_Account(&TestCase15);
	Test15_User.PersonalInfo_Form.id = current_user_test - 1;
	Delete_Account(current_user_test - 1);
	current_user_test++;*/


	/* Running the Test Suite through Basic Console */
	CU_basic_set_mode(CU_BRM_VERBOSE);
	CU_basic_run_tests();

	/* Running the Test Suite through Console interactive */
	//CU_console_run_tests();

	/* Clear the registry after test finished */
	CU_cleanup_registry();
}
