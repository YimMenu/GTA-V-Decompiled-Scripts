void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_10();
	}
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
	GAMEPLAY::CLEAR_BIT(&(Global_111638.f_10011.f_25), 1);
	func_7();
	SCRIPT::SET_NO_LOADING_SCREEN(1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iLocal_0 = unk_0x67D02A194A2FC2BD("OPENING_CREDITS");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_0))
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		func_7();
		SYSTEM::WAIT(0);
	}
	func_6("TITLE", 0f, 1f, 1.5f, 1f, 0f, 1.5f, 15f);
	iLocal_1 = (GAMEPLAY::GET_GAME_TIMER() + 8000 + SYSTEM::ROUND((2f * 1000f)));
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		func_7();
		if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10011.f_25, 1))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_0, 255, 255, 255, 255, 0);
			if (!iLocal_2)
			{
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_1)
				{
					func_5("TITLE");
					iLocal_2 = 1;
					iLocal_1 = (GAMEPLAY::GET_GAME_TIMER() + SYSTEM::ROUND((2f * 1000f)));
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_1)
			{
				GAMEPLAY::SET_BIT(&(Global_111638.f_10011.f_25), 1);
				if (GAMEPLAY::_0x6FDDF453C0C756EC() || GAMEPLAY::IS_PC_VERSION())
				{
					func_4(1, 1);
					func_2();
				}
				else
				{
					func_1();
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	func_10();
}

void func_1()
{
	Global_98783 = 1;
}

int func_2()
{
	if (func_3(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_3(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_4(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_5(char* sParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_0, "HIDE_LOGO");
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_6(char* sParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_0, "SHOW_LOGO");
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam5);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam6);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam7);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_7()
{
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::_SET_2D_LAYER(7);
	func_8();
}

void func_8()
{
	UNK1::_0xEB2D525B57F42B40();
	func_9();
}

void func_9()
{
	Global_22211.f_134 = 1;
}

void func_10()
{
	GAMEPLAY::SET_BIT(&(Global_111638.f_10011.f_25), 1);
	if (iLocal_0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_0);
	}
	GRAPHICS::_SET_2D_LAYER(4);
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

