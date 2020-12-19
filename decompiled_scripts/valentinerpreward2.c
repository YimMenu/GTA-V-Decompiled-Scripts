#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<3> Local_20 = { 0, 0, 0 } ;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	struct<5> Local_27 = { 0, 0, 0, 0, 31 } ;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_62 = 0;
	int iLocal_63[3] = { 0, 0, 0 };
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	struct<15> Local_72 = { 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0 } ;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	struct<3> Local_96 = { 0, 0, 0 } ;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.50.05";
	iLocal_24 = -1;
	iLocal_25 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315828 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	func_126();
	while (true)
	{
		if (func_125())
		{
			func_123();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2460478.f_3)
		{
			func_122();
			func_121();
			func_120();
			func_117();
			func_115();
			func_112();
			func_110();
			func_105();
			func_103();
			func_102();
			func_85();
			func_82();
			func_81();
			func_80();
			func_72();
			func_55();
			func_46();
			func_45();
			func_41();
			func_40();
			func_35();
			func_22();
			func_7();
			func_4();
			func_3();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_2();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (!Global_2451787.f_23)
	{
		return;
	}
	if (Global_2452679.f_6238)
	{
		return;
	}
	if (Global_2452679.f_6634.f_13.f_1 > 0)
	{
		Global_2452679.f_6238 = 1;
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			iLocal_63[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		if (MISC::IS_BIT_SET(Global_4718592.f_70220[iVar0 /*636*/].f_296, 22))
		{
			iVar1 = Global_969055.f_152[iVar0];
			if (PED::IS_PED_INJURED(iVar1))
			{
				MISC::CLEAR_BIT(&(iLocal_63[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				MISC::CLEAR_BIT(&(iLocal_63[(iVar0 / 32)]), (iVar0 % 32));
			}
			else if (MISC::IS_BIT_SET(iLocal_63[(iVar0 / 32)], (iVar0 % 32)))
			{
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 245, true);
				MISC::SET_BIT(&(iLocal_63[(iVar0 / 32)]), (iVar0 % 32));
			}
		}
		iVar0++;
	}
}

void func_3()
{
	if (!Global_262145.f_24208)
	{
		Global_262145.f_24208 = 1;
	}
	if (!Global_262145.f_24209)
	{
		Global_262145.f_24209 = 1;
	}
}

void func_4()
{
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_5(PLAYER::PLAYER_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4726.769f, -5534.592f, 18.04668f, true) < 8f)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
	}
}

bool func_5(int iParam0)
{
	return func_6(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_6(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_7()
{
	bool bVar0;
	
	if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_5(PLAYER::PLAYER_ID())) && !func_21(PLAYER::PLAYER_ID(), 25)) && !func_20())
	{
		switch (iLocal_3)
		{
			case joaat("kosatka"):
			case joaat("alkonost"):
			case joaat("seasparrow2"):
			case joaat("toreador"):
			case joaat("patrolboat"):
			case joaat("dinghy5"):
			case joaat("annihilator2"):
				bVar0 = true;
				if (!MISC::IS_BIT_SET(Global_2540384.f_4655, 28))
				{
					func_19(1);
					iLocal_99 = 1;
				}
				if (func_18() && !func_17())
				{
					if (!iLocal_100)
					{
						iLocal_100 = 1;
						func_8(10, 1, 1);
					}
				}
				break;
			}
	}
	if (!bVar0)
	{
		if (iLocal_99)
		{
			func_19(0);
			iLocal_99 = 0;
		}
		if (iLocal_100)
		{
			iLocal_100 = 0;
		}
	}
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (func_18())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_16(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_16(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
				func_14(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
			func_14(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_13()) && !func_9(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_9(int iParam0)
{
	if (func_10(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_11(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_11(int iParam0)
{
	return func_12(iParam0);
}

bool func_12(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_13()
{
	return Global_2451787.f_838;
}

void func_14(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_18())
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false, false);
				}
			}
		}
		else
		{
			if (func_15(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

int func_15(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
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

bool func_17()
{
	return Global_1312436.f_1;
}

bool func_18()
{
	return Global_1312436;
}

void func_19(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2540384.f_4655, 28))
		{
			MISC::SET_BIT(&(Global_2540384.f_4655), 28);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540384.f_4655, 28))
	{
		MISC::CLEAR_BIT(&(Global_2540384.f_4655), 28);
	}
}

bool func_20()
{
	return Global_99007.f_351 > 0;
}

bool func_21(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

void func_22()
{
	int iVar0;
	
	if (func_31(PLAYER::PLAYER_ID()) == 4 && !func_27(func_30(), 0))
	{
		if (!iLocal_94)
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
			if (MISC::IS_BIT_SET(Global_4271024, 21) && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					iLocal_94 = 1;
					if (iLocal_95)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_96, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					}
				}
				else if (func_25(&uLocal_92, 60000, 0))
				{
					if (!iLocal_95)
					{
						Local_96 = { ENTITY::GET_ENTITY_COORDS(iVar0, false) };
						ENTITY::SET_ENTITY_COORDS(iVar0, 4978.723f, -5764.301f, -2.3232f, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
						iLocal_95 = 1;
					}
				}
			}
		}
	}
	else
	{
		if (iLocal_94)
		{
			iLocal_94 = 0;
		}
		if (iLocal_95)
		{
			iLocal_95 = 0;
		}
		if (func_24(&uLocal_92))
		{
			func_23(&uLocal_92);
		}
	}
}

void func_23(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_24(var uParam0)
{
	return uParam0->f_1;
}

int func_25(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_26(uParam0, bParam2, 0);
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

void func_26(var uParam0, bool bParam1, bool bParam2)
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

int func_27(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return func_28(iParam0, func_29(iParam1));
	}
	return 0;
}

int func_28(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1706028[iParam0 /*53*/].f_2, iParam1);
	}
	return 0;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_30()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

int func_31(int iParam0)
{
	if (func_34(iParam0) == 256)
	{
		return func_32(iParam0);
	}
	return -1;
}

int func_32(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_33(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

void func_35()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || !func_37(PLAYER::PLAYER_ID()))
	{
		iLocal_90 = 0;
		iLocal_91 = 0;
		return;
	}
	if (func_36())
	{
		if (!iLocal_90)
		{
			iLocal_90 = 1;
		}
	}
	else if (iLocal_90)
	{
		if (!iLocal_91)
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(1559.421f, 381.4f, -50.105f, 25f, 0);
			iLocal_91 = 1;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_90 = 0;
				iLocal_91 = 0;
			}
		}
	}
}

bool func_36()
{
	return MISC::IS_BIT_SET(Global_1678288.f_7, 14);
}

int func_37(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_39())
			{
				return func_38(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
	}
	return 0;
}

int func_38(int iParam0)
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
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_39()
{
	return -1;
}

void func_40()
{
	if (iLocal_3 == joaat("toreador"))
	{
		if (!Global_262145.f_10188)
		{
			Global_262145.f_10188 = 1;
		}
	}
	else if (Global_262145.f_10188)
	{
		Global_262145.f_10188 = 0;
	}
}

void func_41()
{
	if (func_43(PLAYER::PLAYER_ID()))
	{
		if (!iLocal_89)
		{
			if (func_5(PLAYER::PLAYER_ID()))
			{
				iLocal_89 = 1;
			}
		}
		else if (func_42())
		{
			if (!Global_2540384.f_4631)
			{
				Global_2540384.f_4631 = 1;
			}
		}
	}
	else
	{
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
		if (Global_2540384.f_4631)
		{
			Global_2540384.f_4631 = 0;
		}
	}
}

bool func_42()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_43(int iParam0)
{
	return func_44(func_31(iParam0));
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_45()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (iLocal_88 != 0)
		{
			iLocal_88 = 0;
		}
		return;
	}
	switch (iLocal_88)
	{
		case 0:
			if (Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_431.f_1)
			{
				return;
			}
			if (STREAMING::IS_IPL_ACTIVE("H4_islandx_terrain_01") && !NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				iLocal_88 = 1;
			}
			break;
		
		case 1:
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_88 = 2;
			}
			break;
		
		case 2:
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1168.914f, -2751.29f, 13.029f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 293.599f);
			STREAMING::REQUEST_COLLISION_AT_COORD(-1168.914f, -2751.29f, 13.029f);
			STREAMING::LOAD_ALL_OBJECTS_NOW();
			CAM::DO_SCREEN_FADE_IN(800);
			iLocal_88 = 3;
			break;
		
		case 3:
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				iLocal_88 = 0;
			}
			break;
	}
}

void func_46()
{
	bool bVar0;
	
	bVar0 = false;
	if (func_52(1))
	{
		if (func_34(PLAYER::PLAYER_ID()) == 256 && func_50(PLAYER::PLAYER_ID()))
		{
			if (func_31(PLAYER::PLAYER_ID()) == 21)
			{
				if (!func_49(10))
				{
					func_48(10);
					iLocal_87 = 1;
				}
				bVar0 = true;
			}
		}
	}
	if (iLocal_87 && !bVar0)
	{
		if (func_49(10))
		{
			func_47(10);
		}
		iLocal_87 = 0;
	}
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1678288.f_4481 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0 == Global_1678288.f_4477[iVar0])
		{
			Global_1678288.f_4477[iVar0] = -1;
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		if (Global_1678288.f_4481 > 0)
		{
			Global_1678288.f_4481 = (Global_1678288.f_4481 - 1);
		}
	}
}

void func_48(int iParam0)
{
	if (Global_1678288.f_4481 >= 3)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		return;
	}
	else if (func_49(iParam0))
	{
		return;
	}
	Global_1678288.f_4477[Global_1678288.f_4481] = iParam0;
	Global_1678288.f_4481++;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (Global_1678288.f_4481 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1678288.f_4481)
		{
			if (iParam0 == Global_1678288.f_4477[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_50(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_51(iParam0, 9);
	}
	return 0;
}

bool func_51(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

bool func_52(bool bParam0)
{
	return func_53(PLAYER::PLAYER_ID(), bParam0);
}

bool func_53(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_54(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_39();
}

int func_54(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_39())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_55()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (PLAYER::PLAYER_ID() != NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_71(), -1, 0))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_2419386.f_1444[1 /*15*/].f_6, 0))
	{
		return;
	}
	if (Global_2419386.f_1444[1 /*15*/].f_8 == -1)
	{
		return;
	}
	if (func_69())
	{
		return;
	}
	Local_72 = { Global_2419386.f_1444[1 /*15*/] };
	iVar0 = func_68(&(Local_72.f_13), 0, 1);
	iVar1 = func_67(Local_72.f_10);
	bVar2 = true;
	iVar3 = 1;
	while (iVar3 <= iVar1)
	{
		if (iVar0 < func_66(&Local_72, iVar3))
		{
			Local_72 = iVar3;
			if (iVar3 == 1)
			{
				Local_72.f_2 = func_65(&Local_72, iVar0);
			}
			else
			{
				Local_72.f_2 = func_65(&Local_72, (iVar0 - func_66(&Local_72, (iVar3 - 1))));
			}
			bVar2 = false;
			Jump @212; //curOff = 194
		}
		else
		{
			bVar2 = true;
		}
		iVar3++;
	}
	if (!bVar2)
	{
		if (Local_72 == func_67(Local_72.f_10))
		{
			iVar4 = func_64(&Local_72, iVar0);
			iVar5 = func_62(Local_72.f_10, Local_72);
			if ((iVar5 - iVar4) <= 30000)
			{
				bVar2 = true;
			}
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_2419386.f_1444[1 /*15*/].f_8 = func_59(Global_2419386.f_1444[1 /*15*/].f_8, 1);
	Global_2419386.f_1444[1 /*15*/].f_10 = func_58(Global_2419386.f_1444[1 /*15*/].f_8, 0);
	Global_2419386.f_1444[1 /*15*/] = 1;
	Global_2419386.f_1444[1 /*15*/].f_3 = func_57(&(Global_2419386.f_1444[1 /*15*/]), 0);
	Global_2419386.f_1444[1 /*15*/].f_2 = 0;
	func_16(&(Global_2419386.f_1444[1 /*15*/].f_13), 0, 0);
	Global_2419386.f_1444[1 /*15*/].f_13 = NETWORK::GET_TIME_OFFSET(Global_2419386.f_1444[1 /*15*/].f_13, -Global_2419386.f_1444[1 /*15*/].f_2);
	Global_2419386.f_1444[1 /*15*/].f_1 = MISC::GET_HASH_KEY(func_56(Global_2419386.f_1444[1 /*15*/].f_10, Global_2419386.f_1444[1 /*15*/]));
}

char* func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_01";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_02";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_03";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_BEACH_REVERB_04";
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_KM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_PT_CLUB_LIVE_MIX_P3";
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P1";
				
				case 2:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P2";
				
				case 3:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P3";
				
				case 4:
					return "DLC_HEI4_MUSIC_HEI4_MM_CLUB_LIVE_MIX_P4";
				
				default:
			}
			break;
	}
	return "";
}

int func_57(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= func_67(uParam0->f_10))
	{
		iVar1 = (iVar1 + func_62(uParam0->f_10, iVar0));
		if (!bParam1)
		{
			if (*uParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
			return iVar1;
		}

int func_58(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 4;
				break;
			
			case 2:
				iVar0 = 5;
				break;
			
			case 1:
				iVar0 = 6;
				break;
			
			case 3:
				iVar0 = 7;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = 0;
				break;
			
			case 2:
				iVar0 = 1;
				break;
			
			case 1:
				iVar0 = 2;
				break;
			
			case 3:
				iVar0 = 3;
				break;
			}
	}
	switch (iParam0)
	{
		case 4:
			iVar0 = 8;
			break;
		
		case 5:
			iVar0 = 9;
			break;
		
		case 6:
			iVar0 = 10;
			break;
		
		case 7:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

int func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	if (!bParam1)
	{
		if (func_61())
		{
			iVar1 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 7);
			}
			switch (iVar1)
			{
				case 1:
				case 2:
					return 4;
				
				case 3:
				case 4:
					return 6;
				
				case 5:
				case 6:
					return 7;
				
				default:
			}
			return 6;
		}
		else if (!Global_262145.f_24207 && !Global_262145.f_24208)
		{
			iVar2 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_60())
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 9;
				}
			}
			switch (iVar2)
			{
				case 7:
					return 7;
				
				case 9:
					return 4;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24208 && !Global_262145.f_24209)
		{
			iVar3 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_60())
				{
					iVar3 = 10;
				}
				else
				{
					iVar3 = 12;
				}
			}
			switch (iVar3)
			{
				case 10:
					return 4;
				
				case 12:
					return 6;
				
				default:
			}
			return 4;
		}
		else if (!Global_262145.f_24209 && !Global_262145.f_24207)
		{
			iVar4 = Global_262145.f_24206;
			if (!Global_262145.f_24211)
			{
				if (func_60())
				{
					iVar4 = 8;
				}
				else
				{
					iVar4 = 11;
				}
			}
			switch (iVar4)
			{
				case 8:
					return 7;
				
				case 11:
					return 6;
				
				default:
			}
			return 7;
		}
		else if (!Global_262145.f_24207)
		{
			return 7;
		}
		else if (!Global_262145.f_24208)
		{
			return 4;
		}
		else if (!Global_262145.f_24209)
		{
			return 6;
		}
	}
	else if (func_61())
	{
		switch (Global_262145.f_24206)
		{
			case 1:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			case 5:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
			
			case 6:
				switch (iParam0)
				{
					case 4:
						iVar0 = 7;
						break;
					
					case 6:
						iVar0 = 4;
						break;
					
					case 7:
						iVar0 = 6;
						break;
				}
				break;
			
			default:
				switch (iParam0)
				{
					case 4:
						iVar0 = 6;
						break;
					
					case 6:
						iVar0 = 7;
						break;
					
					case 7:
						iVar0 = 4;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 4;
				}
				break;
			
			case 6:
				if (!Global_262145.f_24207)
				{
					iVar0 = 7;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 6;
				}
				break;
			
			case 7:
				if (!Global_262145.f_24209)
				{
					iVar0 = 6;
				}
				else if (!Global_262145.f_24208)
				{
					iVar0 = 4;
				}
				else
				{
					iVar0 = 7;
				}
				break;
			}
	}
	return iVar0;
}

int func_60()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_61()
{
	if (Global_262145.f_24207)
	{
		return 0;
	}
	if (Global_262145.f_24208)
	{
		return 0;
	}
	if (Global_262145.f_24209)
	{
		return 0;
	}
	return 1;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = func_63(iParam0, iParam1);
	iVar0 = (iVar0 - 1000);
	return iVar0;
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152081;
				
				case 4:
					return 1587519;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
					return 2352424;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1813200;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
					return 1041521;
				
				case 2:
					return 1537939;
				
				case 3:
					return 1811912;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 1:
					return 2353875;
				
				case 2:
					return 1552637;
				
				case 3:
					return 1152080;
				
				case 4:
					return 1287786;
				
				default:
			}
			break;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (iParam0->f_3 - iParam1);
	return (func_62(iParam0->f_10, *iParam0) - iVar0);
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 1)
	{
		iVar0 = 2;
		while (iVar0 <= func_67(iParam0->f_10))
		{
			iParam1 = (iParam1 + func_62(iParam0->f_10, (iVar0 - 1)));
			if (*iParam0 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iParam1;
}

int func_66(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	while (iVar0 <= iParam1)
	{
		iVar1 = (iVar1 + func_62(uParam0->f_10, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_67(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return 4;
		
		case 8:
			return 4;
		
		case 10:
			return 3;
		
		case 11:
			return 4;
		
		default:
	}
	return 0;
}

int func_68(var uParam0, bool bParam1, bool bParam2)
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

int func_69()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_15(iVar1, 0, 1))
		{
			if (func_70(iVar1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_70(int iParam0)
{
	if (iParam0 != func_39())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_38(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

char* func_71()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_72()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<5> Var7;
	
	bVar6 = (func_54(PLAYER::PLAYER_ID()) && func_34(PLAYER::PLAYER_ID()) == 256);
	switch (Local_27.f_2)
	{
		case 0:
			if (bVar6)
			{
				switch (func_32(PLAYER::PLAYER_ID()))
				{
					case 11:
					case 20:
					case 21:
					case 23:
					case 18:
					case 16:
					case 12:
						func_26(&Local_27, 0, 0);
						Local_27.f_2 = 1;
						break;
					}
			}
			break;
		
		case 1:
			if (func_24(&Local_27))
			{
				if (func_25(&Local_27, 5000, 0))
				{
					iVar4 = func_79(PLAYER::PLAYER_ID());
					if (iVar4 != -1)
					{
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (!MISC::IS_BIT_SET(Local_27.f_3, iVar3))
							{
								Var0 = { func_78(iVar4, iVar3) };
								iVar5 = func_77(iVar4, iVar3);
								if (!func_76(Var0) && iVar5 != 0)
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_27.f_4[iVar3]))
									{
										Local_27.f_4[iVar3] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 5f, iVar5, false, false, false);
										MISC::SET_BIT(&(Local_27.f_3), iVar3);
									}
								}
							}
							iVar3++;
						}
						iVar3 = 0;
						while (iVar3 < 31)
						{
							if (MISC::IS_BIT_SET(Local_27.f_3, iVar3))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_27.f_4[iVar3]) && func_75(Local_27.f_4[iVar3]))
								{
									NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(Local_27.f_4[iVar3], true);
									MISC::CLEAR_BIT(&(Local_27.f_3), iVar3);
								}
							}
							iVar3++;
						}
					}
					if (func_73(Local_27.f_3) == 0 || func_25(&Local_27, 10000, 0))
					{
						Local_27.f_2 = 2;
					}
				}
			}
			else
			{
				Local_27.f_2 = 2;
			}
			break;
		
		case 2:
			if (!bVar6)
			{
				Var7.f_4 = 31;
				MISC::_COPY_MEMORY(&Local_27, &Var7, 36);
			}
			break;
	}
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_74(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_74(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_75(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_76(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = 2087822032;
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_03a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = 2087822032;
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("gr_prop_gr_bench_02a");
					break;
				
				case 1:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 2:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 3:
					iVar0 = joaat("gr_prop_gr_crates_pistols_01a");
					break;
				
				case 4:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 5:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 6:
					iVar0 = joaat("gr_prop_gr_rsply_crate03a");
					break;
				
				case 7:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 8:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 9:
					iVar0 = joaat("xm_prop_x17_bag_01a");
					break;
				
				case 10:
					iVar0 = 2087822032;
					break;
				
				case 14:
					iVar0 = joaat("prop_cabinet_02b");
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1743972815;
					break;
				
				case 1:
					iVar0 = 1743972815;
					break;
				
				case 2:
					iVar0 = 1743972815;
					break;
				
				case 3:
					iVar0 = 1743972815;
					break;
				
				case 4:
					iVar0 = 1743972815;
					break;
				
				case 5:
					iVar0 = 1028231429;
					break;
				
				case 6:
					iVar0 = 1028231429;
					break;
				
				case 7:
					iVar0 = 1028231429;
					break;
				
				case 8:
					iVar0 = 1028231429;
					break;
				
				case 9:
					iVar0 = 1028231429;
					break;
				
				case 10:
					iVar0 = 1028231429;
					break;
				
				case 11:
					iVar0 = 1028231429;
					break;
				
				case 12:
					iVar0 = 1028231429;
					break;
				
				case 13:
					iVar0 = 1028231429;
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = 1049338225;
					break;
				
				case 16:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 19:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
				
				case 22:
					iVar0 = joaat("bkr_prop_weed_bigbag_open_01a");
					break;
				
				case 23:
					iVar0 = 1784997875;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1028231429;
					break;
				
				case 1:
					iVar0 = 1028231429;
					break;
				
				case 2:
					iVar0 = -1357220123;
					break;
				
				case 3:
					iVar0 = -1357220123;
					break;
				
				case 4:
					iVar0 = -1357220123;
					break;
				
				case 5:
					iVar0 = 1028231429;
					break;
				
				case 6:
					iVar0 = 1028231429;
					break;
				
				case 7:
					iVar0 = 1028231429;
					break;
				
				case 8:
					iVar0 = -1357220123;
					break;
				
				case 9:
					iVar0 = -1357220123;
					break;
				
				case 10:
					iVar0 = 1028231429;
					break;
				
				case 11:
					iVar0 = 1028231429;
					break;
				
				case 12:
					iVar0 = 1028231429;
					break;
				
				case 13:
					iVar0 = 1028231429;
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = 1049338225;
					break;
				
				case 16:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 17:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = 1784997875;
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					iVar0 = 1028231429;
					break;
				
				case 1:
					iVar0 = 1028231429;
					break;
				
				case 2:
					iVar0 = 1028231429;
					break;
				
				case 3:
					iVar0 = -1357220123;
					break;
				
				case 4:
					iVar0 = -1357220123;
					break;
				
				case 5:
					iVar0 = -1357220123;
					break;
				
				case 6:
					iVar0 = -1357220123;
					break;
				
				case 7:
					iVar0 = -1357220123;
					break;
				
				case 8:
					iVar0 = 1028231429;
					break;
				
				case 9:
					iVar0 = 1028231429;
					break;
				
				case 10:
					iVar0 = 1028231429;
					break;
				
				case 11:
					iVar0 = 1028231429;
					break;
				
				case 12:
					iVar0 = 1028231429;
					break;
				
				case 13:
					iVar0 = 1028231429;
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_rifles_01a");
					break;
				
				case 15:
					iVar0 = 1049338225;
					break;
				
				case 16:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 17:
					iVar0 = joaat("xm_prop_rsply_crate04a");
					break;
				
				case 18:
					iVar0 = joaat("ch_prop_ch_crate_full_01a");
					break;
				
				case 19:
					iVar0 = 1784997875;
					break;
				
				case 20:
					iVar0 = joaat("prop_cash_case_02");
					break;
				
				case 21:
					iVar0 = joaat("hei_prop_hei_drug_pack_01a");
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1357220123;
					break;
				
				case 1:
					iVar0 = -1357220123;
					break;
				
				case 2:
					iVar0 = -1357220123;
					break;
				
				case 3:
					iVar0 = -1357220123;
					break;
				
				case 4:
					iVar0 = -1357220123;
					break;
				
				case 5:
					iVar0 = -1357220123;
					break;
				
				case 6:
					iVar0 = -1357220123;
					break;
				
				case 7:
					iVar0 = -1357220123;
					break;
				
				case 8:
					iVar0 = -1357220123;
					break;
				
				case 9:
					iVar0 = -1357220123;
					break;
				
				case 10:
					iVar0 = -1357220123;
					break;
				
				case 11:
					iVar0 = -1357220123;
					break;
				
				case 12:
					iVar0 = -1357220123;
					break;
				
				case 14:
					iVar0 = 698941631;
					break;
				
				case 15:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 17:
					iVar0 = -1393014804;
					break;
				
				case 18:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 19:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1357220123;
					break;
				
				case 1:
					iVar0 = -1357220123;
					break;
				
				case 2:
					iVar0 = -1357220123;
					break;
				
				case 3:
					iVar0 = -1357220123;
					break;
				
				case 4:
					iVar0 = -1357220123;
					break;
				
				case 5:
					iVar0 = -1357220123;
					break;
				
				case 6:
					iVar0 = -1357220123;
					break;
				
				case 7:
					iVar0 = -1357220123;
					break;
				
				case 8:
					iVar0 = -1357220123;
					break;
				
				case 9:
					iVar0 = -1357220123;
					break;
				
				case 10:
					iVar0 = -1357220123;
					break;
				
				case 11:
					iVar0 = -1357220123;
					break;
				
				case 12:
					iVar0 = -1357220123;
					break;
				
				case 14:
					iVar0 = 698941631;
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo02a");
					break;
				
				case 16:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 19:
					iVar0 = -1393014804;
					break;
				
				case 20:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1357220123;
					break;
				
				case 1:
					iVar0 = -1357220123;
					break;
				
				case 2:
					iVar0 = -1357220123;
					break;
				
				case 3:
					iVar0 = -1357220123;
					break;
				
				case 4:
					iVar0 = -1357220123;
					break;
				
				case 5:
					iVar0 = -1357220123;
					break;
				
				case 6:
					iVar0 = -1357220123;
					break;
				
				case 7:
					iVar0 = -1357220123;
					break;
				
				case 8:
					iVar0 = -1357220123;
					break;
				
				case 9:
					iVar0 = -1357220123;
					break;
				
				case 10:
					iVar0 = -1357220123;
					break;
				
				case 11:
					iVar0 = -1357220123;
					break;
				
				case 12:
					iVar0 = -1357220123;
					break;
				
				case 14:
					iVar0 = 388143302;
					break;
				
				case 15:
					iVar0 = joaat("prop_box_ammo01a");
					break;
				
				case 16:
					iVar0 = joaat("w_sg_pumpshotgun");
					break;
				
				case 17:
					iVar0 = joaat("w_sg_assaultshotgun");
					break;
				
				case 18:
					iVar0 = -1393014804;
					break;
				
				case 19:
					iVar0 = joaat("ex_prop_safedoor_office2a_l");
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					iVar0 = 998865347;
					break;
				
				case 3:
					iVar0 = 998865347;
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = 286149026;
					break;
				
				case 6:
					iVar0 = 998865347;
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = 2084153992;
					break;
				
				case 15:
					iVar0 = -1141961823;
					break;
				
				case 16:
					iVar0 = -1789904450;
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = -1141961823;
					break;
				
				case 25:
					iVar0 = -710382954;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					iVar0 = 998865347;
					break;
				
				case 3:
					iVar0 = 998865347;
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = 286149026;
					break;
				
				case 6:
					iVar0 = 998865347;
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = 2084153992;
					break;
				
				case 15:
					iVar0 = -1141961823;
					break;
				
				case 16:
					iVar0 = -1789904450;
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = -710382954;
					break;
				
				case 25:
					iVar0 = -710382954;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					iVar0 = 998865347;
					break;
				
				case 3:
					iVar0 = 998865347;
					break;
				
				case 4:
					iVar0 = joaat("xm_prop_base_staff_desk_01");
					break;
				
				case 5:
					iVar0 = 286149026;
					break;
				
				case 6:
					iVar0 = 998865347;
					break;
				
				case 7:
					iVar0 = joaat("prop_power_cell");
					break;
				
				case 8:
					iVar0 = joaat("prop_porn_mag_02");
					break;
				
				case 9:
					iVar0 = joaat("bkr_prop_clubhouse_offchair_01a");
					break;
				
				case 10:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 11:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 12:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 13:
					iVar0 = joaat("xm_prop_x17_avengerchair_02");
					break;
				
				case 14:
					iVar0 = 2084153992;
					break;
				
				case 15:
					iVar0 = -1141961823;
					break;
				
				case 16:
					iVar0 = -1789904450;
					break;
				
				case 17:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 18:
					iVar0 = joaat("prop_boxpile_05a");
					break;
				
				case 19:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 22:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 24:
					iVar0 = -710382954;
					break;
				
				case 25:
					iVar0 = -710382954;
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 10:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 13:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 14:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 20:
					iVar0 = 390858268;
					break;
				
				case 21:
					iVar0 = 390858268;
					break;
				
				case 22:
					iVar0 = 390858268;
					break;
				
				case 23:
					iVar0 = 390858268;
					break;
				
				case 24:
					iVar0 = 390858268;
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 11:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 14:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 15:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 16:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 20:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 21:
					iVar0 = 390858268;
					break;
				
				case 22:
					iVar0 = 390858268;
					break;
				
				case 23:
					iVar0 = 390858268;
					break;
				
				case 24:
					iVar0 = 390858268;
					break;
				
				case 25:
					iVar0 = 390858268;
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					iVar0 = joaat("prop_box_wood07a");
					break;
				
				case 10:
					iVar0 = joaat("prop_boxpile_02b");
					break;
				
				case 11:
					iVar0 = joaat("prop_boxpile_07a");
					break;
				
				case 12:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 13:
					iVar0 = joaat("prop_box_wood03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 17:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 18:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 19:
					iVar0 = 390858268;
					break;
				
				case 20:
					iVar0 = 390858268;
					break;
				
				case 21:
					iVar0 = 390858268;
					break;
				
				case 22:
					iVar0 = 390858268;
					break;
				
				case 23:
					iVar0 = 390858268;
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 15:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 16:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
				
				case 18:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 19:
					iVar0 = joaat("p_parachute_s_shop");
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					iVar0 = joaat("prop_mb_cargo_03a");
					break;
				
				case 14:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 15:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 16:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 17:
					iVar0 = joaat("p_parachute_s_shop");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_rsply_crate02a");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 1:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 2:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 4:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 5:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 6:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 7:
					iVar0 = 316090149;
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 13:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 14:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 22:
					iVar0 = -1524553731;
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_01a");
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = 316090149;
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = -1524553731;
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					iVar0 = joaat("prop_mb_cargo_04b");
					break;
				
				case 2:
					iVar0 = joaat("prop_air_cargo_01a");
					break;
				
				case 3:
					iVar0 = joaat("prop_mb_cargo_02a");
					break;
				
				case 4:
					iVar0 = joaat("prop_mb_cargo_04a");
					break;
				
				case 5:
					iVar0 = joaat("prop_elecbox_24b");
					break;
				
				case 6:
					iVar0 = joaat("prop_box_wood04a");
					break;
				
				case 7:
					iVar0 = joaat("prop_mb_crate_01b");
					break;
				
				case 8:
					iVar0 = 316090149;
					break;
				
				case 9:
					iVar0 = 316090149;
					break;
				
				case 10:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 11:
					iVar0 = joaat("prop_toolchest_05");
					break;
				
				case 12:
					iVar0 = joaat("imp_prop_covered_vehicle_01a");
					break;
				
				case 13:
					iVar0 = joaat("imp_prop_covered_vehicle_02a");
					break;
				
				case 14:
					iVar0 = joaat("imp_prop_covered_vehicle_03a");
					break;
				
				case 15:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 16:
					iVar0 = joaat("gr_prop_gr_crates_sam_01a");
					break;
				
				case 17:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 18:
					iVar0 = joaat("gr_prop_gr_crates_weapon_mix_01a");
					break;
				
				case 19:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 20:
					iVar0 = joaat("gr_prop_gr_gunsmithsupl_02a");
					break;
				
				case 21:
					break;
				
				case 22:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
				
				case 23:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 24:
					iVar0 = -1524553731;
					break;
				
				case 25:
					iVar0 = joaat("prop_box_ammo07b");
					break;
				
				case 26:
					iVar0 = joaat("prop_box_guncase_02a");
					break;
			}
			break;
	}
	return iVar0;
}

Vector3 func_78(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 39:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.24f, -3193.93f, -40.022f };
					break;
				
				case 4:
					Var0 = { 1167.76f, -3199.4f, -39.006f };
					break;
				
				case 5:
					Var0 = { 1162.08f, -3190.13f, -39.099f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.8f, -3197.08f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.54f, -3195.36f, -39.093f };
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.52f, -3194.46f, -40.006f };
					break;
				
				case 4:
					Var0 = { 1167.81f, -3199.39f, -39.018f };
					break;
				
				case 5:
					Var0 = { 1162.06f, -3190.14f, -39.092f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.9f, -3197.07f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.49f, -3195.34f, -39.093f };
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					Var0 = { 1165.44f, -3191.6f, -40.008f };
					break;
				
				case 1:
					Var0 = { 1158.08f, -3191.54f, -40.007f };
					break;
				
				case 2:
					Var0 = { 1156.9f, -3198.11f, -40.006f };
					break;
				
				case 3:
					Var0 = { 1171.31f, -3193.94f, -40.01f };
					break;
				
				case 4:
					Var0 = { 1167.74f, -3199.35f, -39.011f };
					break;
				
				case 5:
					Var0 = { 1162.09f, -3190.13f, -39.102f };
					break;
				
				case 6:
					Var0 = { 1162.58f, -3193.59f, -40.007f };
					break;
				
				case 7:
					Var0 = { 1164.66f, -3197.04f, -39.196f };
					break;
				
				case 8:
					Var0 = { 1161.66f, -3192.38f, -40.001f };
					break;
				
				case 9:
					Var0 = { 1161.03f, -3191.95f, -40.001f };
					break;
				
				case 10:
					Var0 = { 1156.45f, -3195.52f, -40.008f };
					break;
				
				case 14:
					Var0 = { 1160.53f, -3195.28f, -39.093f };
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					Var0 = { -776.483f, 608.112f, 145.335f };
					break;
				
				case 1:
					Var0 = { -777.702f, 611.747f, 145.33f };
					break;
				
				case 2:
					Var0 = { -777.088f, 609.926f, 145.336f };
					break;
				
				case 3:
					Var0 = { -775.876f, 606.296f, 145.34f };
					break;
				
				case 4:
					Var0 = { -775.27f, 604.485f, 145.337f };
					break;
				
				case 5:
					Var0 = { -766.149f, 606.328f, 146.521f };
					break;
				
				case 6:
					Var0 = { -764.436f, 606.901f, 146.522f };
					break;
				
				case 7:
					Var0 = { -757.752f, 609.172f, 146.82f };
					break;
				
				case 8:
					Var0 = { -773.336f, 603.948f, 142.998f };
					break;
				
				case 9:
					Var0 = { -775.905f, 606.284f, 141.932f };
					break;
				
				case 10:
					Var0 = { -775.299f, 604.465f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.513f, 608.104f, 141.932f };
					break;
				
				case 12:
					Var0 = { -777.12f, 609.919f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.728f, 611.732f, 141.933f };
					break;
				
				case 14:
					Var0 = { -760.101f, 617.678f, 135.509f };
					break;
				
				case 15:
					Var0 = { -761.855f, 613.439f, 144.443f };
					break;
				
				case 16:
					Var0 = { -766.645f, 610.83f, 143.731f };
					break;
				
				case 17:
					Var0 = { -755.653f, 615.589f, 135.53f };
					break;
				
				case 18:
					Var0 = { -759.518f, 616.393f, 135.508f };
					break;
				
				case 19:
					Var0 = { -765.752f, 616.25f, 142.93f };
					break;
				
				case 20:
					Var0 = { -770.441f, 606.968f, 140.098f };
					break;
				
				case 21:
					Var0 = { -770.675f, 607.569f, 140.038f };
					break;
				
				case 22:
					Var0 = { -765.897f, 610.676f, 143.745f };
					break;
				
				case 23:
					Var0 = { -766.637f, 610.734f, 143.726f };
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					Var0 = { -773.265f, 603.954f, 142.96f };
					break;
				
				case 1:
					Var0 = { -775.297f, 604.469f, 141.935f };
					break;
				
				case 2:
					Var0 = { -775.279f, 604.502f, 145.342f };
					break;
				
				case 3:
					Var0 = { -777.085f, 609.915f, 145.341f };
					break;
				
				case 4:
					Var0 = { -777.688f, 611.717f, 145.341f };
					break;
				
				case 5:
					Var0 = { -757.826f, 609.156f, 146.854f };
					break;
				
				case 6:
					Var0 = { -764.546f, 606.874f, 146.622f };
					break;
				
				case 7:
					Var0 = { -766.287f, 606.29f, 146.621f };
					break;
				
				case 8:
					Var0 = { -775.883f, 606.3f, 145.34f };
					break;
				
				case 9:
					Var0 = { -776.479f, 608.106f, 145.341f };
					break;
				
				case 10:
					Var0 = { -775.904f, 606.279f, 141.93f };
					break;
				
				case 11:
					Var0 = { -776.514f, 608.115f, 141.927f };
					break;
				
				case 12:
					Var0 = { -777.114f, 609.913f, 141.932f };
					break;
				
				case 13:
					Var0 = { -777.73f, 611.735f, 141.93f };
					break;
				
				case 14:
					Var0 = { -760.008f, 617.577f, 135.529f };
					break;
				
				case 15:
					Var0 = { -761.979f, 613.297f, 144.432f };
					break;
				
				case 16:
					Var0 = { -759.454f, 616.171f, 135.527f };
					break;
				
				case 17:
					Var0 = { -755.663f, 615.504f, 135.53f };
					break;
				
				case 18:
					Var0 = { -765.722f, 616.303f, 142.921f };
					break;
				
				case 19:
					Var0 = { -766.58f, 610.731f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.525f, 606.775f, 140.084f };
					break;
				
				case 21:
					Var0 = { -770.866f, 607.453f, 140.038f };
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					Var0 = { -757.78f, 609.162f, 146.802f };
					break;
				
				case 1:
					Var0 = { -766.203f, 606.319f, 146.559f };
					break;
				
				case 2:
					Var0 = { -764.563f, 606.867f, 146.558f };
					break;
				
				case 3:
					Var0 = { -777.699f, 611.734f, 145.348f };
					break;
				
				case 4:
					Var0 = { -777.089f, 609.912f, 145.347f };
					break;
				
				case 5:
					Var0 = { -776.485f, 608.096f, 145.346f };
					break;
				
				case 6:
					Var0 = { -775.876f, 606.28f, 145.344f };
					break;
				
				case 7:
					Var0 = { -775.272f, 604.479f, 145.342f };
					break;
				
				case 8:
					Var0 = { -773.352f, 603.944f, 142.957f };
					break;
				
				case 9:
					Var0 = { -775.292f, 604.464f, 141.93f };
					break;
				
				case 10:
					Var0 = { -775.9f, 606.28f, 141.932f };
					break;
				
				case 11:
					Var0 = { -776.501f, 608.107f, 141.929f };
					break;
				
				case 12:
					Var0 = { -777.094f, 609.913f, 141.931f };
					break;
				
				case 13:
					Var0 = { -777.704f, 611.727f, 141.927f };
					break;
				
				case 14:
					Var0 = { -760.067f, 617.711f, 135.519f };
					break;
				
				case 15:
					Var0 = { -761.857f, 613.312f, 144.436f };
					break;
				
				case 16:
					Var0 = { -755.771f, 615.58f, 135.53f };
					break;
				
				case 17:
					Var0 = { -759.542f, 616.43f, 135.428f };
					break;
				
				case 18:
					Var0 = { -765.681f, 616.25f, 142.925f };
					break;
				
				case 19:
					Var0 = { -766.199f, 610.998f, 143.736f };
					break;
				
				case 20:
					Var0 = { -770.641f, 606.95f, 140.067f };
					break;
				
				case 21:
					Var0 = { -770.854f, 607.562f, 140.035f };
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.08f, -579.813f, 111.013f };
					break;
				
				case 1:
					Var0 = { -1554.52f, -578.673f, 111.013f };
					break;
				
				case 2:
					Var0 = { -1552.97f, -577.536f, 111.01f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.932f, 111.014f };
					break;
				
				case 4:
					Var0 = { -1559.78f, -582.504f, 110.976f };
					break;
				
				case 5:
					Var0 = { -1561.27f, -583.588f, 110.978f };
					break;
				
				case 6:
					Var0 = { -1562.74f, -584.654f, 110.977f };
					break;
				
				case 7:
					Var0 = { -1564.21f, -585.721f, 110.976f };
					break;
				
				case 8:
					Var0 = { -1565.64f, -586.759f, 110.98f };
					break;
				
				case 9:
					Var0 = { -1567.12f, -587.838f, 110.979f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.432f, 111.009f };
					break;
				
				case 11:
					Var0 = { -1572.47f, -591.724f, 111.008f };
					break;
				
				case 12:
					Var0 = { -1570.88f, -590.57f, 111.005f };
					break;
				
				case 14:
					Var0 = { -1556.14f, -575.462f, 108.362f };
					break;
				
				case 15:
					Var0 = { -1554.89f, -571.738f, 108.101f };
					break;
				
				case 16:
					Var0 = { -1554.76f, -571.925f, 108.052f };
					break;
				
				case 17:
					Var0 = { -1555.03f, -571.701f, 108.065f };
					break;
				
				case 18:
					Var0 = { -1554.5f, -572.978f, 107.494f };
					break;
				
				case 19:
					Var0 = { -1554.78f, -573.08f, 107.529f };
					break;
				
				case 20:
					Var0 = { -1555.4f, -571.738f, 108.599f };
					break;
			}
			break;
		
		case 52:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.803f, 111.027f };
					break;
				
				case 1:
					Var0 = { -1554.53f, -578.681f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.99f, -577.554f, 111.024f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.933f, 111.024f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.582f, 110.955f };
					break;
				
				case 5:
					Var0 = { -1561.35f, -583.627f, 110.958f };
					break;
				
				case 6:
					Var0 = { -1562.81f, -584.689f, 110.954f };
					break;
				
				case 7:
					Var0 = { -1564.31f, -585.781f, 110.953f };
					break;
				
				case 8:
					Var0 = { -1565.59f, -586.719f, 110.954f };
					break;
				
				case 9:
					Var0 = { -1567.09f, -587.805f, 110.954f };
					break;
				
				case 10:
					Var0 = { -1569.33f, -589.432f, 111.002f };
					break;
				
				case 11:
					Var0 = { -1572.5f, -591.744f, 110.994f };
					break;
				
				case 12:
					Var0 = { -1570.9f, -590.583f, 110.997f };
					break;
				
				case 14:
					Var0 = { -1556.11f, -575.479f, 108.372f };
					break;
				
				case 15:
					Var0 = { -1554.47f, -572.967f, 107.525f };
					break;
				
				case 16:
					Var0 = { -1554.77f, -573.14f, 107.535f };
					break;
				
				case 17:
					Var0 = { -1554.78f, -571.919f, 108.074f };
					break;
				
				case 18:
					Var0 = { -1554.88f, -571.728f, 108.109f };
					break;
				
				case 19:
					Var0 = { -1554.96f, -571.639f, 108.149f };
					break;
				
				case 20:
					Var0 = { -1555.41f, -571.733f, 108.581f };
					break;
			}
			break;
		
		case 53:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1556.07f, -579.804f, 111.021f };
					break;
				
				case 1:
					Var0 = { -1554.51f, -578.669f, 111.021f };
					break;
				
				case 2:
					Var0 = { -1552.96f, -577.541f, 111.02f };
					break;
				
				case 3:
					Var0 = { -1557.62f, -580.931f, 111.02f };
					break;
				
				case 4:
					Var0 = { -1559.91f, -582.595f, 110.941f };
					break;
				
				case 5:
					Var0 = { -1561.41f, -583.686f, 110.941f };
					break;
				
				case 6:
					Var0 = { -1562.79f, -584.688f, 110.942f };
					break;
				
				case 7:
					Var0 = { -1564.24f, -585.738f, 110.934f };
					break;
				
				case 8:
					Var0 = { -1565.69f, -586.794f, 110.932f };
					break;
				
				case 9:
					Var0 = { -1567.01f, -587.755f, 110.933f };
					break;
				
				case 10:
					Var0 = { -1569.32f, -589.433f, 110.994f };
					break;
				
				case 11:
					Var0 = { -1572.46f, -591.715f, 110.991f };
					break;
				
				case 12:
					Var0 = { -1570.89f, -590.573f, 110.993f };
					break;
				
				case 14:
					Var0 = { -1556.16f, -575.495f, 108.366f };
					break;
				
				case 15:
					Var0 = { -1554.69f, -573.113f, 107.565f };
					break;
				
				case 16:
					Var0 = { -1554.92f, -571.749f, 108.114f };
					break;
				
				case 17:
					Var0 = { -1554.97f, -571.647f, 108.087f };
					break;
				
				case 18:
					Var0 = { -1554.81f, -571.941f, 108.193f };
					break;
				
				case 19:
					Var0 = { -1555.41f, -571.733f, 108.577f };
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 2:
					Var0 = { 970.361f, -3008.27f, -48.547f };
					break;
				
				case 3:
					Var0 = { 962.617f, -3008.31f, -48.547f };
					break;
				
				case 4:
					Var0 = { 955.074f, -3010.29f, -48.547f };
					break;
				
				case 5:
					Var0 = { 955.655f, -3010.34f, -47.749f };
					break;
				
				case 6:
					Var0 = { 962.567f, -3008.32f, -48.547f };
					break;
				
				case 7:
					Var0 = { 952.557f, -3006.29f, -47.651f };
					break;
				
				case 8:
					Var0 = { 953.653f, -3009.95f, -47.731f };
					break;
				
				case 9:
					Var0 = { 954.945f, -3008.41f, -47.945f };
					break;
				
				case 10:
					Var0 = { 960.759f, -3007.08f, -47.944f };
					break;
				
				case 11:
					Var0 = { 964.01f, -3004.83f, -47.944f };
					break;
				
				case 12:
					Var0 = { 968.329f, -3008.86f, -47.944f };
					break;
				
				case 13:
					Var0 = { 971.982f, -3006.9f, -47.944f };
					break;
				
				case 14:
					Var0 = { 952.421f, -3007.53f, -48.547f };
					break;
				
				case 15:
					Var0 = { 1093.96f, -3098.97f, -40f };
					break;
				
				case 16:
					Var0 = { 1097.94f, -3101.85f, -39.416f };
					break;
				
				case 17:
					Var0 = { 1091.8f, -3102.1f, -40f };
					break;
				
				case 18:
					Var0 = { 1101.32f, -3097.06f, -40f };
					break;
				
				case 19:
					Var0 = { 1097.54f, -3098f, -39.999f };
					break;
				
				case 20:
					Var0 = { 1095.04f, -3096.34f, -40f };
					break;
				
				case 21:
					Var0 = { 1096.17f, -3102.22f, -40f };
					break;
				
				case 22:
					Var0 = { 1088.7f, -3097.29f, -39.997f };
					break;
				
				case 23:
					Var0 = { 1101.8f, -3101.48f, -39.997f };
					break;
				
				case 24:
					Var0 = { 1095.14f, -3098.11f, -39.404f };
					break;
				
				case 25:
					Var0 = { 1101.32f, -3100.76f, -38.843f };
					break;
			}
			break;
		
		case 60:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1060.03f, -3098.1f, -39.993f };
					break;
				
				case 10:
					Var0 = { 1053.52f, -3107.47f, -39.997f };
					break;
				
				case 11:
					Var0 = { 1068.56f, -3100.27f, -39.911f };
					break;
				
				case 12:
					Var0 = { 1068.13f, -3106.15f, -39.875f };
					break;
				
				case 13:
					Var0 = { 1050.45f, -3095.33f, -39.875f };
					break;
				
				case 14:
					Var0 = { 1062.71f, -3102.73f, -39.999f };
					break;
				
				case 15:
					Var0 = { 1062.64f, -3109.4f, -40.104f };
					break;
				
				case 16:
					Var0 = { 1055.59f, -3095.77f, -40.004f };
					break;
				
				case 17:
					Var0 = { 1062.8f, -3096.05f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.94f, -3110.31f, -40f };
					break;
				
				case 19:
					Var0 = { 1055.37f, -3102.58f, -40f };
					break;
				
				case 20:
					Var0 = { 1050.41f, -3096.75f, -40f };
					break;
				
				case 21:
					Var0 = { 1065.13f, -3095.59f, -40f };
					break;
				
				case 22:
					Var0 = { 1057.63f, -3102.73f, -40f };
					break;
				
				case 23:
					Var0 = { 1060.28f, -3109.25f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.12f, -3107.19f, -40f };
					break;
			}
			break;
		
		case 61:
			switch (iParam1)
			{
				case 10:
					Var0 = { 1062.73f, -3102.65f, -40.005f };
					break;
				
				case 11:
					Var0 = { 1059.84f, -3098.36f, -39.993f };
					break;
				
				case 12:
					Var0 = { 1053.18f, -3107.29f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1055.54f, -3095.79f, -40.004f };
					break;
				
				case 14:
					Var0 = { 1068.45f, -3100.11f, -39.911f };
					break;
				
				case 15:
					Var0 = { 1068.19f, -3106.3f, -39.875f };
					break;
				
				case 16:
					Var0 = { 1050.28f, -3095.22f, -39.875f };
					break;
				
				case 17:
					Var0 = { 1055.49f, -3102.77f, -40f };
					break;
				
				case 18:
					Var0 = { 1062.57f, -3096.19f, -40f };
					break;
				
				case 19:
					Var0 = { 1062.73f, -3109.38f, -40.004f };
					break;
				
				case 20:
					Var0 = { 1057.81f, -3110.68f, -40f };
					break;
				
				case 21:
					Var0 = { 1050.54f, -3097.03f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.13f, -3095.94f, -40f };
					break;
				
				case 23:
					Var0 = { 1057.57f, -3102.46f, -40f };
					break;
				
				case 24:
					Var0 = { 1052.05f, -3106.59f, -40f };
					break;
				
				case 25:
					Var0 = { 1060.13f, -3109.52f, -40.1f };
					break;
			}
			break;
		
		case 62:
			switch (iParam1)
			{
				case 9:
					Var0 = { 1051.8f, -3100.1f, -39.911f };
					break;
				
				case 10:
					Var0 = { 1053.11f, -3096.68f, -39.875f };
					break;
				
				case 11:
					Var0 = { 1057.84f, -3102.69f, -39.999f };
					break;
				
				case 12:
					Var0 = { 1068.43f, -3107.14f, -39.997f };
					break;
				
				case 13:
					Var0 = { 1060.64f, -3097.96f, -39.993f };
					break;
				
				case 14:
					Var0 = { 1060.27f, -3109.22f, -40.004f };
					break;
				
				case 15:
					Var0 = { 1065.18f, -3095.68f, -40.004f };
					break;
				
				case 16:
					Var0 = { 1065.26f, -3102.84f, -40f };
					break;
				
				case 17:
					Var0 = { 1055.62f, -3110.61f, -40f };
					break;
				
				case 18:
					Var0 = { 1057.95f, -3095.86f, -40f };
					break;
				
				case 19:
					Var0 = { 1057.89f, -3109.3f, -40f };
					break;
				
				case 20:
					Var0 = { 1062.7f, -3095.94f, -40f };
					break;
				
				case 21:
					Var0 = { 1067.55f, -3102.7f, -40f };
					break;
				
				case 22:
					Var0 = { 1065.21f, -3109.07f, -40f };
					break;
				
				case 23:
					Var0 = { 1069.96f, -3096.07f, -40.019f };
					break;
			}
			break;
		
		case 54:
		case 55:
			switch (iParam1)
			{
				case 14:
					Var0 = { 527.034f, 4750.56f, -69.996f };
					break;
				
				case 15:
					Var0 = { 523.106f, 4748.99f, -69.996f };
					break;
				
				case 16:
					Var0 = { 520.783f, 4751.96f, -70f };
					break;
				
				case 17:
					Var0 = { 509.587f, 4749.41f, -69.816f };
					break;
				
				case 18:
					Var0 = { 508.629f, 4748.8f, -68.493f };
					break;
				
				case 19:
					Var0 = { 507.79f, 4748.8f, -68.49f };
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 13:
					Var0 = { 527.282f, 4750.55f, -69.978f };
					break;
				
				case 14:
					Var0 = { 523.103f, 4749.02f, -69.996f };
					break;
				
				case 15:
					Var0 = { 520.286f, 4752.03f, -70f };
					break;
				
				case 16:
					Var0 = { 508.642f, 4748.81f, -68.53f };
					break;
				
				case 17:
					Var0 = { 507.783f, 4748.78f, -68.551f };
					break;
				
				case 18:
					Var0 = { 509.609f, 4749.65f, -69.816f };
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 1:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 2:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 3:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 5:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 6:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 7:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 8:
					Var0 = { -1256.88f, -3028.78f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 10:
					Var0 = { -1271.01f, -3006.86f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1250.56f, -3033.55f, -49.488f };
					break;
				
				case 12:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 13:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 14:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 15:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 16:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 17:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 18:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 19:
					break;
				
				case 20:
					break;
				
				case 21:
					Var0 = { -1253.65f, -3036.25f, -49.484f };
					break;
				
				case 22:
					Var0 = { -1241.2f, -3002.71f, -42.888f };
					break;
				
				case 23:
					Var0 = { -1239.3f, -3002.78f, -43.08f };
					break;
				
				case 24:
					Var0 = { -1239.61f, -3002.97f, -43.086f };
					break;
				
				case 25:
					Var0 = { -1299.62f, -3031.62f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.31f, -48.707f };
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1254.13f, -3033.29f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.51f, -3034.71f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1241.19f, -3002.96f, -42.884f };
					break;
				
				case 23:
					Var0 = { -1240.54f, -3003.18f, -43.067f };
					break;
				
				case 24:
					Var0 = { -1239.34f, -3002.96f, -43.085f };
					break;
				
				case 25:
					Var0 = { -1299.53f, -3031.74f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.52f, -3030.39f, -48.711f };
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 1:
					Var0 = { -1284.05f, -3015.49f, -49.49f };
					break;
				
				case 2:
					Var0 = { -1282.61f, -3019.03f, -49.494f };
					break;
				
				case 3:
					Var0 = { -1253.14f, -3011.39f, -49.49f };
					break;
				
				case 4:
					Var0 = { -1251.87f, -3013.93f, -49.49f };
					break;
				
				case 5:
					Var0 = { -1230.81f, -3062.46f, -49.585f };
					break;
				
				case 6:
					Var0 = { -1254.58f, -3013.43f, -49.488f };
					break;
				
				case 7:
					Var0 = { -1281.58f, -3016.27f, -49.49f };
					break;
				
				case 8:
					Var0 = { -1270.88f, -3008.99f, -49.489f };
					break;
				
				case 9:
					Var0 = { -1253.17f, -3028.16f, -49.489f };
					break;
				
				case 10:
					Var0 = { -1257.27f, -2992.3f, -49.491f };
					break;
				
				case 11:
					Var0 = { -1270.55f, -3007f, -49.491f };
					break;
				
				case 12:
					Var0 = { -1253.62f, -3034.36f, -49.484f };
					break;
				
				case 13:
					Var0 = { -1250.1f, -3035.93f, -49.488f };
					break;
				
				case 14:
					Var0 = { -1293.63f, -3005.67f, -49.488f };
					break;
				
				case 15:
					Var0 = { -1240.41f, -3017.84f, -49.49f };
					break;
				
				case 16:
					Var0 = { -1236.94f, -3009.41f, -49.489f };
					break;
				
				case 17:
					Var0 = { -1243.08f, -3007.01f, -49.493f };
					break;
				
				case 18:
					Var0 = { -1234.46f, -3001.42f, -49.513f };
					break;
				
				case 19:
					Var0 = { -1229.99f, -3013.47f, -49.487f };
					break;
				
				case 20:
					Var0 = { -1237.01f, -2998.21f, -49.487f };
					break;
				
				case 21:
					break;
				
				case 22:
					Var0 = { -1239.38f, -3002.83f, -43.087f };
					break;
				
				case 23:
					Var0 = { -1240.49f, -3002.92f, -43.063f };
					break;
				
				case 24:
					Var0 = { -1241.19f, -3002.83f, -42.88f };
					break;
				
				case 25:
					Var0 = { -1299.56f, -3030.33f, -48.686f };
					break;
				
				case 26:
					Var0 = { -1299.46f, -3031.64f, -48.708f };
					break;
			}
			break;
	}
	return Var0;
}

int func_79(int iParam0)
{
	if (func_33(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_192;
	}
	return -1;
}

void func_80()
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34(PLAYER::PLAYER_ID()) == 256)
	{
		iVar0 = -1;
		switch (func_32(PLAYER::PLAYER_ID()))
		{
			case 19:
				iVar0 = func_79(PLAYER::PLAYER_ID());
				switch (iVar0)
				{
					case 48:
						Var1 = { -2136.9f, 5406.84f, -72.701f };
						break;
					
					case 49:
						Var1 = { 3721.85f, 6010.4f, -153.529f };
						break;
					
					case 50:
						Var1 = { 204.126f, 7645.72f, -153.104f };
						break;
				}
				if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !CAM::IS_SCREEN_FADED_OUT()) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var1) < 25f) && !HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_25(&uLocal_70, 20000, 0))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				else if (func_24(&uLocal_70))
				{
					func_23(&uLocal_70);
				}
				break;
			
			case 17:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 971.6008f, 60.19165f, 118.2942f, 967.9448f, 53.68709f, 119.7942f, 9.5f, false, true, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 972.0234f, 58.7202f, 115.1641f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 111.7022f);
				}
				break;
		}
	}
	else if (func_24(&uLocal_70))
	{
		func_23(&uLocal_70);
	}
}

void func_81()
{
	if (Global_2540384.f_342)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		PAD::DISABLE_CONTROL_ACTION(2, 201, true);
		iLocal_67 = 1;
		func_23(&uLocal_68);
	}
	else if (iLocal_67)
	{
		if ((!func_25(&uLocal_68, 1500, 0) || !CAM::IS_SCREEN_FADED_IN()) || CAM::IS_SCREEN_FADING_IN())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			PAD::DISABLE_CONTROL_ACTION(2, 201, true);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_67 = 0;
			func_23(&uLocal_68);
		}
	}
}

void func_82()
{
	bool bVar0;
	int iVar1;
	
	if (func_84())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 74, true);
		PAD::DISABLE_CONTROL_ACTION(0, 104, true);
		PAD::DISABLE_CONTROL_ACTION(0, 54, true);
	}
	if (func_83(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("dune3"))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 104, true);
					PAD::DISABLE_CONTROL_ACTION(0, 54, true);
				}
			}
		}
	}
	if (PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 373))
	{
		if (func_38(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_314.f_6) == 11)
		{
			bVar0 = true;
			if (!iLocal_26 || !Global_1689673)
			{
				Global_1689673 = 1;
				iLocal_26 = 1;
			}
		}
	}
	if (!bVar0)
	{
		if (iLocal_26)
		{
			Global_1689673 = 0;
			iLocal_26 = 0;
		}
	}
}

int func_83(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_39())
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
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_84()
{
	return Global_1678288.f_482;
}

void func_85()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_24(&uLocal_18))
	{
		MISC::SET_BIT(&Global_7552, 2);
		if (func_25(&uLocal_18, 60000, 0))
		{
			func_16(&uLocal_18, 0, 0);
			func_23(&uLocal_18);
		}
	}
	if (func_24(&uLocal_16) && func_25(&uLocal_16, 1000, 0))
	{
		if (iLocal_25 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_25 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_25, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_25(&uLocal_16, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_25))
			{
				AUDIO::STOP_SOUND(iLocal_25);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_25);
			iLocal_25 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_16(&uLocal_16, 0, 0);
			func_23(&uLocal_16);
		}
	}
	if (!iLocal_10 && !func_95())
	{
		return;
	}
	iLocal_10 = 1;
	MISC::SET_BIT(&Global_7552, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_9))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_9 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360.8759f, 5623.427f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_9, 8000);
			iVar1 = func_94(7867, -1, 0);
			func_91(7867, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
			iLocal_23 = 0;
		}
	}
	else
	{
		func_90();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_24 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_24 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_24, "07", iLocal_9, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_11)
			{
				if (func_25(&uLocal_12, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_9, false);
					func_16(&uLocal_12, 0, 0);
					func_23(&uLocal_12);
					func_26(&uLocal_14, 0, 0);
					iLocal_11 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_68(&uLocal_14, 0, 0)) / SYSTEM::TO_FLOAT(func_89()));
				fVar47 = (SYSTEM::TO_FLOAT(func_68(&uLocal_12, 0, 0)) / SYSTEM::TO_FLOAT(func_88()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_86(Local_20, func_87(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_9, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_23++;
					Local_20 = { ENTITY::GET_ENTITY_COORDS(iLocal_9, false) };
					func_16(&uLocal_12, 0, 0);
					func_23(&uLocal_12);
					if (func_88() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_9);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_24))
						{
							AUDIO::STOP_SOUND(iLocal_24);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_24);
						iLocal_24 = -1;
						func_26(&uLocal_16, 0, 0);
						func_26(&uLocal_18, 0, 0);
						func_16(&uLocal_14, 0, 0);
						func_23(&uLocal_14);
						Local_20 = { 0f, 0f, 0f };
						iLocal_23 = 0;
						iLocal_10 = 0;
						iLocal_11 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_86(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_87()
{
	switch (iLocal_23)
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

int func_88()
{
	switch (iLocal_23)
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

int func_89()
{
	return 3150;
}

void func_90()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_9, 2) };
	Var0.x = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_9, Var0, 2, true);
}

void func_91(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_92(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_92(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_93();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_93()
{
	return Global_1312763;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_92(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_95()
{
	if (((((((func_99(22107, -1, -1) && Global_2409291 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_98(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f)) && Global_2452679.f_3074.f_178 >= 1) && Global_2452679.f_3074.f_178 < 4) && func_97()) && func_96())
	{
		return 1;
	}
	return 0;
}

int func_96()
{
	if (func_99(15476, -1, -1) && func_94(5451, func_93(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_97()
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

bool func_98(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_99(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_93();
	}
	iVar1 = func_101(iParam0, iParam1);
	iVar2 = func_100(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_100(int iParam0)
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
	return iVar0;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_93();
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
	return iVar0;
}

void func_102()
{
	if (Global_1704006 == 1)
	{
		if (!Global_1689724)
		{
			Global_1689724 = 1;
		}
	}
	else if (Global_1689724)
	{
		Global_1689724 = 0;
	}
}

void func_103()
{
	if (!func_104())
	{
		if (func_24(&uLocal_6))
		{
			func_23(&uLocal_6);
		}
		iLocal_8 = 0;
	}
	if (iLocal_8)
	{
		return;
	}
	if (!func_24(&uLocal_6))
	{
		func_16(&uLocal_6, 0, 0);
	}
	if (!func_25(&uLocal_6, 35000, 0))
	{
		return;
	}
	iLocal_8 = 1;
	Global_2451787.f_42.f_3 = 3;
	Global_2451787.f_42.f_40 = 1;
	MISC::SET_BIT(&(Global_4456448.f_27), 22);
	CAM::DO_SCREEN_FADE_OUT(0);
	NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);
	CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
}

int func_104()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (!Global_2451787.f_23)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_2451787.f_42.f_4, 0) && !Global_2451787.f_42.f_57)
	{
		return 0;
	}
	if (Global_2451787.f_42 == -1)
	{
		return 0;
	}
	if (Global_2451787.f_42.f_3 != 6)
	{
		return 0;
	}
	return 1;
}

void func_105()
{
	if ((NETWORK::GET_CLOUD_TIME_AS_INT() > func_94(9583, -1, 0) && func_108(PLAYER::PLAYER_ID()) == 258) && func_107() == 3)
	{
		func_106(-1);
	}
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() + Global_262145.f_29435);
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	func_91(9583, iVar0, -1, 1, 0);
}

int func_107()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_102;
}

int func_108(int iParam0)
{
	if (func_109(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_109(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_110()
{
	switch (func_111())
	{
		case joaat("cheetah2"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("paragon2"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("dominator3"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("tropos"):
			Global_1696941 = 0.56f;
			break;
		
		case joaat("omnis"):
			Global_1696941 = 0.66f;
			break;
		
		case joaat("paragon"):
			Global_1696941 = 0.65f;
			break;
		
		case joaat("toreador"):
			Global_1696941 = 0.55f;
			break;
		
		case joaat("peyote3"):
			Global_1696941 = 0.47f;
			break;
		
		case joaat("osiris"):
			Global_1696941 = 0.8f;
			break;
		
		case joaat("tyrus"):
			Global_1696941 = 0.47f;
			break;
	}
}

int func_111()
{
	return Global_262145.f_26058;
}

void func_112()
{
	if ((Global_110804 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_113())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

int func_113()
{
	if (func_114() == 0)
	{
		return 1;
	}
	return 0;
}

int func_114()
{
	return Global_1312485.f_18;
}

void func_115()
{
	int iVar0;
	
	if (!iLocal_5)
	{
		if (Global_1574217)
		{
			iVar0 = func_116(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10128 = 1;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_5 = 0;
	}
}

int func_116(int iParam0)
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

void func_117()
{
	if (!iLocal_4)
	{
		if (Global_1574217)
		{
			if (func_119() || func_118())
			{
				Global_262145.f_19705 = 1;
			}
			else
			{
				Global_262145.f_19705 = 0;
			}
			iLocal_4 = 1;
		}
	}
	else if (!Global_1574217)
	{
		iLocal_4 = 0;
	}
}

int func_118()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_116(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10237)
	{
		return 0;
	}
	uVar1[0] = func_116(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_116(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_116(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_116(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10233 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10237)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_119()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_116(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));
	if (iVar0 < Global_262145.f_10236)
	{
		return 0;
	}
	uVar1[0] = func_116(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	uVar1[1] = func_116(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	uVar1[2] = func_116(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	uVar1[3] = func_116(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10232 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10236)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_120()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1590682)
		{
			MISC::SET_BIT(&(Global_1590682[iVar0 /*883*/].f_744), 1);
			iVar0++;
		}
	}
}

void func_121()
{
	if (Global_262145.f_10212 != 120)
	{
		Global_262145.f_10212 = 120;
	}
}

void func_122()
{
	int iVar0;
	
	iLocal_3 = 0;
	if (func_15(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iLocal_3 = ENTITY::GET_ENTITY_MODEL(iVar0);
		}
	}
}

void func_123()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_124(0.69f, 0.06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_124(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_125()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_126()
{
	AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_13_JAZZ", "WWFM_ISLAND_UPDATE_MUSIC_MUSIC");
	AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_14_DANCE_02", "FLYLO_ISLAND_UPDATE_MUSIC_MUSIC");
}

