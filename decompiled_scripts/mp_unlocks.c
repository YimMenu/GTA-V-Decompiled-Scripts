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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_85 = 50 + 1000;
	iLocal_86 = 58 + 1000;
	iLocal_95 = 39;
	HUD::_LOG_DEBUG_INFO(1);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if ((MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION()) || MISC::IS_PC_VERSION())
	{
		iLocal_95 = 40;
	}
	switch (iScriptParam_0)
	{
		case 3:
			while (iLocal_87 == 0)
			{
				SYSTEM::WAIT(0);
				func_54();
				if (func_50(202))
				{
					HUD::RELEASE_CONTROL_OF_FRONTEND();
					iLocal_87 = 1;
				}
				if (HUD::_0x2E22FEFA0100275E())
				{
					if (iLocal_94 == 0)
					{
						if (func_49())
						{
							func_46();
						}
					}
					else
					{
						HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar0, &iVar1, &iVar2);
						if (iVar1 == 50)
						{
							iLocal_91 = iVar2;
							func_1(&uLocal_93);
						}
					}
				}
			}
			break;
		
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
	}
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	HUD::RELEASE_CONTROL_OF_FRONTEND();
	while (true)
	{
		SYSTEM::WAIT(0);
	}
}

int func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_45(0, iLocal_91, 0, 1);
	func_44(1);
	iVar0 = 0;
	switch (iLocal_91)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < 13)
			{
				iVar2 = func_43(iVar1);
				iVar3 = func_40(iVar1);
				if (iVar2 > iVar3)
				{
					iVar3 = iVar2;
				}
				func_38(&iVar0, iVar2, iVar3);
				iVar1++;
			}
			break;
		
		case 1:
			iVar1 = 0;
			while (iVar1 < 49)
			{
				func_28(&iVar0, func_29(iVar1));
				iVar1++;
			}
			break;
		
		case 2:
			func_16(&iVar0, "PM_UCON_T21", func_18(31, 0, 0));
			func_16(&iVar0, "PM_UCON_T22", func_18(32, 0, 0));
			func_16(&iVar0, "PM_UCON_T0", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T1", func_18(2, 0, 0));
			func_16(&iVar0, "PM_UCON_T2", func_18(21, 0, 0));
			func_16(&iVar0, "PM_UCON_T3", func_18(59, 0, 0));
			func_16(&iVar0, "PM_UCON_T4", func_18(30, 0, 0));
			func_16(&iVar0, "PM_UCON_T6", func_18(1, 0, 0));
			func_16(&iVar0, "PM_UCON_T5", func_18(90, 0, 0));
			func_16(&iVar0, "PM_UCON_T8", func_18(13, 0, 0));
			func_16(&iVar0, "PM_UCON_T7", func_18(22, 0, 0));
			func_16(&iVar0, "PM_UCON_T9", func_18(60, 0, 0));
			func_16(&iVar0, "PM_UCON_T11", func_18(23, 0, 0));
			func_16(&iVar0, "PM_UCON_T10", func_18(76, 0, 0));
			func_16(&iVar0, "PM_UCON_T15", func_18(15, 0, 0));
			func_16(&iVar0, "PM_UCON_T14", func_18(14, 0, 0));
			func_16(&iVar0, "PM_UCON_T13", func_18(11, 0, 0));
			func_16(&iVar0, "PM_UCON_T38", func_18(122, 0, 0));
			func_16(&iVar0, "PM_UCON_T16", func_18(27, 0, 0));
			func_16(&iVar0, "PM_UCON_T12", func_18(12, 0, 0));
			func_16(&iVar0, "PM_UCON_T43", func_18(4, 0, 0));
			func_16(&iVar0, "PM_UCON_T17", func_18(19, 0, 0));
			func_16(&iVar0, "PM_UCON_T18", func_18(29, 0, 0));
			func_16(&iVar0, "PM_UCON_T19", func_18(8, 0, 0));
			func_16(&iVar0, "PM_UCON_T20", func_18(61, 0, 0));
			func_16(&iVar0, "PM_UCON_T42", func_18(119, 0, 0));
			func_16(&iVar0, "PM_UCON_T49", func_18(96, 0, 0));
			func_16(&iVar0, "PM_UCON_T41", func_18(127, 0, 0));
			func_16(&iVar0, "PM_UCON_T39", func_18(126, 0, 0));
			func_16(&iVar0, "PM_UCON_T48", func_18(78, 0, 0));
			func_16(&iVar0, "PM_UCON_T40", func_18(124, 0, 0));
			func_16(&iVar0, "PM_UCON_T44", func_18(103, 0, 0));
			func_16(&iVar0, "PM_UCON_T23", func_18(3, 0, 0));
			func_16(&iVar0, "PM_UCON_T24", func_18(74, 0, 0));
			func_16(&iVar0, "PM_UCON_T25", func_18(6, 0, 0));
			func_16(&iVar0, "PM_UCON_T26", func_18(20, 0, 0));
			func_16(&iVar0, "PM_UCON_T27", func_18(62, 0, 0));
			func_16(&iVar0, "PM_UCON_T28", func_18(65, 0, 0));
			func_16(&iVar0, "PM_UCON_T29", func_18(63, 0, 0));
			func_16(&iVar0, "PM_UCON_T45", func_18(104, 0, 0));
			func_16(&iVar0, "PM_UCON_T30", func_18(77, 0, 0));
			func_16(&iVar0, "PM_UCON_T46", func_18(98, 0, 0));
			func_16(&iVar0, "PM_UCON_T31", func_18(81, 0, 0));
			func_16(&iVar0, "PM_UCON_T32", func_18(75, 0, 0));
			func_16(&iVar0, "PM_UCON_T33", func_18(95, 0, 0));
			func_16(&iVar0, "PM_UCON_T47", func_18(105, 0, 0));
			func_16(&iVar0, "PM_UCON_T35", func_18(64, 0, 0));
			func_16(&iVar0, "PM_UCON_T34", func_18(67, 0, 0));
			func_16(&iVar0, "PM_UCON_T37", func_9(func_11(PLAYER::PLAYER_ID(), 1), 0) >= 100);
			func_16(&iVar0, "PM_UCON_T36", func_9(func_11(PLAYER::PLAYER_ID(), 1), 0) >= func_8(4, 170));
			break;
	}
	if (iVar0 > 16)
	{
		iLocal_92 = 1;
		func_7(1, 2, 1, 1, 0, 0);
		func_5(1, 0, iVar0, 0, 0);
		HUD::PAUSE_MENU_ACTIVATE_CONTEXT(-1871331138);
	}
	else
	{
		iLocal_92 = 0;
		func_5(1, -1, -1, 0, 0);
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	}
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	func_4(1);
	func_2(1);
	*uParam0 = 1;
	return 1;
}

void func_2(int iParam0)
{
	func_3(iParam0, 1);
}

void func_3(int iParam0, bool bParam1)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SHOW_COLUMN"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			MISC::CLEAR_BIT(&Global_1312786, iParam0);
		}
		else
		{
			MISC::SET_BIT(&Global_1312786, iParam0);
		}
	}
}

void func_4(int iParam0)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("DISPLAY_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_5(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		func_6("");
	}
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_6(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("INIT_COLUMN_SCROLL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 134:
				return 0;
				break;
			
			case 136:
				return 1;
				break;
			
			case 137:
				return 1;
				break;
			
			case 169:
				return 1;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iParam1)
		{
			case 133:
				return 0;
				break;
		}
	}
	else if (iParam0 == 4)
	{
		switch (iParam1)
		{
			case 135:
				return 1;
				break;
			
			case 170:
				return 100;
				break;
			}
	}
	switch (iParam1)
	{
		case 148:
			return 5;
			break;
		
		case 149:
			return 10;
			break;
		
		case 150:
			return 25;
			break;
		
		case 151:
			return 50;
			break;
		
		case 155:
			return 5;
			break;
		
		case 156:
			return 10;
			break;
		
		case 157:
			return 25;
			break;
		
		case 158:
			return 50;
			break;
		
		case 152:
			return 5;
			break;
		
		case 153:
			return 10;
			break;
		
		case 154:
			return 25;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 50;
			break;
		
		case 161:
			return 100;
			break;
		
		case 162:
			return 5;
			break;
		
		case 163:
			return 10;
			break;
		
		case 164:
			return 25;
			break;
		
		case 165:
			return 50;
			break;
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 0)
	{
		switch (iParam1)
		{
			case 138:
				return 7;
			
			case 139:
				return 9;
			
			case 140:
				return 11;
			
			case 141:
				return 13;
			
			case 142:
				return 15;
			
			case 143:
				return 17;
			
			case 144:
				return 19;
			
			case 145:
				return 21;
			
			case 146:
				return 23;
			
			case 147:
				return 25;
			
			case 166:
				return 1;
			
			case 167:
				return 1;
			
			case 168:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_9(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_10(iParam0, 0);
}

int func_10(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_11(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_12(iParam0);
}

int func_12(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1390527[func_14(-1)];
			}
			else if (func_13(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_14(-1)];
	}
	return 0;
}

int func_13(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_15()
{
	return Global_1312763;
}

void func_16(int iParam0, char* sParam1, bool bParam2)
{
	func_17(1, *iParam0, iLocal_86, *iParam0, sParam1, bParam2, 1);
	*iParam0++;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(sParam4);
		if (iParam5 == 1)
		{
			if (iParam6 == 0)
			{
				func_6("PM_UJOB_YES");
			}
			else
			{
				func_6("PM_UCON_ULK");
			}
		}
		else if (iParam6 == 0)
		{
			func_6("PM_UJOB_NO");
		}
		else
		{
			func_6("PM_UCON_LCK");
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_18(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7857 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_22(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_21() || func_20())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_19())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574658[iVar1], iVar0);
}

int func_19()
{
	int iVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_1794, 23))
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	iVar0 = Global_1390515[func_14(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2544210.f_1794), 23);
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_1312890;
}

bool func_21()
{
	return Global_1312892;
}

int func_22(int iParam0, int iParam1)
{
	if (!func_26())
	{
		return 0;
	}
	if (func_25())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	return func_23(&(Global_1590908[iParam0 /*874*/].f_745), func_24(iParam1));
}

bool func_23(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		case 171:
			return 36;
		
		case 172:
			return 37;
		
		case 173:
			return 38;
		
		default:
	}
	return 1;
}

bool func_25()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_143, 3);
}

int func_26()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	return func_27(120, -1);
}

int func_27(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2592627[iParam0 /*3*/][func_14(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_28(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UJOB_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_17(1, *iParam0, iLocal_86, *iParam0, &Var0, iParam1, 0);
	*iParam0++;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_27(78, -1);
		
		case 1:
			return func_27(79, -1);
		
		case 2:
			return func_27(80, -1);
		
		case 3:
			return func_35(30, -1, -1);
		
		case 4:
			return func_27(81, -1);
		
		case 5:
			return func_34(1259, -1, 0) > 0;
		
		case 6:
			return func_34(1261, -1, 0) > 0;
		
		case 7:
			return func_27(83, -1);
		
		case 8:
			return func_35(11, -1, -1);
		
		case 9:
			return func_27(95, -1);
		
		case 10:
			return func_27(96, -1);
		
		case 11:
			return func_27(97, -1);
		
		case 12:
			return func_35(8, -1, -1);
		
		case 13:
			return func_35(9, -1, -1);
		
		case 14:
			return func_27(98, -1);
		
		case 15:
			return func_27(99, -1);
		
		case 16:
			return func_33(27, -1) > 0;
		
		case 17:
			return func_35(3, -1, -1);
		
		case 18:
			return func_35(2, -1, -1);
		
		case 19:
			return func_35(4, -1, -1);
		
		case 20:
			return func_27(100, -1);
		
		case 21:
			return func_35(31, -1, -1);
		
		case 22:
			return func_27(102, -1);
		
		case 23:
			return func_27(103, -1);
		
		case 24:
			return func_27(104, -1);
		
		case 25:
			return func_27(105, -1);
		
		case 26:
			return func_27(107, -1);
		
		case 27:
			return func_27(84, -1);
		
		case 28:
			return func_34(1265, -1, 0) > 0;
		
		case 29:
			return func_27(85, -1);
		
		case 30:
			return func_34(1263, -1, 0) > 0;
		
		case 31:
			return func_34(1267, -1, 0) > 0;
		
		case 32:
			return func_34(1260, -1, 0) > 0;
		
		case 33:
			return func_34(1266, -1, 0) > 0;
		
		case 34:
			return func_34(1249, -1, 0) > 0;
		
		case 35:
			return func_27(86, -1);
		
		case 36:
			if (func_32(joaat("mpply_race_2_point_wins")) > 0 || func_32(joaat("mpply_race_2_point_lost")) > 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 37:
			return func_35(27, -1, -1);
		
		case 38:
			return func_35(26, -1, -1);
		
		case 39:
			return func_34(1258, -1, 0) > 0;
		
		case 40:
			return func_34(1168, -1, 0) > 0;
		
		case 41:
			return func_35(5, -1, -1);
		
		case 42:
			return func_35(1, -1, -1);
		
		case 43:
			return (func_34(1148, -1, 0) > 0 || func_34(1149, -1, 0) > 0);
		
		case 44:
			return func_35(10, -1, -1);
		
		case 45:
			return func_27(90, -1);
		
		case 46:
			return func_35(25, -1, -1);
		
		case 47:
			return func_31();
		
		case 48:
			return func_30();
	}
	return 0;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_33(117, -1) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_34(2090, -1, 0) > 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_32(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_33(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_14(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_34(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_14(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_35(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar1 = func_37(iParam0, iParam1);
	iVar2 = func_36(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_37(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_15();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

void func_38(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "PM_UGEN_T", 16);
	StringIntConCat(&Var0, *iParam0, 16);
	func_39(1, *iParam0, iLocal_86, *iParam0, &Var0, "PM_UGEN_NUM", iParam1, iParam2);
	*iParam0++;
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_6(sParam4);
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam6);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam7);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_40(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_794709.f_123069[2];
		
		case 1:
			return Global_794709.f_123069[1];
		
		case 2:
			return Global_794709.f_123069[8];
		
		case 3:
			return Global_794709.f_123069[3];
		
		case 4:
			return Global_794709.f_123069[0];
		
		case 5:
			if ((((func_42() || func_41()) || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION()) || MISC::IS_DURANGO_VERSION())
			{
				iVar0 += 2;
				iVar0 += 2;
				iVar0++;
				iVar0 += 7;
				if (Global_262145.f_22671)
				{
					iVar0++;
				}
				return (46 + iVar0);
			}
			else
			{
				return 44;
			}
			break;
		
		case 6:
			if ((NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() || func_42()) || func_41())
			{
				iVar0 = 0;
				iVar0 += 19;
				iVar0 += 8;
				return (Global_262145.f_21561 + iVar0);
			}
			else
			{
				return Global_262145.f_21561;
			}
			break;
		
		case 7:
			return 205;
		
		case 8:
			return 106;
		
		case 9:
			return 60;
		
		case 10:
			return 180;
		
		case 11:
			return (89 + iLocal_95);
		
		case 12:
			return 10;
	}
	return -1;
}

int func_41()
{
	return 1;
}

int func_42()
{
	return 1;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return Global_794709.f_123083[2];
		
		case 1:
			return Global_794709.f_123083[1];
		
		case 2:
			return Global_794709.f_123083[8];
		
		case 3:
			return Global_794709.f_123083[3];
		
		case 4:
			return Global_794709.f_123083[0];
		
		case 5:
			return func_34(1233, -1, 0);
		
		case 6:
			return func_34(1234, -1, 0);
		
		case 7:
			return (func_34(1243, -1, 0) - 1);
		
		case 8:
			return func_34(1238, -1, 0);
		
		case 9:
			return func_34(1244, -1, 0);
		
		case 10:
			return func_34(1239, -1, 0);
		
		case 11:
			return func_34(756, -1, 0);
		
		case 12:
			if (func_27(347, -1))
			{
				iVar0++;
			}
			if (func_27(348, -1))
			{
				iVar0++;
			}
			if (func_27(349, -1))
			{
				iVar0++;
			}
			if (func_27(350, -1))
			{
				iVar0++;
			}
			if (func_27(351, -1))
			{
				iVar0++;
			}
			if (func_27(352, -1))
			{
				iVar0++;
			}
			if (func_27(353, -1))
			{
				iVar0++;
			}
			if (func_27(354, -1))
			{
				iVar0++;
			}
			if (func_27(355, -1))
			{
				iVar0++;
			}
			if (func_27(356, -1))
			{
				iVar0++;
			}
			return iVar0;
			break;
	}
	return -1;
}

void func_44(int iParam0)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT_EMPTY"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_45(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_HIGHLIGHT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam3);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_46()
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	HUD::_GET_PAUSE_MENU_SELECTION_DATA(&uVar0, &uVar1, &uVar2);
	func_44(0);
	iLocal_91 = 0;
	func_48(0, 0, iLocal_85, 0, 1, "PM_UL_D0", 0, 0, 0);
	func_48(0, 1, iLocal_85, 1, 1, "PM_UL_D1", 0, 0, 0);
	func_48(0, 2, iLocal_85, 2, 1, "PM_UL_D2", 0, 0, 0);
	func_2(0);
	func_47(2);
	func_47(3);
	func_47(4);
	func_47(5);
	func_4(0);
	func_1(&uLocal_93);
	HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(-1871331138);
	HUD::PAUSE_MENU_ACTIVATE_CONTEXT(337714004);
	HUD::_0x4895BDEA16E7C080(0);
	iLocal_94 = 1;
}

void func_47(int iParam0)
{
	func_3(iParam0, 0);
}

void func_48(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, char* sParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_DATA_SLOT"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		if (bParam4)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		}
		func_6(sParam5);
		if (bParam6)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		}
		else
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		}
		if (bParam8)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(21);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam8);
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_49()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		Global_794709.f_123083[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1200)
	{
		if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
		{
			if (Global_794709.f_4[iVar0 /*88*/].f_65 < 13 && Global_794709.f_4[iVar0 /*88*/].f_70 <= 1000)
			{
				Global_794709.f_123083[Global_794709.f_4[iVar0 /*88*/].f_65]++;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = func_53(iVar0);
	iVar2 = func_52(iVar0);
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, iParam0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iParam0)) || func_51(iParam0, &(Global_1379108.f_1060), 1))
	{
		if (!MISC::IS_BIT_SET(Global_1379108.f_1049[iVar1], iVar2))
		{
			MISC::SET_BIT(&(Global_1379108.f_1049[iVar1]), iVar2);
			return 1;
		}
	}
	else if (MISC::IS_BIT_SET(Global_1379108.f_1049[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(&(Global_1379108.f_1049[iVar1]), iVar2);
	}
	return 0;
}

int func_51(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (PAD::GET_CONTROL_VALUE(2, 195) - 127);
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 196) - 127);
	iVar2 = (PAD::GET_CONTROL_VALUE(2, 197) - 127);
	switch (iParam0)
	{
		case 189:
			if (iVar0 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 190:
			if (iVar0 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 188:
			if (iVar1 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 187:
			if (iVar1 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 194:
			if (iVar2 > 30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
		
		case 193:
			if (iVar2 < -30)
			{
				if (*uParam1 < MISC::GET_GAME_TIMER() || iParam2 == 0)
				{
					*uParam1 = MISC::GET_GAME_TIMER() + 250;
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_52(int iParam0)
{
	return (iParam0 % 32);
}

int func_53(int iParam0)
{
	return (iParam0 / 32);
}

void func_54()
{
	int iVar0;
	
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = PAD::GET_CONTROL_VALUE(2, 221);
		if (iVar0 > 180)
		{
			if (func_56(&uLocal_88, iLocal_90, 0))
			{
				if (iLocal_92)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iLocal_90 = 250;
					func_55(&uLocal_88);
				}
			}
		}
		else if (iVar0 < 80)
		{
			if (func_56(&uLocal_88, iLocal_90, 0))
			{
				if (iLocal_92)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND("SET_COLUMN_INPUT_EVENT"))
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					iLocal_90 = 250;
					func_55(&uLocal_88);
				}
			}
		}
		else if (iLocal_90 != -1)
		{
			iLocal_90 = -1;
		}
	}
}

void func_55(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_56(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_57(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_57(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

