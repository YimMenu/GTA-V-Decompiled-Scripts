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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_19();
	}
	while (true)
	{
		switch (iLocal_45)
		{
			case 0:
				uLocal_46 = unk_0x67D02A194A2FC2BD("mission_complete");
				iLocal_45 = 1;
				break;
			
			case 1:
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_46))
				{
					iLocal_45 = 2;
				}
				break;
			
			case 2:
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(uLocal_46, "SET_MISSION_TITLE", ScriptParam_0, ScriptParam_0.f_1, 0, 0, 0);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_46, "SET_MISSION_TITLE_COLOUR", ScriptParam_0.f_2, ScriptParam_0.f_2, ScriptParam_0.f_2, -1082130432, -1082130432);
				if (ScriptParam_0.f_5.f_1 != -1f && !GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_46, "SET_TOTAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), ScriptParam_0.f_5.f_1, -1f, -1f, -1f, ScriptParam_0.f_5.f_2, 0, 0, 0, 0);
				}
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_46, "SET_MEDAL", SYSTEM::TO_FLOAT(ScriptParam_0.f_5), -1082130432, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_46, "SET_SOCIAL_CLUB_INFO", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				iVar0 = 0;
				while (iVar0 < ScriptParam_0.f_66 + 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_46, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0]);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0].f_1);
					if (ScriptParam_0.f_9[iVar0].f_2 == 4)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(SYSTEM::FLOOR((ScriptParam_0.f_9[iVar0].f_3 * 1000f)), 6);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						if (!GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_9[iVar0].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0].f_5);
						}
					}
					else if (ScriptParam_0.f_9[iVar0].f_2 == 8)
					{
						if (!GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_9[iVar0].f_5) && !GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_9[iVar0].f_6))
						{
							GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(ScriptParam_0.f_9[iVar0].f_6);
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(ScriptParam_0.f_9[iVar0].f_5);
							GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						}
					}
					else
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_9[iVar0].f_2);
						if ((ScriptParam_0.f_9[iVar0].f_3 % 1f) == 0f)
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_9[iVar0].f_3);
						}
						else
						{
							GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
							UI::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0].f_3, 2);
							GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						}
						if ((ScriptParam_0.f_9[iVar0].f_4 % 1f) == 0f)
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_9[iVar0].f_4);
						}
						else
						{
							GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
							UI::ADD_TEXT_COMPONENT_FLOAT(ScriptParam_0.f_9[iVar0].f_4, 2);
							GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
						}
						if (!GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_9[iVar0].f_5))
						{
							func_18(ScriptParam_0.f_9[iVar0].f_5);
						}
						if (!GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_9[iVar0].f_6))
						{
							func_18(ScriptParam_0.f_9[iVar0].f_6);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					iVar0++;
				}
				if (ScriptParam_0.f_5 != 0 && !GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_5.f_2))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_46, "SET_TOTAL");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(ScriptParam_0.f_5);
					if (!GAMEPLAY::IS_STRING_NULL(ScriptParam_0.f_5.f_3))
					{
						func_18(ScriptParam_0.f_5.f_3);
					}
					else
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(ScriptParam_0.f_5.f_1);
					}
					func_18(ScriptParam_0.f_5.f_2);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_46, "DRAW_MENU_LIST");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_12(1);
				func_9(&uLocal_47);
				if (!func_8(Global_111638.f_19092, 4096))
				{
					func_6(&(Global_111638.f_19092), 4096);
				}
				iLocal_45 = 3;
				break;
			
			case 3:
				if (((func_2(&uLocal_47) > ScriptParam_0.f_67 && ScriptParam_0.f_67 != -1f) || CAM::IS_SCREEN_FADED_OUT()) || Global_30912)
				{
					func_19();
				}
				else
				{
					func_1(1);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_46, 0.1495f, 0.3159f, 0.2021f, 0.5111f, 255, 255, 255, 0, 0);
					if (UI::IS_HUD_COMPONENT_ACTIVE(10))
					{
						UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
					}
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	func_19();
}

void func_1(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

float func_2(var uParam0)
{
	if (func_5(uParam0))
	{
		if (func_4(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_3(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_3(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_4(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_5(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_6(var uParam0, int iParam1)
{
	func_7(uParam0, iParam1);
}

void func_7(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_9(var uParam0)
{
	if (!func_5(uParam0))
	{
		func_10(uParam0);
	}
}

void func_10(var uParam0)
{
	func_11(uParam0, 0f);
}

void func_11(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_3(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_12(int iParam0)
{
	if (func_17())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_16())
		{
			func_14(1, 1);
		}
		else
		{
			func_14(0, 0);
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
	if (!func_13())
	{
		Global_19486.f_1 = 3;
	}
}

int func_13()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_14(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_15(0))
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

int func_15(int iParam0)
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

bool func_16()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_17()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_18(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_19()
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_46);
	Global_30912 = 0;
	func_1(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

