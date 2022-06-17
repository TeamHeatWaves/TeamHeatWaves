//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("RegisterStudent.cpp", RegisterStudentForm);
USEFORM("Registration.cpp", RegistrationForm);
USEFORM("StudentForm.cpp", myStudentForm);
USEFORM("Login.cpp", LoginForm);
USEFORM("MainForm.cpp", Form1);
USEFORM("MenuForm.cpp", myMenuForm);
USEFORM("LecturerForm.cpp", myLecturerForm);
USEFORM("RegisterLecturer.cpp", RegisterLecForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TRegistrationForm), &RegistrationForm);
		Application->CreateForm(__classid(TLoginForm), &LoginForm);
		Application->CreateForm(__classid(TmyMenuForm), &myMenuForm);
		Application->CreateForm(__classid(TmyStudentForm), &myStudentForm);
		Application->CreateForm(__classid(TRegisterStudentForm), &RegisterStudentForm);
		Application->CreateForm(__classid(TmyLecturerForm), &myLecturerForm);
		Application->CreateForm(__classid(TRegisterLecForm), &RegisterLecForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
