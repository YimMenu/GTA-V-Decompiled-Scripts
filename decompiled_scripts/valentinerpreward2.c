#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	struct<4> Local_11 = { 0, 0, 0, 0 } ;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	struct<3> Local_27 = { 0, 0, 0 } ;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = 0;
	var uLocal_36[3] = { 0, 0, 0 };
	int iLocal_37[3] = { 0, 0, 0 };
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46[3] = { 0, 0, 0 };
	struct<2> Local_47[3];
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	struct<3> Local_57 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_62[2] = { 0, 0 };
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	struct<2> Local_66[5];
	int iLocal_67 = 0;
	char* sLocal_68 = NULL;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.49.18";
	iLocal_29 = -1;
	iLocal_30 = -1;
	iLocal_45 = -1;
	sLocal_68 = "";
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_79 == iScriptParam_79)
	{
	}
	Global_1315809 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_274())
		{
			func_272();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2458936.f_3)
		{
			func_262();
			func_254();
			func_251();
			func_232();
			func_231();
			func_230();
			func_227();
			func_225();
			func_224();
			func_223();
			func_221();
			func_210();
			func_208();
			func_206();
			func_204();
			func_201();
			func_196();
			func_193();
			func_187();
			func_183();
			func_178();
			func_175();
			func_172();
			func_168();
			func_120();
			func_114();
			func_107();
			func_106();
			func_99();
			func_98();
			func_96();
			func_83();
			func_81();
			func_79();
			func_69();
			func_64();
			func_44();
			func_42();
			if (MISC::IS_PC_VERSION())
			{
				func_37();
			}
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_36();
		}
		func_2();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (MISC::IS_BIT_SET(Global_1312425, 0) && Global_1312425.f_1 == 2)
	{
		if (!iLocal_67)
		{
			Global_1312371 = 1;
			iLocal_67 = 1;
		}
	}
	else if (iLocal_67)
	{
		iLocal_67 = 0;
	}
}

void func_2()
{
	int iVar0;
	
	Global_1391799.f_719 = 1;
	Global_1391799.f_720 = 1;
	Global_1391799.f_718 = 1;
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) == PLAYER::PLAYER_ID())
		{
			func_32();
		}
		else if (iLocal_48)
		{
			func_30();
			iLocal_48 = 0;
		}
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(0);
		if (func_29(iVar0, 0, 1))
		{
			if (iVar0 != PLAYER::PLAYER_ID())
			{
				if (iLocal_49)
				{
					if (!func_18(PLAYER::PLAYER_ID(), 1) || !func_17(iVar0))
					{
						func_4(0, PLAYER::PLAYER_ID());
						iLocal_49 = 0;
					}
				}
				else if (func_18(PLAYER::PLAYER_ID(), 0))
				{
					if (func_17(iVar0))
					{
						if (func_3())
						{
							func_4(1, PLAYER::PLAYER_ID());
							iLocal_49 = 1;
						}
					}
					else if ((MISC::GET_FRAME_COUNT() % 30) == 0)
					{
					}
				}
			}
		}
		else if (iLocal_49)
		{
			iLocal_49 = 0;
		}
	}
	else
	{
		iLocal_49 = 0;
		iLocal_48 = 0;
		iLocal_45 = -1;
	}
}

int func_3()
{
	int iVar0;
	
	if (iLocal_45 == -1)
	{
		return 1;
	}
	iVar0 = 15;
	while (iVar0 <= 17)
	{
		if (Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_1[iVar0] == 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_4(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0 = -1884218406;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		Var0.f_2 = func_10(func_11(iParam1));
	}
	else
	{
		Var0.f_2 = 0;
	}
	Var0.f_3 = { func_9() };
	iVar1 = func_5(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar1);
	}
}

int func_5(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_29(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_6(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_6(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_7(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
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

int func_7(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_8();
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

int func_8()
{
	return Global_1312745;
}

struct<2> func_9()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	Var0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_1 = 0;
	MISC::SET_BIT(&(Var0.f_1), PLAYER::PLAYER_ID());
	return Var0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 714;
		
		case 129:
			return 715;
		
		case 130:
			return 716;
		
		case 131:
			return 717;
		
		case 132:
			return 718;
		
		case 133:
			return 719;
		
		default:
	}
	return 0;
}

int func_11(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_16())
	{
		iVar0 = func_15(iParam0);
		if (iVar0 != 0)
		{
			return func_12(iVar0);
		}
	}
	return -1;
}

int func_12(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 17)
		{
			if (func_13(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 128:
			return 1;
		
		case 129:
			return 2;
		
		case 130:
			return 3;
		
		case 131:
			return 4;
		
		case 132:
			return 5;
		
		case 133:
			return 6;
		
		default:
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
	}
	return -1;
}

int func_15(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_393;
	}
	return 0;
}

int func_16()
{
	return -1;
}

int func_17(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1628237[iParam0 /*615*/].f_11 != func_16())
		{
			return Global_1628237[iParam0 /*615*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_29(iParam0, 0, 1))
	{
		iVar0 = -1;
		if (func_27(iParam0) == 158)
		{
			iVar0 = func_26();
			if (func_25(iVar0))
			{
				return 1;
			}
		}
		iVar0 = func_24(iParam0);
		if (func_25(iVar0))
		{
			return 1;
		}
		if (func_27(iParam0) == 243)
		{
			iVar1 = func_26();
			if (func_23(iVar1))
			{
				return 1;
			}
		}
		iVar1 = func_19(iParam0);
		if (func_23(iVar1))
		{
			return 1;
		}
		if (bParam1)
		{
		}
	}
	else if (bParam1)
	{
	}
	return 0;
}

int func_19(int iParam0)
{
	if (func_22(iParam0) == 243)
	{
		return func_20(iParam0);
	}
	return -1;
}

int func_20(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_181;
	}
	return -1;
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_22(int iParam0)
{
	if (func_21(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_33;
	}
	return -1;
}

int func_23(int iParam0)
{
	if ((((iParam0 == 14 || iParam0 == 5) || iParam0 == 0) || iParam0 == 3) || iParam0 == 2)
	{
		return 1;
	}
	return 0;
}

int func_24(int iParam0)
{
	if (func_22(iParam0) == 158)
	{
		return func_20(iParam0);
	}
	return -1;
}

int func_25(int iParam0)
{
	if (((((((((((iParam0 == 0 || iParam0 == 4) || iParam0 == 2) || iParam0 == 1) || iParam0 == 3) || iParam0 == 30) || iParam0 == 31) || iParam0 == 32) || iParam0 == 28) || iParam0 == 29) || iParam0 == 52) || iParam0 == 37)
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	return Global_2537071.f_5124.f_339;
}

int func_27(int iParam0)
{
	if (func_28(iParam0, 0))
	{
		return Global_1628237[iParam0 /*615*/].f_11.f_32;
	}
	return -1;
}

int func_28(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0 /*615*/].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0 /*615*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2439138.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_46[iVar0] = 0;
		Local_47[iVar0 /*2*/] = { func_31() };
		iVar0++;
	}
}

struct<2> func_31()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	return Var0;
}

void func_32()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_45 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar0 /*57*/] == PLAYER::INT_TO_PLAYERINDEX(0))
			{
				iLocal_45 = iVar0;
				func_33();
				return;
			}
			iVar0++;
		}
	}
	else
	{
		if (Global_2419327.f_199.f_674[iLocal_45 /*57*/] != PLAYER::INT_TO_PLAYERINDEX(0))
		{
			iLocal_45 = -1;
			return;
		}
		func_33();
		if (iLocal_48)
		{
			iVar0 = 15;
			while (iVar0 <= 17)
			{
				iVar1 = (iVar0 - 15);
				if (iLocal_46[iVar1] != 0 && Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_1[iVar0] != iLocal_46[iVar1])
				{
					Global_2419327.f_199.f_674[iLocal_45 /*57*/] = PLAYER::INT_TO_PLAYERINDEX(0);
					Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_1[iVar0] = iLocal_46[iVar1];
					Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_20[iVar0 /*2*/] = { Local_47[iVar1 /*2*/] };
				}
				iVar0++;
			}
		}
	}
}

void func_33()
{
	if (!iLocal_48)
	{
		iLocal_48 = func_34();
	}
}

int func_34()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_45 == -1)
	{
		return 0;
	}
	iVar0 = 15;
	while (iVar0 <= 17)
	{
		iVar1 = (iVar0 - 15);
		iLocal_46[iVar1] = Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_1[iVar0];
		Local_47[iVar1 /*2*/] = { Global_2419327.f_199.f_674[iLocal_45 /*57*/].f_20[iVar0 /*2*/] };
		iVar0++;
	}
	return 1;
}

char* func_35()
{
	return "freemode";
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (Global_4456448.f_232883 != 60)
	{
		iLocal_44 = 0;
		iLocal_43 = -1;
		return;
	}
	if (Global_1312792)
	{
		if (iLocal_43 >= 31)
		{
			iLocal_43 = -1;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				if (MISC::IS_BIT_SET(iLocal_44, iVar0))
				{
					Global_4456448.f_195397[iVar0 /*57*/].f_10 = 20;
				}
				iVar0++;
			}
		}
		iLocal_43++;
		if (iLocal_43 == 30)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 31)
			{
				if (Global_4456448.f_195397[iVar1 /*57*/].f_10 == 20)
				{
					MISC::SET_BIT(&iLocal_44, iVar1);
					Global_4456448.f_195397[iVar1 /*57*/].f_10 = 999;
				}
				iVar1++;
			}
		}
	}
	else
	{
		iLocal_44 = 0;
		iLocal_43 = -1;
	}
}

void func_37()
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_57 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (!func_41(Local_57))
	{
		fVar0 = SYSTEM::VDIST2(func_40(iLocal_55), Local_57);
		fVar1 = SYSTEM::VDIST2(func_40(iLocal_54), Local_57);
		if (fVar0 < fVar1)
		{
			iLocal_54 = iLocal_55;
			fVar1 = fVar0;
		}
		if (iLocal_59 && fVar1 < 2.5f)
		{
			if (!func_39(iLocal_54))
			{
				func_38(iLocal_54);
			}
		}
		if (func_39(iLocal_54) || fVar1 > 2.5f)
		{
			if (!iLocal_58)
			{
				OBJECT::_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(joaat("vw_prop_vw_lux_card_01a"), false);
				iLocal_58 = 1;
			}
		}
		else if (iLocal_58)
		{
			OBJECT::_SET_LOCAL_PLAYER_CAN_USE_PICKUPS_WITH_THIS_MODEL(joaat("vw_prop_vw_lux_card_01a"), true);
			iLocal_58 = 0;
		}
		iLocal_55 = (iLocal_55 + 1 % 54);
	}
	iLocal_59 = 0;
}

void func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_56[iVar0]), iVar1);
}

bool func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(uLocal_56[iVar0], iVar1);
}

Vector3 func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1992.183f, 3046.28f, 47.125f;
		
		case 1:
			return 120.38f, -1297.669f, 28.705f;
		
		case 2:
			return 79.293f, 3704.578f, 40.945f;
		
		case 3:
			return 2937.738f, 5325.846f, 100.176f;
		
		case 4:
			return 727.153f, 4189.818f, 40.476f;
		
		case 5:
			return -103.14f, 369.008f, 112.267f;
		
		case 6:
			return 99.959f, 6619.539f, 32.314f;
		
		case 7:
			return -282.6689f, 6226.274f, 31.3554f;
		
		case 8:
			return 1707.556f, 4921.021f, 41.865f;
		
		case 9:
			return -1581.86f, 5204.295f, 3.9093f;
		
		case 10:
			return 10.8264f, -1101.157f, 29.613f;
		
		case 11:
			return 1690.043f, 3589.014f, 35.5883f;
		
		case 12:
			return 1159.144f, -316.5876f, 69.5134f;
		
		case 13:
			return 2341.807f, 2571.737f, 47.6079f;
		
		case 14:
			return -3048.193f, 585.2986f, 7.7708f;
		
		case 15:
			return -3149.707f, 1115.83f, 20.7216f;
		
		case 16:
			return -1840.641f, -1235.319f, 13.2937f;
		
		case 17:
			return 810.6056f, -2978.741f, 5.8116f;
		
		case 18:
			return 202.2747f, -1645.225f, 29.7679f;
		
		case 19:
			return 253.2056f, 215.9778f, 106.2848f;
		
		case 20:
			return -1166.183f, -233.9277f, 38.262f;
		
		case 21:
			return 729.9886f, 2514.713f, 73.1663f;
		
		case 22:
			return 188.1851f, 3076.332f, 43.0447f;
		
		case 23:
			return 3687.914f, 4569.073f, 24.9397f;
		
		case 24:
			return 1876.975f, 6410.034f, 46.5982f;
		
		case 25:
			return 2121.146f, 4784.687f, 40.8114f;
		
		case 26:
			return 900.0845f, 3558.156f, 33.6258f;
		
		case 27:
			return 2695.272f, 4324.496f, 45.6516f;
		
		case 28:
			return -1829.428f, 798.4049f, 138.0583f;
		
		case 29:
			return -1203.725f, -1558.866f, 4.1736f;
		
		case 30:
			return -73.2829f, -2005.476f, 18.2561f;
		
		case 31:
			return -1154.201f, -527.2959f, 31.7117f;
		
		case 32:
			return 990.0786f, -1800.391f, 31.3781f;
		
		case 33:
			return 827.5513f, -2158.744f, 29.417f;
		
		case 34:
			return -1512.08f, -103.625f, 54.2027f;
		
		case 35:
			return -970.7493f, 104.3396f, 55.0431f;
		
		case 36:
			return -428.6815f, 1213.905f, 325.9329f;
		
		case 37:
			return -167.8387f, -297.1122f, 39.0353f;
		
		case 38:
			return 2747.322f, 3465.12f, 55.6336f;
		
		case 39:
			return -1103.659f, 2714.689f, 19.4539f;
		
		case 40:
			return 549.4841f, -189.3053f, 54.4369f;
		
		case 41:
			return -1287.689f, -1118.818f, 6.3057f;
		
		case 42:
			return 1131.428f, -982.0297f, 46.6521f;
		
		case 43:
			return -1028.083f, -2746.936f, 13.3589f;
		
		case 44:
			return -538.5779f, -1278.542f, 26.3437f;
		
		case 45:
			return 1326.449f, -1651.263f, 52.0964f;
		
		case 46:
			return 183.3252f, -685.2661f, 42.607f;
		
		case 47:
			return 1487.846f, 1129.2f, 114.3005f;
		
		case 48:
			return -2305.538f, 3387.973f, 31.0201f;
		
		case 49:
			return -522.632f, 4193.459f, 193.7517f;
		
		case 50:
			return -748.9897f, 5599.534f, 41.5794f;
		
		case 51:
			return -288.0628f, 2545.21f, 74.4223f;
		
		case 52:
			return 2565.326f, 296.8703f, 108.7367f;
		
		case 53:
			return -408.2484f, 585.783f, 124.378f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_41(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_42()
{
	if (func_43())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::DISABLE_CONTROL_ACTION(0, 104, true);
		PAD::DISABLE_CONTROL_ACTION(0, 54, true);
	}
	if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
	{
		if (func_14(Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_5) == 11)
		{
			Global_1687648 = 1;
		}
	}
}

bool func_43()
{
	return Global_1676377.f_474;
}

void func_44()
{
	struct<2> Var0;
	
	if (func_63())
	{
		if (func_61(PLAYER::PLAYER_ID()))
		{
			if (func_60() || bLocal_78)
			{
				Var0 = { func_58(Global_1681961.f_4706.f_2) };
				if (func_51(Var0))
				{
					if (bLocal_78)
					{
						func_45(0);
					}
				}
				else if (!bLocal_78)
				{
					func_45(1);
				}
			}
		}
		else if (bLocal_78)
		{
			func_45(0);
		}
	}
	else if (bLocal_78)
	{
		func_45(0);
	}
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		Global_1681961.f_4706.f_2 = 702;
		func_46(702, 1);
	}
	else
	{
		func_46(702, 0);
		if (Global_1681961.f_4706.f_2 == 702)
		{
			Global_1681961.f_4706.f_2 = 0;
		}
	}
	bLocal_78 = bParam0;
}

void func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 0 || !func_47(iParam0))
		{
			return;
		}
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1681961.f_4601[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1681961.f_4601[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1681961.f_4601[iVar0] == iParam0)
		{
			Global_1681961.f_4601[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1681961.f_4601[iVar1] = iParam0;
		}
	}
}

bool func_47(int iParam0)
{
	return func_48(iParam0, PLAYER::PLAYER_ID());
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_16() && func_29(iParam1, 0, 1))
	{
		if (Global_1681961.f_4706.f_2 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_50(iParam1, 1))
			{
				iVar0 = func_49(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2419327.f_199.f_674[iVar1 /*57*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1628237[iParam0 /*615*/].f_11;
	}
	return func_16();
}

bool func_50(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_17(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0 /*615*/].f_11 != func_16();
}

int func_51(struct<2> Param0)
{
	int iVar0;
	struct<2> Var1;
	
	if (!func_57(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			Var1 = { func_53(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) };
			if (func_52(Var1, Param0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_52(struct<2> Param0, struct<2> Param1)
{
	if (!func_57(Param0))
	{
		return 0;
	}
	if (Param0 == Param1 && Param0.f_1 == Param1.f_1)
	{
		return 1;
	}
	return 0;
}

struct<2> func_53(struct<2> Param0)
{
	int iVar0;
	struct<2> Var1;
	
	iVar0 = func_54(Param0);
	if (iVar0 < 0 || iVar0 >= 48)
	{
		Var1 = -1;
		Var1.f_1 = -1000;
		return Var1;
	}
	return Global_2419327.f_199.f_1[iVar0 /*14*/].f_11;
}

int func_54(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_55(Param0, Global_2419327.f_199.f_1[iVar0 /*14*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_55(struct<2> Param0, struct<2> Param1)
{
	if (Param0.f_1 != -1 && Param1.f_1 != -1)
	{
		return (Param0 == Param1 && Param0.f_1 == Param1.f_1);
	}
	return 0;
}

bool func_56(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_16());
}

int func_57(struct<2> Param0)
{
	if (Param0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<2> func_58(int iParam0)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Var0 = -1;
	Var0.f_1 = -1000;
	if (iParam0 != 0)
	{
		if (Global_1681961.f_4706.f_2 == iParam0)
		{
			return Global_1681961.f_4706;
		}
		iVar3 = func_59();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar1 /*57*/] == iVar3)
			{
				iVar2 = 0;
				while (iVar2 < 18)
				{
					if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == iParam0)
					{
						return Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/];
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	return Var0;
}

int func_59()
{
	return Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11;
}

int func_60()
{
	if ((((((Global_1681961.f_4706.f_2 == 752 || Global_1681961.f_4706.f_2 == 750) || Global_1681961.f_4706.f_2 == 753) || Global_1681961.f_4706.f_2 == 751) || Global_1681961.f_4706.f_2 == 754) || Global_1681961.f_4706.f_2 == 749) || Global_1681961.f_4706.f_2 == 755)
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0)
{
	return func_62(iParam0) > 0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_16())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_56(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_63()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_content_drug_vehicle")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_content_movie_props")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_64()
{
	Global_1676377.f_4241.f_4 = -1;
	if (func_68(PLAYER::PLAYER_ID()))
	{
		Global_1676377.f_4241.f_4 = 81;
	}
	if (func_67(PLAYER::PLAYER_ID()))
	{
		Global_1676377.f_4241.f_4 = 88;
	}
	if (func_66(PLAYER::PLAYER_ID()))
	{
		Global_1676377.f_4241.f_4 = 117;
	}
	if ((Global_1676377.f_4241.f_4 == 81 || Global_1676377.f_4241.f_4 == 88) || Global_1676377.f_4241.f_4 == 117)
	{
		if (Global_1676377.f_4241.f_2 == 6)
		{
			if ((HUD::IS_WARNING_MESSAGE_ACTIVE() || func_65()) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				NETWORK::NETWORK_BAIL(0, 0, 0);
			}
		}
	}
}

bool func_65()
{
	return (Global_1312762[0] > 0 || Global_1312762[1] > 0);
}

int func_66(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

void func_69()
{
	if (func_78())
	{
		func_77(&uLocal_76, 1, 0);
	}
	if (func_75())
	{
		if (!iLocal_73)
		{
			Global_262145.f_12655 = 1;
			Global_262145.f_12656 = 1;
			Global_262145.f_12657 = 1;
			Global_262145.f_12658 = 1;
			Global_262145.f_12659 = 1;
			Global_262145.f_12660 = 1;
			Global_262145.f_12661 = 1;
			Global_262145.f_12662 = 1;
			if (func_78())
			{
				Global_2439138.f_1156.f_16 = 1;
				iLocal_72 = 1;
			}
			else if (!func_74(&uLocal_76, 1000, 1))
			{
				iLocal_72 = 1;
			}
			iLocal_73 = 1;
		}
		if (func_78() && func_73())
		{
			Global_2439138.f_1156.f_16 = 1;
		}
	}
	else if (iLocal_73)
	{
		Global_262145.f_12655 = 0;
		Global_262145.f_12656 = 0;
		Global_262145.f_12657 = 0;
		Global_262145.f_12658 = 0;
		Global_262145.f_12659 = 0;
		Global_262145.f_12660 = 0;
		Global_262145.f_12661 = 0;
		Global_262145.f_12662 = 0;
		if (func_78())
		{
			Global_2439138.f_1156.f_16 = 1;
		}
		iLocal_73 = 0;
	}
	if (iLocal_72)
	{
		Global_1668055.f_44 = 1;
		if (!func_72(&uLocal_74))
		{
			func_71(&uLocal_74, 1, 0);
		}
		if ((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_74(&uLocal_74, 2000, 1))
		{
			Global_1668055.f_44 = 0;
			iLocal_72 = 0;
			func_70(&uLocal_74);
		}
	}
}

void func_70(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)
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

bool func_72(var uParam0)
{
	return uParam0->f_1;
}

var func_73()
{
	return Global_1694146;
}

int func_74(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
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

int func_75()
{
	if (!func_76(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_274.f_28)
	{
		case 83:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.2475f, 320.8778f, 186.3198f, -797.2629f, 328.7055f, 189.591f, 6.6875f, false, true, 0);
			break;
		
		case 84:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.5227f, 320.9101f, 216.0381f, -797.2699f, 328.7055f, 219.3134f, 6.6875f, false, true, 0);
			break;
		
		case 85:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -763.4833f, 329.0945f, 195.0859f, -763.2568f, 336.8706f, 198.3614f, 6.6875f, false, true, 0);
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_77(var uParam0, bool bParam1, bool bParam2)
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

int func_78()
{
	if (Global_2439138.f_1156.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_79()
{
	if (func_80(PLAYER::PLAYER_ID()))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1103.419f, -2998.19f, -40.24769f, 1103.509f, -2989.99f, -35.66475f, 5.75f, false, true, 0))
		{
			if (!iLocal_71)
			{
				Global_262145.f_20988 = 1;
				iLocal_71 = 1;
			}
		}
		else if (iLocal_71)
		{
			Global_262145.f_20988 = 0;
			iLocal_71 = 0;
		}
	}
	else if (iLocal_71)
	{
		Global_262145.f_20988 = 0;
		iLocal_71 = 0;
	}
}

int func_80(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1 && Global_2425662[iParam0 /*421*/].f_310.f_8 != func_16())
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

void func_81()
{
	switch (iLocal_70)
	{
		case 0:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_content_business_battles")) > 0)
			{
				sLocal_68 = "fm_content_business_battles";
				iLocal_70 = 1;
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("business_battles")) > 0)
			{
				sLocal_68 = "BUSINESS_BATTLES";
				iLocal_70 = 1;
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sLocal_68, -1, false, 0))
			{
				if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(sLocal_68, -1, 0) != func_16())
				{
					if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(sLocal_68, -1, 0) == PLAYER::PLAYER_ID())
					{
						iLocal_69 = 1;
						Global_1681961.f_4551 = 1;
						iLocal_70 = 2;
					}
					else
					{
						iLocal_70 = 3;
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sLocal_68)) <= 0)
			{
				iLocal_69 = 0;
				iLocal_70 = 0;
			}
			break;
		
		case 2:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sLocal_68)) <= 0)
			{
				if (iLocal_69)
				{
					Global_1681961.f_4551 = 0;
				}
				iLocal_69 = 0;
				iLocal_70 = 0;
			}
			if (func_82(sLocal_68))
			{
				if (iLocal_69)
				{
					Global_1681961.f_4551 = 0;
					iLocal_69 = 0;
				}
				iLocal_70 = 3;
			}
			break;
		
		case 3:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sLocal_68)) <= 0)
			{
				iLocal_69 = 0;
				iLocal_70 = 0;
			}
			break;
	}
}

int func_82(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::GET_HASH_KEY(sParam0) == joaat("fm_content_business_battles"))
	{
		iVar1 = 0;
		while (iVar1 < 48)
		{
			if (Global_2419327.f_199.f_1[iVar1 /*14*/].f_11 == joaat("fm_content_business_battles"))
			{
				iVar0++;
				if (iVar0 == 8)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 48)
		{
			if (Global_2419327.f_199.f_1[iVar1 /*14*/].f_11 == joaat("business_battles"))
			{
				iVar0++;
				if (iVar0 == 2)
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

void func_83()
{
	int iVar0;
	
	if (PLAYER::PLAYER_ID() > -1 && Global_1647918[PLAYER::PLAYER_ID() /*85*/].f_29.f_3 != 0)
	{
		if (func_95(PLAYER::PLAYER_ID()))
		{
			func_93();
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) && func_91(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
				{
					if (!func_55(Local_66[iVar0 /*2*/], Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
					{
						Local_66[iVar0 /*2*/] = { Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/] };
					}
					iLocal_65 = 1;
				}
				else if (func_56(Local_66[iVar0 /*2*/]))
				{
					Local_66[iVar0 /*2*/].f_1 = -1;
					Local_66[iVar0 /*2*/] = func_16();
					if (!func_90())
					{
						iLocal_65 = 0;
					}
				}
				iVar0++;
			}
		}
		else if (iLocal_65)
		{
			func_89();
			iLocal_65 = 0;
		}
	}
	else if (iLocal_65)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (((func_56(Local_66[iVar0 /*2*/]) && !func_88(Local_66[iVar0 /*2*/])) && func_87(Local_66[iVar0 /*2*/])) && func_86(Local_66[iVar0 /*2*/]) != 2)
			{
				func_84(Local_66[iVar0 /*2*/]);
			}
			iVar0++;
		}
		iLocal_65 = 0;
		func_89();
	}
}

void func_84(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 0);
	func_85(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

void func_85(var uParam0, var uParam1, char* sParam2)
{
}

int func_86(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/];
		}
		iVar0++;
	}
	return -1;
}

int func_87(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_88(struct<2> Param0)
{
	int iVar0;
	
	if (!func_56(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]) && func_55(Param0, Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_66[iVar0 /*2*/].f_1 = -1;
		Local_66[iVar0 /*2*/] = func_16();
		iVar0++;
	}
}

int func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_56(Local_66[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_91(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = func_92(Param0);
	switch (iVar0)
	{
		case 22:
			return 0;
			break;
	}
	return 1;
}

int func_92(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

void func_93()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/]))
		{
			iVar1 = iVar0 + 1;
			while (iVar1 <= 4)
			{
				if (func_55(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar0 /*2*/], Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]))
				{
					func_94(iVar1);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_94(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iParam0 /*2*/].f_1 = -1;
	Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iParam0 /*2*/] = func_16();
}

int func_95(int iParam0)
{
	if (iParam0 != func_16() && func_29(iParam0, 0, 1))
	{
		return MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_579, 0);
	}
	return 0;
}

void func_96()
{
	if (bLocal_63 && !iLocal_64)
	{
		if (MISC::IS_BIT_SET(Global_2451426.f_1.f_2809, 0))
		{
			MISC::CLEAR_BIT(&(Global_2451426.f_1.f_2809), 0);
		}
		iLocal_64 = 1;
	}
	bLocal_63 = func_97();
	if (iLocal_64 && !bLocal_63)
	{
		iLocal_64 = 0;
	}
}

bool func_97()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_98()
{
	Global_1694118 = 1;
}

void func_99()
{
	if (func_105(PLAYER::PLAYER_ID()))
	{
		if ((((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 == 0) && CAM::IS_SCREEN_FADED_IN()) && func_103()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (Global_4456448.f_194990 != 0 || Global_2450632.f_19)
			{
				func_100();
				Global_2450632.f_19 = 0;
			}
		}
	}
}

void func_100()
{
	if ((!func_102() && !func_101()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_101()
{
	return Global_2450632.f_591;
}

bool func_102()
{
	return Global_1590535[PLAYER::PLAYER_ID() /*876*/].f_196 != 0;
}

int func_103()
{
	if (func_104() == 0)
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	return Global_1312467.f_18;
}

int func_105(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

void func_106()
{
	if (func_80(PLAYER::PLAYER_ID()))
	{
		if (func_102())
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 16);
			}
		}
	}
}

void func_107()
{
	int iVar0;
	int iVar1;
	
	if (Global_2419327.f_199.f_1[iLocal_60 /*14*/].f_1.f_1 != -1 && Global_2419327.f_199.f_1[iLocal_60 /*14*/].f_1 == PLAYER::PLAYER_ID())
	{
		if (func_113(Global_2419327.f_199.f_1[iLocal_60 /*14*/].f_1))
		{
			if (iLocal_61[iLocal_60] != Global_2419327.f_199.f_1[iLocal_60 /*14*/].f_1.f_1)
			{
				iLocal_61[iLocal_60] = Global_2419327.f_199.f_1[iLocal_60 /*14*/].f_1.f_1;
				func_112(iLocal_60);
			}
		}
		else if (func_111(iLocal_60))
		{
			func_110(iLocal_60);
			iLocal_61[iLocal_60] = 0;
		}
	}
	else if (func_111(iLocal_60))
	{
		func_110(iLocal_60);
		iLocal_61[iLocal_60] = 0;
	}
	if ((uLocal_62[0] != 0 || uLocal_62[1] != 0) && Global_1681961.f_4714 == 0)
	{
		Global_1681961.f_4714 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			iVar1 = func_109(PLAYER::PLAYER_ID(), iVar0);
			if (func_108(iVar1))
			{
				MISC::SET_BIT(&(Global_1681961.f_4713), iVar0);
			}
			Global_1681961.f_4715[iVar0] = -1;
			iVar0++;
		}
	}
	iLocal_60 = (iLocal_60 + 1 % 48);
}

int func_108(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iParam0));
	return (iVar0 + iParam1);
}

void func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_62[iVar0]), iVar1);
}

bool func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(uLocal_62[iVar0], iVar1);
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_62[iVar0]), iVar1);
}

int func_113(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = func_92(Param0);
	switch (iVar0)
	{
		case 22:
		case 24:
			return 1;
			break;
	}
	return 0;
}

void func_114()
{
	if (func_119(PLAYER::PLAYER_ID()) || func_118(PLAYER::PLAYER_ID()))
	{
		func_115();
	}
}

void func_115()
{
	if (func_97() || func_117())
	{
		func_116();
		func_100();
	}
}

void func_116()
{
	Global_2450632.f_656 = 1;
}

var func_117()
{
	return Global_2450632.f_635;
}

int func_118(int iParam0)
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310, 7);
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_16())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_310.f_2, 31);
	}
	return 0;
}

void func_120()
{
	if (func_167(1) && func_61(PLAYER::PLAYER_ID()))
	{
		if (Global_1681961.f_4551)
		{
			if (!iLocal_53)
			{
				func_121(Global_1681961.f_4547, 0, 0, 0, func_166(PLAYER::PLAYER_ID()));
				iLocal_53 = 1;
			}
		}
		else
		{
			iLocal_53 = 0;
		}
	}
	else
	{
		iLocal_53 = 0;
	}
}

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4)
{
	struct<2> Var0;
	int iVar1;
	int iVar2[5];
	struct<2> Var3;
	var uVar4[5];
	bool bVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	struct<2> Var10;
	
	if (!func_164())
	{
		Var0 = { func_58(iParam0) };
		Var3 = { func_161(PLAYER::PLAYER_ID(), Var0) };
		bVar5 = func_56(Var3);
		uVar6 = func_47(iParam0);
		bVar7 = func_160(iParam0);
		bVar8 = func_159(Var3, iParam0);
		if (((bVar5 && uVar6) && !bVar7) && !bVar8)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]))
				{
					iVar2[iVar1] = (func_158(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]) - 1);
					uVar4[iVar1] = func_92(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]);
				}
				iVar1++;
			}
			bVar9 = func_157(Global_1681961.f_4706.f_2);
			if (func_155(PLAYER::PLAYER_ID(), Var0) && uParam4)
			{
				MISC::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579), 4);
				func_154(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1), &iVar2, iParam0, &uVar4, Var0, bVar9);
			}
			else
			{
				Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_12 = { Var3 };
				func_149(Var3, (func_158(Var3) - 1), iParam0, func_92(Var3), func_152(), bVar9);
			}
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (func_56(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]))
				{
					Var10 = { func_53(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/]) };
					if (func_52(Var10, Var0))
					{
						func_123(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_1[iVar1 /*2*/], iParam0, iVar2[iVar1], bParam1, bParam2, bParam3);
					}
				}
				iVar1++;
			}
			func_122();
			Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_15 = iParam0;
			Global_1681961.f_4709 = { Var0 };
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_122()
{
	func_70(&(Global_1681961.f_4620));
	func_71(&(Global_1681961.f_4620), 0, 0);
}

void func_123(struct<2> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 > 0)
	{
		if (iParam1 <= 11)
		{
			if (bParam3)
			{
				if (func_92(Param0) == 1 || func_92(Param0) == 3)
				{
					func_127(iParam1, func_59());
				}
			}
		}
		else if ((iParam1 >= 377 && iParam1 <= 381) || (iParam1 >= 684 && iParam1 <= 693))
		{
			if (bParam3)
			{
				iVar0 = func_59();
				if (!func_126(PLAYER::PLAYER_ID(), Param0))
				{
					if (func_59() == func_16())
					{
						iVar0 = PLAYER::PLAYER_ID();
					}
				}
				func_127(iParam1, iVar0);
			}
		}
		else if (iParam1 >= 675 && iParam1 <= 683)
		{
			if (bParam3)
			{
				iVar1 = func_59();
				if (!func_126(PLAYER::PLAYER_ID(), Param0))
				{
					if (func_59() == func_16())
					{
						iVar1 = PLAYER::PLAYER_ID();
					}
				}
				func_127(iParam1, iVar1);
				if (iParam2 <= 0)
				{
					if (bParam4)
					{
						func_125(Param0);
					}
					else if (bParam5)
					{
						func_124(Param0);
					}
				}
			}
		}
		else if (iParam2 <= 0)
		{
			if (bParam4)
			{
				func_125(Param0);
			}
			else if (bParam5)
			{
				func_124(Param0);
			}
		}
	}
}

void func_124(struct<2> Param0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_2.f_1 = -1;
	Var0.x = 157842321;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = func_5(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

void func_125(struct<2> Param0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_2.f_1 = -1;
	Var0.x = -315200433;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	iVar1 = func_5(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iVar1);
	}
}

int func_126(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_49(iParam0);
	if (!iVar0 == func_16())
	{
		if (iVar0 == func_49(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 > 0)
	{
		if (iParam0 <= 11)
		{
			iVar0 = func_146(func_148(iParam1));
		}
		else if (iParam0 >= 377 && iParam0 <= 381)
		{
			iVar0 = func_143(func_145(iParam1));
			func_137(iParam1);
		}
		else if (iParam0 >= 675 && iParam0 <= 683)
		{
			iVar0 = func_134(func_136(iParam1));
		}
		else if (iParam0 >= 684 && iParam0 <= 693)
		{
			iVar0 = func_131(func_133(iParam1));
		}
		else if ((iParam0 == 704 || iParam0 == 705) || iParam0 == 711)
		{
			iVar0 = 123;
		}
		else if (iParam0 >= 714 && iParam0 <= 725)
		{
			func_129(2);
			iVar0 = func_12(func_15(iParam1));
		}
		else if (iParam0 == 755)
		{
			iVar0 = 145;
		}
	}
	else if (iParam0 == 0)
	{
	}
	if (iVar0 != -1)
	{
		Global_1676377.f_460 = -1;
		func_128(1);
		Global_1676377.f_3326 = iVar0;
		Global_1676377.f_3327 = 0;
		Global_1676377.f_3332 = 1;
		Global_1676377.f_3014 = iParam1;
	}
}

void func_128(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1676377.f_3325)
		{
			Global_1676377.f_3325 = 1;
		}
	}
	else if (Global_1676377.f_3325)
	{
		Global_1676377.f_3325 = 0;
	}
}

void func_129(int iParam0)
{
	if (!func_130())
	{
		return;
	}
	Global_2425662[PLAYER::PLAYER_ID() /*421*/].f_310.f_24 = iParam0;
}

bool func_130()
{
	return !MISC::IS_BIT_SET(Global_1676377.f_5, 4);
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 11)
		{
			if (func_132(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 102:
			return 1;
		
		case 103:
			return 2;
		
		case 104:
			return 3;
		
		case 105:
			return 4;
		
		case 106:
			return 5;
		
		case 107:
			return 6;
		
		case 108:
			return 7;
		
		case 109:
			return 8;
		
		case 110:
			return 9;
		
		case 111:
			return 10;
		
		default:
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322;
	}
	return 0;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 9)
		{
			if (func_135(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_136(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_271;
	}
	return 0;
}

void func_137(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((((func_142(iVar0, 1) && func_141(ENTITY::GET_ENTITY_MODEL(iVar0))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == PLAYER::GET_PLAYER_PED(iParam0)) && func_139(iVar0) == iParam0) && func_29(iParam0, 1, 1))
		{
			if (func_138(PLAYER::PLAYER_PED_ID(), 0) != -1)
			{
				if (!MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_579, 6))
				{
					Global_1676349 = 1;
					Global_1676364 = func_138(PLAYER::PLAYER_PED_ID(), 0);
				}
				Global_1676350 = 1;
			}
		}
	}
}

int func_138(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_139(int iParam0)
{
	int iVar0;
	
	if (!func_142(iParam0, 1))
	{
		return func_16();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_140(iVar0, 0, 1, 0);
}

int func_140(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_29(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_29(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_16();
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0, bool bParam1)
{
	if (Global_76622)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_14(iVar0) == 7)
		{
			if (func_144(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_145(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_264;
	}
	return 0;
}

int func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 146)
	{
		if (func_147(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("MPSV_LP0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	return Global_1590535[iParam0 /*876*/].f_274.f_183[5 /*12*/];
}

void func_149(struct<2> Param0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2.f_1 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0 = -1872730803;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_6 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	Var0.f_7 = bParam4;
	if (bParam4)
	{
		Var0.f_8 = Global_2537071.f_6523.f_8;
		Var0.f_9 = Global_2537071.f_6523.f_9;
	}
	iVar1 = 0;
	if (bParam5)
	{
		iVar1 = func_5(1, 1);
	}
	if (iVar1 == 0)
	{
		if (func_126(PLAYER::PLAYER_ID(), Var0.f_2))
		{
			iVar1 = func_151(1);
		}
		else
		{
			if (bParam4 && (iParam3 == 14 || iParam3 == 13))
			{
				if (func_59() != func_16())
				{
					iVar1 = func_151(0);
				}
				if (func_29(Var0.f_2, 0, 1))
				{
					MISC::SET_BIT(&iVar1, Var0.f_2);
				}
			}
			else
			{
				if (func_29(Var0.f_2, 0, 1))
				{
					iVar1 = func_150(Var0.f_2);
				}
				if (func_59() != func_16())
				{
					MISC::SET_BIT(&iVar1, func_59());
				}
			}
			MISC::SET_BIT(&iVar1, PLAYER::PLAYER_ID());
		}
	}
	if (!iVar1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 10, iVar1);
	}
}

int func_150(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_151(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_17(PLAYER::PLAYER_ID()))
	{
		iVar2 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar2 = func_59();
	}
	if (iVar2 == PLAYER::PLAYER_ID() || func_29(iVar2, bParam0, 1))
	{
		MISC::SET_BIT(&uVar0, iVar2);
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = iVar1;
		if ((iVar2 != iVar3 && func_126(iVar3, iVar2)) && func_29(iVar3, bParam0, 1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

bool func_152()
{
	return func_153(Global_1681961.f_4706.f_2);
}

bool func_153(int iParam0)
{
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 0;
	}
	return iParam0 != 0;
}

void func_154(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, bool bParam5)
{
	struct<21> Var0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_1 = -1;
	Var0.f_2.f_1.f_2.f_2.f_2.f_2.f_1 = -1;
	Var0.f_14 = 5;
	Var0.f_20 = 5;
	Var0 = -1717006654;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_56(*(uParam0[iVar1 /*2*/])))
		{
			Var2 = { func_53(*(uParam0[iVar1 /*2*/])) };
			if (func_52(Var2, Param4))
			{
				Var0.f_2[iVar1 /*2*/] = { *(uParam0[iVar1 /*2*/]) };
				Var0.f_20[iVar1] = (*iParam1)[iVar1];
				Var0.f_14[iVar1] = (*uParam3)[iVar1];
			}
		}
		iVar1++;
	}
	Var0.f_13 = iParam2;
	iVar3 = func_151(1);
	if (!func_167(1))
	{
		iVar3 = 0;
		MISC::SET_BIT(&iVar3, PLAYER::PLAYER_ID());
	}
	if (bParam5)
	{
		iVar3 = func_5(1, 1);
	}
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 26, iVar3);
	}
}

bool func_155(int iParam0, struct<2> Param1)
{
	return func_156(iParam0, Param1) > 1;
}

int func_156(int iParam0, struct<2> Param1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	if (iParam0 != func_16())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_56(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]))
			{
				Var2 = { func_53(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar0 /*2*/]) };
				if (func_52(Var2, Param1))
				{
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_157(int iParam0)
{
	if ((iParam0 >= 684 && iParam0 <= 703) || iParam0 == 747)
	{
		return 1;
	}
	return 0;
}

int func_158(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419327.f_199.f_1[iVar0 /*14*/].f_13;
		}
		iVar0++;
	}
	return 0;
}

int func_159(struct<2> Param0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (Global_2419327.f_199.f_1[iVar0 /*14*/].f_5[iVar1] != 0 && Global_2419327.f_199.f_1[iVar0 /*14*/].f_5[iVar1] == iParam1)
				{
					return 1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1681961.f_4601[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_161(int iParam0, struct<2> Param1)
{
	struct<2> Var0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var3;
	
	Var0.f_1 = -1;
	if (!func_95(iParam0) || !func_57(Param1))
	{
		return Var0;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var2 = { func_162(iParam0, iVar1, 0) };
		if (func_56(Var2) && func_87(Var2))
		{
			Var3 = { func_53(Var2) };
			if (func_52(Var3, Param1))
			{
				return Var2;
			}
		}
		iVar1++;
	}
	return Var0;
}

struct<2> func_162(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_1 = -1;
	if (!func_95(iParam0))
	{
		return Var0;
	}
	if ((func_29(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if ((func_56(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar1 /*2*/]) && func_87(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar1 /*2*/])) && (!bParam2 || !func_163(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar1 /*2*/])))
				{
					return Global_1628237[iParam0 /*615*/].f_579.f_1[iVar1 /*2*/];
				}
				iVar1++;
			}
		}
		else
		{
			iVar2 = iParam1;
			if (func_56(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/]) && func_87(Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/]))
			{
				return Global_1628237[iParam0 /*615*/].f_579.f_1[iVar2 /*2*/];
			}
		}
	}
	return Var0;
}

int func_163(struct<2> Param0)
{
	if (func_56(Param0))
	{
		if (func_86(Param0) == 2 || func_55(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_579.f_12, Param0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_164()
{
	return func_165(PLAYER::PLAYER_ID());
}

int func_165(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_56(Global_1628237[iParam0 /*615*/].f_579.f_12) || MISC::IS_BIT_SET(Global_1628237[iParam0 /*615*/].f_579, 4))
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(int iParam0)
{
	return func_62(iParam0) > 1;
}

bool func_167(bool bParam0)
{
	return func_50(PLAYER::PLAYER_ID(), bParam0);
}

void func_168()
{
	if (func_171(PLAYER::PLAYER_ID()))
	{
		if (((func_170() || !func_103()) || func_102()) || func_169())
		{
			func_77(&uLocal_51, 1, 0);
			MISC::SET_BIT(&(Global_1676377.f_4), 26);
			if (!iLocal_50)
			{
			}
			iLocal_50 = 1;
		}
		else if (iLocal_50)
		{
			if (!func_72(&uLocal_51) || func_74(&uLocal_51, 2000, 1))
			{
				MISC::CLEAR_BIT(&(Global_1676377.f_4), 26);
				iLocal_50 = 0;
			}
			else
			{
				MISC::SET_BIT(&(Global_1676377.f_4), 26);
			}
		}
	}
	else if (iLocal_50)
	{
		if (!func_72(&uLocal_51) || func_74(&uLocal_51, 2000, 1))
		{
			MISC::CLEAR_BIT(&(Global_1676377.f_4), 26);
			iLocal_50 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Global_1676377.f_4), 26);
		}
	}
}

var func_169()
{
	return Global_2359693.f_3;
}

bool func_170()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_171(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

void func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!iLocal_42)
	{
		if (Global_1387909)
		{
			iLocal_42 = 1;
			func_174();
		}
	}
	else if (!Global_1387909)
	{
		iLocal_42 = 0;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar0);
		if (iVar1 == 147)
		{
			if (SCRIPT::GET_EVENT_DATA(0, iVar0, &uVar3, 1))
			{
				iVar2 = uVar3;
				switch (iVar2)
				{
					case joaat("MP0_GOLD_INTCHAR_4"):
						Global_1387952[0] = func_173(8730, 0);
						break;
					
					case joaat("MP1_GOLD_INTCHAR_4"):
						Global_1387952[1] = func_173(8730, 1);
						break;
					
					case joaat("MP0_SILVER_INTCHAR_4"):
						Global_1387982[0] = func_173(8728, 0);
						break;
					
					case joaat("MP1_SILVER_INTCHAR_4"):
						Global_1387982[1] = func_173(8728, 1);
						break;
					
					case joaat("MP0_BRONZE_INTCHAR_4"):
						Global_1388012[0] = func_173(8726, 0);
						break;
					
					case joaat("MP1_BRONZE_INTCHAR_4"):
						Global_1388012[1] = func_173(8726, 1);
						break;
					
					case joaat("MP0_PLATINUM_INTCHAR_4"):
						Global_1388042[0] = func_173(8732, 0);
						break;
					
					case joaat("MP1_PLATINUM_INTCHAR_4"):
						Global_1388042[1] = func_173(8732, 1);
						break;
					
					case joaat("MP0_PLATINUM_BOOLCHAR_3"):
						Global_1388090[0] = func_173(8731, 0);
						break;
					
					case joaat("MP1_PLATINUM_BOOLCHAR_3"):
						Global_1388090[1] = func_173(8731, 1);
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2548434[iParam0 /*3*/][iParam1];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	Global_1387952[0] = 0;
	Global_1387952[1] = 0;
	Global_1387952[2] = 0;
	Global_1387952[3] = 0;
	Global_1387952[4] = 0;
	Global_1387982[0] = 0;
	Global_1387982[1] = 0;
	Global_1387982[2] = 0;
	Global_1387982[3] = 0;
	Global_1387982[4] = 0;
	Global_1388012[0] = 0;
	Global_1388012[1] = 0;
	Global_1388012[2] = 0;
	Global_1388012[3] = 0;
	Global_1388012[4] = 0;
	Global_1388042[0] = 0;
	Global_1388042[1] = 0;
	Global_1388042[2] = 0;
	Global_1388042[3] = 0;
	Global_1388042[4] = 0;
	Global_1388090[0] = 0;
	Global_1388090[1] = 0;
	Global_1388090[2] = 0;
	Global_1388090[3] = 0;
	Global_1388090[4] = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1388090[iVar0] = func_173(8731, iVar0);
		Global_1388042[iVar0] = func_173(8732, iVar0);
		Global_1388012[iVar0] = func_173(8726, iVar0);
		Global_1387982[iVar0] = func_173(8728, iVar0);
		Global_1387952[iVar0] = func_173(8730, iVar0);
		iVar0++;
	}
}

void func_175()
{
	if (func_177() == -1 || func_176() == -1)
	{
		if (!Global_262145.f_25842)
		{
			Global_262145.f_25842 = 1;
			iLocal_41 = 1;
		}
		func_77(&uLocal_39, 1, 0);
	}
	else if (func_102())
	{
		if (!Global_262145.f_25842)
		{
			Global_262145.f_25842 = 1;
			iLocal_41 = 1;
		}
		func_77(&uLocal_39, 1, 0);
	}
	else if (iLocal_41)
	{
		if (func_74(&uLocal_39, 5000, 1))
		{
			Global_262145.f_25842 = 0;
			iLocal_41 = 0;
		}
	}
}

int func_176()
{
	int iVar0;
	
	iVar0 = func_177();
	if (iVar0 != -1)
	{
		return Global_1574577.f_25[iVar0];
	}
	return -1;
}

int func_177()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_262145.f_6446[iVar0] == 251)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_178()
{
	if (func_102() || Global_2451426.f_2846.f_195)
	{
		if (!func_182(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_558), 36))
		{
			func_179(36, 1);
			iLocal_38 = 1;
		}
	}
	else if (iLocal_38)
	{
		func_179(36, 0);
		iLocal_38 = 0;
	}
}

void func_179(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_182(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_558), iParam0))
		{
			func_181(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_558), iParam0);
		}
	}
	else if (func_182(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_558), iParam0))
	{
		func_180(&(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_558), iParam0);
	}
	if (iParam0 == 10)
	{
		func_179(11, bParam1);
		func_179(12, bParam1);
		func_179(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_179(37, bParam1);
		func_179(38, bParam1);
		func_179(39, bParam1);
		func_179(40, bParam1);
		func_179(41, bParam1);
	}
}

void func_180(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
}

void func_181(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
}

bool func_182(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_183()
{
	int iVar0;
	
	if (func_103())
	{
		if (Global_262145.f_27815)
		{
			Global_262145.f_27815 = 0;
		}
		iVar0 = func_186(8833, -1, 0);
		if (MISC::IS_BIT_SET(iVar0, 19))
		{
			MISC::CLEAR_BIT(&iVar0, 19);
			func_184(8833, iVar0, -1, 1, 0);
		}
	}
}

void func_184(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_185(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_185(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_187()
{
	if (Global_2462100)
	{
		if (((((uLocal_36[0] != Global_2097152[func_192() /*10930*/].f_6174.f_1304[5] || uLocal_36[1] != Global_2097152[func_192() /*10930*/].f_6174.f_1304[21]) || uLocal_36[2] != Global_2097152[func_192() /*10930*/].f_6174.f_1304[22]) || iLocal_37[0] != func_188(7, -1)) || iLocal_37[1] != func_188(23, -1)) || iLocal_37[2] != func_188(24, -1))
		{
			iLocal_37[0] = func_188(7, -1);
			iLocal_37[1] = func_188(23, -1);
			iLocal_37[2] = func_188(24, -1);
			func_184(3233, Global_2097152[func_192() /*10930*/].f_6174.f_1304[5], -1, 1, 0);
			func_184(8976, Global_2097152[func_192() /*10930*/].f_6174.f_1304[21], -1, 1, 0);
			func_184(8979, Global_2097152[func_192() /*10930*/].f_6174.f_1304[22], -1, 1, 0);
			uLocal_36[0] = Global_2097152[func_192() /*10930*/].f_6174.f_1304[5];
			uLocal_36[1] = Global_2097152[func_192() /*10930*/].f_6174.f_1304[21];
			uLocal_36[2] = Global_2097152[func_192() /*10930*/].f_6174.f_1304[22];
		}
	}
}

int func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_8();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_191(iParam0);
		if (iVar1 == 0 && func_186(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_190(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_189(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388066[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2586214[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2586065[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_189(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_322 != 0;
	}
	return 0;
}

bool func_190(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_186(7207, iParam0, 0) != 0;
}

int func_191(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_192()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_193()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_195(PLAYER::PLAYER_ID(), -1))
		{
			if (func_194())
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (MISC::ARE_STRINGS_EQUAL(&(Global_22350.f_1), "CMOD_MOD_T"))
				{
					iLocal_35 = VEHICLE::IS_TOGGLE_MOD_ON(iVar0, 18);
					if (iLocal_35)
					{
						iLocal_34 = 1;
					}
				}
				else if ((MISC::ARE_STRINGS_EQUAL(&(Global_22350.f_1), "CMOD_BUM_T") || MISC::ARE_STRINGS_EQUAL(&(Global_22350.f_1), "CMOD_BUMF_T")) || MISC::ARE_STRINGS_EQUAL(&(Global_22350.f_1), "CMOD_BUMR_T"))
				{
					if (iLocal_34)
					{
						if (!VEHICLE::IS_TOGGLE_MOD_ON(iVar0, 18) && iLocal_35)
						{
							VEHICLE::TOGGLE_VEHICLE_MOD(iVar0, 18, iLocal_35);
						}
					}
				}
				else if (iLocal_34)
				{
					iLocal_34 = 0;
					bLocal_35 = false;
				}
			}
			else if (iLocal_34)
			{
				iLocal_34 = 0;
				bLocal_35 = false;
			}
		}
	}
	else if (iLocal_34)
	{
		iLocal_34 = 0;
		bLocal_35 = false;
	}
}

bool func_194()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_29(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_196()
{
	if (!func_198(30259, -1, -1))
	{
		if ((MISC::IS_BIT_SET(func_186(8972, -1, 0), 14) || MISC::IS_BIT_SET(func_186(8972, -1, 0), 16)) || MISC::IS_BIT_SET(Global_2537071.f_1736, 7))
		{
			func_197(30259, 1, -1, 1);
		}
	}
}

bool func_197(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_8();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_198(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_8();
	}
	iVar1 = func_200(iParam0, iParam1);
	iVar2 = func_199(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_199(int iParam0)
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
	return iVar0;
}

int func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_8();
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
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
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
	return iVar0;
}

void func_201()
{
	if (func_118(PLAYER::PLAYER_ID()))
	{
		func_202();
	}
}

int func_202()
{
	if (Global_1370230)
	{
		return 0;
	}
	PAD::DISABLE_CONTROL_ACTION(0, 37, true);
	PAD::DISABLE_CONTROL_ACTION(0, 157, true);
	PAD::DISABLE_CONTROL_ACTION(0, 159, true);
	PAD::DISABLE_CONTROL_ACTION(0, 160, true);
	PAD::DISABLE_CONTROL_ACTION(0, 161, true);
	PAD::DISABLE_CONTROL_ACTION(0, 162, true);
	PAD::DISABLE_CONTROL_ACTION(0, 163, true);
	PAD::DISABLE_CONTROL_ACTION(0, 164, true);
	PAD::DISABLE_CONTROL_ACTION(0, 165, true);
	PAD::DISABLE_CONTROL_ACTION(0, 158, true);
	func_203();
	PAD::DISABLE_CONTROL_ACTION(0, 101, true);
	PAD::DISABLE_CONTROL_ACTION(0, 337, true);
	PAD::DISABLE_CONTROL_ACTION(0, 53, true);
	PAD::DISABLE_CONTROL_ACTION(0, 54, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 140, true);
	PAD::DISABLE_CONTROL_ACTION(0, 141, true);
	PAD::DISABLE_CONTROL_ACTION(0, 263, true);
	PAD::DISABLE_CONTROL_ACTION(0, 264, true);
	PAD::DISABLE_CONTROL_ACTION(0, 142, true);
	PAD::DISABLE_CONTROL_ACTION(0, 143, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	PAD::DISABLE_CONTROL_ACTION(0, 44, true);
	PAD::DISABLE_CONTROL_ACTION(0, 282, true);
	PAD::DISABLE_CONTROL_ACTION(0, 283, true);
	PAD::DISABLE_CONTROL_ACTION(0, 284, true);
	PAD::DISABLE_CONTROL_ACTION(0, 285, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 102, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
	PAD::DISABLE_CONTROL_ACTION(0, 36, true);
	PAD::DISABLE_CONTROL_ACTION(0, 345, true);
	PAD::DISABLE_CONTROL_ACTION(0, 346, true);
	PAD::DISABLE_CONTROL_ACTION(0, 347, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 83, true);
	PAD::DISABLE_CONTROL_ACTION(0, 84, true);
	PAD::DISABLE_CONTROL_ACTION(0, 85, true);
	return 0;
}

void func_203()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_204()
{
	if (MISC::IS_BIT_SET(Global_102161, 0))
	{
		if (!func_205())
		{
			if (!func_72(&uLocal_32))
			{
				func_71(&uLocal_32, 0, 0);
			}
			else if (func_74(&uLocal_32, 5000, 0))
			{
				MISC::CLEAR_BIT(&Global_102161, 0);
			}
		}
		else
		{
			func_70(&uLocal_32);
		}
	}
	else
	{
		func_70(&uLocal_32);
	}
}

bool func_205()
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201.2196f, 5174.217f, -89.99727f, 198.8149f, 5175.969f, -87.49727f, 1.75f, false, true, 0);
}

void func_206()
{
	if (MISC::IS_PC_VERSION())
	{
		if (func_207(iLocal_31))
		{
			MISC::SET_BIT(&(Global_1323615[iLocal_31 /*141*/].f_102), 2);
		}
		iLocal_31++;
		if (iLocal_31 >= 307)
		{
			iLocal_31 = 0;
		}
	}
}

int func_207(int iParam0)
{
	switch (Global_1323615[iParam0 /*141*/].f_66)
	{
		case joaat("thrax"):
		case joaat("paragon2"):
		case joaat("turismo2"):
		case joaat("jester3"):
		case joaat("infernus2"):
		case joaat("schlagen"):
		case joaat("taipan"):
		case joaat("nero"):
		case joaat("gauntlet3"):
		case joaat("stafford"):
		case joaat("mamba"):
		case joaat("swinger"):
		case joaat("deveste"):
		case joaat("locust"):
		case joaat("caracara2"):
		case joaat("sanctus"):
		case joaat("neo"):
		case joaat("stromberg"):
		case joaat("krieger"):
		case joaat("gauntlet4"):
		case joaat("flashgt"):
			return 1;
			break;
		
		case joaat("dodo"):
		case joaat("turismor"):
		case joaat("toros"):
		case joaat("monroe"):
		case joaat("velum"):
		case joaat("furoregt"):
		case joaat("infernus"):
		case joaat("ruston"):
		case joaat("marquis"):
		case joaat("defiler"):
		case joaat("pigalle"):
		case joaat("massacro2"):
		case joaat("tornado6"):
		case joaat("tampa"):
		case joaat("issi3"):
		case joaat("jb700"):
		case joaat("jester2"):
		case joaat("kamacho"):
		case joaat("fagaloa"):
		case joaat("impaler"):
		case joaat("dominator2"):
		case joaat("mammatus"):
		case joaat("jetmax"):
		case joaat("stalion2"):
		case joaat("massacro"):
		case joaat("esskey"):
		case joaat("cognoscenti"):
		case joaat("xls"):
		case joaat("superd"):
		case joaat("stunt"):
		case joaat("cuban800"):
		case joaat("vacca"):
		case joaat("jester"):
		case joaat("gauntlet2"):
		case joaat("exemplar"):
		case joaat("slamvan2"):
		case joaat("glendale"):
		case joaat("squalo"):
		case joaat("carbonizzare"):
		case joaat("virgo"):
		case joaat("cogcabrio"):
		case joaat("dinghy3"):
		case joaat("blade"):
		case joaat("bullet"):
		case joaat("brioso"):
		case joaat("voltic"):
		case joaat("voltic2"):
		case joaat("alpha"):
		case joaat("feltzer2"):
		case joaat("cheburek"):
		case joaat("rapidgt2"):
		case joaat("rhapsody"):
		case joaat("coquette"):
		case joaat("coquette2"):
		case joaat("rapidgt"):
		case joaat("ninef2"):
		case joaat("kuruma"):
		case joaat("ninef"):
		case joaat("schafter3"):
		case joaat("surano"):
		case joaat("banshee"):
		case joaat("khamelion"):
		case joaat("nightblade"):
		case joaat("chino"):
		case joaat("diablous"):
		case joaat("virgo3"):
		case joaat("fcr"):
		case joaat("comet2"):
		case joaat("zombiea"):
		case joaat("felon2"):
		case joaat("bf400"):
		case joaat("felon"):
		case joaat("baller2"):
		case joaat("hotknife"):
		case joaat("mesa3"):
		case joaat("panto"):
		case joaat("hakuchou"):
		case joaat("blazer4"):
		case joaat("f620"):
		case joaat("oracle2"):
		case joaat("bifta"):
		case joaat("stalion"):
		case joaat("blazer3"):
		case joaat("manchez"):
		case joaat("schafter2"):
		case joaat("zion2"):
		case joaat("dukes"):
		case joaat("jackal"):
		case joaat("serrano"):
		case joaat("patriot"):
		case joaat("fq2"):
		case joaat("slamvan"):
		case joaat("enduro"):
		case joaat("faggio"):
		case joaat("blista2"):
		case joaat("carbonrs"):
		case joaat("kalahari"):
		case joaat("ratloader2"):
		case joaat("faction"):
		case joaat("buffalo"):
		case joaat("dominator"):
		case joaat("moonbeam"):
		case joaat("gauntlet"):
		case joaat("tornado"):
		case joaat("buccaneer"):
		case joaat("prairie"):
		case joaat("penumbra"):
		case joaat("fugitive"):
		case joaat("issi2"):
		case joaat("seashark"):
		case joaat("intruder"):
		case joaat("bagger"):
		case joaat("bfinjection"):
		case joaat("hexer"):
		case joaat("washington"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("sabregt"):
		case joaat("sultan"):
		case joaat("nemesis"):
		case joaat("double"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("ruffian"):
		case joaat("ruiner"):
		case joaat("picador"):
		case joaat("akuma"):
		case joaat("pcj"):
		case joaat("primo"):
		case joaat("futo"):
		case joaat("blazer"):
		case joaat("sanchez2"):
		case joaat("sanchez"):
		case joaat("voodoo2"):
		case joaat("faggio2"):
		case joaat("scorcher"):
		case joaat("cruiser"):
		case joaat("bmx"):
		case joaat("minivan"):
			if (MISC::IS_BIT_SET(Global_1323615[iParam0 /*141*/].f_102, 13))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_208()
{
	switch (func_209())
	{
		case joaat("penumbra2"):
			Global_1696072 = 0.88f;
			break;
		
		case joaat("italigtb"):
			Global_1696072 = 0.55f;
			break;
		
		case joaat("formula"):
			Global_1696072 = 0.52f;
			break;
		
		case joaat("pfister811"):
			Global_1696072 = 0.57f;
			break;
		
		case joaat("coquette4"):
			Global_1696072 = 0.52f;
			break;
		
		case joaat("sheava"):
			Global_1696072 = 0.68f;
			break;
		
		case joaat("s80"):
			Global_1696072 = 0.45f;
			break;
		
		case joaat("gauntlet5"):
			Global_1696072 = 0.6f;
			break;
		
		case joaat("openwheel2"):
			Global_1696072 = 0.51f;
			break;
		
		case joaat("btype2"):
			Global_1696072 = 0.57f;
			break;
		
		case joaat("xa21"):
			Global_1696072 = 0.74f;
			break;
		
		case joaat("tigon"):
			Global_1696072 = 0.6f;
			break;
		
		case joaat("brawler"):
			Global_1696072 = 1.08f;
			break;
		
		case joaat("caracara2"):
			Global_1696072 = 0.98f;
			break;
		
		case joaat("autarch"):
			Global_1696072 = 0.67f;
			break;
		
		case joaat("openwheel1"):
			Global_1696072 = 0.45f;
			break;
		
		case joaat("zhaba"):
			Global_1696072 = 1.54f;
			break;
		
		case joaat("feltzer3"):
			Global_1696072 = 0.44f;
			break;
	}
}

int func_209()
{
	return Global_262145.f_25985;
}

void func_210()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	if (func_72(&uLocal_25))
	{
		MISC::SET_BIT(&Global_7357, 2);
		if (func_74(&uLocal_25, 60000, 0))
		{
			func_77(&uLocal_25, 0, 0);
			func_70(&uLocal_25);
		}
	}
	if (func_72(&uLocal_23) && func_74(&uLocal_23, 1000, 0))
	{
		if (iLocal_30 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_30 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_30, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_74(&uLocal_23, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_30))
			{
				AUDIO::STOP_SOUND(iLocal_30);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_30);
			iLocal_30 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_77(&uLocal_23, 0, 0);
			func_70(&uLocal_23);
		}
	}
	if (!iLocal_17 && !func_217())
	{
		return;
	}
	iLocal_17 = 1;
	MISC::SET_BIT(&Global_7357, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_16))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_16 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_16, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_16, 8000);
			iVar1 = func_186(7866, -1, 0);
			func_184(7866, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_27 = { ENTITY::GET_ENTITY_COORDS(iLocal_16, false) };
			iLocal_28 = 0;
		}
	}
	else
	{
		func_216();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_29 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_29 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_29, "07", iLocal_16, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_18)
			{
				if (func_74(&uLocal_19, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_16, false);
					func_77(&uLocal_19, 0, 0);
					func_70(&uLocal_19);
					func_71(&uLocal_21, 0, 0);
					iLocal_18 = 1;
				}
			}
			else
			{
				fVar3 = (SYSTEM::TO_FLOAT(func_215(&uLocal_21, 0, 0)) / SYSTEM::TO_FLOAT(func_214()));
				fVar4 = (SYSTEM::TO_FLOAT(func_215(&uLocal_19, 0, 0)) / SYSTEM::TO_FLOAT(func_213()));
				fVar4 = (fVar4 * fVar3);
				Var5 = { func_211(Local_27, func_212(), fVar4) };
				ENTITY::SET_ENTITY_COORDS(iLocal_16, Var5, true, false, false, true);
				if (fVar4 >= 1f)
				{
					iLocal_28++;
					Local_27 = { ENTITY::GET_ENTITY_COORDS(iLocal_16, false) };
					func_77(&uLocal_19, 0, 0);
					func_70(&uLocal_19);
					if (func_213() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_16);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_29))
						{
							AUDIO::STOP_SOUND(iLocal_29);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_29);
						iLocal_29 = -1;
						func_71(&uLocal_23, 0, 0);
						func_71(&uLocal_25, 0, 0);
						func_77(&uLocal_21, 0, 0);
						func_70(&uLocal_21);
						Local_27 = { 0f, 0f, 0f };
						iLocal_28 = 0;
						iLocal_17 = 0;
						iLocal_18 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_211(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return FtoV((1f - fParam2)) * Param0 + Vector(fParam2, fParam2, fParam2) * Param1;
}

Vector3 func_212()
{
	switch (iLocal_28)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
		
		case 1:
			return -1082.865f, 6390.52f, 924.2493f;
		
		case 2:
			return -2542.874f, 7217.514f, 1051.333f;
		
		case 3:
			return -4139.106f, 8143.302f, 1412.694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_213()
{
	switch (iLocal_28)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_214()
{
	return 3150;
}

int func_215(var uParam0, bool bParam1, bool bParam2)
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

void func_216()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_16, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_16, Var0, 2, true);
}

int func_217()
{
	if (((((((func_198(22107, -1, -1) && Global_2409287 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_220(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2451426.f_3074.f_178 >= 1) && Global_2451426.f_3074.f_178 < 4) && func_219()) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_218()
{
	if (func_198(15476, -1, -1) && func_186(5450, func_8(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		if ((iVar0 == 1420204096 || iVar0 == -1233681761) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == 1420204096 || iVar1 == -1233681761) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_220(int iParam0, struct<3> Param1, float fParam2)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam2 * fParam2);
}

void func_221()
{
	switch (Global_1703580)
	{
		case 5:
			switch (Global_1703580.f_1)
			{
				case 0:
					Global_1703580.f_1 = 9;
					break;
				
				case 9:
					if (func_222(PLAYER::PLAYER_ID()))
					{
						if (!MISC::IS_BIT_SET(Global_1703580.f_2, 6))
						{
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_SUM20/DLC_SUM20_HIDDEN_COLLECTIBLES", false, -1);
							MISC::SET_BIT(&(Global_1703580.f_2), 6);
						}
					}
					else if (MISC::IS_BIT_SET(Global_1703580.f_2, 6))
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_SUM20/DLC_SUM20_HIDDEN_COLLECTIBLES");
						MISC::CLEAR_BIT(&(Global_1703580.f_2), 6);
					}
					if (MISC::IS_BIT_SET(Global_1703580.f_2, 4))
					{
						func_70(&(Global_1703580.f_7));
						Global_1703580.f_10.f_2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Global_1703580.f_10.f_2, "movie_prop_reward_cut_music", "DLC_sum20_hidden_collectible_sounds", true);
						AUDIO::START_AUDIO_SCENE("DLC_Sum20_Hidden_Collectibles_Reward_Scene");
						Global_1703580.f_1 = 1;
					}
					break;
				
				case 5:
					switch (Global_1703580.f_10)
					{
						case 3:
							Global_1703580.f_10 = 7;
							break;
						
						case 7:
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Global_1703580.f_10.f_1) > 0.35f)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "movie_prop_reward_cut_roar", "DLC_sum20_hidden_collectible_sounds", true);
								AUDIO::STOP_SOUND(Global_1703580.f_10.f_2);
								Global_1703580.f_10 = 4;
							}
							break;
					}
					break;
			}
			break;
	}
}

int func_222(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_29(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0 /*421*/].f_310.f_5 != -1)
			{
				return func_14(Global_2425662[iParam0 /*421*/].f_310.f_5) == 18;
			}
		}
	}
	return 0;
}

void func_223()
{
	if (Global_1703580 == 3)
	{
		if (func_72(&(Global_1703580.f_7)))
		{
			func_70(&(Global_1703580.f_7));
		}
	}
	else if (Global_1703580 == 4)
	{
		if (func_222(PLAYER::PLAYER_ID()))
		{
			Global_1703580 = 7;
		}
	}
	else if (Global_1703580 == 7)
	{
		if (!func_222(PLAYER::PLAYER_ID()))
		{
			func_70(&(Global_1703580.f_7));
			Global_1703580 = 4;
		}
	}
}

void func_224()
{
	if ((Global_110584 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_103())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_225()
{
	int iVar0;
	
	if (!iLocal_15)
	{
		if (Global_1574211)
		{
			iVar0 = func_226(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10126 = 1;
			}
			iLocal_15 = 1;
		}
	}
	else if (!Global_1574211)
	{
		iLocal_15 = 0;
	}
}

int func_226(int iParam0)
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

void func_227()
{
	if (!iLocal_14)
	{
		if (Global_1574211)
		{
			if (func_229() || func_228())
			{
				Global_262145.f_19697 = 1;
			}
			else
			{
				Global_262145.f_19697 = 0;
			}
			iLocal_14 = 1;
		}
	}
	else if (!Global_1574211)
	{
		iLocal_14 = 0;
	}
}

int func_228()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_226(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10235)
	{
		return 0;
	}
	uVar1[0] = func_226(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_226(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_226(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_226(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_10231 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_10235)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

int func_229()
{
	int iVar0;
	var uVar1[4];
	int iVar2;
	
	iVar0 = func_226(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10234)
	{
		return 0;
	}
	uVar1[0] = func_226(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_226(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_226(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_226(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar2 = 0;
	while (iVar2 < (Global_262145.f_10230 - 1))
	{
		if (uVar1[iVar2] < Global_262145.f_10234)
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

void func_230()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590535)
		{
			MISC::SET_BIT(&(Global_1590535[iVar0 /*876*/].f_737), 1);
			iVar0++;
		}
	}
}

void func_231()
{
	if (Global_262145.f_10210 != 120)
	{
		Global_262145.f_10210 = 120;
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2))
			{
				if (iVar2 == -1884218406)
				{
					func_245(iVar0);
				}
				else if (iVar2 == -1264141133)
				{
					func_243(iVar0);
				}
				else if (iVar2 == 1704682300)
				{
					func_234(iVar0);
				}
			}
		}
		else if (iVar1 == 166)
		{
			if (MISC::IS_PC_VERSION())
			{
				func_233(iVar0);
			}
		}
		iVar0++;
	}
}

void func_233(int iParam0)
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_3 == joaat("vw_prop_vw_lux_card_01a"))
		{
			iLocal_59 = 1;
		}
	}
}

void func_234(int iParam0)
{
	struct<3> Var0;
	
	Var0.f_2.f_1 = -1;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) != PLAYER::PLAYER_ID())
		{
			if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) != -1)
			{
			}
			return;
		}
		func_235(Var0.f_2);
	}
}

void func_235(struct<2> Param0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
		while (iVar0 < 48)
		{
			if (func_55(Global_2419327.f_199.f_1[iVar0 /*14*/].f_1, Param0))
			{
				if (func_236(iVar0))
				{
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_1.f_1 = -1;
					Global_2419327.f_199.f_1[iVar0 /*14*/] = -1;
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_13 = 0;
					Global_2419327.f_199.f_1[iVar0 /*14*/].f_3 = 0;
				}
				return;
			}
			iVar0++;
		}
	}
}

int func_236(int iParam0)
{
	int iVar0;
	
	switch (Global_2419327.f_199.f_1[iParam0 /*14*/].f_3)
	{
		case 22:
			if (func_242() == 1)
			{
				return 0;
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("BUSINESS_BATTLES", -1, true, 0) || NETWORK::NETWORK_IS_SCRIPT_ACTIVE("FM_CONTENT_BUSINESS_BATTLES", -1, true, 0))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < func_241())
			{
				if (func_29(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1) && (func_239(PLAYER::INT_TO_PLAYERINDEX(iVar0)) || func_237(PLAYER::INT_TO_PLAYERINDEX(iVar0))))
				{
					return 0;
				}
				iVar0++;
			}
			break;
		
		case 24:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (Global_1703118.f_1[iVar0 /*13*/] == 2)
				{
					return 0;
				}
				iVar0++;
			}
			break;
	}
	return 1;
}

int func_237(int iParam0)
{
	if (func_238(iParam0) == 236 || func_238(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_238(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0 /*615*/];
	}
	return -1;
}

int func_239(int iParam0)
{
	if (Global_1628237[iParam0 /*615*/] == 236 || Global_1628237[iParam0 /*615*/] == 150)
	{
		return func_240(iParam0);
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1628237[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

int func_241()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_242()
{
	return Global_1650640.f_630;
}

void func_243(int iParam0)
{
	struct<25> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0.f_5 = 18;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 25))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) != PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Global_2419327.f_199.f_674[iVar1 /*57*/] == Var0.f_2)
			{
				iVar2 = 0;
				while (iVar2 < Var0.f_24)
				{
					if (Var0.f_5[iVar2] != 0)
					{
						iVar3 = func_244(iVar1, Var0.f_5[iVar2]);
						if (iVar3 != -1)
						{
							if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar3 /*2*/] == SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
							{
							}
							else
							{
								Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar3 /*2*/] = { Var0.f_3 };
							}
						}
					}
					iVar2++;
				}
				return;
			}
			iVar1++;
		}
	}
}

int func_244(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2419327.f_199.f_674[iParam0 /*57*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_245(int iParam0)
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 5))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) != PLAYER::PLAYER_ID())
		{
			return;
		}
		func_33();
		if (Var0.f_2 == 0)
		{
			if (Var0.f_3 == SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
			{
				iVar1 = 0;
				while (iVar1 < 10)
				{
					if (Global_2419327.f_199.f_674[iVar1 /*57*/] == PLAYER::INT_TO_PLAYERINDEX(0))
					{
						iVar2 = 0;
						while (iVar2 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/] == SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
							{
								MISC::CLEAR_BIT(&(Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/].f_1), Var0.f_1);
								if (Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/].f_1 == 0)
								{
									Global_2419327.f_199.f_674[iVar1 /*57*/].f_1[iVar2] = 0;
									Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/] = { func_31() };
									func_250(iVar2);
								}
								else
								{
									func_249(iVar2, Global_2419327.f_199.f_674[iVar1 /*57*/].f_20[iVar2 /*2*/]);
								}
								Jump @297; //curOff = 282
							}
							iVar2++;
						}
					}
					else
					{
						iVar1++;
					}
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_2419327.f_199.f_674[iVar3 /*57*/] == Var0.f_1)
					{
						iVar4 = 0;
						while (iVar4 < 18)
						{
							Global_2419327.f_199.f_674[iVar3 /*57*/].f_1[iVar4] = 0;
							Global_2419327.f_199.f_674[iVar3 /*57*/].f_20[iVar4 /*2*/] = { func_31() };
							iVar4++;
						}
						Global_2419327.f_199.f_674[iVar3 /*57*/] = func_16();
					}
					iVar3++;
				}
			}
		}
		else if (Var0.f_3 == SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
		{
			func_246(Var0.f_2, PLAYER::INT_TO_PLAYERINDEX(0), Var0.f_1, Var0.f_3, 1, 1);
		}
		else
		{
			func_246(Var0.f_2, Var0.f_1, func_16(), Var0.f_3, 0, 1);
		}
	}
}

void func_246(int iParam0, int iParam1, int iParam2, struct<2> Param3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_35(), -1, 0) != PLAYER::PLAYER_ID())
	{
		return;
	}
	if ((iParam0 != 0 && iParam1 != func_16()) && func_29(iParam1, 0, 1))
	{
		iVar0 = -1;
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 10)
		{
			if (bParam5)
			{
				if (Global_2419327.f_199.f_674[iVar2 /*57*/] == func_16())
				{
					if (iVar1 == -1)
					{
						iVar1 = iVar2;
					}
				}
				else if (Global_2419327.f_199.f_674[iVar2 /*57*/] == iParam1)
				{
					iVar0 = iVar2;
				}
				else
				{
					Jump @220; //curOff = 136
					if (Global_2419327.f_199.f_674[iVar2 /*57*/] == iParam1)
					{
						iVar3 = 0;
						while (iVar3 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar2 /*57*/].f_1[iVar3] == iParam0)
							{
								Global_2419327.f_199.f_674[iVar2 /*57*/].f_1[iVar3] = 0;
							}
							iVar3++;
						}
					}
					iVar2++;
				}
				if (bParam5)
				{
					if (iVar0 == -1)
					{
						if (iVar1 != -1)
						{
							iVar0 = iVar1;
						}
						else
						{
							return;
						}
					}
					iVar4 = -1;
					if (bParam4)
					{
						iVar2 = 17;
						while (iVar2 >= 0)
						{
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == 0)
							{
								if (iVar4 == -1)
								{
									iVar4 = iVar2;
								}
							}
							iVar2 = (iVar2 + -1);
						}
					}
					else
					{
						iVar2 = 0;
						while (iVar2 < 18)
						{
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == 0)
							{
								if (iVar4 == -1)
								{
									iVar4 = iVar2;
								}
							}
							if (Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar2] == iParam0)
							{
								return;
							}
							iVar2++;
						}
					}
					if (iVar4 > -1)
					{
						if (bParam4)
						{
							Global_2419327.f_199.f_674[iVar0 /*57*/].f_20[iVar4 /*2*/] = Param3;
							MISC::SET_BIT(&(Global_2419327.f_199.f_674[iVar0 /*57*/].f_20[iVar4 /*2*/].f_1), iParam2);
						}
						else
						{
							Global_2419327.f_199.f_674[iVar0 /*57*/].f_20[iVar4 /*2*/] = { Param3 };
						}
						Global_2419327.f_199.f_674[iVar0 /*57*/].f_1[iVar4] = iParam0;
						Global_2419327.f_199.f_674[iVar0 /*57*/] = iParam1;
						if (iVar4 >= 15)
						{
							func_247(iVar4, iParam0, Param3);
						}
					}
					else
					{
						return;
					}
				}
			}

void func_247(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	iLocal_46[iVar0] = iParam1;
	Local_47[iVar0 /*2*/] = { Param2 };
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = (iParam0 - 15);
	if (iVar0 < 0 || iVar0 >= 3)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_249(int iParam0, struct<2> Param1)
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	Local_47[iVar0 /*2*/] = { Param1 };
}

void func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = func_248(iParam0);
	iLocal_46[iVar0] = 0;
	Local_47[iVar0 /*2*/] = { func_31() };
}

void func_251()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	
	CLOCK::GET_POSIX_TIME(&uVar1, &uVar2, &uVar3, &iVar0, &uVar4, &uVar5);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (Local_11.f_3 > 0)
		{
			Local_11.f_3 = 2;
		}
	}
	switch (Local_11.f_3)
	{
		case 0:
			if (func_253(iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_11))
				{
					func_252(0, iVar0, &iVar6, &Var7, &Var8);
					Local_11 = OBJECT::CREATE_OBJECT(iVar6, Var7, false, false, false);
					ENTITY::SET_ENTITY_ROTATION(Local_11, Var8, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_11, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_11, true);
					ENTITY::SET_ENTITY_LOD_DIST(Local_11, 500);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_11.f_1))
				{
					func_252(1, iVar0, &iVar6, &Var7, &Var8);
					Local_11.f_1 = OBJECT::CREATE_OBJECT(iVar6, Var7, false, false, false);
					ENTITY::SET_ENTITY_ROTATION(Local_11.f_1, Var8, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_11.f_1, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_11.f_1, true);
					ENTITY::SET_ENTITY_LOD_DIST(Local_11.f_1, 500);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_11) && ENTITY::DOES_ENTITY_EXIST(Local_11.f_1))
				{
					Local_11.f_2 = iVar0;
					Local_11.f_3 = 1;
				}
			}
			break;
		
		case 1:
			if (Local_11.f_2 != iVar0)
			{
				if (func_253(Local_11.f_2))
				{
					Local_11.f_3 = 2;
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_11))
			{
				OBJECT::DELETE_OBJECT(&Local_11);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_11.f_1))
			{
				OBJECT::DELETE_OBJECT(&(Local_11.f_1));
			}
			Local_11.f_3 = 0;
			Local_11.f_2 = 0;
			break;
	}
}

void func_252(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1638.572f, -1125.919f, 0.755f };
					*uParam4 = { 3.7f, -5.7f, 28.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_ld_case_01");
					*uParam3 = { -1640.089f, -1125.98f, 0.655f };
					*uParam4 = { -80.131f, 21.025f, 20.258f };
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1573.453f, -1219.413f, 0.391f };
					*uParam4 = { 0f, 0f, 147.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_security_case_01");
					*uParam3 = { -1575.291f, -1222.471f, 0.42f };
					*uParam4 = { 81.364f, 0f, 100.599f };
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1497.243f, -1463.394f, 0.29f };
					*uParam4 = { 3.2f, 2.3f, -152.4f };
					break;
				
				case 1:
					*iParam2 = joaat("hei_p_attache_case_shut_s");
					*uParam3 = { -1495.955f, -1461.449f, 0.335f };
					*uParam4 = { 0f, 0f, -62f };
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1479.67f, -1488.687f, 1.002f };
					*uParam4 = { 4.3f, 4f, 10.4f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_idol_case_02");
					*uParam3 = { -1476.599f, -1489.581f, 0.926f };
					*uParam4 = { 0f, 8.467f, -62f };
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1225.393f, -1860.757f, 1.391f };
					*uParam4 = { 21f, -5.9f, -92.801f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_ld_case_01");
					*uParam3 = { -1227.34f, -1863.151f, 1.134f };
					*uParam4 = { -64.892f, 0.709f, -137.146f };
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -779.8f, -1501.364f, 0.384f };
					*uParam4 = { 9.4f, -3.4f, -59.201f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_security_case_01");
					*uParam3 = { -779.938f, -1499.385f, 0.546f };
					*uParam4 = { 80.61f, 0.709f, 94.506f };
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1154.926f, -1898.685f, 1.547f };
					*uParam4 = { 10.2f, 0f, -156f };
					break;
				
				case 1:
					*iParam2 = joaat("hei_p_attache_case_shut_s");
					*uParam3 = { -1154.085f, -1897.26f, 1.485f };
					*uParam4 = { -7.497f, 0f, 41.8f };
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1354.256f, -2082.389f, 2.788f };
					*uParam4 = { 10.8f, 7.5f, -164.6f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_idol_case_02");
					*uParam3 = { -1356.408f, -2082.411f, 2.493f };
					*uParam4 = { -3.896f, -13.37f, -33.8f };
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1793.884f, -2682.692f, 1.649f };
					*uParam4 = { 9.8f, -6.9f, -77.5f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_ld_case_01");
					*uParam3 = { -1795.189f, -2680.684f, 1.098f };
					*uParam4 = { -68.081f, -180f, -133.8f };
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1967.751f, -3100.706f, 1.581f };
					*uParam4 = { 8.9f, 0f, -97.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_security_case_01");
					*uParam3 = { -1969.753f, -3099.428f, 1.25f };
					*uParam4 = { -79.624f, -180f, -133.8f };
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1568.662f, -2247.191f, 2.355f };
					*uParam4 = { 0.5f, 7.6f, 154.8f };
					break;
				
				case 1:
					*iParam2 = joaat("hei_p_attache_case_shut_s");
					*uParam3 = { -1570.173f, -2245.908f, 2.126f };
					*uParam4 = { -11.994f, 0f, 40.7f };
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1282.606f, -1785.81f, 0.794f };
					*uParam4 = { 0f, 3.8f, -133.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_idol_case_02");
					*uParam3 = { -1284.342f, -1782.903f, 0.89f };
					*uParam4 = { 0f, 0f, 40.6f };
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1332.064f, -1688.711f, 0.976f };
					*uParam4 = { -1f, 2.2f, 24f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_ld_case_01");
					*uParam3 = { -1333.989f, -1687.288f, 1.074f };
					*uParam4 = { -89.892f, -180f, 67.8f };
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1408.087f, -1591.677f, 0.947f };
					*uParam4 = { 0f, -1.9f, 36.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_security_case_01");
					*uParam3 = { -1408.142f, -1588.881f, 1.035f };
					*uParam4 = { -86.789f, -180f, 67.8f };
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1511.836f, -1347.076f, 1.051f };
					*uParam4 = { 0f, 4.4f, -148.2f };
					break;
				
				case 1:
					*iParam2 = joaat("hei_p_attache_case_shut_s");
					*uParam3 = { -1513.133f, -1350.04f, 1f };
					*uParam4 = { 0f, 0f, -139.4f };
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { 1300.273f, -2748.572f, 1.18f };
					*uParam4 = { 1.9f, 0.3f, -34.4f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_idol_case_02");
					*uParam3 = { 1302.828f, -2748.831f, 1.138f };
					*uParam4 = { 0f, 0f, 172.999f };
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { 1450.068f, -2768.282f, 0.574f };
					*uParam4 = { 1.2f, 4.4f, 105.6f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_ld_case_01");
					*uParam3 = { 1447.351f, -2769.073f, 0.7432f };
					*uParam4 = { -87.409f, -180f, 142f };
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1804.574f, -975.644f, 1.166f };
					*uParam4 = { 0f, 3.8f, -55.2f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_security_case_01");
					*uParam3 = { -1806.459f, -974.2935f, 1.3409f };
					*uParam4 = { -83.047f, 0f, -76.0001f };
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1948.401f, -740.129f, 1.952f };
					*uParam4 = { 0f, 2.1f, -158f };
					break;
				
				case 1:
					*iParam2 = joaat("hei_p_attache_case_shut_s");
					*uParam3 = { -1947.72f, -743.8297f, 1.9924f };
					*uParam4 = { 0f, 0f, 157.9996f };
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*iParam2 = joaat("xm_prop_x17_corpse_03");
					*uParam3 = { -1751.293f, -1025.322f, 1.0889f };
					*uParam4 = { 0f, 4.4f, -139.4001f };
					break;
				
				case 1:
					*iParam2 = joaat("prop_idol_case_02");
					*uParam3 = { -1752.671f, -1027.514f, 0.9878f };
					*uParam4 = { 0f, 0f, 157.9996f };
					break;
			}
			break;
		
		case 20:
			func_252(iParam0, 11, iParam2, uParam3, uParam4);
			break;
		
		case 21:
			func_252(iParam0, 12, iParam2, uParam3, uParam4);
			break;
		
		case 22:
			func_252(iParam0, 13, iParam2, uParam3, uParam4);
			break;
		
		case 23:
			func_252(iParam0, 14, iParam2, uParam3, uParam4);
			break;
	}
}

int func_253(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	
	func_252(0, iParam0, &uVar2, &Var0, &uVar1);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_29(PLAYER::PLAYER_ID(), 1, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0, false) < 500f))
	{
		return 0;
	}
	return 1;
}

void func_254()
{
	if (func_261())
	{
		func_258();
		func_257();
	}
	else
	{
		func_256();
		func_255();
	}
}

void func_255()
{
	if (iLocal_7)
	{
		AUDIO::STOP_SOUND(iLocal_8);
		AUDIO::RELEASE_SOUND_ID(iLocal_8);
		AUDIO::STOP_SOUND(iLocal_9);
		AUDIO::RELEASE_SOUND_ID(iLocal_9);
		AUDIO::STOP_SOUND(iLocal_10);
		AUDIO::RELEASE_SOUND_ID(iLocal_10);
		iLocal_7 = 0;
	}
}

void func_256()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_4[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_4[iVar0]));
		}
		iVar0++;
	}
}

void func_257()
{
	if (!iLocal_7)
	{
		iLocal_8 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_8, "dlc_sum20_cascon_ham", 987.4543f, 78.0911f, 79.9856f, 0, false, 0, false);
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "dlc_sum20_cascon_drop", 987.4543f, 78.0911f, 79.9856f, 0, false, 0, false);
		iLocal_10 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(iLocal_10, "dlc_sum20_cascon_weld", 987.4543f, 78.0911f, 79.9856f, 0, false, 0, false);
		iLocal_7 = 1;
	}
	else if (AUDIO::HAS_SOUND_FINISHED(iLocal_8) && AUDIO::HAS_SOUND_FINISHED(iLocal_10))
	{
		AUDIO::RELEASE_SOUND_ID(iLocal_8);
		AUDIO::RELEASE_SOUND_ID(iLocal_10);
		iLocal_7 = 0;
	}
}

void func_258()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	
	bVar0 = true;
	if (func_74(&uLocal_5, 1000, 0))
	{
		if (func_29(PLAYER::PLAYER_ID(), 1, 1) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 987.4543f, 79.5911f, 79.9856f, false) < 1200f)
		{
			bVar0 = false;
		}
		func_70(&uLocal_5);
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 7)
	{
		func_260(iVar1, &iVar2, &Var3, &Var4);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_4[iVar1]))
		{
			iLocal_4[iVar1] = OBJECT::CREATE_OBJECT(iVar2, Var3, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_4[iVar1], Var4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_4[iVar1], true);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_4[iVar1], true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_4[iVar1], 1200);
		}
		else if (!func_259(ENTITY::GET_ENTITY_COORDS(iLocal_4[iVar1], false), Var3, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_4[iVar1], Var3, false, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_4[iVar1], Var4, 2, true);
		}
		iVar1++;
	}
}

bool func_259(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_260(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1875654948;
			*uParam2 = { 987.4543f, 79.5911f, 79.9856f };
			*uParam3 = { 0f, 0f, 147.7995f };
			break;
		
		case 1:
			*uParam1 = 1624575042;
			*uParam2 = { 986.1733f, 80.2049f, 81.4887f };
			*uParam3 = { 0f, 0f, 147.7995f };
			break;
		
		case 2:
			*uParam1 = 1624575042;
			*uParam2 = { 988.5692f, 78.6933f, 81.502f };
			*uParam3 = { 0f, 0f, 147.7995f };
			break;
		
		case 3:
			*uParam1 = joaat("prop_conc_blocks01c");
			*uParam2 = { 983.6906f, 80.8068f, 79.9908f };
			*uParam3 = { 0f, 0f, 61.1988f };
			break;
		
		case 4:
			*uParam1 = joaat("prop_worklight_03b");
			*uParam2 = { 986.2918f, 84.0968f, 79.9862f };
			*uParam3 = { 0f, 0f, 13.2f };
			break;
		
		case 5:
			*uParam1 = joaat("prop_woodpile_01a");
			*uParam2 = { 978.8744f, 81.6564f, 79.9997f };
			*uParam3 = { 0f, 0f, 58.5999f };
			break;
		
		case 6:
			*uParam1 = joaat("prop_watercrate_01");
			*uParam2 = { 988.8708f, 79.1735f, 79.9902f };
			*uParam3 = { 0f, 0f, 331.1999f };
			break;
	}
}

int func_261()
{
	int iVar0;
	
	iVar0 = 0;
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2425662[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*421*/] >= 2) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_262()
{
	int iVar0;
	
	if (func_265())
	{
		if (!iLocal_3)
		{
			iVar0 = func_186(7877, -1, 0);
			if (!MISC::IS_BIT_SET(iVar0, 12))
			{
				if (!func_72(&uLocal_1))
				{
					func_71(&uLocal_1, 0, 0);
				}
				else if (func_74(&uLocal_1, 120000, 0))
				{
					if (!Global_1696095.f_5)
					{
						iLocal_3 = 1;
						Global_1696095.f_5 = 1;
						StringCopy(&(Global_1696095.f_7), func_264(), 64);
						StringCopy(&(Global_1696095.f_23), func_263(), 64);
						Global_1696095.f_6 = 158;
						MISC::SET_BIT(&iVar0, 12);
						func_184(7877, iVar0, -1, 1, 0);
					}
				}
			}
			else
			{
				iLocal_3 = 1;
			}
		}
	}
}

char* func_263()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 0:
			return "ase be assured noise levels are low and champagne sales high.";
		
		case 4:
			return "imperceptibles, pero las ofertas en champ??n son ineludibles.";
		
		case 3:
			return "ti assicuriamo poco rumore e tanto champagne.";
		
		case 2:
			return " wir den L??rm minimal und den Champagner flie??end zu halten.";
		
		case 1:
			return "res seront minimales et le champagne coulera toujours ?? flots.";
		
		case 6:
			return " ??e poziom ha??asu jest niski, a sprzeda?? szampana wysoka.";
		
		case 7:
			return "?? Diamond ???????? ???????? ?? ???????? ????????????????????.";
		
		case 5:
			return "asseguramos que haver?? pouco barulho e muita champagne.";
		
		case 11:
			return " el ruido al m??nimo y la champa??a fluyendo al m??ximo.";
		
		case 8:
			return "????????? ?????? ???????????? ????????? ??????????????????.";
		
		case 10:
			return "??????????????????????????????????????????????????????";
		
		case 9:
			return "???????????????????????????????????????????????????????????????";
		
		case 12:
			return "???????????????????????????????????????";
		
		default:
	}
	return "";
}

char* func_264()
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 0:
			return "Dear member, in spite of construction work at the Diamond, ple";
		
		case 4:
			return "Le aseguramos que las renovaciones en The Diamond son casi ";
		
		case 3:
			return "Caro membro, nonostante i lavori al Diamond, ";
		
		case 2:
			return "Geehrtes Mitglied, trotz der Renovierung am Diamond versuchen";
		
		case 1:
			return "Cher membre, malgr?? les travaux au Diamond, les nuisances sono";
		
		case 6:
			return "Drogi kliencie, mimo prac trwaj??cych w kasynie zapewniamy,";
		
		case 7:
			return "????????????????????????! ???????????????? ???? ????????????, ";
		
		case 5:
			return "Caro membro, apesar de nossa obra em andamento no Diamond, ";
		
		case 11:
			return "Aunque estemos renovando The Diamond, mantendremos";
		
		case 8:
			return "?????? ????????????, ??????????????? ??? ?????? ?????????, ";
		
		case 10:
			return "????????????????????????????????????????????????????????????";
		
		case 9:
			return "???????????????????????????????????????????????????";
		
		case 12:
			return "????????????????????????????????????????????????????????????";
		
		default:
	}
	return "";
}

int func_265()
{
	if (((((((((((((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_271(PLAYER::PLAYER_ID())) || func_269(PLAYER::PLAYER_ID())) || NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) || NETWORK::IS_PLAYER_IN_CUTSCENE(PLAYER::PLAYER_ID())) || Global_73825) || Global_75434) || (func_21(PLAYER::PLAYER_ID(), 0) && MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID() /*615*/].f_11.f_4, 20))) || func_102()) || func_267(PLAYER::PLAYER_ID(), 32)) || func_266(PLAYER::PLAYER_ID(), 25)) || func_266(PLAYER::PLAYER_ID(), 21)) || Global_1590535[PLAYER::PLAYER_ID() /*876*/] == 5) || Global_2513889) || !func_103()) || Global_2537071.f_1687)
	{
		return 0;
	}
	return 1;
}

bool func_266(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0 /*421*/].f_208, iParam1);
}

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_30768 != 0)
	{
		return 0;
	}
	if (!func_268(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590535[iVar0 /*876*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_269(int iParam0)
{
	if (func_270(Global_1590535[iParam0 /*876*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_271(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1590535[iParam0 /*876*/].f_274.f_369 != 0;
	}
	return 0;
}

void func_272()
{
	if (iLocal_12)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_273(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_12)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_13)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_13++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_13++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_13 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_13++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_13 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_13++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_13 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_12 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_13 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_13)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_13++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_13++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_13 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_13++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_13 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_13++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_13 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_12 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_13 = 0;
				}
				break;
			}
	}
}

void func_273(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_274()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

