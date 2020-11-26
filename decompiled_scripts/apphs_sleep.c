#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
#endregion

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
	fLocal_25 = 0.82f;
	fLocal_26 = 0.42f;
	fLocal_27 = 0f;
	fLocal_28 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_28();
	iLocal_24 = 1;
	func_27();
	func_26();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_19486.f_1 != 9)
		{
			switch (Global_19486.f_1)
			{
				case 7:
					func_21();
					if (iLocal_24)
					{
						func_18();
					}
					else
					{
						func_12();
					}
					break;
				
				case 8:
					func_21();
					func_12();
					if (func_11(2, Global_19454, 0))
					{
						func_10();
						Global_19464 = 1;
						func_9(Global_19467, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_26();
						if (Global_19486.f_1 > 3)
						{
							Global_19486.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_8())
			{
				func_2();
			}
		}
		else
		{
			Global_19488 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_19486.f_1 == 1 || Global_19486.f_1 == 3) || Global_19486.f_1 == 0) || Global_19430 == 1)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	func_7();
	if (func_4(0))
	{
		func_3();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

int func_4(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_5(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0, Global_41431);
}

int func_6(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_7()
{
	func_28();
	Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 1;
}

int func_8()
{
	if (Global_7962 == 1 || Global_19486.f_1 < 7)
	{
		Global_19473 = 1;
		return 1;
	}
	return 0;
}

void func_9(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_10()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, true);
	}
}

int func_11(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_12()
{
	if (Global_19464 == 0)
	{
		if (func_11(2, Global_19455, 0))
		{
			func_15();
			Global_19464 = 1;
			func_28();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19467, "GET_CURRENT_SELECTION");
			iLocal_21 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_21))
			{
				SYSTEM::WAIT(0);
			}
			Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_259 = iLocal_18[GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_21)];
			func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
			if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
			{
				func_9(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else
			{
				func_9(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			if (func_4(0))
			{
				func_3();
			}
		}
	}
}

void func_13(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	func_14(sParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_14(sParam3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_14(sParam4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_14(sParam5);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_14(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_14(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_15()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, true);
		func_16();
	}
}

void func_16()
{
	if (func_17())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_18()
{
	Global_19464 = 1;
	iLocal_23 = 0;
	iLocal_24 = 0;
	func_19();
}

void func_19()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_9(Global_19467, "DISPLAY_VIEW", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_28();
	iLocal_19 = 0;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_84[iVar3] = 5000;
		while (iVar2 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_124[iVar2] == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_84[iVar2] < Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_84[iVar3])
					{
						iVar3 = iVar2;
						func_20(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(13), SYSTEM::TO_FLOAT(iVar1), SYSTEM::TO_FLOAT(Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_104[iVar3]), -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_7[iVar3 /*4*/]), 0, 0, 0, 0);
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_124[iVar1] == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_19467, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", &(Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_7[Global_8161[Global_19486 /*2811*/][iLocal_23 /*281*/].f_259 /*4*/]), 0, 0, 0, 0);
	if (Global_19474)
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_7356, 17);
}

void func_20(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_14(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_14(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_14(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_14(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_14(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_21()
{
	if (iLocal_29)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_29 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (func_11(2, 181, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
		}
		if (func_11(2, 180, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
		}
	}
	if (iLocal_29 == 0)
	{
		if (func_11(2, Global_19462, 0))
		{
			if (iLocal_20 > 0)
			{
				iLocal_20 = (iLocal_20 - 1);
			}
			func_24();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_11(2, Global_19463, 0))
		{
			iLocal_20++;
			if (iLocal_20 == iLocal_19)
			{
				iLocal_20 = 0;
			}
			func_22();
			iLocal_29 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_22()
{
	func_9(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_23();
}

void func_23()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_24()
{
	func_9(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, true);
	func_25();
}

void func_25()
{
	if (func_17())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

void func_26()
{
	int iVar0[15];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iLocal_19 = 0;
	iVar1 = 0;
	func_28();
	while (iVar1 < 9)
	{
		iVar2 = 0;
		iVar3 = 9;
		Global_8161[Global_19486 /*2811*/][iVar3 /*281*/] = 5000;
		while (iVar2 < 9)
		{
			if (Global_8161[Global_19486 /*2811*/][iVar2 /*281*/].f_280 == 1)
			{
				if (iVar0[iVar2] == 0)
				{
					if (iVar2 == 0)
					{
						if (Global_8161[Global_19486 /*2811*/][iVar2 /*281*/] < Global_8161[Global_19486 /*2811*/][iVar3 /*281*/])
						{
							iVar3 = iVar2;
							func_20(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(2), SYSTEM::TO_FLOAT(iVar1), -1f, -1f, -1f, &(Global_8161[Global_19486 /*2811*/][iVar3 /*281*/].f_2), 0, 0, 0, 0);
						}
					}
				}
			}
			iVar2++;
		}
		iLocal_18[iVar1] = iVar3;
		iVar0[iVar3] = 1;
		if (Global_8161[Global_19486 /*2811*/][iVar1 /*281*/].f_280 == 1)
		{
			iLocal_19++;
		}
		iVar1++;
	}
	func_9(Global_19467, "DISPLAY_VIEW", 13f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_13(Global_19467, "SET_HEADER", "CELL_16", 0, 0, 0, 0);
	if (Global_19474)
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
	}
	else
	{
		func_20(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		func_20(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_20(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_7356, 17);
}

void func_27()
{
	if (Global_41431 != 15)
	{
		func_28();
		Global_8161[Global_19486 /*2811*/][0 /*281*/].f_124[2] = 0;
	}
}

void func_28()
{
	if (func_35(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_29();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

var func_29()
{
	func_30();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_33(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_32(PLAYER::PLAYER_PED_ID());
			if (func_31(iVar0) && (!func_35(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_31(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

bool func_31(int iParam0)
{
	return iParam0 < 3;
}

int func_32(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_33(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_33(int iParam0)
{
	if (func_31(iParam0))
	{
		return func_34(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_34(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_35(int iParam0)
{
	return Global_41431 == iParam0;
}

