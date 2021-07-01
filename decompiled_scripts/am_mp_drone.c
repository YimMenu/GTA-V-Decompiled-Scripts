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
	struct<3> Local_85[32];
	var uLocal_182 = 0;
	struct<346> Local_183 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_529(ScriptParam_0);
	}
	else
	{
		func_500(0);
	}
	while (true)
	{
		func_499();
		if (func_488())
		{
			func_500(0);
		}
		if (func_482())
		{
			func_500(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_481(6))
	{
		func_480();
		func_479();
		func_478();
		func_474();
		func_473();
	}
	func_470();
	func_468();
	func_464();
	func_461();
	if (func_481(0))
	{
		func_411();
	}
	else if (func_481(1))
	{
		if (!func_410())
		{
			func_403();
			func_386();
		}
		else
		{
			func_385(1);
			func_384(7);
		}
	}
	else if (func_481(2))
	{
		func_377();
	}
	else if (func_481(3))
	{
		func_369();
	}
	else if (func_481(4))
	{
		func_368();
		func_367();
		func_365();
		func_364();
		func_363();
		func_362();
		func_361();
		func_353();
		func_349();
		func_332();
		func_330();
		func_288();
		func_287();
		func_271();
		func_377();
		func_268();
		if (func_261(0))
		{
			func_260();
			return;
		}
		func_256();
		func_250();
		func_238(0);
		func_222();
		func_213();
		func_205();
		func_184();
		func_177();
		func_175();
		func_99();
		func_84();
		func_82();
		func_81();
	}
	else if (func_481(5))
	{
		func_33();
	}
	else if (func_481(7))
	{
		func_26();
	}
	if (!func_481(4) && !func_481(6))
	{
		func_20();
	}
	func_5();
	func_4();
	func_3();
}

void func_3()
{
	Local_183.f_45++;
	if (Local_183.f_45 >= 32)
	{
		Local_183.f_45 = 0;
	}
}

void func_4()
{
	if (Local_183.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[Local_183.f_45 /*3*/].f_2))
		{
			if (Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_59[Local_183.f_45] != NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2))
			{
				Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_59[Local_183.f_45] = NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2);
			}
		}
	}
}

void func_5()
{
	int iVar0;
	
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_183.f_45);
	if (PLAYER::PLAYER_ID() != iVar0)
	{
		if (func_19(iVar0, 1, 1))
		{
			if (func_17(func_18()))
			{
				if (MISC::IS_BIT_SET(Local_183.f_7, Local_183.f_45))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
					{
						MISC::CLEAR_BIT(&(Local_183.f_7), Local_183.f_45);
					}
				}
				if (func_14(iVar0, 0))
				{
					if (!MISC::IS_BIT_SET(Local_183.f_7, Local_183.f_45) && func_9(iVar0))
					{
						func_7(iVar0, 1);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_183.f_158, iVar0, true);
						MISC::SET_BIT(&(Local_183.f_7), Local_183.f_45);
					}
				}
				else if ((SYSTEM::VDIST2(func_6(iVar0), Local_183.f_149) > 504100f && !func_481(1)) && !func_481(3))
				{
					if (MISC::IS_BIT_SET(Local_183.f_7, Local_183.f_45))
					{
						func_7(iVar0, 0);
						NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_183.f_158, iVar0, false);
						MISC::CLEAR_BIT(&(Local_183.f_7), Local_183.f_45);
						MISC::CLEAR_BIT(&(Local_183.f_8), Local_183.f_45);
					}
				}
			}
			else if (func_14(iVar0, 1) && func_9(iVar0))
			{
				if (!MISC::IS_BIT_SET(Local_183.f_8, Local_183.f_45))
				{
					func_7(iVar0, 1);
					MISC::SET_BIT(&(Local_183.f_8), Local_183.f_45);
				}
			}
			else if (MISC::IS_BIT_SET(Local_183.f_8, Local_183.f_45))
			{
				func_7(iVar0, 0);
				MISC::CLEAR_BIT(&(Local_183.f_8), Local_183.f_45);
				MISC::CLEAR_BIT(&(Local_183.f_7), Local_183.f_45);
			}
		}
	}
}

Vector3 func_6(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.x = -627821011;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	iVar3 = func_8(iParam0);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_9(int iParam0)
{
	if (func_13(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_11(iParam0))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_10(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_12()
{
	return -1;
}

int func_13(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_12())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_14(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	Var0 = { func_6(iParam0) };
	if (bParam1)
	{
		if (func_16())
		{
			if (func_17(func_15()))
			{
				if (SYSTEM::VDIST2(Var0, ENTITY::GET_ENTITY_COORDS(func_15(), true)) < 490000f)
				{
					return 1;
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(Var0, Local_183.f_149) < 490000f)
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	if (Global_1590528 != func_12())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1370325))
		{
			return Global_1370325;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1694882[Global_1590528]))
		{
			return Global_1694882[Global_1590528];
		}
	}
	return -1;
}

bool func_16()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 8);
}

int func_17(int iParam0)
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

int func_18()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1689733.f_20;
	}
	return -1;
}

int func_19(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2440277.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	int iVar0;
	
	if (Local_183.f_155)
	{
		if (func_25(&(Local_183.f_248)))
		{
			if (func_24())
			{
				iVar0 = Global_262145.f_24782;
			}
			else
			{
				iVar0 = Global_262145.f_24155;
			}
			if (func_22(&(Local_183.f_248), iVar0, 0))
			{
				func_21(&(Local_183.f_248));
				Local_183.f_18 = 100;
				MISC::CLEAR_BIT(&(Local_183.f_5), 4);
				MISC::CLEAR_BIT(&(Local_183.f_5), 3);
				MISC::CLEAR_BIT(&(Local_183.f_5), 24);
				Local_183.f_155 = 0;
			}
		}
	}
}

void func_21(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
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

void func_23(var uParam0, bool bParam1, bool bParam2)
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

bool func_24()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 2);
}

bool func_25(var uParam0)
{
	return uParam0->f_1;
}

void func_26()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if (!func_27())
			{
				func_500(1);
			}
			else
			{
				func_500(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
	else if (!func_27())
	{
		func_500(1);
	}
	else
	{
		func_500(0);
	}
}

int func_27()
{
	if (func_32())
	{
		return 1;
	}
	if (func_31())
	{
		return 1;
	}
	if (func_30() && func_28(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_29(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

bool func_30()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 5);
}

bool func_31()
{
	return MISC::IS_BIT_SET(Global_1689733, 24);
}

bool func_32()
{
	return MISC::IS_BIT_SET(Global_1689733, 16);
}

void func_33()
{
	int iVar0;
	
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 199, true);
	PAD::DISABLE_CONTROL_ACTION(0, 200, true);
	func_80();
	func_78();
	func_71(1);
	if (!MISC::IS_BIT_SET(Local_183.f_5, 1))
	{
		if (!func_41() && !func_40())
		{
			if ((func_39() || func_24()) || func_38())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_183.f_158), true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_34))
		{
			Local_183.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_34, "HUD_Static_Loop", Local_183.f_156, true);
		}
		if (!func_37())
		{
			PAD::SET_PAD_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER(func_36());
			MISC::SET_BIT(&(Local_183.f_6), 0);
		}
		MISC::SET_BIT(&(Local_183.f_5), 1);
	}
	else if (!func_25(&(Local_183.f_244)))
	{
		func_23(&(Local_183.f_244), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_35())
		{
			iVar0 = 500;
		}
		else if (func_16() && func_34())
		{
			iVar0 = 150;
		}
		if (func_22(&(Local_183.f_244), iVar0, 0) || func_37())
		{
			if (Local_183.f_38 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_38))
				{
					Local_183.f_38 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_38, "HUD_Disconnect", Local_183.f_156, true);
				}
			}
			func_385(1);
			func_384(7);
		}
	}
}

bool func_34()
{
	return Global_2540612.f_342;
}

bool func_35()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 4);
}

char* func_36()
{
	if (func_16())
	{
		return "MissileOutOfRange";
	}
	return "RemixDrone";
}

bool func_37()
{
	return MISC::IS_BIT_SET(Global_1689733, 20);
}

bool func_38()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 3);
}

bool func_39()
{
	return MISC::IS_BIT_SET(Global_1689733, 11);
}

bool func_40()
{
	return Global_2515794;
}

int func_41()
{
	if ((func_70(PLAYER::PLAYER_ID(), 0) && Global_1319171 == 1) && func_42())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	char* sVar0;
	
	if ((Global_1319171 != -1 || Global_1319177 != -1) || Global_1319180 != -1)
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
		if (func_62(PLAYER::PLAYER_PED_ID()))
		{
			sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
		}
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_a", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_b", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "idle_c", 3))
		{
			return 0;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_59(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_58(PLAYER::PLAYER_ID());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && func_56(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)))
			{
				return 1;
			}
			if (!func_55(Global_4456448.f_82708))
			{
				if (func_59(iVar0))
				{
					if (func_54(iVar0))
					{
						return 1;
					}
					else if (func_11(PLAYER::PLAYER_ID()) || func_53())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1689762)
	{
		return 1;
	}
	if (func_52(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_51(PLAYER::PLAYER_ID());
		if (func_19(iVar0, 0, 1))
		{
			if ((((((func_11(iVar0) && func_29(func_57(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), false)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_50(iVar0))
			{
				return 1;
			}
			else if (func_11(PLAYER::PLAYER_ID()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_70(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_49(PLAYER::PLAYER_ID());
		if (func_19(iVar0, 0, 1))
		{
			if ((((Global_1590527 != func_12() && func_11(Global_1590527)) && func_29(func_57(Global_1590527)) == 11) && func_48(Global_1590527, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590527), false), joaat("terbyte")))
			{
				return 1;
			}
			else if (func_47(iVar0))
			{
				return 1;
			}
			else if (func_11(PLAYER::PLAYER_ID()) || func_53())
			{
				return 1;
			}
		}
	}
	if (func_46(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != func_12())
		{
			iVar0 = Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9;
			if (func_19(iVar0, 0, 1))
			{
				if (func_11(PLAYER::PLAYER_ID()) || func_53())
				{
					return 1;
				}
			}
		}
	}
	if (func_52(PLAYER::PLAYER_ID()) || func_45(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319177)
		{
			case 1:
				if (Global_262145.f_22597)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22598)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22599)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319175 == 1)
	{
		return 1;
	}
	if (func_44(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574448 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_44(int iParam0)
{
	return Global_262145.f_5009[iParam0] == Global_4456448.f_82708;
}

int func_45(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_12())
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (iParam0 != func_12())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_3, 4);
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_19(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426097[iParam0 /*443*/].f_314.f_9;
}

int func_50(int iParam0)
{
	if (iParam0 != func_12())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_2, 6);
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426097[iParam0 /*443*/].f_314.f_9;
}

int func_52(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_12())
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

bool func_53()
{
	return MISC::IS_BIT_SET(Global_1678289, 6);
}

int func_54(int iParam0)
{
	if (iParam0 != func_12())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

bool func_55(int iParam0)
{
	return Global_262145.f_5000[4] == iParam0;
}

int func_56(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return Global_2426097[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 == func_12())
	{
		return iParam0;
	}
	return Global_2426097[iParam0 /*443*/].f_314.f_9;
}

int func_59(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_12())
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)
{
	if (func_61(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_17(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = -1;
	iVar3 = -1;
	if (iVar0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_68(iParam0, 6);
		if (iVar1 >= 256)
		{
			iVar2 = func_64(iVar0, iVar1, 6, 4);
			iVar3 = func_63(iVar2);
		}
		if (((((((((((((iVar1 >= 0 && iVar1 <= 15) || (iVar1 >= 96 && iVar1 <= 111)) || (iVar1 >= 112 && iVar1 <= 127)) || (iVar1 >= 128 && iVar1 <= 143)) || (iVar1 >= 192 && iVar1 <= 207)) || (iVar1 >= 224 && iVar1 <= 239)) || iVar3 == 0) || iVar3 == 6) || iVar3 == 7) || iVar3 == 8) || iVar3 == 12) || iVar3 == 14) || (iVar2 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("HIGH_HEELS"), 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar17 = (iParam1 - func_67(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 7, -1, true, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var19);
		iVar36 = (iParam1 - func_65(iParam0, func_66(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76769.f_26[iParam2] && iParam1 == Global_76769[iParam2]) && Global_76769.f_13[iParam2] != 0)
		{
			return Global_76769.f_13[iParam2];
		}
		iVar37 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 7, -1, false, -1, func_66(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar36, &Var19);
		Global_76769.f_13[iParam2] = Var19.f_1;
		Global_76769[iParam2] = iParam1;
		Global_76769.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_65(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_66(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_69(iParam0, iVar1, iVar2, iParam1);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_66(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_12())
			{
				return func_29(Global_2426097[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

void func_71(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_76(0))
		{
			func_72(iParam0);
		}
		MISC::SET_BIT(&Global_7552, 2);
	}
}

void func_72(int iParam0)
{
	if (func_77())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_75())
		{
			func_74(1, 1);
		}
		else
		{
			func_74(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7552, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 30);
	}
	if (!func_73())
	{
		Global_19681.f_1 = 3;
	}
}

int func_73()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_74(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_76(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19618);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
}

bool func_75()
{
	return MISC::IS_BIT_SET(Global_1689733, 5);
}

int func_76(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_77()
{
	return MISC::IS_BIT_SET(Global_1689733, 19);
}

void func_78()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_79();
}

void func_79()
{
	Global_22411.f_134 = 1;
}

void func_80()
{
	Global_1312684 = 1;
}

void func_81()
{
	if (func_30())
	{
		if (func_31())
		{
			if (func_17(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 124, true);
			}
		}
	}
}

void func_82()
{
	char* sVar0;
	
	if (!func_83())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_173[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_35())
				{
					Local_183.f_173[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_183.f_158), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_183.f_173[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_183.f_158), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
}

int func_83()
{
	if (func_35())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

void func_84()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_183.f_160))
		{
			STREAMING::REQUEST_MODEL(func_98());
			if (STREAMING::HAS_MODEL_LOADED(func_98()))
			{
				if (!MISC::IS_BIT_SET(Local_183.f_5, 6))
				{
					if (func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) + 1);
						MISC::SET_BIT(&(Local_183.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_183.f_160 = PED::CREATE_PED(26, func_98(), Local_183.f_149, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_183.f_158)), false, false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_183.f_160, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_183.f_160, false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_183.f_160, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_183.f_160, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_98());
					PED::SET_PED_CONFIG_FLAG(Local_183.f_160, 118, false);
					PED::SET_PED_CONFIG_FLAG(Local_183.f_160, 108, true);
					PED::SET_PED_CONFIG_FLAG(Local_183.f_160, 208, true);
					ENTITY::SET_ENTITY_PROOFS(Local_183.f_160, true, true, true, true, true, false, false, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_183.f_160, NETWORK::NET_TO_OBJ(Local_183.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true);
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_183.f_160, false, false);
					Global_1689733.f_23 = Local_183.f_160;
				}
			}
		}
		else if (func_17(Local_183.f_160))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_183.f_160))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_183.f_160, false, false);
			}
			if (!func_90(PLAYER::PLAYER_ID()) && !func_87(PLAYER::PLAYER_ID()))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_86(Global_1575017);
				}
			}
			else if ((Global_1689733.f_4 == -1 || Global_1689733.f_4 == 0) || Global_1689733.f_4 == Global_1575006)
			{
				func_86(Global_1575017);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_183.f_160) != func_85())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_183.f_160, func_85());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_183.f_160))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_183.f_160, NETWORK::NET_TO_OBJ(Local_183.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_183.f_160, false, false);
			}
		}
	}
}

int func_85()
{
	if (Global_1689733.f_4 != -1 && Global_1689733.f_4 != 0)
	{
		return Global_1689733.f_4;
	}
	return Global_1575017;
}

void func_86(int iParam0)
{
	if (Global_1689733.f_4 != iParam0)
	{
		Global_1689733.f_4 = iParam0;
	}
}

int func_87(int iParam0)
{
	if (func_89(iParam0) == 236 || func_89(iParam0) == 150)
	{
		return func_88(iParam0);
	}
	return 0;
}

int func_88(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

bool func_90(int iParam0)
{
	return func_91(iParam0, 20);
}

bool func_91(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

bool func_92(int iParam0, bool bParam1, bool bParam2)
{
	return func_93(2, iParam0, 1, bParam1, bParam2);
}

int func_93(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1389439, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_97(iParam0) - func_96(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_95(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_96(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_97(iParam0) - func_96(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_94(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389439.f_1;
			break;
		
		case 1:
			return Global_1389439.f_2;
			break;
		
		case 2:
			return Global_1389439.f_3;
			break;
	}
	return 0;
}

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426097[iVar0 /*443*/].f_213;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426097[iVar0 /*443*/].f_214;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2426097[iVar0 /*443*/].f_215;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389447;
			break;
		
		case 1:
			return Global_1389448;
			break;
		
		case 2:
			return Global_1389449;
			break;
	}
	return 0;
}

int func_98()
{
	return joaat("g_m_m_chigoon_01");
}

void func_99()
{
	if (func_174())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_RENDERING(Local_183.f_168))
		{
			if (!func_83())
			{
				func_165();
				func_131();
			}
			else
			{
				func_112();
				func_102();
			}
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			func_101(1);
			func_100(2);
		}
	}
}

void func_100(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_101(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_102()
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_183.f_169))
	{
		if (func_16())
		{
			Local_183.f_169 = func_111();
		}
		else
		{
			Local_183.f_169 = func_110();
		}
		return;
	}
	iVar0 = func_18();
	if (iVar0 < 0 || !func_17(iVar0))
	{
		return;
	}
	if (func_16())
	{
		func_106();
	}
	func_105(Local_183.f_169, 0);
	func_104(Local_183.f_169, 3, 3, 3);
	func_103(Local_183.f_169, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_183.f_169, 255, 255, 255, 0, 0);
}

void func_103(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_WEAPON_VALUES");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_105(int iParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_106()
{
	int iVar0;
	float fVar1;
	
	iVar0 = 1;
	if (func_16())
	{
		iVar0 = 10;
	}
	fVar1 = Local_183.f_120;
	if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			Local_183.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_37, "Out_Of_Bounds_Alarm_Loop", Local_183.f_156, true);
		}
		if (fVar1 >= (func_109() - IntToFloat((50 * iVar0))) && fVar1 < (func_109() - IntToFloat((45 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((45 * iVar0))) && fVar1 < (func_109() - IntToFloat((40 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((40 * iVar0))) && fVar1 < (func_109() - IntToFloat((35 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((35 * iVar0))) && fVar1 < (func_109() - IntToFloat((30 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((30 * iVar0))) && fVar1 < (func_109() - IntToFloat((25 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((25 * iVar0))) && fVar1 < (func_109() - IntToFloat((20 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((20 * iVar0))) && fVar1 < (func_109() - IntToFloat((15 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((15 * iVar0))) && fVar1 < (func_109() - IntToFloat((10 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((10 * iVar0))) && fVar1 < (func_109() - IntToFloat((5 * iVar0))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (fVar1 >= (func_109() - IntToFloat((5 * iVar0))) && fVar1 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			AUDIO::STOP_SOUND(Local_183.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_37);
			Local_183.f_37 = -1;
		}
	}
}

void func_107(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_WARNING_FLASH_RATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_108(char* sParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, sParam0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_109()
{
	if (Global_1689733.f_8 == 0f)
	{
		return Global_262145.f_24163;
	}
	return Global_1689733.f_8;
}

var func_110()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_123341)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x67D02A194A2FC2BD(sVar0);
}

var func_111()
{
	char* sVar0;
	
	sVar0 = "SUBMARINE_MISSILES";
	return unk_0x67D02A194A2FC2BD(sVar0);
}

void func_112()
{
	if (func_16())
	{
		if (!func_130())
		{
			return;
		}
	}
	if (!MISC::IS_BIT_SET(Local_183.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(20, "DRONE_SPACE", -1);
			func_126(21, "DRONE_POSITION", -1);
			if (func_35())
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					func_125(208, "DRONE_SPEEDU", -1, 0);
					func_125(207, "DRONE_SLOWD", -1, 0);
				}
				else
				{
					func_125(209, "DRONE_SPEEDU", -1, 0);
					func_125(210, "DRONE_SLOWD", -1, 0);
				}
			}
			func_125(75, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_183.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 17))
		{
			MISC::SET_BIT(&(Local_183.f_5), 17);
			MISC::CLEAR_BIT(&(Local_183.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_183.f_5), 17);
		MISC::CLEAR_BIT(&(Local_183.f_5), 16);
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_121(bParam4, bParam8))
	{
		return;
	}
	if (func_119())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_116(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_22550.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_115(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_22550.f_4964[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_115(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_114(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_22550.f_5026[iVar1] != 361 && MISC::IS_BIT_SET(Global_22550.f_5052, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4269680.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_22550.f_4769);
				func_115(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_114(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4269680.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_22550.f_8417 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_22550.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_114(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_115(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

bool func_116(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_117(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
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

int func_117(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_118();
	}
	if (Global_1312876[iVar1] == 1)
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

int func_118()
{
	return Global_1312763;
}

int func_119()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_120())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_120()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_121(bool bParam0, bool bParam1)
{
	if (Global_2440277.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_123(8, -1) && func_122() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77093) || Global_22550.f_8416) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_122()
{
	return Global_1312830;
}

bool func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

int func_124(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22550.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22550.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22550.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_125(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		MISC::SET_BIT(&(Global_22550.f_5052), Global_22550.f_4769);
	}
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_126(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = 361;
	Global_22550.f_5039[Global_22550.f_4769] = iParam0;
	Global_22550.f_4769++;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_22550.f_5052 = 0;
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_124(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_22550.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_128(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_124(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_129(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_129(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

bool func_130()
{
	return MISC::IS_BIT_SET(Local_183.f_6, 7);
}

void func_131()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_183.f_169))
	{
		Local_183.f_169 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
		return;
	}
	if ((func_38() || func_77()) || func_164(0))
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_38() || func_77()) || func_24())
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_108("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_24())
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_38() && !func_77())
	{
		func_108("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_108("SET_HEADING_METER_IS_VISIBLE", 1);
	func_108("SET_ZOOM_METER_IS_VISIBLE", 1);
	if (((!func_38() && !func_77()) && !func_24()) && func_163())
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	if (func_162())
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_108("SET_TRANQUILIZE_METER_IS_VISIBLE", 0);
	}
	func_108("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_108("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_160(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_183.f_120 >= (func_109() - 50f) || Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 50)))
		{
			func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_159();
			if (MISC::IS_BIT_SET(Local_183.f_5, 13))
			{
				MISC::CLEAR_BIT(&(Local_183.f_5), 13);
			}
		}
		else
		{
			func_155(func_156());
			if (!MISC::IS_BIT_SET(Local_183.f_5, 13))
			{
				func_108("SET_SOUND_WAVE_IS_VISIBLE", 1);
				MISC::SET_BIT(&(Local_183.f_5), 13);
			}
		}
	}
	else
	{
		func_108("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_159();
	}
	func_108("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_38() && !func_77())
	{
		if (!func_24())
		{
			func_154(Local_183.f_18);
		}
		else
		{
			func_153(Local_183.f_18);
		}
		if (!func_164(0))
		{
			func_152(Local_183.f_19);
		}
	}
	if (func_162())
	{
		func_151(Local_183.f_24);
	}
	if (func_163())
	{
		func_150(Local_183.f_20);
	}
	func_149(0, "DRONE_ZOOM_1");
	func_149(1, "");
	func_149(2, "DRONE_ZOOM_2");
	func_149(3, "");
	func_149(4, "DRONE_ZOOM_3");
	func_147();
	func_145();
	func_143();
	func_142(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_183.f_158)) + 180f)));
	if (func_160(PLAYER::PLAYER_ID()) == 240)
	{
		func_141(func_156());
	}
	if (func_140())
	{
		func_133();
	}
	else if (func_24() || func_38())
	{
		func_132();
	}
	else if (func_31())
	{
		func_106();
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_183.f_169, 255, 255, 255, 0, 0);
}

void func_132()
{
	if (Local_183.f_149.f_2 >= (func_109() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			Local_183.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_37, "Out_Of_Bounds_Alarm_Loop", Local_183.f_156, true);
		}
		if (Local_183.f_149.f_2 >= (func_109() - 20f) && Local_183.f_149.f_2 < (func_109() - 16f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 16f) && Local_183.f_149.f_2 < (func_109() - 13f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 13f) && Local_183.f_149.f_2 < (func_109() - 10f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 10f) && Local_183.f_149.f_2 < (func_109() - 8f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 8f) && Local_183.f_149.f_2 < (func_109() - 6f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 6f) && Local_183.f_149.f_2 < (func_109() - 4f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 4f) && Local_183.f_149.f_2 < (func_109() - 3f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 3f) && Local_183.f_149.f_2 < (func_109() - 2f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 2f) && Local_183.f_149.f_2 < (func_109() - 1f))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if (Local_183.f_149.f_2 >= (func_109() - 1f) && Local_183.f_149.f_2 < func_109())
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			AUDIO::STOP_SOUND(Local_183.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_37);
			Local_183.f_37 = -1;
		}
	}
}

void func_133()
{
	if (Local_183.f_120 >= (func_109() - 50f) || Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 50)))
	{
		func_134();
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			Local_183.f_37 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_37, "Out_Of_Bounds_Alarm_Loop", Local_183.f_156, true);
		}
		if ((Local_183.f_120 >= (func_109() - 50f) && Local_183.f_120 < (func_109() - 45f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 50)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 45))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.1f);
		}
		else if ((Local_183.f_120 >= (func_109() - 45f) && Local_183.f_120 < (func_109() - 40f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 45)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 40))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.2f);
		}
		else if ((Local_183.f_120 >= (func_109() - 40f) && Local_183.f_120 < (func_109() - 35f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 40)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 35))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.3f);
		}
		else if ((Local_183.f_120 >= (func_109() - 35f) && Local_183.f_120 < (func_109() - 30f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 35)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 30))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.4f);
		}
		else if ((Local_183.f_120 >= (func_109() - 30f) && Local_183.f_120 < (func_109() - 25f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 30)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 25))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.5f);
		}
		else if ((Local_183.f_120 >= (func_109() - 25f) && Local_183.f_120 < (func_109() - 20f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 25)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 20))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.6f);
		}
		else if ((Local_183.f_120 >= (func_109() - 20f) && Local_183.f_120 < (func_109() - 15f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 20)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 15))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.7f);
		}
		else if ((Local_183.f_120 >= (func_109() - 15f) && Local_183.f_120 < (func_109() - 10f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 15)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 10))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.8f);
		}
		else if ((Local_183.f_120 >= (func_109() - 10f) && Local_183.f_120 < (func_109() - 5f)) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 10)) && Local_183.f_121 < IntToFloat((Global_262145.f_24162 - 5))))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(0.9f);
		}
		else if ((Local_183.f_120 >= (func_109() - 5f) && Local_183.f_120 < func_109()) || (Local_183.f_121 >= IntToFloat((Global_262145.f_24162 - 5)) && Local_183.f_121 < IntToFloat(Global_262145.f_24162)))
		{
			func_108("SET_WARNING_IS_VISIBLE", 1);
			func_107(1f);
		}
	}
	else
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			AUDIO::STOP_SOUND(Local_183.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_37);
			Local_183.f_37 = -1;
		}
	}
}

void func_134()
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !MISC::IS_BIT_SET(Global_1678289.f_3, 15))
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_137(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_136("HACK_DRONE_DIS", -1);
				iVar0++;
				func_135(22045, iVar0, -1, 1);
				MISC::SET_BIT(&(Global_1678289.f_3), 15);
			}
		}
	}
}

bool func_135(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_118();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

void func_136(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	iVar0 = 0;
	iVar1 = func_139(iParam0, iParam1);
	iVar2 = func_138(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_118();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::GET_PACKED_TU_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

bool func_140()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 1);
}

void func_141(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_142(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_HEADING");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_143()
{
	if (func_24())
	{
		if (MISC::IS_BIT_SET(Local_183.f_5, 11) && !Local_183.f_155)
		{
			func_144(1);
		}
		else
		{
			func_144(0);
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 11) || MISC::IS_BIT_SET(Local_183.f_5, 23))
	{
		func_144(1);
	}
	else
	{
		func_144(0);
	}
}

void func_144(bool bParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_RETICLE_ON_TARGET");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_145()
{
	if (MISC::IS_BIT_SET(Local_183.f_5, 4) || (MISC::IS_BIT_SET(Local_183.f_5, 3) && func_24()))
	{
		if (Local_183.f_18 == 100)
		{
			func_146(1);
		}
		else if (Local_183.f_18 != 0 && Local_183.f_18 != 100)
		{
			func_146(2);
		}
	}
	else
	{
		func_146(0);
	}
}

void func_146(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_RETICLE_STATE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_147()
{
	switch (Local_183.f_25)
	{
		case 0:
			func_148(0);
			break;
		
		case 1:
			func_148(2);
			break;
		
		case 2:
			func_148(4);
			break;
	}
}

void func_148(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_ZOOM");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_149(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_ZOOM_LABEL");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	func_114(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_150(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_BOOST_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_151(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_TRANQUILIZE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_152(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_153(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_EMP_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_154(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_183.f_169, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_155(float fParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_44))
	{
		Local_183.f_44 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_44, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", true);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_44, "signalstrength", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_44, "signalstrength", fParam0);
	}
}

float func_156()
{
	float fVar0;
	
	if (func_160(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
		{
			fVar0 = func_157(NETWORK::NET_TO_OBJ(Local_183.f_158), func_158(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_157(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

Vector3 func_158()
{
	if (func_160(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1695005;
	}
	return 0f, 0f, 0f;
}

void func_159()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_44))
	{
		AUDIO::STOP_SOUND(Local_183.f_44);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_44);
		Local_183.f_44 = -1;
	}
}

int func_160(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_161(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_162()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 6);
}

int func_163()
{
	if (func_162())
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_1689733.f_24))
		{
			return 0;
		}
	}
	return 1;
}

int func_164(bool bParam0)
{
	if (func_140())
	{
		if (bParam0)
		{
			if (MISC::IS_BIT_SET(Local_183.f_5, 4))
			{
				return 1;
			}
		}
	}
	if (func_162())
	{
		return 1;
	}
	return 0;
}

void func_165()
{
	int iVar0;
	int iVar1;
	
	if (func_77())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_183.f_5, 16))
	{
		if (func_128(0, -1, 0))
		{
			func_127(-1);
			func_126(21, "DRONE_MOVE", -1);
			func_126(20, "DRONE_POSITION", -1);
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				func_125(210, "CELL_284", -1, 0);
				if ((!func_38() && !func_24()) && func_163())
				{
					func_125(209, "BOOST_DRONE_E", -1, 0);
				}
				func_125(208, "MOVE_DRONE_UP", -1, 0);
				func_125(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_126(29, "CELL_284", -1);
				if ((!func_38() && !func_24()) && func_163())
				{
					func_125(203, "BOOST_DRONE_E", -1, 0);
				}
				func_125(209, "MOVE_DRONE_UP", -1, 0);
				func_125(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_38())
			{
				iVar0 = 206;
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iVar0 = 237;
				}
				if (func_24())
				{
					func_125(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_125(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iVar1 = 238;
				}
				if (!func_164(0))
				{
					func_125(iVar1, "MOVE_DRONE_EX", -1, 0);
				}
				else if (func_172())
				{
					func_125(iVar1, "MOVE_DRONE_TRG", -1, 0);
				}
			}
			if (!func_24())
			{
				if ((((func_171(0) || func_171(1)) || func_170()) || RECORDING::_IS_RECORDING()) || func_166(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_125(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_125(80, "MOVE_DRONE_RE", -1, 0);
			MISC::SET_BIT(&(Local_183.f_5), 16);
		}
	}
	else
	{
		func_113(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 17))
		{
			MISC::SET_BIT(&(Local_183.f_5), 17);
			MISC::CLEAR_BIT(&(Local_183.f_5), 16);
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 17))
	{
		MISC::CLEAR_BIT(&(Local_183.f_5), 17);
		MISC::CLEAR_BIT(&(Local_183.f_5), 16);
	}
}

int func_166(int iParam0)
{
	if (func_169(func_160(iParam0)))
	{
		if (func_168() != func_12())
		{
			if (func_167() == func_168())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

int func_168()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

int func_169(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_170()
{
	return Global_22411.f_135;
}

bool func_171(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

int func_172()
{
	if (func_173() <= 0)
	{
		return 0;
	}
	if (func_162())
	{
		return 1;
	}
	return 0;
}

int func_173()
{
	return Global_1689733.f_6;
}

bool func_174()
{
	return MISC::IS_BIT_SET(Global_1689733, 7);
}

void func_175()
{
	int iVar0;
	
	if (!func_176())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if ((CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_RENDERING(Local_183.f_168)) && !func_77())
			{
				iVar0 = 80;
				if (func_83())
				{
					iVar0 = 75;
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_183.f_5, 7))
					{
						MISC::SET_BIT(&(Local_183.f_5), 7);
					}
				}
			}
		}
	}
}

int func_176()
{
	if (func_16())
	{
		if (!func_130())
		{
			return 0;
		}
	}
	return 1;
}

void func_177()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_183() || !func_166(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_182(1);
	func_181(iVar0);
	iVar1 = func_182(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_183.f_140, 2f, iVar1, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_183.f_161)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_183.f_5, 26))
			{
				func_180(func_168(), 1, 1, 0);
				MISC::SET_BIT(&(Local_183.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_183.f_161))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_183.f_161, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_183.f_161) == 999)
		{
			if (!MISC::IS_BIT_SET(Local_183.f_5, 26))
			{
				func_180(func_168(), 1, 1, 0);
				MISC::SET_BIT(&(Local_183.f_5), 26);
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 26))
	{
		iVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_183.f_140, 2f, iVar0, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_183.f_161))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_183.f_161, false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, false, false);
			}
			func_178(1);
		}
	}
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		if (!func_179())
		{
			MISC::SET_BIT(&Global_1689733, 1);
		}
	}
	else if (func_179())
	{
		MISC::CLEAR_BIT(&Global_1689733, 1);
	}
}

bool func_179()
{
	return MISC::IS_BIT_SET(Global_1689733, 1);
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	int iVar5;
	
	Var0 = -240257097;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	iVar5 = 0;
	if (iParam0 != func_12())
	{
		MISC::SET_BIT(&iVar5, iParam0);
	}
	if (!iVar5 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 5, iVar5);
	}
}

bool func_181(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_182(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1689733.f_19 != 0)
		{
			return Global_1689733.f_19;
		}
		else
		{
			return joaat("ba_prop_battle_secpanel");
		}
	}
	else
	{
		return joaat("ba_prop_battle_secpanel_dam");
	}
	return 0;
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_1689733, 14);
}

void func_184()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((MISC::IS_BIT_SET(Local_183.f_5, 1) || func_195()) || func_194())
	{
		Local_183.f_18 = 0;
		Local_183.f_19 = 0;
		if (!MISC::IS_BIT_SET(Local_183.f_5, 10))
		{
			MISC::SET_BIT(&(Local_183.f_5), 10);
		}
		return;
	}
	if (!func_194())
	{
		if (MISC::IS_BIT_SET(Local_183.f_5, 10))
		{
			Local_183.f_18 = 100;
			MISC::CLEAR_BIT(&(Local_183.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if ((CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_RENDERING(Local_183.f_168)) && !MISC::IS_BIT_SET(Local_183.f_5, 2))
			{
				if ((!MISC::IS_BIT_SET(Local_183.f_5, 4) && !MISC::IS_BIT_SET(Local_183.f_5, 3)) && !Local_183.f_155)
				{
					iVar0 = 206;
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						iVar0 = 237;
					}
					if ((((PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !MISC::IS_BIT_SET(Local_183.f_5, 5)) && !MISC::IS_BIT_SET(Local_183.f_5, 24)) && !func_77())
					{
						MISC::SET_BIT(&(Local_183.f_5), 24);
						if (MISC::IS_BIT_SET(Local_183.f_5, 11) || MISC::IS_BIT_SET(Local_183.f_5, 23))
						{
							Local_183.f_27++;
						}
					}
					if (func_24())
					{
						func_191();
					}
					else
					{
						func_190();
					}
				}
				else if (func_25(&(Local_183.f_248)))
				{
					if (func_24())
					{
						iVar1 = Global_262145.f_24782;
					}
					else
					{
						iVar1 = Global_262145.f_24155;
					}
					if (func_22(&(Local_183.f_248), iVar1, 0))
					{
						func_21(&(Local_183.f_248));
						Local_183.f_18 = 100;
						if (Local_183.f_32 != -1)
						{
							AUDIO::STOP_SOUND(Local_183.f_32);
							AUDIO::RELEASE_SOUND_ID(Local_183.f_32);
							Local_183.f_32 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_35))
						{
							AUDIO::STOP_SOUND(Local_183.f_35);
							AUDIO::RELEASE_SOUND_ID(Local_183.f_35);
							Local_183.f_35 = -1;
						}
						MISC::CLEAR_BIT(&(Local_183.f_5), 4);
						MISC::CLEAR_BIT(&(Local_183.f_5), 3);
						MISC::CLEAR_BIT(&(Local_183.f_5), 24);
						Local_183.f_155 = 0;
					}
					else
					{
						iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_248)));
						Local_183.f_18 = (iVar2 / iVar1);
						if (!func_24())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_32))
							{
								Local_183.f_32 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_32, "HUD_Shock_Recharge", Local_183.f_156, true);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_32, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				func_188();
				func_185();
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

void func_185()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	int iVar16;
	
	if (func_172())
	{
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			iVar0 = 238;
		}
		else
		{
			iVar0 = 205;
		}
		if (!MISC::IS_BIT_SET(Local_183.f_6, 6))
		{
			if (!MISC::IS_BIT_SET(Local_183.f_6, 5))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, iVar0) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0))
				{
					MISC::SET_BIT(&(Local_183.f_6), 5);
				}
			}
			else if (Local_183.f_13 == 1)
			{
				if (Local_183.f_243 == 2)
				{
					Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.x)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.x)), SYSTEM::SIN(Var4.x) };
					Var10 = { 10f, 10f, 10f };
					Var13 = { Var1 + Var7 * Var10 };
					iVar16 = Global_262145.f_24156;
					if (MISC::IS_BIT_SET(Local_183.f_5, 23))
					{
						iVar16 = Global_262145.f_24157;
					}
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_183.f_149 + Vector(0f, 0f, 0f), Var13, iVar16, true, joaat("WEAPON_TRANQUILIZER"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_183.f_158), false, false, false, true, 0, 0, 0);
					Local_183.f_24 = 100;
					PAD::SET_PAD_SHAKE(0, 300, 150);
					if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_81))
					{
						Local_183.f_81 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_81, "Remote_Perspective_Fire", NETWORK::NET_TO_OBJ(Local_183.f_158), "DLC_H3_Drone_Tranq_Weapon_Sounds", true, 0);
					}
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Pilot_Perspective_Fire", "DLC_H3_Drone_Tranq_Weapon_Sounds", true);
					if (MISC::IS_BIT_SET(Local_183.f_5, 11) || MISC::IS_BIT_SET(Local_183.f_5, 23))
					{
						Local_183.f_29++;
					}
					func_187((func_173() - 1));
					if (func_173() <= 0)
					{
						Local_183.f_24 = 0;
						MISC::CLEAR_BIT(&(Local_183.f_5), 16);
					}
					MISC::SET_BIT(&(Local_183.f_6), 6);
					func_23(&(Local_183.f_256), 0, 0);
				}
			}
		}
		else
		{
			func_186();
		}
	}
}

void func_186()
{
	int iVar0;
	int iVar1;
	
	if (func_173() > 0)
	{
		if (func_25(&(Local_183.f_256)))
		{
			iVar0 = Global_262145.f_24155;
			if (func_22(&(Local_183.f_256), iVar0, 0))
			{
				MISC::CLEAR_BIT(&(Local_183.f_6), 6);
				MISC::CLEAR_BIT(&(Local_183.f_6), 5);
				func_21(&(Local_183.f_256));
				Local_183.f_24 = 100;
				if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_35))
				{
					AUDIO::STOP_SOUND(Local_183.f_35);
					AUDIO::RELEASE_SOUND_ID(Local_183.f_35);
					Local_183.f_35 = -1;
				}
			}
			else
			{
				iVar1 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_256)));
				Local_183.f_24 = (iVar1 / iVar0);
			}
		}
	}
}

void func_187(int iParam0)
{
	if (Global_1689733.f_6 != iParam0)
	{
		Global_1689733.f_6 = iParam0;
	}
}

void func_188()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	Local_183.f_345.f_2 = 2;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		Local_183.f_345.f_3 = 238;
	}
	else
	{
		Local_183.f_345.f_3 = 205;
	}
	iVar0 = Global_262145.f_24158;
	if (!MISC::IS_BIT_SET(Local_183.f_5, 31))
	{
		Local_183.f_22 = 100;
	}
	if (func_24())
	{
		iVar0 = (iVar0 / 2);
		if (MISC::IS_BIT_SET(Local_183.f_6, 1))
		{
			Local_183.f_21 = ((Local_183.f_23 * (Global_262145.f_24158 / 2)) / 100);
			Local_183.f_21 = ((Global_262145.f_24158 / 2) - Local_183.f_21);
			MISC::CLEAR_BIT(&(Local_183.f_6), 1);
		}
		if (MISC::IS_BIT_SET(Local_183.f_5, 31))
		{
			iVar0 = Local_183.f_21;
		}
	}
	else
	{
		Local_183.f_22 = 100;
	}
	if (!func_164(1))
	{
		if (!func_77() && func_189(&(Local_183.f_345), 1, iVar0))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_36))
			{
				Local_183.f_36 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_36, "Destroyed", NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_156, true, 0);
			}
			HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
			iVar1 = 0;
			if (func_24())
			{
				iVar1 = 69;
			}
			FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_183.f_149, iVar1, 0.5f, true, false, 1f);
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			PAD::SET_PAD_SHAKE(0, 300, 200);
			MISC::SET_BIT(&(Local_183.f_5), 2);
		}
	}
	if (func_25(&(Local_183.f_345)))
	{
		PAD::SET_PAD_SHAKE(0, 300, 20);
		if (!MISC::IS_BIT_SET(Local_183.f_5, 5))
		{
			MISC::SET_BIT(&(Local_183.f_5), 5);
		}
		func_21(&(Local_183.f_272));
		if (!func_22(&(Local_183.f_345), iVar0, 0))
		{
			iVar2 = (Local_183.f_22 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_345)));
			if (!func_24())
			{
				Local_183.f_19 = (iVar2 / iVar0);
			}
			else if (!MISC::IS_BIT_SET(Local_183.f_5, 31))
			{
				Local_183.f_19 = (iVar2 / iVar0);
			}
			else
			{
				Local_183.f_19 = (Local_183.f_23 + (iVar2 / iVar0));
			}
			if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_33))
			{
				Local_183.f_33 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_33, "HUD_Detonate_Charge", Local_183.f_156, true);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 5))
	{
		MISC::CLEAR_BIT(&(Local_183.f_5), 5);
		if (!func_24())
		{
			Local_183.f_19 = 0;
		}
		else
		{
			MISC::SET_BIT(&(Local_183.f_5), 31);
			Local_183.f_22 = (100 - Local_183.f_19);
			Local_183.f_21 = (iVar0 - MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_345)));
			Local_183.f_23 = Local_183.f_19;
			func_21(&(Local_183.f_272));
		}
		if (Local_183.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_183.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_33);
			Local_183.f_33 = -1;
		}
	}
	else if (func_24())
	{
		if (Local_183.f_19 > 0)
		{
			if (Local_183.f_19 <= 2)
			{
				Local_183.f_19 = 0;
			}
			if (!func_25(&(Local_183.f_272)))
			{
				func_23(&(Local_183.f_272), 0, 0);
			}
			else
			{
				iVar3 = Global_262145.f_24158;
				if (!func_22(&(Local_183.f_272), iVar3, 0))
				{
					fVar4 = ((100f - IntToFloat(Local_183.f_22)) / SYSTEM::TO_FLOAT((iVar3 / MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_272)))));
					Local_183.f_19 = (Local_183.f_19 - SYSTEM::ROUND(fVar4));
					Local_183.f_23 = Local_183.f_19;
					Local_183.f_22 = (100 - Local_183.f_19);
					MISC::SET_BIT(&(Local_183.f_6), 1);
				}
				else
				{
					Local_183.f_19 = 0;
				}
			}
		}
		else
		{
			func_21(&(Local_183.f_345));
			MISC::CLEAR_BIT(&(Local_183.f_5), 31);
			MISC::CLEAR_BIT(&(Local_183.f_6), 1);
		}
	}
}

int func_189(var uParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (PAD::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_25(uParam0))
		{
			func_23(uParam0, 0, 0);
		}
		else if (func_22(uParam0, iParam2, 0))
		{
			func_21(uParam0);
			return 1;
		}
	}
	else
	{
		func_21(uParam0);
	}
	return 0;
}

void func_190()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	int iVar15;
	
	if (MISC::IS_BIT_SET(Local_183.f_5, 24))
	{
		if (Local_183.f_13 == 1)
		{
			if (Local_183.f_243 == 2)
			{
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				Var3 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var6 = { (-SYSTEM::SIN(Var3.f_2) * SYSTEM::COS(Var3.x)), (SYSTEM::COS(Var3.f_2) * SYSTEM::COS(Var3.x)), SYSTEM::SIN(Var3.x) };
				Var9 = { 10f, 10f, 10f };
				Var12 = { Var0 + Var6 * Var9 };
				iVar15 = Global_262145.f_24156;
				if (MISC::IS_BIT_SET(Local_183.f_5, 23))
				{
					iVar15 = Global_262145.f_24157;
				}
				if (func_162())
				{
					iVar15 = 1;
				}
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(Local_183.f_149 + Vector(0f, 0f, 0f), Var12, iVar15, true, joaat("weapon_stungun"), PLAYER::PLAYER_PED_ID(), true, true, -1f, NETWORK::NET_TO_OBJ(Local_183.f_158), false, false, false, true, 0, 0, 0);
				Local_183.f_18 = 100;
				Local_183.f_19 = 0;
				PAD::SET_PAD_SHAKE(0, 300, 150);
				if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_35))
				{
					Local_183.f_35 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_156, true, 0);
				}
				if (Local_183.f_33 != -1)
				{
					AUDIO::STOP_SOUND(Local_183.f_33);
					AUDIO::RELEASE_SOUND_ID(Local_183.f_33);
					Local_183.f_33 = -1;
				}
				MISC::SET_BIT(&(Local_183.f_5), 4);
				func_23(&(Local_183.f_248), 0, 0);
			}
		}
	}
}

void func_191()
{
	if ((MISC::IS_BIT_SET(Local_183.f_5, 24) && !MISC::IS_BIT_SET(Local_183.f_5, 3)) && !Local_183.f_155)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_183.f_158), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, false, false, false);
			}
		}
		Local_183.f_18 = 100;
		PAD::SET_PAD_SHAKE(0, 300, 150);
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_35))
		{
			Local_183.f_35 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_35, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_156, true, 0);
		}
		if (Local_183.f_33 != -1)
		{
			AUDIO::STOP_SOUND(Local_183.f_33);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_33);
			Local_183.f_33 = -1;
		}
		func_192(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_183.f_158), true), 0);
		MISC::SET_BIT(&(Local_183.f_5), 3);
		Local_183.f_155 = 1;
		func_23(&(Local_183.f_248), 0, 0);
	}
}

void func_192(struct<3> Param0, bool bParam3)
{
	struct<6> Var0;
	
	Var0 = -152440739;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_193(1, 1) == 0)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_193(1, 1));
		}
	}
	else if (Global_1689733.f_21 != func_12())
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_8(Global_1689733.f_21));
	}
}

int func_193(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_19(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_116(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_194()
{
	return MISC::IS_BIT_SET(Global_1689733, 8);
}

int func_195()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false)) && !MISC::IS_BIT_SET(Local_183.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (func_166(PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2539374, 0))
		{
		}
		else if (func_204())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_183.f_158)) || ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(NETWORK::NET_TO_OBJ(Local_183.f_158)) != 0)
			{
				Local_183.f_26 = 1;
				return 1;
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 2))
	{
		Local_183.f_26 = 4;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 9))
	{
		Local_183.f_26 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 7))
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_183.f_158)) || func_203(NETWORK::NET_TO_ENT(Local_183.f_158), 0))
		{
			if (MISC::IS_BIT_SET(Local_183.f_5, 29))
			{
				Local_183.f_26 = 3;
				return 1;
			}
		}
	}
	if (func_201(PLAYER::PLAYER_ID()))
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_140())
	{
		if (Global_1590527 != func_12())
		{
			if (func_47(Global_1590527))
			{
				Local_183.f_26 = 0;
				return 1;
			}
		}
	}
	if (func_200())
	{
		Local_183.f_26 = 1;
		return 1;
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_198())
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_197())
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_32())
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_37())
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (func_31())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
		{
			Local_183.f_26 = 6;
			return 1;
		}
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HURT(PLAYER::PLAYER_PED_ID()))
		{
			Local_183.f_26 = 6;
			return 1;
		}
		if (func_157(PLAYER::PLAYER_PED_ID(), Local_183.f_152, 1) > 2f)
		{
			Local_183.f_26 = 7;
			return 1;
		}
	}
	if (func_196())
	{
		return 1;
	}
	if (func_16())
	{
		if (func_34())
		{
			return 1;
		}
	}
	return 0;
}

int func_196()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -90000f, -90000f, -1600f };
	Var3 = { 90000f, 90000f, 2600f };
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_IN_AREA(NETWORK::NET_TO_OBJ(Local_183.f_158), Var0, Var3, false, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_197()
{
	return Global_96264;
}

bool func_198()
{
	return MISC::IS_BIT_SET(Global_1689733, 9);
}

int func_199(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1630317[iVar0 /*595*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_200()
{
	struct<3> Var0;
	
	if (Local_183.f_17 == -1945204837)
	{
		if (func_17(NETWORK::NET_TO_OBJ(Local_183.f_158)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_183.f_158)) == -25693127)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_183.f_158), true) };
				if (Var0.f_2 >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (func_17(NETWORK::NET_TO_OBJ(Local_183.f_158)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_183.f_158), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_183.f_158), 2494.398f, -276.2f, -69.09f, 2494.342f, -277.4824f, -67.98756f, 0.7f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		if (func_11(iParam0) && !func_202(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	if (iParam0 != func_12() && func_19(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_203(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_204()
{
	return MISC::IS_BIT_SET(Global_1689733, 15);
}

void func_205()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	int iVar18;
	var uVar19;
	struct<3> Var22;
	int iVar25;
	bool bVar26;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			Var0 = { Local_183.f_149 };
			switch (Local_183.f_13)
			{
				case 0:
					Var3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
					Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					Var9 = { (-SYSTEM::SIN(Var6.f_2) * SYSTEM::COS(Var6.x)), (SYSTEM::COS(Var6.f_2) * SYSTEM::COS(Var6.x)), SYSTEM::SIN(Var6.x) };
					Var12 = { 10f, 10f, 10f };
					if (func_24())
					{
						Var12 = { Global_262145.f_24783, Global_262145.f_24783, Global_262145.f_24783 };
					}
					Var15 = { Var3 + Var9 * Var12 };
					Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_183.f_149, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_183.f_158)), 0f, -0.1f, 0f) };
					Local_183.f_166 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var0, Var15, 123, NETWORK::NET_TO_OBJ(Local_183.f_158), 7);
					if (Local_183.f_166 != 0)
					{
						Local_183.f_13 = 1;
					}
					break;
				
				case 1:
					Local_183.f_243 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_183.f_166, &iVar18, &Var22, &uVar19, &iVar25);
					if (Local_183.f_243 == 2)
					{
						if (iVar18 == 0)
						{
							Local_183.f_14 = 1;
							Var22 = { 0f, 0f, 0f };
							if (MISC::IS_BIT_SET(Local_183.f_5, 11) && !func_24())
							{
								MISC::CLEAR_BIT(&(Local_183.f_5), 11);
							}
							if (MISC::IS_BIT_SET(Local_183.f_5, 23))
							{
								MISC::CLEAR_BIT(&(Local_183.f_5), 23);
							}
							func_212();
						}
						else
						{
							Local_183.f_14 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(iVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(iVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar25, false))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											if (func_210(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!MISC::IS_BIT_SET(Local_183.f_5, 23))
											{
												MISC::SET_BIT(&(Local_183.f_5), 23);
												if (MISC::IS_BIT_SET(Local_183.f_5, 11) && !func_24())
												{
													MISC::CLEAR_BIT(&(Local_183.f_5), 11);
												}
											}
											if (!func_90(PLAYER::PLAYER_ID()) && !func_87(PLAYER::PLAYER_ID()))
											{
												if ((func_209(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) || func_208(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25))) || func_207(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
												{
													func_86(Global_1575017);
													func_206(&(Local_183.f_258), 0, 0);
												}
												else
												{
													func_212();
												}
											}
										}
										if ((((!MISC::IS_BIT_SET(Local_183.f_5, 11) && !bVar26) && func_17(Global_1689733.f_23)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1689733.f_23, iVar25, 511)) && (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar25)))
										{
											MISC::SET_BIT(&(Local_183.f_5), 11);
											if (MISC::IS_BIT_SET(Local_183.f_5, 23))
											{
												MISC::CLEAR_BIT(&(Local_183.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_24())
									{
										if (MISC::IS_BIT_SET(Local_183.f_5, 11))
										{
											MISC::CLEAR_BIT(&(Local_183.f_5), 11);
										}
									}
									if (MISC::IS_BIT_SET(Local_183.f_5, 23))
									{
										MISC::CLEAR_BIT(&(Local_183.f_5), 23);
									}
									func_212();
								}
							}
							else
							{
								func_212();
							}
							Local_183.f_166 = 0;
							Local_183.f_13 = 0;
						}
					}
					else if (Local_183.f_243 == 0)
					{
						Local_183.f_13 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

void func_206(var uParam0, bool bParam1, bool bParam2)
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

int func_207(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(iParam0) == 7 || PED::GET_PED_TYPE(iParam0) == 8) || PED::GET_PED_TYPE(iParam0) == 9) || PED::GET_PED_TYPE(iParam0) == 10) || PED::GET_PED_TYPE(iParam0) == 11) || PED::GET_PED_TYPE(iParam0) == 12) || PED::GET_PED_TYPE(iParam0) == 13) || PED::GET_PED_TYPE(iParam0) == 14) || PED::GET_PED_TYPE(iParam0) == 15) || PED::GET_PED_TYPE(iParam0) == 16) || PED::GET_PED_TYPE(iParam0) == 17) || PED::GET_PED_TYPE(iParam0) == 18) || PED::GET_PED_TYPE(iParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == -472287501) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0) == joaat("COP"))
		{
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_211(iParam0);
	if (!iVar0 == func_12())
	{
		if (iVar0 == func_211(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_12();
}

void func_212()
{
	if (func_25(&(Local_183.f_258)))
	{
		if (func_22(&(Local_183.f_258), 60000, 0))
		{
			func_21(&(Local_183.f_258));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_86(Global_1575006);
			}
		}
	}
}

void func_213()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	int iVar20;
	var uVar21;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::_0x7EF7649B64D7FF10(NETWORK::NET_TO_OBJ(Local_183.f_158)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			switch (Local_183.f_11)
			{
				case 0:
					if ((func_24() || func_38()) || func_35())
					{
						fVar13 = 0.3f;
					}
					else if (func_16())
					{
						fVar13 = 0.65f;
					}
					else
					{
						fVar13 = (func_216(Local_183.f_239) * 1.5f);
					}
					if (func_83())
					{
						Var14 = { Local_183.f_149 };
						Var1 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
						Var4 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						Var7 = { (-SYSTEM::SIN(Var4.f_2) * SYSTEM::COS(Var4.x)), (SYSTEM::COS(Var4.f_2) * SYSTEM::COS(Var4.x)), SYSTEM::SIN(Var4.x) };
						Var10 = { 0.9f, 0.9f, 0.9f };
						if (func_16())
						{
							Var10 = { 1.9f, 1.9f, 1.9f };
						}
						Var17 = { Var1 + Var7 * Var10 };
					}
					else
					{
						Var14 = { Local_183.f_149 };
						Var17 = { Local_183.f_149 };
					}
					Local_183.f_165 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var14, Var17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_183.f_158), 4);
					if (Local_183.f_165 != 0)
					{
						Local_183.f_11 = 1;
					}
					break;
				
				case 1:
					iVar28 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_183.f_165, &iVar20, &Var24, &uVar21, &iVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_183.f_12 = 1;
							Var24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false) && ENTITY::GET_ENTITY_MODEL(iVar27) != Local_183.f_239)
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar27) > 0.5f || func_214(ENTITY::GET_ENTITY_MODEL(iVar27)))
										{
											if (!MISC::IS_BIT_SET(Local_183.f_5, 9))
											{
												MISC::SET_BIT(&(Local_183.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(iVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iVar27, false))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar27)))
										{
											if (Local_183.f_28 == 0)
											{
												iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 85;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 90;
												}
												else
												{
													iVar29 = 79;
												}
												Local_183.f_28 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_183.f_149, 5000f);
												func_206(&(Local_183.f_264), 0, 0);
											}
										}
									}
								}
							}
							Local_183.f_12 = 2;
							PAD::SET_PAD_SHAKE(0, 300, 50);
							Local_183.f_165 = 0;
							Local_183.f_11 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_183.f_11 = 0;
					}
					break;
			}
			if (Local_183.f_28 != 0)
			{
				if (func_25(&(Local_183.f_264)))
				{
					if (func_22(&(Local_183.f_264), 5000, 0))
					{
						EVENT::REMOVE_SHOCKING_EVENT(Local_183.f_28);
						func_21(&(Local_183.f_264));
						Local_183.f_28 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_215(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

float func_216(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_217(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_217(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_220(iParam0);
		if (iVar0 != 0)
		{
			func_218(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_218(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_219(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315831[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315835[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*uParam1 = { Global_1315860 };
	*uParam2 = { Global_1315863 };
}

void func_219(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_221(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_222()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (func_17(NETWORK::NET_TO_OBJ(Local_183.f_158)))
		{
			iVar0 = func_225(NETWORK::NET_TO_OBJ(Local_183.f_158));
			if (iVar0 != -1)
			{
				if (!func_224(&(Global_1573353.f_377), iVar0) && !func_224(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_531), iVar0))
				{
					func_223(1);
				}
			}
		}
	}
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!MISC::IS_BIT_SET(Global_1689733, 9))
			{
				MISC::SET_BIT(&Global_1689733, 9);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733, 9))
	{
		MISC::CLEAR_BIT(&Global_1689733, 9);
	}
}

bool func_224(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = func_229(iParam0);
		if (iVar0 != -1)
		{
			return iVar0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
		if (iVar1 != 0)
		{
			iVar2 = 0;
			while (iVar2 < 43)
			{
				iVar3 = iVar2;
				func_226(iVar3);
				if (Global_1682840[iVar2] == iVar1)
				{
					return iVar3;
				}
				iVar2++;
			}
		}
	}
	return -1;
}

void func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1682840[iVar0] == 0)
	{
		Global_1682840[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_228(iParam0), func_227(iParam0));
	}
}

char* func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_228(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_229(int iParam0)
{
	if (func_236(iParam0))
	{
		return 15;
	}
	if (func_234(iParam0))
	{
		return 28;
	}
	if (func_232(iParam0))
	{
		return 36;
	}
	if (func_231(iParam0))
	{
		return 23;
	}
	if (func_230(iParam0))
	{
		return 33;
	}
	return -1;
}

int func_230(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3833.558f, 3666.702f, -20.91209f, 3818.202f, 3654.002f, -26.37315f, 12.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3765.784f, 3661.946f, -15.33658f, 3823.827f, 3654.624f, -24.84368f, 13.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3519.188f, 3724.821f, -0.487321f, 3767.179f, 3661.705f, -32.33569f, 115f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), -16.2669f, -685.4531f, 31.3381f, true) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_232(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_AT_COORD(iParam0, 3042.596f, -4667.915f, 34.26143f, 250f, 300f, 40f, false, true, 0)) || func_233());
}

int func_233()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), 3042.596f, -4667.915f, 34.26143f) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(3042.596f, -4667.915f, 34.26143f, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_234(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, false, true, 0)) || func_235());
}

int func_235()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_236(int iParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, false, true, 0)) || func_237());
}

int func_237()
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		Var0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), Var0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(Var0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_35())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_ACTIVE(Local_183.f_168))
		{
			if (CAM::IS_CAM_RENDERING(Local_183.f_168) || iParam0)
			{
				if (!func_77())
				{
					func_71(0);
				}
				func_249(1);
				if ((!func_248() || MISC::IS_BIT_SET(Local_183.f_5, 1)) || func_195())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_80();
					func_246(1);
					iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_183.f_158));
					if (INTERIOR::IS_VALID_INTERIOR(iVar0))
					{
						Global_1689733.f_24 = iVar0;
						if (!MISC::IS_BIT_SET(Local_183.f_5, 8))
						{
							Local_183.f_123 = func_245(INTERIOR::_GET_INTERIOR_HEADING(iVar0));
							INTERIOR::_GET_INTERIOR_INFO(iVar0, &(Local_183.f_146), &(Local_183.f_17));
							MISC::SET_BIT(&(Local_183.f_5), 8);
						}
						iVar1 = 0;
						if (func_244(Local_183.f_149.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1689733.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(1f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1689733.f_9);
						}
						if ((!func_166(PLAYER::PLAYER_ID()) && !func_241(PLAYER::PLAYER_ID())) && !func_16())
						{
							if (!func_240())
							{
								func_239(1);
							}
						}
						if (!func_16())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_183.f_17, Local_183.f_146, Local_183.f_146.f_1, SYSTEM::FLOOR(Local_183.f_123), iVar1);
					}
					else
					{
						Local_183.f_17 = -1;
						if (Global_1689733.f_9 == -1f)
						{
							HUD::SET_RADAR_ZOOM_PRECISE(0f);
						}
						else
						{
							HUD::SET_RADAR_ZOOM_PRECISE(Global_1689733.f_9);
						}
						if (!func_240() && !func_16())
						{
							func_239(1);
						}
						if (!func_16())
						{
							HUD::SET_BIGMAP_ACTIVE(false, false);
						}
						Global_1689733.f_24 = -1;
						if (MISC::IS_BIT_SET(Local_183.f_5, 8))
						{
							MISC::CLEAR_BIT(&(Local_183.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_239(int iParam0)
{
	Global_2464758 = iParam0;
}

bool func_240()
{
	return Global_2464758;
}

int func_241(int iParam0)
{
	if (func_243(iParam0))
	{
		return 1;
	}
	if (func_242(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_91(iParam0, 9);
	}
	return 0;
}

int func_243(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_244(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_245(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_246(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99007.f_8 = 1;
	}
	else
	{
		Global_99007.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_247(iVar0);
		iVar0++;
	}
}

void func_247(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

bool func_248()
{
	return MISC::IS_BIT_SET(Global_1689733, 4);
}

void func_249(int iParam0)
{
	if (Global_2540612.f_4618 != iParam0)
	{
		Global_2540612.f_4618 = iParam0;
	}
}

void func_250()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	struct<3> Var31;
	float fVar34;
	float fVar35;
	var uVar36;
	var uVar37;
	struct<3> Var38;
	
	if ((MISC::IS_BIT_SET(Local_183.f_5, 1) || func_195()) || func_83())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			fVar0 = 40f;
			fVar1 = 19f;
			fVar2 = 14f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_183.f_158));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_183.f_158));
			if (func_30())
			{
				fVar1 = 10f;
			}
			fVar6 = (30f * SYSTEM::TIMESTEP());
			func_255();
			PAD::_0x7F4724035FDCA1DD(2);
			func_254(&(Local_183[0]), &(Local_183[1]), &(Local_183[2]), &(Local_183[3]), 0, 0);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				iVar3 = 5;
				Local_183[2] = (Local_183[2] * iVar3);
				Local_183[3] = (Local_183[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_183[3] = (Local_183[3] * -1);
			}
			if (func_22(&(Local_183.f_276), 750, 0))
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					bVar7 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar7 = (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar8 = true;
					}
				}
				if (bVar7)
				{
					func_206(&(Local_183.f_276), 0, 0);
				}
			}
			if (bVar7 && !func_253())
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					Local_183.f_25++;
				}
				else if (bVar8)
				{
					Local_183.f_25 = (Local_183.f_25 - 1);
				}
				else
				{
					Local_183.f_25++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_39))
				{
					Local_183.f_39 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_39, "HUD_Zoom_Change", Local_183.f_156, true);
				}
				if (Local_183.f_25 > 2)
				{
					Local_183.f_25 = 0;
				}
				else if (Local_183.f_25 < 0)
				{
					Local_183.f_25 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_39))
			{
				AUDIO::STOP_SOUND(Local_183.f_39);
				AUDIO::RELEASE_SOUND_ID(Local_183.f_39);
				Local_183.f_39 = -1;
			}
			Local_183.f_128 = (Local_183.f_128 + (((Local_183.f_126 - Local_183.f_128) * 0.06f) * fVar6));
			CAM::SET_CAM_FOV(Local_183.f_168, Local_183.f_128);
			if (Local_183[2] != 0 || Local_183[3] != 0)
			{
				if (Local_183[2] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_183[2])));
				}
				else
				{
					fVar9 = 0f;
				}
				if (Local_183[3] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_183[3])));
				}
				else
				{
					fVar10 = 0f;
				}
				Var14 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				fVar11 = (((fVar10 * 0.05f) * fVar6) * Local_183.f_130);
				fVar12 = -(((fVar9 * 0.05f) * fVar6) * Local_183.f_130);
				if ((fVar4 != 0f || Local_183[0] != 0) && !func_77())
				{
					if (Local_183[0] != 0)
					{
						fVar20 = (1f / (127f / IntToFloat(Local_183[0])));
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar20 = -1f;
							}
							else
							{
								fVar20 = 1f;
							}
						}
						if (Var14.f_1 != 0f)
						{
							if (Var14.f_1 < 1.5f && Var14.f_1 > 0f)
							{
								fVar20 = 0.001f;
							}
							else if (Var14.f_1 > -1.5f && Var14.f_1 < 0f)
							{
								fVar20 = -0.001f;
							}
						}
						else
						{
							fVar20 = 0f;
						}
						fVar13 = -(((fVar20 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar13 = 0f;
				}
				Var17 = { Vector(fVar12, fVar13, fVar11) + Var14 };
				if (fVar4 != 0f)
				{
					if (Local_183[0] == 0)
					{
						if (Var17.f_1 > fVar1)
						{
							Var17.f_1 = fVar1;
						}
						else if (Var17.f_1 < -fVar1)
						{
							Var17.f_1 = -fVar1;
						}
					}
					else if (Var17.f_1 > fVar1)
					{
						Var17.f_1 = fVar1;
					}
					else if (Var17.f_1 < -fVar1)
					{
						Var17.f_1 = -fVar1;
					}
				}
				if (Var17.x > fVar2)
				{
					Var17.x = fVar2;
				}
				else if (Var17.x < -fVar2)
				{
					Var17.x = -fVar2;
				}
				if (!MISC::IS_BIT_SET(Local_183.f_5, 12))
				{
					MISC::SET_BIT(&(Local_183.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(Var17.f_2, Var17.f_1, Var17.x), 2, true);
			}
			else if (((Local_183[0] != 0 || Local_183[1] != 0) && !func_253()) && !func_77())
			{
				Var21 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				if (func_253())
				{
					if (func_252())
					{
						fVar25 = -1f;
						Local_183.f_129 = fVar25;
					}
				}
				else
				{
					if (Local_183[0] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_183[0])));
						Local_183.f_129 = fVar24;
					}
					else
					{
						fVar24 = 0f;
					}
					if (Local_183[1] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_183[1])));
						Local_183.f_129 = fVar24;
					}
					else
					{
						fVar25 = 0f;
					}
				}
				fVar26 = -(((fVar25 * 0.05f) * fVar6) * fVar0);
				fVar27 = -(((fVar24 * 0.05f) * fVar6) * fVar0);
				if (fVar4 != 0f)
				{
					if ((Local_183[0] == 0 && !func_77()) || func_253())
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar24 = -1f;
							}
							else
							{
								fVar24 = 1f;
							}
						}
						if (Var21.f_1 < 1.5f && Var21.f_1 > 0f)
						{
							fVar24 = 0.001f;
						}
						else if (Var21.f_1 > -1.5f && Var21.f_1 < 0f)
						{
							fVar24 = -0.001f;
						}
						fVar27 = -(((fVar24 * 0.05f) * fVar6) * (fVar0 - 25f));
					}
				}
				Var28 = { Vector(0f, fVar27, fVar26) + Var21 };
				if (Var28.f_1 > fVar1)
				{
					Var28.f_1 = fVar1;
				}
				else if (Var28.f_1 < -fVar1)
				{
					Var28.f_1 = -fVar1;
				}
				if (Var28.x > fVar2)
				{
					Var28.x = fVar2;
				}
				else if (Var28.x < -fVar2)
				{
					Var28.x = -fVar2;
				}
				if (MISC::IS_BIT_SET(Local_183.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_183.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(Var21.f_2, Var28.f_1, Var28.x), 2, true);
			}
			else if (!func_252() && !func_253())
			{
				Local_183.f_129 = 0f;
				Var31 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var31.x < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var31.f_1 != 0f)
					{
						if (Var31.f_1 < 1.5f && Var31.f_1 > 0f)
						{
							fVar34 = 0.001f;
						}
						else if (Var31.f_1 > -1.5f && Var31.f_1 < 0f)
						{
							fVar34 = -0.001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (Var31.x != 0f)
					{
						if (Var31.x < 1.5f && Var31.x > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (Var31.x > -1.5f && Var31.x < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					uVar36 = func_251(-(((fVar35 * 0.05f) * fVar6) * (fVar0 - 25f)));
					uVar37 = func_251(-(((fVar34 * 0.05f) * fVar6) * (fVar0 - 25f)));
					Var38 = { Vector(0f, uVar37, uVar36) + Var31 };
					if (MISC::IS_BIT_SET(Local_183.f_5, 12))
					{
						Var38.x = Var31.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(Var31.f_2, Var38.f_1, Var38.x), 2, true);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

float func_251(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_252()
{
	return MISC::IS_BIT_SET(Local_183.f_5, 22);
}

bool func_253()
{
	return MISC::IS_BIT_SET(Local_183.f_5, 21);
}

void func_254(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, 221) * 127f));
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_255()
{
	if (func_140())
	{
		switch (Local_183.f_25)
		{
			case 0:
				Local_183.f_127 = 90f;
				Local_183.f_126 = 90f;
				break;
			
			case 1:
				Local_183.f_127 = 75f;
				Local_183.f_126 = 75f;
				break;
			
			case 2:
				Local_183.f_127 = 45f;
				Local_183.f_126 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_183.f_25)
		{
			case 0:
				Local_183.f_127 = 90f;
				Local_183.f_126 = 90f;
				break;
			
			case 1:
				Local_183.f_127 = 80f;
				Local_183.f_126 = 80f;
				break;
			
			case 2:
				Local_183.f_127 = 70f;
				Local_183.f_126 = 70f;
				break;
			}
	}
}

void func_256()
{
	int iVar0;
	int iVar1;
	
	if (func_70(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_182(0);
		Local_183.f_140 = { func_259(&Local_183) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_183.f_161))
		{
			if (!func_258(Local_183.f_140))
			{
				if (func_181(iVar0))
				{
					Local_183.f_161 = OBJECT::CREATE_OBJECT(iVar0, Local_183.f_140, false, false, true);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_183.f_161, Local_183.f_140, false, false, true);
					ENTITY::SET_ENTITY_COLLISION(Local_183.f_161, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_183.f_161, true, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_183.f_161, true);
					ENTITY::SET_ENTITY_HEADING(Local_183.f_161, func_257());
					ENTITY::FREEZE_ENTITY_POSITION(Local_183.f_161, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_183.f_161, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_183.f_140, 2f, iVar0, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_183.f_161)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, true, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_183.f_140 = { func_259(&Local_183) };
	}
}

float func_257()
{
	if (Global_1689733.f_7 != 0f)
	{
		return Global_1689733.f_7;
	}
	return 0f;
}

int func_258(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_259(var uParam0)
{
	if (!func_258(Global_1689733.f_10))
	{
		return Global_1689733.f_10;
	}
	else
	{
		return uParam0->f_140;
	}
	return 0f, 0f, 0f;
}

void func_260()
{
	if (Local_183.f_33 != -1)
	{
		AUDIO::STOP_SOUND(Local_183.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_33);
		Local_183.f_33 = -1;
	}
}

int func_261(bool bParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() || NETWORK::IS_COMMERCE_STORE_OPEN())
	{
		return 1;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 1;
	}
	if (func_174())
	{
		return 1;
	}
	if (func_266(PLAYER::PLAYER_ID()) && !func_265())
	{
		return 1;
	}
	if (func_166(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2539374, 0))
		{
			return 1;
		}
	}
	if (Global_1663772 || Global_1312809)
	{
		func_264(1);
		return 1;
	}
	if (((func_262(0) || func_171(1)) || func_170()) && !bParam0)
	{
		func_71(0);
		func_80();
		func_99();
		return 1;
	}
	return 0;
}

int func_262(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_263(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		if (!func_37())
		{
			MISC::SET_BIT(&Global_1689733, 20);
		}
	}
	else if (func_37())
	{
		MISC::CLEAR_BIT(&Global_1689733, 20);
	}
}

bool func_265()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696338, 0));
}

int func_266(int iParam0)
{
	if (func_116(iParam0, 0))
	{
		return 1;
	}
	if (func_267())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_267()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_268()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	float fVar21;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	var uVar37;
	var uVar38;
	struct<3> Var39;
	var uVar42;
	
	if (!func_83() || func_195())
	{
		return;
	}
	if (func_35() && func_261(0))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			fVar0 = 40f;
			fVar1 = 30f;
			fVar2 = 30f;
			iVar3 = 1;
			fVar4 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_183.f_158));
			fVar5 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_183.f_158));
			iVar6 = 1;
			if (func_16())
			{
				if (func_261(1))
				{
					iVar6 = 0;
				}
			}
			else if (func_261(0))
			{
				iVar6 = 0;
			}
			if (func_16())
			{
				if (!func_130())
				{
					iVar6 = 0;
				}
				fVar2 = 80f;
			}
			fVar7 = (30f * MISC::GET_FRAME_TIME());
			func_255();
			PAD::_0x7F4724035FDCA1DD(2);
			func_254(&(Local_183[0]), &(Local_183[1]), &(Local_183[2]), &(Local_183[3]), 0, 0);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				iVar3 = 2;
				if (func_16())
				{
					iVar3 = 3;
				}
				Local_183[2] = (Local_183[2] * iVar3);
				Local_183[3] = (Local_183[3] * iVar3);
			}
			if (PAD::IS_LOOK_INVERTED())
			{
				Local_183[3] = (Local_183[3] * -1);
				Local_183[1] = (Local_183[1] * -1);
			}
			if (Local_183[3] != 0 && Local_183[2] != 0)
			{
				iVar8 = func_270(MISC::ABSI(Local_183[3]), MISC::ABSI(Local_183[2]));
				Local_183.f_129 = (1f / (127f / IntToFloat(iVar8)));
			}
			else if (Local_183[1] != 0 && Local_183[0] != 0)
			{
				iVar9 = func_270(MISC::ABSI(Local_183[1]), MISC::ABSI(Local_183[0]));
				Local_183.f_129 = (1f / (127f / IntToFloat(iVar9)));
			}
			else if (Local_183[3] != 0)
			{
				Local_183.f_129 = (1f / (127f / IntToFloat(Local_183[3])));
			}
			else if (Local_183[2] != 0)
			{
				Local_183.f_129 = (1f / (127f / IntToFloat(Local_183[2])));
			}
			else if (Local_183[1] != 0)
			{
				Local_183.f_129 = (1f / (127f / IntToFloat(Local_183[1])));
			}
			else if (Local_183[0] != 0)
			{
				Local_183.f_129 = (1f / (127f / IntToFloat(Local_183[0])));
			}
			else
			{
				Local_183.f_129 = 0f;
			}
			if (iVar6 && ((Local_183[2] != 0 || Local_183[3] != 0) || (Local_183[0] != 0 || Local_183[1] != 0)))
			{
				if (Local_183[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_183[2])));
				}
				else if (Local_183[0] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_183[0])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_183[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_183[3])));
				}
				else if (Local_183[1] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_183[1])));
				}
				else
				{
					fVar11 = 0f;
				}
				Var15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * Local_183.f_130);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * Local_183.f_130);
				if ((fVar4 != 0f || Local_183[2] != 0) || Local_183[0] != 0)
				{
					if (Local_183[2] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_183[2])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else if (Local_183[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_183[0])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
					else
					{
						if (fVar4 > 0.1f || fVar4 < -0.1f)
						{
							if (fVar4 > 0f)
							{
								fVar21 = -1f;
							}
							else
							{
								fVar21 = 1f;
							}
						}
						if (Var15.f_1 != 0f)
						{
							if (Var15.f_1 < 2f && Var15.f_1 > 0f)
							{
								fVar21 = 0.0001f;
							}
							else if (Var15.f_1 > -2f && Var15.f_1 < 0f)
							{
								fVar21 = -0.0001f;
							}
						}
						else
						{
							fVar21 = 0f;
						}
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				Var18 = { Vector(fVar13, fVar14, fVar12) + Var15 };
				if (fVar4 != 0f)
				{
					if (Local_183[2] == 0 && Local_183[0] == 0)
					{
						if (Var18.f_1 > fVar1)
						{
							Var18.f_1 = fVar1;
						}
						else if (Var18.f_1 < -fVar1)
						{
							Var18.f_1 = -fVar1;
						}
					}
					else if (Var18.f_1 > fVar1)
					{
						Var18.f_1 = fVar1;
					}
					else if (Var18.f_1 < -fVar1)
					{
						Var18.f_1 = -fVar1;
					}
				}
				if (Var18.x > fVar2)
				{
					Var18.x = fVar2;
				}
				else if (Var18.x < -fVar2)
				{
					Var18.x = -fVar2;
				}
				if (!MISC::IS_BIT_SET(Local_183.f_5, 12))
				{
					MISC::SET_BIT(&(Local_183.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(Var18.f_2, Var18.f_1, Var18.x), 2, true);
			}
			else if (iVar6 && (((Local_183[2] != 0 || Local_183[3] != 0) || Local_183[0] != 0) || Local_183[1] != 0))
			{
				Var22 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				if (func_253())
				{
					if (func_252())
					{
						fVar26 = -1f;
					}
				}
				else
				{
					if (Local_183[2] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_183[2])));
					}
					else if (Local_183[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_183[0])));
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_183[3] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_183[3])));
					}
					else if (Local_183[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_183[1])));
					}
					else
					{
						fVar26 = 0f;
					}
				}
				fVar27 = -(((fVar26 * 0.05f) * fVar7) * fVar0);
				fVar28 = -(((fVar25 * 0.05f) * fVar7) * fVar0);
				if (fVar4 != 0f)
				{
					if (Local_183[2] == 0 && Local_183[0] == 0)
					{
						if (fVar4 > 1f || fVar4 < -1f)
						{
							if (fVar4 > 0f)
							{
								fVar25 = -1f;
							}
							else
							{
								fVar25 = 1f;
							}
						}
						if (Var22.f_1 < 2f && Var22.f_1 > 0f)
						{
							fVar25 = 0.0001f;
						}
						else if (Var22.f_1 > -2f && Var22.f_1 < 0f)
						{
							fVar25 = -0.0001f;
						}
						fVar28 = -(((fVar25 * 0.05f) * fVar7) * (fVar0 - 25f));
					}
				}
				Var29 = { Vector(0f, fVar28, fVar27) + Var22 };
				if (Var29.f_1 > fVar1)
				{
					Var29.f_1 = fVar1;
				}
				else if (Var29.f_1 < -fVar1)
				{
					Var29.f_1 = -fVar1;
				}
				if (Var29.x > fVar2)
				{
					Var29.x = fVar2;
				}
				else if (Var29.x < -fVar2)
				{
					Var29.x = -fVar2;
				}
				if (MISC::IS_BIT_SET(Local_183.f_5, 12))
				{
					MISC::CLEAR_BIT(&(Local_183.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(Var22.f_2, Var29.f_1, Var29.x), 2, true);
			}
			else
			{
				Var32 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), 2) };
				if (fVar4 != 0f || fVar5 != 0f)
				{
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (fVar5 != 0f)
					{
						if (Var32.x < 0f)
						{
							fVar36 = -1f;
						}
						else
						{
							fVar36 = 1f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					if (Var32.f_1 != 0f)
					{
						if (Var32.f_1 < 2f && Var32.f_1 > 0f)
						{
							fVar35 = 0.0001f;
						}
						else if (Var32.f_1 > -2f && Var32.f_1 < 0f)
						{
							fVar35 = -0.0001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (Var32.x != 0f)
					{
						if (Var32.x < 2f && Var32.x > 0f)
						{
							fVar36 = 0.0001f;
						}
						else if (Var32.x > -2f && Var32.x < 0f)
						{
							fVar36 = -0.0001f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					uVar37 = func_251(-(((fVar36 * 0.05f) * fVar7) * (fVar0 - 25f)));
					uVar38 = func_251(-(((fVar35 * 0.05f) * fVar7) * (fVar0 - 25f)));
					Var39 = { Vector(0f, uVar38, uVar37) + Var32 };
					if (MISC::IS_BIT_SET(Local_183.f_5, 12))
					{
						Var39.x = Var32.x;
					}
					uVar42 = Var32.f_2;
					if (func_16())
					{
						if (!func_130())
						{
							uVar42 = Local_183.f_116;
							Var39.f_1 = 0f;
						}
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), Vector(0f, 0f, 0f) + Vector(uVar42, Var39.f_1, Var39.x), 2, true);
					if (func_16())
					{
						if (MISC::ABSF(fVar4) < 2.5f && MISC::ABSF(fVar5) < 2.5f)
						{
							func_269(1);
						}
					}
				}
				else if (func_16())
				{
					func_269(1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

void func_269(bool bParam0)
{
	if (!bParam0)
	{
		if (MISC::IS_BIT_SET(Local_183.f_6, 7))
		{
			MISC::CLEAR_BIT(&(Local_183.f_6), 7);
		}
	}
	else if (!MISC::IS_BIT_SET(Local_183.f_6, 7))
	{
		MISC::SET_BIT(&(Local_183.f_6), 7);
	}
}

int func_270(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_271()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (func_35())
	{
		return;
	}
	if (func_248())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
		{
			if (!HUD::DOES_BLIP_EXIST(Local_183.f_170))
			{
				Local_183.f_170 = func_286(Local_183.f_149, 0);
				HUD::SET_BLIP_SPRITE(Local_183.f_170, func_285());
				if (func_30() && !HUD::DOES_BLIP_EXIST(Local_183.f_171))
				{
					Local_183.f_171 = func_282(PLAYER::PLAYER_PED_ID(), 0, 0);
					HUD::SET_BLIP_SPRITE(Local_183.f_171, 6);
					HUD::SHOW_HEIGHT_ON_BLIP(Local_183.f_171, false);
					HUD::SET_BLIP_SCALE(Local_183.f_171, 0.7f);
					HUD::SET_BLIP_PRIORITY(Local_183.f_171, (13 - 1));
					if (func_279(PLAYER::PLAYER_ID()) != -1)
					{
						func_275(&(Local_183.f_171), func_277(func_279(PLAYER::PLAYER_ID())));
					}
					else
					{
						func_275(&(Local_183.f_171), func_274());
					}
					HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_183.f_171, true);
				}
			}
			else
			{
				fVar0 = func_273(Local_183.f_124);
				fVar1 = Local_183.f_149;
				fVar2 = Local_183.f_149.f_1;
				HUD::SET_BLIP_DISPLAY(Local_183.f_170, 2);
				HUD::SET_BLIP_COORDS(Local_183.f_170, Local_183.f_149);
				if (((func_24() || func_38()) && HUD::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!HUD::_IS_MINIMAP_IN_INTERIOR())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						HUD::SET_BLIP_COORDS(Local_183.f_170, fVar1, fVar2, 0f);
						HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar1, fVar2);
						HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
					}
				}
				HUD::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				HUD::SET_BLIP_ROTATION(Local_183.f_170, SYSTEM::ROUND(fVar0));
				HUD::SET_BLIP_SCALE(Local_183.f_170, 1f);
				HUD::SET_BLIP_PRIORITY(Local_183.f_170, 9);
				HUD::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(fVar0));
				if (HUD::DOES_BLIP_EXIST(Local_183.f_171))
				{
					HUD::SET_BLIP_ROTATION(Local_183.f_171, func_272(PLAYER::PLAYER_PED_ID()));
				}
			}
		}
	}
}

int func_272(int iParam0)
{
	float fVar0;
	
	fVar0 = ENTITY::_GET_ENTITY_PHYSICS_HEADING(iParam0);
	return SYSTEM::ROUND(fVar0);
}

float func_273(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

int func_274()
{
	return 10;
}

void func_275(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_276(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_278(iParam0);
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

var func_278(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_279(int iParam0)
{
	if (!iParam0 == func_12())
	{
		if (func_280(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_211(iParam0)];
		}
	}
	return -1;
}

bool func_280(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_281(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_12();
}

int func_281(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_12())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	return func_283(iParam0, !bParam1, bParam2);
}

int func_283(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_284(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_284(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_284(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_284(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_285()
{
	if (func_16())
	{
		return 548;
	}
	return 627;
}

int func_286(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_284(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_287()
{
	if (func_35())
	{
		if (Local_183.f_149.f_2 >= (func_109() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
			{
				Local_183.f_37 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_37, "Out_Of_Bounds_Alarm_Loop", Local_183.f_156, true);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
		{
			AUDIO::STOP_SOUND(Local_183.f_37);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_37);
			Local_183.f_37 = -1;
		}
	}
}

void func_288()
{
	if (((func_38() || func_140()) || func_30()) || func_162())
	{
		switch (Local_183.f_241)
		{
			case 0:
				func_311();
				break;
			
			case 1:
				func_298();
				break;
			
			case 2:
				func_296();
				break;
			
			case 3:
				func_289();
				break;
			}
	}
}

void func_289()
{
	func_72(1);
	if (!func_295())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_293(0);
	func_291(0);
	func_290(0);
}

void func_290(int iParam0)
{
	if (Local_183.f_241 != iParam0)
	{
		Local_183.f_241 = iParam0;
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		if (!func_292())
		{
			MISC::SET_BIT(&Global_1689733, 17);
		}
	}
	else if (func_292())
	{
		MISC::CLEAR_BIT(&Global_1689733, 17);
	}
}

bool func_292()
{
	return MISC::IS_BIT_SET(Global_1689733, 17);
}

void func_293(bool bParam0)
{
	if (bParam0)
	{
		if (!func_294())
		{
			MISC::SET_BIT(&Global_1689733, 18);
		}
	}
	else if (func_294())
	{
		MISC::CLEAR_BIT(&Global_1689733, 18);
	}
}

bool func_294()
{
	return MISC::IS_BIT_SET(Global_1689733, 18);
}

bool func_295()
{
	return Global_1678289.f_482;
}

void func_296()
{
	if (func_294() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_72(1);
		func_297(0);
		MISC::CLEAR_BIT(&(Local_183.f_5), 16);
		func_290(3);
	}
}

void func_297(bool bParam0)
{
	if (bParam0)
	{
		if (!func_77())
		{
			MISC::SET_BIT(&Global_1689733, 19);
		}
	}
	else if (func_77())
	{
		MISC::CLEAR_BIT(&Global_1689733, 19);
	}
}

void func_298()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_22(&(Local_183.f_266), 3000, 0))
		{
			if (func_310())
			{
				if (MISC::IS_BIT_SET(Global_4271024, 2) || func_22(&(Local_183.f_270), 8000, 0))
				{
					if (!MISC::IS_BIT_SET(Global_4271024, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_299(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_21(&(Local_183.f_266));
					func_21(&(Local_183.f_270));
					func_290(2);
				}
			}
			else if (func_22(&(Local_183.f_270), 15000, 0))
			{
				func_21(&(Local_183.f_266));
				func_21(&(Local_183.f_270));
				func_72(1);
				func_297(0);
				MISC::CLEAR_BIT(&(Local_183.f_5), 16);
				func_290(3);
			}
		}
	}
}

void func_299(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_309())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_307())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_116(PLAYER::PLAYER_ID(), 0) && !func_267()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2426097[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_304(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_303(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_302();
					func_301();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2426097[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_303(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_300(Global_4456448.f_129348))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_300(int iParam0)
{
	return iParam0 == 17;
}

void func_301()
{
	struct<3> Var0;
	
	Global_2440277.f_1344 = 0;
	Global_2440277.f_1345 = 0;
	Global_2440277.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440277.f_1351 = -1;
	Global_2440277.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_302()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_303(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_304(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_306();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_116(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_305(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_305(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_306()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_307()
{
	if (func_308() == 0)
	{
		return 1;
	}
	return 0;
}

int func_308()
{
	return Global_1312485.f_18;
}

int func_309()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452907.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_310()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_311()
{
	if (func_329())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			if (!func_310())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_297(1);
					func_127(-1);
					func_299(PLAYER::PLAYER_ID(), 0, 512, 0);
					CAM::DO_SCREEN_FADE_OUT(500);
					func_327(1, -1);
					func_312(3, 1, 1, 0);
					func_23(&(Local_183.f_266), 0, 0);
					func_23(&(Local_183.f_270), 0, 0);
					func_290(1);
				}
			}
		}
	}
}

int func_312(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_76833)
	{
		if (((iParam0 != 17 && iParam0 != 3) && iParam0 != 23) && iParam0 != 1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_4271024, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_4271024, 14);
				MISC::SET_BIT(&Global_4271024, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_4271024, 14);
				MISC::SET_BIT(&Global_4271024, 15);
			}
			if (iParam0 == 23)
			{
				MISC::SET_BIT(&Global_4271024, 14);
				MISC::SET_BIT(&Global_4271024, 27);
			}
			if (iParam0 == 1)
			{
				MISC::SET_BIT(&Global_4271024, 14);
				MISC::SET_BIT(&Global_4271024, 29);
			}
		}
		if (Global_7558[iParam0 /*15*/].f_9 == 0)
		{
			func_324();
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_4271024, 14);
			MISC::CLEAR_BIT(&Global_4271024, 16);
			MISC::CLEAR_BIT(&Global_4271024, 15);
			MISC::CLEAR_BIT(&Global_4271024, 27);
			MISC::CLEAR_BIT(&Global_4271024, 29);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_317();
	if (Global_19681.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_76(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19647 == 1)
	{
		return 0;
	}
	if (Global_19681.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_19678))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19681.f_1 < 4)
			{
				func_316("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_19678 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19663)
	{
		SYSTEM::WAIT(0);
	}
	func_324();
	func_313();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
	{
		Global_8157 = 0;
		Global_19681.f_1 = 7;
		func_316(&(Global_7558[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
			{
				Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
		{
			Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7558[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_313()
{
	if (Global_76833 == 0)
	{
		Global_7558[14 /*15*/].f_4 = -99;
		Global_7558[4 /*15*/].f_4 = -99;
		if (Global_2462473)
		{
			if (func_315(14))
			{
				func_314(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_314(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_314(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_314(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_314(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7558[iParam0 /*15*/]), sParam1, 16);
	Global_7558[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7558[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7558[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_7558[iParam0 /*15*/].f_10 = iParam4;
	Global_7558[iParam0 /*15*/].f_11 = iParam5;
	Global_7558[iParam0 /*15*/].f_12 = iParam6;
	Global_7558[iParam0 /*15*/].f_13 = iParam7;
	Global_7558[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7558[iParam0 /*15*/].f_12 == 0)
	{
		Global_7558[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_13 == 0)
	{
		Global_7558[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_14 == 0)
	{
		Global_7558[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_315(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_316(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_317()
{
	if (func_315(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_318();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_318()
{
	func_319();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_319()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_322(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_321(PLAYER::PLAYER_PED_ID());
			if (func_320(iVar0) && (!func_315(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_320(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_320(int iParam0)
{
	return iParam0 < 3;
}

int func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_322(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_322(int iParam0)
{
	if (func_320(iParam0))
	{
		return func_323(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_323(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_324()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7558[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76833 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_326(iVar2, Global_19681) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_314(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_314(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_314(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41631 == 15 && func_325(0) == 0) && Global_7556 == 0)
		{
			func_314(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 0;
			Global_7557 = 255;
		}
		else
		{
			func_314(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 1;
			Global_7557 = 42;
		}
		if (iVar1 == 1)
		{
			func_314(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_314(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_314(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_314(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_314(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111858.f_14047.f_89 == 1)
		{
			func_314(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111858.f_14047.f_88 == 1)
		{
			func_314(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_314(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_314(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_314(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_314(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_314(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_314(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_314(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_314(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_314(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_314(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_314(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_314(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_314(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_314(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_314(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_314(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_314(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4271024, 4) == 1)
		{
			func_314(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_314(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_314(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_314(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_314(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_314(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_314(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_314(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_314(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_314(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_314(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_314(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_314(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_314(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_314(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_314(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_314(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4271024, 4) == 1)
		{
			if (Global_1573931)
			{
				func_314(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 20) == 1)
			{
				func_314(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 22) == 1)
			{
				func_314(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 26) == 1)
			{
				func_314(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4271024, 4) == 0 && Global_1573931 == 0) && MISC::IS_BIT_SET(Global_4271024, 20) == 0) && MISC::IS_BIT_SET(Global_4271024, 22) == 0) && MISC::IS_BIT_SET(Global_4271024, 26) == 0)
		{
			func_314(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

bool func_325(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77081, 0);
}

int func_326(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_19[iParam1];
}

void func_327(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_124(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_22550.f_8417 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_22550.f_5628[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_328(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_328(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_329()
{
	if (func_77())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_171(0) || func_170()) || RECORDING::_IS_RECORDING())
	{
		func_21(&(Local_183.f_274));
		func_23(&(Local_183.f_274), 0, 0);
		MISC::CLEAR_BIT(&(Local_183.f_5), 16);
		func_99();
		return 0;
	}
	else if (func_25(&(Local_183.f_274)))
	{
		if (!func_22(&(Local_183.f_274), 2000, 0))
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_183.f_5), 16);
			func_21(&(Local_183.f_274));
		}
	}
	if (func_166(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_330()
{
	if (func_331())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
			{
				if (!MISC::IS_BIT_SET(Local_183.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_183.f_158), true);
					MISC::SET_BIT(&(Local_183.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_183.f_158), false);
				MISC::CLEAR_BIT(&(Local_183.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
			}
		}
	}
}

int func_331()
{
	if (func_166(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(Global_2539374, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_332()
{
	int iVar0;
	
	if (func_83())
	{
		Global_1689733.f_1 = 0;
	}
	if (func_339() || func_195())
	{
		if (!func_25(&(Local_183.f_246)))
		{
			func_23(&(Local_183.f_246), 0, 0);
		}
		else if (func_22(&(Local_183.f_246), Global_1689733.f_1, 0) || func_195())
		{
			func_21(&(Local_183.f_244));
			if (func_83())
			{
				if (func_17(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), true, false, 1f);
				}
				else
				{
					FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), true, false, 1f, false);
				}
				PAD::SET_PAD_SHAKE(0, 300, 200);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_183.f_158, true);
				STREAMING::CLEAR_FOCUS();
				iVar0 = NETWORK::NET_TO_OBJ(Local_183.f_158);
				OBJECT::DELETE_OBJECT(&iVar0);
				MISC::SET_BIT(&(Local_183.f_6), 2);
			}
			if (func_31())
			{
				func_335(1);
				if (Local_183.f_26 == 0)
				{
					func_333(6, 0, 0);
				}
				else
				{
					func_333(5, 0, 0);
				}
			}
			func_385(1);
			func_384(5);
		}
	}
	else if (func_25(&(Local_183.f_246)))
	{
		func_206(&(Local_183.f_246), 0, 0);
	}
}

void func_333(int iParam0, bool bParam1, bool bParam2)
{
	char cVar0[64];
	int iVar16;
	float fVar17;
	float fVar18;
	
	StringCopy(&cVar0, func_334(iParam0), 64);
	iVar16 = 5;
	if (bParam1)
	{
		iVar16 = 69;
	}
	fVar17 = 8f;
	fVar18 = -8f;
	Local_183.f_79 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_183.f_152, 0f, 0f, Local_183.f_118, 2, bParam2, bParam1, 1f, 0f, 1f);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), Local_183.f_79, Local_183.f_157, &cVar0, fVar17, fVar18, iVar16, 0, 1000f, 0);
	if (iParam0 == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
		{
			StringConCat(&cVar0, "_DRONE", 64);
			NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_ENT(Local_183.f_158), Local_183.f_79, Local_183.f_157, &cVar0, fVar17, fVar18, 8);
		}
	}
	StringCopy(&cVar0, func_334(iParam0), 64);
	StringConCat(&cVar0, "_PHONE", 64);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_159))
	{
		ENTITY::PLAY_ENTITY_ANIM(NETWORK::NET_TO_ENT(Local_183.f_159), &cVar0, Local_183.f_157, fVar17, bParam1, bParam2, false, 0f, 0);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_183.f_159));
	}
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_183.f_79);
}

char* func_334(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ENTER";
		
		case 1:
			return "BASE";
		
		case 2:
			return "USE_01";
		
		case 3:
			return "USE_02";
		
		case 4:
			return "USE_03";
		
		case 5:
			return "FAIL";
		
		case 6:
			return "EXIT";
		
		default:
	}
	return "";
}

void func_335(bool bParam0)
{
	int iVar0;
	
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iVar0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iVar0);
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iVar0);
		iVar0 = -1;
	}
	else if (bParam0)
	{
		if (func_17(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

float func_336()
{
	if (func_16())
	{
		return 1f;
	}
	return 0.5f;
}

int func_337()
{
	if (func_16())
	{
		return 81;
	}
	return 72;
}

Vector3 func_338()
{
	if (func_16())
	{
		return CAM::GET_CAM_COORD(Local_183.f_168);
	}
	return Local_183.f_149;
}

int func_339()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false)) && !MISC::IS_BIT_SET(Local_183.f_5, 2))
	{
		return 1;
	}
	if (Local_183.f_12 == 2)
	{
		Local_183.f_26 = 1;
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 1))
	{
		return 1;
	}
	if (func_348())
	{
		Local_183.f_26 = 5;
		return 1;
	}
	if (func_140() && func_341())
	{
		Local_183.f_26 = 5;
		return 1;
	}
	if (func_31() || func_16())
	{
		if (func_341())
		{
			Local_183.f_26 = 5;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 2))
	{
		Local_183.f_26 = 4;
		return 1;
	}
	if (func_179())
	{
		if (!func_25(&(Local_183.f_254)))
		{
			func_23(&(Local_183.f_254), 0, 0);
		}
		else if (func_22(&(Local_183.f_254), 3000, 0))
		{
			Local_183.f_26 = 0;
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 7))
	{
		Local_183.f_26 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_183.f_158)) || func_203(NETWORK::NET_TO_ENT(Local_183.f_158), 0))
		{
			if (MISC::IS_BIT_SET(Local_183.f_5, 29))
			{
				Local_183.f_26 = 3;
				return 1;
			}
		}
	}
	if (!func_140() && !func_340())
	{
		if (Local_183.f_149.f_2 >= func_109())
		{
			Local_183.f_26 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_340()
{
	return MISC::IS_BIT_SET(Global_1689733.f_2, 0);
}

int func_341()
{
	struct<3> Var0;
	int iVar3;
	
	if (func_347())
	{
		return 0;
	}
	if (func_19(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
		{
			if (func_140())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_346()) && !ENTITY::IS_ENTITY_DEAD(func_346(), false))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_346(), true) };
				}
			}
			else if (func_30())
			{
				if (!func_31())
				{
					iVar3 = func_342(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9);
					switch (iVar3)
					{
						case 128:
							Var0 = { -245.64f, 6210.96f, 35.94f };
							break;
						
						case 129:
							Var0 = { 1695.88f, 4783.87f, 47.02f };
							break;
						
						case 130:
							Var0 = { -115.15f, -1771.65f, 38.86f };
							break;
						
						case 131:
							Var0 = { -600.96f, 280.47f, 87.04f };
							break;
						
						case 132:
							Var0 = { -1269.72f, -304.09f, 40f };
							break;
						
						case 133:
							Var0 = { 758.46f, -814.57f, 30.3f };
							break;
					}
				}
				else
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
			}
			else if (func_16())
			{
				if (func_17(func_15()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(func_15(), true) };
				}
			}
			else
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			}
			if (func_17(NETWORK::NET_TO_OBJ(Local_183.f_158)))
			{
				Local_183.f_120 = func_157(NETWORK::NET_TO_OBJ(Local_183.f_158), Var0, 1);
				if (Local_183.f_120 > func_109())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_12())
	{
		iVar0 = func_345(iParam0);
		if (iVar0 != 0)
		{
			return func_343(iVar0);
		}
	}
	return -1;
}

int func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_29(iVar0) == 17)
		{
			if (func_344(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_344(int iParam0)
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

int func_345(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_393;
	}
	return 0;
}

int func_346()
{
	if (Global_1590527 != func_12())
	{
		if (!func_47(Global_1590527))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1370320))
			{
				return Global_1370320;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694849[Global_1590527]))
			{
				return Global_1694849[Global_1590527];
			}
		}
	}
	return -1;
}

bool func_347()
{
	return MISC::IS_BIT_SET(Global_1689733, 6);
}

int func_348()
{
	float fVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false))
	{
		iVar1 = Global_262145.f_24162;
		if (func_16())
		{
			iVar1 *= 10;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_183.f_149, &fVar0, true, false))
		{
			Local_183.f_121 = (Local_183.f_149.f_2 - fVar0);
			if (Local_183.f_121 > IntToFloat(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_349()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (!func_83())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false)) && CAM::DOES_CAM_EXIST(Local_183.f_168))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if (MISC::IS_BIT_SET(Local_183.f_5, 1) || func_195())
			{
				return;
			}
			Var0 = { func_350(func_351()) };
			bVar5 = false;
			bVar6 = true;
			iVar7 = 0;
			if (func_16())
			{
				bVar5 = true;
				bVar6 = false;
				iVar7 = 0;
			}
			if (func_35())
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
					{
						iVar4 = 1;
					}
				}
				else
				{
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
					{
						iVar3 = 1;
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
					{
						iVar4 = 1;
					}
				}
			}
			if (iVar3 && !func_261(bVar5))
			{
				Local_183.f_119 = 140f;
			}
			else if (iVar4 && !func_261(bVar5))
			{
				Local_183.f_119 = 60f;
			}
			else if (!func_16())
			{
				Local_183.f_119 = 100f;
			}
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), iVar7, Var0 * Vector(-Local_183.f_119, -Local_183.f_119, -Local_183.f_119), false, true, bVar6, false);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

Vector3 func_350(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_351()
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_352(&Var0);
	return Var0;
}

void func_352(var uParam0)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

void func_353()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	
	if (func_83())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_183.f_158), false)) && CAM::DOES_CAM_EXIST(Local_183.f_168))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			fVar0 = 0f;
			if (!func_38() && !func_24())
			{
				if (!func_253())
				{
					if (func_25(&(Local_183.f_252)))
					{
						iVar1 = Global_262145.f_24160;
						if (func_24())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_22(&(Local_183.f_252), iVar1, 0))
						{
							iVar2 = (100 * MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_252)));
							Local_183.f_20 = (iVar2 / iVar1);
						}
						else
						{
							if (func_17(Local_183.f_160))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_183.f_160, NETWORK::NET_TO_OBJ(Local_183.f_158), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, false, false, false, false, 2, true);
							}
							Local_183.f_20 = 100;
							func_21(&(Local_183.f_252));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_43))
							{
								AUDIO::STOP_SOUND(Local_183.f_43);
								AUDIO::RELEASE_SOUND_ID(Local_183.f_43);
								Local_183.f_43 = -1;
							}
						}
					}
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						bVar3 = PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if ((((bVar3 && Local_183.f_20 == 100) && !func_261(0)) && !func_77()) && func_163())
					{
						fVar0 = 120f;
						if (func_24())
						{
							fVar0 = 110f;
						}
						else if (func_30())
						{
							fVar0 = 49f;
						}
						if (IntToFloat(Local_183[1]) != 0f)
						{
							func_360(1);
						}
						else
						{
							func_360(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
						func_23(&(Local_183.f_250), 0, 0);
						func_359(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_42))
						{
							Local_183.f_42 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_42, "HUD_Boost_Loop", Local_183.f_156, true);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_24())
					{
						fVar0 = 115f;
					}
					else if (func_30())
					{
						fVar0 = 49f;
					}
					if (CAM::DOES_CAM_EXIST(Local_183.f_168))
					{
						if (!CAM::IS_CAM_SHAKING(Local_183.f_168))
						{
							CAM::SHAKE_CAM(Local_183.f_168, "DRONE_BOOST_SHAKE", 1f);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_183.f_168, 0.15f);
						}
					}
					if (func_25(&(Local_183.f_250)))
					{
						if (func_22(&(Local_183.f_250), Global_262145.f_24159, 0))
						{
							Local_183.f_20 = 0;
							func_360(0);
							func_359(0);
							func_21(&(Local_183.f_252));
							func_23(&(Local_183.f_252), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_183.f_168, true);
							PAD::STOP_PAD_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_21(&(Local_183.f_250));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_42))
							{
								AUDIO::STOP_SOUND(Local_183.f_42);
								AUDIO::RELEASE_SOUND_ID(Local_183.f_42);
								Local_183.f_42 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_43))
							{
								Local_183.f_43 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_43, "HUD_Boost_Recharge_Loop", Local_183.f_156, true);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24159) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_250))));
							Local_183.f_20 = (100 - SYSTEM::ROUND(fVar4));
							PAD::SET_PAD_SHAKE(0, Global_262145.f_24159, 255);
						}
					}
				}
			}
			Var5 = { Local_183.f_149 };
			if (MISC::IS_BIT_SET(Local_183.f_5, 1) || func_195())
			{
				return;
			}
			Var8 = { func_350(func_351()) };
			Var11 = { func_350(func_358(func_351())) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(Var5, &fVar14, true, false);
			if (!func_357())
			{
				if (Local_183.f_10 == 2 || (Var5.f_2 - fVar14) < 2f)
				{
					fVar15 = 24f;
					if (Local_183[1] != 0)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 207, true);
					}
					if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f || Local_183[1] != 0)
					{
						if ((Var5.f_2 - fVar14) < 0.5f || PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
						{
							fVar15 = 24f;
						}
						else
						{
							fVar15 = 10f;
						}
					}
					else
					{
						fVar15 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, fVar15, false, true, true, false);
				}
			}
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				if (Local_183[2] >= 127)
				{
					Local_183[2] = 127;
				}
				else if (Local_183[2] <= -127)
				{
					Local_183[2] = -127;
				}
				if (Local_183[0] >= 127)
				{
					Local_183[0] = 127;
				}
				else if (Local_183[0] <= -127)
				{
					Local_183[0] = -127;
				}
			}
			if (!PAD::_IS_USING_KEYBOARD(0))
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207) != 0f)
				{
					iVar17 = 1;
				}
			}
			else
			{
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209) != 0f)
				{
					iVar16 = 1;
				}
				if (PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210) != 0f)
				{
					iVar17 = 1;
				}
			}
			if (((iVar16 && func_356()) && !func_77()) || (func_253() && !func_252()))
			{
				fVar20 = Local_183.f_119;
				if (func_162())
				{
					fVar20 = 5f;
				}
				if (func_38() || func_24())
				{
					fVar19 = 10f;
				}
				if (func_253() && !func_252())
				{
					if (!PAD::_IS_USING_KEYBOARD(0))
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
					}
					else
					{
						fVar18 = ((fVar20 + fVar0) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
					}
				}
				else if (!PAD::_IS_USING_KEYBOARD(0))
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 208)));
				}
				else
				{
					fVar18 = ((fVar20 + fVar19) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 209)));
				}
				Var21 = { Var11 * Vector(fVar18, fVar18, fVar18) };
				if (Var21.f_2 > 149f)
				{
					Var21.f_2 = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var21, false, true, true, false);
			}
			else if (((iVar17 && !func_77()) && func_356()) && !func_261(0))
			{
				if (func_38() || func_24())
				{
					fVar25 = 10f;
				}
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					fVar24 = ((Local_183.f_119 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 207)));
				}
				else
				{
					fVar24 = ((Local_183.f_119 + fVar25) / (1f / PAD::GET_CONTROL_UNBOUND_NORMAL(2, 210)));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var11 * Vector(-fVar24, -fVar24, -fVar24), false, true, true, false);
			}
			if (((Local_183[1] > 0 && !func_253()) && !func_261(0)) && !func_77())
			{
				fVar28 = func_355();
				fVar26 = (Local_183.f_119 / (127f / IntToFloat(Local_183[1])));
				fVar27 = (fVar28 / (127f / IntToFloat(Local_183[1])));
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var8 * Vector(fVar26, fVar26, fVar26), false, true, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, fVar27, false, true, true, false);
			}
			else if ((((Local_183[1] < 0 && !func_253()) && !func_261(0)) && !func_77()) || (func_253() && func_252()))
			{
				if (func_253() && func_252())
				{
					fVar31 = 50f;
					if (func_24())
					{
						fVar29 = (Local_183.f_119 / -1f);
					}
					else
					{
						fVar29 = ((Local_183.f_119 + fVar0) / -1f);
					}
					fVar30 = (fVar31 / -1f);
				}
				else
				{
					fVar31 = func_355();
					if (func_24())
					{
						fVar29 = (Local_183.f_119 / (127f / IntToFloat(Local_183[1])));
					}
					else
					{
						fVar29 = ((Local_183.f_119 + fVar0) / (127f / IntToFloat(Local_183[1])));
					}
					fVar30 = (fVar31 / (127f / IntToFloat(Local_183[1])));
				}
				if (func_24())
				{
					if (!func_252())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, -fVar30, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, 41f, false, true, true, false);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, -149f, 0f, false, true, true, false);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, -fVar30, false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var8 * Vector(fVar29, fVar29, fVar29), false, true, true, false);
				}
			}
			Var32 = { func_354(Var8, Var11) };
			if ((!func_253() && !func_261(0)) && !func_77())
			{
				if (Local_183[0] > 0)
				{
					fVar35 = -(Local_183.f_119 / (127f / IntToFloat(Local_183[0])));
					fVar36 = (8f / (127f / IntToFloat(Local_183[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var32 * Vector(fVar35, fVar35, fVar35), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, fVar36, false, true, true, false);
				}
				else if (Local_183[0] < 0)
				{
					fVar37 = -(Local_183.f_119 / (127f / IntToFloat(Local_183[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_183[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, Var32 * Vector(fVar37, fVar37, fVar37), false, true, true, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_183.f_158), 0, 0f, 0f, -fVar38, false, true, true, false);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

Vector3 func_354(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

float func_355()
{
	if (func_24() || func_38())
	{
		return 40f;
	}
	else if (func_30())
	{
		return 30f;
	}
	else if (func_162())
	{
		return 2.5f;
	}
	return 6.4f;
}

int func_356()
{
	if (func_261(0))
	{
		return 0;
	}
	if (func_253() && !func_252())
	{
		return 0;
	}
	return 1;
}

bool func_357()
{
	return MISC::IS_BIT_SET(Global_1689733, 2);
}

Vector3 func_358(struct<2> Param0, var uParam2)
{
	struct<3> Var0;
	
	Var0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return Var0;
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 21))
		{
			MISC::SET_BIT(&(Local_183.f_5), 21);
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 21))
	{
		MISC::CLEAR_BIT(&(Local_183.f_5), 21);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 22))
		{
			MISC::SET_BIT(&(Local_183.f_5), 22);
		}
	}
	else if (MISC::IS_BIT_SET(Local_183.f_5, 22))
	{
		MISC::CLEAR_BIT(&(Local_183.f_5), 22);
	}
}

void func_361()
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_183.f_158), false))
		{
			if ((func_24() || func_38()) || func_35())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_183.f_149;
				fVar1 = Local_183.f_149.f_1;
			}
			HUD::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
			HUD::_0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1689733.f_24) && !func_35())
			{
				if (!MISC::IS_BIT_SET(Local_183.f_5, 8))
				{
					HUD::HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME();
				}
				HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_362()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_41) && Local_183.f_41 == -1)
		{
			Local_183.f_41 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_41, "HUD_Loop", Local_183.f_156, true);
		}
	}
}

void func_363()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_31))
		{
			Local_183.f_31 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_31, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_156, false, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_31, "DroneRotationalSpeed", Local_183.f_129);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_31, "DroneRotationalSpeed", Local_183.f_129);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_40))
		{
			AUDIO::RELEASE_SOUND_ID(Local_183.f_40);
			Local_183.f_40 = -1;
		}
	}
}

void func_364()
{
	if (func_19(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, true);
	}
}

void func_365()
{
	int iVar0;
	
	if (func_24())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_183.f_45);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158) && func_19(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), false))
			{
				if (func_366(NETWORK::NET_TO_OBJ(Local_183.f_158), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_24783, 1))
				{
					if (!func_210(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							MISC::SET_BIT(&(Local_183.f_5), 11);
							return;
						}
					}
				}
			}
		}
		MISC::CLEAR_BIT(&(Local_183.f_5), 11);
	}
}

bool func_366(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3)) <= (fParam2 * fParam2);
}

void func_367()
{
	int iVar0;
	
	if (((func_35() || func_24()) || func_38()) || func_16())
	{
		iVar0 = 1000;
		if (func_24() || func_38())
		{
			iVar0 = 7000;
		}
		else if (func_16())
		{
			iVar0 = 1100;
		}
		if (!MISC::IS_BIT_SET(Local_183.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_RENDERING(Local_183.f_168))
			{
				if (func_17(func_18()))
				{
					if (func_22(&(Local_183.f_268), iVar0, 0))
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_18(), true, false);
						ENTITY::SET_ENTITY_COLLISION(func_18(), true, false);
						MISC::SET_BIT(&(Local_183.f_5), 29);
					}
				}
			}
		}
	}
}

void func_368()
{
	if (!func_16() || PLAYER::PLAYER_ID() == func_12())
	{
		return;
	}
	if (func_22(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/]), 2500, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_206[PLAYER::PLAYER_ID()]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_183.f_206[PLAYER::PLAYER_ID()], false);
		}
		func_21(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/]));
	}
}

void func_369()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	sVar0 = "scr_ih_sub";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (func_17(func_15()) && PLAYER::PLAYER_ID() != func_12())
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_206[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				sVar1 = func_376(PLAYER::PLAYER_ID());
				iVar2 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), sVar1);
				Local_183.f_206[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", func_15(), func_375(PLAYER::PLAYER_ID()), 0f, 0f, 0f, iVar2, 5f, false, false, false);
			}
			else
			{
				func_23(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			if (func_25(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/])))
			{
				if (func_22(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/]), 1000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_183.f_206[PLAYER::PLAYER_ID()], "flame", 0.15f, false);
					func_371();
					func_268();
					func_349();
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158), true, false);
					}
					func_370();
					if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_40))
					{
						Local_183.f_40 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_40, "HUD_Startup", Local_183.f_156, true);
					}
					func_271();
					func_102();
					func_238(1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::SET_TIMECYCLE_MODIFIER("IslandPeriscope");
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
					Local_183.f_172 = NETWORK::GET_NETWORK_TIME();
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158), false);
					func_384(4);
				}
			}
		}
		else
		{
			func_385(1);
			func_384(7);
		}
	}
}

void func_370()
{
	if (func_140() || func_31())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_24())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_38())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_35())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
	else if (func_16())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
		}
	}
}

void func_371()
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	
	sVar1 = func_376(PLAYER::PLAYER_ID());
	if (Global_1319180 == 1)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), sVar1);
		Var2 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(func_15(), iVar0) };
		Local_183.f_143 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) };
	}
	else if (Global_1319180 == 2)
	{
		iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), sVar1);
		Var2 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(func_15(), iVar0) };
		Local_183.f_143 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var2, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) };
	}
	Var5 = { ENTITY::GET_ENTITY_ROTATION(func_15(), 2) };
	ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_143, true, false, false, true);
	func_373(Local_183.f_143, (Var5.x + 90f), 180f, 0f);
	Var8 = { ENTITY::GET_ENTITY_COORDS(func_15(), true) };
	Var11 = { 0f, 0f, 0f };
	Local_183.f_116 = func_372(Var11, Var8);
	ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_116);
	ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_183.f_158), (Var5.x - 90f), 0f, Local_183.f_116, 2, true);
	if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_115))
	{
		Local_183.f_115 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_115, "Missile_Launch", NETWORK::NET_TO_OBJ(Local_183.f_158), Local_183.f_156, true, 0);
	}
}

float func_372(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_373(struct<3> Param0, struct<3> Param3)
{
	if (!func_374(Global_1689733.f_13, Param0, 0))
	{
		Global_1689733.f_13 = { Param0 };
		Param3 = { Param3 + Vector(0f, -180f, 180f) };
		Global_1689733.f_16 = { Param3 };
	}
}

bool func_374(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_375(int iParam0)
{
	if (Local_183.f_82[iParam0] > 4)
	{
		return 0f, 0f, 1.5f;
	}
	return 0f, 0f, 1.5f;
}

char* func_376(int iParam0)
{
	if (iParam0 == func_12())
	{
		return "";
	}
	switch (Local_183.f_82[iParam0])
	{
		case 1:
			return "sub_hatch1";
		
		case 2:
			return "sub_hatch2";
		
		case 3:
			return "sub_hatch3";
		
		case 4:
			return "sub_hatch4";
		
		case 5:
			return "sub_hatch5";
		
		case 6:
			return "sub_hatch6";
		
		case 7:
			return "sub_hatch7";
		
		case 8:
			return "sub_hatch8";
		
		default:
	}
	return "sub_hatch4";
}

void func_377()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_383() || !func_31())
	{
		return;
	}
	switch (Local_183.f_80)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_159))
			{
				iVar0 = joaat("ch_prop_ch_phone_ing_01a");
				if (func_181(iVar0))
				{
					if (func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_183.f_6, 4))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_183.f_6), 4);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_382(&(Local_183.f_159), iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 1, 1, 0, 0, 0, 1))
							{
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_183.f_159, PLAYER::PLAYER_ID(), true);
								iVar1 = PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_183.f_159), PLAYER::PLAYER_PED_ID(), iVar1, 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				Local_183.f_80 = 1;
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
			{
				func_333(0, 0, 0);
				Local_183.f_80 = 2;
			}
			break;
		
		case 2:
			if (func_381(0, "CREATE"))
			{
				func_363();
				if (func_380(Local_183.f_159))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_159)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_159), true, false);
					}
				}
				if (func_380(Local_183.f_158))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158)))
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158), true, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_183.f_162, false, false);
					}
				}
			}
			if (func_378(1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_183.f_162, NETWORK::NET_TO_OBJ(Local_183.f_158), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(Local_183.f_162, false, false);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(NETWORK::NET_TO_ENT(Local_183.f_158));
				OBJECT::_0x006E4B040ED37EC3(NETWORK::NET_TO_OBJ(Local_183.f_158));
				func_271();
				func_131();
				func_238(1);
				func_250();
				func_353();
				func_370();
				if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_40))
				{
					Local_183.f_40 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_40, "HUD_Startup", Local_183.f_156, true);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
				Local_183.f_172 = NETWORK::GET_NETWORK_TIME();
				func_384(4);
				func_333(1, 1, 0);
				Local_183.f_80 = 3;
			}
			break;
		
		case 3:
			if (func_378(0))
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				switch (iVar2)
				{
					case 0:
						func_333(2, 0, 0);
						Local_183.f_242 = 2;
						break;
					
					case 1:
						func_333(3, 0, 0);
						Local_183.f_242 = 3;
						break;
					
					case 2:
						func_333(4, 0, 0);
						Local_183.f_242 = 4;
						break;
				}
				Local_183.f_80 = 4;
			}
			break;
		
		case 4:
			if (func_378(0))
			{
				func_333(1, 1, 0);
				Local_183.f_80 = 3;
			}
			break;
	}
}

int func_378(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_17(iVar0))
	{
		fVar1 = func_379();
		iVar2 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_183.f_79);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar2) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar2) >= fVar1)
		{
			if (bParam0)
			{
				func_335(0);
			}
			return 1;
		}
	}
	return 0;
}

float func_379()
{
	return 0.95f;
}

int func_380(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_381(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_183.f_79);
	if (iVar0 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sParam1)) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_183.f_159), MISC::GET_HASH_KEY(sParam1))) || ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_OBJ(Local_183.f_158), MISC::GET_HASH_KEY(sParam1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_382(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_383()
{
	return MISC::IS_BIT_SET(Global_1689733, 13);
}

void func_384(int iParam0)
{
	if (Local_183.f_240 != iParam0)
	{
		Local_183.f_240 = iParam0;
	}
}

void func_385(bool bParam0)
{
	if (bParam0)
	{
		if (!func_383())
		{
			MISC::SET_BIT(&Global_1689733, 13);
		}
	}
	else if (func_383())
	{
		MISC::CLEAR_BIT(&Global_1689733, 13);
	}
}

void func_386()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if (!CAM::DOES_CAM_EXIST(Local_183.f_168) && MISC::IS_BIT_SET(Local_183.f_5, 0))
			{
				if (func_397())
				{
					if (func_340())
					{
						func_299(PLAYER::PLAYER_ID(), 0, 33280, 0);
					}
					else if (!func_35())
					{
						func_299(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!func_396())
					{
						HUD::_THEFEED_DISABLE_LOADING_SCREEN_TIPS();
					}
					else
					{
						HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
					}
					Local_183.f_168 = CAM::CREATE_CAMERA(26379945, true);
					CAM::SET_CAM_FOV(Local_183.f_168, Local_183.f_125);
					CAM::SET_CAM_NEAR_CLIP(Local_183.f_168, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_183.f_168, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_35())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					Var0 = { func_395() };
					CAM::_0x202A5ED9CE01D6E7(Local_183.f_168, NETWORK::NET_TO_OBJ(Local_183.f_158), 0f, 0f, 180f, Var0, 1);
					if (func_35())
					{
						CAM::SET_CAM_ROT(Local_183.f_168, func_394() - Vector(0f, -180f, 180f), 2);
					}
					PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_183.f_149, 75f, 75f);
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_183.f_149, CAM::GET_CAM_ROT(Local_183.f_168, 2));
					if (!func_16())
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158), false);
					}
					if (!func_340())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					if (!func_31() && !func_16())
					{
						func_370();
						if (AUDIO::HAS_SOUND_FINISHED(Local_183.f_40))
						{
							Local_183.f_40 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_183.f_40, "HUD_Startup", Local_183.f_156, true);
						}
						func_271();
						if (func_83())
						{
							func_102();
						}
						else
						{
							func_131();
						}
						func_238(1);
						func_250();
						func_353();
						CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, true, 0);
						Local_183.f_172 = NETWORK::GET_NETWORK_TIME();
					}
					func_391(1);
					func_390(1);
					func_388(158);
					MISC::SET_BIT(&(Local_85[PLAYER::PLAYER_ID() /*3*/]), 0);
					if (!func_31() && !func_16())
					{
						func_384(4);
					}
					else if (func_16())
					{
						func_384(3);
					}
					else
					{
						Local_183.f_152 = { func_6(PLAYER::PLAYER_ID()) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Local_183.f_152, &(Local_183.f_152.f_2), false, false);
						Local_183.f_118 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						func_387();
						Local_183.f_152 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_183.f_152, Local_183.f_118, -0.0695723f, 0.177497f, 0f) };
						func_384(2);
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_183.f_168))
				{
				}
				if (!MISC::IS_BIT_SET(Local_183.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
		}
	}
}

void func_387()
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

void func_388(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_389() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_389()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_390(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334, 26))
		{
			MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334), 26);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334, 26))
	{
		MISC::CLEAR_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334), 26);
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		if (!func_75())
		{
			MISC::SET_BIT(&Global_1689733, 5);
		}
	}
	else
	{
		if (func_75())
		{
			MISC::CLEAR_BIT(&Global_1689733, 5);
		}
		func_392(0);
	}
}

void func_392(bool bParam0)
{
	if (bParam0)
	{
		if (!func_393())
		{
			MISC::SET_BIT(&Global_1689733, 12);
		}
	}
	else if (func_393())
	{
		MISC::CLEAR_BIT(&Global_1689733, 12);
	}
}

bool func_393()
{
	return MISC::IS_BIT_SET(Global_1689733, 12);
}

Vector3 func_394()
{
	return Global_1689733.f_16;
}

Vector3 func_395()
{
	if (func_24() || func_38())
	{
		return 0f, -0.099f, -0.02f;
	}
	else if (func_35())
	{
		return 0f, -0.9f, 0f;
	}
	else if (func_30() || func_162())
	{
		return 0f, -0.038f, -0.006f;
	}
	else if (func_16())
	{
		return 0f, -5.48f, 0f;
	}
	return 0f, -0.038f, -0.004f;
}

bool func_396()
{
	return MISC::IS_BIT_SET(Global_1689733, 10);
}

int func_397()
{
	if (func_39() && !func_41())
	{
		return 1;
	}
	if (func_401())
	{
		return 1;
	}
	if (func_400())
	{
		return 1;
	}
	if (func_41() && func_399())
	{
		return 1;
	}
	if (func_398() && func_399())
	{
		return 1;
	}
	if (!func_70(PLAYER::PLAYER_ID(), 0) && !func_295())
	{
		return 1;
	}
	return 0;
}

int func_398()
{
	if (func_46(PLAYER::PLAYER_ID()) && func_42())
	{
		if (Global_1319180 == 2 || Global_1319180 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_399()
{
	if (Global_1319171 != -1 || Global_1319177 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_43())
		{
			return 0;
		}
	}
	return 0;
}

int func_400()
{
	return 0;
}

int func_401()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	if (func_41() || func_402())
	{
		return 0;
	}
	if (func_400())
	{
		return 0;
	}
	return 1;
}

int func_402()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_403()
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	float fVar5;
	
	iVar0 = joaat("blazer5");
	if (func_181(Local_183.f_239) && func_181(iVar0))
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
			{
				if (!func_340())
				{
					if (func_140())
					{
						if (func_17(func_346()))
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(func_346(), true) };
						}
					}
					else
					{
						Var1 = { Local_183.f_137 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_299(PLAYER::PLAYER_ID(), 0, 512, 0);
					}
					if (!MISC::IS_BIT_SET(Local_183.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 100f, 1))
						{
							MISC::SET_BIT(&(Local_183.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!MISC::IS_BIT_SET(Local_183.f_5, 19))
						{
							if (func_409())
							{
								if (func_406())
								{
									MISC::SET_BIT(&(Local_183.f_5), 19);
								}
							}
							else
							{
								if (!func_258(func_405()))
								{
									Local_183.f_137 = { func_405() };
								}
								MISC::SET_BIT(&(Local_183.f_5), 19);
								if (func_16())
								{
									Local_183.f_137.f_2 = (Local_183.f_137.f_2 + 1000f);
								}
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(Local_183.f_5, 19) || func_340())
				{
					if (!MISC::IS_BIT_SET(Local_183.f_5, 20))
					{
						Local_183.f_162 = VEHICLE::CREATE_VEHICLE(iVar0, Local_183.f_137, 0f, false, false, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_183.f_162, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_183.f_162, Local_183.f_137, false, false, true);
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_183.f_162, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_183.f_162, false, false);
						MISC::SET_BIT(&(Local_183.f_5), 20);
					}
					else if (func_92(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
					{
						if (!MISC::IS_BIT_SET(Local_183.f_5, 30))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							MISC::SET_BIT(&(Local_183.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							bVar4 = func_404();
							if (func_31())
							{
								Local_183.f_152 = { func_6(PLAYER::PLAYER_ID()) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_183.f_152, &(Local_183.f_152.f_2), false, false);
								Local_183.f_137 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_183.f_157, "ENTER", Local_183.f_152, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 0f, 2) };
							}
							if (func_382(&(Local_183.f_158), Local_183.f_239, Local_183.f_137, 0, 1, 1, 1, 1, 0, bVar4))
							{
								Global_1689733.f_20 = NETWORK::NET_TO_OBJ(Local_183.f_158);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_183.f_158), true);
								if (func_140())
								{
									if (func_17(func_346()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_18(), ENTITY::GET_ENTITY_ROTATION(func_346(), 2), 2, true);
										fVar5 = (ENTITY::GET_ENTITY_HEADING(func_346()) + 180f);
									}
								}
								Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_416 = { Local_183.f_137 };
								Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_419 = fVar5;
								Local_85[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_183.f_158;
								NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Local_183.f_158, PLAYER::PLAYER_ID(), true);
								INTERIOR::_0x38C1CB1CB119A016(NETWORK::NET_TO_ENT(Local_183.f_158), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_183.f_158), true, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_18(), Local_183.f_137, false, false, true);
								ENTITY::SET_ENTITY_HEADING(func_18(), fVar5);
								NETWORK::_NETWORK_SET_ENTITY_GHOSTED_WITH_OWNER(func_18(), true);
								if (!func_258(func_394()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_18(), func_394(), 2, true);
								}
								if (func_35() || func_16())
								{
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(func_18(), false, false);
								}
								NETWORK::_NETWORK_SET_NETWORK_ID_DYNAMIC(Local_183.f_158, true);
								if (func_166(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(func_18(), Global_262145.f_24161 * 5, 0);
								}
								else if (func_16())
								{
									ENTITY::SET_ENTITY_HEALTH(func_18(), 1, 0);
									NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_183.f_158, true);
									ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_ENT(Local_183.f_158), 700);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_18(), Global_262145.f_24161, 0);
								}
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_183.f_158, false);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_183.f_158), true);
								PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_183.f_137, 100f, 200f);
								STREAMING::SET_FOCUS_POS_AND_VEL(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_183.f_158), true), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_183.f_158), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_183.f_239);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_183.f_158), false);
				if (func_17(Local_183.f_162))
				{
					if (func_17(NETWORK::NET_TO_ENT(Local_183.f_158)))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_183.f_162, NETWORK::NET_TO_OBJ(Local_183.f_158), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, false, false, false, false, 2, true);
						MISC::SET_BIT(&(Local_183.f_5), 0);
					}
				}
			}
		}
	}
}

int func_404()
{
	if (func_31())
	{
		return 1;
	}
	if (func_16())
	{
		return 1;
	}
	return 0;
}

Vector3 func_405()
{
	return Global_1689733.f_13;
}

int func_406()
{
	if (Local_183.f_16 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_183.f_5, 14))
		{
			if ((!func_166(PLAYER::PLAYER_ID()) && func_140()) && func_17(func_346()))
			{
				Local_183.f_137 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_346(), true), ENTITY::GET_ENTITY_HEADING(func_346()), -0.7f, 1.6f, 4f) };
				MISC::SET_BIT(&(Local_183.f_5), 14);
			}
			else
			{
				if (func_140() && func_17(func_346()))
				{
					Local_183.f_137 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_346(), true), ENTITY::GET_ENTITY_HEADING(func_346()), -0.7f, 1.6f, 4f) };
				}
				Local_183.f_137 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137 - 1.5f), (Local_183.f_137 + 1.5f));
				Local_183.f_137.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137.f_1 - 1.5f), (Local_183.f_137.f_1 + 1.5f));
				Local_183.f_137.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137.f_2 + 0.5f), (Local_183.f_137.f_2 + 1.5f));
				if (!func_408(Local_183.f_137))
				{
					MISC::SET_BIT(&(Local_183.f_5), 14);
				}
			}
		}
		else if (MISC::IS_BIT_SET(Local_183.f_5, 15))
		{
			Local_183.f_137 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137 - 1.5f), (Local_183.f_137 + 1.5f));
			Local_183.f_137.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137.f_1 - 1.5f), (Local_183.f_137.f_1 + 1.5f));
			Local_183.f_137.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE((Local_183.f_137.f_2 + 0.5f), (Local_183.f_137.f_2 + 1.5f));
			if (!func_408(Local_183.f_137))
			{
				MISC::CLEAR_BIT(&(Local_183.f_5), 15);
			}
		}
		func_407(Local_183.f_137);
	}
	else if (Local_183.f_16 == 1 && !func_408(Local_183.f_137))
	{
		return 1;
	}
	else
	{
		Local_183.f_16 = 0;
		MISC::SET_BIT(&(Local_183.f_5), 15);
	}
	return 0;
}

void func_407(struct<3> Param0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar10;
	
	switch (Local_183.f_15)
	{
		case 0:
			if (func_140())
			{
				if (func_17(func_346()))
				{
					iVar0 = func_346();
				}
			}
			if (func_24() || func_38())
			{
				fVar1 = func_216(Local_183.f_239);
			}
			else
			{
				fVar1 = (func_216(Local_183.f_239) * 11f);
			}
			Local_183.f_167 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param0, fVar1, 511, iVar0, 4);
			if (Local_183.f_167 != 0)
			{
				Local_183.f_15 = 1;
			}
			break;
		
		case 1:
			iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(Local_183.f_167, &iVar2, &Var6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_183.f_16 = 1;
					Var6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_183.f_16 = 2;
					Local_183.f_167 = 0;
					Local_183.f_15 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_183.f_15 = 0;
			}
			break;
	}
}

int func_408(struct<3> Param0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, false, true))
	{
		return 1;
	}
	return 0;
}

int func_409()
{
	if (func_140())
	{
		return 1;
	}
	if (func_30() && !func_31())
	{
		return 1;
	}
	return 0;
}

int func_410()
{
	if (func_295())
	{
		return Global_1678289.f_483 == 0;
	}
	return 0;
}

void func_411()
{
	if (func_19(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_183.f_140 = { func_259(&Local_183) };
		if (!func_258(func_405()))
		{
			Local_183.f_137 = { func_405() };
		}
		else
		{
			Local_183.f_137 = { func_6(PLAYER::PLAYER_ID()) };
			Local_183.f_137 = { Local_183.f_137, Local_183.f_137.f_1, (Local_183.f_137.f_2 + 1.5f) };
		}
		if (func_70(PLAYER::PLAYER_ID(), 0))
		{
			func_460(1);
		}
		if (func_70(PLAYER::PLAYER_ID(), 0))
		{
			func_457();
		}
		else if (((func_455(PLAYER::PLAYER_ID()) == 2 || func_455(PLAYER::PLAYER_ID()) == 1) && !MISC::IS_BIT_SET(Global_1696338, 6)) && !MISC::IS_BIT_SET(Global_1696339, 0))
		{
			if (MISC::IS_BIT_SET(Global_2515911, 0))
			{
				func_454(1);
				func_446(0, 0);
				func_445();
				func_392(1);
				func_384(1);
			}
		}
		else if ((func_40() && func_441()) && !MISC::IS_BIT_SET(Global_1696338, 6))
		{
			func_428();
		}
		else if (MISC::IS_BIT_SET(Global_1696338, 6) && MISC::IS_BIT_SET(Global_1696339, 0))
		{
			func_446(0, 0);
			func_392(1);
			func_384(1);
		}
		else if (func_16())
		{
			func_413();
		}
		else if (func_31() && !func_412())
		{
			HUD::CLEAR_HELP(true);
			func_136("PIM_DRONAMOS", -1);
			func_299(PLAYER::PLAYER_ID(), 1, 0, 0);
			func_384(7);
		}
		else if (func_258(Local_183.f_134))
		{
			Local_183.f_155 = 0;
			func_392(1);
			func_384(1);
		}
	}
}

bool func_412()
{
	return MISC::IS_BIT_SET(Global_1689733, 23);
}

void func_413()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if ((func_398() && !func_427()) && !func_418())
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201) || PAD::IS_DISABLED_CONTROL_PRESSED(2, 201))
		{
			if (Global_1319180 == 1)
			{
				Local_183.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			}
			else
			{
				Local_183.f_82[PLAYER::PLAYER_ID()] = MISC::GET_RANDOM_INT_IN_RANGE(5, 9);
			}
			if (Global_1319180 == 1)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), func_376(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(func_15(), iVar0) };
				Local_183.f_143 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) };
			}
			else if (Global_1319180 == 2)
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(func_15(), func_376(PLAYER::PLAYER_ID()));
				Var1 = { ENTITY::_GET_ENTITY_BONE_POSITION_2(func_15(), iVar0) };
				Local_183.f_143 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, ENTITY::GET_ENTITY_HEADING(func_15()), 0f, 0f, -2.6f) };
			}
			Var4 = { ENTITY::GET_ENTITY_ROTATION(func_15(), 2) };
			func_373(Local_183.f_143, (Var4.x + 90f), 180f, Var4.f_2);
			func_392(1);
			func_417(Local_183.f_82[PLAYER::PLAYER_ID()]);
			func_384(1);
			func_416();
			func_415();
			HUD::CLEAR_HELP(true);
		}
	}
	else if (!func_17(func_15()))
	{
	}
	if (func_427())
	{
		if (func_414("MP_SUBSEAT_2"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_414(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_415()
{
	Global_2540612.f_337++;
}

void func_416()
{
	Global_2540612.f_337 = 0;
	Global_2540612.f_337.f_1 = 0;
}

void func_417(var uParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.x = -1756910444;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	iVar3 = func_193(0, 1);
	if (iVar3 != 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

int func_418()
{
	struct<3> Var0;
	int iVar3;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, false, true, 0))
	{
		return 1;
	}
	if (func_426())
	{
		return 1;
	}
	if (func_425())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_295())
	{
		return 1;
	}
	if (func_70(PLAYER::PLAYER_ID(), 0))
	{
		if (func_47(Global_1590527))
		{
			return 1;
		}
	}
	if (func_140())
	{
		if (func_424())
		{
			if (func_423())
			{
				return 1;
			}
			if (MISC::IS_BIT_SET(Local_183.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_16())
	{
		if ((func_422() && Global_1319180 == 1) || (func_421() && Global_1319180 == 2))
		{
			return 1;
		}
		if (MISC::IS_BIT_SET(Local_183.f_5, 28))
		{
			return 1;
		}
		if (!func_17(func_15()))
		{
			return 1;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(func_15(), true) };
		if (Var0.f_2 <= -3f)
		{
			return 1;
		}
		iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_15(), -1, false);
		if (func_17(iVar3))
		{
			if (PED::IS_PED_A_PLAYER(iVar3))
			{
				if (func_199(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3)))
				{
					return 1;
				}
			}
		}
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_76(0))
	{
		return 1;
	}
	if (func_310())
	{
		return 1;
	}
	if (func_140())
	{
		if (func_39())
		{
			if (func_19(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_157(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_420())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_419(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_197())
	{
		return 1;
	}
	if (Global_262145.f_24171)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_183.f_5, 27))
	{
		return 1;
	}
	if (func_70(PLAYER::PLAYER_ID(), 0))
	{
		if (func_17(func_346()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_346(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_346(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_346(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319175)
	{
		return 1;
	}
	if (Global_2517026)
	{
		return 1;
	}
	if (Global_2517024)
	{
		return 1;
	}
	return 0;
}

int func_419(int iParam0, int iParam1)
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, false)))
	{
		return 0;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(iParam0) != 0 || PED::GET_VEHICLE_PED_IS_ENTERING(iParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_420()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	if (PLAYER::PLAYER_ID() == func_12())
	{
		return 0;
	}
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 != func_12() && PLAYER::PLAYER_ID() != func_12())
	{
		return MISC::IS_BIT_SET(Global_1590682[Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 /*883*/].f_274.f_444, 2);
	}
	return 0;
}

int func_422()
{
	if (PLAYER::PLAYER_ID() == func_12())
	{
		return 0;
	}
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 != func_12() && PLAYER::PLAYER_ID() != func_12())
	{
		return MISC::IS_BIT_SET(Global_1590682[Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 /*883*/].f_274.f_444, 1);
	}
	return 0;
}

int func_423()
{
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 != func_12() && PLAYER::PLAYER_ID() != func_12())
	{
		return MISC::IS_BIT_SET(Global_1590682[Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 /*883*/].f_274.f_334, 20);
	}
	return 0;
}

int func_424()
{
	if (func_166(PLAYER::PLAYER_ID()) && Global_1689733.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_425()
{
	if (Global_2440277.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_426()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_427()
{
	char* sVar0;
	
	sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@male@";
	if (func_62(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "anim@scripted@submarine@ig28_submarine_turret_control@heeled@";
	}
	if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), 2106541073))
	{
		return 1;
	}
	return 0;
}

void func_428()
{
	struct<3> Var0;
	int iVar3;
	
	if (!func_418())
	{
		if ((((((func_440() || func_439()) && !Global_1663772) && func_441()) && !MISC::IS_BIT_SET(Global_2515799, 6)) && Global_1312810) && !(func_440() && Global_262145.f_25928))
		{
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 224) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !PAD::IS_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !PAD::IS_DISABLED_CONTROL_PRESSED(2, 19))
			{
				if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_25930, false, false, true, -1, 0) || MISC::IS_BIT_SET(Global_2515799, 2))
				{
					MISC::SET_BIT(&Global_2515799, 0);
					func_446(0, 0);
					func_392(1);
					func_384(1);
					func_435();
					func_433(73, -1);
					func_430();
					Var0 = { func_429() };
					func_373(Var0, 0f, 0f, 0f);
					if (func_440())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", true, 0);
					}
				}
				else if (!MISC::IS_BIT_SET(Global_2515799, 4))
				{
					MISC::SET_BIT(&Global_2515799, 4);
				}
			}
		}
	}
}

Vector3 func_429()
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	Var3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_123341.f_1 == 3 || Global_4456448.f_123341.f_1 == 3) || Global_4456448.f_123341.f_1 == 3)
	{
		Var3.f_1 = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var3, fVar0, fVar1, fVar2, 0f);
}

void func_430()
{
	int iVar0;
	
	iVar0 = func_431(73, -1);
	if (iVar0 >= 50)
	{
		MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_339.f_3), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_339.f_3), 13);
	}
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2589761[iParam0 /*3*/][func_432(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_432(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

void func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_431(iParam0, func_432(iParam1));
	iVar0++;
	func_434(iParam0, iVar0, iParam1);
}

void func_434(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = Global_2589761[iParam0 /*3*/][func_432(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

void func_435()
{
	func_436(1, 7983);
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_438(iParam1, -1, 0);
	func_437(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_437(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2552060[iParam0 /*3*/][func_432(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2552060[iParam0 /*3*/][func_432(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

var func_439()
{
	return Global_2462506;
}

int func_440()
{
	if (Global_2462505 >= 0 && Global_2462505 < 10)
	{
		return 1;
	}
	return 0;
}

int func_441()
{
	int iVar0;
	int iVar1;
	
	if (func_444() && !func_443())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969055.f_14[iVar0];
	if (iVar1 < 17)
	{
		if ((((MISC::IS_BIT_SET(Global_4456448.f_592[iVar0 /*16355*/].f_7097[iVar1], 23) && MISC::IS_BIT_SET(Global_4456448.f_592[iVar0 /*16355*/].f_7097[iVar1], 24)) && MISC::IS_BIT_SET(Global_4456448.f_592[iVar0 /*16355*/].f_7097[iVar1], 25)) && MISC::IS_BIT_SET(Global_4456448.f_592[iVar0 /*16355*/].f_7097[iVar1], 26)) && MISC::IS_BIT_SET(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!MISC::IS_BIT_SET(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_439() || func_442(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_442(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_39.f_18, 14);
}

int func_443()
{
	if (Global_4456448.f_83183 == 1 || Global_4456448.f_83183 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return MISC::IS_BIT_SET(Global_4456448.f_123318, 12);
}

void func_445()
{
	MISC::CLEAR_BIT(&Global_2515911, 0);
}

void func_446(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	Local_183.f_119 = Global_262145.f_24164;
	Local_183.f_130 = 40f;
	if (func_38() || func_24())
	{
		Local_183.f_119 = (Local_183.f_119 * 4.5f);
	}
	else if (func_35())
	{
		Local_183.f_119 = 100f;
		Local_183.f_130 = 26f;
	}
	else if (func_30())
	{
		Local_183.f_119 = 100f;
		Local_183.f_130 = 70f;
	}
	else if (func_162())
	{
		Local_183.f_119 = 10f;
		Local_183.f_130 = 35f;
	}
	else if (func_16())
	{
		Local_183.f_119 = 149f;
		Local_183.f_130 = 16f;
	}
	if (func_38())
	{
		Local_183.f_239 = joaat("xs_prop_arena_drone_01");
	}
	else if (func_24())
	{
		Local_183.f_239 = joaat("xs_prop_arena_drone_02");
	}
	else if (func_35())
	{
		Local_183.f_239 = joaat("xs_prop_arena_airmissile_01a");
		func_453(1);
	}
	else if (func_30())
	{
		if (!func_31())
		{
			iVar0 = func_452(PLAYER::PLAYER_ID());
			switch (iVar0)
			{
				case 37:
					Local_183.f_239 = joaat("ch_prop_arcade_drone_01d");
					break;
				
				case 38:
					Local_183.f_239 = joaat("ch_prop_arcade_drone_01a");
					break;
				
				case 39:
					Local_183.f_239 = joaat("ch_prop_arcade_drone_01c");
					break;
				
				case 40:
					Local_183.f_239 = joaat("ch_prop_arcade_drone_01b");
					break;
			}
		}
		else
		{
			Local_183.f_239 = joaat("ch_prop_casino_drone_01a");
		}
	}
	else if (func_162())
	{
		Local_183.f_239 = joaat("ch_prop_casino_drone_01a");
	}
	else if (func_16())
	{
		Local_183.f_239 = joaat("h4_prop_h4_airmissile_01a");
		func_453(1);
	}
	else
	{
		Local_183.f_239 = joaat("ba_prop_battle_drone_quad");
	}
	if (bParam1)
	{
		Local_183.f_137 = { Local_183.f_143 };
	}
	Global_1689733.f_1 = 1500;
	func_451();
	func_450(1);
	func_449(1);
	if (func_38() || func_83())
	{
		func_448(1);
	}
	else if (func_24())
	{
		func_448(0);
	}
	if (func_31())
	{
		Local_183.f_157 = "ANIM_HEIST@HS3F@IG4_DRONE@MALE@";
		STREAMING::REQUEST_ANIM_DICT(Local_183.f_157);
	}
	if (func_24())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (func_31())
	{
		func_447(Global_262145.f_28075);
	}
	else if (func_30() && !func_31())
	{
		func_447(Global_262145.f_28076);
	}
	else if (func_16())
	{
		func_447(SYSTEM::TO_FLOAT(Global_262145.f_29440));
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			Local_183.f_46[iVar1] = -1;
			iVar1++;
		}
	}
	else if (!func_140() && !func_340())
	{
		func_447(200f);
	}
	func_86(Global_1575006);
	if (bParam0)
	{
	}
}

void func_447(float fParam0)
{
	if (Global_1689733.f_8 != fParam0)
	{
		Global_1689733.f_8 = fParam0;
	}
}

void func_448(bool bParam0)
{
	if (bParam0)
	{
		if (!func_194())
		{
			MISC::SET_BIT(&Global_1689733, 8);
		}
	}
	else if (func_194())
	{
		MISC::CLEAR_BIT(&Global_1689733, 8);
	}
}

void func_449(bool bParam0)
{
	if (bParam0)
	{
		if (!func_357())
		{
			MISC::SET_BIT(&Global_1689733, 2);
		}
	}
	else if (func_357())
	{
		MISC::CLEAR_BIT(&Global_1689733, 2);
	}
}

void func_450(bool bParam0)
{
	if (bParam0)
	{
		if (!func_248())
		{
			MISC::SET_BIT(&Global_1689733, 4);
		}
	}
	else if (func_248())
	{
		MISC::CLEAR_BIT(&Global_1689733, 4);
	}
}

void func_451()
{
	if (!Local_183.f_155)
	{
		Local_183.f_18 = 100;
	}
	if (func_162())
	{
		Local_183.f_24 = 100;
	}
	Local_183.f_19 = 0;
	Local_183.f_20 = 100;
	Local_183.f_125 = 90f;
	Local_183.f_128 = 90f;
	if (!func_83())
	{
		Local_183.f_169 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
	}
	else if (func_16())
	{
		Local_183.f_169 = func_111();
	}
	else
	{
		Local_183.f_169 = func_110();
	}
	if (func_38())
	{
		Local_183.f_156 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_24())
	{
		Local_183.f_156 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_35())
	{
		Local_183.f_156 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else if (func_16())
	{
		Local_183.f_156 = "DLC_H4_Piloted_Missile_Sounds";
	}
	else
	{
		Local_183.f_156 = "DLC_BTL_Drone_Sounds";
	}
}

int func_452(int iParam0)
{
	if (iParam0 != func_12())
	{
		return Global_2426097[iParam0 /*443*/].f_423.f_1;
	}
	return -1;
}

void func_453(bool bParam0)
{
	if (bParam0)
	{
		if (!func_204())
		{
			MISC::SET_BIT(&Global_1689733, 15);
		}
	}
	else if (func_204())
	{
		MISC::CLEAR_BIT(&Global_1689733, 15);
	}
}

void func_454(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 4))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 4))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 4);
	}
}

int func_455(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_456())
	{
		return Global_2515816.f_1;
	}
	return Global_2417956.f_1333[iParam0 /*3*/].f_1;
}

int func_456()
{
	if (((Global_2515819 != 0 && Global_2515819 == Global_2515820) && Global_2515808 != 3) && Global_2515808 != 1)
	{
		return 0;
	}
	return 1;
}

void func_457()
{
	if (!func_418())
	{
		if (func_41())
		{
			if (func_401())
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_459("DRONE_TRIG");
				}
			}
			else if (func_414("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (func_41() || func_400())
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 176) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
				{
					func_392(1);
					func_384(1);
					HUD::CLEAR_HELP(true);
				}
			}
			else if (func_414("DRONE_TRIG"))
			{
				if ((PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_183.f_155 = 0;
					func_392(1);
					func_384(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if ((func_39() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, false, true, 0)) && func_401())
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_459("DRONE_TRIG");
			}
			if (func_414("DRONE_TRIG"))
			{
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 51) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_183.f_155 = 0;
					func_392(1);
					func_384(1);
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (func_414("DRONE_TRIG"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_458() || func_41())
		{
			if (func_414("DRONE_TRIG"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	else if (func_414("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
}

int func_458()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_60(PLAYER::PLAYER_PED_ID(), 2106541073))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

void func_459(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

void func_460(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 1))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 1);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 1))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 1);
	}
}

void func_461()
{
	char* sVar0;
	
	if (Local_183.f_45 == -1)
	{
		return;
	}
	if (!func_463(Local_183.f_45) && !func_462(Local_183.f_45))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[Local_183.f_45 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_173[Local_183.f_45]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				if (func_463(Local_183.f_45))
				{
					Local_183.f_173[Local_183.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
				}
				else
				{
					Local_183.f_173[Local_183.f_45] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2), 0f, 0.25f, 0f, 0f, 0f, 0f, 3f, false, false, false);
				}
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_173[Local_183.f_45]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_183.f_173[Local_183.f_45], false);
	}
}

int func_462(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_85[iParam0 /*3*/].f_1 == 8)
		{
			return 1;
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_85[iParam0 /*3*/].f_1 == 4)
		{
			return 1;
		}
	}
	return 0;
}

void func_464()
{
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (Local_183.f_45 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_85[Local_183.f_45 /*3*/].f_2) && func_17(NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2)))
		{
			if (func_466(Local_183.f_45))
			{
				Local_183.f_156 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_465(Local_183.f_45))
			{
				Local_183.f_156 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_463(Local_183.f_45))
			{
				Local_183.f_156 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else if (func_462(Local_183.f_45))
			{
				Local_183.f_156 = "DLC_H4_Piloted_Missile_Sounds";
			}
			else
			{
				Local_183.f_156 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_183.f_46[Local_183.f_45] == -1)
			{
				Local_183.f_46[Local_183.f_45] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_183.f_46[Local_183.f_45], "Flight_Loop", NETWORK::NET_TO_OBJ(Local_85[Local_183.f_45 /*3*/].f_2), Local_183.f_156, false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_46[Local_183.f_45], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_183.f_46[Local_183.f_45], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_183.f_46[Local_183.f_45] != -1)
		{
			AUDIO::STOP_SOUND(Local_183.f_46[Local_183.f_45]);
			AUDIO::RELEASE_SOUND_ID(Local_183.f_46[Local_183.f_45]);
			Local_183.f_46[Local_183.f_45] = -1;
		}
	}
}

int func_465(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_85[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_466(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (Local_85[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_467()
{
	return MISC::IS_BIT_SET(Global_1678289.f_7, 14);
}

void func_468()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	if (Local_183.f_45 == -1)
	{
		return;
	}
	iVar0 = Local_183.f_45;
	if (!func_19(iVar0, 1, 1))
	{
		return;
	}
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_183.f_117, Local_183.f_45))
	{
		iVar1 = func_469(Global_2426097[Local_183.f_45 /*443*/].f_314.f_9);
		if (!func_17(iVar1))
		{
			return;
		}
		sVar2 = "scr_ih_sub";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar2);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar2))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_206[iVar0]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar2);
				sVar3 = func_376(iVar0);
				iVar4 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, sVar3);
				Local_183.f_206[iVar0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ih_sub_missile_launch", iVar1, func_375(iVar0), 0f, 0f, 0f, iVar4, 5f, false, false, false);
			}
			else if (!func_25(&(Local_183.f_280[iVar0 /*2*/])))
			{
				func_23(&(Local_183.f_280[iVar0 /*2*/]), 0, 0);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_183.f_206[iVar0], "flame", 0.15f, false);
			}
			if (func_25(&(Local_183.f_280[iVar0 /*2*/])))
			{
				if (func_22(&(Local_183.f_280[iVar0 /*2*/]), 3000, 0))
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_206[iVar0]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_183.f_206[iVar0], false);
					}
					func_21(&(Local_183.f_280[iVar0 /*2*/]));
					MISC::CLEAR_BIT(&(Local_183.f_117), Local_183.f_45);
				}
				else if (func_22(&(Local_183.f_280[iVar0 /*2*/]), 2000, 0))
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_183.f_206[iVar0], "flame", 0f, false);
				}
			}
		}
	}
}

int func_469(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1694882[iParam0]))
		{
			return Global_1694882[iParam0];
		}
	}
	return -1;
}

void func_470()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				if (!func_481(6))
				{
					func_472(iVar0);
				}
				break;
			
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -1756910444:
						if (Global_1391942.f_822)
						{
							return;
						}
						func_471(iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_471(int iParam0)
{
	struct<3> Var0;
	
	if (!func_481(6) && !func_467())
	{
		return;
	}
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (Var0.f_1 != func_12())
		{
			Local_183.f_82[Var0.f_1] = Var0.f_2;
			MISC::SET_BIT(&(Local_183.f_117), Var0.f_1);
		}
	}
}

void func_472(int iParam0)
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0) && NETWORK::NET_TO_ENT(Local_183.f_158) == Var0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_183.f_26 = 2;
						}
					}
				}
			}
		}
	}
}

void func_473()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_183.f_158), false))
		{
			Local_183.f_149 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_183.f_158), true) };
			Local_183.f_124 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_183.f_158));
			if (!func_25(&(Local_183.f_260)))
			{
				func_23(&(Local_183.f_260), 0, 0);
			}
			else if (func_22(&(Local_183.f_260), 1000, 0))
			{
				if (!func_374(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_416, Local_183.f_149, 0))
				{
					Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_416 = { Local_183.f_149 };
				}
				if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_419 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_183.f_158)))
				{
					Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_419 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_183.f_158));
				}
				func_21(&(Local_183.f_260));
			}
		}
	}
	if (func_17(Local_183.f_162))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_183.f_162))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_183.f_162, false, false);
		}
	}
	if (func_17(Local_183.f_160))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_183.f_160))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_183.f_160, false, false);
		}
	}
}

void func_474()
{
	if (func_481(4))
	{
		if ((((func_140() || func_24()) || func_38()) || (func_30() && !func_31())) || func_16())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_299(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, false);
		if (func_16())
		{
			func_477();
		}
		if (!func_35())
		{
			func_475();
			PAD::ENABLE_CONTROL_ACTION(0, 19, true);
			PAD::ENABLE_CONTROL_ACTION(0, 166, true);
			PAD::ENABLE_CONTROL_ACTION(0, 167, true);
			PAD::ENABLE_CONTROL_ACTION(0, 168, true);
			PAD::ENABLE_CONTROL_ACTION(0, 169, true);
			PAD::ENABLE_CONTROL_ACTION(2, 218, true);
			PAD::ENABLE_CONTROL_ACTION(2, 219, true);
			PAD::ENABLE_CONTROL_ACTION(2, 220, true);
			PAD::ENABLE_CONTROL_ACTION(2, 221, true);
			PAD::ENABLE_CONTROL_ACTION(2, 205, true);
			PAD::ENABLE_CONTROL_ACTION(2, 206, true);
			PAD::ENABLE_CONTROL_ACTION(2, 207, true);
			PAD::ENABLE_CONTROL_ACTION(2, 208, true);
			PAD::ENABLE_CONTROL_ACTION(2, 209, true);
			PAD::ENABLE_CONTROL_ACTION(2, 210, true);
			PAD::ENABLE_CONTROL_ACTION(2, 202, true);
			PAD::ENABLE_CONTROL_ACTION(2, 51, true);
			PAD::ENABLE_CONTROL_ACTION(2, 190, true);
			PAD::ENABLE_CONTROL_ACTION(2, 189, true);
			PAD::ENABLE_CONTROL_ACTION(2, 188, true);
			PAD::ENABLE_CONTROL_ACTION(2, 187, true);
			PAD::ENABLE_CONTROL_ACTION(2, 201, true);
			PAD::ENABLE_CONTROL_ACTION(2, 199, true);
			PAD::ENABLE_CONTROL_ACTION(2, 200, true);
			if (func_16())
			{
				PAD::ENABLE_CONTROL_ACTION(2, 20, true);
			}
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				PAD::ENABLE_CONTROL_ACTION(0, 238, true);
				PAD::ENABLE_CONTROL_ACTION(0, 237, true);
				PAD::ENABLE_CONTROL_ACTION(2, 235, true);
				PAD::ENABLE_CONTROL_ACTION(2, 234, true);
				PAD::ENABLE_CONTROL_ACTION(2, 1, true);
				PAD::ENABLE_CONTROL_ACTION(2, 174, true);
				PAD::ENABLE_CONTROL_ACTION(2, 175, true);
				PAD::ENABLE_CONTROL_ACTION(0, 174, true);
				PAD::ENABLE_CONTROL_ACTION(0, 175, true);
				PAD::ENABLE_CONTROL_ACTION(0, 245, true);
				PAD::ENABLE_CONTROL_ACTION(0, 246, true);
				PAD::ENABLE_CONTROL_ACTION(0, 247, true);
				PAD::ENABLE_CONTROL_ACTION(0, 248, true);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::ENABLE_CONTROL_ACTION(0, 201, true);
				PAD::ENABLE_CONTROL_ACTION(0, 202, true);
				PAD::ENABLE_CONTROL_ACTION(0, 188, true);
				PAD::ENABLE_CONTROL_ACTION(0, 187, true);
				PAD::ENABLE_CONTROL_ACTION(0, 189, true);
				PAD::ENABLE_CONTROL_ACTION(2, 195, true);
				PAD::ENABLE_CONTROL_ACTION(2, 196, true);
				PAD::ENABLE_CONTROL_ACTION(2, 198, true);
				PAD::ENABLE_CONTROL_ACTION(2, 197, true);
				PAD::ENABLE_CONTROL_ACTION(2, 217, true);
			}
		}
	}
}

void func_475()
{
	func_476();
}

void func_476()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 361)
	{
		PAD::DISABLE_CONTROL_ACTION(0, iVar0, true);
		iVar0++;
	}
}

void func_477()
{
	Global_22411.f_6 = 1;
}

void func_478()
{
	if (MISC::IS_BIT_SET(Local_183.f_5, 28))
	{
		if (!func_25(&(Local_183.f_262)))
		{
			func_23(&(Local_183.f_262), 0, 0);
		}
		else if (func_22(&(Local_183.f_262), 5000, 0))
		{
			MISC::CLEAR_BIT(&(Local_183.f_5), 28);
			func_21(&(Local_183.f_262));
		}
	}
}

void func_479()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Local_183.f_5, 27))
	{
		if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 != func_12())
		{
			iVar0 = Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9;
		}
		else if (Global_1590527 != func_12())
		{
			iVar0 = Global_1590527;
		}
		else if (func_280(PLAYER::PLAYER_ID(), 0))
		{
			if (func_168() != func_12())
			{
				iVar0 = func_168();
			}
		}
		if (iVar0 != func_12())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_180(iVar0, 0, 1, 0);
					MISC::CLEAR_BIT(&(Local_183.f_5), 27);
				}
			}
		}
	}
}

void func_480()
{
	struct<3> Var0;
	
	if (func_140())
	{
		if (func_481(1))
		{
			if (func_17(func_346()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(func_346(), true) };
				PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Var0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_183.f_149, 60f, 30);
			}
		}
	}
	if (func_481(1) || func_481(4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
		{
			if (CAM::DOES_CAM_EXIST(Local_183.f_168) && CAM::IS_CAM_RENDERING(Local_183.f_168))
			{
				if (func_481(4))
				{
					if (!func_258(Local_183.f_149))
					{
						PED::SET_POP_CONTROL_SPHERE_THIS_FRAME(Local_183.f_149, 60f, 200f);
						INTERIOR::_0x483ACA1176CA93F1();
						STREAMING::SET_FOCUS_POS_AND_VEL(Local_183.f_149, ENTITY::GET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_183.f_158)));
						if ((MISC::GET_FRAME_COUNT() % 120) == 0)
						{
							PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_183.f_149, 60f, 30);
						}
					}
				}
			}
		}
	}
}

bool func_481(int iParam0)
{
	return Local_183.f_240 == iParam0;
}

int func_482()
{
	if (func_487())
	{
		return 1;
	}
	if (!func_307())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_12())
	{
		if (func_266(PLAYER::PLAYER_ID()) && !func_265())
		{
			return 1;
		}
	}
	if (func_201(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_10(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_486())
	{
		if (func_485())
		{
			return 1;
		}
		if (func_13(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_40())
		{
			return 1;
		}
		if (!func_484() && !func_483())
		{
			if (func_22(&(Local_183.f_278), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_21(&(Local_183.f_278));
		}
	}
	return 0;
}

int func_483()
{
	if (Global_1689733.f_22 != func_12())
	{
		if (Global_2426097[Global_1689733.f_22 /*443*/].f_314.f_9 != func_12())
		{
			if (func_17(Global_1694882[Global_2426097[Global_1689733.f_22 /*443*/].f_314.f_9]))
			{
				if (func_19(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (SYSTEM::VDIST2(func_6(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(Global_1694882[Global_2426097[Global_1689733.f_22 /*443*/].f_314.f_9], true)) < 490000f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_484()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_85[iVar0 /*3*/], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_485()
{
	return MISC::IS_BIT_SET(Global_1689733, 22);
}

bool func_486()
{
	return MISC::IS_BIT_SET(Local_183.f_6, 3);
}

bool func_487()
{
	return MISC::IS_BIT_SET(Global_1689733, 0);
}

int func_488()
{
	var uVar0;
	
	func_496(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_495())
	{
		return 1;
	}
	if (Global_2464721)
	{
		return 1;
	}
	if (func_494())
	{
		return 1;
	}
	if (func_493(159))
	{
		if (!func_492())
		{
			return 1;
		}
	}
	if (func_493(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_489() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_489()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_489()
{
	switch (func_491())
	{
		case 0:
			return func_490();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_490()
{
	switch (Global_2464823)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_491()
{
	return Global_30968;
}

bool func_492()
{
	return Global_2452015.f_696;
}

int func_493(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_494()
{
	return Global_2462478;
}

bool func_495()
{
	return Global_2452015.f_691;
}

void func_496(var uParam0)
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
				case 1035596089:
					func_497(iVar0);
					break;
				
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_497(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_19(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_498(iVar4, &bVar5))
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

int func_498(int iParam0, var uParam1)
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

void func_499()
{
	SYSTEM::WAIT(0);
}

void func_500(bool bParam0)
{
	if (!func_486())
	{
		func_506(bParam0);
	}
	else
	{
		func_501();
	}
}

void func_501()
{
	Global_1689733.f_22 = func_12();
	func_21(&(Local_183.f_278));
	func_505(0);
	func_504(0);
	func_503(0);
	func_502();
}

void func_502()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_503(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733, 21))
		{
			MISC::SET_BIT(&Global_1689733, 21);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733, 21))
	{
		MISC::CLEAR_BIT(&Global_1689733, 21);
	}
}

void func_504(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733, 22))
		{
			MISC::SET_BIT(&Global_1689733, 22);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733, 22))
	{
		MISC::CLEAR_BIT(&Global_1689733, 22);
	}
}

void func_505(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_278, 31))
		{
			MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_278), 31);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_278, 31))
	{
		MISC::CLEAR_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_278), 31);
	}
}

void func_506(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<8> Var14;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_158))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_183.f_158, true);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_183.f_158))
		{
			if (!MISC::IS_BIT_SET(Local_183.f_6, 2))
			{
				if (func_83())
				{
					if (func_17(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), func_338(), func_337(), func_336(), true, false, 1f);
					}
					else
					{
						FIRE::ADD_EXPLOSION(func_338(), func_337(), func_336(), true, false, 1f, false);
					}
					PAD::SET_PAD_SHAKE(0, 300, 200);
					MISC::SET_BIT(&(Local_183.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			iVar0 = NETWORK::NET_TO_OBJ(Local_183.f_158);
			NETWORK::NETWORK_FADE_OUT_ENTITY(iVar0, false, true);
			OBJECT::DELETE_OBJECT(&iVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_183.f_158);
			return;
		}
	}
	if (func_30() && !func_31())
	{
		Var1 = -1;
		Var1.f_6 = 1073741824;
		Var1.f_7 = -1073741824;
		Var1.f_3 = 0;
		Var1.f_4 = 0;
		func_528(&Var1, 11);
	}
	if (func_414("DRONE_TRIG"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (func_17(Local_183.f_160))
	{
		uVar10 = Local_183.f_160;
		PED::DELETE_PED(&uVar10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_183.f_161))
	{
		OBJECT::DELETE_OBJECT(&(Local_183.f_161));
	}
	if (HUD::DOES_BLIP_EXIST(Local_183.f_170))
	{
		HUD::REMOVE_BLIP(&(Local_183.f_170));
	}
	if (HUD::DOES_BLIP_EXIST(Local_183.f_171))
	{
		HUD::REMOVE_BLIP(&(Local_183.f_171));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_183.f_162))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_183.f_162));
	}
	HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
	HUD::UNLOCK_MINIMAP_ANGLE();
	HUD::UNLOCK_MINIMAP_POSITION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	if (func_240())
	{
		func_239(0);
	}
	func_526();
	func_327(1, -1);
	func_525();
	if (func_31())
	{
		func_335(0);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_183.f_159))
	{
		iVar11 = NETWORK::NET_TO_OBJ(Local_183.f_159);
		OBJECT::DELETE_OBJECT(&iVar11);
	}
	if (!bParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_183.f_157))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_183.f_157);
		}
		func_524(0);
	}
	func_249(0);
	if (func_523() && (!func_266(PLAYER::PLAYER_ID()) || func_265()))
	{
		func_299(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	}
	Local_183.f_120 = 0f;
	Local_183.f_121 = 0f;
	Local_183.f_12 = 0;
	Local_183.f_14 = 0;
	Local_183.f_10 = 0;
	Local_183.f_16 = 0;
	func_21(&(Local_183.f_244));
	func_21(&(Local_183.f_246));
	if (!Local_183.f_155)
	{
		func_21(&(Local_183.f_248));
	}
	func_21(&(Local_183.f_252));
	func_21(&(Local_183.f_250));
	func_21(&(Local_183.f_254));
	func_21(&(Local_183.f_258));
	func_21(&(Local_183.f_264));
	func_21(&(Local_183.f_262));
	func_21(&(Local_183.f_260));
	func_21(&(Local_183.f_266));
	func_21(&(Local_183.f_268));
	func_21(&(Local_183.f_270));
	func_21(&(Local_183.f_274));
	func_21(&(Local_183.f_276));
	func_21(&(Local_183.f_256));
	if (PLAYER::PLAYER_ID() != func_12())
	{
		func_21(&(Local_183.f_280[PLAYER::PLAYER_ID() /*2*/]));
	}
	Local_183.f_28 = 0;
	Local_183.f_5 = 0;
	Local_183.f_6 = 0;
	Global_1689733.f_4 = -1;
	func_522(-1f);
	func_447(0f);
	func_246(0);
	func_450(0);
	func_521(0);
	func_448(0);
	func_223(0);
	func_520(0);
	func_178(0);
	func_519(0);
	func_518(0);
	func_517(0);
	func_72(1);
	func_293(0);
	func_291(0);
	func_297(0);
	func_453(0);
	func_373(0f, 0f, 0f, 0f, 0f, 0f);
	func_516();
	Global_1689733.f_24 = -1;
	MISC::CLEAR_BIT(&Global_2515799, 0);
	MISC::CLEAR_BIT(&Global_1696339, 0);
	func_384(0);
	if (!func_515(0))
	{
		func_289();
	}
	if (func_75())
	{
		func_108("SET_WARNING_IS_VISIBLE", 0);
		if (func_140() || func_16())
		{
			if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9 != func_12() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9))
			{
				iVar12 = Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_9;
			}
			else if ((func_140() && Global_1590527 != func_12()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1590527))
			{
				iVar12 = Global_1590527;
			}
			else if ((func_16() && Global_1590528 != func_12()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1590528))
			{
				iVar12 = Global_1590528;
			}
			else if (func_280(PLAYER::PLAYER_ID(), 0))
			{
				if (func_168() != func_12() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_168()))
				{
					iVar12 = func_168();
				}
			}
			if (iVar12 != func_12())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_140())
					{
						func_180(iVar12, 0, 1, 0);
					}
					else if (func_16())
					{
						func_180(iVar12, 0, 8, Global_1319180);
					}
					MISC::SET_BIT(&(Local_183.f_5), 28);
				}
				else
				{
					MISC::SET_BIT(&(Local_183.f_5), 27);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_183.f_5), 27);
			}
		}
		else if (func_30() || func_162())
		{
			func_21(&Global_1689680);
			func_514(300000);
			func_513(1);
			MISC::SET_BIT(&(Local_183.f_5), 28);
		}
		func_391(0);
		func_390(0);
		MISC::CLEAR_BIT(&(Local_85[PLAYER::PLAYER_ID() /*3*/]), 0);
		iVar13 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_183.f_172));
		if (func_30() || func_162())
		{
			Var14.f_7 = Global_786547;
			Var14.f_1 = Global_786547.f_1;
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Var14 = Global_4456448.f_82708;
			}
			else
			{
				Var14 = func_511(PLAYER::PLAYER_ID());
			}
			Var14.f_6 = 1;
			Var14.f_4 = Local_183.f_27;
			Var14.f_5 = Local_183.f_29;
			Var14.f_3 = iVar13;
			Var14.f_2 = Local_183.f_26;
			STATS::_0xDFBD93BF2943E29B(&Var14);
		}
		else
		{
			STATS::_PLAYSTATS_DRONE_USAGE(iVar13, Local_183.f_26, Local_183.f_27);
		}
		if (func_16())
		{
			func_509(2, func_510());
		}
	}
	func_508();
	func_392(0);
	func_264(0);
	func_187(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_183.f_169));
	if (func_182(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_182(1));
	}
	if (func_182(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_182(0));
	}
	func_385(0);
	func_327(1, -1);
	Local_183.f_26 = 0;
	Local_183.f_27 = 0;
	Local_183.f_29 = 0;
	EVENT::REMOVE_SHOCKING_EVENT(Local_183.f_28);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_173[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_183.f_173[PLAYER::PLAYER_ID()], false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_183.f_206[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_183.f_206[PLAYER::PLAYER_ID()], false);
	}
	if (!bParam0)
	{
		if (!func_166(PLAYER::PLAYER_ID()))
		{
			func_507(0f, 0f, 0f, 0f);
		}
		Global_1689733.f_2 = 0;
		func_502();
	}
	else
	{
		func_446(0, 1);
	}
}

void func_507(struct<3> Param0, float fParam3)
{
	if (!func_374(Global_1689733.f_10, Param0, 0))
	{
		Global_1689733.f_10 = { Param0 };
		Global_1689733.f_7 = fParam3;
	}
}

void func_508()
{
	int iVar0;
	
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_41))
	{
		AUDIO::STOP_SOUND(Local_183.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_41);
		Local_183.f_41 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_30))
	{
		AUDIO::STOP_SOUND(Local_183.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_30);
		Local_183.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_31))
	{
		AUDIO::STOP_SOUND(Local_183.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_31);
		Local_183.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_32))
	{
		AUDIO::STOP_SOUND(Local_183.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_32);
		Local_183.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_33))
	{
		AUDIO::STOP_SOUND(Local_183.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_33);
		Local_183.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_34))
	{
		AUDIO::STOP_SOUND(Local_183.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_34);
		Local_183.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_40))
	{
		AUDIO::STOP_SOUND(Local_183.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_40);
		Local_183.f_40 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_39))
	{
		AUDIO::STOP_SOUND(Local_183.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_39);
		Local_183.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_38))
	{
		AUDIO::STOP_SOUND(Local_183.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_38);
		Local_183.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_37))
	{
		AUDIO::STOP_SOUND(Local_183.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_37);
		Local_183.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_36))
	{
		AUDIO::STOP_SOUND(Local_183.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_36);
		Local_183.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_35))
	{
		AUDIO::STOP_SOUND(Local_183.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_35);
		Local_183.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_42))
	{
		AUDIO::STOP_SOUND(Local_183.f_42);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_42);
		Local_183.f_42 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_43))
	{
		AUDIO::STOP_SOUND(Local_183.f_43);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_43);
		Local_183.f_43 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_81))
	{
		AUDIO::STOP_SOUND(Local_183.f_81);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_81);
		Local_183.f_81 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_183.f_115))
	{
		AUDIO::STOP_SOUND(Local_183.f_115);
		AUDIO::RELEASE_SOUND_ID(Local_183.f_115);
		Local_183.f_115 = -1;
	}
	if (func_486())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_183.f_46[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_183.f_46[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_183.f_46[iVar0]);
				Local_183.f_46[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_159();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_hei4_submarine_guided_missile_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_hei4_submarine_guided_missile_Scene");
	}
}

void func_509(int iParam0, int iParam1)
{
	if (Global_2540612.f_337 > 0 || Global_2540612.f_337.f_1 > 0)
	{
		STATS::_0xD4367D310F079DB0(iParam0, iParam1, Global_2540612.f_337, Global_2540612.f_337.f_1);
	}
	func_416();
}

bool func_510()
{
	return Global_1590528 == PLAYER::PLAYER_ID();
}

int func_511(int iParam0)
{
	if (func_160(iParam0) == 243)
	{
		return func_512(iParam0);
	}
	return -1;
}

int func_512(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

void func_513(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334, 20))
		{
			MISC::SET_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334), 20);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334, 20))
	{
		MISC::CLEAR_BIT(&(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_334), 20);
	}
}

void func_514(int iParam0)
{
	if (Global_1689733.f_5 != iParam0)
	{
		Global_1689733.f_5 = iParam0;
	}
}

bool func_515(int iParam0)
{
	return Local_183.f_241 == iParam0;
}

void func_516()
{
	if (func_174())
	{
		MISC::CLEAR_BIT(&Global_1689733, 7);
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		if (func_75())
		{
			if (!MISC::IS_BIT_SET(Global_1689733, 16))
			{
				MISC::SET_BIT(&Global_1689733, 16);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733, 16))
	{
		MISC::CLEAR_BIT(&Global_1689733, 16);
	}
}

void func_518(bool bParam0)
{
	if (bParam0)
	{
		if (!func_487())
		{
			MISC::SET_BIT(&Global_1689733, 6);
		}
	}
	else if (func_487())
	{
		MISC::CLEAR_BIT(&Global_1689733, 6);
	}
}

void func_519(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733, 3))
		{
			MISC::SET_BIT(&Global_1689733, 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733, 3))
	{
		MISC::CLEAR_BIT(&Global_1689733, 3);
	}
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		if (!func_396())
		{
			MISC::SET_BIT(&Global_1689733, 10);
		}
	}
	else if (func_396())
	{
		MISC::CLEAR_BIT(&Global_1689733, 10);
	}
}

void func_521(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_487())
			{
				MISC::SET_BIT(&Global_1689733, 0);
			}
		}
	}
	else if (func_487())
	{
		MISC::CLEAR_BIT(&Global_1689733, 0);
	}
}

void func_522(float fParam0)
{
	if (Global_1689733.f_9 != fParam0)
	{
		Global_1689733.f_9 = fParam0;
	}
}

int func_523()
{
	if (!func_307())
	{
		return 0;
	}
	if (func_11(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_75())
	{
		return 0;
	}
	if (func_83())
	{
		return 0;
	}
	return 1;
}

void func_524(bool bParam0)
{
	if (bParam0)
	{
		if (!func_31())
		{
			MISC::SET_BIT(&Global_1689733, 24);
		}
	}
	else if (func_31())
	{
		MISC::CLEAR_BIT(&Global_1689733, 24);
	}
}

void func_525()
{
	if (CAM::DOES_CAM_EXIST(Local_183.f_168))
	{
		CAM::DESTROY_CAM(Local_183.f_168, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (!func_37() || MISC::IS_BIT_SET(Local_183.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_526()
{
	if (CAM::DOES_CAM_EXIST(Local_183.f_168))
	{
		if (func_527(PLAYER::PLAYER_ID()))
		{
			Global_1678289.f_3342 = 1;
		}
	}
}

int func_527(int iParam0)
{
	if (iParam0 != func_12())
	{
		if (func_19(iParam0, 1, 1))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_19(iParam0, 1, 0))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

void func_528(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0 = -1511435638;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_423, 1))
		{
			MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_423), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_25(&(uParam0->f_1)))
	{
		func_23(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_25(&(uParam0->f_1)) && !func_22(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_21(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_21(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_8(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

void func_529(struct<12> Param0)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, Param0);
	func_538(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_182, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_85, 97);
	if (!func_537())
	{
		func_500(0);
	}
	if (Param0.f_11)
	{
		MISC::SET_BIT(&(Local_183.f_6), 3);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_486())
		{
			Local_183.f_134 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(func_346()) && !ENTITY::IS_ENTITY_DEAD(func_346(), false))
					{
						Local_183.f_143 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_346(), true), ENTITY::GET_ENTITY_HEADING(func_346()), 0f, 1.6f, 2.9f) };
						Local_183.f_137 = { Local_183.f_143 };
					}
					func_460(1);
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 1;
					break;
				
				case 2:
					func_536(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 2;
					break;
				
				case 3:
					func_535(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 3;
					break;
				
				case 4:
					func_454(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 4;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 4;
					break;
				
				case 5:
					func_534(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 5;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 5;
					break;
				
				case 6:
					func_533(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 6;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 6;
					break;
				
				case 8:
					func_532(1);
					Local_183.f_143 = { Param0.f_5 };
					Local_85[PLAYER::PLAYER_ID() /*3*/].f_1 = 8;
					Global_1649358[PLAYER::PLAYER_ID() /*93*/].f_92 = 8;
					break;
				
				default:
					func_531(1);
					Local_183.f_143 = { Param0.f_5 };
					break;
			}
			Local_183.f_140 = { Param0.f_8 };
			if (func_258(func_405()))
			{
				func_373(Local_183.f_143, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_500(0);
	}
	if (!func_486())
	{
		func_446(1, 1);
	}
	else
	{
		func_530();
	}
}

void func_530()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_183.f_46[iVar0] = -1;
		iVar0++;
	}
	func_384(6);
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 0))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 0))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 0);
	}
}

void func_532(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 8))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 8);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 8))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 8);
	}
}

void func_533(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 6))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 6);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 6))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 6);
	}
}

void func_534(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 5))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 5);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 5))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 5);
	}
}

void func_535(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 3))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 3);
	}
}

void func_536(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1689733.f_2, 2))
		{
			Global_1689733.f_2 = 0;
			MISC::SET_BIT(&(Global_1689733.f_2), 2);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1689733.f_2, 2))
	{
		MISC::CLEAR_BIT(&(Global_1689733.f_2), 2);
	}
}

int func_537()
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
		if (func_495())
		{
			return 0;
		}
		if (func_493(157))
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

int func_538(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_502();
			}
			else
			{
				return 0;
			}
		}
		if (!func_539())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_502();
					}
					else
					{
						return 0;
					}
				}
				if (func_495())
				{
					if (!bParam2)
					{
						func_502();
					}
					else
					{
						return 0;
					}
				}
				if (func_493(157))
				{
					if (!bParam2)
					{
						func_502();
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
					func_502();
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
				func_502();
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
			func_502();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_539()
{
	return Global_1312872;
}

