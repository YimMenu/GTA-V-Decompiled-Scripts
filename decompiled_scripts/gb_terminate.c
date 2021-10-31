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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	struct<11> Local_86 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_97[32];
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_709(ScriptParam_0))
		{
			func_653();
		}
	}
	while (true)
	{
		func_652();
		if (func_644())
		{
			func_653();
		}
		switch (func_643(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_642() == 1)
				{
					if (func_641())
					{
						func_640(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_642() == 1)
				{
					if (!func_638())
					{
						func_103();
					}
					if (func_53(1))
					{
						func_640(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (func_642() == 3)
				{
					func_640(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_653();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_52())
			{
				func_51(3);
			}
			switch (func_642())
			{
				case 0:
					if (func_43())
					{
						func_51(1);
					}
					break;
				
				case 1:
					if (func_42() == 3)
					{
						func_51(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_653();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_86.f_8)
	{
		case 0:
			if (func_41())
			{
				func_40(1);
			}
			func_38();
			break;
		
		case 1:
			func_38();
			func_2();
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Local_86.f_1, 5))
			{
				func_40(3);
			}
			func_38();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_37()))
	{
		func_12(1);
		func_40(2);
		MISC::SET_BIT(&(Local_86.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_40(2);
		MISC::SET_BIT(&(Local_86.f_1), 3);
	}
	if (MISC::IS_BIT_SET(Local_86.f_1, 0))
	{
		if (func_3(&(Local_86.f_4), func_5(), 0))
		{
			MISC::SET_BIT(&(Local_86.f_1), 4);
		}
	}
	if (MISC::IS_BIT_SET(Local_86.f_1, 4))
	{
		func_12(2);
		func_40(2);
	}
	if (MISC::IS_BIT_SET(Local_86.f_1, 1) || MISC::IS_BIT_SET(Local_86.f_1, 7))
	{
		func_12(0);
		func_40(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

int func_5()
{
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_10() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_10())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return -1;
}

int func_11()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11;
}

void func_12(int iParam0)
{
	Local_86.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_34(iParam0) && ((func_32(iParam0) == 142 || func_32(iParam0) == 164) || func_32(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_31(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_30(iParam0))
	{
		return 0;
	}
	if (func_28(iParam0, 1) && func_27(iParam0) == func_11())
	{
		return 0;
	}
	if (func_23(iParam0))
	{
		return 0;
	}
	if (func_22(iParam0, 7))
	{
		return 0;
	}
	if (func_17(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_16() != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590908[iVar0 /*874*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

int func_16()
{
	return Global_31345;
}

int func_17(int iParam0)
{
	if (func_19(iParam0, 0))
	{
		return 1;
	}
	if (func_18())
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

bool func_18()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_19(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_20(-1, 0) == 8;
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

int func_20(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_21()
{
	return Global_1312763;
}

bool func_22(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_23(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_26();
	}
	return MISC::IS_BIT_SET(Global_1379108.f_241.f_136[func_25(10) /*33*/][iParam0], func_24(10));
}

int func_24(int iParam0)
{
	return (iParam0 % 32);
}

int func_25(int iParam0)
{
	return (iParam0 / 32);
}

bool func_26()
{
	return Global_1312436;
}

int func_27(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_10();
}

bool func_28(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_29(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_10();
}

int func_29(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_10())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_30(int iParam0)
{
	return Global_1590908[iParam0 /*874*/].f_192 != 0;
}

int func_31(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_29(iParam0))
	{
		if (func_35(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_36(iParam0, 9);
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_37()
{
	return Local_86.f_2;
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_42() < 2)
		{
			if (MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 1))
			{
				func_39(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				MISC::SET_BIT(&(Local_86.f_1), 1);
			}
			if (MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 4))
			{
				func_39(func_11());
				MISC::SET_BIT(&(Local_86.f_1), 7);
			}
			if (MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_86.f_1), 0);
			}
			if (MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 2))
			{
				MISC::SET_BIT(&(Local_86.f_1), 4);
			}
		}
		else if (func_42() == 2)
		{
			if (MISC::IS_BIT_SET(Local_97[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_42() == 2)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			MISC::SET_BIT(&(Local_86.f_1), 5);
		}
		else if (func_3(&(Local_86.f_6), 10000, 0))
		{
			MISC::SET_BIT(&(Local_86.f_1), 5);
		}
	}
}

void func_39(int iParam0)
{
	Local_86.f_3 = iParam0;
}

void func_40(int iParam0)
{
	Local_86.f_8 = iParam0;
}

int func_41()
{
	return 1;
}

int func_42()
{
	return Local_86.f_8;
}

int func_43()
{
	if (func_44())
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	if (MISC::IS_BIT_SET(Local_86.f_1, 6))
	{
		return 1;
	}
	func_50(func_10());
	if (Global_2544210.f_5191.f_4 != func_10())
	{
	}
	else
	{
		func_51(3);
	}
	if (func_9(Global_2544210.f_5191.f_4, 0, 1))
	{
		if (!func_48(Global_2544210.f_5191.f_4, PLAYER::PLAYER_ID(), 1))
		{
			func_50(Global_2544210.f_5191.f_4);
		}
	}
	if (func_37() != func_10())
	{
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			if (func_47(func_37(), 13))
			{
				Local_86.f_10 = 1;
			}
		}
		func_45(func_46(func_37()), 1);
		Global_2544210.f_5191.f_4 = func_10();
		MISC::SET_BIT(&(Local_86.f_1), 6);
		return 1;
	}
	else if (func_37() == func_10())
	{
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 1472357458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iParam0);
	}
}

int func_46(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

bool func_47(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

int func_48(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_49(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_10())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_49(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_10())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

void func_50(int iParam0)
{
	Local_86.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_51(int iParam0)
{
	Local_86 = iParam0;
}

int func_52()
{
	if (Global_2544210.f_5191.f_41)
	{
		Global_2544210.f_5191.f_41 = 0;
		return 1;
	}
	return 0;
}

int func_53(bool bParam0)
{
	if (!func_102(PLAYER::PLAYER_ID(), 3) && func_64(1))
	{
		return 1;
	}
	if (Global_2544210.f_5191.f_42)
	{
		Global_2544210.f_5191.f_42 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_63() == func_10() || !func_9(func_63(), 0, 1))
		{
			return 1;
		}
	}
	if (func_102(PLAYER::PLAYER_ID(), 1) && !func_61(PLAYER::PLAYER_ID()))
	{
		if (func_54())
		{
			return 1;
		}
	}
	return 0;
}

int func_54()
{
	if (func_60(PLAYER::PLAYER_ID()) && func_57())
	{
		return 1;
	}
	if (func_55())
	{
		return 1;
	}
	return 0;
}

bool func_55()
{
	return func_56() == 1;
}

int func_56()
{
	return Global_1710155;
}

int func_57()
{
	switch (func_58(func_59(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_58(int iParam0)
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
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

int func_59(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_60(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_61(int iParam0)
{
	if (func_62(iParam0) != func_10())
	{
		return func_62(iParam0) == func_27(iParam0);
	}
	return 0;
}

int func_62(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_63()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35;
}

int func_64(bool bParam0)
{
	bool bVar0;
	
	if (!func_101(1) && func_63() != PLAYER::PLAYER_ID())
	{
		bVar0 = false;
		if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 4 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 8) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_100(func_32(PLAYER::PLAYER_ID())) == 0 || func_100(func_32(PLAYER::PLAYER_ID())) == 3)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_99(31);
				if (func_98(func_32(PLAYER::PLAYER_ID())))
				{
					func_99(81);
				}
				if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 != func_10() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57))
				{
					Global_1627034 = func_66(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_65(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57))
					{
						func_99(88);
					}
				}
				else
				{
					Global_1627034 = 1;
				}
				Global_1627018 = { Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_105 };
			}
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_66(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_17(iParam0) && !bParam4)
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
	if (((func_17(PLAYER::PLAYER_ID()) || (func_97() && func_96())) && !MISC::IS_BIT_SET(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_95();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_93(iParam1, iParam0, 0);
							}
							else
							{
								return func_79(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_79(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_93(iParam1, iParam0, 0);
				}
				else
				{
					return func_67(0, -1, 0);
				}
			}
			else
			{
				return func_67(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_93(iParam1, iParam0, 0);
		}
		else
		{
			return func_79(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_79(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_67(bool bParam0, int iParam1, bool bParam2)
{
	return func_68(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_68(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_78() || (func_77() && func_75())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_74(iParam2, iVar0);
		}
		else
		{
			return func_74(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_73(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_72(1);
				}
				else
				{
					return func_72(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_69(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_69(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_72(1);
	}
	return func_72(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_71(iParam0, iParam1, iParam3);
	if (func_70(Global_4456448.f_85535, 1))
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

int func_70(int iParam0, bool bParam1)
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

int func_71(int iParam0, int iParam1, int iParam2)
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
			if (!func_73(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_72(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_73(int iParam0, int iParam1, int iParam2)
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

int func_74(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_71(iParam1, iParam0, 4);
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

bool func_75()
{
	if (func_76())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_138135, 4);
}

bool func_76()
{
	return MISC::IS_BIT_SET(Global_4456448.f_127830, 12);
}

bool func_77()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_138135, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_138135, 0) || Global_1660806) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_78()
{
	if (func_76() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_79(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_85())
			{
				iVar3 = func_84(iParam0);
				if (!iVar3 == -1)
				{
					return func_82(iVar3);
				}
			}
			if ((func_81(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_73(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_72(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_80(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_72(1);
			}
			else
			{
				return func_68(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_84(iParam0);
	if (!iVar4 == -1)
	{
		return func_82(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_80(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_81(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_82(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_83(iParam0);
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

var func_83(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_84(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_28(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_27(iParam0)];
		}
	}
	return -1;
}

int func_85()
{
	if (((((func_92() || func_91()) || func_90()) || func_89()) || func_88()) || func_86())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	return func_87(Global_4456448.f_85535);
}

int func_87(int iParam0)
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

var func_88()
{
	return Global_2453009.f_24;
}

var func_89()
{
	return Global_2453009.f_21;
}

bool func_90()
{
	return Global_2453009.f_19;
}

var func_91()
{
	return Global_2453009.f_18;
}

var func_92()
{
	return Global_2453009.f_17;
}

int func_93(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_85())
	{
		iVar2 = func_84(iParam1);
		if (!iVar2 == -1)
		{
			return func_82(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
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
			iVar0 = func_68(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_94(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_73(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_80(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_94(int iParam0)
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

var func_95()
{
	return Global_2359302.f_2;
}

bool func_96()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_97()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 14);
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148 && func_8(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_101(bool bParam0)
{
	return func_28(PLAYER::PLAYER_ID(), bParam0);
}

int func_102(int iParam0, int iParam1)
{
	if (func_33(iParam0, 0))
	{
		return func_100(Global_1630816[iParam0 /*597*/].f_11.f_33) == iParam1;
	}
	return 0;
}

void func_103()
{
	switch (func_637())
	{
		case 0:
			func_622(151, 1, -1, 0);
			func_621(1);
			if (func_42() > 0)
			{
				func_620(1);
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_84, 2))
			{
				func_617();
			}
			if (Global_1689697 == func_10())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
				{
					Global_1689697 = func_37();
				}
			}
			func_611();
			func_601();
			func_581();
			func_579();
			func_535();
			func_409(&(Global_1368721.f_534), &Global_1368721, 28, &(Global_1368721.f_1), &(Global_1368721.f_117), -1, 0, 0);
			if (func_42() > 1)
			{
				func_620(2);
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
			{
				func_407(0, func_10());
				func_312();
				func_104();
			}
			if (func_42() > 2)
			{
				func_620(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_104()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
	{
		if ((MISC::IS_BIT_SET(Local_86.f_1, 2) || MISC::IS_BIT_SET(Local_86.f_1, 4)) || MISC::IS_BIT_SET(Local_86.f_1, 4))
		{
			MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_311())
		{
			MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_305())
		{
			MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (MISC::IS_BIT_SET(Local_86.f_1, 7))
		{
			func_105(151, 1, &Var0, 0);
		}
		else
		{
			func_105(151, MISC::IS_BIT_SET(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
		}
		MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
	}
}

void func_105(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_303(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_302(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_301(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_298(iParam0))
	{
		if (bParam1)
		{
			if (func_297(PLAYER::PLAYER_ID()) > 0)
			{
				func_296();
			}
			else
			{
				func_295();
			}
		}
		else
		{
			func_294();
		}
	}
	func_278(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_276(iParam0, uParam2, &iVar0, &iVar5);
	func_250(iParam0, uParam2, &iVar0, &iVar5);
	func_247(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_230(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2544210.f_5191.f_385 = iVar4;
	}
	else
	{
		Global_2544210.f_5191.f_385 = iVar5;
	}
	iVar8 = func_63();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_28(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_48(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_216(&iVar0, 1);
			}
		}
	}
	func_210(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1681722.f_10 = iVar1;
		func_209();
		func_162(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1681722.f_9 = iVar0;
		func_139(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_138(iParam0, iVar0);
		if (func_137(iParam0))
		{
			if (func_136(iParam0) > -1)
			{
				func_135(func_136(iParam0), iVar0);
			}
		}
		Global_2465707 = iVar0;
		func_134(&Global_2463963, 0, 0);
	}
	if (func_35(PLAYER::PLAYER_ID()) || func_133(PLAYER::PLAYER_ID()))
	{
		func_120(iParam0);
	}
	if (func_98(iParam0))
	{
		Global_1681740.f_13 = iVar0;
		Global_1681740.f_14 = iVar1;
	}
	if (func_119(iParam0))
	{
		Global_1681794.f_13 = iVar0;
		Global_1681794.f_14 = iVar1;
	}
	if (func_118(iParam0))
	{
		Global_1681857.f_12 = iVar0;
		Global_1681857.f_13 = iVar1;
	}
	if (func_117(iParam0))
	{
		Global_1681901.f_12 = iVar0;
		Global_1681901.f_13 = iVar1;
	}
	if (func_116(iParam0))
	{
		Global_1681955.f_12 = iVar0;
		Global_1681955.f_13 = iVar1;
	}
	if (func_115(iParam0))
	{
		if (func_114(iParam0))
		{
			Global_1682037.f_12 = iVar0;
			Global_1682037.f_13 = iVar1;
		}
		else if (func_110(iParam0))
		{
			Global_1682091.f_12 = iVar0;
			Global_1682091.f_13 = iVar1;
		}
	}
	if (func_109(iParam0))
	{
		Global_1682175.f_12 = iVar0;
		Global_1682175.f_13 = iVar1;
	}
	if (func_108(iParam0))
	{
		Global_1682250.f_16 = iVar0;
		Global_1682250.f_17 = iVar1;
	}
	if (func_107(iParam0))
	{
		Global_1682337.f_16 = iVar0;
		Global_1682337.f_17 = iVar1;
	}
	if (func_106(iParam0))
	{
		Global_1682470.f_15 = iVar0;
		Global_1682470.f_16 = iVar1;
	}
}

int func_106(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_107(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_110(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_111(func_112(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_112(int iParam0)
{
	if (func_32(iParam0) == 237 || func_32(iParam0) == 250)
	{
		return func_113(iParam0);
	}
	return -1;
}

int func_113(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_114(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_116(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

void func_120(int iParam0)
{
	if (func_132(PLAYER::PLAYER_ID()) && func_131())
	{
		if (func_130(iParam0))
		{
			func_124(10571, -1);
		}
		else if (func_123(iParam0))
		{
			func_124(10573, -1);
		}
		else if (func_122(iParam0, 1))
		{
			func_124(10574, -1);
		}
		else if (func_121(iParam0))
		{
			func_124(10575, -1);
		}
	}
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_122(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_124(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_128(iParam0, func_129(iParam1), 0);
	iVar0++;
	if (!func_127(iParam0))
	{
		func_126(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_125(iParam0, iVar0, iParam1, 1);
	}
}

void func_125(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_129(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_129(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_129(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_129(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_129(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_129(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_129(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_129(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_129(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_129(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_129(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_129(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_129(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_129(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_129(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_129(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_129(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_129(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_129(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_129(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_129(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_129(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_129(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_129(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_129(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_129(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_129(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_129(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_129(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_129(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_129(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_129(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_129(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_129(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_129(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_129(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_129(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_129(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_129(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_129(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_129(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_129(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_129(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_129(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_129(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_129(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_129(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_129(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_129(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_129(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_129(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_129(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_129(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_126(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_127(int iParam0)
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

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2555716[iParam0 /*3*/][func_129(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_21();
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

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

bool func_131()
{
	return func_65(PLAYER::PLAYER_ID());
}

bool func_132(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_125, 14);
}

bool func_133(int iParam0)
{
	return func_36(iParam0, 20);
}

void func_134(var uParam0, bool bParam1, bool bParam2)
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

void func_135(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23677 == 0 || Global_262145.f_23677 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23677 == 1)
			{
				Global_2544210.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6755)
				{
					iParam1 = Global_262145.f_6755;
				}
				Global_2544210.f_284 = iParam1;
				Global_2544210.f_285 = 0;
			}
		}
	}
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_138(int iParam0, int iParam1)
{
	if (func_132(PLAYER::PLAYER_ID()) && func_131())
	{
		if (func_130(iParam0) && iParam1 > 0)
		{
			func_126(10572, (func_128(10572, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_11();
	if (iVar5 != func_10())
	{
		func_161(iVar5, &iVar0, &iVar1);
	}
	bVar6 = !func_101(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_160())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_131())
			{
				if (!func_160())
				{
					Var7 = { func_159() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_158(Var7)), func_157(Var7), iParam4);
				}
			}
			else if (func_160())
			{
				func_146(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_145())
			{
				if (!func_160())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_158(func_144(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_160())
			{
				func_146(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_145())
			{
				if (!func_160())
				{
					iVar2 = func_140(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_160())
			{
				func_146(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, iVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_160())
			{
				func_146(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_145())
			{
				if (!func_160())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_HUB_SELL(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_160())
			{
				func_146(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_160())
			{
				func_146(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(iParam1);
			}
			break;
		
		case 249:
			if (func_160())
			{
				func_146(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_160())
			{
				func_146(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_FMBB_BOSS_WORK(iParam1);
			}
			break;
		
		case 243:
			if (func_160())
			{
				func_146(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_160())
				{
					func_146(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_160())
			{
				func_146(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::_NETWORK_EARN_CASINO_HEIST(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_160())
			{
				func_146(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4265506[iVar4 /*85*/].f_6 = iVar0;
				Global_4265506[iVar4 /*85*/].f_7 = iVar1;
				Global_4265506[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_BOSS_AGENCY(iVar0, iVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_140(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_143(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_141(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_141(int iParam0, int iParam1)
{
	return (func_142(iParam0) * iParam1);
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22490;
		
		case 0:
			return Global_262145.f_22491;
		
		case 1:
			return Global_262145.f_22492;
		
		case 2:
			return Global_262145.f_22493;
		
		case 3:
			return Global_262145.f_22494;
		
		case 4:
			return Global_262145.f_22495;
		
		case 5:
			return Global_262145.f_22496;
		
		case 6:
			return Global_262145.f_22497;
		
		case 7:
			return Global_262145.f_22498;
		
		default:
	}
	return 0;
}

float func_143(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22500);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22502;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22499);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22502;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22499);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22503;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22504;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22501);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_144(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_185[5 /*12*/];
}

bool func_145()
{
	return func_29(PLAYER::PLAYER_ID());
}

void func_146(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_160())
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
				func_147(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_147(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_147(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_147(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_147(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_160())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_21()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
			*uParam0 = func_154(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_153(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_148(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_148(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_149(iParam0);
	}
}

void func_149(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_160())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_152(iParam0))
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
		func_150(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_150(var uParam0)
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
	func_151(&(uParam0->f_14));
	func_151(&(uParam0->f_14.f_13));
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

void func_151(var uParam0)
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

int func_152(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_153(int iParam0, int iParam1)
{
	Global_2465846 = iParam1;
	Global_2465845 = iParam0;
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_160())
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
				func_155(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_155(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_46(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_156();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_156()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_158(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_159()
{
	return Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_194;
}

int func_160()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_161(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630816[iParam0 /*597*/].f_11.f_8[0];
	*uParam2 = Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_162(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_163(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_163(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_173(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_169(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_164(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_164(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_167(iParam0, 1) };
	if (iParam0 == func_166(PLAYER::PLAYER_PED_ID()))
	{
		func_165(1);
	}
	func_169(Var0, iParam1, 0, sParam2, iParam3);
}

void func_165(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_166(int iParam0)
{
	return iParam0;
}

Vector3 func_167(int iParam0, bool bParam1)
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
	if (iParam0 == func_168(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
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

int func_168(int iParam0)
{
	return iParam0;
}

void func_169(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_172(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam3;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam4;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_171();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_170();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_170()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_171()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_172(struct<3> Param0, var uParam3, var uParam4)
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

var func_173(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_174(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_174(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_208(PLAYER::PLAYER_ID()) || func_207(PLAYER::PLAYER_ID()))
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
	else if (func_205() || func_204(PLAYER::PLAYER_ID()))
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
	if (func_203(sParam2))
	{
	}
	if (func_202())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_200(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_199(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_196(0, &iVar1);
					break;
				
				case 3:
					func_196(1, &iVar1);
					break;
				
				case 1:
					func_193(&iVar1);
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
			func_192(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_185((func_191(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_2 != -1)
				{
					func_192(1166, iVar1, -1);
				}
				func_179(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_175((func_177(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_175((func_177(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_175(int iParam0)
{
	if (func_202())
	{
		Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_5 = iParam0;
		func_176(joaat("mpply_globalxp"), iParam0);
	}
}

void func_176(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_177(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_178(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_178(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_178(int iParam0)
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

void func_179(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_184(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_182(func_183(&Var0));
			if (iVar13 == 0)
			{
				func_181(&Global_1390382, iParam0);
				func_180(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar13 == 1)
			{
				func_181(&Global_1390383, iParam0);
				func_180(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar13 == 2)
			{
				func_181(&Global_1390384, iParam0);
				func_180(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar13 == 3)
			{
				func_181(&Global_1390385, iParam0);
				func_180(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar13 == 4)
			{
				func_181(&Global_1390386, iParam0);
				func_180(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_180(int iParam0, int iParam1)
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

void func_181(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_182(int iParam0)
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

int func_183(var* uParam0)
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

struct<13> func_184(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (func_202())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_129(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_129(-1)])
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
		if (func_15(PLAYER::PLAYER_ID()))
		{
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_205.f_6 = func_189(iParam0, 1);
		}
		func_125(640, iParam0, -1, 1);
		func_126(641, func_189(iParam0, 1), -1, 1, 0);
		Global_1390527[func_129(-1)] = iParam0;
		func_186(-1109644434, 7, 0);
	}
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_188(iParam1, iParam2))
	{
		iVar0 = func_187();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_187()
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

int func_188(int iParam0, var uParam1)
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

int func_189(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_190(iParam0, 0);
}

int func_190(int iParam0, int iParam1)
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

int func_191(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1390527[func_129(-1)];
			}
			else if (func_15(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_129(-1)];
	}
	return 0;
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_128(iParam0, func_129(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_127(iParam0))
	{
		func_126(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_125(iParam0, iVar0, iParam2, 1);
	}
}

void func_193(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_73(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_195(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_194(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_194(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_194(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_195(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2518253 = { func_184(iParam0) };
		Global_2518266 = { func_184(iParam1) };
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

void func_196(bool bParam0, int iParam1)
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
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_195(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_197(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_195(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_194(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_194(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_197(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_198(iParam0), func_198(iParam1));
	return 0f;
}

Vector3 func_198(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_194(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_200(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_191(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_191(PLAYER::PLAYER_ID());
		}
	}
	if (func_201(8000, 0, 0) > 0)
	{
		if (func_201(8000, 0, 0) < (iParam0 + func_191(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_201(8000, 0, 0) - func_191(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_201(int iParam0, bool bParam1, int iParam2)
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

int func_202()
{
	return 1;
}

int func_203(char* sParam0)
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

int func_204(int iParam0)
{
	return func_116(func_32(iParam0));
}

bool func_205()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_90();
	}
	return func_206(Global_4456448.f_85535);
}

int func_206(int iParam0)
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

bool func_207(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_208(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_209()
{
	Global_2465048 = 1;
}

void func_210(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_215(7))
	{
		return;
	}
	iVar0 = func_213(iParam0);
	iVar1 = func_212(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2544210.f_5191.f_268, NETWORK::GET_NETWORK_TIME()));
	if (func_211(iParam0) != -1)
	{
		if (iVar2 > func_211(iParam0))
		{
			iVar2 = func_211(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12573)
	{
		iVar2 = Global_262145.f_12573;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_211(int iParam0)
{
	if (func_122(iParam0, 0) || func_123(iParam0))
	{
		return Global_262145.f_18666;
	}
	if (func_130(iParam0))
	{
		return Global_262145.f_18665;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18662;
		
		case 191:
			return Global_262145.f_18664;
		
		case 190:
			return Global_262145.f_18663;
		
		case 227:
			return Global_262145.f_21224;
		
		case 226:
			return Global_262145.f_21212;
		
		case 225:
			return Global_262145.f_21232;
		
		case 230:
			return Global_262145.f_22487;
		
		case 229:
			return Global_262145.f_22391;
		
		case 233:
			return Global_262145.f_22967;
		
		case 237:
			return Global_262145.f_24130;
		
		case 238:
			return Global_262145.f_24241;
		
		case 249:
			return Global_262145.f_24257;
		
		case 243:
			return Global_262145.f_26590;
		
		default:
	}
	return -1;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12664;
		
		case 152:
			return Global_262145.f_12699;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12687;
		
		case 157:
			return Global_262145.f_12654;
		
		case 159:
			return Global_262145.f_12637;
		
		case 164:
			return Global_262145.f_12677;
		
		case 160:
			return Global_262145.f_12727;
		
		case 162:
			return Global_262145.f_12747;
		
		case 163:
			return Global_262145.f_12712;
		
		case 154:
			return Global_262145.f_12782;
		
		case 155:
			return Global_262145.f_12772;
		
		case 153:
			return Global_262145.f_12736;
		
		case 170:
			return Global_262145.f_15174;
		
		case 171:
			return Global_262145.f_15233;
		
		case 172:
			return Global_262145.f_15251;
		
		case 173:
			return Global_262145.f_15192;
		
		case 166:
			return Global_262145.f_15207;
		
		case 167:
			return Global_262145.f_15298;
		
		case 169:
			return Global_262145.f_15270;
		
		case 168:
			return Global_262145.f_15263;
		
		case 179:
			return Global_262145.f_18545;
		
		case 180:
			return Global_262145.f_18323;
		
		case 182:
			return Global_262145.f_18323;
		
		case 183:
			return Global_262145.f_18323;
		
		case 185:
			return Global_262145.f_18323;
		
		case 186:
			return Global_262145.f_18323;
		
		case 189:
			return Global_262145.f_18545;
		
		case 190:
			return Global_262145.f_18199;
		
		case 191:
			return Global_262145.f_18290;
		
		case 192:
			return Global_262145.f_18084;
		
		case 193:
			return Global_262145.f_18545;
		
		case 194:
			return Global_262145.f_18545;
		
		case 195:
			return Global_262145.f_18323;
		
		case 197:
			return Global_262145.f_18323;
		
		case 198:
			return Global_262145.f_18323;
		
		case 199:
			return Global_262145.f_18545;
		
		case 200:
			return Global_262145.f_18545;
		
		case 201:
			return Global_262145.f_18545;
		
		case 205:
			return Global_262145.f_18545;
		
		case 207:
			return Global_262145.f_18323;
		
		case 208:
			return Global_262145.f_18323;
		
		case 209:
			return Global_262145.f_18323;
		
		case 210:
			return Global_262145.f_18545;
		
		case 211:
			return Global_262145.f_18545;
		
		case 214:
			return Global_262145.f_19395;
		
		case 215:
			return Global_262145.f_19397;
		
		case 216:
			return Global_262145.f_19399;
		
		case 217:
			return Global_262145.f_19401;
		
		case 218:
			return Global_262145.f_19403;
		
		case 219:
			return Global_262145.f_19405;
		
		case 220:
			return Global_262145.f_19407;
		
		case 221:
			return Global_262145.f_19409;
		
		case 225:
			if (!func_145())
			{
				return Global_262145.f_21234;
			}
			break;
		
		case 226:
			if (!func_145())
			{
				return Global_262145.f_21214;
			}
			break;
		
		case 227:
			if (!func_145())
			{
				return Global_262145.f_21226;
			}
			break;
		
		case 229:
			if (!func_145())
			{
				return Global_262145.f_22393;
			}
			break;
		
		case 230:
			if (!func_145())
			{
				return Global_262145.f_22489;
			}
			break;
		
		case 233:
			if (!func_145())
			{
				return Global_262145.f_22966;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_145())
			{
				return Global_262145.f_24132;
			}
			break;
		
		case 238:
			if (!func_145())
			{
				return Global_262145.f_24243;
			}
			break;
		
		case 249:
			if (!func_145())
			{
				return Global_262145.f_24259;
			}
			break;
		
		case 243:
			if (!func_145())
			{
				return Global_262145.f_26593;
			}
			break;
		
		case 158:
			if (!func_145())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_213(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12663;
		
		case 152:
			return Global_262145.f_12698;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12686;
		
		case 157:
			return Global_262145.f_12653;
		
		case 159:
			return Global_262145.f_12636;
		
		case 164:
			return Global_262145.f_12676;
		
		case 160:
			return Global_262145.f_12726;
		
		case 162:
			return Global_262145.f_12746;
		
		case 163:
			return Global_262145.f_12711;
		
		case 154:
			return Global_262145.f_12781;
		
		case 155:
			return Global_262145.f_12771;
		
		case 153:
			return Global_262145.f_12735;
		
		case 170:
			return Global_262145.f_15173;
		
		case 171:
			return Global_262145.f_15232;
		
		case 172:
			return Global_262145.f_15250;
		
		case 173:
			return Global_262145.f_15191;
		
		case 166:
			return Global_262145.f_15206;
		
		case 179:
			return Global_262145.f_18544;
		
		case 180:
			return Global_262145.f_18322;
		
		case 182:
			return Global_262145.f_18322;
		
		case 183:
			return Global_262145.f_18322;
		
		case 185:
			return Global_262145.f_18322;
		
		case 186:
			return Global_262145.f_18322;
		
		case 189:
			return Global_262145.f_18544;
		
		case 193:
			return Global_262145.f_18544;
		
		case 194:
			return Global_262145.f_18544;
		
		case 195:
			return Global_262145.f_18322;
		
		case 197:
			return Global_262145.f_18322;
		
		case 198:
			return Global_262145.f_18322;
		
		case 199:
			return Global_262145.f_18544;
		
		case 200:
			return Global_262145.f_18544;
		
		case 201:
			return Global_262145.f_18544;
		
		case 205:
			return Global_262145.f_18544;
		
		case 207:
			return Global_262145.f_18322;
		
		case 208:
			return Global_262145.f_18322;
		
		case 209:
			return Global_262145.f_18322;
		
		case 210:
			return Global_262145.f_18544;
		
		case 211:
			return Global_262145.f_18544;
		
		case 190:
			if (func_214(0))
			{
				return Global_262145.f_18198;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_214(0))
			{
				return Global_262145.f_18289;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_214(0))
			{
				return Global_262145.f_18083;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19394;
		
		case 215:
			return Global_262145.f_19396;
		
		case 216:
			return Global_262145.f_19398;
		
		case 217:
			return Global_262145.f_19400;
		
		case 218:
			return Global_262145.f_19402;
		
		case 219:
			return Global_262145.f_19404;
		
		case 220:
			return Global_262145.f_19406;
		
		case 221:
			return Global_262145.f_19408;
		
		case 225:
			if (func_214(0))
			{
				return Global_262145.f_21233;
			}
			break;
		
		case 226:
			if (func_214(0))
			{
				return Global_262145.f_21213;
			}
			break;
		
		case 227:
			if (func_214(0))
			{
				return Global_262145.f_21225;
			}
			break;
		
		case 229:
			if (func_214(0))
			{
				return Global_262145.f_22392;
			}
			break;
		
		case 230:
			if (func_214(0))
			{
				return Global_262145.f_22488;
			}
			break;
		
		case 233:
			if (func_214(0))
			{
				return Global_262145.f_22968;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_214(0))
			{
				return Global_262145.f_24131;
			}
			break;
		
		case 238:
			if (func_214(0))
			{
				return Global_262145.f_24242;
			}
			break;
		
		case 249:
			if (func_214(0))
			{
				return Global_262145.f_24258;
			}
			break;
		
		case 243:
			return Global_262145.f_26589;
		
		case 158:
			if (func_214(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

bool func_214(bool bParam0)
{
	return func_6(PLAYER::PLAYER_ID(), bParam0);
}

bool func_215(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_46, iParam0);
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_145())
		{
			if (func_101(0))
			{
				if (!func_214(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_11()))
					{
						if (func_229() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_229());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_227(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_220("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1);
						}
						func_99(20);
						func_217(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_217(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = -1855721397;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_219(iParam0);
		func_218(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_46(iParam0));
	}
}

void func_218(var uParam0, var uParam1)
{
	*uParam0 = Global_1658176.f_9;
	*uParam1 = Global_1658176.f_10;
}

var func_219(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_508;
}

int func_220(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_66(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_225(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_221(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_221(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_224() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_19(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_222(iParam2);
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

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_223(iVar0);
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

void func_223(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_224()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_225(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_226(&cVar0);
}

var func_226(char[4] cParam0)
{
	return cParam0;
}

void func_227(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_228(1);
	}
	else
	{
		iVar1 = func_228(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_228(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12568;
}

int func_229()
{
	return Global_262145.f_12567;
}

void func_230(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_214(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_145())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_11();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590908[iVar11 /*874*/].f_851.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590908[iVar11 /*874*/].f_851.f_2;
			}
			else
			{
				iVar2 = func_246(Global_1590908[iVar11 /*874*/].f_851, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_245(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_244("TICK_TCUT", iVar10, 0);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1682037.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_243(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_241(*uParam3);
				}
				iVar6 = func_240(&uVar5);
				iVar7 = Global_262145.f_24161;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_24160));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_99(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_239(iVar23))
								{
									func_231(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_24133;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_24134;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_99(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_233(iParam0);
	func_232(iParam0, uVar0, iParam1, iParam2);
}

void func_232(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = 1152266822;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_219(iParam0);
	func_218(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_46(iParam0));
		}
	}
}

int func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_238();
	iVar0 = func_236(iParam0, iVar0);
	iVar1 = Global_1630816[func_11() /*597*/].f_11.f_424;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_15134));
	if (iVar0 < func_235())
	{
		iVar0 = func_235();
	}
	if (iVar0 > func_234())
	{
		iVar0 = func_234();
	}
	return iVar0;
}

int func_234()
{
	return Global_262145.f_15135;
}

int func_235()
{
	return Global_262145.f_16310;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_297(iParam0) * func_237());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_237()
{
	return Global_262145.f_16309;
}

var func_238()
{
	return Global_262145.f_12559;
}

int func_239(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_48(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_36(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_240(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_19(iVar2, 0) && !func_48(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_19(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_241(int iParam0)
{
	func_242(iParam0, 7238);
}

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_128(iParam1, -1, 0);
	func_126(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_243(int iParam0)
{
	func_242(iParam0, 7233);
}

int func_244(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	if (bParam2)
	{
		func_221(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_221(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_245(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_24162);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_246(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_247(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_214(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_145())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_141(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_140(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_249(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_244("SMTICK_RONCUT", func_249(*iParam2), 0);
				}
				*iParam2 = (*iParam2 - func_249(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_248(iVar2, iVar9);
				iVar6 = func_240(&uVar5);
				iVar7 = Global_262145.f_22506;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22505));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_99(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_239(iVar20))
								{
									func_231(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22439;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22440;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_99(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_248(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_242(iParam0, 6118);
	}
	if (iParam1 > 0)
	{
		func_242(iParam1, 6119);
	}
}

int func_249(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22473);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22474))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22474);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_250(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_214(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_145())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_144(iVar15);
			iVar0 = (func_275(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_271(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21216));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21215));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_265(iVar16, iVar2);
				if (func_261(iVar16) >= Global_262145.f_20762 || iVar2 >= Global_262145.f_20762)
				{
					func_251(5);
				}
				iVar6 = func_240(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21218);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21217));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_99(108);
					}
					else
					{
						func_99(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_239(iVar20))
								{
									func_231(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21219;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21220;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1694747 = *iParam2;
					func_99(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_251(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20750)
			{
				if (func_253(Global_262145.f_20751))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20752)
			{
				if (func_253(Global_262145.f_20753))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20754)
			{
				if (func_253(Global_262145.f_20755))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20756)
			{
				if (func_253(Global_262145.f_20757))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20758)
			{
				if (func_253(Global_262145.f_20759))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20760)
			{
				if (func_253(Global_262145.f_20761))
				{
					func_244("CLOTHAWDSTRAP3", Global_262145.f_20762, 0);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20763)
			{
				if (func_253(Global_262145.f_20764))
				{
					func_244("CLOTHAWDSTRAP5", Global_262145.f_20898, 0);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20766)
			{
				if (func_253(Global_262145.f_20767))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20768)
			{
				if (func_253(Global_262145.f_20769))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20770)
			{
				if (func_253(Global_262145.f_20771))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20772)
			{
				if (func_253(Global_262145.f_20773))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20774)
			{
				if (func_253(Global_262145.f_20775))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20776)
			{
				if (func_253(Global_262145.f_20777))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20778)
			{
				if (func_253(Global_262145.f_20779))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20780)
			{
				if (func_253(Global_262145.f_20781))
				{
					func_252("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_252(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2518253 = { func_184(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2518183, 35, &Global_2518253))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2518183.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, bVar1, false, Global_2518183, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_221(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_258(15417, -1, -1))
			{
				func_257(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_258(15418, -1, -1))
			{
				func_257(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_258(15425, -1, -1))
			{
				func_257(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_258(15405, -1, -1))
			{
				func_257(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_258(15393, -1, -1))
			{
				func_257(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_258(15409, -1, -1))
			{
				func_257(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_258(15396, -1, -1))
			{
				func_257(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_258(15412, -1, -1))
			{
				func_257(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_258(15403, -1, -1))
			{
				func_257(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_258(15389, -1, -1))
			{
				func_257(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_258(15398, -1, -1))
			{
				func_257(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_258(15400, -1, -1))
			{
				func_257(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_258(15408, -1, -1))
			{
				func_257(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_258(15411, -1, -1))
			{
				func_257(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_258(15397, -1, -1))
			{
				func_257(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_258(15413, -1, -1))
			{
				func_257(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_258(15391, -1, -1))
			{
				func_257(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_258(15388, -1, -1))
			{
				func_257(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_258(15401, -1, -1))
			{
				func_257(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_258(15394, -1, -1))
			{
				func_257(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_258(15406, -1, -1))
			{
				func_257(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_258(15395, -1, -1))
			{
				func_257(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_258(15410, -1, -1))
			{
				func_257(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_258(15407, -1, -1))
			{
				func_257(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_258(15414, -1, -1))
			{
				func_257(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_258(15415, -1, -1))
			{
				func_257(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_258(15399, -1, -1))
			{
				func_257(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_258(15404, -1, -1))
			{
				func_257(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_258(15392, -1, -1))
			{
				func_257(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_258(15390, -1, -1))
			{
				func_257(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_258(15402, -1, -1))
			{
				func_257(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_258(15416, -1, -1))
			{
				func_257(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_256(209, -1))
			{
				func_254(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_258(15426, -1, -1))
			{
				func_257(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_258(15422, -1, -1))
			{
				func_257(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_258(15423, -1, -1))
			{
				func_257(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_258(15421, -1, -1))
			{
				func_257(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_258(15427, -1, -1))
			{
				func_257(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_258(15419, -1, -1))
			{
				func_257(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_258(15420, -1, -1))
			{
				func_257(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_254(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_255())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_129(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_255()
{
	return 1;
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2592627[iParam0 /*3*/][func_129(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_257(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	int iVar25;
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
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
		iVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
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
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 31707), false, true, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 31707)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar26, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_258(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar1 = func_260(iParam0, iParam1);
	iVar2 = func_259(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_259(int iParam0)
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

int func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
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

int func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(iParam0);
	return func_128(func_262(iVar0), -1, 0);
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3953;
		
		case 1:
			return 3954;
		
		case 2:
			return 3955;
		
		case 3:
			return 3956;
		
		case 4:
			return 3957;
		
		case 5:
			return 5458;
		
		default:
	}
	return 3953;
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (func_264(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_264(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_263(iParam0);
	iVar1 = func_262(iVar0);
	iVar2 = (func_128(iVar1, -1, 0) + iParam1);
	func_126(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_268(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iVar0 /*12*/] != 0)
			{
				iVar1 = func_262(iVar0);
				iVar3 = (iVar3 + func_128(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_267(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_266(9357, iVar5, -1, 1);
	}
}

bool func_266(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_21();
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
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30707), false, true, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30707)) * 8) * 8;
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

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
	}
	iVar0 = 0;
	iVar1 = func_270(iParam0, iParam1);
	iVar2 = func_269(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_269(int iParam0)
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
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_21();
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
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30707), false, true, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_157(iParam1);
	if (func_264(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_17139;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17144);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17149);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_17138;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17143);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17148);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_17137;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17142);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17147);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_17135;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17140);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17145);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_17136;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_17141);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_17146);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21241;
				if (func_272(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21243);
				}
				if (func_272(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21242);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_272(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_274(iParam0, iParam1))
	{
		iVar0 = func_273(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_264(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_264(iParam1) && iParam0 != func_10())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_264(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_276(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_131())
			{
				Var0 = { func_159() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_271(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18774);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18773);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_240(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18764);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18763));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_99(86);
				}
				Global_2544210.f_5191.f_384 = *iParam2;
			}
			else if (func_214(0))
			{
				Var15 = { func_277(func_11()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_271(func_11(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18774));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18773));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18813;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18814;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_277(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_194;
}

void func_278(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_29(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_293();
			}
			func_292();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_29(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_284(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_183));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_283(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_240(&uVar2);
					iVar4 = Global_262145.f_16320;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15529));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_99(44);
					}
				}
				func_281(*iParam3);
				func_280();
				Global_2544210.f_5191.f_384 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_239(iVar9))
						{
							func_231(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_29(PLAYER::PLAYER_ID()))
		{
			func_279();
		}
	}
}

void func_279()
{
	int iVar0;
	
	iVar0 = Global_2595531[func_21()];
	iVar0++;
	func_125(3669, iVar0, -1, 1);
}

void func_280()
{
	int iVar0;
	
	iVar0 = Global_2595537[func_21()];
	iVar0++;
	func_125(3668, iVar0, -1, 1);
}

void func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2595540[func_21()];
	iVar0 = (iVar0 + iParam0);
	func_125(3670, iVar0, -1, 1);
	if (func_268(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_282(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_266(7666, iVar2, -1, 1);
	}
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16453;
			break;
		
		case 2:
			return Global_262145.f_16454;
			break;
		
		case 3:
			return Global_262145.f_16455;
			break;
		
		case 4:
			return Global_262145.f_16456;
			break;
		
		case 5:
			return Global_262145.f_16457;
			break;
		
		case 6:
			return Global_262145.f_16458;
			break;
		
		case 7:
			return Global_262145.f_16459;
			break;
		
		case 8:
			return Global_262145.f_16460;
			break;
		
		case 9:
			return Global_262145.f_16461;
			break;
		
		case 10:
			return Global_262145.f_16462;
			break;
		
		case 11:
			return Global_262145.f_16463;
			break;
		
		case 12:
			return Global_262145.f_16464;
			break;
		
		case 13:
			return Global_262145.f_16465;
			break;
		
		case 14:
			return Global_262145.f_16466;
			break;
		
		case 15:
			return Global_262145.f_16467;
			break;
		
		case 16:
			return Global_262145.f_16468;
			break;
		
		case 17:
			return Global_262145.f_16469;
			break;
		
		case 18:
			return Global_262145.f_16470;
			break;
		
		case 19:
			return Global_262145.f_16471;
			break;
		
		case 20:
			return Global_262145.f_16472;
			break;
		
		case 21:
			return Global_262145.f_16473;
			break;
		
		case 22:
			return Global_262145.f_16474;
			break;
		
		case 23:
			return Global_262145.f_16475;
			break;
		
		case 24:
			return Global_262145.f_16476;
			break;
	}
	return 0;
}

var func_283(int iParam0)
{
	if (iParam0 >= Global_262145.f_15507)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 >= Global_262145.f_15506)
	{
		return Global_262145.f_15527;
	}
	else if (iParam0 >= Global_262145.f_15505)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 >= Global_262145.f_15504)
	{
		return Global_262145.f_15525;
	}
	else if (iParam0 >= Global_262145.f_15503)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 >= Global_262145.f_15502)
	{
		return Global_262145.f_15523;
	}
	else if (iParam0 >= Global_262145.f_15501)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 >= Global_262145.f_15500)
	{
		return Global_262145.f_15521;
	}
	else if (iParam0 >= Global_262145.f_15499)
	{
		return Global_262145.f_15520;
	}
	else if (iParam0 >= Global_262145.f_15498)
	{
		return Global_262145.f_15519;
	}
	else if (iParam0 >= Global_262145.f_15497)
	{
		return Global_262145.f_15518;
	}
	else if (iParam0 >= Global_262145.f_15496)
	{
		return Global_262145.f_15517;
	}
	else if (iParam0 >= Global_262145.f_15495)
	{
		return Global_262145.f_15516;
	}
	else if (iParam0 >= Global_262145.f_15494)
	{
		return Global_262145.f_15515;
	}
	else if (iParam0 >= Global_262145.f_15493)
	{
		return Global_262145.f_15514;
	}
	else if (iParam0 >= Global_262145.f_15492)
	{
		return Global_262145.f_15513;
	}
	else if (iParam0 >= Global_262145.f_15491)
	{
		return Global_262145.f_15512;
	}
	else if (iParam0 >= Global_262145.f_15490)
	{
		return Global_262145.f_15511;
	}
	else if (iParam0 >= Global_262145.f_15489)
	{
		return Global_262145.f_15510;
	}
	else if (iParam0 >= Global_262145.f_15488)
	{
		return Global_262145.f_15509;
	}
	return Global_262145.f_15508;
}

int func_284(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_291(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_290(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_289(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_285(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_285(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_289(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	if (func_288(iParam0))
	{
		iVar0 = func_286(func_287(iParam0));
		return func_128(iVar0, -1, 0);
	}
	return 0;
}

int func_286(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3648;
	}
	else if (iParam0 == 1)
	{
		return 3649;
	}
	else if (iParam0 == 2)
	{
		return 3650;
	}
	else if (iParam0 == 3)
	{
		return 3651;
	}
	else if (iParam0 == 4)
	{
		return 3652;
	}
	return 3648;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (func_288(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_288(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15707;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15705;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15709;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15703;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15701;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15711;
	}
	return 0;
}

int func_290(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_288(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1683674[iVar0] == iParam1 && Global_1683681[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	int iVar0;
	
	if (func_288(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_108[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_292()
{
	int iVar0;
	
	iVar0 = Global_2595528[func_21()];
	iVar0++;
	Global_2595528[func_21()] = iVar0;
	func_125(3667, iVar0, -1, 1);
}

void func_293()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2595525[func_21()];
	iVar1 = Global_2595534[func_21()];
	iVar0++;
	iVar1++;
	Global_2595525[func_21()] = iVar0;
	Global_2595534[func_21()] = iVar1;
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_130 = iVar1;
	func_125(3665, iVar0, -1, 1);
	func_125(3666, iVar1, -1, 1);
}

void func_294()
{
	if (func_145())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_295()
{
	if (func_145())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_296()
{
	if (func_145())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_297(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_101(1) && !func_214(1))
			{
				if (func_300(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	if (func_299(iParam0) == 0)
	{
		if (func_101(1) && !func_214(1))
		{
			if (func_300(func_11()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_299(int iParam0)
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

bool func_300(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 26);
}

int func_301(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18460;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12689));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12634) * Global_262145.f_12639));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12661) * Global_262145.f_12665));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12674) * Global_262145.f_12678));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12696) * Global_262145.f_12701));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12858) * Global_262145.f_12859));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12864) * Global_262145.f_12865));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12862) * Global_262145.f_12863));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12856) * Global_262145.f_12857));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12860) * Global_262145.f_12861));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12854) * Global_262145.f_12855));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15230;
		
		case 172:
			return Global_262145.f_15246;
		
		case 173:
			return Global_262145.f_15189;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18468;
		
		case 180:
			return Global_262145.f_18343;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18351;
		
		case 185:
			return Global_262145.f_18360;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18556;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18573;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18420;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18604;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18482;
		
		case 205:
			return Global_262145.f_18591;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18449;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18586;
		
		case 211:
			return Global_262145.f_18550;
		
		case 214:
			return Global_262145.f_19144;
		
		case 215:
			return Global_262145.f_19154;
		
		case 216:
			return Global_262145.f_19164;
		
		case 217:
			return Global_262145.f_19173;
		
		case 218:
			return Global_262145.f_19182;
		
		case 219:
			return Global_262145.f_19198;
		
		case 241:
			return Global_262145.f_24278;
		
		case 242:
			return Global_262145.f_24274;
		
		case 248:
			return Global_262145.f_24277;
		
		case 244:
			return Global_262145.f_24275;
		
		case 239:
			return Global_262145.f_24279;
		
		case 240:
			return Global_262145.f_24280;
		
		case 243:
			return Global_262145.f_26588;
		
		default:
	}
	return 0;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18461;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12685) * Global_262145.f_12690));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12635) * Global_262145.f_12640));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12662) * Global_262145.f_12666));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12675) * Global_262145.f_12679));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12697) * Global_262145.f_12702));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12734) * Global_262145.f_12737));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12780) * Global_262145.f_12783));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12770) * Global_262145.f_12773));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12725) * Global_262145.f_12728));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12745) * Global_262145.f_12750));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12710) * Global_262145.f_12713));
		
		case 170:
			return Global_262145.f_15172;
		
		case 171:
			return Global_262145.f_15231;
		
		case 172:
			return Global_262145.f_15247;
		
		case 173:
			return Global_262145.f_15190;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17269;
		
		case 168:
			return Global_262145.f_17268;
		
		case 179:
			return Global_262145.f_18469;
		
		case 180:
			return Global_262145.f_18344;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18352;
		
		case 185:
			return Global_262145.f_18361;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18557;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18574;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18421;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18605;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18483;
		
		case 205:
			return Global_262145.f_18592;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18450;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18587;
		
		case 211:
			return Global_262145.f_18551;
		
		case 214:
			return Global_262145.f_19145;
		
		case 215:
			return Global_262145.f_19155;
		
		case 216:
			return Global_262145.f_19165;
		
		case 217:
			return Global_262145.f_19174;
		
		case 218:
			return Global_262145.f_19183;
		
		case 219:
			return Global_262145.f_19199;
		
		case 178:
			if (func_145())
			{
				return Global_262145.f_19022;
			}
			else if (bParam1)
			{
				return Global_262145.f_19023;
			}
			break;
		
		case 188:
			if (func_145())
			{
				return Global_262145.f_19106;
			}
			else if (bParam1)
			{
				return Global_262145.f_19107;
			}
			break;
		
		case 225:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21229;
				}
				else
				{
					return Global_262145.f_21230;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_21231;
			}
			break;
		
		case 226:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21209;
				}
				else
				{
					return Global_262145.f_21210;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_21211;
			}
			break;
		
		case 227:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21221;
				}
				else
				{
					return Global_262145.f_21222;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_21223;
			}
			break;
		
		case 229:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22388;
				}
				else
				{
					return Global_262145.f_22389;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_22390;
			}
			break;
		
		case 230:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22484;
				}
				else
				{
					return Global_262145.f_22485;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_22486;
			}
			break;
		
		case 233:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22964;
				}
				else
				{
					return Global_262145.f_22965;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_22963;
			}
			break;
		
		case 241:
			return Global_262145.f_24285;
		
		case 242:
			return Global_262145.f_24281;
		
		case 244:
			return Global_262145.f_24282;
		
		case 248:
			return Global_262145.f_24284;
		
		case 239:
			return Global_262145.f_24286;
		
		case 240:
			return Global_262145.f_24287;
		
		case 237:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24127;
				}
				else
				{
					return Global_262145.f_24128;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_24129;
			}
			break;
		
		case 238:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24238;
				}
				else
				{
					return Global_262145.f_24239;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_24240;
			}
			break;
		
		case 249:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24254;
				}
				else
				{
					return Global_262145.f_24255;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_24256;
			}
			break;
		
		case 243:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26591;
				}
				else
				{
					return Global_262145.f_26592;
				}
			}
			else if (func_131())
			{
				return Global_262145.f_26591;
			}
			break;
		
		case 158:
			if (func_145() && !func_131())
			{
				if (func_300(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_131())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_303(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_304(iParam0))
	{
		if (!func_145())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12578;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (func_98(iParam0))
		{
			*uParam1 = (Global_262145.f_18320 / 100f);
			*uParam2 = (Global_262145.f_18320 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24288;
			*uParam2 = Global_262145.f_24288;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24289;
			*uParam2 = Global_262145.f_24289;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24291;
			*uParam2 = Global_262145.f_24291;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24292;
			*uParam2 = Global_262145.f_24292;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24293;
			*uParam2 = Global_262145.f_24293;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24294;
			*uParam2 = Global_262145.f_24294;
		}
		else
		{
			*uParam1 = Global_262145.f_12575;
			*uParam2 = Global_262145.f_12574;
		}
	}
	else if (func_98(iParam0))
	{
		*uParam1 = (Global_262145.f_18321 / 100f);
		*uParam2 = (Global_262145.f_18321 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24295;
		*uParam2 = Global_262145.f_24295;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24296;
		*uParam2 = Global_262145.f_24296;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24298;
		*uParam2 = Global_262145.f_24298;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24299;
		*uParam2 = Global_262145.f_24299;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24300;
		*uParam2 = Global_262145.f_24300;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24301;
		*uParam2 = Global_262145.f_24301;
	}
	else
	{
		*uParam1 = Global_262145.f_12577;
		*uParam2 = Global_262145.f_12576;
	}
	iVar0 = func_63();
	if (iVar0 != func_10())
	{
		if (func_48(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

int func_305()
{
	if ((func_36(PLAYER::PLAYER_ID(), 21) || func_36(PLAYER::PLAYER_ID(), 22)) || func_310())
	{
		return 1;
	}
	if (func_307())
	{
		func_306(22);
		return 1;
	}
	return 0;
}

void func_306(int iParam0)
{
	MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_4), iParam0);
}

int func_307()
{
	if (func_33(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_26() && !func_309()) || func_22(PLAYER::PLAYER_ID(), 21)) || func_22(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_308(27);
		}
	}
	return 0;
}

void func_308(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_4), iParam0);
}

bool func_309()
{
	return Global_1312436.f_1;
}

bool func_310()
{
	return func_256(390, -1);
}

int func_311()
{
	return 0;
}

void func_312()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_354())
	{
		return;
	}
	if (func_353())
	{
		func_346();
	}
	if (func_345())
	{
		func_344();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!MISC::IS_BIT_SET(Local_86.f_1, 2) && !MISC::IS_BIT_SET(Local_86.f_1, 4)) && !MISC::IS_BIT_SET(Local_86.f_1, 3))
	{
		if (MISC::IS_BIT_SET(Local_86.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_86.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_86.f_10)
			{
				func_336(101, sVar0, sVar1, func_338(), func_337(PLAYER::PLAYER_ID()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_335(87, func_37(), -1, sVar1, sVar0, 1, -1, 2, 0);
			}
		}
		else if (func_334() != PLAYER::PLAYER_ID())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_86.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_86.f_10)
			{
				func_336(101, sVar0, sVar1, func_338(), func_337(PLAYER::PLAYER_ID()), func_334(), func_37(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_333(91, func_334(), func_37(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_86.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_86.f_10)
			{
				func_336(101, "GB_WINNER", sVar1, func_338(), func_337(PLAYER::PLAYER_ID()), func_37(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_335(87, func_37(), -1, sVar1, "GB_WINNER", 1, -1, 2, 0);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_86.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_314(88, sVar0, sVar1, 1, -1, 2, 1, 0);
		if (MISC::IS_BIT_SET(Local_86.f_1, 4) || func_31(func_37(), 1, 0))
		{
			if (PLAYER::PLAYER_ID() == func_63())
			{
				Var2.f_10 = func_63();
				Var2.f_2 = 975775575;
				func_313(Var2, func_46(func_37()));
			}
		}
	}
}

void func_313(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 153488394;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_314(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_332(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_330(&(Var0.f_69), iParam7);
	}
	return func_315(&Var0);
}

int func_315(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_329(uParam0, uParam0->f_17);
	func_326(uParam0);
	if (func_90())
	{
		func_326(uParam0);
	}
	if (func_325(uParam0->f_1))
	{
		func_318();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_317(uParam0->f_69, 8192))
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
				func_318();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_330(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_317(uParam0->f_69, 128))
			{
				if (func_316(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_330(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_316(int iParam0)
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

bool func_317(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_318()
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
	func_319();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_319()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_323(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_320(&(Global_2441237.f_3165.f_1), 1);
}

void func_320(var uParam0, int iParam1)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_322(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_321(0);
}

void func_321(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_322(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77496, 0);
}

void func_323(var uParam0)
{
	func_324(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_324(var uParam0)
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

int func_325(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_326(var uParam0)
{
	if (func_328(uParam0->f_1))
	{
		uParam0->f_72 = func_327();
	}
}

int func_327()
{
	return 21;
}

int func_328(int iParam0)
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

void func_329(var uParam0, int iParam1)
{
	if (func_328(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_316(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_66(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_330(var uParam0, int iParam1)
{
	func_331(uParam0, iParam1);
}

void func_331(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_332(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_333(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_332(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_315(&Var0);
}

int func_334()
{
	return Local_86.f_3;
}

int func_335(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_332(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_330(&(Var0.f_69), iParam8);
	}
	return func_315(&Var0);
}

int func_336(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_332(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_330(&(Var0.f_69), 4);
	return func_315(&Var0);
}

int func_337(int iParam0)
{
	int iVar0;
	
	iVar0 = func_84(iParam0);
	if (iVar0 != -1)
	{
		return func_82(iVar0);
	}
	return 1;
}

char* func_338()
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_27(PLAYER::PLAYER_ID());
	if (iVar0 != func_10())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_36(iVar0, 28) || func_36(PLAYER::PLAYER_ID(), 28)) || func_343(iVar0)) && !func_342(iVar0))
			{
				return func_340(iVar0, 0);
			}
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_340(iVar0, 0);
			}
		}
		sVar1 = func_339(&(Global_1630816[iVar0 /*597*/].f_11.f_105));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_340(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

var func_339(var uParam0)
{
	return uParam0;
}

char* func_340(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_341();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_341()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_342(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_184(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_184(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_344()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_330(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

bool func_345()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

void func_346()
{
	if (!func_352())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_347();
}

void func_347()
{
	func_349();
	func_348(0);
}

void func_348(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_349()
{
	if (!func_351())
	{
	}
	if (func_352())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_350();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_350()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_351()
{
	if (!func_352())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_350();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_352()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_353()
{
	return func_352();
}

int func_354()
{
	if (!func_355(1, 1, 1, 0) || func_638())
	{
		return 1;
	}
	return 0;
}

int func_355(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_47(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_22(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_22(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_406(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_404(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (func_402())
	{
		return 0;
	}
	if (func_401())
	{
		return 0;
	}
	if (func_400())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_398(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_396())
	{
		return 0;
	}
	if (func_22(PLAYER::PLAYER_ID(), 0) || func_22(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_22(PLAYER::PLAYER_ID(), 12) || func_22(PLAYER::PLAYER_ID(), 14)) || func_22(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_393(PLAYER::PLAYER_ID(), 0, -1))
	{
		if (!func_365())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_364())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_363(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_362())
	{
		return 0;
	}
	if (func_361(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_360(PLAYER::PLAYER_ID()) && func_59(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_359())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_358(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_357(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_133(PLAYER::PLAYER_ID()))
	{
		if (func_356(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_55())
	{
		return 0;
	}
	return 1;
}

int func_356(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_357(int iParam0)
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

int func_358(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_359()
{
	return Global_1683970.f_4477 != -1;
}

int func_360(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_361(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_362()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_363(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873, 2);
}

bool func_364()
{
	return Global_99422.f_364 > 0;
}

int func_365()
{
	int iVar0;
	
	iVar0 = func_32(PLAYER::PLAYER_ID());
	if (((func_392(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_29) || func_391(PLAYER::PLAYER_ID())) || func_390(PLAYER::PLAYER_ID())) || func_385(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_383(PLAYER::PLAYER_ID()))
	{
		if (func_130(iVar0) || func_382(iVar0))
		{
			return 1;
		}
	}
	if (func_381(PLAYER::PLAYER_ID()))
	{
		if (func_382(iVar0))
		{
			return 1;
		}
	}
	if (func_380(PLAYER::PLAYER_ID()))
	{
		if (func_118(iVar0))
		{
			return 1;
		}
	}
	if (func_379(PLAYER::PLAYER_ID()))
	{
		if (func_117(iVar0))
		{
			return 1;
		}
	}
	if (func_378(PLAYER::PLAYER_ID()))
	{
		if (func_116(iVar0))
		{
			return 1;
		}
	}
	if (func_377(PLAYER::PLAYER_ID()))
	{
		if (func_376(iVar0))
		{
			return 1;
		}
	}
	if (func_375(PLAYER::PLAYER_ID(), 0))
	{
		if (func_374(iVar0))
		{
			if (func_61(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_373(PLAYER::PLAYER_ID()))
	{
		if (func_108(iVar0))
		{
			return 1;
		}
		if (func_107(iVar0))
		{
			return 1;
		}
		if (func_372())
		{
			return 1;
		}
	}
	if (func_371(PLAYER::PLAYER_ID()))
	{
		if (func_370())
		{
			return 1;
		}
	}
	if (func_369(PLAYER::PLAYER_ID()))
	{
		if (func_107(iVar0))
		{
			return 1;
		}
	}
	if (func_368(PLAYER::PLAYER_ID()))
	{
		if (func_106(iVar0))
		{
			return 1;
		}
	}
	if (func_367(PLAYER::PLAYER_ID()))
	{
		if (func_366(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_367(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_10())
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_370()
{
	return Global_2544210.f_6695;
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_372()
{
	return Global_2544210.f_6694;
}

int func_373(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_375(int iParam0, bool bParam1)
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
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_10())
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_383(int iParam0)
{
	if (func_384(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_384(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_385(int iParam0)
{
	if (func_386(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_387(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_387(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_387(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_10())
	{
		if (!func_389(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590744)
			{
				if (MISC::IS_BIT_SET(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_388(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_388(int iParam0)
{
	if (iParam0 != func_10())
	{
		return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_10())
	{
		return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_390(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_392(int iParam0)
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

int func_393(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_394(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return iParam0;
	}
	if (func_395(iParam0) != -1)
	{
		iVar0 = func_58(func_395(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_28(iParam0, 0))
			{
				return func_27(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_10();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_10();
}

int func_395(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

int func_396()
{
	if (func_397() == 0)
	{
		return 1;
	}
	return 0;
}

int func_397()
{
	return Global_1312485.f_18;
}

bool func_398(int iParam0)
{
	return func_399(iParam0);
}

bool func_399(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

bool func_400()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_192 != 0;
}

bool func_401()
{
	return Global_1312902;
}

bool func_402()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 5;
}

bool func_403()
{
	return MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_36.f_18, 0);
}

int func_404(int iParam0)
{
	if (func_405(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_398(iParam0))
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

bool func_406(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590908[iParam0 /*874*/].f_139, 22);
}

void func_407(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_408(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			Global_2544210.f_5191.f_386 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
	}
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_27(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_27(iParam1);
		}
	}
	return 0;
}

void func_409(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_531(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_529() || iParam2 == 28)
	{
		if (func_484(iParam1, iParam2, uParam3, Global_1574200, 0, func_527(), sParam7))
		{
			func_483(1);
			if ((!func_482() && !func_481()) || MISC::IS_BIT_SET(Global_2544210.f_4655, 1))
			{
				if (func_480())
				{
					func_479();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_478(1);
						Global_1574200 = 0;
						iVar54 = -1;
						if (Global_1574421 != 1)
						{
							func_477(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_19(iVar35, 0))
									{
										if ((func_473(iVar35) || Global_2426865[iVar35 /*449*/].f_245 != -1) || func_30(iVar35))
										{
											iVar44 = iVar35;
											if (func_29(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_472(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_470(PLAYER::PLAYER_ID(), 0) && func_32(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_469())
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_10();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_468(iVar35) && func_464(iVar35, iParam2)) && func_9(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590908[iVar44 /*874*/].f_205.f_6;
								Var38 = { func_459(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_184(iVar35) };
								iVar37 = func_453(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574200++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_469())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_448(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_447(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_446(iVar35, 0);
								if (bVar34)
								{
									if (func_28(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_445(iParam5))
								{
									func_444(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_444(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_9(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_10();
							}
							if (func_468(iVar35))
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590908[iVar44 /*874*/].f_205.f_6;
									Var38 = { func_459(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_184(iVar35) };
									iVar37 = func_453(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574200++;
									iVar51 = func_446(iVar35, 1);
									if (bVar34)
									{
										if (func_28(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_424(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_421(uParam3, iParam1, iParam2);
						}
						func_420(&(uParam3->f_21));
						func_419();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_418(uParam3, iParam1);
							func_417(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_418(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_413(uParam3))
						{
							Global_1574421 = 1;
						}
						func_410(uParam3);
						if (Global_1574421 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574421 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_419();
			func_478(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_410(var uParam0)
{
	if (!func_412(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_420(&(uParam0->f_21));
		func_411(0);
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574421 != 2)
		{
			Global_1574421 = 2;
		}
	}
	else
	{
		switch (Global_1574421)
		{
			case 0:
				Global_1574421 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

bool func_412(var uParam0)
{
	return uParam0->f_1;
}

int func_413(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_10() && func_9(iVar15, 0, 1))
	{
		Var2 = { func_184(iVar15) };
		iVar1 = func_416(uParam0, uParam0->f_37);
		if (func_415(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_414(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_414(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_414(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_414(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_414(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_414(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_414(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_415(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_416(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_417(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_418(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_419()
{
	if (Global_1574421 != 0)
	{
		Global_1574421 = 0;
	}
}

void func_420(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_421(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_423(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_422(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590908[iVar0 /*874*/].f_205.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_422(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_423(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_424(int iParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_443() && iParam4 < func_442())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_441("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_441(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_441("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_441("");
			if (uParam3->f_108 == 6)
			{
				func_441("");
			}
			else
			{
				func_441(&sParam5);
			}
			func_429(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_428(uParam3))
			{
				func_427("DPAD_FRIEND");
			}
			else if (func_426(uParam3))
			{
				func_427("DPAD_FRIEND");
			}
			else if (func_425(uParam3))
			{
				func_427("DPAD_CREW");
			}
			else
			{
				func_427("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_425(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_426(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_427(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_428(var uParam0)
{
	if (func_426(uParam0) && func_425(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_429(var uParam0, int iParam1)
{
	if (func_440(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_433(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2426865[iParam1 /*449*/].f_426, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_430())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_430()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_431() || func_92())
		{
			return 1;
		}
	}
	return 0;
}

int func_431()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_92();
	}
	return func_432(Global_4456448.f_85535);
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4993[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_433(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_434()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_434()
{
	if (func_439(PLAYER::PLAYER_ID()) || func_438())
	{
		if (!func_435(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_435(int iParam0)
{
	if (func_437(iParam0) == 236 || func_437(iParam0) == 150)
	{
		return func_436(iParam0);
	}
	return 0;
}

int func_436(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_437(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/];
	}
	return -1;
}

int func_438()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (func_430())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_29(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_434()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_441(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_442()
{
	int iVar0;
	
	if (Global_1574202)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_443()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574202)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_444(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_443() && iParam3 < func_442())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574202)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574421 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_441("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_427(sParam16);
				}
				else
				{
					func_441(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_441("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_469())
				{
					func_441("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_427(&(uParam2->f_104));
					}
					else
					{
						func_441("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_441("");
				}
				if (uParam2->f_108 == 6)
				{
					func_441("");
				}
				else
				{
					func_441(&sParam4);
				}
				func_429(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_441("");
					func_441("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_428(uParam2))
				{
					func_427("DPAD_FRIEND");
				}
				else if (func_426(uParam2))
				{
					func_427("DPAD_FRIEND");
				}
				else if (func_425(uParam2))
				{
					func_427("DPAD_CREW");
				}
				else
				{
					func_427("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_445(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_439(iParam0)) && !func_133(iParam0))
	{
		iVar0 = func_327();
	}
	iVar1 = func_84(iParam0);
	if (!iVar1 == -1)
	{
		return func_82(iVar1);
	}
	return iVar0;
}

char* func_447(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_448(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_452(iParam3))
	{
		*fParam1 = (func_449(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_445(iParam3))
	{
		*fParam1 = (func_449(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_449(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_451(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_450(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_450(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_451(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = func_456(iParam0);
	if (iVar0 == -1)
	{
		func_454(iParam0, 1);
		return 0;
	}
	Global_1391551[iVar0 /*5*/].f_4 = 1;
	return Global_1391551[iVar0 /*5*/].f_2;
}

void func_454(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_456(iParam0) != -1)
	{
		return;
	}
	if (Global_1391714)
	{
		if (iParam0 == Global_1391714.f_1)
		{
			return;
		}
	}
	if (func_455(iParam0))
	{
		return;
	}
	if (Global_1391752 >= 32)
	{
		return;
	}
	Global_1391719[Global_1391752] = iParam0;
	Global_1391752++;
	if (bParam1)
	{
	}
}

int func_455(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391752)
	{
		if (Global_1391719[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1391712 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1391712)
	{
		if (Global_1391551[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1391551[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_457(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_457(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1391712)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1391551[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1391551[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1391551[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1391551[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1391712)
	{
		Global_1391551[iVar32 /*5*/] = { Global_1391551[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_458(&(Global_1391551[iVar32 /*5*/]));
	Global_1391712 = (Global_1391712 - 1);
}

void func_458(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_459(int iParam0)
{
	char cVar0[32];
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2518253 = { func_184(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_415(Global_2518253))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2518253))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_463(&Global_2518253))
		{
			Global_2518183 = { func_461(iParam0) };
			func_460(&Global_2518183, &cVar0);
		}
	}
	return cVar0;
}

void func_460(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_461(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_462(iParam0))
	{
		return Global_1312934[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_184(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_462(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_463(var* uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_467(iParam0) || func_466(iParam0)) || func_465(iParam0))
		{
			return 0;
		}
	}
	if (!func_406(iParam0))
	{
		return 0;
	}
	if ((!func_473(iParam0) && Global_2426865[iParam0 /*449*/].f_245 == -1) && !func_30(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_465(int iParam0)
{
	if (func_467(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 8);
}

int func_466(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 10) || MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 9));
	}
	return 0;
}

bool func_467(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_468(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_19(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590908[iVar0 /*874*/].f_139, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_469()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_437(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_133(PLAYER::PLAYER_ID()))
	{
		switch (func_32(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_435(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_471(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_471(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_122(iParam0, 0);
	return 0;
}

void func_472(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_19(iVar1, 0))
			{
				if ((func_473(iVar1) || Global_2426865[iVar1 /*449*/].f_245 != -1) || func_30(iVar1))
				{
					if (func_48(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_473(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_9(PLAYER::PLAYER_ID(), 0, 1))
	{
		return 0;
	}
	if (!func_474(iParam0))
	{
		return 0;
	}
	if ((NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_32(iParam0) == 233) || func_32(iParam0) == 271)
	{
		return 1;
	}
	return 0;
}

int func_474(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_475(PLAYER::PLAYER_ID());
	bVar1 = func_475(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_475(int iParam0)
{
	return func_476(&(Global_2426865[iParam0 /*449*/].f_435), 0);
}

bool func_476(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_477(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_478(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1379105.f_2 == 0)
		{
			Global_1379105.f_2 = 1;
		}
	}
	else if (Global_1379105.f_2 == 1)
	{
		Global_1379105.f_2 = 0;
	}
}

void func_479()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 1))
	{
		if (func_345())
		{
			func_344();
		}
	}
}

int func_480()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 0) && func_345())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4655, 1) && func_345())
	{
		return 1;
	}
	return 0;
}

int func_481()
{
	if (func_345())
	{
		if (func_316(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_482()
{
	if (func_345())
	{
		if (func_328(Global_2441237.f_2841[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_483(int iParam0)
{
	if (Global_1379105.f_1 != Global_1379105)
	{
		Global_1379105.f_1 = Global_1379105;
	}
	if (Global_1379105 != iParam0)
	{
		Global_1379105 = iParam0;
	}
}

int func_484(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_526(iParam1);
	fVar7 = func_525();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_524())
		{
			if (func_523() > 0 && Global_1574202)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_513())
		{
			func_512(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4658, 26))
	{
		func_512(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_412(&(uParam2->f_19)))
	{
		if (func_523() == 1)
		{
			func_511(bVar6, iParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_512(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2544210.f_4659), 5);
		}
	}
	if (func_412(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_523() == 0 && !bParam5))
		{
			func_512(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_510();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_510();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_511(bVar6, iParam0, 0))
				{
					func_477(iParam0, 0, 0);
					sVar4 = func_508(iParam1, &(Global_4456448.f_85542), bParam4);
					Var0 = { func_506(iParam1) };
					if (bParam4)
					{
						func_503(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_496(iParam0, func_500(uParam2), func_497(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_492(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_490(iParam0, sVar9, func_491(), -1);
					}
					else if (func_430())
					{
						uParam2->f_34 = Global_1574201;
						func_503(iParam0, sVar4, &Var0, 1, -1, Global_1574201, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_485(iParam1);
						uParam2->f_34 = Global_1574201;
						func_503(iParam0, sVar4, "", 0, iVar8, Global_1574201, 1);
					}
					else
					{
						iVar8 = func_485(iParam1);
						func_503(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574200 = uParam3;
				Global_1574199 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574201)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_485(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_489())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 41:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_488(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_487(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_486(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_205())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_486(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 4;
}

bool func_487(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

bool func_488(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_489()
{
	return Global_4456448.f_1 == 0;
}

void func_490(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_427(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_427("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_491()
{
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_492(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_32(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_494())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_214(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_214(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_493(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_182))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_493(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_494()
{
	return (func_495() && func_65(func_63()));
}

bool func_495()
{
	return Global_1590908[PLAYER::PLAYER_ID() /*874*/] == 148;
}

void func_496(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_427(sParam1);
		}
		else if (func_437(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_427("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_497(var uParam0)
{
	int iVar0;
	
	iVar0 = func_437(PLAYER::PLAYER_ID());
	if (func_499())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_498())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_498()
{
	if (func_437(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2544210.f_5112;
	}
	return -1;
}

bool func_499()
{
	return Global_1590781;
}

char* func_500(var uParam0)
{
	int iVar0;
	
	iVar0 = func_437(PLAYER::PLAYER_ID());
	if (func_499())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_502() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_502() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_498())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_501() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_501()
{
	return Global_2544210.f_5115;
}

int func_502()
{
	if (func_437(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2544210.f_5110;
	}
	return -1;
}

void func_503(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_441(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_427(sParam1);
		}
		if (func_524() && iParam6)
		{
			if (func_505())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_427(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_504(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_90())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_504(int iParam0)
{
	if (func_488(iParam0) || func_487(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_505()
{
	return Global_1574202;
}

struct<4> func_506(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_507(PLAYER::PLAYER_ID()) || func_486(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_527, 16);
			break;
	}
	if (func_430() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_527, 16);
	}
	return Var0;
}

bool func_507(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 5;
}

char* func_508(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_430() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_509();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574440 == 1)
		{
			Global_1574440 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574440 == 0)
		{
			Global_1574440 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_509()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_510()
{
	Global_42937 = 1;
}

bool func_511(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_512(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574200 = 0;
	func_419();
	Global_1574199 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_412(&(uParam1->f_19)))
		{
			func_420(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2544210.f_4659), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_513()
{
	if (func_522())
	{
		return 0;
	}
	if (func_402())
	{
		return 0;
	}
	if (!func_520())
	{
		return 0;
	}
	if (!func_396())
	{
		return 0;
	}
	if (func_519(8, -1))
	{
		return 0;
	}
	if (func_523() == 2)
	{
		return 0;
	}
	if (Global_2544210.f_4610)
	{
		return 0;
	}
	if (func_400())
	{
		return 0;
	}
	else if (!func_405(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_518(1) || func_516(1)) || Global_22531.f_124) || Global_22531)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_515() && Global_1702509 == 2)
	{
		return 0;
	}
	if (func_17(PLAYER::PLAYER_ID()) && !func_515())
	{
		return 0;
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (Global_1669339)
	{
		return 0;
	}
	if (func_215(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (Global_1372046)
	{
		return 0;
	}
	if ((Global_1696742.f_718.f_5 || Global_1699568.f_718.f_5) || Global_1695770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1703513.f_724.f_5 || Global_1703513.f_744.f_724.f_5) || Global_1703513.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1710289.f_726.f_5)
	{
		return 0;
	}
	if (func_514(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1372082 || Global_1372083) || Global_1372084)
	{
		return 0;
	}
	return 1;
}

bool func_514(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2426865[iParam0 /*449*/].f_319.f_4, 6);
}

bool func_515()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1702510, 0));
}

int func_516(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_517(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22531.f_130)
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

int func_517(int iParam0)
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

bool func_518(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22531.f_4 && Global_22531.f_104 == 4);
	}
	return Global_22531.f_4;
}

bool func_519(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1379108.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1379108.f_1048, iParam0);
}

int func_520()
{
	if (func_521())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_521()
{
	return Global_1312458;
}

bool func_522()
{
	return MISC::GET_GAME_TIMER() <= Global_22670.f_6135 + 100;
}

int func_523()
{
	return Global_1379108.f_68;
}

int func_524()
{
	if (Global_1574201 > 16)
	{
		return 1;
	}
	return 0;
}

float func_525()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_526(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_527()
{
	if (func_528(PLAYER::PLAYER_ID()))
	{
		return Global_1319186;
	}
	return 0;
}

int func_528(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_19(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_529()
{
	if (func_527())
	{
		return 1;
	}
	if (func_465(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_499())
	{
		return 1;
	}
	if (func_439(PLAYER::PLAYER_ID()))
	{
		switch (func_437(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_530(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_530(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_530(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_530(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 4);
}

int func_531(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_439(PLAYER::PLAYER_ID()) && !func_133(PLAYER::PLAYER_ID())) && !func_435(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_33(PLAYER::PLAYER_ID(), 0) && func_133(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_532(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_532(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_439(iParam0) && !func_467(iParam0)) && !MISC::IS_BIT_SET(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_133(iParam0);
	uVar3 = func_26();
	bVar4 = func_305();
	if ((bVar1 && (func_436(iParam0) || func_534(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_35(iParam0)) && !func_533(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_533(int iParam0)
{
	return func_36(iParam0, 19);
}

int func_534(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

void func_535()
{
	if (func_9(func_37(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_37()), false))
	{
		func_536(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_37()), true), &uLocal_85, 1140457472, 1144750080, 0);
	}
}

void func_536(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_439(PLAYER::PLAYER_ID()) && !func_467(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1, 8)) && (func_436(PLAYER::PLAYER_ID()) || func_534(PLAYER::PLAYER_ID()))) || func_578(Param1))
	{
		return;
	}
	Global_1681713 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	func_574(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_35(PLAYER::PLAYER_ID()) || func_34(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_22(PLAYER::PLAYER_ID(), 21) || func_22(PLAYER::PLAYER_ID(), 25)))
		{
			func_573(Param1, 1, 0);
		}
		if (!*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_572(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_571(iParam0));
				if (func_570(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1681713.f_3), 0);
				}
			}
			if (func_569(iParam0))
			{
				fVar1 = func_568(iParam0);
				if (fVar1 != 1f)
				{
					func_565(fVar1);
					MISC::SET_BIT(&(Global_1681713.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_564(iParam0) && func_35(PLAYER::PLAYER_ID()))
				{
					func_562(1);
					func_561(2);
				}
			}
			func_306(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_36(PLAYER::PLAYER_ID(), 19))
			{
				func_308(19);
			}
		}
		if (*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_572(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1681713.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1681713.f_3), 0);
				}
			}
			if (func_569(iParam0))
			{
				func_560();
				MISC::CLEAR_BIT(&(Global_1681713.f_3), 1);
			}
			if (iParam7 && !func_439(PLAYER::PLAYER_ID()))
			{
				if (func_32(PLAYER::PLAYER_ID()) != 152)
				{
					func_538();
				}
			}
			if (func_215(2))
			{
				func_562(0);
				func_537(2);
			}
		}
	}
}

void func_537(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_538()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_24), &Global_2409343, 2);
	MISC::_COPY_MEMORY(&(Global_2405077.f_26), &Global_2409345, 19);
	func_558();
	func_541(1, 1, 0);
	func_539();
}

void func_539()
{
	func_540(0, 0);
}

void func_540(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_541(bool bParam0, bool bParam1, bool bParam2)
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
		func_557();
	}
	if (!bParam2)
	{
		func_544(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_543(0);
	func_542();
}

void func_542()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_543(bool bParam0)
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

void func_544(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_556())
		{
			func_555();
		}
		Global_2405077.f_713.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_553();
		func_548(8, 0, 0, 0, 0);
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
		func_545();
	}
}

void func_545()
{
	if (func_556() && !func_547())
	{
		func_555();
	}
	if (func_547())
	{
		func_546();
	}
	else
	{
		func_553();
		func_548(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_546()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_547()
{
	if ((Global_2405077.f_1751 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_1232.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_548(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_10())
	{
		if (MISC::IS_BIT_SET(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_549())
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

int func_549()
{
	if ((((((func_32(PLAYER::PLAYER_ID()) == 229 || func_32(PLAYER::PLAYER_ID()) == 191) || func_552()) || func_551()) || func_357(PLAYER::PLAYER_ID())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_550(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_550(int iParam0)
{
	if (func_436(iParam0))
	{
		return 1;
	}
	if (func_133(iParam0))
	{
		return 1;
	}
	return 0;
}

var func_551()
{
	return Global_1574420;
}

int func_552()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_553()
{
	if (func_556() && !func_547())
	{
		func_555();
	}
	func_554();
	Global_2405077.f_713 = 0;
}

void func_554()
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

void func_555()
{
	if (func_547())
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

int func_556()
{
	if ((Global_2405077.f_1752 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405077.f_713.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_557()
{
	MISC::_COPY_MEMORY(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_558()
{
	func_559();
}

void func_559()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

void func_560()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2544210.f_5186 < 1f)
		{
			return;
		}
	}
	Global_2544210.f_5187 = -1;
	Global_2544210.f_5186 = 1f;
}

void func_561(int iParam0)
{
	MISC::SET_BIT(&(Global_2544210.f_5191.f_46), iParam0);
}

void func_562(int iParam0)
{
	if (func_563() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_563()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_565(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_566())
	{
		return;
	}
	fVar0 = (Global_2544210.f_5186 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2544210.f_5187))
	{
		if (!Global_2544210.f_5187 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2544210.f_5186 = fParam0;
	Global_2544210.f_5187 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_566()
{
	switch (func_16())
	{
		case 0:
			return func_567();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_567()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_568(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	if (func_299(iParam0) == 0)
	{
		return 0f;
	}
	return 1f;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_571(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_573(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405077.f_45.f_49 = { Param0 };
	Global_2405077.f_45.f_52 = iParam3;
	Global_2405077.f_45.f_53 = iParam4;
}

void func_574(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_577(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_575();
	}
}

void func_575()
{
	if (!func_576(PLAYER::PLAYER_ID()))
	{
		func_306(25);
	}
}

bool func_576(int iParam0)
{
	return func_36(iParam0, 25);
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12700;
		
		case 142:
			return Global_262145.f_12688;
		
		case 157:
			return Global_262145.f_12655;
		
		case 159:
			return Global_262145.f_12638;
		
		case 162:
			return Global_262145.f_12749;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_578(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_579()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_580(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_580(int iParam0)
{
	struct<6> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == PLAYER::GET_PLAYER_PED(func_37()))
		{
			if (Var0.f_5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_581()
{
	if (!MISC::IS_BIT_SET(iLocal_84, 3))
	{
		if (func_9(func_37(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_37()))
		{
			func_599(func_37(), func_600(6), 1, 0);
			func_597(func_37(), 432, 1, 0);
			func_595(func_37(), 1, 1, 0);
			func_594(func_37(), Global_262145.f_12533, 1, 0);
			func_591(func_37(), 1, 0);
			if (func_42() <= 1)
			{
				func_582(func_37(), 1, 7000);
			}
			MISC::SET_BIT(&iLocal_84, 3);
		}
	}
}

void func_582(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2441237)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2416162[iVar0]))
		{
			MISC::SET_BIT(&(Global_2416162.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2416162.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2416162[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2416162[iVar0], 250);
			func_583(iParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2416162.f_375), iVar0);
			}
			else
			{
				Global_2416162.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2416162.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2416162.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2416162.f_375), iVar0);
			}
			else
			{
				Global_2416162.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2416162.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2416162.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2416162[iVar0]))
		{
			func_583(iParam0);
			HUD::SET_BLIP_FLASHES(Global_2416162[iVar0], false);
		}
	}
}

void func_583(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2416162[iVar0]))
		{
			Global_2416162.f_1504[iVar0] = func_584(iParam0);
			HUD::SET_BLIP_PRIORITY(Global_2416162[iVar0], Global_2416162.f_1504[iVar0]);
		}
	}
}

int func_584(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2416162[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2416162[iVar0]);
			if (MISC::IS_BIT_SET(Global_2416162.f_386, iVar0) || MISC::IS_BIT_SET(Global_2416162.f_385, iVar0))
			{
				return 1;
			}
			else if ((MISC::IS_BIT_SET(Global_2416162.f_371, iVar0) || MISC::IS_BIT_SET(Global_2416162.f_370, iVar0)) || MISC::IS_BIT_SET(Global_2416162.f_388, iVar0))
			{
				return func_588(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_588(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_588(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2441237))
						{
							return func_588(6);
						}
						else
						{
							return func_588(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2441237))
						{
							return func_588(6);
						}
						else
						{
							return func_588(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_81(Global_2441237, iParam0, -2, 0))
						{
							return func_588(6);
						}
						else
						{
							return func_588(5);
						}
						break;
					
					case 303:
					case 418:
						return func_588(10);
						break;
					
					case 364:
						if (func_586(Global_2441237, iParam0, 1))
						{
							return func_588(10);
						}
						else
						{
							return func_588(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_588(10);
						break;
					
					case 417:
						if ((func_373(iParam0) || func_585(iParam0)) || func_371(iParam0))
						{
							if (func_586(Global_2441237, iParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_586(Global_2441237, iParam0, 1))
						{
							return func_588(6);
						}
						else
						{
							return func_588(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_586(Global_2441237, iParam0, 1))
						{
							return func_588(6);
						}
						else
						{
							return func_588(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_585(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_58(Global_2426865[iParam0 /*449*/].f_319.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_586(int iParam0, int iParam1, bool bParam2)
{
	if (func_66(iParam0, -2, 0, 0, 0) == func_66(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_587(func_66(iParam0, -2, 0, 0, 0)) && func_587(func_66(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_587(int iParam0)
{
	if (iParam0 == func_72(1) || iParam0 == func_72(0))
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_590())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_589(iParam0);
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_590()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2441237);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return MISC::IS_BIT_SET(Global_4456448.f_594[iVar0 /*16832*/].f_10556, 4);
	}
	return 0;
}

void func_591(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_593(iParam0))
	{
		return;
	}
	func_592(&(Global_2416162.f_723[iParam0]), &(Global_2416162.f_1086[iParam0]), &(Global_2416162.f_393), bParam1, iParam0, bParam2, &uVar0);
}

int func_592(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_593(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_566())
	{
		return 1;
	}
	return 0;
}

void func_594(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_593(iParam0))
	{
		return;
	}
	if (func_592(&(Global_2416162.f_756[iParam0]), &(Global_2416162.f_1119[iParam0]), &(Global_2416162.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_558[iParam0] = fParam1;
		}
	}
}

void func_595(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_593(iParam0))
	{
		return;
	}
	if (func_592(&(Global_2416162.f_822[iParam0]), &(Global_2416162.f_1185[iParam0]), &(Global_2416162.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_596(iParam0, bParam2);
	}
}

void func_596(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2416162.f_368), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2416162.f_368), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2416162[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416162[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416162[iParam0], true);
		}
	}
}

void func_597(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_593(iParam0))
	{
		return;
	}
	if (func_592(&(Global_2416162.f_591[iParam0]), &(Global_2416162.f_954[iParam0]), &(Global_2416162.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_598();
		}
	}
}

void func_598()
{
	Global_2416162.f_1651 = 1;
}

void func_599(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_593(iParam0))
	{
		return;
	}
	if (func_592(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = uParam1;
		}
	}
}

int func_600(int iParam0)
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

void func_601()
{
	char* sVar0;
	
	if (func_354())
	{
		if (func_353())
		{
			func_346();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_86.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_608(sVar0))
	{
		func_602(sVar0, func_37(), 1, 0);
	}
}

void func_602(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_603(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_603(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (func_607(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312603.f_54;
	func_347();
	Global_1312603 = 9;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = iParam3;
	Global_1312603.f_56 = iParam3;
	Global_1312603.f_54 = uVar0;
	func_606();
	func_605(bParam2);
	func_604();
	return 1;
}

void func_604()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_605(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_606()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_607(char* sParam0, char* sParam1)
{
	if (!func_352())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

int func_608(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_609(sParam0);
}

bool func_609(char* sParam0)
{
	if (!func_352())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_610(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_610(char* sParam0)
{
	if (!func_352())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

void func_611()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_354())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_86.f_1, 0))
	{
		if (func_412(&(Local_86.f_4)))
		{
			iVar1 = (func_5() - func_616(&(Local_86.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_615(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_612(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_612(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_612(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_614(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_613(7, iVar0);
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

void func_613(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_614(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1380638.f_6736[iParam0], iParam1);
}

int func_615(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_616(var uParam0, bool bParam1, bool bParam2)
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

void func_617()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_354())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() != func_63())
	{
		if (MISC::IS_BIT_SET(iLocal_84, 0))
		{
			if (!func_345())
			{
				sVar0 = "GBTER_START";
				if (func_6(PLAYER::PLAYER_ID(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_86.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_619(sVar0, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
				func_618(1);
				MISC::SET_BIT(&iLocal_84, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_86.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_344();
			func_335(86, func_37(), -1, sVar2, sVar1, 1, -1, 2, 0);
			MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_84, 0))
	{
		if (!func_345())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_86.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_619(sVar3, PLAYER::GET_PLAYER_NAME(func_37()), 0, -1);
			MISC::SET_BIT(&iLocal_84, 2);
			func_618(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_86.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_344();
		func_335(86, func_37(), -1, sVar5, sVar4, 1, -1, 2, 0);
		MISC::SET_BIT(&(Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	}
	MISC::SET_BIT(&iLocal_84, 0);
}

void func_618(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_214(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_345())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_619(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_620(int iParam0)
{
	Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = iParam0;
}

void func_621(bool bParam0)
{
	if (bParam0)
	{
		if (!func_36(PLAYER::PLAYER_ID(), 9))
		{
			if (func_532(PLAYER::PLAYER_ID()) != 0)
			{
				func_306(9);
			}
		}
	}
	else if (func_36(PLAYER::PLAYER_ID(), 9))
	{
		func_308(9);
	}
}

void func_622(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 != iParam0)
	{
		func_636(-1);
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 = iParam0;
		if (func_635() != -1)
		{
			func_634(-1);
		}
		if (func_633() != -1)
		{
			func_632(-1);
		}
		func_631(iParam2);
		func_629(iParam0);
		if (!func_569(iParam0))
		{
			fVar0 = func_568(iParam0);
			if (fVar0 != 1f)
			{
				func_565(fVar0);
				MISC::SET_BIT(&(Global_1681713.f_3), 1);
			}
		}
		if (!func_572(iParam0) || iParam3)
		{
			if (func_570(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1681713.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_26())
		{
			func_306(27);
		}
		if (bParam1)
		{
			if (!func_305())
			{
				func_562(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2544210.f_4622, 1) || MISC::IS_BIT_SET(Global_2544210.f_4622, 4)) || MISC::IS_BIT_SET(Global_2544210.f_4622, 0))
			{
				func_99(6);
			}
			func_628();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_439(PLAYER::PLAYER_ID()) && func_35(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_1), 8);
		}
		func_624();
		if (func_623(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1681713.f_3), 6);
		}
		Global_2544210.f_6682 = 0;
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_624()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_627();
	iVar2 = func_27(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_48(iVar1, iVar2, 1) || func_625(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_625(int iParam0, int iParam1)
{
	if (func_28(iParam0, 1) && func_28(iParam1, 1))
	{
		return (func_626(iParam0) == func_27(iParam1) || func_626(iParam1) == func_27(iParam0));
	}
	return 0;
}

int func_626(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1630816[func_27(iParam0) /*597*/].f_11.f_459;
	}
	return func_10();
}

int func_627()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1630816[iVar1 /*597*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_628()
{
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 1))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 1);
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 4))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 4);
	}
	if (MISC::IS_BIT_SET(Global_2544210.f_4622, 6))
	{
		MISC::CLEAR_BIT(&(Global_2544210.f_4622), 6);
	}
	MISC::CLEAR_BIT(&(Global_2544210.f_4622), 0);
	MISC::CLEAR_BIT(&(Global_2544210.f_4622), 2);
	MISC::CLEAR_BIT(&(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_873), 17);
	if (Global_2544210.f_4624 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2544210.f_4624);
	}
	Global_2544210.f_4623 = 0;
}

void func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_128(3793, -1, 0);
	iVar1 = func_630(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_126(3793, iVar0, -1, 1, 0);
	}
}

int func_630(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1630816[iVar0 /*597*/].f_11.f_182 != iParam0)
	{
		Global_1630816[iVar0 /*597*/].f_11.f_182 = iParam0;
	}
}

void func_632(int iParam0)
{
	if (Global_2544210.f_5191.f_343 != iParam0)
	{
		Global_2544210.f_5191.f_343 = iParam0;
	}
}

int func_633()
{
	return Global_2544210.f_5191.f_343;
}

void func_634(int iParam0)
{
	if (Global_2544210.f_5191.f_342 != iParam0)
	{
		Global_2544210.f_5191.f_342 = iParam0;
	}
}

int func_635()
{
	return Global_2544210.f_5191.f_342;
}

void func_636(int iParam0)
{
	Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_32 = iParam0;
}

int func_637()
{
	return Local_97[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_638()
{
	if (func_639(151) || func_305())
	{
		return 1;
	}
	return 0;
}

int func_639(int iParam0)
{
	if (!func_145() && !func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_35(PLAYER::PLAYER_ID()))
		{
			if (func_305())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_640(int iParam0, int iParam1)
{
	Local_97[iParam0 /*4*/] = iParam1;
}

int func_641()
{
	return 1;
}

int func_642()
{
	return Local_86;
}

int func_643(int iParam0)
{
	return Local_97[iParam0 /*4*/];
}

int func_644()
{
	var uVar0;
	
	func_649(&uVar0);
	if (Global_1312878 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_648())
	{
		return 1;
	}
	if (Global_2465749)
	{
		return 1;
	}
	if (func_647())
	{
		return 1;
	}
	if (func_646(159))
	{
		if (!func_645())
		{
			return 1;
		}
	}
	if (func_646(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_566() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_566()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_645()
{
	return Global_2453009.f_698;
}

int func_646(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_647()
{
	return Global_2463497;
}

bool func_648()
{
	return Global_2453009.f_693;
}

void func_649(var uParam0)
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
					func_650(iVar0);
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

void func_650(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_9(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_651(iVar4, &bVar5))
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

int func_651(int iParam0, var uParam1)
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

void func_652()
{
	SYSTEM::WAIT(0);
}

void func_653()
{
	func_346();
	if (func_9(func_37(), 0, 1))
	{
		func_594(func_37(), 1f, 1, 0);
		func_45(func_46(func_37()), 0);
	}
	Global_1689697 = func_10();
	func_654(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_654(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1368721.f_1.f_108 != 0)
	{
		Global_1368721.f_1.f_108 = 0;
	}
	Global_1368721.f_1.f_109 = -1;
	Global_1368721.f_1.f_110 = -1;
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 167 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 168)
	{
		func_707();
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 4);
	}
	if ((func_131() && iParam1 != 0) && Global_262145.f_17160)
	{
		if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 190 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 192)
		{
			func_687(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 164 || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 208) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 250) || Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 != -1)
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574671.f_1, 14) && !func_439(PLAYER::PLAYER_ID()))
		{
			func_562(0);
		}
	}
	else if (func_685(PLAYER::PLAYER_ID()) != -1)
	{
		func_636(-1);
	}
	func_684(func_10());
	if (func_215(16))
	{
		func_537(16);
	}
	func_681(0);
	func_631(-1);
	func_680();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_677(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 5);
	}
	iVar1 = func_676();
	if ((func_471(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_675(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_130(iVar1))
	{
		func_672(-1, 1);
	}
	else if (((((func_671(iVar1) || func_670(iVar1)) || func_669(iVar1)) || func_118(iVar1)) || func_117(iVar1)) || func_116(iVar1))
	{
	}
	else
	{
		func_672(-1, 1);
	}
	func_308(19);
	func_308(20);
	func_308(21);
	func_308(22);
	func_308(27);
	func_537(3);
	func_537(4);
	func_537(7);
	func_668();
	if (func_35(PLAYER::PLAYER_ID()))
	{
		func_621(0);
	}
	func_308(29);
	Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 = func_10();
	if (Global_2544210.f_5191.f_42 != 0)
	{
		Global_2544210.f_5191.f_42 = 0;
	}
	if (bParam0)
	{
		func_538();
	}
	if (!func_439(PLAYER::PLAYER_ID()))
	{
		func_560();
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1681713.f_3, 8))
	{
		func_667("IMPEXP_SELFDES", 0);
		func_657("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 8);
	}
	func_655(iVar1, 0);
}

void func_655(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1681713.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_656(iParam0));
			MISC::SET_BIT(&(Global_1681713.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1681713.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_656(iParam0));
		MISC::CLEAR_BIT(&(Global_1681713.f_3), 9);
	}
}

char* func_656(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_657(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_659();
					Global_112293.f_14139[iVar0 /*104*/].f_99[Global_19798] = 0;
					if (func_658(iVar0))
					{
					}
					else
					{
						Global_112293.f_14139[iVar0 /*104*/].f_24 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_28 = 0;
						Global_112293.f_14139[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_112293.f_14139[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_658(int iParam0)
{
	if ((Global_112293.f_14139[iParam0 /*104*/].f_99[0] == 1 || Global_112293.f_14139[iParam0 /*104*/].f_99[1] == 1) || Global_112293.f_14139[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_659()
{
	if (func_666(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[0 /*29*/])
			{
				Global_19798 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[1 /*29*/])
			{
				Global_19798 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112293.f_28048[2 /*29*/])
			{
				Global_19798 = 2;
			}
			else
			{
				Global_19798 = 0;
			}
		}
	}
	else
	{
		Global_19798 = func_660();
		if (Global_19798 == 145)
		{
			Global_19798 = 3;
		}
		if (Global_77248)
		{
			Global_19798 = 3;
		}
		if (Global_19798 > 3)
		{
			Global_19798 = 3;
		}
	}
}

var func_660()
{
	func_661();
	return Global_112293.f_2361.f_539.f_4321;
}

void func_661()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_664(Global_112293.f_2361.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_663(PLAYER::PLAYER_PED_ID());
			if (func_662(iVar0) && (!func_666(14) || Global_111244))
			{
				if (Global_112293.f_2361.f_539.f_4321 != iVar0 && func_662(Global_112293.f_2361.f_539.f_4321))
				{
					Global_112293.f_2361.f_539.f_4322 = Global_112293.f_2361.f_539.f_4321;
				}
				Global_112293.f_2361.f_539.f_4323 = iVar0;
				Global_112293.f_2361.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112293.f_2361.f_539.f_4321 != 145)
			{
				Global_112293.f_2361.f_539.f_4323 = Global_112293.f_2361.f_539.f_4321;
			}
			return;
		}
	}
	Global_112293.f_2361.f_539.f_4321 = 145;
}

bool func_662(int iParam0)
{
	return iParam0 < 3;
}

int func_663(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_664(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_664(int iParam0)
{
	if (func_662(iParam0))
	{
		return func_665(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_665(int iParam0)
{
	return Global_1878[iParam0 /*29*/];
}

bool func_666(int iParam0)
{
	return Global_42009 == iParam0;
}

void func_667(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_112293.f_14139[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_112293.f_14139[iVar0 /*104*/]), sParam0))
			{
				if (Global_112293.f_14139[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_112293.f_14139[iVar0 /*104*/].f_24 = 1;
				if (Global_112293.f_14139[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_112293.f_14049[0 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_112293.f_14049[1 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_112293.f_14049[2 /*20*/].f_17 = 0;
					}
					if (Global_112293.f_14139[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_112293.f_14049[3 /*20*/].f_17 = 0;
					}
					Global_112293.f_14139[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_112293.f_14139[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_668()
{
	if (func_576(PLAYER::PLAYER_ID()))
	{
		func_308(25);
	}
}

int func_669(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_670(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

void func_672(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_676();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_62(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2519724.f_93[func_674(iParam0)] = 1;
			}
		}
		iVar0 = func_674(159);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(157);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(148);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(164);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(142);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(152);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(166);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(170);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(173);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(179);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(200);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(201);
		if (func_673(iVar0, Global_262145.f_12784, bParam1))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(182);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(183);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(185);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(186);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(180);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(195);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(197);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(198);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(207);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(208);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(209);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(214);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(215);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(216);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(217);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(218);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(219);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(220);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(221);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_673(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_36(PLAYER::PLAYER_ID(), 19) && !func_36(PLAYER::PLAYER_ID(), 20)) && !func_36(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2519724.f_93[iParam0] == 1 && func_412(&(Global_2519724[iParam0 /*2*/])))
	{
		if (func_616(&(Global_2519724[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2519724.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_674(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_675(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_676();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2519724.f_93[func_674(iParam0)] = 1;
		}
		iVar0 = func_674(155);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(163);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(160);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(153);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(162);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(154);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(171);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(172);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(199);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(194);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(193);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(210);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(205);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(189);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_674(211);
		if (func_673(iVar0, Global_262145.f_12785, 0))
		{
			func_420(&(Global_2519724[iVar0 /*2*/]));
			func_4(&(Global_2519724[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_676()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_677(int iParam0)
{
	if (!func_678(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_151[iParam0 /*3*/], func_679(), 0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_151[iParam0 /*3*/] = { func_679() };
	}
	if (!func_678(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_126[iParam0 /*3*/], func_679(), 0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_126[iParam0 /*3*/] = { func_679() };
	}
}

bool func_678(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_679()
{
	struct<3> Var0;
	
	return Var0;
}

void func_680()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573914 = { Var0 };
	Global_1573914.f_13 = func_10();
	if (MISC::IS_BIT_SET(Global_1573348, 3))
	{
		MISC::CLEAR_BIT(&Global_1573348, 3);
	}
}

void func_681(bool bParam0)
{
	if (bParam0)
	{
		if (!func_47(PLAYER::PLAYER_ID(), 14))
		{
			func_683(14);
		}
	}
	else if (func_47(PLAYER::PLAYER_ID(), 14))
	{
		func_682(14);
	}
}

void func_682(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_5), iParam0);
}

void func_683(int iParam0)
{
	MISC::SET_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_5), iParam0);
}

void func_684(int iParam0)
{
	if (func_29(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_459 != iParam0)
			{
				Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_459 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_685(int iParam0)
{
	if (func_686(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_32;
	}
	return -1;
}

int func_686(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_32 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_687(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_274(iParam0, iParam1) && func_706(iParam0, iParam1))
	{
		iVar0 = func_273(iParam0, iParam1);
		func_691(iVar0, bParam2, bParam3);
		func_688(iVar0, 1);
	}
}

void func_688(int iParam0, bool bParam1)
{
	if (!func_690(iParam0))
	{
		return;
	}
	func_257(func_689(iParam0), bParam1, -1, 1);
	Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_6 = bParam1;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_690(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_691(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_705(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_704(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2518510[iParam0];
		iVar0 = func_703(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1683820 = -1;
		}
		func_702(iParam0, 0, bParam2);
	}
	else if (func_700(iParam0, bParam2))
	{
		iVar0 = func_699(iVar2, 0);
		iVar3 = func_698(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_697(iVar2, bParam2);
		iVar5 = func_699(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_696(iVar2) && func_695(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_704(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_694(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_693(iParam0, (Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 - (func_697(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_699(iVar2, bParam2) / func_694(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_696(iVar2) && func_695(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_692(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_692(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_264(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590908[iParam0 /*874*/].f_267.f_259 = iParam2;
				}
				else
				{
					Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_693(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2)
	{
		Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_185[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_694(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_264(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_695(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_264(iParam1) && func_696(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_696(int iParam0)
{
	return func_157(iParam0) == 5;
}

int func_697(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_157(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_17129;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17134;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_17128;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17133;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_17127;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17132;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_17125;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17130;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_17126;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_17131;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21255;
				if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21256;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21239;
				if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21240;
				}
			}
			break;
	}
	return uVar0;
}

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_264(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/] == iParam1)
			{
				return Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_699(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_157(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_17110;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17119);
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17124);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_17111;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17118);
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17123);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_17112;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17117);
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17122);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_17113;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17115);
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17120);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_17114;
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_17116);
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_17121);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21252;
			}
			else
			{
				iVar0 = Global_262145.f_21236;
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21253);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21237);
				}
			}
			if (func_272(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21254);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21238);
				}
			}
			if (func_695(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_700(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_258(15384, -1, -1);
	}
	return func_258(func_701(iParam0), -1, -1);
}

int func_701(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_702(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		func_257(15384, bParam1, -1, 1);
		return;
	}
	func_257(func_701(iParam0), bParam1, -1, 1);
}

int func_703(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2518510[iParam0];
	iVar1 = func_705(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2518517;
	}
	if (func_696(iVar1))
	{
		if (func_695(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_704(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2518517 = iParam1;
		return;
	}
	Global_2518510[iParam0] = iParam1;
}

int func_705(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_264(Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/]))
	{
		uVar0 = Global_1590908[iParam0 /*874*/].f_267.f_185[iParam1 /*12*/];
	}
	return uVar0;
}

int func_706(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_274(iParam0, iParam1))
	{
		iVar0 = func_273(iParam0, iParam1);
		if (Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_4 > 0 && Global_1590908[iParam0 /*874*/].f_267.f_185[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_707()
{
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 28);
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 29);
	func_708(24);
}

void func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_7[iVar0]), iVar1);
}

int func_709(struct<21> Param0)
{
	func_761(func_762(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_758(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_86, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 129);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_710(0, 0, 0);
	return 1;
}

void func_710(int iParam0, int iParam1, bool bParam2)
{
	func_757();
	if (func_61(PLAYER::PLAYER_ID()))
	{
		func_716(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_715(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				MISC::SET_BIT(&Global_1681708, 0);
				break;
			}
	}
	if (!func_145() && !func_28(PLAYER::PLAYER_ID(), 1))
	{
		if (func_310())
		{
			func_561(3);
		}
	}
	func_561(4);
	if (func_101(0))
	{
		Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_57 = func_11();
	}
	if (func_98(iParam0))
	{
		func_714();
		Global_1681740.f_18 = func_713(func_63());
	}
	else if (func_119(func_685(PLAYER::PLAYER_ID())))
	{
		func_712();
		Global_1681794.f_18 = func_713(func_63());
	}
	if (bParam2)
	{
		if (!func_305())
		{
			func_562(1);
		}
	}
	func_711();
}

void func_711()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1368721.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1368721.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_712()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1681794 = { Var0 };
	Global_1681794.f_24 = 0;
	Global_1681794.f_25 = 0;
	Global_1681794.f_17 = 0;
}

int func_713(int iParam0)
{
	if (func_28(iParam0, 1))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_426;
	}
	return -1;
}

void func_714()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1681740 = { Var0 };
	Global_1681740.f_29 = 0;
	Global_1681740.f_30 = 0;
	Global_1681740.f_17 = 0;
}

int func_715(int iParam0, bool bParam1)
{
	return func_48(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_716(bool bParam0)
{
	int iVar0;
	
	func_708(33);
	func_708(34);
	func_708(35);
	func_708(36);
	func_708(37);
	func_708(38);
	func_708(39);
	func_708(40);
	func_708(43);
	func_708(41);
	func_708(54);
	func_708(42);
	func_708(47);
	func_756(23);
	func_756(24);
	func_708(92);
	MISC::CLEAR_BIT(&(Global_2544210.f_1800), 2);
	func_755();
	func_750();
	func_745();
	func_740();
	func_729();
	func_725();
	func_721();
	func_718();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_717(3))
	{
		func_756(3);
	}
	else if (func_717(4))
	{
		func_756(4);
	}
	else if (func_717(5))
	{
		func_756(5);
	}
	else if (func_717(6))
	{
		func_756(6);
	}
	else if (func_717(7))
	{
		func_756(7);
	}
	else if (((((((((((((((((func_717(0) || func_717(1)) || func_717(2)) || func_717(8)) || func_717(9)) || func_717(10)) || func_717(11)) || func_717(12)) || func_717(13)) || func_717(14)) || func_717(15)) || func_717(16)) || func_717(17)) || func_717(18)) || func_717(19)) || func_717(20)) || func_717(21)) || func_717(22))
	{
		func_756(8);
		func_756(0);
		func_756(1);
		func_756(2);
		func_756(9);
		func_756(10);
		func_756(11);
		func_756(12);
		func_756(13);
		func_756(14);
		func_756(15);
		func_756(16);
		func_756(17);
		func_756(18);
		func_756(19);
		func_756(20);
		func_756(21);
		func_756(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2544210.f_5191.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_14[iVar0], iVar1);
}

void func_718()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 53)
	{
		if (func_720(iVar0))
		{
			func_719(iVar0);
		}
		iVar0++;
	}
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_35[iVar0]), iVar1);
}

bool func_720(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_35[iVar0], iVar1);
}

void func_721()
{
	if (func_723())
	{
		func_722(0);
		func_722(1);
		func_722(2);
		func_722(3);
	}
}

void func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_33[iVar0]), iVar1);
}

int func_723()
{
	if (((func_724(0) || func_724(1)) || func_724(2)) || func_724(3))
	{
		return 1;
	}
	return 0;
}

bool func_724(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_33[iVar0], iVar1);
}

void func_725()
{
	if (func_727())
	{
		func_726(4);
		func_726(5);
		func_726(6);
		func_726(7);
	}
}

void func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_31[iVar0]), iVar1);
}

int func_727()
{
	if (((func_728(4) || func_728(5)) || func_728(6)) || func_728(7))
	{
		return 1;
	}
	return 0;
}

bool func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_31[iVar0], iVar1);
}

void func_729()
{
	int iVar0;
	
	if (func_739())
	{
		func_738(8);
		func_738(9);
		func_738(10);
		func_738(12);
		func_738(13);
		func_738(14);
		func_738(19);
		func_738(20);
		func_738(21);
		func_738(22);
		func_738(23);
		func_738(24);
		func_738(25);
		func_738(26);
		func_738(15);
		func_738(16);
		func_738(17);
		func_738(18);
		func_738(35);
		func_738(45);
		func_738(46);
		if (func_737(11))
		{
			func_738(11);
			iVar0 = func_128(7228, -1, 0);
			MISC::SET_BIT(&iVar0, 2);
			func_126(7228, iVar0, -1, 1, 0);
		}
	}
	if (func_737(48))
	{
		if (func_735(151, 3))
		{
			func_733(151, 3);
		}
		func_738(48);
	}
	if (func_737(49))
	{
		if (func_735(152, 3))
		{
			func_733(152, 3);
		}
		func_738(49);
	}
	if (func_737(50))
	{
		if (func_735(153, 3))
		{
			func_733(153, 3);
		}
		func_738(50);
	}
	if (func_737(51))
	{
		if (func_735(func_730(), 3))
		{
			func_733(func_730(), 3);
		}
		func_738(51);
	}
}

int func_730()
{
	if (func_732())
	{
		func_731(154, Global_19798, 1);
	}
	return 154;
}

void func_731(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_732()
{
	int iVar0;
	
	iVar0 = func_27(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_10()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_733(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_117[iParam0 /*10*/].f_8 != 158)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_734(iParam0, iVar0, 0);
			func_731(iParam0, iVar0, 0);
		}
	}
}

void func_734(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1878[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112293.f_28048[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_735(int iParam0, int iParam1)
{
	if (func_736(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_736(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1878[iParam0 /*29*/].f_12[iParam1];
}

bool func_737(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_26[iVar0], iVar1);
}

void func_738(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_26[iVar0]), iVar1);
}

int func_739()
{
	if (((((((((((((((((((((func_737(8) || func_737(9)) || func_737(10)) || func_737(12)) || func_737(11)) || func_737(13)) || func_737(14)) || func_737(19)) || func_737(20)) || func_737(21)) || func_737(22)) || func_737(23)) || func_737(24)) || func_737(25)) || func_737(26)) || func_737(15)) || func_737(16)) || func_737(17)) || func_737(18)) || func_737(35)) || func_737(45)) || func_737(46))
	{
		return 1;
	}
	return 0;
}

void func_740()
{
	if (func_744())
	{
		func_743(0);
		func_743(1);
		func_743(2);
		func_743(3);
		func_743(4);
		func_743(5);
		if (func_742(32))
		{
			if (func_735(func_741(), 3))
			{
				func_733(func_741(), 3);
			}
			func_743(32);
		}
	}
}

int func_741()
{
	if (func_732())
	{
		func_731(12, Global_19798, 1);
	}
	return 12;
}

bool func_742(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_23[iVar0], iVar1);
}

void func_743(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_23[iVar0]), iVar1);
}

int func_744()
{
	if ((((func_742(1) || func_742(0)) || func_742(2)) || func_742(4)) || func_742(5))
	{
		return 1;
	}
	return 0;
}

void func_745()
{
	if (func_749())
	{
		func_748(0);
		func_748(1);
		func_748(2);
		func_748(3);
		func_748(4);
		func_748(5);
		func_748(6);
		func_748(7);
		if (func_747(8))
		{
			func_748(8);
		}
		if (func_747(15))
		{
			if (func_735(func_746(), 3))
			{
				func_733(func_746(), 3);
			}
			func_748(15);
		}
	}
}

int func_746()
{
	if (func_732())
	{
		func_731(20, Global_19798, 1);
	}
	return 20;
}

bool func_747(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_21[iVar0], iVar1);
}

void func_748(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_21[iVar0]), iVar1);
}

int func_749()
{
	if ((((((((func_747(0) || func_747(1)) || func_747(2)) || func_747(3)) || func_747(4)) || func_747(5)) || func_747(6)) || func_747(7)) || func_747(8))
	{
		return 1;
	}
	return 0;
}

void func_750()
{
	if (func_754())
	{
		func_753(0);
		func_753(1);
		func_753(2);
		func_753(3);
		func_753(4);
		func_753(5);
		func_753(6);
		func_753(7);
		func_753(8);
		func_753(9);
		func_753(10);
		func_753(11);
		func_753(12);
		if (func_752(13))
		{
			if (func_735(func_751(), 3))
			{
				func_733(func_751(), 3);
			}
			func_753(13);
		}
	}
}

int func_751()
{
	if (func_732())
	{
		func_731(76, Global_19798, 1);
	}
	return 76;
}

bool func_752(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2544210.f_5191.f_19[iVar0], iVar1);
}

void func_753(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_19[iVar0]), iVar1);
}

int func_754()
{
	if ((((((((((((func_752(0) || func_752(1)) || func_752(2)) || func_752(3)) || func_752(4)) || func_752(5)) || func_752(6)) || func_752(7)) || func_752(8)) || func_752(9)) || func_752(10)) || func_752(11)) || func_752(12))
	{
		return 1;
	}
	return 0;
}

void func_755()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2544210.f_5191.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2544210.f_5191.f_14[iVar0]), iVar1);
}

void func_757()
{
	struct<14> Var0;
	
	Global_1681722 = { Var0 };
	Global_1681722.f_14 = 0;
	Global_1681722.f_15 = 0;
}

int func_758(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_760();
			}
			else
			{
				return 0;
			}
		}
		if (!func_759())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_760();
					}
					else
					{
						return 0;
					}
				}
				if (func_648())
				{
					if (!bParam2)
					{
						func_760();
					}
					else
					{
						return 0;
					}
				}
				if (func_646(157))
				{
					if (!bParam2)
					{
						func_760();
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
					func_760();
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
				func_760();
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
			func_760();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_759()
{
	return Global_1312878;
}

void func_760()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_761(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_760();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_762(int iParam0)
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
	switch (func_299(func_763(iParam0, 1)))
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

int func_763(int iParam0, bool bParam1)
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

