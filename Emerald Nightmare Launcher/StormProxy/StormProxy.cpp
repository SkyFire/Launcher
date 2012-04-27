#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <tchar.h>
#include <fstream>
#include <direct.h>
#include <stdlib.h>
#include <stdio.h>
#pragma comment (lib, "Ws2_32.lib" )
#pragma comment (lib, "Kernel32.lib" )
#pragma comment (lib, "Version.lib" )
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Shell32.lib")


using namespace std;
#pragma once
using namespace System;

void UnpackAndRepack()
	{
	exit(0);
	}

int main(int argc, char *argv[])
	{
	int i;

	if (argc == 1)
		return 0;
	else
		for (i = 1; i < argc; i++)
			if (strcmp (argv[i], "-RePackOperation") == 0)
			 UnpackAndRepack();
	}