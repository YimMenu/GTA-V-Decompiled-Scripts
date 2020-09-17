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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_60();
	}
	UI::REQUEST_ADDITIONAL_TEXT("REPORT", 0);
	while (!UI::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		switch (iLocal_52)
		{
			case 0:
				break;
			
			case 1:
				func_51(1, 1, 1, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				UI::DISPLAY_RADAR(0);
				UI::DISPLAY_HUD(0);
				uLocal_53 = unk_0x67D02A194A2FC2BD("PSYCHOLOGY_REPORT");
				while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_53))
				{
					func_43();
					SYSTEM::WAIT(0);
				}
				UI::REQUEST_ADDITIONAL_TEXT("REPORT", 3);
				while (!UI::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
					func_43();
					SYSTEM::WAIT(0);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_53, "SET_PLAYER_NAME");
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PATIENT");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("GAMERTAG");
				if (NETWORK::NETWORK_IS_SIGNED_IN())
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()));
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("ACCNA_MIKE");
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uLocal_53, "SET_LETTER_TEXT");
				func_42("HEADER_1");
				func_42("HEADER_2");
				Var0 = { func_41(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_40(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_39(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_38(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_37(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_35(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_33(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_32(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_31(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_30(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_28(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_24(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_23(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_21(&uLocal_54) };
				func_42(&Var0);
				Var0 = { func_20(&uLocal_54) };
				func_42(&Var0);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				while (!func_13(&uLocal_70, &uLocal_71, &uLocal_54))
				{
					func_43();
					SYSTEM::WAIT(0);
				}
				func_12(&uLocal_72);
				func_11(&uLocal_72, 0, 0, 0, 1);
				func_10(&uLocal_72, "CONTINUE", 2, 201, 1, 1, 0);
				func_9(&uLocal_72, 1);
				func_8(&uLocal_72, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						func_43();
						CAM::DO_SCREEN_FADE_IN(800);
					}
					while (!CAM::IS_SCREEN_FADED_IN())
					{
						func_43();
						GRAPHICS::_SET_2D_LAYER(1);
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
						SYSTEM::WAIT(0);
					}
				}
				func_43();
				GRAPHICS::_SET_2D_LAYER(1);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
				iLocal_52 = 2;
				break;
			
			case 2:
				GRAPHICS::_SET_2D_LAYER(1);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
				func_1(&uLocal_72, 1128792064, 1, 0, 1, 1065353216);
				if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
				{
					iLocal_52 = 3;
				}
				break;
			
			case 3:
				func_12(&uLocal_72);
				CAM::DO_SCREEN_FADE_OUT(3000);
				while (CAM::IS_SCREEN_FADING_OUT())
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_53, 255, 255, 255, 255, 0);
					func_43();
					SYSTEM::WAIT(0);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_53);
				func_51(0, 1, 1, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				UI::DISPLAY_RADAR(1);
				UI::DISPLAY_HUD(1);
				func_60();
				break;
		}
		if (iLocal_52 != 0)
		{
			func_43();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || GAMEPLAY::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_7(uParam0))
	{
		return;
	}
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_2D_LAYER(iParam2);
	if (!func_6(uParam0->f_1, 256) || (func_6(uParam0->f_1, 8192) && CONTROLS::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(iParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(iParam5);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(func_6(uParam0->f_1, 4096));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						uVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						uVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							uVar3 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = CONTROLS::_0x80C2FD58D720C801(uVar0, uVar1, bVar2);
						}
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_5(uVar3);
						}
						iVar7++;
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_42(uParam0->f_2[iVar6]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_6(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
							}
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar6++;
		}
		fVar8 = func_4(bParam4, func_4(func_6(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar8);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_3(&(uParam0->f_1), 256);
		func_2(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_3(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_4(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_5(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

bool func_6(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_7(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_3(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_8(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(&(uParam0->f_1), 16);
	}
	else
	{
		func_2(&(uParam0->f_1), 16);
	}
}

void func_9(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_3(&(uParam0->f_1), 1024);
	}
	else
	{
		func_2(&(uParam0->f_1), 1024);
	}
}

int func_10(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_3(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_3(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_3(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_3(&(uParam0->f_1), 8192);
	}
}

void func_12(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_13(var uParam0, var uParam1, var uParam2)
{
	if (func_17())
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_16())
			{
				return 0;
			}
			func_15();
			*uParam0++;
			break;
		
		case 1:
			DATAFILE::DATAFILE_CREATE();
			iVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
			DATAFILE::_OBJECT_VALUE_ADD_INTEGER(iVar0, "in", *uParam2);
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "st", &(uParam2->f_1));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "mp", &(uParam2->f_2));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "ms", &(uParam2->f_3));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "sc", &(uParam2->f_5));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "pr", &(uParam2->f_6));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "fa", &(uParam2->f_7));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "sm", &(uParam2->f_8));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "kp", &(uParam2->f_9));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "sv", &(uParam2->f_10));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "yo", &(uParam2->f_11));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "fi", &(uParam2->f_12));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "rc", &(uParam2->f_13));
			DATAFILE::_OBJECT_VALUE_ADD_STRING(iVar0, "co", &(uParam2->f_14));
			DATAFILE::_OBJECT_VALUE_ADD_INTEGER(iVar0, "su", uParam2->f_15);
			DATAFILE::_0x83BCCE3224735F05("gta5/psych/index.json");
			*uParam0++;
			break;
		
		case 2:
			if (func_14(uParam1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_14(var uParam0, int iParam1)
{
	if (!DATAFILE::_0x4DFDD9EB705F8140(uParam0))
	{
		if (*uParam0)
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return 1;
		}
		else
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0 && iParam1)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return 1;
		}
	}
	return 0;
}

void func_15()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

int func_16()
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::_0xD53ACDBEF24A46E8())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (!func_18())
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (func_19())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_19()
{
	return Global_2461181;
}

struct<4> func_20(var uParam0)
{
	StringCopy(&Var0, "SUMMARY_", 16);
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 24);
	uParam0->f_15 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_21(var uParam0)
{
	StringCopy(&Var0, "COLLECT_", 16);
	if (((func_22(110) || func_22(95)) || func_22(106)) || func_22(107))
	{
		StringCopy(&(uParam0->f_14), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else
	{
		StringCopy(&(uParam0->f_14), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_14), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_22(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

struct<4> func_23(var uParam0)
{
	StringCopy(&Var0, "RAND_", 16);
	STATS::STAT_GET_INT(-852659719, &iVar5, -1);
	STATS::STAT_GET_INT(-2122623864, &iVar6, -1);
	iVar7 = (iVar5 + iVar6);
	if (iVar7 > 10)
	{
		StringCopy(&(uParam0->f_13), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_13), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_13), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_24(var uParam0)
{
	StringCopy(&Var0, "FIT_", 16);
	if ((((((((func_25(1, 1) > 50 && func_25(1, 2) > 50) && func_25(1, 3) > 50) && func_25(0, 1) > 50) && func_25(0, 2) > 50) && func_25(0, 3) > 50) && func_25(2, 1) > 50) && func_25(2, 2) > 50) && func_25(2, 3) > 50)
	{
		StringCopy(&(uParam0->f_12), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_12), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
	StringIntConCat(&(uParam0->f_12), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_25(int iParam0, int iParam1)
{
	iVar1 = func_26(iParam0, iParam1);
	STATS::STAT_GET_INT(iVar1, &uVar0, -1);
	return uVar0;
}

var func_26(int iParam0, int iParam1)
{
	func_27(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_27(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
				
				case 1:
					*uParam2 = 583576226;
					break;
				
				case 3:
					*uParam2 = 1939246781;
					break;
				
				case 2:
					*uParam2 = -1872025703;
					break;
				
				case 4:
					*uParam2 = 297038448;
					break;
				
				case 5:
					*uParam2 = 2024531174;
					break;
				
				case 6:
					*uParam2 = -1266079991;
					break;
				
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
				
				case 1:
					*uParam2 = 626982837;
					break;
				
				case 3:
					*uParam2 = 1815853850;
					break;
				
				case 2:
					*uParam2 = -1205308189;
					break;
				
				case 4:
					*uParam2 = 2111310536;
					break;
				
				case 5:
					*uParam2 = -376705475;
					break;
				
				case 6:
					*uParam2 = -886696809;
					break;
				
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
				
				case 1:
					*uParam2 = 2105689774;
					break;
				
				case 3:
					*uParam2 = 2123663283;
					break;
				
				case 2:
					*uParam2 = 1327096153;
					break;
				
				case 4:
					*uParam2 = 1810848047;
					break;
				
				case 5:
					*uParam2 = 2010093328;
					break;
				
				case 6:
					*uParam2 = 708474090;
					break;
				
				case 7:
					*uParam2 = -801407253;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

struct<4> func_28(var uParam0)
{
	StringCopy(&Var0, "YOGA_", 16);
	if (func_29(300, 1))
	{
		StringCopy(&(uParam0->f_11), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_11), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_11), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_29(int iParam0, int iParam1)
{
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

struct<4> func_30(var uParam0)
{
	StringCopy(&Var0, "VEHS_", 16);
	STATS::STAT_GET_INT(-22726202, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1534914527, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-978604952, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1704487518, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1367630807, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1040236793, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1146577566, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1861096290, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(713055388, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1144254321, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-632940664, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-357438054, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(797423994, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(648751400, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1657674211, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(732455696, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-313904433, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1437327142, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(686746390, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-580419561, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-276525534, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_10), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_10), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_10), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_31(var uParam0)
{
	StringCopy(&Var0, "PEDS_", 16);
	STATS::STAT_GET_INT(1824531000, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1861069275, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1575296825, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 100)
	{
		StringCopy(&(uParam0->f_9), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_9), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_9), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_32(var uParam0)
{
	StringCopy(&Var0, "STOCK_", 16);
	STATS::STAT_GET_INT(-1657837343, &iVar5, 0);
	if (iVar5 >= 120000)
	{
		StringCopy(&(uParam0->f_8), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_8), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_8), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_33(var uParam0)
{
	StringCopy(&Var0, "FAMILY_", 16);
	if (func_34(8) && func_34(5))
	{
		StringCopy(&(uParam0->f_7), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_7), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_7), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_34(int iParam0)
{
	if (iParam0 < 9)
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_18098.f_175[iParam0].f_18, 0);
	}
	return 0;
}

struct<4> func_35(var uParam0)
{
	StringCopy(&Var0, "PROS_", 16);
	if ((func_36(1) > 0 || func_36(0) > 0) || func_36(2) > 0)
	{
		StringCopy(&(uParam0->f_6), "Y", 4);
		StringConCat(&Var0, "Y", 16);
	}
	else
	{
		StringCopy(&(uParam0->f_6), "N", 4);
		StringConCat(&Var0, "N", 16);
	}
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	StringIntConCat(&(uParam0->f_6), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_111638.f_10044.f_90[0];
			break;
		
		case 1:
			return Global_111638.f_10044.f_90[1];
			break;
		
		case 2:
			return Global_111638.f_10044.f_90[2];
			break;
	}
	return 0;
}

struct<4> func_37(var uParam0)
{
	StringCopy(&Var0, "STRIP_", 16);
	STATS::STAT_GET_INT(-397746042, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-1677642203, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1610202677, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(27639974, &iVar7, 0);
	iVar8 = (iVar8 + iVar7);
	STATS::STAT_GET_INT(422258364, &iVar7, 1);
	iVar8 = (iVar8 + iVar7);
	STATS::STAT_GET_INT(316202960, &iVar7, 2);
	iVar8 = (iVar8 + iVar7);
	if (iVar6 >= 3 || iVar8 >= 100)
	{
		StringCopy(&(uParam0->f_5), "Y", 4);
		StringConCat(&Var0, "Y", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_5), "N", 4);
		StringConCat(&Var0, "N", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_5), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_38(var uParam0)
{
	StringCopy(&Var0, "CASH_", 16);
	STATS::STAT_GET_INT(-656546900, &iVar5, 0);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(-2098183071, &iVar5, 1);
	iVar6 = (iVar6 + iVar5);
	STATS::STAT_GET_INT(1578119842, &iVar5, 2);
	iVar6 = (iVar6 + iVar5);
	if (iVar6 >= 1000000)
	{
		StringCopy(&(uParam0->f_3), "SP", 8);
		StringConCat(&Var0, "SP", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 14);
	}
	else
	{
		StringCopy(&(uParam0->f_3), "SA", 8);
		StringConCat(&Var0, "SA", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	StringIntConCat(&(uParam0->f_3), iVar4, 8);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_39(var uParam0)
{
	StringCopy(&Var0, "CHAR_", 16);
	iVar5 = 0;
	iVar7 = 0;
	STATS::STAT_GET_INT(-1263997649, &iVar7, 0);
	STATS::STAT_GET_INT(1157035214, &iVar6, 1);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 1;
	}
	STATS::STAT_GET_INT(-1923670641, &iVar6, 2);
	if (iVar6 > iVar7)
	{
		iVar7 = iVar6;
		iVar5 = 2;
	}
	if (iVar5 == 0)
	{
		StringCopy(&(uParam0->f_2), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else if (iVar5 == 1)
	{
		StringCopy(&(uParam0->f_2), "F", 4);
		StringConCat(&Var0, "F", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 13);
	}
	else
	{
		StringCopy(&(uParam0->f_2), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 12);
	}
	StringIntConCat(&(uParam0->f_2), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_40(var uParam0)
{
	StringCopy(&Var0, "STORY_", 16);
	if (func_22(135))
	{
		StringCopy(&(uParam0->f_1), "M", 4);
		StringConCat(&Var0, "M", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	else if (func_22(136))
	{
		StringCopy(&(uParam0->f_1), "T", 4);
		StringConCat(&Var0, "T", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 10);
	}
	else
	{
		StringCopy(&(uParam0->f_1), "B", 4);
		StringConCat(&Var0, "B", 16);
		iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
	}
	StringIntConCat(&(uParam0->f_1), iVar4, 4);
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

struct<4> func_41(var uParam0)
{
	StringCopy(&Var0, "INTRO_", 16);
	iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 21);
	*uParam0 = iVar4;
	StringIntConCat(&Var0, iVar4, 16);
	return Var0;
}

void func_42(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_43()
{
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	func_44(0);
}

void func_44(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_49(0))
		{
			func_45(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_45(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_48())
		{
			func_47(1, 1);
		}
		else
		{
			func_47(0, 0);
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
	if (!func_46())
	{
		Global_19486.f_1 = 3;
	}
}

int func_46()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_47(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_49(0))
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

bool func_48()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

int func_49(int iParam0)
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

bool func_50()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_51(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_59(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_46())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_59(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !func_53(PLAYER::PLAYER_ID(), 0)) && !func_52()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_56(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_52()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_53(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_54(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_54(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_55();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_55()
{
	return Global_1312745;
}

int func_56(int iParam0)
{
	if (func_53(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_57()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_60()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

