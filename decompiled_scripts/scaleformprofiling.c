void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_2();
	}
	uLocal_18 = unk_0x67D02A194A2FC2BD("scaleform_profiling");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_18))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_18, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 0, 0);
		func_1(uLocal_18);
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0)
{
	if (Global_19465 == 0)
	{
		if (((((((CONTROLS::IS_CONTROL_PRESSED(2, 189) || CONTROLS::IS_CONTROL_PRESSED(2, 190)) || CONTROLS::IS_CONTROL_PRESSED(2, 188)) || CONTROLS::IS_CONTROL_PRESSED(2, 187)) || CONTROLS::IS_CONTROL_PRESSED(2, 205)) || CONTROLS::IS_CONTROL_PRESSED(2, 206)) || CONTROLS::IS_CONTROL_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_PRESSED(2, 202))
		{
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	else if (SYSTEM::TIMERA() > 50)
	{
		Global_19465 = 0;
	}
	if (Global_19465 == 0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 189))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(10);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 190))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(11);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 205))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 206))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(6);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 188))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(8);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 187))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(9);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(16);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		if (CONTROLS::IS_CONTROL_PRESSED(2, 202))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_INPUT_EVENT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(17);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_2()
{
	func_3(0);
	GAMEPLAY::SET_GAME_PAUSED(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_18);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_5())
	{
		Global_19486.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_7()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_8()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

