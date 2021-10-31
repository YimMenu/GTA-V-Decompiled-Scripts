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
	struct<19> Local_77 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300000, 0, 0, 30000, 2, 0, 0 } ;
	var uLocal_96 = 0;
	struct<4> Local_97[32];
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_282(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_272(ScriptParam_0);
	}
	else
	{
		func_269();
	}
	while (true)
	{
		func_268();
		if (func_258() || func_254(16))
		{
			func_269();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_269();
		}
		switch (func_253(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_252() == 1)
				{
					func_251();
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 1;
				}
				else if (func_252() == 4)
				{
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 1:
				if (func_252() == 1)
				{
					func_131();
				}
				else if (func_252() == 4)
				{
					func_14();
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 3;
				}
				break;
			
			case 3:
				func_13(&(Local_77.f_18));
				if (func_12(&(Local_77.f_18)))
				{
					Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
				}
				break;
			
			case 2:
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 4;
			
			case 4:
				func_269();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_252())
			{
				case 0:
					Local_77 = 1;
					break;
				
				case 1:
					func_11();
					func_3();
					if (func_1())
					{
						Local_77 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_77.f_7 == 2)
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	struct<14> Var0;
	
	switch (Local_77.f_7)
	{
		case 0:
			if (MISC::IS_BIT_SET(Local_77.f_1, 0))
			{
				Local_77.f_7 = 1;
			}
			else if (func_9(&(Local_77.f_8), 480000, 0))
			{
				Var0.f_2 = -2020452222;
				func_7(Var0, func_8(1));
				MISC::SET_BIT(&(Local_77.f_1), 1);
				Local_77.f_7 = 2;
			}
			break;
		
		case 1:
			func_4();
			break;
		
		case 2:
			break;
	}
}

void func_4()
{
	if (!func_9(&(Local_77.f_10), Local_77.f_12, 0))
	{
		if (func_9(&(Local_77.f_13), Local_77.f_15, 0))
		{
			Local_77.f_17++;
			Local_77.f_16 = func_6();
			func_5(&(Local_77.f_13));
		}
	}
	else
	{
		Local_77.f_7 = 2;
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6()
{
	switch (Local_77.f_17)
	{
		case 0:
		case 1:
			return 2;
		
		case 2:
		case 3:
		case 4:
		case 5:
			return 3;
		
		case 6:
		case 7:
		case 8:
			return 4;
		
		case 9:
			return 5;
		
		default:
	}
	return Local_77.f_16;
}

void func_7(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 153488394;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_282(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_10(var uParam0, bool bParam1, bool bParam2)
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

void func_11()
{
	int iVar0;
	
	if (Local_77 == 1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_232)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_232));
			if (func_282(iVar0, 1, 1))
			{
				if (!MISC::IS_BIT_SET(Local_77.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_97[iLocal_232 /*4*/].f_1, 0))
					{
						iLocal_233 = 1;
						MISC::SET_BIT(&(Local_77.f_1), 0);
					}
				}
			}
		}
	}
	iLocal_232++;
	if (iLocal_232 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iLocal_233 == 0)
		{
			if (MISC::IS_BIT_SET(Local_77.f_1, 0))
			{
				MISC::CLEAR_BIT(&(Local_77.f_1), 0);
			}
		}
		else
		{
			iLocal_233 = 0;
		}
		iLocal_232 = 0;
	}
}

int func_12(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_13(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_14()
{
	int iVar0;
	var uVar1;
	var uVar5;
	
	if (!MISC::IS_BIT_SET(iLocal_226, 1))
	{
		if ((MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= (Local_77.f_16 - 1)) && Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 < 10)
		{
			Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		}
		if (Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 > 0)
		{
			iVar0 = (Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 * Global_262145.f_8272);
			Global_2465707 = iVar0;
			func_109(&iVar0, 1);
			if (iVar0 > 0)
			{
				func_106(iVar0, 1, 1, 0);
				if (func_105())
				{
					func_93(-2043695058, iVar0, &uVar5, 0, 0, 0);
				}
				else
				{
					MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_DISTRACT_COPS", &uVar1);
				}
			}
			if (func_92())
			{
				func_79(12, "DSC_PASS0", 0, 0, -99);
			}
			else
			{
				func_79(12, "DSC_PASS1", 0, 0, -99);
			}
			func_20(51, iVar0, "DSC_CASH", "DSC_BIGM", 1, -1, -1082130432, 2);
			if (MISC::IS_BIT_SET(iLocal_226, 4))
			{
				if (!MISC::IS_BIT_SET(iLocal_226, 5))
				{
					func_15(66, 1, -1);
				}
			}
		}
		MISC::SET_BIT(&iLocal_226, 1);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_17(iParam0, func_18(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_16(iParam0, iVar0, iParam2);
}

void func_16(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_18(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_17(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_18(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_78(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_21(&Var0);
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_38(uParam0, uParam0->f_17);
	func_35(uParam0);
	if (func_34())
	{
		func_35(uParam0);
	}
	if (func_33(uParam0->f_1))
	{
		func_26();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_25(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_26();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_23(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_25(uParam0->f_69, 128))
			{
				if (func_22(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_23(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_23(var uParam0, int iParam1)
{
	func_24(uParam0, iParam1);
}

void func_24(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_25(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_26()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_27();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_27()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_31(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_28(&(Global_2441237.f_3165.f_1), 1);
}

void func_28(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_77517)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_30(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_29(0);
}

void func_29(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_30(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77496, 0);
}

void func_31(var uParam0)
{
	func_32(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_32(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_33(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_34()
{
	return Global_2453009.f_19;
}

void func_35(var uParam0)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_72 = func_36();
	}
}

int func_36()
{
	return 21;
}

int func_37(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_38(var uParam0, int iParam1)
{
	if (func_37(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_77() || !func_282(iParam1, 0, 1))
	{
		return;
	}
	if (func_22(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_39(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_39(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_73(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_73(PLAYER::PLAYER_ID()) || (func_72() && func_71())) && !MISC::IS_BIT_SET(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_70();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_282(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_68(iParam1, iParam0, 0);
							}
							else
							{
								return func_52(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_52(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_68(iParam1, iParam0, 0);
				}
				else
				{
					return func_40(0, -1, 0);
				}
			}
			else
			{
				return func_40(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_68(iParam1, iParam0, 0);
		}
		else
		{
			return func_52(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_52(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_40(bool bParam0, int iParam1, bool bParam2)
{
	return func_41(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_51() || (func_50() && func_48())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_47(iParam2, iVar0);
		}
		else
		{
			return func_47(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_46(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_45(1);
				}
				else
				{
					return func_45(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_42(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_42(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_45(1);
	}
	return func_45(0);
}

int func_42(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_44(iParam0, iParam1, iParam3);
	if (func_43(Global_4456448.f_85535, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_43(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_46(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_45(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_44(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_48()
{
	if (func_49())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_138135, 4);
}

bool func_49()
{
	return MISC::IS_BIT_SET(Global_4456448.f_127830, 12);
}

bool func_50()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_138135, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_138135, 0) || Global_1660806) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_51()
{
	if (func_49() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_61())
			{
				iVar3 = func_57(iParam0);
				if (!iVar3 == -1)
				{
					return func_55(iVar3);
				}
			}
			if ((func_54(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_46(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_45(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_53(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_45(1);
			}
			else
			{
				return func_41(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_57(iParam0);
	if (!iVar4 == -1)
	{
		return func_55(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_53(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_56(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_56(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_57(int iParam0)
{
	if (!iParam0 == func_77())
	{
		if (func_59(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_77())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_77();
}

bool func_59(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_60(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_77();
}

int func_60(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_77())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_61()
{
	if (((((func_67() || func_66()) || func_34()) || func_65()) || func_64()) || func_62())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_62()
{
	return func_63(Global_4456448.f_85535);
}

int func_63(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_64()
{
	return Global_2453009.f_24;
}

var func_65()
{
	return Global_2453009.f_21;
}

var func_66()
{
	return Global_2453009.f_18;
}

var func_67()
{
	return Global_2453009.f_17;
}

int func_68(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_61())
	{
		iVar2 = func_57(iParam1);
		if (!iVar2 == -1)
		{
			return func_55(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_77())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_41(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_69(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_46(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_53(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_69(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_70()
{
	return Global_2359302.f_2;
}

bool func_71()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_72()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 14);
}

int func_73(int iParam0)
{
	if (func_75(iParam0, 0))
	{
		return 1;
	}
	if (func_74())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_74()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_75(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_76(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
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

int func_76(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312882[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_77()
{
	return -1;
}

void func_78(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_77();
	uParam1->f_18 = func_77();
	uParam1->f_19 = func_77();
	uParam1->f_20 = func_77();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = uParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

void func_79(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_80(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_80(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = uParam1;
	bVar1 = false;
	func_81(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_81(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 15)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam4) > 31)
		{
			return;
		}
	}
	iVar0 = func_90();
	if (iVar0 == -1)
	{
		return;
	}
	func_89(iVar0);
	func_88(iVar0, uParam0);
	func_87(iVar0, uParam2, bParam3);
	func_86(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_85(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_83(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_82(iVar0, iParam6);
	}
}

void func_82(int iParam0, int iParam1)
{
	Global_1372345.f_59[iParam0 /*16*/].f_15 = iParam1;
}

void func_83(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1372345.f_59[iParam0 /*16*/].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_84(iParam0);
}

void func_84(int iParam0)
{
	MISC::SET_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 5);
}

void func_85(int iParam0)
{
	MISC::SET_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 4);
}

void func_86(int iParam0, char* sParam1)
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam1, 16);
	Global_1372345.f_59[iParam0 /*16*/].f_3 = { Var0 };
}

void func_87(int iParam0, var uParam1, bool bParam2)
{
	Global_1372345.f_59[iParam0 /*16*/].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 2);
		MISC::CLEAR_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 3);
		MISC::CLEAR_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 2);
	}
}

void func_88(int iParam0, var uParam1)
{
	Global_1372345.f_59[iParam0 /*16*/].f_1 = uParam1;
}

void func_89(int iParam0)
{
	MISC::SET_BIT(&(Global_1372345.f_59[iParam0 /*16*/]), 0);
}

int func_90()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_91(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_91(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1372345.f_59[iParam0 /*16*/], 0);
}

int func_92()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_93(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_105())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_94(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_94(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_94(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			func_94(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_94(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_105())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_19()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_101(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_100(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_95(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_96(iParam0);
	}
}

void func_96(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_105())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_99(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_97(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_97(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_98(&(uParam0->f_14));
	func_98(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_98(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_99(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_100(int iParam0, int iParam1)
{
	Global_2465846 = iParam1;
	Global_2465845 = iParam0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_105())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_102(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_102(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_104(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_103();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_103()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_104(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_105()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_106(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_107(iParam0, iParam1, iParam2, fParam3);
}

void func_107(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_4 = iVar1;
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_3 = (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_108(iVar1, 0);
	}
}

void func_108(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_130())
		{
			if (func_129(0))
			{
				if (!func_125(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_124()))
					{
						if (func_123() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_123());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_121(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_114("GB_BCUT_TICK1", func_124(), iVar0, 0, 0, 1);
						}
						func_113(20);
						func_110(func_124(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_110(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_282(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_112(iParam0);
		func_111(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_104(iParam0));
	}
}

void func_111(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_112(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_114(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_39(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_119(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_115(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_115(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_118() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_75(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_116(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_117(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_117(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_118()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_119(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_120(&cVar0);
}

var func_120(char[4] cParam0)
{
	return cParam0;
}

void func_121(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_122(1);
	}
	else
	{
		iVar1 = func_122(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_122(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_123()
{
	return Global_262145.f_12567;
}

int func_124()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
}

bool func_125(bool bParam0)
{
	return func_126(PLAYER::PLAYER_ID(), bParam0);
}

int func_126(int iParam0, bool bParam1)
{
	return func_127(iParam0, bParam1, 1);
}

int func_127(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_77())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_128(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_77() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0, int iParam1)
{
	if (iParam0 != func_77())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_77())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_129(bool bParam0)
{
	return func_59(PLAYER::PLAYER_ID(), bParam0);
}

bool func_130()
{
	return func_60(PLAYER::PLAYER_ID());
}

void func_131()
{
	func_249();
	if (HUD::DOES_BLIP_EXIST(iLocal_227))
	{
		if (func_247() || func_246())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_227, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_227, 4);
		}
	}
	switch (Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_77.f_2, Local_77.f_5, Local_77.f_5, 1000f, false, true, 0))
			{
				func_223();
				MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
				MISC::SET_BIT(&(Global_2544210.f_4659), 0);
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
			}
			if (Local_77.f_7 > 1)
			{
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 1:
			func_197();
			func_132();
			if (Local_77.f_7 > 1)
			{
				Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 2;
			}
			break;
		
		case 2:
			func_14();
			break;
	}
}

void func_132()
{
	func_196();
	func_141();
	func_134();
	func_133();
}

void func_133()
{
	if (!MISC::IS_BIT_SET(iLocal_226, 5))
	{
		if (!MISC::IS_BIT_SET(iLocal_226, 4))
		{
			if (Local_77.f_17 == 0)
			{
				MISC::SET_BIT(&iLocal_226, 4);
			}
			else
			{
				MISC::SET_BIT(&iLocal_226, 5);
			}
		}
		else if (!func_282(PLAYER::PLAYER_ID(), 1, 1))
		{
			MISC::SET_BIT(&iLocal_226, 5);
		}
	}
}

void func_134()
{
	if ((((LOCALIZATION::GET_CURRENT_LANGUAGE() == 7 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		func_140();
	}
	else
	{
		func_139();
	}
	if ((Local_77.f_12 - func_138(&(Local_77.f_10), 0, 0)) >= 0)
	{
		func_135((Local_77.f_12 - func_138(&(Local_77.f_10), 0, 0)), "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_135(0, "DCP_TIMER", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
}

void func_135(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_137(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_136(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_136(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_137(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1380638.f_6736[iParam0], iParam1);
}

int func_138(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_139()
{
	Global_1380638.f_1131 = 1;
}

void func_140()
{
	Global_1380638.f_1130 = 1;
}

void func_141()
{
	if (func_9(&uLocal_228, 30000, 0))
	{
		switch (Local_77.f_16)
		{
			case 2:
				func_193(2107, 1, -1);
				break;
			
			case 3:
				func_193(2108, 1, -1);
				break;
			
			case 4:
				func_193(2109, 1, -1);
				break;
			
			case 5:
				func_193(2110, 1, -1);
				break;
		}
		func_142(0, PLAYER::PLAYER_PED_ID(), "XPT_DSC", -1636175450, 2048546661, (Global_262145.f_8273 * Local_77.f_16), 1, -1, 0, 0, 0);
		Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2++;
		func_5(&uLocal_228);
	}
}

int func_142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_152(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_148(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_143(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_143(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_146(iParam0, 1) };
	if (iParam0 == func_145(PLAYER::PLAYER_PED_ID()))
	{
		func_144(1);
	}
	func_148(Var0, iParam1, 0, sParam2, iParam3);
}

void func_144(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_145(int iParam0)
{
	return iParam0;
}

Vector3 func_146(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_147(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_147(int iParam0)
{
	return iParam0;
}

void func_148(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_151(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam3;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam4;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_150();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_149();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_149()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_150()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_151(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_152(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_153(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_153(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_192(PLAYER::PLAYER_ID()) || func_191(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_189() || func_185(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_184(sParam2))
	{
	}
	if (func_183())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_181(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_180(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_177(0, &iVar1);
					break;
				
				case 3:
					func_177(1, &iVar1);
					break;
				
				case 1:
					func_174(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_193(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_164((func_173(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_2 != -1)
				{
					func_193(1166, iVar1, -1);
				}
				func_158(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_154((func_156(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_154((func_156(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_154(int iParam0)
{
	if (func_183())
	{
		Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_5 = iParam0;
		func_155(joaat("mpply_globalxp"), iParam0);
	}
}

void func_155(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_156(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_282(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_157(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_157(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_157(int iParam0)
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

void func_158(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_163(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_161(func_162(&Var0));
			if (iVar13 == 0)
			{
				func_160(&Global_1390382, iParam0);
				func_159(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar13 == 1)
			{
				func_160(&Global_1390383, iParam0);
				func_159(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar13 == 2)
			{
				func_160(&Global_1390384, iParam0);
				func_159(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar13 == 3)
			{
				func_160(&Global_1390385, iParam0);
				func_159(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar13 == 4)
			{
				func_160(&Global_1390386, iParam0);
				func_159(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_159(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_160(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_161(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_162(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

struct<13> func_163(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_164(int iParam0, int iParam1, int iParam2)
{
	if (func_183())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_18(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_18(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_172(PLAYER::PLAYER_ID()))
		{
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_6 = func_170(iParam0, 1);
		}
		func_169(640, iParam0, -1, 1);
		func_168(641, func_170(iParam0, 1), -1, 1, 0);
		Global_1390527[func_18(-1)] = iParam0;
		func_165(-1109644434, 7, 0);
	}
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_167(iParam1, iParam2))
	{
		iVar0 = func_166();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_166()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_167(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_168(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_169(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_18(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_18(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_18(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_18(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_18(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_18(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_18(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_18(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_18(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_18(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_18(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_18(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_18(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_18(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_18(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_18(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_18(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_18(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_18(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_18(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_18(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_18(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_18(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_18(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_18(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_18(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_18(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_18(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_18(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_18(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_18(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_18(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_18(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_18(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_18(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_18(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_18(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_18(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_18(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_18(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_18(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_18(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_18(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_18(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_18(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_18(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_18(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_18(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_18(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_18(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_18(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_18(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_18(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_18(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_171(iParam0, 0);
}

int func_171(int iParam0, int iParam1)
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

int func_172(int iParam0)
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

int func_173(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1390527[func_18(-1)];
			}
			else if (func_172(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_18(-1)];
	}
	return 0;
}

void func_174(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_46(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_176(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_175(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_175(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_175(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_176(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2518253 = { func_163(iParam0) };
		Global_2518266 = { func_163(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518253))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2518266))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_177(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_282(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_176(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_282(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_178(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_176(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_175(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_175(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_178(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_179(iParam0), func_179(iParam1));
	return 0f;
}

Vector3 func_179(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_180(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_175(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_181(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_173(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_173(PLAYER::PLAYER_ID());
		}
	}
	if (func_182(8000, 0, 0) > 0)
	{
		if (func_182(8000, 0, 0) < (iParam0 + func_173(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_182(8000, 0, 0) - func_173(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_182(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_293361[iParam0];
}

int func_183()
{
	return 1;
}

int func_184(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0)
{
	return func_186(func_187(iParam0));
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_187(int iParam0)
{
	if (func_188(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_188(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_189()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_34();
	}
	return func_190(Global_4456448.f_85535);
}

int func_190(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_191(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_192(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_195(iParam0, func_18(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_194(iParam0))
	{
		func_168(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_169(iParam0, iVar0, iParam2, 1);
	}
}

int func_194(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_18(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_196()
{
	if (func_9(&uLocal_230, 10000, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < Local_77.f_16)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_77.f_16, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
	}
}

void func_197()
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_77.f_2, Local_77.f_5, Local_77.f_5, 1000f, false, true, 0))
	{
		func_200();
		Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_77.f_2, Local_77.f_6, Local_77.f_6, 950f, false, true, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_226, 0) && MISC::IS_BIT_SET(iLocal_226, 3))
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !func_199())
			{
				if (!func_247())
				{
					func_198("DCP_LEAVE", -1);
				}
				MISC::SET_BIT(&iLocal_226, 0);
			}
		}
	}
	else
	{
		if (!MISC::IS_BIT_SET(iLocal_226, 3))
		{
			MISC::SET_BIT(&iLocal_226, 3);
		}
		if (MISC::IS_BIT_SET(iLocal_226, 0))
		{
			MISC::CLEAR_BIT(&iLocal_226, 0);
		}
	}
}

void func_198(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_199()
{
	return MISC::GET_GAME_TIMER() <= Global_22670.f_6135 + 100;
}

void func_200()
{
	func_5(&uLocal_228);
	func_5(&uLocal_230);
	func_201();
	MISC::CLEAR_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	MISC::CLEAR_BIT(&iLocal_226, 3);
	MISC::SET_BIT(&(Global_2544210.f_4659), 0);
	if (!MISC::IS_BIT_SET(iLocal_226, 5))
	{
		MISC::SET_BIT(&iLocal_226, 5);
	}
}

void func_201()
{
	if (MISC::IS_BIT_SET(iLocal_226, 2))
	{
		func_202(1, 1, 0);
		MISC::CLEAR_BIT(&iLocal_226, 2);
	}
}

void func_202(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_222();
	}
	if (!bParam2)
	{
		func_205(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_204(0);
	func_203();
}

void func_203()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_204(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_205(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_221())
		{
			func_220();
		}
		Global_2405077.f_713.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_218();
		func_209(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_206();
	}
}

void func_206()
{
	if (func_221() && !func_208())
	{
		func_220();
	}
	if (func_208())
	{
		func_207();
	}
	else
	{
		func_218();
		func_209(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_207()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_208()
{
	if ((Global_2405077.f_1751 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_1232.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_77())
	{
		if (MISC::IS_BIT_SET(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_210())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_210()
{
	if ((((((func_187(PLAYER::PLAYER_ID()) == 229 || func_187(PLAYER::PLAYER_ID()) == 191) || func_217()) || func_216()) || func_215(PLAYER::PLAYER_ID())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_211(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_211(int iParam0)
{
	if (func_214(iParam0))
	{
		return 1;
	}
	if (func_212(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_212(int iParam0)
{
	return func_213(iParam0, 20);
}

bool func_213(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_214(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2518926;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_216()
{
	return Global_1574420;
}

int func_217()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	if (func_221() && !func_208())
	{
		func_220();
	}
	func_219();
	Global_2405077.f_713 = 0;
}

void func_219()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_220()
{
	if (func_208())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_221()
{
	if ((Global_2405077.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_222()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_223()
{
	if (!MISC::IS_BIT_SET(iLocal_226, 2))
	{
		func_243(Local_77.f_2, (Local_77.f_6 * 1.5f), 0, 0, 1, 0);
		func_225(Local_77.f_2, Local_77.f_6, 0, 1);
		func_224(Local_77.f_2, 1, 0);
		MISC::SET_BIT(&iLocal_226, 2);
	}
}

void func_224(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405077.f_45.f_49 = { Param0 };
	Global_2405077.f_45.f_52 = iParam3;
	Global_2405077.f_45.f_53 = iParam4;
}

void func_225(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	func_226(Param0, 0f, 0f, 0f, uParam3, 0, iParam4, iParam5);
}

void func_226(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9)
{
	struct<12> Var0;
	
	if (func_235(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Var0.f_10 == 1)
		{
			func_234(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		if (func_229(Var0))
		{
			Global_2405077.f_45.f_64 = func_228(PLAYER::PLAYER_ID());
			func_227(Var0, iParam8);
		}
	}
}

void func_227(struct<12> Param0, int iParam12)
{
	Global_2405077.f_367[iParam12 /*12*/] = { Param0 };
	Global_2405077.f_367[iParam12 /*12*/].f_9 = 1;
}

int func_228(int iParam0)
{
	if (func_282(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_229(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar13;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (Global_2405077.f_45[iVar13 /*12*/].f_9 == 1)
		{
			if (!func_230(Global_2405077.f_45[iVar13 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar13++;
	}
	return 1;
}

int func_230(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam12)
	{
		if ((uParam12[iVar0 /*12*/])->f_9)
		{
			switch ((uParam12[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_233(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_231(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_233(Param0, Param0.f_6, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_231(Param0, Param0.f_3, *(uParam12[iVar0 /*12*/]), (uParam12[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 2:
					break;
				}
		}
		iVar0++;
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_231(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	fVar6 = (fParam9 * 0.7071068f);
	Var0 = { Param6 - Vector(fVar6, fVar6, fVar6) };
	Var3 = { Param6 + Vector(fVar6, fVar6, fVar6) };
	return func_232(Param0, Param3, Var0, Var3);
}

int func_232(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	if (((((Param0.x >= Param6.x && Param0.f_1 >= Param6.f_1) && Param0.f_2 >= Param6.f_2) && Param3.x <= Param9.x) && Param3.f_1 <= Param9.f_1) && Param3.f_2 <= Param9.f_2)
	{
		return 1;
	}
	return 0;
}

int func_233(struct<3> Param0, float fParam3, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	
	Var0 = { Param4 - Param0 };
	if ((SYSTEM::VMAG(Var0) + fParam3) < fParam7)
	{
		return 1;
	}
	return 0;
}

void func_234(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var3.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var3.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var3.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var3.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var3.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var3.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var3 };
}

int func_235(int iParam0)
{
	if (((func_238(iParam0, 1) || func_237(iParam0)) || func_188(iParam0, 0)) || func_236(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_236(int iParam0)
{
	if (!func_282(iParam0, 0, 1))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 2);
}

int func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

bool func_238(int iParam0, bool bParam1)
{
	if (func_242() != 0)
	{
		return func_228(iParam0) != 0;
	}
	return func_239(iParam0, bParam1, 0);
}

int func_239(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_240(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_240(int iParam0)
{
	return func_241(iParam0);
}

bool func_241(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_242()
{
	return Global_31345;
}

void func_243(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_244(Param0, 0f, 0f, 0f, fParam3, 0, iParam4, iParam6, iParam5, iParam7);
}

void func_244(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7, int iParam8, var uParam9, var uParam10, var uParam11)
{
	struct<12> Var0;
	
	if (func_235(PLAYER::PLAYER_ID()) || uParam9)
	{
		if (Global_2405077.f_1752)
		{
			func_206();
		}
		if (Var0.f_10 == 1)
		{
			func_234(&Param0, &Param3);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param3 };
		Var0.f_6 = uParam6;
		Var0.f_10 = iParam7;
		Var0.f_11 = uParam10;
		Var0.f_8 = uParam11;
		if (Var0.f_8 < 0f)
		{
			Var0.f_8 = 0f;
		}
		Global_2405077.f_45.f_64 = func_228(PLAYER::PLAYER_ID());
		func_245(Var0, iParam8);
	}
}

void func_245(struct<12> Param0, int iParam12)
{
	Global_2405077.f_45[iParam12 /*12*/] = { Param0 };
	Global_2405077.f_45[iParam12 /*12*/].f_9 = 1;
}

var func_246()
{
	return Global_2416162.f_1864;
}

int func_247()
{
	if (func_248(21))
	{
		return 1;
	}
	if (func_248(0))
	{
		return 1;
	}
	return 0;
}

bool func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = func_195(2482, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_249()
{
	if (!MISC::IS_BIT_SET(iLocal_226, 6))
	{
		if (((((((func_250(60000) && func_252() == 1) && Local_77.f_7 <= 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_282(PLAYER::PLAYER_ID(), 1, 1)) && !func_199()) && Local_77.f_16 != 5)
		{
			if (!func_247())
			{
				func_198("DCP_HELP1", -1);
			}
			MISC::SET_BIT(&iLocal_226, 6);
		}
	}
}

bool func_250(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413978, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_251()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_227))
	{
		if (func_247() || func_246())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_227, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(iLocal_227, 4);
		}
	}
	else
	{
		iLocal_227 = HUD::ADD_BLIP_FOR_RADIUS(Local_77.f_2, Local_77.f_5);
		HUD::SET_BLIP_COLOUR(iLocal_227, 50);
		HUD::SET_BLIP_ALPHA(iLocal_227, 220);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_227, false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_227, "DCP_BLIPN");
		if (func_247())
		{
			HUD::SET_BLIP_DISPLAY(iLocal_227, 0);
		}
	}
}

int func_252()
{
	return Local_77;
}

int func_253(int iParam0)
{
	return Local_97[iParam0 /*4*/];
}

bool func_254(int iParam0)
{
	return !func_255(iParam0);
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6831)
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6832)
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6833)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6834)
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 0) || MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_256(4))
			{
				return 0;
			}
			if (func_257(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_282(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2426865[iVar0 /*449*/].f_217, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_257(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

int func_258()
{
	var uVar0;
	
	func_265(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_264())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_263())
	{
		return 1;
	}
	if (func_262(159))
	{
		if (!func_261())
		{
			return 1;
		}
	}
	if (func_262(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_259() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_259()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_259()
{
	switch (func_242())
	{
		case 0:
			return func_260();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_260()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_261()
{
	return Global_2453009.f_698;
}

int func_262(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_263()
{
	return Global_2463497;
}

bool func_264()
{
	return Global_2453009.f_693;
}

void func_265(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -771178269:
					func_266(iVar0);
					break;
				
				case -1320260596:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == -2138305833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_266(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_282(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_267(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_267(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_268()
{
	SYSTEM::WAIT(0);
}

void func_269()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_227))
	{
		HUD::REMOVE_BLIP(&iLocal_227);
	}
	if (MISC::IS_BIT_SET(Local_77.f_1, 1))
	{
		func_79(12, "DSC_FAIL", 0, 0, -99);
	}
	func_201();
	func_271(16, 0);
	MISC::SET_BIT(&(Global_2544210.f_4659), 0);
	func_270();
}

void func_270()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_271(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_217, iParam0))
		{
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_217), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_217, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_217), iParam0);
	}
}

void func_272(struct<21> Param0)
{
	func_278(func_279(Param0), Param0);
	func_276(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_77, 20);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 129);
	if (!func_275())
	{
		func_269();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_273();
		}
		func_271(16, 1);
		Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = 0;
	}
	else
	{
		func_269();
	}
}

void func_273()
{
	Local_77.f_2 = { func_274() };
	Local_77.f_5 = 200f;
	Local_77.f_6 = 180f;
}

Vector3 func_274()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 10))
	{
		case 0:
			return 1440f, -2135f, 60f;
		
		case 1:
			return 233f, -1725f, 30f;
		
		case 2:
			return -403f, -1207f, 38f;
		
		case 3:
			return -1060f, -1028f, 3f;
		
		case 4:
			return -2152f, -329f, 14f;
		
		case 5:
			return -1651f, 214f, 61f;
		
		case 6:
			return -527f, 662f, 142f;
		
		case 7:
			return -27f, -747f, 45f;
		
		case 8:
			return 1292f, -649f, 68f;
		
		case 9:
			return 978f, -3143f, 6f;
		
		default:
	}
	return 978f, -3143f, 6f;
}

int func_275()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_264())
		{
			return 0;
		}
		if (func_262(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_276(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_270();
			}
			else
			{
				return 0;
			}
		}
		if (!func_277())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_270();
					}
					else
					{
						return 0;
					}
				}
				if (func_264())
				{
					if (!bParam2)
					{
						func_270();
					}
					else
					{
						return 0;
					}
				}
				if (func_262(157))
				{
					if (!bParam2)
					{
						func_270();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_270();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_270();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_270();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_277()
{
	return Global_1312878;
}

void func_278(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_270();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 153:
			return 32;
		
		case 154:
			return 32;
		
		case 143:
			return 32;
		
		case 144:
			return 32;
		
		case 148:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 155:
			return 32;
		
		case 156:
			return 32;
		
		case 157:
			return 32;
		
		case 158:
			return 32;
		
		case 159:
			return 2;
		
		case 164:
			return 1;
		
		case 160:
			return 2;
		
		case 161:
			return 4;
		
		case 162:
			return 2;
		
		case 163:
			return 2;
		
		case 145:
			return 1;
		
		case 165:
			return 2;
		
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 0;
		
		case 187:
			return 1;
		
		case 172:
			return 4;
		
		case 175:
			return 4;
		
		case 176:
			return 1;
		
		case 177:
			return 1;
		
		case 183:
			return 1;
		
		case 179:
			return 2;
		
		case 184:
			return 1;
		
		case 180:
			return 1;
		
		case 178:
			return 2;
		
		case 181:
			return 8;
		
		case 182:
			return 8;
		
		case 185:
			return 1;
		
		case 186:
			return 2;
		
		case 173:
			return 16;
		
		case 174:
			return 32;
		
		default:
	}
	switch (func_280(func_281(iParam0, 1)))
	{
		case 0:
			return 8;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		default:
	}
	return 0;
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

int func_281(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 159:
			return 15;
		
		case 166:
			return 8;
		
		case 160:
			return 14;
		
		case 164:
			return 122;
		
		case 167:
			return 1;
		
		case 165:
			return 5;
		
		case 168:
			return 6;
		
		case 161:
			return 11;
		
		case 169:
			return 0;
		
		case 170:
			return 2;
		
		case 162:
			return 13;
		
		case 171:
			return 3;
		
		case 163:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case joaat("mpsv_lp0_31"):
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 87:
			return 182;
		
		case 88:
			return 183;
		
		case 89:
			return 185;
		
		case 90:
			return 186;
		
		case 91:
			return 190;
		
		case 92:
			return 191;
		
		case 93:
			return 192;
		
		case 94:
			return 193;
		
		case 102:
			return 205;
		
		case 95:
			return 194;
		
		case 96:
			return 197;
		
		case 97:
			return 198;
		
		case 99:
			return 199;
		
		case 100:
			return 200;
		
		case 101:
			return 201;
		
		case 103:
			return 207;
		
		case 104:
			return 208;
		
		case 105:
			return 209;
		
		case 106:
			return 210;
		
		case 98:
			return 195;
		
		case 107:
			return 225;
		
		case 108:
			return 226;
		
		case 109:
			return 227;
		
		case 110:
			return 229;
		
		case 111:
			return 230;
		
		case 113:
			return 233;
		
		case 115:
			return 237;
		
		case 116:
			return 238;
		
		case 117:
			return 239;
		
		case 118:
			return 240;
		
		case 119:
			return 241;
		
		case 120:
			return 242;
		
		case 121:
			return 244;
		
		case 122:
			return 248;
		
		case 123:
			return 249;
		
		case 124:
			return 250;
		
		case 125:
			return 243;
		
		case 126:
			return 158;
		
		case 86:
			return 181;
		
		case 127:
			return 150;
		
		case 128:
			return 24;
		
		case 129:
			return 26;
		
		case 130:
			return 256;
		
		case 131:
			return 258;
		
		case 133:
			return 259;
		
		case 134:
			return 271;
		
		case 135:
			return 273;
		
		case 136:
			return 276;
		
		case 137:
			return 277;
		
		case 138:
			return 269;
		
		case 139:
			return 270;
		
		case 140:
			return 275;
		
		default:
	}
	if (bParam1)
	{
	}
	return 281;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

