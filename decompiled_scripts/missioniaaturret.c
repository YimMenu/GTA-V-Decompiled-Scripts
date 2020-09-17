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
	func_449();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_3();
		if (func_1())
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

int func_1()
{
	if ((!func_2(3) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return 1;
	}
	return 0;
}

bool func_2(int iParam0)
{
	return Global_262145.f_5008[iParam0] == Global_4456448.f_194990;
}

void func_3()
{
	func_4();
}

void func_4()
{
	Local_474.f_2 = { 2061.584f, 2993.74f, -68.7022f };
	func_24(&uLocal_1776, &uLocal_517, &(Local_64.f_52), &Local_64, &uLocal_1803, &Local_474, &uLocal_1991);
	func_5(&uLocal_1776, &uLocal_517, &(Local_64.f_52), &Local_64);
}

void func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (uParam0->f_18 == 1)
	{
		func_19(uParam1);
		func_6(uParam1, uParam2, uParam3);
	}
}

void func_6(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (((((uParam0[iVar0]->f_7 == 0 && !uParam0[iVar0]->f_67) && uParam0[iVar0]->f_6 == 1) && !uParam0[iVar0]->f_8) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_15(uParam0[iVar0]->f_5), PLAYER::PLAYER_ID(), 1, 0)) && func_14(PLAYER::PLAYER_ID(), 0, 1))
		{
			SCRIPT::REQUEST_SCRIPT(func_15(uParam0[iVar0]->f_5));
			if (SCRIPT::HAS_SCRIPT_LOADED(func_15(uParam0[iVar0]->f_5)))
			{
				uVar1 = func_15(uParam0[iVar0]->f_5);
				func_13(uParam1[iVar0], &(uParam0[iVar0]->f_22));
				func_12(uParam2[iVar0], &(uParam0[iVar0]->f_16));
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(func_15(uParam0[iVar0]->f_5), uParam0[iVar0], 74, func_11(uParam0[iVar0]->f_5));
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_15(uParam0[iVar0]->f_5));
				uParam0[iVar0]->f_7 = 1;
			}
		}
		else if (((uParam0[iVar0]->f_7 == 1 && !uParam0[iVar0]->f_8) && !uParam0[iVar0]->f_67) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_15(uParam0[iVar0]->f_5), PLAYER::PLAYER_ID(), 1, 0))
		{
			uParam0[iVar0]->f_7 = 0;
			uVar2 = func_15(uParam0[iVar0]->f_5);
		}
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < 17)
	{
		if ((((((uParam0[iVar3]->f_7 == 0 && !uParam0[iVar3]->f_67) && uParam0[iVar3]->f_6 == 1) && uParam0[iVar3]->f_8) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_15(uParam0[iVar3]->f_5), iVar3 + 32, 1, 0)) && func_14(PLAYER::PLAYER_ID(), 0, 1)) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_11(uParam0[iVar3]->f_5)) > 0)
		{
			SCRIPT::REQUEST_SCRIPT(func_15(uParam0[iVar3]->f_5));
			if (SCRIPT::HAS_SCRIPT_LOADED(func_15(uParam0[iVar3]->f_5)))
			{
				uVar4 = func_15(uParam0[iVar3]->f_5);
				func_13(uParam1[iVar3], &(uParam0[iVar3]->f_22));
				func_12(uParam2[iVar3], &(uParam0[iVar3]->f_16));
				SYSTEM::START_NEW_SCRIPT_WITH_ARGS(func_15(uParam0[iVar3]->f_5), uParam0[iVar3], 74, func_11(uParam0[iVar3]->f_5));
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_15(uParam0[iVar3]->f_5));
				uParam0[iVar3]->f_7 = 1;
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 17)
	{
		if ((((((uParam0[iVar3]->f_7 == 0 && uParam0[iVar3]->f_67) && uParam0[iVar3]->f_6 == 1) && uParam0[iVar3]->f_8) && !SCRIPT::IS_THREAD_ACTIVE(uParam0[iVar3]->f_70)) && func_14(PLAYER::PLAYER_ID(), 0, 1)) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_11(uParam0[iVar3]->f_5)) > 0)
		{
			SCRIPT::REQUEST_SCRIPT(func_15(uParam0[iVar3]->f_5));
			if (SCRIPT::HAS_SCRIPT_LOADED(func_15(uParam0[iVar3]->f_5)))
			{
				func_13(uParam1[iVar3], &(uParam0[iVar3]->f_22));
				func_12(uParam2[iVar3], &(uParam0[iVar3]->f_16));
				uParam0[iVar3]->f_70 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(func_15(uParam0[iVar3]->f_5), uParam0[iVar3], 74, func_11(uParam0[iVar3]->f_5));
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_15(uParam0[iVar3]->f_5));
				uParam0[iVar3]->f_7 = 1;
				if (!func_10(&(uParam0[iVar3]->f_71)))
				{
					func_9(&(uParam0[iVar3]->f_71), 1, 0);
				}
			}
		}
		else if (((uParam0[iVar3]->f_6 == 1 && uParam0[iVar3]->f_8) && uParam0[iVar3]->f_7 == 1) && uParam0[iVar3]->f_67)
		{
			if (func_10(&(uParam0[iVar3]->f_71)))
			{
				if (func_8(&(uParam0[iVar3]->f_71), 500, 1))
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(uParam0[iVar3]->f_70))
					{
						uVar5 = func_15(uParam0[iVar3]->f_5);
						uVar5 = uVar5;
						if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_11(uParam0[iVar3]->f_5)) == 0)
						{
						}
						uParam0[iVar3]->f_7 = 0;
						func_7(&(uParam0[iVar3]->f_71));
					}
				}
			}
		}
		iVar3++;
	}
}

void func_7(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_9(uParam0, bParam2, 0);
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

void func_9(var uParam0, bool bParam1, bool bParam2)
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

bool func_10(var uParam0)
{
	return uParam0->f_1;
}

int func_11(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_15(iParam0)))
	{
		if (MISC::ARE_STRINGS_EQUAL(func_15(iParam0), "net_apartment_activity_LIGHT"))
		{
			return 1424;
		}
	}
	return 4500;
}

void func_12(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0]))
		{
			(*uParam1)[iVar0] = NETWORK::NET_TO_PED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_13(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam0)[iVar0]))
		{
			(*uParam1)[iVar0] = NETWORK::NET_TO_OBJ((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
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

char* func_15(int iParam0)
{
	if (func_16(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 119:
			case 120:
			case 121:
			case 167:
			case 165:
			case 166:
			case 124:
			case 125:
			case 182:
			case 179:
			case 175:
			case 183:
				return "net_apartment_activity_LIGHT";
				break;
			}
	}
	return "net_apartment_activity";
}

int func_16(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_17(int iParam0)
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
		case 79:
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

int func_18()
{
	return -1;
}

void func_19(var uParam0)
{
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 0;
		while (iVar0 < 17)
		{
			if (uParam0[iVar0]->f_5 != -1 && !uParam0[iVar0]->f_8)
			{
				if (uParam0[iVar0]->f_6 == 0)
				{
					if (func_23(uParam0[iVar0]) || func_20(uParam0[iVar0], PLAYER::PLAYER_ID(), 1))
					{
						uParam0[iVar0]->f_6 = 1;
					}
				}
				else if (uParam0[iVar0]->f_6 == 1)
				{
					if (!func_23(uParam0[iVar0]) && !func_20(uParam0[iVar0], PLAYER::PLAYER_ID(), 0))
					{
						uParam0[iVar0]->f_6 = 0;
					}
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 17)
		{
			if (uParam0[iVar1]->f_5 != -1 && uParam0[iVar1]->f_8)
			{
				if (uParam0[iVar1]->f_6 == 0)
				{
					if (func_23(uParam0[iVar1]) || func_20(uParam0[iVar1], iVar1 + 32, 1))
					{
						uParam0[iVar1]->f_6 = 1;
					}
				}
				else if (uParam0[iVar1]->f_6 == 1)
				{
					if (!func_23(uParam0[iVar1]) && !func_20(uParam0[iVar1], iVar1 + 32, 0))
					{
						uParam0[iVar1]->f_6 = 0;
					}
				}
			}
			iVar1++;
		}
	}
}

int func_20(var uParam0, int iParam1, int iParam2)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_2, 1) <= *uParam0 && func_21(uParam0))
	{
		if (iParam2 == 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_apartment_activity", iParam1, 0, 0))
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
			return 1;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_22(uParam0->f_46[iVar0]) && !func_22(uParam0->f_53[iVar0]))
		{
			fVar1 = 1f;
			if (uParam0->f_60[0] != 0f)
			{
				fVar1 = uParam0->f_60[0];
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_46[iVar0], uParam0->f_53[iVar0], fVar1, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_22(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_23(var uParam0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_2, 1) <= *uParam0 && uParam0->f_8 == 1)
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!uParam0->f_19)
	{
		func_447(uParam0, uParam1, uParam5, uParam4);
	}
	if (uParam0->f_18 == 0 && uParam0->f_19 == 1)
	{
		Var0.f_14.f_17 = 2;
		Var0.f_14.f_17.f_1 = 1;
		Var0.f_14.f_17.f_3 = 1065353216;
		Var0.f_14.f_17.f_5 = 1065353216;
		Var0.f_14.f_17.f_6 = -1;
		Var0.f_14.f_24 = 20;
		Var0.f_14.f_24.f_1.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_12 = 2;
		Var0.f_14.f_24.f_1.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_41 = 2;
		Var0.f_14.f_24.f_1.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_68 = 1;
		Var0.f_14.f_24.f_1.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_9 = 1082130432;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_10 = -1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_11 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_12.f_1.f_14.f_12 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41 = 2;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13 = 1065353216;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_41.f_1.f_13.f_11 = -1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68 = 1;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_1 = 1073741824;
		Var0.f_14.f_24.f_1.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_79.f_68.f_1.f_3 = -1082130432;
		Var0.f_14.f_1605 = 2;
		Var0.f_14.f_1605.f_1.f_18 = 1082130432;
		Var0.f_14.f_1605.f_1.f_19 = -1065353216;
		Var0.f_14.f_1605.f_1.f_20 = 1;
		Var0.f_14.f_1605.f_1.f_21 = 2;
		Var0.f_14.f_1605.f_1.f_21.f_1 = 1065353216;
		Var0.f_14.f_1605.f_1.f_21.f_1.f_11 = -1;
		Var0.f_14.f_1605.f_1.f_21.f_1.f_13 = 1065353216;
		Var0.f_14.f_1605.f_1.f_21.f_1.f_13.f_11 = -1;
		Var0.f_14.f_1605.f_1.f_48.f_18 = 1082130432;
		Var0.f_14.f_1605.f_1.f_48.f_19 = -1065353216;
		Var0.f_14.f_1605.f_1.f_48.f_20 = 1;
		Var0.f_14.f_1605.f_1.f_48.f_21 = 2;
		Var0.f_14.f_1605.f_1.f_48.f_21.f_1 = 1065353216;
		Var0.f_14.f_1605.f_1.f_48.f_21.f_1.f_11 = -1;
		Var0.f_14.f_1605.f_1.f_48.f_21.f_1.f_13 = 1065353216;
		Var0.f_14.f_1605.f_1.f_48.f_21.f_1.f_13.f_11 = -1;
		Var0.f_14.f_1703 = 2;
		Var0.f_14.f_1712 = 2;
		Var0.f_14.f_1724 = -1;
		Var0.f_14.f_1724.f_1 = -1;
		Var0.f_14.f_1743 = -1082130432;
		Var0.f_14.f_1744 = -1082130432;
		Var0.f_14.f_1745 = -1082130432;
		Var0.f_14.f_1749 = 4;
		Var0.f_14.f_1754 = 1065353216;
		Var0.f_1769 = 2;
		Var0.f_1769.f_1.f_19 = 11;
		Var0.f_1769.f_1.f_31 = 11;
		Var0.f_1769.f_1.f_43 = 11;
		Var0.f_1769.f_1.f_55 = 11;
		Var0.f_1769.f_1.f_67 = 11;
		Var0.f_1769.f_1.f_79.f_19 = 11;
		Var0.f_1769.f_1.f_79.f_31 = 11;
		Var0.f_1769.f_1.f_79.f_43 = 11;
		Var0.f_1769.f_1.f_79.f_55 = 11;
		Var0.f_1769.f_1.f_79.f_67 = 11;
		Var0.f_1939 = 2;
		Var0.f_1986.f_4 = 1065353216;
		Var0.f_1986.f_4.f_1 = 5000;
		Var0.f_1986.f_4.f_2 = 1028443341;
		Var0.f_1999 = 20;
		Var0.f_1999.f_1.f_3 = 1084227584;
		Var0.f_1999.f_1.f_5 = 1;
		Var0.f_1999.f_1.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_3 = 1084227584;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_5 = 1;
		Var0.f_1999.f_1.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_9.f_7 = 1;
		Var0.f_2180 = 20;
		Var0.f_2201 = 20;
		Var0.f_2223 = 2;
		Var0.f_2223.f_1.f_1 = 12;
		Var0.f_2223.f_1.f_38 = 9;
		Var0.f_2223.f_1.f_38.f_1 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_57 = -1569615261;
		Var0.f_2223.f_1.f_66.f_1 = 12;
		Var0.f_2223.f_1.f_66.f_38 = 9;
		Var0.f_2223.f_1.f_66.f_38.f_1 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_38.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = -1;
		Var0.f_2223.f_1.f_66.f_57 = -1569615261;
		Var0.f_2356 = 2;
		Var0.f_2363 = 4;
		Var0.f_2368 = 4;
		Var0.f_2374 = 1;
		Var0.f_2379 = 1073741824;
		Var0.f_2379.f_1 = -1;
		Var0.f_2379.f_5 = -1;
		Var0.f_2379.f_16 = 2;
		Var0.f_2379.f_16.f_3 = 2;
		Var0.f_2379.f_22 = 20;
		Var0.f_2379.f_43 = 2;
		Var0.f_2379.f_46 = 2;
		Var0.f_2379.f_53 = 2;
		Var0.f_2379.f_60 = 2;
		Var0.f_2379.f_63 = 1048576000;
		Var0.f_2379.f_68 = -1;
		Var0.f_2379.f_73 = -1;
		iVar2461 = 0;
		iVar2461 = 0;
		while (iVar2461 < 17)
		{
			(*uParam0)[iVar2461] = 1;
			if (uParam1[iVar2461]->f_5 != -1)
			{
				Var0.f_1930 = uParam1[iVar2461]->f_5;
				uParam1[iVar2461]->f_1 = *uParam5;
				Var0.f_2453 = uParam5->f_1;
				func_299(&Var0, uParam1[iVar2461]);
				iVar2462 = 0;
				while (iVar2462 < 2)
				{
					func_274(uParam4[iVar2461]->f_2[iVar2462].f_2, &(Var0.f_2223[iVar2462]), uParam4[iVar2461]->f_2[iVar2462], iVar2462);
					iVar2462++;
				}
				Var0.f_14.f_5 = { uParam1[iVar2461]->f_10 };
				Var0.f_14.f_8 = { uParam1[iVar2461]->f_13 };
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (!func_273(&Var0, uParam2[iVar2461]) || !func_272(&Var0, uParam3[iVar2461]))
					{
						(*uParam0)[iVar2461] = 0;
						func_270(&Var0, uParam2[iVar2461]);
						func_262(&Var0, uParam3[iVar2461]);
					}
				}
				if (!func_261(&Var0, &(uParam1[iVar2461]->f_16)))
				{
					func_257(&Var0, &(uParam1[iVar2461]->f_16));
				}
				if (func_261(&Var0, &(uParam1[iVar2461]->f_16)) && !func_256(&Var0, &(uParam1[iVar2461]->f_22)))
				{
					func_82(&Var0, &(uParam1[iVar2461]->f_22));
				}
				if (!func_261(&Var0, &(uParam1[iVar2461]->f_16)) || !func_256(&Var0, &(uParam1[iVar2461]->f_22)))
				{
					(*uParam0)[iVar2461] = 0;
				}
				func_25(&Var0);
			}
			iVar2461++;
		}
		uParam0->f_18 = 1;
		iVar2461 = 0;
		iVar2461 = 0;
		while (iVar2461 < 17)
		{
			if ((*uParam0)[iVar2461] == 0)
			{
				uParam0->f_18 = 0;
			}
			else if (uParam1[iVar2461]->f_5 == -1)
			{
			}
			iVar2461++;
		}
	}
}

void func_25(var uParam0)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1982 = 13286;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1983 = 9196;
	uParam0->f_1986.f_10 = 8926;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_2223[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 < 12)
		{
			uParam0->f_2223[iVar0].f_1[iVar1].f_2 = 0;
			uParam0->f_2223[iVar0].f_1[iVar1].f_1 = 0;
			uParam0->f_2223[iVar0].f_1[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		uParam0->f_2180[iVar2] = 0;
		iVar2++;
	}
}

int func_26(struct<4> Param0, var uParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (uParam4->f_3 == 0)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Param0, *uParam4, uParam4->f_1, Param0.f_3, uParam4->f_2);
			func_7(&(uParam4->f_4));
			uParam4->f_3 = 1;
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
		{
			return 1;
		}
		else
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, 1);
			if (fVar0 <= uParam4->f_2 && func_27(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), Param0.f_3, 1f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_27(float fParam0, float fParam1, float fParam2)
{
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

int func_28(var uParam0)
{
	if (!uParam0->f_1702)
	{
		uParam0->f_17.f_6 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_5, uParam0->f_8, uParam0->f_17, uParam0->f_17.f_1, uParam0->f_17.f_2, uParam0->f_17.f_3, uParam0->f_17.f_4, uParam0->f_17.f_5);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_1605[iVar0].f_17 != 0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1605[iVar0].f_17, 0))
			{
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(uParam0->f_1605[iVar0].f_17, uParam0->f_17.f_6, uParam0->f_1605[iVar0], &(uParam0->f_1605[iVar0].f_1), uParam0->f_1605[iVar0].f_18, uParam0->f_1605[iVar0].f_19, uParam0->f_1605[iVar0].f_20, 0, 1148846080, 0);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (uParam0->f_24[iVar0].f_8 != 0 && !uParam0->f_1749[iVar0])
			{
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam0->f_24[iVar0].f_8, uParam0->f_17.f_6, uParam0->f_24[iVar0], uParam0->f_24[iVar0].f_1, uParam0->f_24[iVar0].f_9, uParam0->f_24[iVar0].f_10, uParam0->f_24[iVar0].f_11 | 1);
			}
			iVar0++;
		}
		uParam0->f_1702 = 1;
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_17.f_6);
	}
	else
	{
		iVar1 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_17.f_6);
		if (iVar1 != -1)
		{
			func_30(uParam0);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= uParam0->f_17.f_3)
			{
				uParam0->f_1702 = 0;
				return 0;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -435819185) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= uParam0->f_1754)
			{
				func_29(&uVar2, &uVar3, &uVar4, &uVar5, 1);
				if (((MISC::ABSI(uVar2) > 31 || MISC::ABSI(uVar3) > 31) || MISC::ABSI(uVar4) > 31) || MISC::ABSI(uVar5) > 31)
				{
					uParam0->f_1702 = 0;
					return 0;
				}
			}
		}
	}
	return 1;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_30(var uParam0)
{
	iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_17.f_6);
	if (iVar0 != -1)
	{
		if (uParam0->f_1743 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1743 && uParam0->f_1747 == 0)
			{
				func_50(PLAYER::PLAYER_PED_ID(), 0, 1);
				uParam0->f_1747 = 1;
			}
		}
		if (uParam0->f_1744 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1744 && uParam0->f_1746 == 0)
			{
				func_31(PLAYER::PLAYER_PED_ID(), 0, 1);
				uParam0->f_1746 = 1;
			}
		}
		if (uParam0->f_1745 > -1f)
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1745 && uParam0->f_1748 == 0)
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				uParam0->f_1748 = 1;
			}
		}
	}
}

void func_31(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((func_49(iParam0) + iParam2) > 10)
	{
		iParam2 = (10 - func_49(iParam0));
	}
	iVar0 = 20000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 *= 3;
	}
	if (!func_47(iParam0))
	{
		func_45(iParam0, iVar0, 0);
		func_42(iVar0, iVar0, 0.3f, func_43(), iParam1, 0);
		iVar1 = func_41(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_40(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2].f_4 = (Global_42383[iVar2].f_4 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_41(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_40(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4].f_4 = (Global_42383[iVar4].f_4 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= MISC::GET_GAME_TIMER())
		{
			func_42(iVar0, iVar0, 0.3f, func_43(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_37(iParam0, iVar0);
		}
	}
	Global_42569 = 0.25f;
	StringCopy(&Global_42570, "STONED", 16);
	iVar5 = func_41(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_40(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_32(1, iVar5, 4, iParam0, iParam2);
}

void func_32(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_33(iParam0, iParam1, iParam2, iParam3, 0, iParam4);
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_35(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_34();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42464[iVar0] = iParam0;
	Global_42464[iVar0].f_1 = iParam1;
	Global_42464[iVar0].f_2 = iParam2;
	Global_42464[iVar0].f_3 = iParam3;
	Global_42464[iVar0].f_4 = iParam4;
	Global_42464[iVar0].f_5 = iParam5;
}

int func_34()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42464[iVar0].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	if (func_36(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42464[iVar0].f_2)
		{
			if (iParam0 == Global_42464[iVar0])
			{
				if (iParam1 == Global_42464[iVar0].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_37(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	iVar0 = func_41(iParam0);
	iVar1 = -1;
	if (iVar0 == -1)
	{
		iVar1 = func_39(iParam0);
		if (!iVar1 == -1)
		{
			Global_42357[iVar1].f_3 = (Global_42357[iVar1].f_3 + iParam1);
			Global_42357[iVar1].f_2 = (Global_42357[iVar1].f_2 + iParam1);
		}
		return;
	}
	func_38(1, iVar0, 2, iParam1);
}

void func_38(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_33(iParam0, iParam1, iParam2, 0, iParam3, 1);
}

int func_39(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_40(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42383[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42383[iVar0].f_1)
		{
			return Global_42383[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_42(int iParam0, int iParam1, float fParam2, float fParam3, var uParam4, bool bParam5)
{
	if (Global_3)
	{
		return;
	}
	if (Global_42562)
	{
		return;
	}
	if (!bParam5)
	{
		if (iParam0 < 0)
		{
			return;
		}
	}
	if (fParam2 < 0f || fParam2 > 5f)
	{
		return;
	}
	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);
	}
	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
	{
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", (fParam3 * Global_42561));
	}
	if (CAM::DOES_CAM_EXIST(uParam4))
	{
		CAM::SHAKE_CAM(uParam4, "DRUNK_SHAKE", fParam3);
		Global_42563 = uParam4;
	}
	else
	{
		Global_42563 = 0;
	}
	Global_42562 = 1;
	iVar0 = MISC::GET_GAME_TIMER();
	Global_42564 = (iVar0 + iParam0);
	if (bParam5)
	{
		if (iParam0 == -1)
		{
			Global_42564 = -1;
		}
	}
	Global_42565 = iParam1;
	Global_42566 = fParam2;
	Global_42568 = fParam3;
	Global_42567 = fParam3;
}

float func_43()
{
	fVar0 = 0.1f;
	iVar1 = func_44(PLAYER::PLAYER_PED_ID());
	iVar2 = func_49(PLAYER::PLAYER_PED_ID());
	if (iVar2 == 0)
	{
		if (iVar1 == 0)
		{
			fVar0 = 0.1f;
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(10));
			if (fVar0 > 1f)
			{
				fVar0 = 1f;
			}
		}
	}
	else if (iVar2 == 0)
	{
		fVar0 = 0.1f;
	}
	else
	{
		fVar0 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(5));
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
	}
	return fVar0;
}

int func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	iVar1 = func_40(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_3;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	if (!iVar0 == -1)
	{
		return 1;
	}
	iVar1 = func_39(iParam0);
	if (!iVar1 == -1)
	{
		return 1;
	}
	if (!bParam2)
	{
		if (iParam1 == 0 || iParam1 < 0)
		{
			return 0;
		}
	}
	iVar2 = func_46();
	if (iVar2 == -1)
	{
		return 0;
	}
	Global_42357[iVar2] = 0;
	Global_42357[iVar2].f_1 = iParam0;
	Global_42357[iVar2].f_2 = iParam1;
	Global_42357[iVar2].f_3 = iParam1;
	Global_42357[iVar2].f_4 = 0;
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		Global_42594 = 1;
	}
	Global_42355++;
	return 1;
}

int func_46()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_42357[iVar0] == 13)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_48(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	iVar1 = func_40(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42383[iVar1].f_4;
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_42599, 8))
	{
		MISC::SET_BIT(&Global_42599, 9);
	}
	if ((func_44(iParam0) + iParam2) > 15)
	{
		iParam2 = (15 - func_44(iParam0));
	}
	iVar0 = 20000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 *= 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "ob_drinking_shots"))
	{
		iVar0 *= 2;
	}
	if (!func_47(iParam0))
	{
		func_45(iParam0, iVar0, 0);
		func_42(iVar0, iVar0, 0.3f, func_43(), iParam1, 0);
		iVar1 = func_41(iParam0);
		if (iVar1 == -1)
		{
			iVar2 = func_40(iVar1);
			if (!iVar2 == -1)
			{
				Global_42383[iVar2].f_3 = (Global_42383[iVar2].f_3 + iParam2);
			}
		}
	}
	else
	{
		iVar3 = func_41(iParam0);
		iVar4 = -1;
		if (iVar3 == -1)
		{
			iVar4 = func_40(iVar3);
			if (!iVar4 == -1)
			{
				Global_42383[iVar4].f_3 = (Global_42383[iVar4].f_3 + iParam2);
			}
		}
		if (Global_42564 == 0 || Global_42564 <= MISC::GET_GAME_TIMER())
		{
			func_42(iVar0, iVar0, 0.3f, func_43(), iParam1, 0);
		}
		else
		{
			Global_42564 = (Global_42564 + iVar0);
			func_37(iParam0, iVar0);
		}
	}
	if (func_44(iParam0) >= 2)
	{
		Global_42569 = 0.25f;
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_42570))
		{
			StringCopy(&Global_42570, "DRUNK", 16);
		}
	}
	iVar5 = func_41(iParam0);
	if (iVar5 == -1)
	{
		iVar6 = func_40(iVar5);
		if (!iVar6 == -1)
		{
		}
		return;
	}
	func_32(1, iVar5, 3, iParam0, iParam2);
}

int func_51(var uParam0, var uParam1)
{
	*uParam1 = 0;
	while (*uParam1 < 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), *uParam0[*uParam1], uParam0[*uParam1]->f_3, uParam0[*uParam1]->f_6, 0, 1, 0))
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_52(struct<2> Param0, var uParam2, var uParam3)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2) || HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_HTRUCK_T_1e"))
		{
			if (func_55())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		else if (func_54(uParam0->f_2))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

bool func_54(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_55()
{
	if (Global_1590382 != func_18())
	{
		iVar0 = func_58(Global_1590382);
		if (iVar0 != -1)
		{
			iVar0 = (func_57() - iVar0);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			Var1 = { func_56(iVar0, 0, 1) };
			HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_HTRUCK_T_1e");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var1);
			return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
		}
		else
		{
			Var1 = { func_56(0, 0, 1) };
			HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("MP_HTRUCK_T_1e");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var1);
			return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
		}
	}
	return 0;
}

struct<4> func_56(int iParam0, bool bParam1, int iParam2)
{
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar8 = iParam0;
		iVar4 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 3600000)));
		iVar8 = (iVar8 - (iVar4 * 3600000));
		iVar5 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 60000)));
		iVar8 = (iVar8 - (iVar5 * 60000));
		iVar6 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar8 / 1000)));
		iVar8 = (iVar8 - iVar6 * 1000);
		iVar7 = iVar8;
		if (iVar4 > 0)
		{
			StringIntConCat(&Var0, iVar4, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
		}
		else
		{
			if (iVar5 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar5, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar5, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar6 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar6, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar6, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar7 > 100)
				{
					StringIntConCat(&Var0, iVar7, 16);
				}
				else if (iVar7 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar7, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

int func_57()
{
	if (Global_1687687.f_5 != -1)
	{
		return Global_1687687.f_5;
	}
	return Global_262145.f_24141;
}

int func_58(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1590535[iParam0].f_274.f_337 != -1)
		{
			return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_1590535[iParam0].f_274.f_337));
		}
	}
	return -1;
}

void func_59(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		if (!func_54(uParam0->f_2) && func_61())
		{
			func_60(uParam0->f_2, -1);
		}
	}
}

void func_60(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_61()
{
	if ((((!func_62(0) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !Global_73825) && !Global_2462105) && !Global_1319111)
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7356, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_63(var uParam0)
{
	Stack.Push(*uParam0);
	Stack.Push(&(uParam0->f_4));
	Call_Loc(uParam0->f_10);
	if (StackVal)
	{
		return 1;
	}
	return 0;
}

int func_64(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if ((StackVal && (!func_81(PLAYER::PLAYER_ID()) || func_27(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), uParam0[uParam2->f_1740]->f_10.f_2, 45f))) && !(func_80() && func_79(PLAYER::PLAYER_ID())))
	{
		if (func_77())
		{
			Global_1662153 = 1;
			bVar0 = true;
			if (func_76(uParam0[uParam2->f_1740], 1))
			{
				if (func_72())
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_1740)
						{
						}
						else if (!func_76(uParam0[iVar1], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (func_54("POD_TOO_MANY"))
						{
							HUD::CLEAR_HELP(1);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_66(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!func_54("POD_TOO_MANY") && func_61())
				{
					func_60("POD_TOO_MANY", -1);
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_65(struct<5> Param0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_1))
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Param0.f_1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_4))
	{
		STREAMING::REMOVE_NAMED_PTFX_ASSET(Param0.f_4);
	}
}

int func_66(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam5->f_1605[0]))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam5->f_1605[0]);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam5->f_1605[0]))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.x))
	{
		STREAMING::REQUEST_ANIM_DICT(Param0.x);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(Param0.x))
		{
			return 0;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.y))
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(Param0.y, Param0.z, func_71(Param0.z)))
		{
			return 0;
		}
	}
	if (!func_67(uParam5))
	{
		return 0;
	}
	return 1;
}

int func_67(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_70(&(uParam0->f_1605[iVar0].f_21[iVar1])))
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 20)
	{
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!func_69(&(uParam0->f_24[iVar2].f_12[iVar3])))
			{
				return 0;
			}
			if (!func_68(&(uParam0->f_24[iVar2].f_41[iVar3])))
			{
				return 0;
			}
			iVar3++;
		}
		iVar2++;
	}
	return 1;
}

int func_68(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_8, "New text widget"))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_8);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_8))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_7) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_7, "New text widget"))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_7);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_7))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_70(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_8, "New text widget"))
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_8);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_8))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_71(bool bParam0)
{
	iVar0 = 0;
	if (bParam0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (iVar2 != PLAYER::PLAYER_ID())
			{
				if (func_14(iVar2, 1, 1))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar2))
					{
						MISC::SET_BIT(&iVar0, iVar2);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
			}
			iVar1++;
		}
	}
	else
	{
		MISC::SET_BIT(&iVar0, PLAYER::PLAYER_ID());
	}
	return iVar0;
}

int func_72()
{
	if ((HUD::IS_HUD_COMPONENT_ACTIVE(19) && !func_75()) || (func_74(PLAYER::PLAYER_ID()) && func_73()))
	{
		return 0;
	}
	return 1;
}

bool func_73()
{
	return MISC::IS_BIT_SET(Global_1676377.f_3, 25);
}

int func_74(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

bool func_75()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_76(var uParam0, bool bParam1)
{
	if (func_22(*uParam0) || func_22(uParam0->f_3))
	{
		return 1;
	}
	if (bParam1)
	{
		bVar0 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), *uParam0, uParam0->f_3, uParam0->f_6, 0, 1, 0);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_14(iVar2, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar2))
			{
				if (iVar2 != PLAYER::PLAYER_ID())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(iVar2), *uParam0, uParam0->f_3, uParam0->f_6, 0, 1, 0))
					{
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_77()
{
	if (((((!Global_1671188 && !(func_74(PLAYER::PLAYER_ID()) && func_73())) && !func_78(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1676377.f_4, 2)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !Global_2405072.f_2672)
	{
		return 1;
	}
	return 0;
}

bool func_78(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 13);
}

int func_79(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_80()
{
	return Global_2537071.f_6591;
}

int func_81(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_82(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2356[0]))
	{
		func_84(uParam0->f_1930, 0, 0, &(uParam0->f_14), func_255(uParam0->f_2356[0]), -1);
	}
	else
	{
		func_84(uParam0->f_1930, 0, 0, &(uParam0->f_14), 0, -1);
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_24[iVar0]))
			{
				STREAMING::REQUEST_ANIM_DICT(uParam0->f_14.f_24[iVar0]);
				if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_14.f_24[iVar0]) && func_83(uParam0->f_2180[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
					{
						Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_14.f_24[iVar0], uParam0->f_14.f_24[iVar0].f_1, uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
						Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_14.f_24[iVar0], uParam0->f_14.f_24[iVar0].f_1, uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
						if (STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_2180[iVar0]))
						{
							if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_2180[iVar0]))
							{
							}
						}
						if (!STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_2180[iVar0]))
						{
							(*uParam1)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_2180[iVar0], Var1, 0, 1, 0);
							ENTITY::SET_ENTITY_ROTATION((*uParam1)[iVar0], Var4, 2, 1);
						}
						else if (STREAMING::IS_MODEL_A_VEHICLE(uParam0->f_2180[iVar0]))
						{
							(*uParam1)[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(VEHICLE::CREATE_VEHICLE(uParam0->f_2180[iVar0], Var1, Var4.z, 0, 0, 0));
						}
						ENTITY::SET_ENTITY_INVINCIBLE((*uParam1)[iVar0], 1);
						ENTITY::FREEZE_ENTITY_POSITION((*uParam1)[iVar0], 1);
					}
				}
				else
				{
					if (!func_83(uParam0->f_2180[iVar0]))
					{
					}
					return 0;
				}
			}
			else if (!func_22(uParam0->f_14.f_24[iVar0].f_2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					Var7 = { uParam0->f_14.f_24[iVar0].f_2 + uParam0->f_14.f_5 };
					Var10 = { uParam0->f_14.f_24[iVar0].f_5 + uParam0->f_14.f_8 };
					(*uParam1)[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_2180[iVar0], Var7, 0, 1, 0);
					ENTITY::SET_ENTITY_ROTATION((*uParam1)[iVar0], Var10, 2, 1);
					ENTITY::SET_ENTITY_INVINCIBLE((*uParam1)[iVar0], 1);
					ENTITY::FREEZE_ENTITY_POSITION((*uParam1)[iVar0], 1);
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_83(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_84(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	func_254(uParam3);
	iParam4 = iParam4;
	switch (iParam0)
	{
		case 108:
			func_253(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 107:
			func_252(iParam1, iParam2, uParam3);
			break;
		
		case 106:
			func_251(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 104:
			func_250(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 123:
			func_249(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 105:
			func_248(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 122:
			func_247(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 111:
			func_246(iParam1, iParam2, uParam3);
			break;
		
		case 103:
			func_245(iParam1, iParam2, uParam3);
			break;
		
		case 110:
			func_244(iParam1, iParam2, uParam3);
			break;
		
		case 127:
			func_243(iParam1, iParam2, uParam3);
			break;
		
		case 95:
			func_242(iParam1, iParam2, uParam3);
			break;
		
		case 96:
			func_241(iParam1, iParam2, uParam3);
			break;
		
		case 97:
			func_240(iParam1, iParam2, uParam3);
			break;
		
		case 126:
			func_239(iParam1, iParam2, uParam3);
			break;
		
		case 114:
			func_238(iParam1, iParam2, uParam3);
			break;
		
		case 101:
			func_237(iParam1, iParam2, uParam3);
			break;
		
		case 98:
			func_236(iParam1, iParam2, uParam3);
			break;
		
		case 102:
			func_235(iParam1, iParam2, uParam3);
			break;
		
		case 131:
			func_234(iParam1, iParam2, uParam3);
			break;
		
		case 92:
		case 91:
		case 90:
			func_233(iParam1, iParam2, uParam3);
			break;
		
		case 189:
			func_232(iParam1, iParam2, uParam3);
			break;
		
		case 192:
		case 195:
			func_231(iParam1, iParam2, uParam3);
			break;
		
		case 4:
			func_230(iParam1, iParam2, uParam3);
			break;
		
		case 93:
		case 184:
		case 187:
		case 188:
		case 193:
		case 194:
		case 196:
			func_229(iParam1, iParam2, uParam3);
			break;
		
		case 112:
			func_228(iParam1, iParam2, uParam3);
			break;
		
		case 113:
			func_227(iParam1, iParam2, uParam3);
			break;
		
		case 115:
			func_226(iParam1, iParam2, uParam3);
			break;
		
		case 116:
			func_225(iParam1, iParam2, uParam3);
			break;
		
		case 117:
			func_224(iParam1, iParam2, uParam3);
			break;
		
		case 118:
			func_223(iParam1, iParam2, uParam3);
			break;
		
		case 26:
			func_222(iParam1, iParam2, uParam3);
			break;
		
		case 119:
			func_221(iParam1, iParam2, uParam3);
			break;
		
		case 120:
			func_220(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 121:
			func_219(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 124:
			func_218(iParam1, iParam2, uParam3);
			break;
		
		case 125:
			func_217(iParam1, iParam2, uParam3);
			break;
		
		case 167:
		case 165:
			func_216(iParam1, iParam2, uParam3);
			break;
		
		case 182:
			func_215(iParam1, iParam2, uParam3);
			break;
		
		case 128:
			func_214(iParam1, iParam2, uParam3);
			break;
		
		case 129:
			func_213(iParam1, iParam2, uParam3);
			break;
		
		case 130:
			func_212(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 132:
			func_211(iParam1, iParam2, uParam3);
			break;
		
		case 133:
			func_210(iParam1, iParam2, uParam3, iParam4);
			break;
		
		case 134:
			func_209(iParam1, iParam2, uParam3);
			break;
		
		case 137:
			func_208(iParam1, iParam2, uParam3);
			break;
		
		case 138:
			func_207(iParam1, iParam2, uParam3);
			break;
		
		case 139:
			func_206(iParam1, iParam2, uParam3);
			break;
		
		case 136:
			func_205(iParam1, iParam2, uParam3);
			break;
		
		case 144:
			func_204(iParam1, iParam2, uParam3);
			break;
		
		case 146:
			func_203(iParam1, iParam2, uParam3);
			break;
		
		case 145:
			func_202(iParam1, iParam2, uParam3);
			break;
		
		case 140:
			func_201(iParam1, iParam2, uParam3);
			break;
		
		case 143:
			func_200(iParam1, iParam2, uParam3);
			break;
		
		case 141:
			func_199(iParam1, iParam2, uParam3);
			break;
		
		case 147:
			func_198(iParam1, iParam2, uParam3);
			break;
		
		case 148:
			func_197(iParam1, iParam2, uParam3);
			break;
		
		case 149:
			func_196(iParam1, iParam2, uParam3);
			break;
		
		case 150:
			func_195(iParam1, iParam2, uParam3);
			break;
		
		case 151:
		case 181:
			func_194(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		
		case 152:
		case 180:
			func_193(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		
		case 185:
			func_188(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		
		case 190:
			func_185(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		
		case 191:
			func_127(iParam1, iParam2, uParam3, 0, iParam5);
			break;
		
		case 153:
			func_126(iParam1, iParam2, uParam3);
			break;
		
		case 154:
			func_125(iParam1, iParam2, uParam3);
			break;
		
		case 155:
		case 156:
			func_123(iParam1, iParam2, uParam3);
			break;
		
		case 157:
			func_117(iParam1, iParam2, uParam3);
			break;
		
		case 158:
		case 159:
		case 160:
		case 161:
			func_112(iParam1, iParam2, uParam3);
			break;
		
		case 162:
		case 163:
			func_106(iParam1, iParam2, uParam3);
			break;
		
		case 166:
			func_105(iParam1, iParam2, uParam3);
			break;
		
		case 168:
			func_104(iParam1, iParam2, uParam3);
			break;
		
		case 170:
			func_103(iParam1, iParam2, uParam3);
			break;
		
		case 171:
			func_102(iParam1, iParam2, uParam3);
			break;
		
		case 173:
			func_101(iParam1, iParam2, uParam3);
			break;
		
		case 174:
			func_100(iParam1, iParam2, uParam3);
			break;
		
		case 175:
			func_99(iParam1, iParam2, uParam3);
			break;
		
		case 176:
			func_98(iParam1, iParam2, uParam3);
			break;
		
		case 177:
			func_97(iParam1, iParam2, uParam3);
			break;
		
		case 178:
			func_96(iParam1, iParam2, uParam3);
			break;
		
		case 179:
			func_95(iParam1, iParam2, uParam3);
			break;
		
		case 183:
			func_93(iParam1, iParam2, uParam3);
			break;
		
		case 10:
			func_92(iParam1, iParam2, uParam3);
			break;
		
		case 8:
			func_91(iParam1, iParam2, uParam3);
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			func_90(iParam1, iParam2, uParam3, 0);
			break;
		
		case 186:
			func_85(iParam1, iParam2, uParam3, 0);
			break;
	}
}

void func_85(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1715 = 13061;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 18466;
					uParam2->f_1737 = 18448;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@warehouse@laptop@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

var func_86(var uParam0, struct<2> Param1)
{
	Param1 = { Param1 };
	return uParam0;
}

int func_87(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_88() || Global_73828)
	{
		return 0;
	}
	return 1;
}

var func_88()
{
	return Global_73825;
}

int func_89(int iParam0, struct<2> Param1)
{
	Param1 = { Param1 };
	iParam0++;
	return iParam0;
}

void func_90(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mp_doorbell";
					StringCopy(&(uParam2->f_1605[0].f_1), "ring_bell_a", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_91(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@safehouse@wine";
					StringCopy(&(uParam2->f_1605[0].f_1), "drink_wine_stage1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "anim@safehouse@wine";
					uParam2->f_24[0].f_1 = "drink_wine_stage1_bottle";
					uParam2->f_24[1] = "anim@safehouse@wine";
					uParam2->f_24[1].f_1 = "drink_wine_stage1_glass";
					uParam2->f_1749[1] = 1;
					uParam2->f_24[2] = "anim@safehouse@wine";
					uParam2->f_24[2].f_1 = "drink_wine_stage1_glass";
					uParam2->f_24[3] = "anim@safehouse@wine";
					uParam2->f_24[3].f_1 = "drink_wine_stage1_wine";
					uParam2->f_1743 = 0.6f;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_92(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@safehouse@wheatgrass";
					StringCopy(&(uParam2->f_1605[0].f_1), "drink_wheatgrass_stage1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "anim@safehouse@wheatgrass";
					uParam2->f_24[0].f_1 = "drink_wheatgrass_stage1_glass";
					uParam2->f_1745 = 0.9f;
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_93(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_1605[0].f_1), "pa_idle_a", 64);
					uParam2->f_24[0] = "anim@amb@office@pa@male@";
					uParam2->f_24[0].f_1 = "idle_a_chair";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_1605[0].f_1), "pa_idle_b", 64);
					uParam2->f_24[0] = "anim@amb@office@pa@male@";
					uParam2->f_24[0].f_1 = "idle_b_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_1605[0].f_1), "pa_idle_c", 64);
					uParam2->f_24[0] = "anim@amb@office@pa@male@";
					uParam2->f_24[0].f_1 = "idle_c_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@office@pa@male@";
					StringCopy(&(uParam2->f_1605[0].f_1), "pa_idle_d", 64);
					uParam2->f_24[0] = "anim@amb@office@pa@male@";
					uParam2->f_24[0].f_1 = "idle_d_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

var func_94(var uParam0, struct<2> Param1)
{
	Param1 = { Param1 };
	return uParam0;
}

void func_95(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "base_right_v_ilev_chair02_ped";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "disgusted_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "disgusted_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "disgusted_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "disgusted_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_03_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_03_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "idle_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "idle_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "look_around_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "look_around_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "scratch_leg_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "scratch_leg_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "tired_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_96(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "idle_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "idle_01_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "idle_01_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "idle_01_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "idle_01_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "idle_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "idle_02_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "idle_02_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "idle_02_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "idle_02_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "idle_02_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "idle_02_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "investigate_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "investigate_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "investigate_01_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "investigate_01_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "investigate_01_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "investigate_01_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "investigate_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "investigate_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "investigate_02_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "investigate_02_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "investigate_02_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "investigate_02_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "investigate_02_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "investigate_02_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "investigate_03_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "investigate_03_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "investigate_03_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "investigate_03_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "investigate_03_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "investigate_03_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "investigate_03_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "look_around_01_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "look_around_01_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "look_around_01_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "look_around_01_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "look_around_01_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "look_around_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@range@load_clips@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@load_clips@";
					uParam2->f_24[0].f_1 = "base_gr_prop_gr_bulletscrate_01a";
					uParam2->f_24[1] = "anim@amb@range@load_clips@";
					uParam2->f_24[1].f_1 = "base_gr_prop_gr_crate_mag_01a";
					uParam2->f_24[2] = "anim@amb@range@load_clips@";
					uParam2->f_24[2].f_1 = "base_gr_prop_gr_crate_mag_01a^1";
					uParam2->f_24[3] = "anim@amb@range@load_clips@";
					uParam2->f_24[3].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[4] = "anim@amb@range@load_clips@";
					uParam2->f_24[4].f_1 = "base_w_ar_assaultriflemk2_mag1";
					uParam2->f_24[5] = "anim@amb@range@load_clips@";
					uParam2->f_24[5].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_97(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "base_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "base_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "base_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "clip_test_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "clip_test_01_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "clip_test_01_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "clip_test_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "clip_test_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "clip_test_02_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "clip_test_02_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "clip_test_02_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "expel_cartridge_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "expel_cartridge_01_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "expel_cartridge_01_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "expel_cartridge_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "idle_01_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "idle_01_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "idle_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "idle_02_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "idle_02_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "idle_02_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "idle_03_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "idle_03_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "idle_03_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "look_around_01_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "look_around_01_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "look_around_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "look_around_02_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "look_around_02_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "look_around_02_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_03_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "look_around_03_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "look_around_03_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "look_around_03_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@range@assemble_guns@";
					StringCopy(&(uParam2->f_1605[0].f_1), "trigger_test_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[0].f_1 = "trigger_test_01_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[1].f_1 = "trigger_test_01_w_ar_carbineriflemk2";
					uParam2->f_24[2] = "anim@amb@range@assemble_guns@";
					uParam2->f_24[2].f_1 = "trigger_test_01_w_ar_carbineriflemk2_mag1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_98(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "confused_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "confused_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "confused_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "counting_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "counting_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "counting_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "dissaproval_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "dissaproval_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "dissaproval_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "idle_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "idle_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "idle_02_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "idle_02_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_around_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_around_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_around_02_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_around_02_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_left_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_left_01_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_left_01_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "observe_05_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "observe_05_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "observe_05_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_left_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_left_02_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_left_02_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_right_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_right_01_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_right_01_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 12:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_right_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_right_02_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_right_02_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 13:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_up_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_up_01_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_up_01_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 14:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_up_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "look_up_02_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "look_up_02_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 15:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "observe_01_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "observe_01_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "observe_01_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 16:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "observe_02_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "observe_02_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "observe_02_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 17:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "observe_03_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "observe_03_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "observe_03_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@supervising@";
					StringCopy(&(uParam2->f_1605[0].f_1), "observe_04_lo_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@supervising@";
					uParam2->f_24[0].f_1 = "observe_04_lo_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@board_room@supervising@";
					uParam2->f_24[1].f_1 = "observe_04_lo_bkr_prop_fakeid_clipboard_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_99(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "curious_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "disgust_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "examine_close_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_04_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "knuckle_crack_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "read_02_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 12:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "read_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 13:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "read_03_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 14:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "think_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 15:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "think_02_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 16:
					uParam2->f_1605[0] = "anim@amb@board_room@whiteboard@";
					StringCopy(&(uParam2->f_1605[0].f_1), "tired_01_amy_skater_01", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_100(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "disgusted_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "disgusted_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "disgusted_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "disgusted_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "disgusted_02_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "disgusted_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "glance_board_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_02_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "glance_board_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_03_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "glance_board_03_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "glance_board_03_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "idle_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "idle_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "idle_02_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "idle_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "investigate_computer_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "investigate_computer_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "investigate_computer_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "look_around_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "look_around_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "look_around_02_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "look_around_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "scratch_leg_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "scratch_leg_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "scratch_leg_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@computer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[0].f_1 = "tired_01_right_v_ilev_chair02_ped";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@computer@";
					uParam2->f_24[1].f_1 = "tired_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_101(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "base_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "base_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "base_right_v_ilev_chair02_ped";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "tired_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "tired_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "tired_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "tired_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "tired_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "tired_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "tired_02_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "tired_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "break_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "break_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "break_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "look_around_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "look_around_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "look_around_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "idle_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "idle_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "idle_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "glance_board_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "glance_board_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "glance_board_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "glance_board_02_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "glance_board_02_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "glance_board_02_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "glance_board_02_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "reach_out_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "reach_out_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "reach_out_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "reach_out_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "stretch_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "stretch_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "stretch_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "stretch_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@stenographer@paper@";
					StringCopy(&(uParam2->f_1605[0].f_1), "thinking_01_right_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[0].f_1 = "thinking_01_right_gr_prop_gr_laptop_01a";
					uParam2->f_24[1] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[1].f_1 = "thinking_01_right_prop_pencil_01";
					uParam2->f_24[2] = "anim@amb@board_room@stenographer@paper@";
					uParam2->f_24[2].f_1 = "thinking_01_right_v_ilev_chair02_ped";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_102(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weapon_inspect_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@weapon_test@";
					uParam2->f_24[0].f_1 = "weapon_inspect_01_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@range@weapon_test@";
					uParam2->f_24[1].f_1 = "weapon_inspect_01_prop_notepad_02";
					uParam2->f_24[2] = "anim@amb@range@weapon_test@";
					uParam2->f_24[2].f_1 = "weapon_inspect_01_w_ar_assaultrifle_mag1";
					uParam2->f_24[3] = "anim@amb@range@weapon_test@";
					uParam2->f_24[3].f_1 = "weapon_inspect_01_w_ar_assaultrifle";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weapon_inspect_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@range@weapon_test@";
					uParam2->f_24[0].f_1 = "weapon_inspect_02_prop_pencil_01";
					uParam2->f_24[1] = "anim@amb@range@weapon_test@";
					uParam2->f_24[1].f_1 = "weapon_inspect_02_prop_notepad_02";
					uParam2->f_24[2] = "anim@amb@range@weapon_test@";
					uParam2->f_24[2].f_1 = "weapon_inspect_02_w_ar_assaultrifle_mag1";
					uParam2->f_24[3] = "anim@amb@range@weapon_test@";
					uParam2->f_24[3].f_1 = "weapon_inspect_02_w_ar_assaultrifle";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_103(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[3] = "anim@amb@range@weapon_test@";
					uParam2->f_24[3].f_1 = "base_w_ar_assaultriflemk2";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weapon_test_busrt_01_amy_skater_01", 64);
					uParam2->f_24[3] = "anim@amb@range@weapon_test@";
					uParam2->f_24[3].f_1 = "weapon_test_busrt_01_w_ar_assaultriflemk2";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@range@weapon_test@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weapon_inspect_01_amy_skater_01", 64);
					uParam2->f_24[3] = "anim@amb@range@weapon_test@";
					uParam2->f_24[3].f_1 = "weapon_inspect_01_w_ar_assaultrifle";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_104(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "base_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coffee_grab_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "coffee_grab_01_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "draw_circles_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "draw_circles_01_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "idle_01_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "idle_02_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_03_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "idle_03_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_04_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "idle_04_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_01_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "look_around_01_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_02_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "look_around_02_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_03_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "look_around_03_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 10:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_04_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "look_around_04_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 11:
					uParam2->f_1605[0] = "anim@amb@board_room@diagram_blueprints@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_05_amy_skater_01", 64);
					uParam2->f_24[0] = "anim@amb@board_room@diagram_blueprints@";
					uParam2->f_24[0].f_1 = "look_around_05_prop_mug_04";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_105(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_1605[0].f_1), "guard_idle_b", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_1605[0].f_1), "guard_idle_b_earpiece", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_106(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_111(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					func_110(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					func_109(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_108(iVar0, uParam2);
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 0;
					uParam2->f_1737 = 31198;
					break;
			}
			break;
	}
}

var func_107(var uParam0, var uParam1, var uParam2)
{
	uParam0 = uParam0;
	return uParam1;
}

void func_108(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0].f_1 = "unload_rl_01_gr_prop_gr_millcage_01a";
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[1].f_1 = "unload_rl_01_gr_prop_gr_millcage_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "unload_rl_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[0].f_1 = "unload_rl_02_gr_prop_gr_millcage_01a";
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[1].f_1 = "unload_rl_02_gr_prop_gr_millcage_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "unload_rl_02_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_109(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 18905;
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "operate_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2].f_12[0] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "operate_02_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2].f_12[0] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 18905;
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_03_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_03_gr_prop_gr_3s_millcrate_01a";
				}
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_03_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_03_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "operate_03_gr_prop_gr_part_mill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[2].f_12[0] = { 0f, -0.38f, 1.13f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 18905;
			break;
	}
}

void func_110(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "reachout_gr_prop_gr_part_mill_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "look_to_right_gr_prop_gr_part_mill_01a";
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_low_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_low_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_low_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "Look_low_gr_prop_gr_part_mill_01a";
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "Look_to_left_gr_prop_gr_part_mill_01a";
			break;
		
		case 4:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_high_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_high_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_high_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "look_high_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "look_high_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "look_high_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_high_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "look_high_gr_prop_gr_part_mill_01a";
			break;
		
		case 5:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 18905;
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "clean_surface_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "clean_surface_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "clean_surface_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_high_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "clean_surface_01_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			break;
		
		case 6:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "clean_surface_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "clean_surface_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "clean_surface_02_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "clean_surface_02_gr_prop_gr_part_mill_01a";
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			break;
		
		case 7:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "stretch_gr_prop_gr_part_mill_01a";
			break;
		
		case 9:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "look_around_left_01_gr_prop_gr_part_mill_01a";
			break;
		
		case 8:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_3s_millcrate_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "look_around_Right_01_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_111(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "load_ll_01_gr_prop_gr_part_mill_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@vertical_mill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_ll_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_millcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a"))
				{
					uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_millcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_3s_millcrate_01a";
			}
			uParam1->f_24[2] = "anim@amb@machinery@vertical_mill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -1737968014)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_vertmill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2027482129)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_vertmill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -517093473)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_vertmill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_vertmill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@vertical_mill@";
			uParam1->f_24[3].f_1 = "load_ll_02_gr_prop_gr_part_mill_01a";
			break;
	}
}

void func_112(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_116(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
					func_115(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_114(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_113(iVar0, uParam2);
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 0;
					uParam2->f_1737 = 31198;
					break;
			}
			break;
	}
}

void func_113(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_rl_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "unload_rl_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "unload_rl_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "unload_rl_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_rl_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "unload_rl_01_gr_prop_gr_part_drill_01a";
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 57005;
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_rl_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "unload_rl_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "unload_rl_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "unload_rl_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_rl_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "unload_rl_02_gr_prop_gr_part_drill_01a";
			uParam1->f_24[3].f_41[0].f_10 = "vfx_bunker_blow_debris_trigger";
			uParam1->f_24[3].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[3].f_41[0].f_7 = "scr_gr_bunk_clean_blow_debris";
			uParam1->f_24[3].f_41[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_24[3].f_41[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_10 = "vfx_bunker_sweep_debris_trigger";
			uParam1->f_1605[0].f_21[0].f_8 = "scr_gr_bunk";
			uParam1->f_1605[0].f_21[0].f_7 = "scr_gr_bunk_clean_debris";
			uParam1->f_1605[0].f_21[0].f_1 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_4 = { 0f, 0f, 0f };
			uParam1->f_1605[0].f_21[0].f_11 = 57005;
			break;
	}
}

void func_114(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "operate_01_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2].f_12[0] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2].f_41[0].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[2].f_41[0].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2].f_41[0].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2].f_41[0].f_4 = { 0f, -90f, 0f };
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "operate_02_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2].f_12[0] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2].f_41[0].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[2].f_41[0].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2].f_41[0].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2].f_41[0].f_4 = { 0f, -90f, 0f };
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_03_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_03_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "operate_03_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_03_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_03_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "operate_03_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_03_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "operate_03_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2].f_12[0] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2].f_41[0].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[2].f_41[0].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2].f_41[0].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2].f_41[0].f_4 = { 0f, -90f, 0f };
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_04_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "operate_04_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "operate_04_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "operate_04_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_04_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "operate_04_gr_prop_gr_part_drill_01a";
			uParam1->f_24[2].f_12[0].f_9 = "vfx_bunker_drill_smoke_start";
			uParam1->f_24[2].f_12[0].f_10 = "vfx_bunker_drill_smoke_stop";
			uParam1->f_24[2].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[2].f_12[0].f_6 = "scr_gr_bunk_drill_smoke";
			uParam1->f_24[2].f_12[0] = { 0f, -0.12f, 1.15f };
			uParam1->f_24[2].f_12[0].f_3 = { 0f, -90f, 0f };
			uParam1->f_24[2].f_41[0].f_10 = "vfx_bunker_drill_spark_trigger";
			uParam1->f_24[2].f_41[0].f_8 = "scr_gr_bunk";
			uParam1->f_24[2].f_41[0].f_7 = "scr_gr_bunk_drill_spark";
			uParam1->f_24[2].f_41[0].f_1 = { 0f, -0.12f, 1.16f };
			uParam1->f_24[2].f_41[0].f_4 = { 0f, -90f, 0f };
			break;
	}
}

void func_115(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "reachout_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "reachout_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "reachout_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "reachout_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "reachout_gr_prop_gr_part_drill_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "look_to_right_gr_prop_gr_part_drill_01a";
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "Look_low_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "Look_low_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "Look_low_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "Look_low_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "Look_low_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "Look_low_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "Look_low_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "Look_low_gr_prop_gr_part_drill_01a";
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "Look_to_left_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "Look_to_left_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "Look_to_left_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "Look_to_left_gr_prop_gr_part_drill_01a";
			break;
		
		case 4:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "stretch_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "stretch_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "stretch_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "stretch_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "stretch_gr_prop_gr_part_drill_01a";
			break;
		
		case 5:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "scratch_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "scratch_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "scratch_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "scratch_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "scratch_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "scratch_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "scratch_gr_prop_gr_part_drill_01a";
			break;
		
		case 6:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "look_around_left_01_gr_prop_gr_part_drill_01a";
			break;
		
		case 7:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "look_around_Right_01_gr_prop_gr_part_drill_01a";
			break;
	}
}

void func_116(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_ll_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "load_ll_01_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_ll_01_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "load_ll_01_gr_prop_gr_part_drill_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@speed_drill@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_ll_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[0].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[0].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
				}
				else
				{
					uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_3s_drillcrate_01a";
				}
			}
			else
			{
				uParam1->f_24[0].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a";
			}
			uParam1->f_24[1] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[1].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[1].f_8) == MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a"))
				{
					uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a^1";
				}
				else
				{
					uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_3s_drillcrate_01a^1";
				}
			}
			else
			{
				uParam1->f_24[1].f_1 = "load_ll_02_gr_prop_gr_drillcage_01a^1";
			}
			uParam1->f_24[2] = "anim@amb@machinery@speed_drill@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 249707472)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 471619140)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -769899971)
				{
					uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_ll_02_gr_prop_gr_speeddrill_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@speed_drill@";
			uParam1->f_24[3].f_1 = "load_ll_02_gr_prop_gr_part_drill_01a";
			break;
	}
}

void func_117(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					func_122(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_121(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_120(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_119(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 4:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_118(iVar0, uParam2);
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 0;
					uParam2->f_1737 = 31198;
					break;
			}
			break;
	}
}

void func_118(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "unload_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "unload_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "unload_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "unload_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "unload_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_01_gr_prop_gr_lathe_01c";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "unload_01_gr_prop_gr_part_lathe_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "unload_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "unload_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "unload_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "unload_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "unload_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "unload_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "unload_02_gr_prop_gr_lathe_01c";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "unload_02_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_01_hi_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "operate_01_hi_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "operate_01_hi_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			uParam1->f_24[2].f_1 = "operate_01_hi_gr_prop_gr_lathe_01c";
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "operate_01_hi_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[3].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3].f_12[0] = { 0f, 0f, 0f };
			uParam1->f_24[3].f_12[0].f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_02_hi_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "operate_02_hi_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "operate_02_hi_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			uParam1->f_24[2].f_1 = "operate_02_hi_gr_prop_gr_lathe_01c";
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "operate_02_hi_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[3].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3].f_12[0] = { 0f, 0f, 0f };
			uParam1->f_24[3].f_12[0].f_3 = { 0f, 0f, 0f };
			break;
	}
}

void func_120(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_left_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "look_around_left_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "look_around_left_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_left_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "look_around_left_01_gr_prop_gr_part_lathe_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_around_Right_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "look_around_Right_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "look_around_Right_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_around_Right_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "look_around_Right_01_gr_prop_gr_part_lathe_01a";
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "look_to_right_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "look_to_right_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "look_to_right_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "look_to_right_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "look_to_right_gr_prop_gr_part_lathe_01a";
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "scratch_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "scratch_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "scratch_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "scratch_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "scratch_gr_prop_gr_part_lathe_01a";
			break;
		
		case 4:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "clean_surface_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "clean_surface_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "clean_surface_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "clean_surface_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "clean_surface_02_gr_prop_gr_part_lathe_01a";
			break;
		
		case 5:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "clean_surface_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "clean_surface_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "clean_surface_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "clean_surface_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "clean_surface_01_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_121(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "load_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "load_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "load_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "load_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "load_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "load_01_gr_prop_gr_part_lathe_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "load_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "load_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "load_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "load_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "load_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "load_02_gr_prop_gr_part_lathe_01a";
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_03_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "load_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "load_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "load_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "load_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "load_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "load_03_gr_prop_gr_part_lathe_01a";
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "load_04_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "load_04_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "load_04_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "load_04_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "load_04_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "load_04_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "load_04_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "load_04_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_122(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "adjust_handle_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "adjust_handle_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "adjust_handle_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "adjust_handle_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "adjust_handle_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "adjust_handle_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "adjust_handle_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "adjust_handle_gr_prop_gr_part_lathe_01a";
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "reject_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "reject_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "reject_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "reject_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "reject_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "reject_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "reject_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "reject_01_gr_prop_gr_part_lathe_01a";
			break;
		
		case 2:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "reject_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "reject_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "reject_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "reject_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "reject_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "reject_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "reject_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "reject_02_gr_prop_gr_part_lathe_01a";
			break;
		
		case 3:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "reject_03_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "reject_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "reject_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "reject_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "reject_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "reject_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "reject_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "reject_03_gr_prop_gr_part_lathe_01a";
			break;
		
		case 4:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "clean_surface_03_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "clean_surface_03_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "clean_surface_03_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "clean_surface_03_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "clean_surface_03_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "clean_surface_03_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "clean_surface_03_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "clean_surface_03_gr_prop_gr_part_lathe_01a";
			break;
	}
}

void func_123(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					func_122(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					func_121(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 2:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_120(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 3:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_124(iVar0, uParam2);
					uParam2->f_1737 = 18508;
					break;
				
				case 4:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					func_118(iVar0, uParam2);
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 0;
					uParam2->f_1737 = 31198;
					break;
			}
			break;
	}
}

void func_124(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_01_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "operate_01_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "operate_01_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_01_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "operate_01_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[3].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3].f_12[0] = { 0f, 0f, 0f };
			uParam1->f_24[3].f_12[0].f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			uParam1->f_1605[0] = "anim@amb@machinery@lathe@";
			StringCopy(&(uParam1->f_1605[0].f_1), "operate_02_amy_skater_01", 64);
			uParam1->f_24[0] = "anim@amb@machinery@lathe@";
			uParam1->f_24[0].f_1 = "operate_02_gr_prop_gr_2stackcrate_01a";
			uParam1->f_24[1] = "anim@amb@machinery@lathe@";
			uParam1->f_24[1].f_1 = "operate_02_gr_prop_gr_2stackcrate_01a^1";
			uParam1->f_24[2] = "anim@amb@machinery@lathe@";
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_24[2].f_8, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 865942478)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_lathe_01a";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == -2057085095)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_lathe_01b";
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam1->f_24[2].f_8) == 1177673975)
				{
					uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_lathe_01c";
				}
			}
			else
			{
				uParam1->f_24[2].f_1 = "operate_02_gr_prop_gr_lathe_01a";
			}
			uParam1->f_24[3] = "anim@amb@machinery@lathe@";
			uParam1->f_24[3].f_1 = "operate_02_gr_prop_gr_part_lathe_01a";
			uParam1->f_24[3].f_12[0].f_9 = "vfx_bunker_lathe_shards_start";
			uParam1->f_24[3].f_12[0].f_10 = "vfx_bunker_lathe_shards_stop";
			uParam1->f_24[3].f_12[0].f_7 = "scr_gr_bunk";
			uParam1->f_24[3].f_12[0].f_6 = "scr_gr_bunk_mill_metal_shards";
			uParam1->f_24[3].f_12[0] = { 0f, 0f, 0f };
			uParam1->f_24[3].f_12[0].f_3 = { 0f, 0f, 0f };
			break;
	}
}

void func_125(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@safehouse@whisky";
					StringCopy(&(uParam2->f_1605[0].f_1), "drink_whisky_Stage1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "anim@safehouse@whisky";
					uParam2->f_24[0].f_1 = "drink_whisky_stage1_bottle";
					uParam2->f_24[1] = "anim@safehouse@whisky";
					uParam2->f_24[1].f_1 = "drink_whisky_stage1_tumbler";
					uParam2->f_17.f_4 = 0f;
					uParam2->f_17.f_3 = 1f;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_126(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_VEHICLE_MECHANIC", 64);
					uParam2->f_1726 = 1;
					break;
			}
			break;
	}
}

void func_127(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "enter_left", 64);
					uParam2->f_24[0].f_1 = "enter_left_chair";
					uParam2->f_24[1].f_1 = "enter_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_1 = "base_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "base_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = func_183();
					if (func_182(PLAYER::PLAYER_ID(), 0))
					{
						uParam2->f_1717.f_2 = func_138(2);
					}
					uParam2->f_1715 = 54949;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 54834;
					uParam2->f_1703[1] = 2;
					uParam2->f_1703[1].f_1 = 191;
					uParam2->f_1703[1].f_2 = 0;
					uParam2->f_1703[1].f_3 = 1;
					uParam2->f_1712[1] = 54796;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_left", 64);
					uParam2->f_24[0].f_1 = "exit_left_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "exit_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_enter_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_enter_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_idle_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_idle_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18448;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 54723;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 1;
					uParam2->f_1737 = 31198;
					uParam2->f_1738 = 54707;
					break;
			}
			break;
	}
}

var func_128(var uParam0, struct<2> Param1)
{
	uParam0 = uParam0;
	return Param1.f_1;
}

int func_129(struct<4> Param0)
{
	Param0 = { Param0 };
	if (!func_131() && !func_130())
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return MISC::IS_BIT_SET(Global_1687686, 1);
}

bool func_131()
{
	return MISC::IS_BIT_SET(Global_1687686, 2);
}

int func_132(struct<4> Param0)
{
	Param0 = { Param0 };
	if (func_131() || func_130())
	{
		return 1;
	}
	return 0;
}

int func_133(struct<4> Param0)
{
	if ((PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1) && !func_132(Param0)) && !func_134(Param0))
	{
		Global_1370524 = 1;
		return 1;
	}
	return 0;
}

int func_134(struct<4> Param0)
{
	Param0 = { Param0 };
	if (func_135() || func_75())
	{
		return 1;
	}
	return 0;
}

bool func_135()
{
	return MISC::IS_BIT_SET(Global_1687687, 12);
}

void func_136(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		if (!func_54(uParam0->f_2) && func_61())
		{
			func_137(uParam0->f_2);
		}
	}
}

void func_137(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

char* func_138(int iParam0)
{
	if (!func_181() && !func_179())
	{
		if (func_55())
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (Global_1319112)
	{
		if (iParam0 == 1)
		{
			sVar0 = "MP_HTRUCK_T_1";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "MP_HTRUCK_T_2";
		}
	}
	else if (func_178())
	{
		if (iParam0 == 1)
		{
			sVar0 = "MP_HTRUCK_T_1c";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "MP_HTRUCK_T_2c";
		}
	}
	else if ((func_181() && iParam0 == 1) && func_171())
	{
		sVar0 = "MP_HTRUCK_T_1e";
	}
	else if (func_157() || (func_179() && iParam0 == 1))
	{
		if (iParam0 == 1)
		{
			sVar0 = "MP_HTRUCK_T_1d";
		}
		else if (iParam0 == 2)
		{
			sVar0 = "MP_HTRUCK_T_2d";
		}
	}
	else if (iParam0 == 1)
	{
		if (func_156(Global_1590382))
		{
			sVar0 = "MP_HTRUCK_T_1d";
		}
		else
		{
			sVar0 = "MP_HTRUCK_T_1b";
		}
	}
	else if (iParam0 == 2)
	{
		if (func_155(Global_1590382) || func_139())
		{
			sVar0 = "MP_HTRUCK_T_2d";
		}
		else
		{
			sVar0 = "MP_HTRUCK_T_2b";
		}
	}
	return sVar0;
}

int func_139()
{
	if (Global_262145.f_24157)
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (func_153(Global_1590382))
		{
			return 1;
		}
	}
	if (func_152(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_62(0))
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (!func_149())
	{
		return 1;
	}
	if (func_143())
	{
		return 1;
	}
	if (Global_1319114)
	{
		return 1;
	}
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_142()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_142(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(func_142()))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (func_140())
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_141()))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(func_141(), -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (func_14(iVar1, 1, 1))
					{
						if (func_152(iVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_141()
{
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1370256))
		{
			return Global_1370256;
		}
		if (Global_1590382 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	}
	return -1;
}

int func_142()
{
	if (Global_1590382 != func_18())
	{
		if (!func_153(Global_1590382))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1370256))
			{
				return Global_1370256;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1694052[Global_1590382]))
			{
				return Global_1694052[Global_1590382];
			}
		}
	}
	return -1;
}

int func_143()
{
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (Global_1590382 != func_18())
		{
			if (func_153(Global_1590382) || func_148(Global_1590382))
			{
				return 1;
			}
			if (func_147(Global_1590382))
			{
				if (func_17(func_146(Global_1590382)) == 11)
				{
					if (func_17(func_145(Global_1590382)) == 11)
					{
						if (func_144(Global_1590382) == 5)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_144(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425662[iParam0].f_310.f_3, 28, 31);
}

int func_145(int iParam0)
{
	if (iParam0 != func_18() && func_14(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_15;
	}
	return -1;
}

int func_146(int iParam0)
{
	if (iParam0 != func_18() && func_14(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_147(int iParam0)
{
	if (iParam0 != func_18() && func_14(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 14);
	}
	return 0;
}

int func_149()
{
	if (!ENTITY::DOES_ENTITY_EXIST(func_141()))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_141()) && ENTITY::IS_ENTITY_DEAD(func_141(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_150()
{
	return Global_96053;
}

int func_151()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (Global_1628237[iVar0].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_3, 4);
	}
	return 0;
}

bool func_154()
{
	return Global_1676377.f_474;
}

int func_155(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 9);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_157()
{
	if (func_170(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_169(PLAYER::PLAYER_ID());
		if (func_14(iVar0, 0, 1))
		{
			if ((((((func_168(iVar0) && func_17(func_146(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_167(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_166(Global_4456448.f_194990))
			{
				if (func_170(iVar0))
				{
					if (func_165(iVar0))
					{
						return 1;
					}
					else if (func_168(PLAYER::PLAYER_ID()) || func_164())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1687716)
	{
		return 1;
	}
	if (func_163(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_162(PLAYER::PLAYER_ID());
		if (func_14(iVar0, 0, 1))
		{
			if ((((((func_168(iVar0) && func_17(func_146(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == -2118308144)
			{
				return 1;
			}
			if (func_161(iVar0))
			{
				return 1;
			}
			else if (func_168(PLAYER::PLAYER_ID()) || func_164())
			{
				return 1;
			}
		}
	}
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_160(PLAYER::PLAYER_ID());
		if (func_14(iVar0, 0, 1))
		{
			if ((((Global_1590382 != func_18() && func_168(Global_1590382)) && func_17(func_146(Global_1590382)) == 11) && func_159(Global_1590382, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1590382), 0), -1988428699))
			{
				return 1;
			}
			else if (func_153(iVar0))
			{
				return 1;
			}
			else if (func_168(PLAYER::PLAYER_ID()) || func_164())
			{
				return 1;
			}
		}
	}
	if (func_163(PLAYER::PLAYER_ID()) || func_158(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319116)
		{
			case 1:
				if (Global_262145.f_22584)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22585)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22586)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319114 == 1)
	{
		return 1;
	}
	if (func_2(3))
	{
		if (Global_1573352 == 185)
		{
			if (Global_1574442 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	if (func_14(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_161(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310.f_2, 6);
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_163(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_164()
{
	return MISC::IS_BIT_SET(Global_1676377, 6);
}

int func_165(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 6);
	}
	return 0;
}

bool func_166(int iParam0)
{
	return Global_262145.f_4999[4] == iParam0;
}

int func_167(var uParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == 387748548 || ENTITY::GET_ENTITY_MODEL(uParam0) == 177270108)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	if (iParam0 != func_18() && func_14(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_169(int iParam0)
{
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	return Global_2425662[iParam0].f_310.f_8;
}

int func_170(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_171()
{
	if (func_172(PLAYER::PLAYER_ID()) && Global_1687687.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

int func_172(int iParam0)
{
	if (func_175(func_176(iParam0)))
	{
		if (func_174() != func_18())
		{
			if (func_173() == func_174())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_173()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

int func_174()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

int func_175(int iParam0)
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

int func_176(int iParam0)
{
	if (func_177(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_1312418;
}

int func_179()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_180())
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_154())
	{
		return 1;
	}
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (func_153(Global_1590382))
		{
			return 1;
		}
	}
	if (func_152(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_62(0))
	{
		return 1;
	}
	if (func_151())
	{
		return 1;
	}
	if (func_150())
	{
		return 1;
	}
	if (Global_262145.f_24158)
	{
		return 1;
	}
	if (func_182(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_142()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_142(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_142(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_142(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_180()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_181()
{
	if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 != func_18() && PLAYER::PLAYER_ID() != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_334, 20);
	}
	return 0;
}

int func_182(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

char* func_183()
{
	if (Global_1319112)
	{
		sVar0 = "HUNTGUN_T_1";
	}
	else if (func_178())
	{
		sVar0 = "HUNTGUN_T_1c";
	}
	else if (func_157())
	{
		if (func_163(PLAYER::PLAYER_ID()))
		{
			if (func_161(func_162(PLAYER::PLAYER_ID())))
			{
				sVar0 = "AVENGGUN_T_1";
			}
		}
		else
		{
			sVar0 = "HUNTGUN_T_1d";
		}
	}
	else if (func_184())
	{
		sVar0 = "HUNTGUN_T_1d";
	}
	else
	{
		sVar0 = "HUNTGUN_T_1b";
	}
	return sVar0;
}

int func_184()
{
	switch (Global_1319113)
	{
		case 1:
			return Global_262145.f_21086;
			break;
		
		case 2:
			return Global_262145.f_21087;
		
		case 3:
			return Global_262145.f_21088;
	}
	return 0;
}

void func_185(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "enter_left", 64);
					uParam2->f_24[0].f_1 = "enter_left_chair";
					uParam2->f_24[1].f_1 = "enter_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_1 = "base_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "base_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = func_183();
					if (func_182(PLAYER::PLAYER_ID(), 0))
					{
						uParam2->f_1717.f_2 = func_138(1);
					}
					uParam2->f_1715 = 59942;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 54834;
					uParam2->f_1703[1] = 2;
					uParam2->f_1703[1].f_1 = 191;
					uParam2->f_1703[1].f_2 = 0;
					uParam2->f_1703[1].f_3 = 1;
					uParam2->f_1712[1] = 54893;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_left", 64);
					uParam2->f_24[0].f_1 = "exit_left_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "exit_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_enter_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_enter_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_idle_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_idle_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1737 = 18448;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 59903;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1605[0].f_20 = 8;
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 1;
					uParam2->f_1737 = 31198;
					uParam2->f_1738 = 54707;
					break;
			}
			break;
	}
}

int func_186(struct<4> Param0)
{
	Param0 = { Param0 };
	if (!func_135() && !func_75())
	{
		return 1;
	}
	return 0;
}

void func_187(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_HTRUCK_T_1e"))
		{
			if (func_61())
			{
				iVar0 = func_58(Global_1590382);
				if (iVar0 != -1)
				{
					iVar0 = (func_57() - iVar0);
					if (iVar0 < 0)
					{
						iVar0 = 0;
					}
					Var1 = { func_56(iVar0, 0, 1) };
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0->f_2);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var1);
					HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, 100);
				}
			}
			if (!func_181() && !func_179())
			{
				if (func_55())
				{
					HUD::CLEAR_HELP(1);
					uParam0->f_2 = func_138(1);
				}
			}
		}
		else if (!func_54(uParam0->f_2) && func_61())
		{
			func_137(uParam0->f_2);
		}
	}
}

void func_188(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_1739 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
						uParam2->f_24[0].f_1 = "enter_chair";
						uParam2->f_24[1].f_1 = "enter_control";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter_left", 64);
						uParam2->f_24[0].f_1 = "enter_left_chair";
						uParam2->f_24[1].f_1 = "enter_left_control";
					}
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_1 = "base_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "base_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = func_192();
					if (func_170(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_183();
					}
					if (func_163(PLAYER::PLAYER_ID()) || func_158(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_191();
					}
					if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
					{
						uParam2->f_1717.f_2 = func_192();
					}
					uParam2->f_1715 = 13061;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 12355;
					uParam2->f_1703[1] = 2;
					uParam2->f_1703[1].f_1 = 191;
					uParam2->f_1703[1].f_2 = 0;
					uParam2->f_1703[1].f_3 = 1;
					uParam2->f_1712[1] = 61180;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_left", 64);
					uParam2->f_24[0].f_1 = "exit_left_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "exit_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_enter_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_enter_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_idle_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_idle_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 61151;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 1;
					uParam2->f_1737 = 31198;
					uParam2->f_1738 = 54707;
					break;
			}
			break;
	}
}

int func_189(struct<4> Param0)
{
	Param0 = { Param0 };
	if (!Global_2513487)
	{
		return 1;
	}
	return 0;
}

int func_190(struct<4> Param0)
{
	Param0 = { Param0 };
	if (Global_2513487)
	{
		return 1;
	}
	return 0;
}

char* func_191()
{
	if (Global_1319112)
	{
		sVar0 = "HUNTGUN_T_1_O";
	}
	else if (func_178())
	{
		sVar0 = "HUNTGUN_T_1c_O";
	}
	else if (func_157())
	{
		sVar0 = "HUNTGUN_T_1d";
	}
	else if (func_184())
	{
		sVar0 = "HUNTGUN_T_1d";
	}
	else
	{
		sVar0 = "HUNTGUN_T_1b_O";
	}
	return sVar0;
}

char* func_192()
{
	if (Global_1574442 == 0)
	{
		sVar0 = "HUNTGUN_T_1_DB";
	}
	else
	{
		sVar0 = "HUNTGUN_T_2_DB";
	}
	return sVar0;
}

void func_193(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_1739 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter_left", 64);
						uParam2->f_24[0].f_1 = "enter_left_chair";
						uParam2->f_24[1].f_1 = "enter_left_control";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
						uParam2->f_24[0].f_1 = "enter_chair";
						uParam2->f_24[1].f_1 = "enter_control";
					}
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_1 = "base_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "base_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = func_183();
					if (func_170(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_183();
					}
					if (func_163(PLAYER::PLAYER_ID()) || func_158(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_191();
					}
					if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
					{
						uParam2->f_1717.f_2 = func_192();
					}
					uParam2->f_1715 = 13061;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 12355;
					uParam2->f_1703[1] = 2;
					uParam2->f_1703[1].f_1 = 191;
					uParam2->f_1703[1].f_2 = 0;
					uParam2->f_1703[1].f_3 = 1;
					uParam2->f_1712[1] = 61180;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_left", 64);
					uParam2->f_24[0].f_1 = "exit_left_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "exit_left_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_enter_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_enter_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_idle_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_idle_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 61151;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 1;
					uParam2->f_1737 = 31198;
					uParam2->f_1738 = 54707;
					break;
			}
			break;
	}
}

void func_194(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	uParam2->f_1739 = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					if (iParam4 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
						uParam2->f_24[0].f_1 = "enter_chair";
						uParam2->f_24[1].f_1 = "enter_control";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "enter_left", 64);
						uParam2->f_24[0].f_1 = "enter_left_chair";
						uParam2->f_24[1].f_1 = "enter_left_control";
					}
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_1 = "base_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "base_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = func_183();
					if (func_170(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_183();
					}
					if (func_163(PLAYER::PLAYER_ID()) || func_158(PLAYER::PLAYER_ID()))
					{
						uParam2->f_1717.f_2 = func_191();
					}
					if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
					{
						uParam2->f_1717.f_2 = func_192();
					}
					uParam2->f_1715 = 13061;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 12355;
					uParam2->f_1703[1] = 2;
					uParam2->f_1703[1].f_1 = 191;
					uParam2->f_1703[1].f_2 = 0;
					uParam2->f_1703[1].f_3 = 1;
					uParam2->f_1712[1] = 61180;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit", 64);
					uParam2->f_24[0].f_1 = "exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_enter", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_enter_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_enter_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_idle", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_idle_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_idle_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 194;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 61151;
					break;
				
				case 2:
					uParam2->f_1605[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[0] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					StringCopy(&(uParam2->f_1605[0].f_1), "COMPUTER_exit", 64);
					uParam2->f_24[0].f_1 = "COMPUTER_exit_chair";
					uParam2->f_24[1] = "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@";
					uParam2->f_24[1].f_1 = "COMPUTER_exit_control";
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1724.f_1 = 0;
					uParam2->f_1724 = 1;
					uParam2->f_1737 = 31198;
					uParam2->f_1738 = 54707;
					break;
			}
			break;
	}
}

void func_195(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					break;
				
				case 1:
					uParam2->f_1605[0] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					break;
				
				case 2:
					uParam2->f_1605[0] = "amb@world_human_aa_coffee@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					break;
			}
			break;
	}
}

void func_196(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_AA_COFFEE", 64);
					break;
			}
			break;
	}
}

void func_197(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_TOURIST_MOBILE", 64);
					break;
			}
			break;
	}
}

void func_198(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_TOURIST_MAP", 64);
					break;
			}
			break;
	}
}

void func_199(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_CONST_DRILL", 64);
					break;
			}
			break;
	}
}

void func_200(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_WELDING", 64);
					break;
			}
			break;
	}
}

void func_201(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_HAMMERING", 64);
					break;
			}
			break;
	}
}

void func_202(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_SMOKING", 64);
					break;
			}
			break;
	}
}

void func_203(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_HANG_OUT_STREET", 64);
					break;
			}
			break;
	}
}

void func_204(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					StringCopy(&(uParam2->f_1605[0].f_1), "WORLD_HUMAN_JANITOR", 64);
					uParam2->f_1726 = 1;
					break;
			}
			break;
	}
}

void func_205(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_24[0] = "mini@repair";
					uParam2->f_24[0].f_1 = "fixing_a_car";
					uParam2->f_1737 = 18448;
					break;
			}
			break;
	}
}

void func_206(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mini@repair";
					StringCopy(&(uParam2->f_1605[0].f_1), "fixing_a_player", 64);
					uParam2->f_1737 = 18448;
					break;
			}
			break;
	}
}

void func_207(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mini@repair";
					StringCopy(&(uParam2->f_1605[0].f_1), "fixing_a_ped", 64);
					uParam2->f_1737 = 18448;
					break;
			}
			break;
	}
}

void func_208(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "amb@world_human_hammering@male@base";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "amb@world_human_hammering@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_209(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "missmechanic";
					StringCopy(&(uParam2->f_1605[0].f_1), "work2_base", 64);
					uParam2->f_1737 = 18448;
					break;
			}
			break;
	}
}

void func_210(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@male@base";
					}
					else
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@female@base";
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@male@idle_a";
					}
					else
					{
						uParam2->f_1605[0] = "amb@world_human_smoking_pot@female@idle_a";
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_211(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "amb@world_human_leaning@female@smoke@base";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "amb@world_human_leaning@female@smoke@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_212(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_24[0].f_2 = { 0.017f, -0.012f, 0.004f };
					uParam2->f_24[0].f_5 = { 0f, 0f, -12.6f };
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					if (iParam3 == 0)
					{
						uParam2->f_1605[0] = "anim@amb@clubhouse@seating@male@var_a@base@";
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "anim@amb@clubhouse@seating@female@var_a@base@", 64);
					}
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_213(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "hanging_out_operator", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_hands_operator", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "smokers_cough_operator", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "smokers_cough_v1_operator", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_214(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "base_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "base_broom";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cleaning_inside_by_hand_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "cleaning_inside_by_hand_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "cleaning_inside_by_hand_broom";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cleaning_inside_with_brush_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "cleaning_inside_with_brush_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "cleaning_inside_with_brush_broom";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cleaning_outside_by_hand_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "cleaning_outside_by_hand_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "cleaning_outside_by_hand_broom";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "playing_with_brush_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "playing_with_brush_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "playing_with_brush_broom";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sigh_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "sigh_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "sigh_broom";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "so_board_with_cleaning_lazycook", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[0].f_1 = "so_board_with_cleaning_rag";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_no_work@";
					uParam2->f_24[1].f_1 = "so_board_with_cleaning_broom";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_215(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "amb@world_human_stand_guard@male@idle_a";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_216(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_1605[0].f_1), "wait_base", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_1605[0].f_1), "wait_a", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_1605[0].f_1), "wait_b", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "missbigscore1guard_wait_rifle";
					StringCopy(&(uParam2->f_1605[0].f_1), "wait_c", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_217(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "missfbi_s4mop";
					StringCopy(&(uParam2->f_1605[0].f_1), "guard_idle_a", 64);
					uParam2->f_1737 = 18448;
					break;
			}
			break;
	}
}

void func_218(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_a", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_b", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@office@seating@male@var_a@base@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_c", 64);
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_219(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_lazyworkerfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0].f_1 = "look_around_phone";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[1].f_1 = "look_around_swivelchair";
					if (iParam3 == 1)
					{
						uParam2->f_24[2].f_2 = { 0.024f, 0.01f, -1.035f };
					}
					else
					{
						uParam2->f_24[2].f_2 = { 0.024f, -0.06f, -1.035f };
					}
					uParam2->f_24[2].f_5 = { 0f, 0f, 180f };
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_lazyworkerfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0].f_1 = "look_around_v1_phone";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[1].f_1 = "look_around_v1_swivelchair";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "smokers_cough_lazyworker", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "smokers_cough_lazyworkerfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[0].f_1 = "smokers_cough_phone";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_no_work_bgen_chair_no_work@";
					uParam2->f_24[1].f_1 = "smokers_cough_swivelchair";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_220(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_01_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_01-noworkfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "stand_phone_idle_01_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_02_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_02-noworkfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "stand_phone_idle_02_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_03_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_idle_03-noworkfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "stand_phone_idle_03_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_lookaround_nowork", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stand_phone_lookaround-noworkfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "stand_phone_lookaround_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_221(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sit_phone_idle_01_nowork", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "sit_phone_idle_01_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sit_phone_idle_02_nowork", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "sit_phone_idle_02_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sit_phone_idle_03_nowork", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "sit_phone_idle_03_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sit_phone_lookingleft_nowork", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "sit_phone_lookingleft_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_no_work@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sit_phone_lookingleft_nowork", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_no_work@";
					uParam2->f_24[0].f_1 = "sit_phone_lookingleft_phone01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_222(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18448;
					uParam2->f_1717.f_2 = "MPYACHT_UNLEAN";
					uParam2->f_1715 = 13061;
					uParam2->f_1716 = 12381;
					uParam2->f_1703[0] = 2;
					uParam2->f_1703[0].f_1 = 51;
					uParam2->f_1703[0].f_2 = 2;
					uParam2->f_1712[0] = 12355;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@yacht@rail@standing@male@variant_01@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_223(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_char02", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_hammer";
					uParam2->f_1605[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[1].f_1), "break_weigh_char01", 64);
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_tray01";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_tray01^1";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_tray01^2";
					uParam2->f_24[4] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[4].f_1 = "break_weigh_tray01^3";
					uParam2->f_24[5] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[5].f_1 = "break_weigh_tray01^4";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_methbag01^6";
					uParam2->f_24[15] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[15].f_1 = "break_weigh_scoop";
					uParam2->f_24[15].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[15].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[15].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[15].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[15].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[15].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[16] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[16].f_1 = "break_weigh_scale";
					uParam2->f_24[17] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[17].f_1 = "break_weigh_pen";
					uParam2->f_24[18] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[18].f_1 = "break_weigh_clipboard";
					uParam2->f_24[19] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[19].f_1 = "break_weigh_tray01^5";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v1_char02", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v1_hammer";
					uParam2->f_1605[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[1].f_1), "break_weigh_v1_char01", 64);
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v1_tray01";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v1_tray01^1";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v1_tray01^2";
					uParam2->f_24[4] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[4].f_1 = "break_weigh_v1_tray01^3";
					uParam2->f_24[5] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[5].f_1 = "break_weigh_v1_tray01^4";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v1_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v1_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v1_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v1_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v1_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v1_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v1_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v1_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v1_methbag01^6";
					uParam2->f_24[15] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[15].f_1 = "break_weigh_v1_scoop";
					uParam2->f_24[15].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[15].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[15].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[15].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[15].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[15].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[16] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[16].f_1 = "break_weigh_v1_scale";
					uParam2->f_24[17] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[17].f_1 = "break_weigh_v1_pen";
					uParam2->f_24[18] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[18].f_1 = "break_weigh_v1_clipboard";
					uParam2->f_24[19] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[19].f_1 = "break_weigh_v1_tray01^5";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v2_char02", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v2_hammer";
					uParam2->f_1605[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[1].f_1), "break_weigh_v2_char01", 64);
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v2_tray01";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v2_tray01^1";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v2_tray01^2";
					uParam2->f_24[4] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[4].f_1 = "break_weigh_v2_tray01^3";
					uParam2->f_24[5] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[5].f_1 = "break_weigh_v2_tray01^4";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v2_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v2_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v2_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v2_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v2_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v2_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v2_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v2_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v2_methbag01^6";
					uParam2->f_24[15] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[15].f_1 = "break_weigh_v2_scoop";
					uParam2->f_24[15].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[15].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[15].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[15].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[15].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[15].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[16] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[16].f_1 = "break_weigh_v2_scale";
					uParam2->f_24[17] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[17].f_1 = "break_weigh_v2_pen";
					uParam2->f_24[18] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[18].f_1 = "break_weigh_v2_clipboard";
					uParam2->f_24[19] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[19].f_1 = "break_weigh_v2_tray01^5";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v3_char02", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v3_hammer";
					uParam2->f_1605[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[1].f_1), "break_weigh_v3_char01", 64);
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v3_tray01";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v3_tray01^1";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v3_tray01^2";
					uParam2->f_24[4] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[4].f_1 = "break_weigh_v3_tray01^3";
					uParam2->f_24[5] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[5].f_1 = "break_weigh_v3_tray01^4";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v3_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v3_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v3_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v3_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v3_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v3_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v3_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v3_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v3_methbag01^6";
					uParam2->f_24[15] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[15].f_1 = "break_weigh_v3_scoop";
					uParam2->f_24[15].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[15].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[15].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[15].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[15].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[15].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[16] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[16].f_1 = "break_weigh_v3_scale";
					uParam2->f_24[17] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[17].f_1 = "break_weigh_v3_pen";
					uParam2->f_24[18] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[18].f_1 = "break_weigh_v3_clipboard";
					uParam2->f_24[19] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[19].f_1 = "break_weigh_v3_tray01^5";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_224(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_char01", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_scoop";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_scale";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_pen";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_clipboard";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_methbag01^6";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v1_char01", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v1_scoop";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v1_scale";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v1_pen";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v1_clipboard";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v1_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v1_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v1_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v1_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v1_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v1_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v1_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v1_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v1_methbag01^6";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v2_char01", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v2_scoop";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v2_scale";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v2_pen";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v2_clipboard";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v2_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v2_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v2_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v2_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v2_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v2_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v2_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v2_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v2_methbag01^6";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					StringCopy(&(uParam2->f_1605[0].f_1), "break_weigh_v3_char01", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[0].f_1 = "break_weigh_v3_scoop";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_meth_meth_scoop_pour";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_meth_pour_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_meth_pour_stop";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[1] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[1].f_1 = "break_weigh_v3_scale";
					uParam2->f_24[2] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[2].f_1 = "break_weigh_v3_pen";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[3].f_1 = "break_weigh_v3_clipboard";
					uParam2->f_24[6] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[6].f_1 = "break_weigh_v3_box01";
					uParam2->f_24[7] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[7].f_1 = "break_weigh_v3_box01^1";
					uParam2->f_24[8] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[8].f_1 = "break_weigh_v3_methbag01";
					uParam2->f_24[9] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[9].f_1 = "break_weigh_v3_methbag01^1";
					uParam2->f_24[10] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[10].f_1 = "break_weigh_v3_methbag01^2";
					uParam2->f_24[11] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[11].f_1 = "break_weigh_v3_methbag01^3";
					uParam2->f_24[12] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[12].f_1 = "break_weigh_v3_methbag01^4";
					uParam2->f_24[13] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[13].f_1 = "break_weigh_v3_methbag01^5";
					uParam2->f_24[14] = "anim@amb@business@meth@meth_smash_weight_check@";
					uParam2->f_24[14].f_1 = "break_weigh_v3_methbag01^6";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_225(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_med_counting_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_med_counting_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_med_counting_01_clipboard";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_med_counting_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_med_counting_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_med_counting_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_med_idle_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_med_idle_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_med_idle_01_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_med_idle_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_med_idle_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_med_idle_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_med_lookingaround_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_med_lookingaround_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_med_lookingaround_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_left_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_left_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_left_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_right_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_right_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_right_01_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_right_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_right_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_right_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_226(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_high_idle_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_high_idle_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_high_idle_01_clipboard";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_high_idle_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_high_idle_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_high_idle_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_high_idle_03_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_high_idle_03_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_high_idle_03_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_high_lookingaround_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_high_lookingaround_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_high_lookingaround_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_left_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_left_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_left_01_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_left_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_left_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_left_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_right_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_right_01_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_right_01_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@business@bgen@bgen_inspecting@";
					StringCopy(&(uParam2->f_1605[0].f_1), "inspecting_look_right_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[0].f_1 = "inspecting_look_right_02_pencil";
					uParam2->f_24[1] = "anim@amb@business@bgen@bgen_inspecting@";
					uParam2->f_24[1].f_1 = "inspecting_look_right_02_clipboard";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_227(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_idle_guage_monitor", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0].f_1 = "base_idle_guage_clipboard^1";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[1].f_1 = "base_idle_guage_pencil^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_1605[0].f_1), "button_press_monitor", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0].f_1 = "button_press_clipboard^1";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[1].f_1 = "button_press_pencil^1";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_1605[0].f_1), "button_press_v2_monitor", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0].f_1 = "button_press_v2_clipboard^1";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[1].f_1 = "button_press_v2_pencil^1";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v5_monitor", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[0].f_1 = "look_around_v5_clipboard^1";
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_cooking@monitoring@";
					uParam2->f_24[1].f_1 = "look_around_v5_pencil^1";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_228(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					StringCopy(&(uParam2->f_1605[0].f_1), "chemical_pour_long_cooker", 64);
					uParam2->f_24[0] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					uParam2->f_24[0].f_1 = "chemical_pour_long_sacid";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_sodium_pour_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_sodium_pour_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_meth_sodium_pour";
					uParam2->f_24[0].f_12[0] = { -0.18f, 0f, 0.38f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, -90f, 0f };
					uParam2->f_24[1] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					uParam2->f_24[1].f_1 = "chemical_pour_long_ammonia";
					uParam2->f_24[1].f_12[0].f_9 = "vfx_meth_business_propylene_pour_start";
					uParam2->f_24[1].f_12[0].f_10 = "vfx_meth_business_propylene_pour_stop";
					uParam2->f_24[1].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[1].f_12[0].f_6 = "scr_bike_meth_propylene_pour";
					uParam2->f_24[1].f_12[0] = { -0.025f, 0f, 0.375f };
					uParam2->f_24[1].f_12[0].f_3 = { 0f, -110f, 0f };
					uParam2->f_24[2] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					uParam2->f_24[2].f_1 = "chemical_pour_long_clipboard";
					uParam2->f_24[3] = "anim@amb@business@meth@meth_monitoring_cooking@cooking@";
					uParam2->f_24[3].f_1 = "chemical_pour_long_pencil";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_229(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (func_74(PLAYER::PLAYER_ID()))
					{
						uParam2->f_17.f_5 = 1.1f;
						uParam2->f_17.f_3 = 0.925f;
					}
					uParam2->f_1605[0] = "anim@safehouse@whisky";
					StringCopy(&(uParam2->f_1605[0].f_1), "DRINK_WHISKY_Stage1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "anim@safehouse@whisky";
					uParam2->f_24[0].f_1 = "drink_whisky_stage1_bottle";
					uParam2->f_24[1] = "anim@safehouse@whisky";
					uParam2->f_24[1].f_1 = "drink_whisky_stage1_tumbler";
					uParam2->f_24[2] = "anim@safehouse@whisky";
					uParam2->f_24[2].f_1 = "drink_whisky_stage1_tumbler";
					uParam2->f_1743 = 0.5f;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_230(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@safehouse@bong";
					StringCopy(&(uParam2->f_1605[0].f_1), "bong_stage1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_1744 = 0.5f;
					uParam2->f_24[0] = "anim@safehouse@bong";
					uParam2->f_24[0].f_1 = "bong_stage1_bong";
					uParam2->f_24[1] = "anim@safehouse@bong";
					uParam2->f_24[1].f_1 = "bong_stage1_lighter";
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_231(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "enter_bottle";
					uParam2->f_1743 = 0.9f;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "exit_1_bottle";
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_232(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "enter_bottle";
					uParam2->f_1743 = 0.3f;
					uParam2->f_17.f_5 = 1.5f;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "exit_1_bottle";
					uParam2->f_1754 = 0.2f;
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_233(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "enter", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "enter_bottle";
					uParam2->f_1743 = 0.9f;
					uParam2->f_1737 = 18508;
					break;
				
				case 1:
					uParam2->f_1605[0] = "mp_safehousebeer@";
					StringCopy(&(uParam2->f_1605[0].f_1), "exit_1", 64);
					uParam2->f_1605[0].f_17 = PLAYER::PLAYER_PED_ID();
					uParam2->f_24[0] = "mp_safehousebeer@";
					uParam2->f_24[0].f_1 = "exit_1_bottle";
					uParam2->f_1737 = 18508;
					break;
			}
			break;
	}
}

void func_234(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_17.f_5 = 0f;
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cut_guilotine_v1_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "cut_guilotine_v1_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "cut_guilotine_v1_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "cut_guilotine_v1_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "cut_guilotine_v1_singlemoneypage^2";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[4].f_1 = "cut_guilotine_v1_singlemoneypage^3";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "cut_guilotine_v1_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "cut_guilotine_v1_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "cut_guilotine_v1_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "cut_guilotine_v1_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "cut_guilotine_v1_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "cut_guilotine_v1_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "cut_guilotine_v1_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "cut_guilotine_v1_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_235(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cut_guilotine_v1_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "cut_guilotine_v1_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "cut_guilotine_v1_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "cut_guilotine_v1_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "cut_guilotine_v1_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "cut_guilotine_v1_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "cut_guilotine_v1_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "cut_guilotine_v1_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "cut_guilotine_v1_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "cut_guilotine_v1_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "cut_guilotine_v1_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "cut_guilotine_v1_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "cut_guilotine_v1_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cut_guilotine_v2_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "cut_guilotine_v2_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "cut_guilotine_v2_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "cut_guilotine_v2_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "cut_guilotine_v2_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "cut_guilotine_v2_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "cut_guilotine_v2_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "cut_guilotine_v2_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "cut_guilotine_v2_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "cut_guilotine_v2_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "cut_guilotine_v2_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "cut_guilotine_v2_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "cut_guilotine_v2_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v1_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "idle_v1_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "idle_v1_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "idle_v1_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "idle_v1_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "idle_v1_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "idle_v1_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "idle_v1_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "idle_v1_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "idle_v1_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "idle_v1_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "idle_v1_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "idle_v1_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_right_at_cuttings_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "look_right_at_cuttings_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "look_right_at_cuttings_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "look_right_at_cuttings_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "look_right_at_cuttings_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "look_right_at_cuttings_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "look_right_at_cuttings_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "look_right_at_cuttings_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "look_right_at_cuttings_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "look_right_at_cuttings_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "look_right_at_cuttings_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "look_right_at_cuttings_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "look_right_at_cuttings_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_left_at_sheets_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "look_left_at_sheets_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "look_left_at_sheets_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "look_left_at_sheets_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "look_left_at_sheets_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "look_left_at_sheets_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "look_left_at_sheets_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "look_left_at_sheets_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "look_left_at_sheets_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "look_left_at_sheets_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "look_left_at_sheets_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "look_left_at_sheets_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "look_left_at_sheets_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					StringCopy(&(uParam2->f_1605[0].f_1), "load_guillotine_billcutter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[0].f_1 = "load_guillotine_papercutter";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[1].f_1 = "load_guillotine_singlemoneypage";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[2].f_1 = "load_guillotine_singlemoneypage^1";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[3].f_1 = "load_guillotine_singlemoneypage^2";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[5].f_1 = "load_guillotine_table";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[6].f_1 = "load_guillotine_moneyStack";
					uParam2->f_24[7] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[7].f_1 = "load_guillotine_SingleMoneyStrip^4";
					uParam2->f_24[8] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[8].f_1 = "load_guillotine_SingleMoneyStrip^3";
					uParam2->f_24[9] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[9].f_1 = "load_guillotine_SingleMoneyStrip^2";
					uParam2->f_24[10] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[10].f_1 = "load_guillotine_SingleMoneyStrip^1";
					uParam2->f_24[11] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[11].f_1 = "load_guillotine_SingleMoneyStrip";
					uParam2->f_24[12] = "anim@amb@business@cfm@cfm_cut_sheets@";
					uParam2->f_24[12].f_1 = "load_guillotine_SingleStack";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_236(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "watch_production_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "watch_production_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "watch_production_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "watch_production_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "watch_production_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "watch_production_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "watch_production_ScrunchedMoney^5";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "watch_production_v1_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "watch_production_v1_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "watch_production_v1_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "watch_production_v1_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "watch_production_v1_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "watch_production_v1_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "watch_production_v1_ScrunchedMoney^5";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "watch_production_v2_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "watch_production_v2_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "watch_production_v2_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "watch_production_v2_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "watch_production_v2_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "watch_production_v2_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "watch_production_v2_ScrunchedMoney^5";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "button_press_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "button_press_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "button_press_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "button_press_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "button_press_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "button_press_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "button_press_ScrunchedMoney^5";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "cough_spit_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "cough_spit_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "cough_spit_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "cough_spit_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "cough_spit_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "cough_spit_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "cough_spit_ScrunchedMoney^5";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					StringCopy(&(uParam2->f_1605[0].f_1), "stop_blockage_operator", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[0].f_1 = "stop_blockage_ScrunchedMoney";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[1].f_1 = "stop_blockage_ScrunchedMoney^1";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[2].f_1 = "stop_blockage_ScrunchedMoney^2";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[3].f_1 = "stop_blockage_ScrunchedMoney^3";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[4].f_1 = "stop_blockage_ScrunchedMoney^4";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_machine_oversee@";
					uParam2->f_24[5].f_1 = "stop_blockage_ScrunchedMoney^5";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_237(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "note_counting_v2_counter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0].f_1 = "note_counting_v2_chair";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[1].f_1 = "note_counting_v2_moneyWrap";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[2].f_1 = "note_counting_v2_moneyUnsorted";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[3].f_1 = "note_counting_v2_moneyBin";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[4].f_1 = "note_counting_v2_MoneyWrap^1";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[5].f_1 = "note_counting_v2_moneyUnsorted^1";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[6].f_1 = "note_counting_v2_BinMoney";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "note_counting_v4_counter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0].f_1 = "note_counting_v4_chair";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[1].f_1 = "note_counting_v4_moneyWrap";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[2].f_1 = "note_counting_v4_moneyUnsorted";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[3].f_1 = "note_counting_v4_moneyBin";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[4].f_1 = "note_counting_v4_MoneyWrap^1";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[5].f_1 = "note_counting_v4_moneyUnsorted^1";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[6].f_1 = "note_counting_v4_BinMoney";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "lookaround_counting_counter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0].f_1 = "lookaround_counting_chair";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[1].f_1 = "lookaround_counting_moneyWrap";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[2].f_1 = "lookaround_counting_moneyUnsorted";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[3].f_1 = "lookaround_counting_moneyBin";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[4].f_1 = "lookaround_counting_MoneyWrap^1";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[5].f_1 = "lookaround_counting_moneyUnsorted^1";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[6].f_1 = "lookaround_counting_BinMoney";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "paper_jam_counter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0].f_1 = "paper_jam_chair";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[1].f_1 = "paper_jam_moneyWrap";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[2].f_1 = "paper_jam_moneyUnsorted";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[3].f_1 = "paper_jam_moneyBin";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[4].f_1 = "paper_jam_MoneyWrap^1";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[5].f_1 = "paper_jam_moneyUnsorted^1";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[6].f_1 = "paper_jam_BinMoney";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "paper_jam_v1_counter", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[0].f_1 = "paper_jam_v1_chair";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[1].f_1 = "paper_jam_v1_moneyWrap";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[2].f_1 = "paper_jam_v1_moneyUnsorted";
					uParam2->f_24[3] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[3].f_1 = "paper_jam_v1_moneyBin";
					uParam2->f_24[4] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[4].f_1 = "paper_jam_v1_MoneyWrap^1";
					uParam2->f_24[5] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[5].f_1 = "paper_jam_v1_moneyUnsorted^1";
					uParam2->f_24[6] = "anim@amb@business@cfm@cfm_counting_notes@";
					uParam2->f_24[6].f_1 = "paper_jam_v1_BinMoney";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_238(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "base_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "base_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "base_money01^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "loading_v1_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "loading_v1_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "loading_v1_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "loading_v1_money01^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "loading_v2_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "loading_v2_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "loading_v2_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "loading_v2_money01^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "loading_v3_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "loading_v3_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "loading_v3_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "loading_v3_money01^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "stretch_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "stretch_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "stretch_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "stretch_money01^1";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					StringCopy(&(uParam2->f_1605[0].f_1), "look_around_worker", 64);
					uParam2->f_24[0] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[0].f_1 = "look_around_bucket";
					uParam2->f_24[1] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[1].f_1 = "look_around_money01";
					uParam2->f_24[2] = "anim@amb@business@cfm@cfm_drying_notes@";
					uParam2->f_24[2].f_1 = "look_around_money01^1";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_239(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_1605[0].f_1), "full_cycle_v1_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0].f_1 = "full_cycle_v1_scoop";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[1].f_1 = "full_cycle_v1_cocdoll";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[2].f_1 = "full_cycle_v1_boxedDoll";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[3].f_1 = "full_cycle_v1_dollcast";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[4].f_1 = "full_cycle_v1_dollmould";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[5].f_1 = "full_cycle_v1_cocbowl";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[6].f_1 = "full_cycle_v1_dollCast^1";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[7].f_1 = "full_cycle_v1_dollCast^2";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[8].f_1 = "full_cycle_v1_dollCast^3";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[9].f_1 = "full_cycle_v1_cokePress";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[10].f_1 = "full_cycle_v1_FoldedBox";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[11].f_1 = "full_cycle_v1_FoldedBox^1";
					uParam2->f_24[12] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[12].f_1 = "full_cycle_v1_FoldedBox^2";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_1605[0].f_1), "full_cycle_v2_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0].f_1 = "full_cycle_v2_scoop";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[1].f_1 = "full_cycle_v2_cocdoll";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[2].f_1 = "full_cycle_v2_boxedDoll";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[3].f_1 = "full_cycle_v2_dollcast";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[4].f_1 = "full_cycle_v2_dollmould";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[5].f_1 = "full_cycle_v2_cocbowl";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[6].f_1 = "full_cycle_v2_dollCast^1";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[7].f_1 = "full_cycle_v2_dollCast^2";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[8].f_1 = "full_cycle_v2_dollCast^3";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[9].f_1 = "full_cycle_v2_cokePress";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[10].f_1 = "full_cycle_v2_FoldedBox";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[11].f_1 = "full_cycle_v2_FoldedBox^1";
					uParam2->f_24[12] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[12].f_1 = "full_cycle_v2_FoldedBox^2";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing_hi@";
					StringCopy(&(uParam2->f_1605[0].f_1), "full_cycle_v3_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[0].f_1 = "full_cycle_v3_scoop";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[1].f_1 = "full_cycle_v3_cocdoll";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[2].f_1 = "full_cycle_v3_boxedDoll";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[3].f_1 = "full_cycle_v3_dollcast";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[4].f_1 = "full_cycle_v3_dollmould";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[5].f_1 = "full_cycle_v3_cocbowl";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[6].f_1 = "full_cycle_v3_dollCast^1";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[7].f_1 = "full_cycle_v3_dollCast^2";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[8].f_1 = "full_cycle_v3_dollCast^3";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[9].f_1 = "full_cycle_v3_cokePress";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[10].f_1 = "full_cycle_v3_FoldedBox";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[11].f_1 = "full_cycle_v3_FoldedBox^1";
					uParam2->f_24[12] = "anim@amb@business@coc@coc_packing_hi@";
					uParam2->f_24[12].f_1 = "full_cycle_V3_FoldedBox^2";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_240(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "full_cycle_basicmould_v1_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "full_cycle_basicmould_v1_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "full_cycle_basicmould_v1_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "full_cycle_basicmould_v1_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "full_cycle_basicmould_v1_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "full_cycle_basicmould_v1_CocBlock";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v1_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "idle_v1_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "idle_v1_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "idle_v1_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "idle_v1_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "idle_v1_CocBlock";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v2_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "idle_v2_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "idle_v2_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "idle_v2_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "idle_v2_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "idle_v2_CocBlock";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v3_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "idle_v3_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "idle_v3_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "idle_v3_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "idle_v3_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "idle_v3_CocBlock";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v5_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "idle_v5_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "idle_v5_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "idle_v5_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "idle_v5_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "idle_v5_CocBlock";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_packing@";
					StringCopy(&(uParam2->f_1605[0].f_1), "idle_v6_pressoperator", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[0].f_1 = "idle_v6_cocbowl";
					uParam2->f_24[1] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[1].f_1 = "idle_v6_cocmold";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[2].f_1 = "idle_v6_cocpress";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[3].f_1 = "idle_v6_Scoop";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_packing@";
					uParam2->f_24[4].f_1 = "idle_v6_CocBlock";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_241(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[0].f_1), "fullcut_cycle_cokecutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0].f_1 = "fullcut_cycle_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 35f, 180f, 0f };
					uParam2->f_1605[1] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[1].f_1), "fullcut_cycle_cokepacker", 64);
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[1].f_1 = "fullcut_cycle_powderedmilk";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[2].f_1 = "fullcut_cycle_cokepowder";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[3].f_1 = "fullcut_cycle_cokepowder^1";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[4].f_1 = "fullcut_cycle_cokepowder^2";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[5].f_1 = "fullcut_cycle_cokepowder^3";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[6].f_1 = "fullcut_cycle_cokepowder^4";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[7].f_1 = "fullcut_cycle_cokepowder^5";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[8].f_1 = "fullcut_cycle_cokepowder^6";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[9].f_1 = "fullcut_cycle_creditcard";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[10].f_1 = "fullcut_cycle_creditcard^1";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[11].f_1 = "fullcut_cycle_cokescoop";
					uParam2->f_24[11].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[11].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[11].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[11].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[11].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[11].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[12] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[12].f_1 = "fullcut_cycle_cokesieve";
					uParam2->f_24[13] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[13].f_1 = "fullcut_cycle_cokescoop^1";
					uParam2->f_24[13].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_rh_start";
					uParam2->f_24[13].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_rh_stop";
					uParam2->f_24[13].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[13].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[13].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[13].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[14] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[14].f_1 = "fullcut_cycle_cokebowl";
					uParam2->f_24[15] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[15].f_1 = "fullcut_cycle_cokebox";
					uParam2->f_24[16] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[16].f_1 = "fullcut_cycle_cokebox^1";
					uParam2->f_24[17] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[17].f_1 = "fullcut_cycle_cokebox^2";
					uParam2->f_24[18] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[18].f_1 = "fullcut_cycle_cokebox^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[0].f_1), "fullcut_cycle_v1_cokecutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0].f_1 = "fullcut_cycle_v1_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 35f, 180f, 0f };
					uParam2->f_1605[1] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[1].f_1), "fullcut_cycle_v1_cokepacker", 64);
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[1].f_1 = "fullcut_cycle_v1_powderedmilk";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[2].f_1 = "fullcut_cycle_v1_cokepowder";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[3].f_1 = "fullcut_cycle_v1_cokepowder^1";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[4].f_1 = "fullcut_cycle_v1_cokepowder^2";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[5].f_1 = "fullcut_cycle_v1_cokepowder^3";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[6].f_1 = "fullcut_cycle_v1_cokepowder^4";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[7].f_1 = "fullcut_cycle_v1_cokepowder^5";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[8].f_1 = "fullcut_cycle_v1_cokepowder^6";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[9].f_1 = "fullcut_cycle_v1_creditcard";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[10].f_1 = "fullcut_cycle_v1_creditcard^1";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[11].f_1 = "fullcut_cycle_v1_cokescoop";
					uParam2->f_24[11].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[11].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[11].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[11].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[11].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[11].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[12] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[12].f_1 = "fullcut_cycle_v1_cokesieve";
					uParam2->f_24[13] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[13].f_1 = "fullcut_cycle_v1_cokescoop^1";
					uParam2->f_24[13].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_rh_start";
					uParam2->f_24[13].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_rh_stop";
					uParam2->f_24[13].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[13].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[13].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[13].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[14] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[14].f_1 = "fullcut_cycle_v1_cokebowl";
					uParam2->f_24[15] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[15].f_1 = "fullcut_cycle_v1_cokebox";
					uParam2->f_24[16] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[16].f_1 = "fullcut_cycle_v1_cokebox^1";
					uParam2->f_24[17] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[17].f_1 = "fullcut_cycle_v1_cokebox^2";
					uParam2->f_24[18] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[18].f_1 = "fullcut_cycle_v1_cokebox^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[0].f_1), "fullcut_cycle_v2_cokecutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0].f_1 = "fullcut_cycle_v2_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 35f, 180f, 0f };
					uParam2->f_1605[1] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[1].f_1), "fullcut_cycle_v2_cokepacker", 64);
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[1].f_1 = "fullcut_cycle_v2_powderedmilk";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[2].f_1 = "fullcut_cycle_v2_cokepowder";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[3].f_1 = "fullcut_cycle_v2_cokepowder^1";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[4].f_1 = "fullcut_cycle_v2_cokepowder^2";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[5].f_1 = "fullcut_cycle_v2_cokepowder^3";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[6].f_1 = "fullcut_cycle_v2_cokepowder^4";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[7].f_1 = "fullcut_cycle_v2_cokepowder^5";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[8].f_1 = "fullcut_cycle_v2_cokepowder^6";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[9].f_1 = "fullcut_cycle_v2_creditcard";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[10].f_1 = "fullcut_cycle_v2_creditcard^1";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[11].f_1 = "fullcut_cycle_v2_cokescoop";
					uParam2->f_24[11].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_rh_start";
					uParam2->f_24[11].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_rh_stop";
					uParam2->f_24[11].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[11].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[11].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[11].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[12] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[12].f_1 = "fullcut_cycle_v2_cokesieve";
					uParam2->f_24[13] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[13].f_1 = "fullcut_cycle_v2_cokescoop^1";
					uParam2->f_24[13].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_rh_start";
					uParam2->f_24[13].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_rh_stop";
					uParam2->f_24[13].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[13].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[13].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[13].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[14] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[14].f_1 = "fullcut_cycle_v2_cokebowl";
					uParam2->f_24[15] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[15].f_1 = "fullcut_cycle_v2_cokebox";
					uParam2->f_24[16] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[16].f_1 = "fullcut_cycle_v2_cokebox^1";
					uParam2->f_24[17] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[17].f_1 = "fullcut_cycle_v2_cokebox^2";
					uParam2->f_24[18] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[18].f_1 = "fullcut_cycle_V2_cokebox^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[0].f_1), "fullcut_cycle_v3_cokecutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[0].f_1 = "fullcut_cycle_v3_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_lh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_lh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 35f, 180f, 0f };
					uParam2->f_1605[1] = "anim@amb@business@coc@coc_unpack_cut@";
					StringCopy(&(uParam2->f_1605[1].f_1), "fullcut_cycle_v3_cokepacker", 64);
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[1].f_1 = "fullcut_cycle_v3_powderedmilk";
					uParam2->f_24[2] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[2].f_1 = "fullcut_cycle_v3_cokepowder";
					uParam2->f_24[3] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[3].f_1 = "fullcut_cycle_v3_cokepowder^1";
					uParam2->f_24[4] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[4].f_1 = "fullcut_cycle_v3_cokepowder^2";
					uParam2->f_24[5] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[5].f_1 = "fullcut_cycle_v3_cokepowder^3";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[6].f_1 = "fullcut_cycle_v3_cokepowder^4";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[7].f_1 = "fullcut_cycle_v3_cokepowder^5";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[8].f_1 = "fullcut_cycle_v3_cokepowder^6";
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[9].f_1 = "fullcut_cycle_v3_creditcard";
					uParam2->f_24[10] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[10].f_1 = "fullcut_cycle_v3_creditcard^1";
					uParam2->f_24[11] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[11].f_1 = "fullcut_cycle_v3_cokescoop";
					uParam2->f_24[11].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[11].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[11].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[11].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[11].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[11].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[12] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[12].f_1 = "fullcut_cycle_v3_cokesieve";
					uParam2->f_24[13] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[13].f_1 = "fullcut_cycle_v3_cokescoop^1";
					uParam2->f_24[13].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_rh_start";
					uParam2->f_24[13].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_rh_stop";
					uParam2->f_24[13].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[13].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[13].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[13].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[14] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[14].f_1 = "fullcut_cycle_v3_cokebowl";
					uParam2->f_24[15] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[15].f_1 = "fullcut_cycle_v3_cokebox";
					uParam2->f_24[16] = "anim@amb@business@coc@coc_unpack_cut@";
					uParam2->f_24[16].f_1 = "fullcut_cycle_v3_cokebox^1";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_242(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_v1_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_v1_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_v1_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_V1_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_V1_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_V1_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_V1_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_v2_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_v2_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_v2_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_V2_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_V2_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_V2_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_V2_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_v3_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_v3_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_v3_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_V3_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_V3_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_V3_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_V3_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_v4_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_v4_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_v4_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_V4_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_V4_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_V4_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_V4_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					StringCopy(&(uParam2->f_1605[0].f_1), "coke_cut_v5_coccutter", 64);
					uParam2->f_24[0] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[0].f_1 = "coke_cut_v5_bakingsoda";
					uParam2->f_24[0].f_12[0].f_9 = "vfx_meth_business_cocaine_box_pour_rh_start";
					uParam2->f_24[0].f_12[0].f_10 = "vfx_meth_business_cocaine_box_pour_rh_stop";
					uParam2->f_24[0].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[0].f_12[0].f_6 = "scr_bike_coc_cocaine_box_pour";
					uParam2->f_24[0].f_12[0] = { 0f, 0f, 0.23f };
					uParam2->f_24[0].f_12[0].f_3 = { 0f, 180f, 0f };
					uParam2->f_24[1] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[1].f_1 = "coke_cut_v5_powderedmilk";
					uParam2->f_24[6] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[6].f_1 = "coke_cut_V5_creditcard";
					uParam2->f_24[7] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[7].f_1 = "coke_cut_V5_creditcard^1";
					uParam2->f_24[8] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[8].f_1 = "coke_cut_V5_scoop";
					uParam2->f_24[8].f_12[0].f_9 = "vfx_meth_business_cocaine_scoop_pour_lh_start";
					uParam2->f_24[8].f_12[0].f_10 = "vfx_meth_business_cocaine_scoop_pour_lh_stop";
					uParam2->f_24[8].f_12[0].f_7 = "scr_bike_business";
					uParam2->f_24[8].f_12[0].f_6 = "scr_bike_coc_cocaine_scoop_pour";
					uParam2->f_24[8].f_12[0] = { 0f, 0f, 0.055f };
					uParam2->f_24[8].f_12[0].f_3 = { 0f, 0f, -90f };
					uParam2->f_24[9] = "anim@amb@business@coc@coc_unpack_cut_left@";
					uParam2->f_24[9].f_1 = "coke_cut_V5_sieve";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_243(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v1_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v1_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_sort_v1_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v1_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v1_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v1_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v1_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v1_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v1_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v1_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v1_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v1_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_sort_v1_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_sort_v1_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_sort_v1_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_sort_v1_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_sort_v1_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_sort_v1_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_sort_v1_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_sort_v1_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_sort_v1_chair01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v2_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v2_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_sort_v2_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v2_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v2_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v2_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v2_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v2_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v2_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v2_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v2_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v2_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_sort_v2_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_sort_v2_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_sort_v2_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_sort_v2_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_sort_v2_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_sort_v2_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_sort_v2_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_sort_v2_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_sort_v2_chair01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v3_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v3_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_sort_v3_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v3_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v3_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v3_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v3_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v3_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v3_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v3_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v3_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v3_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_sort_v3_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_sort_v3_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_sort_v3_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_sort_v3_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_sort_v3_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_sort_v3_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_sort_v3_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_sort_v3_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_sort_v3_chair01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_tap_table_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_tap_table_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_tap_table_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_tap_table_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_tap_table_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_tap_table_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_tap_table_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_tap_table_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_tap_table_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_tap_table_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_tap_table_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_tap_table_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_tap_table_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_tap_table_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_tap_table_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_tap_table_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_tap_table_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_tap_table_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_tap_table_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_tap_table_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_tap_table_chair01";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_cough_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_cough_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_cough_sorter02", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_cough_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_cough_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_cough_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_cough_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_cough_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_cough_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_cough_chair02";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_look_left_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_look_left_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_look_left_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_look_left_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_look_left_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_look_left_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_look_left_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_look_left_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_look_left_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_look_left_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_look_left_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_look_left_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_look_left_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_look_left_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_look_left_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_look_left_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_look_left_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_look_left_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_look_left_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_look_left_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_look_left_chair01";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_look_right_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_look_right_weeddry01a";
					uParam2->f_1605[1] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[1].f_1), "sorter_left_look_right_sorter01", 64);
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_look_right_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_look_right_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_look_right_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_look_right_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_look_right_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_look_right_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_look_right_weedbud02a^1";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_look_right_weedbud02b^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_look_right_weedbud02b^2";
					uParam2->f_24[10] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[10].f_1 = "sorter_right_look_right_weedbud02b^5";
					uParam2->f_24[11] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[11].f_1 = "sorter_right_look_right_weedbud02b^4";
					uParam2->f_24[12] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[12].f_1 = "sorter_right_look_right_weedbud02b^3";
					uParam2->f_24[13] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[13].f_1 = "sorter_right_look_right_weedbud02a^2";
					uParam2->f_24[14] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[14].f_1 = "sorter_right_look_right_weedleaf01a^1";
					uParam2->f_24[15] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[15].f_1 = "sorter_right_look_right_bucket01a^1";
					uParam2->f_24[16] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[16].f_1 = "sorter_right_look_right_bucket01a";
					uParam2->f_24[17] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[17].f_1 = "sorter_right_look_right_chair02";
					uParam2->f_24[18] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[18].f_1 = "sorter_right_look_right_chair01";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_244(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v1_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v1_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v1_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v1_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v1_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v1_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v1_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v1_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v1_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v1_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v1_weedbud02b^4";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v2_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v2_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v2_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v2_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v2_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v2_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v2_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v2_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v2_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v2_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v2_weedbud02b^4";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_sort_v3_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_sort_v3_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_sort_v3_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_sort_v3_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_sort_v3_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_sort_v3_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_sort_v3_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_sort_v3_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_sort_v3_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_sort_v3_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_sort_v3_weedbud02b^4";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_tap_table_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_tap_table_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_tap_table_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_tap_table_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_tap_table_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_tap_table_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_tap_table_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_tap_table_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_tap_table_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_tap_table_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_tap_table_weedbud02b^4";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_cough_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_cough_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_cough_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_cough_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_cough_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_cough_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_cough_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_cough_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_cough_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_cough_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_cough_weedbud02b^4";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_look_left_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_look_left_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_look_left_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_look_left_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_look_left_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_look_left_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_look_left_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_look_left_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_look_left_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_look_left_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_look_left_weedbud02b^4";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_right_look_right_sorter02", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_right_look_right_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_right_look_right_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_right_look_right_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_right_look_right_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_right_look_right_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_right_look_right_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_right_look_right_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_right_look_right_chair01";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_right_look_right_bucket01a^1";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_right_look_right_weedbud02b^4";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_245(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_base_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_base_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_base_pen";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_writing_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_writing_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_writing_pen";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_idle_01_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_idle_01_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_idle_01_pen";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_idle_02_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_idle_02_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_idle_02_pen";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_idle_03_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_idle_03_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_idle_03_pen";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					StringCopy(&(uParam2->f_1605[0].f_1), "weed_inspecting_high_idle_04_inspector", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[0].f_1 = "weed_inspecting_high_idle_04_clipboard";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_inspecting_high_dry@";
					uParam2->f_24[1].f_1 = "weed_inspecting_high_idle_04_pen";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_246(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_sort_v1_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_sort_v1_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_sort_v1_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_sort_v1_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_sort_v1_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_sort_v1_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_sort_v1_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_sort_v1_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_sort_v1_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_sort_v1_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_sort_v1_weedbud02b^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_sort_v2_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_sort_v2_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_sort_v2_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_sort_v2_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_sort_v2_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_sort_v2_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_sort_v2_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_sort_v2_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_sort_v2_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_sort_v2_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_sort_v2_weedbud02b^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_sort_v3_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_sort_v3_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_sort_v3_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_sort_v3_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_sort_v3_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_sort_v3_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_sort_v3_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_sort_v3_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_sort_v3_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_sort_v3_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_sort_v3_weedbud02b^3";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_tap_table_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_tap_table_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_tap_table_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_tap_table_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_tap_table_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_tap_table_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_tap_table_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_tap_table_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_tap_table_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_tap_table_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_tap_table_weedbud02b^3";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_cough_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_cough_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_cough_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_cough_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_cough_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_cough_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_cough_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_cough_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_cough_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_cough_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_cough_weedbud02b^3";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_look_left_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_look_left_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_look_left_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_look_left_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_look_left_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_look_left_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_look_left_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_look_left_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_look_left_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_look_left_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_look_left_weedbud02b^3";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_sorting_seated@";
					StringCopy(&(uParam2->f_1605[0].f_1), "sorter_left_look_right_sorter01", 64);
					uParam2->f_24[0] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[0].f_1 = "sorter_left_look_right_weeddry01a";
					uParam2->f_24[1] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[1].f_1 = "sorter_left_look_right_weeddry01a^1";
					uParam2->f_24[2] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[2].f_1 = "sorter_left_look_right_weedleaf01a";
					uParam2->f_24[3] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[3].f_1 = "sorter_left_look_right_weedbag01a";
					uParam2->f_24[4] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[4].f_1 = "sorter_left_look_right_weedbud02b";
					uParam2->f_24[5] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[5].f_1 = "sorter_left_look_right_weedbud02a";
					uParam2->f_24[6] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[6].f_1 = "sorter_left_look_right_weedbagpile01a";
					uParam2->f_24[7] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[7].f_1 = "sorter_left_look_right_chair02";
					uParam2->f_24[8] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[8].f_1 = "sorter_left_look_right_bucket01a";
					uParam2->f_24[9] = "anim@amb@business@weed@weed_sorting_seated@";
					uParam2->f_24[9].f_1 = "sorter_left_look_right_weedbud02b^3";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_247(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_01_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_02_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_03_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_04_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_crouch_checkingleaves_idle_04_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_248(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_base_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_base_spraybottle";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_idle_01_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_idle_01_spraybottle";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_idle_02_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_idle_02_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_01_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_spraying_01_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_02_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_spraying_02_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_crouch_spraying_03_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_crouch_spraying_03_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_249(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_base_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_stand_base_spraybottle";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_idle_01_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_stand_idle_01_spraybottle";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_kneeling_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_kneeling_01_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_stand_kneeling_01_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_spraying_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_spraying_01_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_stand_spraying_01_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_spraying_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_spraybottle_stand_spraying_02_inspectorfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					uParam2->f_24[0].f_1 = "weed_spraybottle_stand_spraying_02_spraybottle";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_weed_business_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_spraybottle_spray";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_24[0].f_41[0].f_1 = { 0.05f, 0f, 0.175f };
					uParam2->f_24[0].f_41[0].f_4 = { 0f, 0f, -90f };
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_250(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_base_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_base_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_01_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_02_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_03_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_03_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_04_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_04_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_05_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_idle_05_inspectorfemale", 64);
					}
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_kneeling_01_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_kneeling_01_inspectorfemale", 64);
					}
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@business@weed@weed_inspecting_lo_med_hi@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_kneeling_02_inspector", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "weed_stand_checkingleaves_kneeling_02_inspectorfemale", 64);
					}
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_251(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "close_inspection_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "close_inspection_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "close_inspection_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "close_inspection_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "close_inspection_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "close_inspection_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "close_inspection_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "close_inspection_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "close_inspection_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "close_inspection_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "light_investigation_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "light_investigation_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "light_investigation_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "light_investigation_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "light_investigation_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "light_investigation_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "light_investigation_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "light_investigation_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "light_investigation_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "light_investigation_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "light_investigation_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "light_investigation_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "light_investigation_v1_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "light_investigation_v1_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "light_investigation_v1_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "light_investigation_v1_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "light_investigation_v1_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "light_investigation_v1_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "light_investigation_v1_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "light_investigation_v1_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "light_investigation_v1_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "light_investigation_v1_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "light_investigation_v1_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "light_investigation_v1_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stamped_id_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "stamped_id_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "stamped_id_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "stamped_id_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "stamped_id_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "stamped_id_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "stamped_id_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "stamped_id_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "stamped_id_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "stamped_id_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "stamped_id_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "stamped_id_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "trimmed_id_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "trimmed_id_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "trimmed_id_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "trimmed_id_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "trimmed_id_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "trimmed_id_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "trimmed_id_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "trimmed_id_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "trimmed_id_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "trimmed_id_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "trimmed_id_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "trimmed_id_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_id@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_idcounterfiter", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_idcounterfiterfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[0].f_1 = "look_around_v1_ruler";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[1].f_1 = "look_around_v1_scalpel";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[2].f_1 = "look_around_v1_driverslicense";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[3].f_1 = "look_around_v1_driverslicense^1";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[4].f_1 = "look_around_v1_driverslicense^2";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[5].f_1 = "look_around_v1_driverslicense^3";
					uParam2->f_24[6] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[6].f_1 = "look_around_v1_driverslicense^3";
					uParam2->f_24[7] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[7].f_1 = "look_around_v1_chair";
					uParam2->f_24[8] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[8].f_1 = "look_around_v1_foilTipper";
					uParam2->f_24[9] = "anim@amb@business@cfid@cfid_desk_id@";
					uParam2->f_24[9].f_1 = "look_around_v1_ruler";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_252(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "base_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "base_camera";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "base_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "camera_fiddle_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "camera_fiddle_camera";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "camera_fiddle_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "photograph_v1_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "photograph_v1_camera";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "photograph_v1_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "photograph_v2_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "photograph_v2_camera";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "photograph_v2_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "photograph_v3_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "photograph_v3_camera";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "photograph_v3_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[0].f_1), "photograph_v4_photographer", 64);
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_photograph@";
					uParam2->f_24[0].f_1 = "photograph_v4_camera";
					uParam2->f_24[0].f_41[0].f_10 = "vfx_cfid_business_camera_flash";
					uParam2->f_24[0].f_41[0].f_7 = "scr_bike_cfid_camera_flash";
					uParam2->f_24[0].f_41[0].f_8 = "scr_bike_business";
					uParam2->f_1605[1] = "anim@amb@business@cfid@cfid_photograph@";
					StringCopy(&(uParam2->f_1605[1].f_1), "photograph_v4_model", 64);
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_253(int iParam0, int iParam1, var uParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "close_inspection_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "close_inspection_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "close_inspection_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "close_inspection_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "close_inspection_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "close_inspection_chair";
					uParam2->f_1726 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 1:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "close_inspection_v1_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "close_inspection_v1_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "close_inspection_v1_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "close_inspection_v1_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "close_inspection_v1_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "close_inspection_v1_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "close_inspection_v1_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 2:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "computer_check_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "computer_check_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "computer_check_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "computer_check_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "computer_check_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "computer_check_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "computer_check_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "computer_check_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 3:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "doc_inspection_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "doc_inspection_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "doc_inspection_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "doc_inspection_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "doc_inspection_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "doc_inspection_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "doc_inspection_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "doc_inspection_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 4:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "doc_inspection_v2_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "doc_inspection_v2_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "doc_inspection_v2_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "doc_inspection_v2_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "doc_inspection_v2_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "doc_inspection_v2_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "doc_inspection_v2_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "doc_inspection_v2_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 5:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "look_around_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "look_around_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "look_around_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "look_around_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "look_around_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "look_around_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 6:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v1_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "look_around_v1_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "look_around_v1_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "look_around_v1_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "look_around_v1_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "look_around_v1_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "look_around_v1_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 7:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v2_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "look_around_v2_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "look_around_v2_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "look_around_v2_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "look_around_v2_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "look_around_v2_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "look_around_v2_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "look_around_v2_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 8:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "simple_inspect_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "simple_inspect_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "simple_inspect_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "simple_inspect_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "simple_inspect_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "simple_inspect_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "simple_inspect_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "simple_inspect_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
				
				case 9:
					uParam2->f_1605[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					if (iParam3 == 0)
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "simple_inspect_v1_idartist", 64);
					}
					else
					{
						StringCopy(&(uParam2->f_1605[0].f_1), "simple_inspect_v1_idartistfemale", 64);
					}
					uParam2->f_24[0] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[0].f_1 = "simple_inspect_v1_openpassport";
					uParam2->f_24[1] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[1].f_1 = "simple_inspect_v1_bundlepassport";
					uParam2->f_24[2] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[2].f_1 = "simple_inspect_v1_singlepassport";
					uParam2->f_24[3] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[3].f_1 = "simple_inspect_v1_magnifyingglass";
					uParam2->f_24[4] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[4].f_1 = "simple_inspect_v1_keyboard";
					uParam2->f_24[5] = "anim@amb@business@cfid@cfid_desk_docs@";
					uParam2->f_24[5].f_1 = "simple_inspect_v1_chair";
					uParam2->f_1726.f_1 = 1;
					uParam2->f_1737 = 19290;
					break;
			}
			break;
	}
}

void func_254(var uParam0)
{
	uParam0->f_1746 = 0;
	uParam0->f_1747 = 0;
	uParam0->f_1748 = 0;
	uParam0->f_1743 = -1f;
	uParam0->f_1744 = -1f;
	uParam0->f_1745 = -1f;
	uParam0->f_1754 = 1f;
	uParam0->f_1717.f_2 = "";
	uParam0->f_1726 = 0;
	uParam0->f_1726.f_1 = 0;
	uParam0->f_1726.f_2 = 0;
	StringCopy(&(uParam0->f_1726.f_3), "", 32);
	uParam0->f_17.f_4 = 0f;
	uParam0->f_17.f_5 = 1f;
	uParam0->f_1724.f_1 = -1;
	uParam0->f_17.f_6 = -1;
	uParam0->f_1738 = 54707;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_1605[iVar0].f_21[iVar1] = 2f;
			uParam0->f_1605[iVar0].f_21[iVar1].f_7 = "";
			uParam0->f_1605[iVar0].f_21[iVar1].f_8 = "";
			uParam0->f_1605[iVar0].f_21[iVar1].f_10 = "";
			uParam0->f_1605[iVar0].f_21[iVar1].f_12 = 0;
			iVar1++;
		}
		uParam0->f_1605[iVar0] = "";
		StringCopy(&(uParam0->f_1605[iVar0].f_1), "", 64);
		iVar0++;
	}
	iVar2 = 0;
	iVar1 = 0;
	iVar3 = 0;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_24[iVar2].f_41[iVar1] = 2f;
			uParam0->f_24[iVar2].f_41[iVar1].f_7 = "";
			uParam0->f_24[iVar2].f_41[iVar1].f_8 = "";
			uParam0->f_24[iVar2].f_41[iVar1].f_10 = "";
			uParam0->f_24[iVar2].f_41[iVar1].f_12 = 0;
			uParam0->f_24[iVar2].f_12[iVar1].f_11 = 2f;
			uParam0->f_24[iVar2].f_12[iVar1].f_12 = 2f;
			uParam0->f_24[iVar2].f_12[iVar1].f_6 = "";
			uParam0->f_24[iVar2].f_12[iVar1].f_7 = "";
			uParam0->f_24[iVar2].f_12[iVar1].f_8 = 0;
			uParam0->f_24[iVar2].f_12[iVar1].f_9 = "";
			uParam0->f_24[iVar2].f_12[iVar1].f_10 = "";
			iVar1++;
		}
		iVar3 = 0;
		while (iVar3 < 1)
		{
			uParam0->f_24[iVar2].f_68[iVar3] = 2f;
			uParam0->f_24[iVar2].f_68[iVar3].f_1 = 2f;
			uParam0->f_24[iVar2].f_68[iVar3].f_2 = "";
			uParam0->f_24[iVar2].f_68[iVar3].f_3 = -1f;
			uParam0->f_24[iVar2].f_68[iVar3].f_4 = "";
			uParam0->f_24[iVar2].f_68[iVar3].f_5 = "";
			uParam0->f_24[iVar2].f_68[iVar3].f_6 = 0;
			uParam0->f_24[iVar2].f_68[iVar3].f_7 = "";
			uParam0->f_24[iVar2].f_68[iVar3].f_8 = "";
			uParam0->f_24[iVar2].f_68[iVar3].f_9 = -1;
			iVar3++;
		}
		uParam0->f_24[iVar2] = "";
		uParam0->f_24[iVar2].f_1 = "";
		uParam0->f_24[iVar2].f_2 = { 0f, 0f, 0f };
		uParam0->f_24[iVar2].f_5 = { 0f, 0f, 0f };
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		uParam0->f_1749[iVar2] = 0;
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam0->f_1703[iVar4] = 2;
		uParam0->f_1703[iVar4].f_1 = 222;
		uParam0->f_1703[iVar4].f_2 = -1;
		uParam0->f_1703[iVar4].f_3 = -1;
		iVar4++;
	}
}

int func_255(var uParam0)
{
	if (((((((((ENTITY::GET_ENTITY_MODEL(uParam0) == -1667301416 || ENTITY::GET_ENTITY_MODEL(uParam0) == -1301974109) || ENTITY::GET_ENTITY_MODEL(uParam0) == 2014985464) || ENTITY::GET_ENTITY_MODEL(uParam0) == 1264941816) || ENTITY::GET_ENTITY_MODEL(uParam0) == -1215761931) || ENTITY::GET_ENTITY_MODEL(uParam0) == -2063419726) || ENTITY::GET_ENTITY_MODEL(uParam0) == 920595805) || ENTITY::GET_ENTITY_MODEL(uParam0) == 793439294) || ENTITY::GET_ENTITY_MODEL(uParam0) == -614546432) || ENTITY::GET_ENTITY_MODEL(uParam0) == -566941131)
	{
		return 1;
	}
	return 0;
}

int func_256(var uParam0, var uParam1)
{
	if (uParam0->f_2222 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
				{
					if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
					{
						return 0;
					}
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_257(var uParam0, var uParam1)
{
	func_84(uParam0->f_1930, 0, 0, &(uParam0->f_14), 0, -1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0]))
		{
			if ((func_83(uParam0->f_2223[iVar0]) && func_83(-1685625437)) && func_260(uParam0->f_14.f_1605[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_14.f_1605[iVar0], &(uParam0->f_14.f_1605[iVar0].f_1), uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
					Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_14.f_1605[iVar0], &(uParam0->f_14.f_1605[iVar0].f_1), uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
					uParam0->f_2223[iVar0].f_58 = { Var1 };
					uParam0->f_2223[iVar0].f_61.f_2 = Var4.z;
					(*uParam1)[iVar0] = PED::CREATE_PED(26, uParam0->f_2223[iVar0], uParam0->f_2223[iVar0].f_58, uParam0->f_2223[iVar0].f_61.f_2, 0, 1);
					uParam0->f_2356[iVar0] = (*uParam1)[iVar0];
					iVar7 = 0;
					while (iVar7 < 12)
					{
						PED::SET_PED_COMPONENT_VARIATION((*uParam1)[iVar0], iVar7, uParam0->f_2223[iVar0].f_1[iVar7], uParam0->f_2223[iVar0].f_1[iVar7].f_1, uParam0->f_2223[iVar0].f_1[iVar7].f_2);
						iVar7++;
					}
					if (uParam0->f_2223[iVar0].f_57 != -1569615261)
					{
						WEAPON::GIVE_WEAPON_TO_PED((*uParam1)[iVar0], uParam0->f_2223[iVar0].f_57, 1, 1, 1);
					}
					iVar8 = 0;
					while (iVar8 < 9)
					{
						if (uParam0->f_2223[iVar0].f_38[iVar8] != -1)
						{
							PED::SET_PED_PROP_INDEX((*uParam1)[iVar0], iVar8, uParam0->f_2223[iVar0].f_38[iVar8], uParam0->f_2223[iVar0].f_38[iVar8].f_1, 0);
						}
						iVar8++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_2223[iVar0]);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED((*uParam1)[iVar0], 0);
					PED::SET_PED_AS_ENEMY((*uParam1)[iVar0], 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0], 1);
					PED::SET_PED_RESET_FLAG((*uParam1)[iVar0], 249, 1);
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar0], 185, 1);
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar0], 108, 1);
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar0], 106, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE((*uParam1)[iVar0], 0);
					PED::_0x2F3C3D9F50681DE4((*uParam1)[iVar0], 1);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT((*uParam1)[iVar0], 0);
					PED::SET_PED_CONFIG_FLAG((*uParam1)[iVar0], 208, 1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2223[iVar0].f_64))
					{
						TASK::TASK_PLAY_ANIM((*uParam1)[iVar0], uParam0->f_2223[iVar0].f_64, uParam0->f_2223[iVar0].f_65, 1000f, -2f, -1, 1, 0, 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam1)[iVar0], 1);
						PED::SET_PED_KEEP_TASK((*uParam1)[iVar0], 1);
					}
					if (func_259(PLAYER::PLAYER_ID()))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_3[iVar0]))
						{
							Var9 = { func_258(uParam0->f_14.f_5) };
							Var9 = { Var9 - Vector(-1f, 0f, 0f) };
							uParam1->f_3[iVar0] = OBJECT::CREATE_OBJECT(-1685625437, Var9, 0, 0, 0);
							ENTITY::SET_ENTITY_COLLISION(uParam1->f_3[iVar0], 1, 0);
							ENTITY::SET_ENTITY_VISIBLE(uParam1->f_3[iVar0], false, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_3[iVar0], 1);
							ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_3[iVar0], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1685625437);
						}
					}
				}
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_258(struct<3> Param0)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9681f, -3202.106f, -98.40501f, 0) < 0.5f)
	{
		return 893.1678f, -3201.646f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 889.3768f, -3202.707f, -97.33437f, 0) < 0.5f)
	{
		return 890.0617f, -3201.742f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 884.0123f, -3207.512f, -99.19627f, 0) < 0.5f)
	{
		return 883.6851f, -3207.578f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 895.4799f, -3241.606f, -99.16917f, 0) < 0.5f)
	{
		return Param0 - Vector(1f, 0f, 0f);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 916.0695f, -3236.085f, -99.29433f, 0) < 0.5f)
	{
		return Param0 - Vector(1f, 0f, 0f);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9929f, -3212.16f, -99.20737f, 0) < 0.5f)
	{
		return 892.1853f, -3211.941f, -99.20605f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 888.2341f, -3213.902f, -98.39187f, 0) < 0.5f)
	{
		return 888.78f, -3212.886f, -99.19757f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 892.006f, -3203.125f, -98.40501f, 0) < 0.5f)
	{
		return 891.671f, -3203.159f, -99.19627f;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, 891.9165f, -3201.094f, -98.40501f, 0) < 0.5f)
	{
		return 892.4434f, -3200.836f, -99.19627f;
	}
	return Param0 + Vector(-1f, 0f, 0f);
}

int func_259(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_17(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_260(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_261(var uParam0, var uParam1)
{
	if (uParam0->f_2222 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_262(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0]))
		{
			STREAMING::REQUEST_MODEL(uParam0->f_2223[iVar0]);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_2223[iVar0]) && func_269(&(uParam0->f_2223[iVar0])))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
				{
					if (func_263(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) + 1, 0, 1))
					{
						NETWORK::_RESERVE_NETWORK_LOCAL_PEDS(NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 1) + 1);
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							uVar1 = PED::CREATE_PED(26, uParam0->f_2223[iVar0], uParam0->f_2223[iVar0].f_58, uParam0->f_2223[iVar0].f_61.f_2, 1, 1);
							iVar2 = 0;
							while (iVar2 < 12)
							{
								PED::SET_PED_COMPONENT_VARIATION(uVar1, iVar2, uParam0->f_2223[iVar0].f_1[iVar2], uParam0->f_2223[iVar0].f_1[iVar2].f_1, uParam0->f_2223[iVar0].f_1[iVar2].f_2);
								iVar2++;
							}
							if (uParam0->f_2223[iVar0].f_57 != -1569615261)
							{
								WEAPON::GIVE_WEAPON_TO_PED(uVar1, uParam0->f_2223[iVar0].f_57, 1, 1, 1);
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_2223[iVar0]);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uVar1, 0);
							PED::SET_PED_AS_ENEMY(uVar1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar1, 1);
							PED::SET_PED_RESET_FLAG(uVar1, 249, 1);
							PED::SET_PED_CONFIG_FLAG(uVar1, 185, 1);
							PED::SET_PED_CONFIG_FLAG(uVar1, 108, 1);
							NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uVar1, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(uVar1, 0);
							PED::_0x2F3C3D9F50681DE4(uVar1, 1);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uVar1, 0);
							PED::SET_PED_CONFIG_FLAG(uVar1, 208, 1);
							(*uParam1)[iVar0] = NETWORK::PED_TO_NET(uVar1);
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
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_263(int iParam0, bool bParam1, bool bParam2)
{
	return func_264(0, iParam0, 1, bParam1, bParam2);
}

int func_264(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!MISC::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_268(iParam0) - func_267(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_267(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_268(iParam0) - func_266(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_267(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_268(iParam0) - func_267(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_265(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_265(int iParam0)
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

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389296.f_1;
			break;
		
		case 1:
			return Global_1389296.f_2;
			break;
		
		case 2:
			return Global_1389296.f_3;
			break;
	}
	return 0;
}

int func_267(int iParam0, bool bParam1)
{
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425662[iVar0].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_268(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389304;
			break;
		
		case 1:
			return Global_1389305;
			break;
		
		case 2:
			return Global_1389306;
			break;
	}
	return 0;
}

int func_269(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_64))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_64);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_64))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_270(var uParam0, var uParam1)
{
	func_84(uParam0->f_1930, 0, 0, &(uParam0->f_14), 0, -1);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_14.f_24[iVar0]))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam0->f_14.f_24[iVar0]);
			if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_14.f_24[iVar0]))
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
					{
						if (func_271(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1, 0, 1))
						{
							NETWORK::_RESERVE_NETWORK_LOCAL_OBJECTS(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 1) + 1);
							if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
							{
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(1);
								}
								Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uParam0->f_14.f_24[iVar0], uParam0->f_14.f_24[iVar0].f_1, uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
								Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uParam0->f_14.f_24[iVar0], uParam0->f_14.f_24[iVar0].f_1, uParam0->f_14.f_5, uParam0->f_14.f_8, 0, 2) };
								(*uParam1)[iVar0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_2180[iVar0], Var1, 1, 1, 0));
								ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), Var4, 2, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), 1);
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), 1);
								ENTITY::_0xE66377CDDADA4810(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), 0);
								if (uParam0->f_2361)
								{
									ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), !uParam0->f_2368[iVar0], 0);
								}
								NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), 1);
								if (uParam0->f_2379.f_73 != -1)
								{
									if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()))) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
									{
										INTERIOR::FORCE_ROOM_FOR_ENTITY(NETWORK::NET_TO_OBJ((*uParam1)[iVar0]), INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()), uParam0->f_2379.f_73);
									}
								}
								if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
								{
									NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(0);
								}
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
				}
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_271(int iParam0, bool bParam1, bool bParam2)
{
	return func_264(2, iParam0, 1, bParam1, bParam2);
}

int func_272(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (uParam0->f_2222 == 0)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2223[iVar0]))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_273(var uParam0, var uParam1)
{
	if (uParam0->f_2222 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (STREAMING::IS_MODEL_IN_CDIMAGE(uParam0->f_2180[iVar0]))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID((*uParam1)[iVar0]))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_274(int iParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	func_298(uParam1);
	switch (iParam0)
	{
		case 1:
			func_297(uParam1, iParam2, 0);
			break;
		
		case 2:
			func_296(uParam1, iParam2, 0);
			break;
		
		case 3:
			func_295(uParam1, iParam2, 0);
			break;
		
		case 4:
			func_294(uParam1, iParam2, 0);
			break;
		
		case 5:
			func_293(uParam1, iParam2, 0);
			break;
		
		case 6:
			func_292(uParam1, iParam2, 0);
			break;
		
		case 7:
			func_291(uParam1, iParam2, 0);
			break;
		
		case 8:
			func_290(uParam1, iParam2, 0);
			break;
		
		case 9:
			func_289(uParam1, iParam2, 0);
			break;
		
		case 10:
			func_288(uParam1, iParam2, 0);
			break;
		
		case 11:
			func_287(uParam1, iParam2, 0);
			break;
		
		case 12:
			func_286(uParam1, iParam2, 0);
			break;
		
		case 13:
			func_285(uParam1, iParam2, 0);
			break;
		
		case 14:
			func_284(uParam1, iParam2, 0);
			break;
		
		case 15:
			func_283(uParam1, iParam2, 0);
			break;
		
		case 16:
			func_282(uParam1, iParam2, 0);
			break;
		
		case 17:
			func_281(uParam1, iParam2, 0);
			break;
		
		case 18:
			func_280(uParam1, iParam2, 0);
			break;
		
		case 19:
			func_279(uParam1, iParam2, 0);
			break;
		
		case 20:
			func_278(uParam1, iParam2, 0);
			break;
		
		case 21:
			func_277(uParam1, iParam2, 0);
			break;
		
		case 22:
			func_276(uParam1, iParam2, 0);
			break;
		
		case 23:
			func_275(uParam1, iParam2, 0);
			break;
	}
}

void func_275(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = -245247470;
			uParam0->f_1[0] = 0;
			uParam0->f_1[0].f_1 = 1;
			uParam0->f_1[3] = 0;
			uParam0->f_1[3].f_1 = 0;
			uParam0->f_1[4] = 0;
			uParam0->f_1[4].f_1 = 0;
			uParam0->f_1[11] = 0;
			uParam0->f_1[11].f_1 = 2;
			uParam0->f_57 = -1063057011;
			break;
	}
}

void func_276(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = -245247470;
			uParam0->f_1[0] = 1;
			uParam0->f_1[0].f_1 = 1;
			uParam0->f_1[3] = 0;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 0;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[11] = 0;
			uParam0->f_1[11].f_1 = 0;
			uParam0->f_57 = -1569615261;
			break;
	}
}

void func_277(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = -245247470;
			uParam0->f_1[0] = 1;
			uParam0->f_1[0].f_1 = 0;
			uParam0->f_1[3] = 0;
			uParam0->f_1[3].f_1 = 2;
			uParam0->f_1[4] = 0;
			uParam0->f_1[4].f_1 = 2;
			uParam0->f_1[11] = 0;
			uParam0->f_1[11].f_1 = 1;
			uParam0->f_57 = -1569615261;
			break;
	}
}

void func_278(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = -245247470;
			uParam0->f_1[0] = 0;
			uParam0->f_1[0].f_1 = 0;
			uParam0->f_1[3] = 0;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 0;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[11] = 0;
			uParam0->f_1[11].f_1 = 2;
			uParam0->f_57 = -1569615261;
			break;
	}
}

void func_279(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 8;
			uParam0->f_1[0].f_1 = 0;
			uParam0->f_1[2] = 2;
			uParam0->f_1[2].f_1 = 0;
			uParam0->f_1[3] = 8;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 6;
			uParam0->f_1[4].f_1 = 0;
			uParam0->f_1[5] = 1;
			uParam0->f_1[8] = 5;
			uParam0->f_57 = -1569615261;
			break;
	}
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 9;
			uParam0->f_1[2] = 2;
			uParam0->f_1[3] = 8;
			uParam0->f_1[4] = 5;
			uParam0->f_1[5] = 1;
			uParam0->f_1[8] = 5;
			uParam0->f_57 = 487013001;
			break;
	}
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case -1:
			if (iParam1 == -1)
			{
			}
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 8;
			uParam0->f_1[0].f_1 = 0;
			uParam0->f_1[2] = 2;
			uParam0->f_1[2].f_1 = 0;
			uParam0->f_1[3] = 8;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 6;
			uParam0->f_1[4].f_1 = 0;
			uParam0->f_1[5] = 1;
			uParam0->f_1[8] = 5;
			uParam0->f_57 = -1074790547;
			break;
	}
}

void func_282(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 1;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 4;
			uParam0->f_1[4].f_1 = 2;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = 0;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 1;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 4;
			uParam0->f_1[4].f_1 = 2;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_283(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 1;
			uParam0->f_1[2] = 1;
			uParam0->f_38[0] = 4;
			uParam0->f_38[1] = 0;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 1;
			uParam0->f_1[2] = 1;
			uParam0->f_38[0] = 4;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_284(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 5;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = 2;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 5;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = 2;
			uParam0->f_38[1] = 2;
			break;
	}
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 5;
			uParam0->f_1[3] = 4;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 2;
			uParam0->f_38[0] = 2;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 5;
			uParam0->f_1[3] = 4;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 2;
			uParam0->f_38[0] = 2;
			uParam0->f_38[1] = 2;
			break;
	}
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 2;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 1;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 2;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 1;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_287(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 2;
			uParam0->f_1[3] = 1;
			uParam0->f_1[4] = 1;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_38[0] = 4;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 2;
			uParam0->f_1[3] = 1;
			uParam0->f_1[4] = 1;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_38[0] = 4;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_288(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 6;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 3;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 6;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 3;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = 3;
			break;
	}
}

void func_289(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 6;
			uParam0->f_1[3] = 5;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 3;
			uParam0->f_1[8] = 1;
			uParam0->f_38[0] = 5;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 6;
			uParam0->f_1[3] = 5;
			uParam0->f_1[3].f_1 = 1;
			uParam0->f_1[4] = 3;
			uParam0->f_1[8] = 1;
			uParam0->f_38[0] = 5;
			uParam0->f_38[1] = 3;
			break;
	}
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 3;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 4;
			uParam0->f_1[8] = 3;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 3;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 4;
			uParam0->f_1[8] = 3;
			uParam0->f_38[0] = 3;
			uParam0->f_38[1] = 1;
			break;
	}
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 3;
			uParam0->f_1[3] = 2;
			uParam0->f_1[4] = 1;
			uParam0->f_38[0] = 1;
			uParam0->f_38[1] = 1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 3;
			uParam0->f_1[3] = 2;
			uParam0->f_1[4] = 1;
			uParam0->f_38[0] = 1;
			uParam0->f_38[1] = 1;
			break;
	}
}

void func_292(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 7;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 4;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 7;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 4;
			uParam0->f_1[8].f_1 = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 3;
			break;
	}
}

void func_293(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 7;
			uParam0->f_1[3] = 5;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 4;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 7;
			uParam0->f_1[3] = 5;
			uParam0->f_1[4] = 3;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 1;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 3;
			break;
	}
}

void func_294(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 0;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[3] = 6;
			uParam0->f_1[4] = 2;
			uParam0->f_1[4].f_1 = 1;
			uParam0->f_1[8] = 3;
			uParam0->f_1[8].f_1 = 2;
			uParam0->f_38[0] = 0;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_295(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_38[0] = 0;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_38[0] = 0;
			uParam0->f_38[1] = 0;
			break;
	}
}

void func_296(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 4;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 2;
			uParam0->f_1[8] = 4;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 4;
			uParam0->f_1[3] = 7;
			uParam0->f_1[4] = 2;
			uParam0->f_1[8] = 4;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 2;
			break;
	}
}

void func_297(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 4;
			uParam0->f_1[3] = 3;
			uParam0->f_1[4] = 2;
			uParam0->f_1[8] = 2;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = -1;
			break;
		
		case 1:
			*uParam0 = 1099321454;
			uParam0->f_1[0] = 4;
			uParam0->f_1[3] = 3;
			uParam0->f_1[4] = 2;
			uParam0->f_1[8] = 2;
			uParam0->f_38[0] = -1;
			uParam0->f_38[1] = 2;
			break;
	}
}

void func_298(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_1[iVar0] = 0;
		uParam0->f_1[iVar0].f_1 = 0;
		uParam0->f_1[iVar0].f_2 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		uParam0->f_38[iVar1] = -1;
		uParam0->f_38[iVar1].f_1 = 0;
		iVar1++;
	}
}

void func_299(var uParam0, var uParam1)
{
	func_444(uParam0, uParam1);
	if (func_443(uParam1->f_1, 91))
	{
		switch (uParam0->f_1930)
		{
			case 89:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { -1025.421f, -218.4773f, 36.9267f };
				uParam0->f_1939[0].f_3 = { -1024.568f, -218.8955f, 38.7449f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1997 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 89;
				break;
			
			case 90:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BEER";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1122.753f, -3145.893f, -38.0723f };
				uParam0->f_1939[0].f_3 = { 1122.742f, -3144.943f, -36.254f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_2362 = 1;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -1620762220;
				uParam0->f_1997 = 2;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 90;
				break;
			
			case 92:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BEER";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1117.538f, -3158.623f, -38.06276f };
				uParam0->f_1939[0].f_3 = { 1116.696f, -3159.302f, -36.56276f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_2362 = 1;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -1620762220;
				uParam0->f_1997 = 2;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 92;
				break;
			
			case 93:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
				uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_2362 = 1;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = 488156118;
				uParam0->f_2180[1] = -877183153;
				uParam0->f_1997 = 1;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 93;
				break;
			
			case 26:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
				uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1997 = 3;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 26;
				break;
			
			case 27:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1110.777f, -3158.928f, -38.06277f };
				uParam0->f_1939[0].f_3 = { 1112.2f, -3158.918f, -36.31277f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1997 = 3;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 27;
				break;
			
			case 28:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1110.627f, -3154.963f, -38.06277f };
				uParam0->f_1939[0].f_3 = { 1111.899f, -3154.95f, -36.31277f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1997 = 3;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 28;
				break;
			
			case 4:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BONG2";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1124.238f, -3143.698f, -38.06278f };
				uParam0->f_1939[0].f_3 = { 1123.25f, -3143.684f, -36.56278f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -257549932;
				uParam0->f_2180[1] = -680040094;
				uParam0->f_1997 = 1;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_2375 = 1;
				uParam0->f_1930 = 4;
				break;
			
			default:
				uParam0->f_1930 = -1;
				break;
			}
	}
	if (func_443(uParam1->f_1, 97))
	{
		switch (uParam0->f_1930)
		{
			case 90:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BEER";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 999.2708f, -3168.611f, -35.092f };
				uParam0->f_1939[0].f_3 = { 998.3392f, -3168.425f, -33.2738f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_2362 = 1;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -1620762220;
				uParam0->f_1997 = 2;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 90;
				break;
			
			case 4:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BONG2";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1009.128f, -3166.886f, -35.0576f };
				uParam0->f_1939[0].f_3 = { 1009.279f, -3165.998f, -33.0576f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -257549932;
				uParam0->f_2180[1] = -680040094;
				uParam0->f_1997 = 1;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_2375 = 1;
				uParam0->f_1930 = 4;
				break;
			
			case 93:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 1010.691f, -3167.417f, -35.08257f };
				uParam0->f_1939[0].f_3 = { 1011.755f, -3167.497f, -33.33257f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = 488156118;
				uParam0->f_2180[1] = -877183153;
				uParam0->f_1997 = 1;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 93;
				break;
			
			case 91:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BEER";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 997.4754f, -3167.156f, -35.092f };
				uParam0->f_1939[0].f_3 = { 997.634f, -3166.219f, -33.2738f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -1620762220;
				uParam0->f_1997 = 2;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 91;
				break;
			
			case 92:
				uParam0->f_1981 = 13315;
				uParam0->f_1939.f_38 = 13061;
				uParam0->f_1939.f_41 = 12381;
				uParam0->f_1939.f_31.f_2 = "SA_BEER";
				uParam0->f_1939.f_39 = 12355;
				uParam0->f_1939.f_27 = 2;
				uParam0->f_1939.f_27.f_1 = 51;
				uParam0->f_1939.f_40 = 12277;
				uParam0->f_1939[0] = { 997.9446f, -3166.966f, -34.84343f };
				uParam0->f_1939[0].f_3 = { 997.8281f, -3166.107f, -33.32248f };
				uParam0->f_1939[0].f_6 = 1f;
				uParam0->f_2373 = 1;
				uParam0->f_1982 = 13286;
				uParam0->f_1986.f_4.f_2 = 0.05f;
				uParam0->f_1986.f_10 = 8926;
				uParam0->f_1984 = 161942;
				uParam0->f_1937 = uParam1->f_1;
				uParam0->f_1983 = 9196;
				uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
				uParam0->f_1931.f_2 = 1;
				uParam0->f_2180[0] = -1620762220;
				uParam0->f_1997 = 2;
				uParam0->f_1998 = 0;
				uParam0->f_2361 = 0;
				uParam0->f_1930 = 92;
				break;
			
			default:
				uParam0->f_1930 = -1;
				break;
			}
	}
	switch (uParam0->f_1930)
	{
		case 154:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_2362 = 1;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 0;
			uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_2180[0] = 488156118;
			uParam0->f_2180[1] = 1480049515;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 154;
			break;
		
		case 165:
			uParam0->f_2373 = 0;
			uParam0->f_1981 = 161922;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_1984 = 161942;
			uParam0->f_1983 = 161482;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 0;
			uParam0->f_2223[0] = 1456705429;
			uParam0->f_2361 = 0;
			break;
		
		case 166:
			uParam0->f_2373 = 0;
			uParam0->f_1981 = 161922;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_1984 = 161942;
			uParam0->f_1983 = 161482;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 0;
			uParam0->f_2223[0] = 1822283721;
			uParam0->f_2361 = 0;
			break;
		
		case 167:
			uParam0->f_2373 = 0;
			uParam0->f_1981 = 161922;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_1984 = 161942;
			uParam0->f_1983 = 161482;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 3;
			uParam0->f_2223[0] = 1822283721;
			uParam0->f_2361 = 0;
			uParam0->f_2222 = 1;
			uParam0->f_2456 = 1;
			uParam1->f_67 = uParam0->f_2222;
			break;
		
		case 4:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_BONG2";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1006.61f, -3164.746f, -35.0921f };
			uParam0->f_1939[0].f_3 = { 1006.707f, -3165.691f, -33.2738f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_2362 = 1;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_USE_BONG";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_2180[0] = -257549932;
			uParam0->f_2180[1] = -680040094;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_2375 = 1;
			uParam0->f_1930 = 4;
			break;
		
		case 92:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_BEER";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 997.9446f, -3166.966f, -34.84343f };
			uParam0->f_1939[0].f_3 = { 997.8281f, -3166.107f, -33.32248f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_2180[0] = -1620762220;
			uParam0->f_1997 = 2;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 92;
			break;
		
		case 88:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { -1498.489f, -381.6565f, 39.52628f };
			uParam0->f_1939[0].f_3 = { -1497.262f, -383.1823f, 41.83136f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1997 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 88;
			break;
		
		case 89:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { -1025.421f, -218.4773f, 36.9267f };
			uParam0->f_1939[0].f_3 = { -1024.568f, -218.8955f, 38.7449f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1997 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 89;
			break;
		
		case 90:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_BEER";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1122.753f, -3145.893f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.742f, -3144.943f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_1984 = 161942;
			uParam0->f_2362 = 1;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_2180[0] = -1620762220;
			uParam0->f_1997 = 2;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 90;
			break;
		
		case 91:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_BEER";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1115.793f, -3154.993f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1116.742f, -3155.029f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_2362 = 1;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_1983 = 9196;
			uParam0->f_2180[0] = -1620762220;
			uParam0->f_1997 = 2;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 91;
			break;
		
		case 93:
			uParam0->f_1981 = 13315;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_2373 = 1;
			uParam0->f_1982 = 13286;
			uParam0->f_1986.f_4.f_2 = 0.05f;
			uParam0->f_1986.f_10 = 8926;
			uParam0->f_2362 = 1;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			uParam0->f_1931.f_2 = 1;
			uParam0->f_2180[0] = 488156118;
			uParam0->f_2180[1] = -877183153;
			uParam0->f_1997 = 1;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 93;
			break;
		
		case 94:
			uParam0->f_2373 = 0;
			uParam0->f_1981 = 161922;
			uParam0->f_1939.f_38 = 13061;
			uParam0->f_1939.f_41 = 12381;
			uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
			uParam0->f_1939.f_39 = 12355;
			uParam0->f_1939.f_27 = 2;
			uParam0->f_1939.f_27.f_1 = 51;
			uParam0->f_1939.f_40 = 12277;
			uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
			uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
			uParam0->f_1939[0].f_6 = 1f;
			uParam0->f_1984 = 161942;
			uParam0->f_1937 = uParam1->f_1;
			uParam0->f_1983 = 9196;
			uParam0->f_2223[0] = 848542158;
			uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
			uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
			uParam0->f_2223[0].f_1[0].f_1 = 1;
			uParam0->f_2222 = 0;
			uParam0->f_2223[0].f_64 = "anim@mini@yacht@bar@drink@IDLE_A";
			uParam0->f_2223[0].f_65 = "IDLE_A_BARTENDER";
			StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
			StringCopy(&(uParam0->f_1769[1]), "SleepState", 64);
			uParam0->f_1997 = 5;
			uParam0->f_1998 = 0;
			uParam0->f_2361 = 0;
			uParam0->f_1930 = 94;
			break;
		
		case 26:
			func_439(uParam0);
			break;
		
		case 95:
			func_438(uParam0);
			break;
		
		case 96:
			func_437(uParam0);
			break;
		
		case 97:
			func_436(uParam0);
			break;
		
		case 126:
			func_435(uParam0);
			break;
		
		case 98:
			func_434(uParam0);
			break;
		
		case 101:
			func_431(uParam0);
			break;
		
		case 114:
			func_430(uParam0);
			break;
		
		case 102:
			func_429(uParam0);
			break;
		
		case 103:
			func_428(uParam0);
			break;
		
		case 104:
			func_427(uParam0);
			break;
		
		case 105:
			func_426(uParam0);
			break;
		
		case 122:
			func_425(uParam0);
			break;
		
		case 123:
			func_424(uParam0);
			break;
		
		case 111:
			func_423(uParam0);
			break;
		
		case 110:
			func_422(uParam0);
			break;
		
		case 106:
			func_421(uParam0);
			break;
		
		case 107:
			func_420(uParam0);
			break;
		
		case 108:
			func_419(uParam0);
			break;
		
		case 112:
			func_418(uParam0);
			break;
		
		case 113:
			func_417(uParam0);
			break;
		
		case 116:
			func_416(uParam0);
			break;
		
		case 115:
			func_415(uParam0);
			break;
		
		case 119:
			func_414(uParam0);
			break;
		
		case 120:
			func_413(uParam0);
			break;
		
		case 118:
			func_412(uParam0);
			break;
		
		case 117:
			func_411(uParam0);
			break;
		
		case 121:
			func_410(uParam0);
			break;
		
		case 124:
		case 125:
		case 182:
			func_409(uParam0);
			break;
		
		case 127:
			func_408(uParam0);
			break;
		
		case 128:
			func_407(uParam0);
			break;
		
		case 129:
			func_406(uParam0);
			break;
		
		case 130:
			func_405(uParam0, uParam1);
			break;
		
		case 131:
			func_404(uParam0);
			break;
		
		case 132:
			func_403(uParam0);
			break;
		
		case 133:
			func_402(uParam0);
			break;
		
		case 134:
		case 137:
		case 138:
		case 139:
			func_401(uParam0);
			break;
		
		case 135:
			func_401(uParam0);
			break;
		
		case 136:
			func_400(uParam0);
			break;
		
		case 144:
			func_399(uParam0);
			break;
		
		case 146:
			func_398(uParam0);
			break;
		
		case 145:
			func_397(uParam0);
			break;
		
		case 140:
			func_396(uParam0);
			break;
		
		case 143:
			func_395(uParam0);
			break;
		
		case 141:
			func_394(uParam0);
			break;
		
		case 147:
			func_393(uParam0);
			break;
		
		case 148:
			func_392(uParam0);
			break;
		
		case 149:
			func_391(uParam0);
			break;
		
		case 153:
			func_389(uParam0);
			break;
		
		case 155:
			func_388(uParam0);
			break;
		
		case 156:
			func_387(uParam0);
			break;
		
		case 157:
			func_386(uParam0);
			break;
		
		case 158:
			func_385(uParam0, 0);
			break;
		
		case 160:
			func_385(uParam0, 1);
			break;
		
		case 159:
			func_384(uParam0, 0);
			break;
		
		case 161:
			func_384(uParam0, 1);
			break;
		
		case 162:
			func_383(uParam0);
			break;
		
		case 163:
			func_376(uParam0);
			break;
		
		case 168:
			func_375(uParam0);
			break;
		
		case 169:
			func_374(uParam0);
			break;
		
		case 170:
			func_373(uParam0);
			break;
		
		case 171:
			func_372(uParam0);
			break;
		
		case 176:
			func_371(uParam0);
			break;
		
		case 172:
			func_370(uParam0);
			break;
		
		case 173:
			func_369(uParam0);
			break;
		
		case 174:
			func_368(uParam0);
			break;
		
		case 175:
			func_367(uParam0);
			break;
		
		case 177:
			func_366(uParam0);
			break;
		
		case 178:
			func_365(uParam0);
			break;
		
		case 151:
		case 185:
			func_363(uParam0, *uParam1);
			break;
		
		case 152:
			func_355(uParam0, *uParam1);
			break;
		
		case 179:
			func_354(uParam0, uParam1);
			break;
		
		case 183:
			func_353(uParam0, uParam1);
			break;
		
		case 181:
			func_352(uParam0, *uParam1);
			break;
		
		case 180:
			func_338(uParam0, *uParam1);
			break;
		
		case 190:
			func_334(uParam0, *uParam1);
			break;
		
		case 191:
			func_329(uParam0, *uParam1);
			break;
		
		case 150:
			func_328(uParam0);
			break;
		
		case 10:
			func_327(uParam0, *uParam1);
			break;
		
		case 184:
			func_325(uParam0, *uParam1);
			break;
		
		case 187:
			func_321(uParam0, *uParam1);
			break;
		
		case 188:
			func_320(uParam0, *uParam1);
			break;
		
		case 189:
			func_319(uParam0, *uParam1);
			break;
		
		case 192:
			func_318(uParam0, *uParam1);
			break;
		
		case 193:
			func_317(uParam0, *uParam1);
			break;
		
		case 194:
			func_316(uParam0, *uParam1);
			break;
		
		case 195:
			func_315(uParam0, *uParam1);
			break;
		
		case 196:
			func_314(uParam0, *uParam1);
			break;
		
		case 8:
			func_313(uParam0, *uParam1);
			break;
		
		case 11:
			func_311(uParam0, *uParam1);
			break;
		
		case 12:
			func_309(uParam0, *uParam1);
			break;
		
		case 13:
			func_307(uParam0, *uParam1);
			break;
		
		case 14:
			func_302(uParam0, *uParam1);
			break;
		
		case 186:
			func_300(uParam0, *uParam1);
			break;
		
		default:
			uParam0->f_1930 = -1;
			break;
	}
	uParam1->f_67 = uParam0->f_2222;
}

void func_300(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 126440;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "BROWSEINPUTTRIG";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1998 = 0;
	uParam0->f_1997 = 2;
}

int func_301(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (func_77())
		{
			if (!Global_31038)
			{
				Global_1662153 = 1;
				bVar0 = true;
				if (Global_1590380 == PLAYER::PLAYER_ID())
				{
					if (func_76(uParam0[uParam2->f_1740], 1))
					{
						if (func_72())
						{
							iVar1 = 0;
							iVar1 = 0;
							while (iVar1 < 2)
							{
								if (iVar1 == uParam2->f_1740)
								{
								}
								else if (!func_76(uParam0[iVar1], 0))
								{
									bVar0 = false;
								}
								iVar1++;
							}
							if (bVar0)
							{
								if (func_54("POD_TOO_MANY"))
								{
									HUD::CLEAR_HELP(1);
								}
								Stack.Push(&(uParam0->f_31));
								Call_Loc(uParam0->f_38);
								func_66(*uParam1, uParam2);
								Stack.Push(uParam0->f_27);
								Call_Loc(uParam0->f_39);
								if (StackVal)
								{
									Stack.Push(&(uParam0->f_31));
									Call_Loc(uParam0->f_41);
									return 1;
								}
							}
							else
							{
								if (func_54(uParam0->f_31.f_2))
								{
									HUD::CLEAR_HELP(1);
								}
								if (!func_54("POD_TOO_MANY") && func_61())
								{
									func_60("POD_TOO_MANY", -1);
								}
							}
						}
						else if (func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
					}
					else
					{
						if (func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
			}
			else
			{
				if (func_54("POD_TOO_MANY"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
				if (func_54("POD_ACT_OWN"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54("POD_ACT_OWN"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_54("POD_ACT_OWN"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_302(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 127493;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 127377;
	if (Global_1676377.f_4300)
	{
		if (func_304(PLAYER::PLAYER_ID()))
		{
			uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT2";
		}
		else
		{
			uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT4";
		}
	}
	else if (func_304(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT";
	}
	else
	{
		uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT3";
	}
	uParam0->f_1985 = 127205;
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 52;
	uParam0->f_1939[0].f_10.f_2 = 270f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1998 = 0;
	uParam0->f_1997 = 1;
}

void func_303(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_1742, 0) && !MISC::IS_BIT_SET(uParam0->f_1742, 1))
	{
		MISC::SET_BIT(&(uParam0->f_1742), 1);
		if (!func_304(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
	}
}

bool func_304(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_2, 17);
}

void func_305(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2) || HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (func_54(uParam0->f_2))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (func_54("FROSTLIGHT_PMT"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_54("FROSTLIGHT_PMT2"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_54("FROSTLIGHT_PMT3"))
	{
		HUD::CLEAR_HELP(1);
	}
	if (func_54("FROSTLIGHT_PMT4"))
	{
		HUD::CLEAR_HELP(1);
	}
}

int func_306(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if (StackVal && (uParam0[uParam2->f_1740]->f_10.f_2 == -1f || func_27(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), uParam0[uParam2->f_1740]->f_10.f_2, 45f)))
	{
		if (func_77())
		{
			Global_1662153 = 1;
			bVar0 = true;
			if (Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8 == PLAYER::PLAYER_ID())
			{
				if (func_72())
				{
					if (bVar0)
					{
						if (func_54("POD_TOO_MANY"))
						{
							HUD::CLEAR_HELP(1);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_66(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
				else if (func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54("POD_ACT_OWN"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (func_54("POD_ACT_OWN"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_307(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 127493;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 127377;
	if (Global_1676377.f_4300)
	{
		if (func_304(PLAYER::PLAYER_ID()))
		{
			uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT2";
		}
		else
		{
			uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT4";
		}
	}
	else if (func_304(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT";
	}
	else
	{
		uParam0->f_1939.f_31.f_2 = "FROSTLIGHT_PMT3";
	}
	uParam0->f_1985 = 128145;
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939[0].f_10.f_2 = 270f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1998 = 0;
	uParam0->f_1997 = 1;
}

void func_308(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_1741, 1) && !MISC::IS_BIT_SET(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1676377.f_4300)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", -1613.6f, -3011.5f, -75.2f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
	}
}

void func_309(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 127493;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	if (Global_1676377.f_4257)
	{
		uParam0->f_1939.f_31.f_2 = "MPFROST_PMT2";
	}
	else
	{
		uParam0->f_1939.f_31.f_2 = "MPFROST_PMT";
	}
	uParam0->f_1985 = 128482;
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939[0].f_10.f_2 = -1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1998 = 0;
	uParam0->f_1997 = 1;
}

void func_310(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_1741, 1) && !MISC::IS_BIT_SET(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1676377.f_4257)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 372.115f, 4827.504f, -58.47f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
	}
}

void func_311(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 127493;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	if (Global_1676377.f_4256)
	{
		uParam0->f_1939.f_31.f_2 = "MPFROST_PMT2";
	}
	else
	{
		uParam0->f_1939.f_31.f_2 = "MPFROST_PMT";
	}
	uParam0->f_1985 = 128819;
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939[0].f_10.f_2 = -1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.35f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1998 = 0;
	uParam0->f_1997 = 1;
}

void func_312(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_1741, 1) && !MISC::IS_BIT_SET(uParam0->f_1741, 2))
	{
		MISC::SET_BIT(&(uParam0->f_1741), 2);
		if (Global_1676377.f_4256)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Activate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "Deactivate_Privacy_Glass", 367.317f, 4846.754f, -58.448f, "dlc_xm_facility_ambient_sounds", 0, 0, 0);
		}
	}
}

void func_313(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_WINE";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = 21833643;
	uParam0->f_2180[1] = 54971870;
	uParam0->f_2180[2] = -35679191;
	uParam0->f_2180[3] = -2028292621;
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 1;
	uParam0->f_2368[1] = 0;
	uParam0->f_2363[2] = 0;
	uParam0->f_2368[2] = 1;
	uParam0->f_2363[3] = 0;
	uParam0->f_2368[3] = 1;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 8;
	if (func_81(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939[0].f_10.f_2 = 40f;
	}
}

void func_314(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_VODKA";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.075f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = 901069287;
	uParam0->f_2180[1] = -787912939;
	uParam0->f_2180[2] = -1467802897;
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 0;
	uParam0->f_2368[1] = 1;
	uParam0->f_2363[2] = 1;
	uParam0->f_2368[2] = 0;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 196;
	if (func_81(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939[0].f_10.f_2 = 115f;
	}
}

void func_315(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_BEER";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1117.538f, -3158.623f, -38.06276f };
	uParam0->f_1939[0].f_3 = { 1116.696f, -3159.302f, -36.56276f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -1620762220;
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 195;
}

void func_316(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.075f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = 488156118;
	uParam0->f_2180[1] = -641411675;
	uParam0->f_2180[2] = -1500934486;
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 0;
	uParam0->f_2368[1] = 1;
	uParam0->f_2363[2] = 1;
	uParam0->f_2368[2] = 0;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 194;
	if (func_81(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939[0].f_10.f_2 = 320f;
	}
}

void func_317(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_RUM";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.075f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -2128966667;
	uParam0->f_2180[1] = -2001740702;
	uParam0->f_2180[2] = -254725565;
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 0;
	uParam0->f_2368[1] = 1;
	uParam0->f_2363[2] = 1;
	uParam0->f_2368[2] = 0;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 187;
	if (func_81(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939[0].f_10.f_2 = 240f;
	}
}

void func_318(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_BEER";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1117.538f, -3158.623f, -38.06276f };
	uParam0->f_1939[0].f_3 = { 1116.696f, -3159.302f, -36.56276f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -1620762220;
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 192;
}

void func_319(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_BEER";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1117.538f, -3158.623f, -38.06276f };
	uParam0->f_1939[0].f_3 = { 1116.696f, -3159.302f, -36.56276f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -1620762220;
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 189;
}

void func_320(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.075f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -2128966667;
	uParam0->f_2180[1] = -2001740702;
	uParam0->f_2180[2] = -254725565;
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 0;
	uParam0->f_2368[1] = 1;
	uParam0->f_2363[2] = 1;
	uParam0->f_2368[2] = 0;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 188;
}

void func_321(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_RUM";
	if (func_323(func_324()))
	{
		uParam0->f_1939.f_31.f_2 = "SA_VODKA";
	}
	else if (func_322(func_324()))
	{
		uParam0->f_1939.f_31.f_2 = "SA_WHSKY";
	}
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.075f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 0;
	uParam0->f_2180[0] = -227965566;
	if (func_323(func_324()))
	{
		uParam0->f_2180[0] = 901069287;
	}
	else if (func_322(func_324()))
	{
		uParam0->f_2180[0] = -2128966667;
	}
	uParam0->f_2180[1] = -641411675;
	uParam0->f_2180[2] = -1500934486;
	if (func_323(func_324()))
	{
		uParam0->f_2180[1] = -787912939;
		uParam0->f_2180[2] = -1467802897;
	}
	else if (func_322(func_324()))
	{
		uParam0->f_2180[1] = -2001740702;
		uParam0->f_2180[2] = -254725565;
	}
	uParam0->f_2361 = 1;
	uParam0->f_2363[0] = 0;
	uParam0->f_2368[0] = 0;
	uParam0->f_2363[1] = 0;
	uParam0->f_2368[1] = 1;
	uParam0->f_2363[2] = 1;
	uParam0->f_2368[2] = 0;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 187;
}

bool func_322(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 4);
}

bool func_323(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 3);
}

int func_324()
{
	return Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8;
}

void func_325(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_RUM";
	if (func_326(Global_1590380))
	{
		uParam0->f_1939.f_31.f_2 = "SA_GIN";
	}
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
	uParam0->f_1931.f_2 = 1;
	uParam0->f_2180[0] = -2128966667;
	if (func_326(Global_1590380))
	{
		uParam0->f_2180[0] = 901069287;
	}
	uParam0->f_2180[1] = -254725565;
	if (func_326(Global_1590380))
	{
		uParam0->f_2180[1] = -1467802897;
	}
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 184;
}

bool func_326(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_271.f_1, 26);
}

void func_327(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "SA_WHEAT";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1009.128f, -3166.886f, -35.0576f };
	uParam0->f_1939[0].f_3 = { 1009.279f, -3165.998f, -33.0576f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1931.f_1 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
	uParam0->f_1931.f_2 = 1;
	uParam0->f_2180[0] = 469594741;
	uParam0->f_1997 = 1;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
	uParam0->f_2375 = 1;
	uParam0->f_1930 = 10;
	if (func_81(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1939[0].f_10.f_2 = 240f;
	}
}

void func_328(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_329(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 133908;
	uParam0->f_1939.f_38 = 133765;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 133546;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { -1419.762f, -3010.001f, -80.24995f };
	uParam0->f_1939[0].f_3 = { -1421.313f, -3009.953f, -77.74995f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1939[1].f_6 = 1f;
	uParam0->f_1939[0].f_10.f_2 = 269.7835f;
	uParam0->f_1939[1].f_10.f_2 = 269.7835f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.3f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = -887404930;
	uParam0->f_2180[1] = -668163313;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 191;
	uParam0->f_2377 = 1;
}

int func_330(struct<2> Param0, var uParam2, var uParam3)
{
	if ((!func_331() && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !Global_262145.f_24157)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_331()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_14(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::GET_PLAYER_PED(iVar1), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3))
				{
					fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1), 1);
					if (fVar2 < 1.8f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_332(var uParam0)
{
	uParam0->f_2 = "MPJAC_SIT2";
	if (((((((((!func_54(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && func_61()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !func_75()) && !func_135()) && !func_130()) && !func_131()) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)) && !Global_262145.f_24157)
	{
		func_60(uParam0->f_2, -1);
	}
}

int func_333(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (func_77())
		{
			Global_1662153 = 1;
			bVar0 = true;
			if (func_76(uParam0[uParam2->f_1740], 1))
			{
				if (func_72() && func_27(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), uParam0[uParam2->f_1740]->f_10.f_2, 45f))
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_1740)
						{
						}
						else if (!func_76(uParam0[iVar1], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (func_54("POD_TOO_MANY"))
						{
							HUD::CLEAR_HELP(1);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_66(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!func_54("POD_TOO_MANY") && func_61())
				{
					func_60("POD_TOO_MANY", -1);
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_334(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 134915;
	uParam0->f_1939.f_38 = 134772;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 134713;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { -1422.455f, -3011.96f, -80.24995f };
	uParam0->f_1939[0].f_3 = { -1420.89f, -3012.029f, -77.74995f };
	uParam0->f_1939[0].f_6 = 1.25f;
	uParam0->f_1939[1].f_6 = 1.25f;
	uParam0->f_1939[0].f_10.f_2 = 57.3881f;
	uParam0->f_1939[1].f_10.f_2 = 63.4207f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.3f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = -887404930;
	uParam0->f_2180[1] = -668163313;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 190;
	uParam0->f_2377 = 1;
}

int func_335(struct<2> Param0, var uParam2, var uParam3)
{
	if ((!func_331() && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !Global_262145.f_24158)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_336(var uParam0)
{
	uParam0->f_2 = "MPJAC_SIT";
	if (((((((((!func_54(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && func_61()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !func_75()) && !func_135()) && !func_130()) && !func_131()) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2)) && !Global_262145.f_24158)
	{
		func_60(uParam0->f_2, -1);
	}
}

int func_337(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (func_77())
		{
			Global_1662153 = 1;
			bVar0 = true;
			if (func_76(uParam0[uParam2->f_1740], 1))
			{
				if (func_72() && func_27(ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), uParam0[uParam2->f_1740]->f_10.f_2, 45f))
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_1740)
						{
						}
						else if (!func_76(uParam0[iVar1], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (func_54("POD_TOO_MANY"))
						{
							HUD::CLEAR_HELP(1);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_66(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
						{
							HUD::CLEAR_HELP(1);
						}
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_31.f_2) && func_54(uParam0->f_31.f_2))
				{
					HUD::CLEAR_HELP(1);
				}
				if ((!func_54("POD_TOO_MANY") && func_61()) && func_171())
				{
					func_60("POD_TOO_MANY", -1);
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54(uParam0->f_31.f_2))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_338(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 137053;
	uParam0->f_1939.f_38 = 136824;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 135671;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1939[1].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = -1543057813;
	uParam0->f_2180[1] = 1008841074;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 180;
	uParam0->f_2377 = 1;
}

int func_339(struct<2> Param0, var uParam2, var uParam3)
{
	if (func_157())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!func_349())
		{
			if (((Global_1319113 == 2 && func_348()) || (Global_1319113 == 3 && func_347())) || (Global_1319113 == 1 && func_340()))
			{
				if (!func_331())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!func_161(Global_1590379))
	{
		if (((Global_1319113 == 2 && func_348()) || (Global_1319113 == 3 && func_347())) || (Global_1319113 == 1 && func_340()))
		{
			if (!func_331())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_340()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_346(0, 0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_346(0, 0), 0))
			{
				if (func_345(Global_1590379) && !func_341())
				{
					return 1;
				}
				if ((VEHICLE::GET_VEHICLE_MOD(func_346(0, 0), 10) == 0 || VEHICLE::GET_VEHICLE_MOD(func_346(0, 0), 10) == 1) && !func_341())
				{
					return 1;
				}
			}
		}
	}
	if (func_158(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_2537071.f_307, 0))
			{
				if (VEHICLE::GET_VEHICLE_MOD(Global_2537071.f_307, 10) == 0 || VEHICLE::GET_VEHICLE_MOD(Global_2537071.f_307, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_341()
{
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Global_2425662[PLAYER::PLAYER_ID()].f_261.f_22 != 0)
		{
			iVar0 = func_344(PLAYER::PLAYER_ID());
			if (func_343(iVar0))
			{
				Var1 = { func_342(iVar0) };
				if (ENTITY::DOES_ENTITY_EXIST(func_346(0, 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(func_346(0, 0), 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(func_346(0, 0), 1), Var1, 1) < 150f)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_342(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

int func_343(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

var func_344(int iParam0)
{
	return Global_2420771[iParam0];
}

int func_345(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1590535[iParam0].f_274.f_278, 0);
	}
	return 0;
}

int func_346(int iParam0, bool bParam1)
{
	if (func_163(PLAYER::PLAYER_ID()) || iParam0)
	{
		if (Global_1590379 != func_18())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1694019[Global_1590379]))
			{
				return Global_1370251;
			}
			return Global_1694019[Global_1590379];
		}
	}
	if (bParam1)
	{
		if (Global_1590380 != func_18())
		{
			return Global_1694019[Global_1590380];
		}
	}
	return -1;
}

int func_347()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_346(0, 0);
	}
	else if (func_158(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (func_163(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1 && !func_341())
				{
					return 1;
				}
			}
			if (func_158(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_348()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_346(0, 0);
	}
	else if (func_158(PLAYER::PLAYER_ID()))
	{
		iVar0 = Global_2537071.f_307;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (func_163(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1 && !func_341())
				{
					return 1;
				}
			}
			if (func_158(PLAYER::PLAYER_ID()))
			{
				if (VEHICLE::GET_VEHICLE_MOD(iVar0, 10) == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_349()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_2537071.f_307) && !ENTITY::IS_ENTITY_DEAD(Global_2537071.f_307, 0))
	{
		if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_2537071.f_307) == -25693127)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_2537071.f_307) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1266.802f, -3014.836f, -49.4895f, "sm_smugdlc_int_01"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_350(var uParam0)
{
	if ((Global_1319113 == 2 || Global_1319113 == 3) || Global_1319113 == 1)
	{
		uParam0->f_2 = "MPJAC_SIT";
	}
	if (((Global_1319113 == 1 && !func_340()) || (Global_1319113 == 2 && !func_348())) || (Global_1319113 == 3 && !func_347()))
	{
		uParam0->f_2 = "";
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_349())
		{
			uParam0->f_2 = "MPJAC_ASIT";
		}
	}
	else if (func_161(Global_1590379))
	{
		uParam0->f_2 = "MPVOL_DSIT";
	}
	else if (func_341())
	{
		uParam0->f_2 = "MPVOL_YACHT";
	}
	if ((!func_54(uParam0->f_2) && func_61()) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		func_60(uParam0->f_2, -1);
	}
}

int func_351(var uParam0, var uParam1, var uParam2)
{
	Stack.Push(uParam0);
	Stack.Push(&(uParam2->f_1740));
	Call_Loc(uParam0->f_40);
	if (StackVal)
	{
		if (func_77())
		{
			Global_1662153 = 1;
			bVar0 = true;
			if (func_76(uParam0[uParam2->f_1740], 1))
			{
				if (func_72())
				{
					iVar1 = 0;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (iVar1 == uParam2->f_1740)
						{
						}
						else if (!func_76(uParam0[iVar1], 0))
						{
							bVar0 = false;
						}
						iVar1++;
					}
					if (bVar0)
					{
						if (func_54("POD_TOO_MANY") && !Global_1319111)
						{
							HUD::CLEAR_HELP(1);
						}
						Stack.Push(&(uParam0->f_31));
						Call_Loc(uParam0->f_38);
						func_66(*uParam1, uParam2);
						Stack.Push(uParam0->f_27);
						Call_Loc(uParam0->f_39);
						if (StackVal)
						{
							Stack.Push(&(uParam0->f_31));
							Call_Loc(uParam0->f_41);
							return 1;
						}
					}
					else
					{
						if (func_54(uParam0->f_31.f_2) && !Global_1319111)
						{
							HUD::CLEAR_HELP(1);
						}
						if (func_158(PLAYER::PLAYER_ID()))
						{
							if (func_349())
							{
								if (!func_54("POD_TOO_MANY") && func_61())
								{
									func_60("POD_TOO_MANY", -1);
								}
							}
						}
						if (func_163(PLAYER::PLAYER_ID()))
						{
							if (!func_161(Global_1590379))
							{
								if (!func_54("POD_TOO_MANY") && func_61())
								{
									func_60("POD_TOO_MANY", -1);
								}
							}
						}
					}
				}
				else if (func_54(uParam0->f_31.f_2) && !Global_1319111)
				{
					HUD::CLEAR_HELP(1);
				}
			}
			else
			{
				if (func_54(uParam0->f_31.f_2) && !Global_1319111)
				{
					HUD::CLEAR_HELP(1);
				}
				if (func_158(PLAYER::PLAYER_ID()))
				{
					if (func_349())
					{
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
				if (func_163(PLAYER::PLAYER_ID()))
				{
					if (!func_161(Global_1590379))
					{
						if (!func_54("POD_TOO_MANY") && func_61())
						{
							func_60("POD_TOO_MANY", -1);
						}
					}
				}
			}
		}
		else
		{
			if (func_54("POD_TOO_MANY") && !Global_1319111)
			{
				HUD::CLEAR_HELP(1);
			}
			if (func_54(uParam0->f_31.f_2) && !Global_1319111)
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
	else if (Global_1662153 == 1)
	{
		Global_1662153 = 0;
		if (func_54("POD_TOO_MANY") && !Global_1319111)
		{
			HUD::CLEAR_HELP(1);
		}
		func_65(*uParam1);
		Stack.Push(&(uParam0->f_31));
		Call_Loc(uParam0->f_41);
	}
	return 0;
}

void func_352(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 137053;
	uParam0->f_1939.f_38 = 136824;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 135671;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1939[1].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = -1543057813;
	uParam0->f_2180[1] = 1008841074;
	uParam0->f_2361 = 0;
	uParam0->f_1930 = 181;
	uParam0->f_2377 = 1;
}

void func_353(var uParam0, var uParam1)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam1->f_67 = uParam0->f_2222;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2456 = 1;
	uParam0->f_2361 = 0;
}

void func_354(var uParam0, var uParam1)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam1->f_67 = uParam0->f_2222;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	if (func_16(PLAYER::PLAYER_ID()))
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("xm_prop_x17_corp_offchair");
	}
	uParam0->f_2361 = 0;
}

void func_355(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 139063;
	uParam0->f_1939.f_41 = 12381;
	if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
	{
		uParam0->f_1939.f_38 = 138973;
	}
	uParam0->f_1939.f_39 = 138608;
	if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
	{
		uParam0->f_1939.f_39 = 138562;
	}
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1939[1].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = 72434891;
	if (func_2(3))
	{
		uParam0->f_2180[0] = 1085033290;
	}
	if (uParam0->f_1930 == 185 || func_2(3))
	{
		uParam0->f_2180[1] = 1008841074;
	}
	else
	{
		uParam0->f_2180[1] = 749471724;
	}
	uParam0->f_2361 = 0;
	uParam0->f_2377 = 1;
}

int func_356(struct<2> Param0, var uParam2, var uParam3)
{
	if (!func_331() && !HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_357(struct<2> Param0, var uParam2, var uParam3)
{
	if (func_166(Global_4456448.f_194990))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
		{
			return 1;
		}
	}
	if (!func_165(Global_1590374))
	{
		if (((Global_1319113 == 2 && func_360()) || (Global_1319113 == 3 && func_359())) || (Global_1319113 == 1 && func_358()))
		{
			if (!func_331())
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(Param0, Param0.f_1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_358()
{
	if (Global_262145.f_21086)
	{
		return 0;
	}
	if (func_166(Global_4456448.f_194990))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310, 22))
	{
		return 1;
	}
	return 0;
}

int func_359()
{
	if (Global_262145.f_21088)
	{
		return 0;
	}
	if (func_166(Global_4456448.f_194990))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310, 24))
	{
		return 1;
	}
	return 0;
}

int func_360()
{
	if (Global_262145.f_21087)
	{
		return 0;
	}
	if (func_166(Global_4456448.f_194990))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_310, 23))
	{
		return 1;
	}
	return 0;
}

void func_361(var uParam0)
{
	uParam0->f_2 = "MPJAC_SIT";
	if ((((!func_54(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && func_61()) && !HUD::IS_HUD_COMPONENT_ACTIVE(19)) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		func_60(uParam0->f_2, -1);
	}
}

void func_362(var uParam0)
{
	if (func_165(Global_1590374) && !func_166(Global_4456448.f_194990))
	{
	}
	if (func_165(Global_1590374) && !func_166(Global_4456448.f_194990))
	{
		uParam0->f_2 = "MPJAC_BSIT";
	}
	else if ((Global_1319113 == 2 && !func_360()) || (Global_1319113 == 3 && !func_359()))
	{
		if (func_184())
		{
			uParam0->f_2 = "HUNTGUN_T_1e";
		}
		else
		{
			uParam0->f_2 = "MPJAC_CSIT";
		}
	}
	else if (((Global_1319113 == 2 || Global_1319113 == 3) || Global_1319113 == 1) || Global_1319113 == 4)
	{
		if (func_184())
		{
			uParam0->f_2 = "HUNTGUN_T_1e";
		}
		else
		{
			uParam0->f_2 = "MPJAC_SIT";
		}
	}
	if ((!func_54(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && func_61())
	{
		func_60(uParam0->f_2, -1);
	}
}

void func_363(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 139063;
	if (func_2(3))
	{
		uParam0->f_1939.f_38 = 139722;
	}
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_39 = 138608;
	if (func_16(PLAYER::PLAYER_ID()) || func_2(3))
	{
		uParam0->f_1939.f_39 = 138562;
	}
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1121.294f, -3146.898f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1122.241f, -3146.969f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1939[1].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.2f;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_2362 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1937 = Param1.f_1;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = 72434891;
	if (func_2(3))
	{
		uParam0->f_2180[0] = 1085033290;
	}
	if (uParam0->f_1930 == 185 || func_2(3))
	{
		uParam0->f_2180[1] = 1008841074;
	}
	else
	{
		uParam0->f_2180[1] = 749471724;
	}
	uParam0->f_2361 = 0;
	uParam0->f_2377 = 1;
}

void func_364(var uParam0)
{
	if (((Global_1319113 == 2 || Global_1319113 == 3) || Global_1319113 == 1) || Global_1319113 == 4)
	{
		if (Global_1574442 == 2)
		{
			uParam0->f_2 = "HUNTGUN_T_1e";
		}
		else
		{
			uParam0->f_2 = "MPJAC_SIT";
		}
	}
	if ((!func_54(uParam0->f_2) && !MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "New text widget")) && func_61())
	{
		func_60(uParam0->f_2, -1);
	}
}

void func_365(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_bulletscrate_01a");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_crate_mag_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_crate_mag_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("w_ar_assaultriflemk2_mag1");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("w_ar_carbineriflemk2_mag1");
	uParam0->f_2361 = 0;
}

void func_366(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("w_ar_carbineriflemk2");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("w_ar_carbineriflemk2_mag1");
	uParam0->f_2361 = 0;
}

void func_367(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_1930 = 175;
	uParam0->f_2361 = 0;
}

void func_368(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_GR_Chair02_ped");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_laptop_01c");
	uParam0->f_2361 = 0;
}

void func_369(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("v_ilev_chair02_ped");
	uParam0->f_2361 = 0;
}

void func_370(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_371(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2361 = 0;
}

void func_372(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("prop_notepad_02");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("w_ar_assaultrifle_mag1");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("w_ar_assaultrifle");
	uParam0->f_2361 = 0;
}

void func_373(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("w_ar_assaultrifle");
	uParam0->f_2361 = 0;
}

void func_374(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_375(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_mug_04");
	uParam0->f_2361 = 0;
}

void func_376(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.525f, -3214.994f, -99.23f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, -10f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	if (Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_183[5].f_3 < 50)
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	if (func_377(func_381(PLAYER::PLAYER_ID()), Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8) < 50)
	{
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_vertmill_01b");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_mill_01a");
	uParam0->f_2361 = 0;
}

int func_377(int iParam0, int iParam1)
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	uVar0 = func_380(iParam0);
	uVar1 = func_378(iParam1, iParam0);
	fVar2 = ((SYSTEM::TO_FLOAT(uVar1) / SYSTEM::TO_FLOAT(uVar0)) * 100f);
	return SYSTEM::ROUND(fVar2);
}

int func_378(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_379(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18439;
		
		case 1:
			return Global_262145.f_18447;
		
		case 3:
			return Global_262145.f_18455;
		
		case 5:
			return Global_262145.f_18463;
		
		case 4:
			return Global_262145.f_18471;
		
		case 7:
			return Global_262145.f_18439;
		
		case 6:
			return Global_262145.f_18447;
		
		case 8:
			return Global_262145.f_18455;
		
		case 10:
			return Global_262145.f_18463;
		
		case 9:
			return Global_262145.f_18471;
		
		case 12:
			return Global_262145.f_18439;
		
		case 11:
			return Global_262145.f_18447;
		
		case 13:
			return Global_262145.f_18455;
		
		case 15:
			return Global_262145.f_18463;
		
		case 14:
			return Global_262145.f_18471;
		
		case 17:
			return Global_262145.f_18439;
		
		case 16:
			return Global_262145.f_18447;
		
		case 18:
			return Global_262145.f_18455;
		
		case 20:
			return Global_262145.f_18463;
		
		case 19:
			return Global_262145.f_18471;
		
		case 21:
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
			return Global_262145.f_21054;
		
		default:
	}
	return 0;
}

int func_381(int iParam0)
{
	if (func_259(iParam0))
	{
		return func_382(Global_2425662[iParam0].f_310.f_5);
	}
	return 0;
}

int func_382(int iParam0)
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
		
		case 79:
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

void func_383(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.525f, -3214.994f, -99.23f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, -10f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	if (Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_183[5].f_3 < 50)
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	if (func_377(func_381(PLAYER::PLAYER_ID()), Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8) < 50)
	{
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_millcrate_01a");
	}
	else
	{
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_millcage_01a");
	}
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_vertmill_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_mill_01a");
	uParam0->f_2361 = 0;
}

void func_384(var uParam0, int iParam1)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 893.334f, -3226.037f, -99.247f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 180f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	if (iParam1 == 0)
	{
		if (Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_183[5].f_3 < 50)
		{
			uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
		if (func_377(func_381(PLAYER::PLAYER_ID()), Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8) < 50)
		{
			uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
	}
	else
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
	}
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_speeddrill_01b");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_drill_01a");
	uParam0->f_2361 = 0;
}

void func_385(var uParam0, int iParam1)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 893.334f, -3226.037f, -99.247f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 180f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	if (iParam1 == 0)
	{
		if (Global_1590535[Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8].f_274.f_183[5].f_3 < 50)
		{
			uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
		if (func_377(func_381(PLAYER::PLAYER_ID()), Global_2425662[PLAYER::PLAYER_ID()].f_310.f_8) < 50)
		{
			uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		}
		else
		{
			uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_drillcage_01a");
		}
	}
	else
	{
		uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
		uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_3s_drillcrate_01a");
	}
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_speeddrill_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_drill_01a");
	uParam0->f_2361 = 0;
}

void func_386(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_lathe_01c");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_lathe_01a");
	uParam0->f_2361 = 0;
}

void func_387(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_lathe_01b");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_lathe_01a");
	uParam0->f_2361 = 0;
}

void func_388(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -1739208332;
	uParam0->f_2223[0].f_58 = { 902.481f, -3228.718f, -99.289f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 81.25f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("gr_prop_gr_2stackcrate_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("gr_prop_gr_lathe_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("gr_prop_gr_part_lathe_01a");
	uParam0->f_2361 = 0;
}

void func_389(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

int func_390(var uParam0)
{
	if (!uParam0->f_1702)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if ((uParam0->f_1605[iVar0].f_17 != 0 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_1605[iVar0].f_17, 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1605[iVar0].f_1)))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(uParam0->f_1605[iVar0].f_17, &(uParam0->f_1605[iVar0].f_1), uParam0->f_5, uParam0->f_8.f_2, 0, 0, 1);
			}
			iVar0++;
		}
		uParam0->f_1702 = 1;
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1605[0].f_17, -1098463898) != 1)
	{
		uParam0->f_1702 = 0;
		return 0;
	}
	return 1;
}

void func_391(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_392(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_393(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_394(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_395(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2223[0].f_1[2] = 1;
	uParam0->f_2223[0].f_1[2].f_1 = 2;
	uParam0->f_2223[0].f_1[3] = 1;
	uParam0->f_2223[0].f_1[3].f_1 = 1;
	uParam0->f_2223[0].f_1[4].f_1 = 3;
	uParam0->f_2223[0].f_1[11] = 2;
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_396(var uParam0)
{
	uParam0->f_1983 = 145328;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
}

void func_397(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 145328;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.4486f, -3003.431f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 351.1694f };
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_398(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 145328;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 965.6154f, -3002.215f, -40.6349f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 147.9137f };
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_399(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 145328;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2223[0].f_58 = { 969.3016f, -2999.463f, -40.6471f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.1876f };
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_400(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("TAILGATER");
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_401(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("G_F_Y_Vagos_01");
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_402(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_403(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_404(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 0;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_papercutter");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_fakeid_table");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystack_01a");
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_405(var uParam0, var uParam1)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2222 = 1;
	uParam1->f_67 = uParam0->f_2222;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2360 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_chair_01a");
	uParam0->f_2361 = 0;
}

void func_406(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2360 = 1;
	uParam0->f_2361 = 0;
}

void func_407(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -2039072303;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("p_loose_rag_01_s");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_biker_tool_broom");
	uParam0->f_2361 = 0;
}

void func_408(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -2039072303;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_weed_leaf_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_01a");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02a");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_pile_01a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02a");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[12] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[13] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02a");
	uParam0->f_2180[14] = MISC::GET_HASH_KEY("bkr_prop_weed_leaf_01a");
	uParam0->f_2180[15] = MISC::GET_HASH_KEY("bkr_prop_weed_bucket_open_01a");
	uParam0->f_2180[16] = MISC::GET_HASH_KEY("bkr_prop_weed_bucket_open_01a");
	uParam0->f_2180[17] = MISC::GET_HASH_KEY("bkr_prop_weed_chair_01a");
	uParam0->f_2180[18] = MISC::GET_HASH_KEY("bkr_prop_weed_chair_01a");
	uParam0->f_2361 = 0;
}

void func_409(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2361 = 0;
}

void func_410(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	if (uParam0->f_2453 != 0)
	{
		if (uParam0->f_2453 == -1372772078)
		{
		}
	}
	uParam0->f_2360 = 1;
	uParam0->f_2361 = 0;
}

void func_411(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0] = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_meth_scoop_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_coke_scale_01");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_fakeid_penclipboard");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_meth_bigbag_04a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_meth_bigbag_03a");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[12] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[13] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[14] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2360 = 1;
	uParam0->f_2361 = 0;
}

void func_412(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2360 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("w_me_hammer");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_Prop_Meth_SmashedTray_01_frag_");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_Prop_Meth_Tray_02a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_Prop_Meth_Tray_02a");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_Prop_Meth_SmashedTray_01_frag_");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_Prop_Meth_SmashedTray_01_frag_");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_meth_bigbag_04a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_meth_bigbag_03a");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[12] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[13] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[14] = MISC::GET_HASH_KEY("bkr_prop_meth_openbag_02");
	uParam0->f_2180[15] = MISC::GET_HASH_KEY("bkr_prop_meth_scoop_01a");
	uParam0->f_2180[16] = MISC::GET_HASH_KEY("bkr_prop_coke_scale_01");
	uParam0->f_2180[17] = MISC::GET_HASH_KEY("bkr_prop_fakeid_penclipboard");
	uParam0->f_2180[18] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2180[19] = MISC::GET_HASH_KEY("bkr_Prop_Meth_Tray_02a");
	uParam0->f_2361 = 0;
}

void func_413(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	uParam0->f_2361 = 0;
}

void func_414(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_npc_phone");
	uParam0->f_2361 = 0;
}

void func_415(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2361 = 0;
}

void func_416(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_pencil_01");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2360 = 1;
	uParam0->f_2361 = 0;
}

void func_417(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2223[0].f_1[2] = 1;
	uParam0->f_2223[0].f_1[8] = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_2361 = 0;
}

void func_418(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -306958529;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2222 = 1;
	uParam0->f_2223[0].f_1[0].f_1 = 2;
	uParam0->f_2223[0].f_1[2] = 1;
	uParam0->f_2223[0].f_1[3] = 1;
	uParam0->f_2223[0].f_1[8] = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_meth_sacid");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_meth_ammonia");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("prop_pencil_01");
	uParam0->f_2361 = 0;
}

void func_419(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 810804565;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 10;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_openpassport");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_bundlepassports");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singlepassport");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_fakeid_magnifyingglass");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("prop_off_chair_04_s");
	uParam0->f_2361 = 0;
}

void func_420(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 810804565;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("prop_ing_camera_01");
	uParam0->f_2361 = 0;
}

void func_421(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 436345731;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("close_inspection_ruler");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_scalpel_02a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singledriverl");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singledriverl");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singledriverl");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singledriverl");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_fakeid_singledriverl");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("prop_off_chair_04_s");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_fakeid_foiltipper");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_fakeid_ruler_01a");
	uParam0->f_2361 = 0;
}

void func_422(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -2039072303;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_weed_leaf_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_01a");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02a");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_pile_01a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_weed_chair_01a");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_weed_bucket_open_01a");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2361 = 0;
}

void func_423(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -2039072303;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_weed_dry_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_weed_leaf_01a");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_01a");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02a");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_weed_bag_pile_01a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_Prop_weed_chair_01a");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_weed_bucket_open_01a");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_weed_bud_02b");
	uParam0->f_2361 = 0;
}

void func_424(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -317922106;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_spray_01a");
	uParam0->f_2361 = 0;
}

void func_425(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -317922106;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2361 = 0;
}

void func_426(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -317922106;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_weed_spray_01a");
	uParam0->f_2361 = 0;
}

void func_427(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = MISC::GET_HASH_KEY("mp_m_weed_01");
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2361 = 0;
}

void func_428(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2360 = 1;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -317922106;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_1997 = 8;
	uParam0->f_1998 = 0;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_clipboard_01a");
	StringCopy(&(uParam0->f_1769[1]), "weedInspecting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_fakeid_penclipboard");
	uParam0->f_2361 = 0;
}

void func_429(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 349680864;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_fakeid_papercutter");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneypage");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneypage");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneypage");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_fakeid_table");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystack_01a");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystrip");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystrip");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystrip");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystrip");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_cutter_moneystrip");
	uParam0->f_2180[12] = MISC::GET_HASH_KEY("bkr_prop_cutter_singlestack_01a");
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_430(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 349680864;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_money_pokerbucket");
	StringCopy(&(uParam0->f_1769[1]), "cokecutting", 64);
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_money_unsorted_01");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_money_unsorted_01");
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_431(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_1985 = 158846;
	uParam0->f_2223[0] = 824925120;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_clubhouse_chair_01");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_money_wrapped_01");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_money_unsorted_01");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_coke_tin_01");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_money_wrapped_01");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_money_unsorted_01");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_tin_cash_01a");
	uParam0->f_1997 = 4;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_432(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_24[iVar0].f_8 != 0)
		{
			func_433(&(uParam0->f_24[0].f_68[0]), uParam0, uParam0->f_24[0].f_8, uParam0->f_1605[0].f_17);
		}
		iVar0++;
	}
}

void func_433(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = uParam1->f_17.f_6;
	if (iVar0 != -1)
	{
		if (uParam0->f_6 == 0 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) < uParam0->f_1) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Start"))))
		{
			uParam0->f_9 = AUDIO::GET_SOUND_ID();
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
			AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_9, "Money_Counter_Loop", ENTITY::GET_ENTITY_COORDS(iParam2, 1), "DLC_Biker_Business_CFM_Sounds", 0, 0, 0);
			uParam0->f_6 = 1;
		}
		else if (uParam0->f_6 == 1)
		{
			if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Stop"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Jam")))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Stop")))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, "isMachineJammed", 0f);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY("Jam")))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, "isMachineJammed", 1f);
				}
				AUDIO::STOP_SOUND(uParam0->f_9);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_9);
				uParam0->f_6 = 0;
			}
		}
	}
}

void func_434(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = -673538407;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2223[0].f_1[0].f_1 = 1;
	uParam0->f_2222 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_scrunched_moneypage");
	uParam0->f_1997 = 7;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_435(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_coke_fullscoop_01a");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_coke_doll");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_coke_boxedDoll");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_coke_dollCast");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_coke_dollmould");
	uParam0->f_2180[5] = MISC::GET_HASH_KEY("bkr_prop_coke_fullmetalbowl_02");
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("bkr_prop_coke_dollCast");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("bkr_prop_coke_dollCast");
	uParam0->f_2180[8] = MISC::GET_HASH_KEY("bkr_prop_coke_dollCast");
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("bkr_prop_coke_press_01b");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("bkr_prop_coke_dollboxfolded");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_coke_dollboxfolded");
	uParam0->f_2180[12] = MISC::GET_HASH_KEY("bkr_prop_coke_dollboxfolded");
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_436(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0] = 1456705429;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2222 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_coke_fullmetalbowl_02");
	uParam0->f_2180[1] = MISC::GET_HASH_KEY("bkr_prop_coke_mold_01a");
	uParam0->f_2180[2] = MISC::GET_HASH_KEY("bkr_prop_coke_press_01aa");
	uParam0->f_2180[3] = MISC::GET_HASH_KEY("bkr_prop_coke_fullscoop_01a");
	uParam0->f_2180[4] = MISC::GET_HASH_KEY("bkr_prop_coke_cutblock_01");
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_437(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2223[0].f_58 = { 1010.106f, -3199.759f, -39.9931f };
	uParam0->f_2223[0].f_61 = { 0f, 0f, 83.4291f };
	uParam0->f_2222 = 1;
	uParam0->f_2379.f_64 = 1;
	uParam0->f_2379.f_63 = 0.15f;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2360 = 1;
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_coke_bakingsoda_o");
	StringCopy(&(uParam0->f_1769[1]), "cokecutting", 64);
	uParam0->f_2180[9] = MISC::GET_HASH_KEY("prop_cs_credit_card");
	uParam0->f_2180[10] = MISC::GET_HASH_KEY("prop_cs_credit_card");
	uParam0->f_2180[11] = MISC::GET_HASH_KEY("bkr_prop_coke_fullscoop_01a");
	uParam0->f_2180[13] = MISC::GET_HASH_KEY("bkr_prop_coke_fullscoop_01a");
	uParam0->f_2180[14] = MISC::GET_HASH_KEY("bkr_prop_coke_fullmetalbowl_02");
	uParam0->f_2180[15] = MISC::GET_HASH_KEY("bkr_prop_coke_box_01a");
	uParam0->f_2180[16] = MISC::GET_HASH_KEY("bkr_prop_coke_box_01a");
	uParam0->f_2180[17] = MISC::GET_HASH_KEY("bkr_prop_coke_box_01a");
	uParam0->f_2180[18] = MISC::GET_HASH_KEY("bkr_prop_coke_box_01a");
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_438(var uParam0)
{
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 1;
	uParam0->f_2360 = 1;
	StringCopy(&(uParam0->f_1769[0]), "AwakeState", 64);
	uParam0->f_2180[0] = MISC::GET_HASH_KEY("bkr_prop_coke_bakingsoda_o");
	StringCopy(&(uParam0->f_1769[1]), "cokecutting", 64);
	uParam0->f_2180[6] = MISC::GET_HASH_KEY("prop_cs_credit_card");
	uParam0->f_2180[7] = MISC::GET_HASH_KEY("prop_cs_credit_card");
	uParam0->f_1997 = 2;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

void func_439(var uParam0)
{
	uParam0->f_1981 = 13315;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "MPYACHT_LEAN";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_2373 = 1;
	uParam0->f_1982 = 13286;
	uParam0->f_1986.f_4.f_2 = 0.05f;
	uParam0->f_1986.f_4 = 0.5f;
	uParam0->f_1986.f_4.f_1 = 6500;
	uParam0->f_1986.f_10 = 8926;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 9196;
	uParam0->f_1997 = 3;
	uParam0->f_1998 = 0;
	uParam0->f_2361 = 0;
}

int func_440(var uParam0)
{
	if (!uParam0->f_1702)
	{
		uParam0->f_17.f_6 = PED::CREATE_SYNCHRONIZED_SCENE(uParam0->f_5, uParam0->f_8, uParam0->f_17);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1605[iVar0].f_17))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1605[iVar0].f_17, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1605[iVar0].f_1)))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_1605[iVar0].f_17, uParam0->f_17.f_6, uParam0->f_1605[iVar0], &(uParam0->f_1605[iVar0].f_1), uParam0->f_1605[iVar0].f_18, uParam0->f_1605[iVar0].f_19, uParam0->f_1605[iVar0].f_20 | 4 | 1, 16, 1148846080, 0);
					PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1605[iVar0].f_17, 64);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24[iVar0].f_8) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_24[iVar0].f_1))
			{
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uParam0->f_24[iVar0].f_8, uParam0->f_17.f_6, uParam0->f_24[iVar0].f_1, uParam0->f_24[iVar0], uParam0->f_24[iVar0].f_9, uParam0->f_24[iVar0].f_10, 0, 1148846080);
			}
			iVar0++;
		}
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uParam0->f_17.f_6, uParam0->f_17.f_4);
		PED::SET_SYNCHRONIZED_SCENE_RATE(uParam0->f_17.f_6, uParam0->f_17.f_5);
		uParam0->f_1702 = 1;
	}
	else
	{
		iVar1 = uParam0->f_17.f_6;
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uParam0->f_17.f_6))
		{
			func_30(uParam0);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1) >= 1f)
			{
				uParam0->f_1702 = 0;
				return 0;
			}
		}
	}
	return 1;
}

int func_441(var uParam0, var uParam1, var uParam2)
{
	func_66(*uParam1, uParam2);
	return 1;
}

int func_442(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam2[iVar0]->f_8))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2[iVar0]->f_8))
			{
				uParam0->f_24[iVar0].f_8 = uParam2[iVar0]->f_8;
				(*uParam1)[iVar0] = uParam2[iVar0]->f_8;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2[iVar0]->f_8);
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]) && uParam0->f_1605[iVar0].f_17 != (*uParam3)[iVar0])
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((*uParam3)[iVar0]))
			{
				uParam0->f_1605[iVar0].f_17 = (*uParam3)[iVar0];
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY((*uParam3)[iVar0]);
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0]))
		{
		}
		iVar0++;
	}
	return 1;
}

int func_443(int iParam0, int iParam1)
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

void func_444(var uParam0, var uParam1)
{
	uParam0->f_1985 = 162606;
	uParam0->f_2373 = 0;
	uParam0->f_1981 = 161922;
	uParam0->f_1939.f_38 = 13061;
	uParam0->f_1939.f_41 = 12381;
	uParam0->f_1939.f_31.f_2 = "";
	uParam0->f_1939.f_39 = 12355;
	uParam0->f_1939.f_27 = 2;
	uParam0->f_1939.f_27.f_1 = 51;
	uParam0->f_1939.f_40 = 12277;
	uParam0->f_1939[0] = { 1111.752f, -3160.472f, -38.0723f };
	uParam0->f_1939[0].f_3 = { 1111.74f, -3159.522f, -36.254f };
	uParam0->f_1939[0].f_6 = 1f;
	uParam0->f_1984 = 161942;
	uParam0->f_1983 = 161482;
	uParam0->f_2222 = 0;
	uParam1->f_67 = uParam0->f_2222;
	uParam0->f_2360 = 0;
	uParam0->f_2361 = 0;
}

void func_445(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_24[iVar0].f_8 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 1)
			{
				func_446(&(uParam0->f_24[iVar0].f_68[iVar1]), uParam0, uParam0->f_24[iVar0].f_8, uParam0->f_1605[0].f_17);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_446(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = uParam1->f_17.f_6;
	if (iVar0 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_4))
		{
			if (uParam0->f_6 == 0 && ((PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= *uParam0 && PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) < uParam0->f_1) || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_7))))
			{
				uParam0->f_9 = AUDIO::GET_SOUND_ID();
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam2, 1) };
				AUDIO::PLAY_SOUND_FROM_COORD(uParam0->f_9, uParam0->f_4, ENTITY::GET_ENTITY_COORDS(iParam2, 1), uParam0->f_5, 0, 0, 0);
				uParam0->f_6 = 1;
			}
			else if (uParam0->f_6 == 1)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= uParam0->f_1 || ENTITY::HAS_ANIM_EVENT_FIRED(iParam3, MISC::GET_HASH_KEY(uParam0->f_8)))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
					{
						AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_9, uParam0->f_2, uParam0->f_3);
					}
					AUDIO::STOP_SOUND(uParam0->f_9);
					AUDIO::RELEASE_SOUND_ID(uParam0->f_9);
					uParam0->f_6 = 0;
				}
			}
		}
	}
}

void func_447(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = PLAYER::PLAYER_ID();
	uParam1[uParam0->f_20]->f_68 = 1;
	uParam1[uParam0->f_20]->f_46[0] = { 2061.032f, 2996.862f, -68.70161f };
	uParam1[uParam0->f_20]->f_53[0] = { 2059.647f, 2994.623f, -66.95161f };
	func_448(uParam0, uParam1, 185, 2060.871f, 2996.384f, -68.106f, 0f, 0f, -92.88f, 2060.871f, 2996.384f, -68.106f, 0, iVar0, 1117782016, -1);
	uParam1[uParam0->f_20]->f_68 = 2;
	uParam1[uParam0->f_20]->f_46[0] = { 2068.083f, 2999.212f, -68.70161f };
	uParam1[uParam0->f_20]->f_53[0] = { 2065.565f, 2999.071f, -66.95161f };
	func_448(uParam0, uParam1, 185, 2067.613f, 2999.009f, -68.106f, 0f, 0f, -150.48f, 2067.613f, 2999.009f, -68.106f, 0, iVar0, 1117782016, -1);
	uParam1[uParam0->f_20]->f_68 = 3;
	uParam1[uParam0->f_20]->f_46[0] = { 2073.929f, 2994.394f, -68.70161f };
	uParam1[uParam0->f_20]->f_53[0] = { 2072.706f, 2996.49f, -66.95161f };
	func_448(uParam0, uParam1, 185, 2073.386f, 2994.861f, -68.1f, 0f, 0f, 154.44f, 2073.386f, 2994.861f, -68.1f, 0, iVar0, 1117782016, -1);
	uParam1[uParam0->f_20]->f_68 = 4;
	uParam1[uParam0->f_20]->f_46[0] = { 2072.946f, 2987.002f, -68.70161f };
	uParam1[uParam0->f_20]->f_53[0] = { 2074.102f, 2989.17f, -66.95161f };
	func_448(uParam0, uParam1, 185, 2073.027f, 2987.647f, -68.1f, 0f, 0f, 96f, 2073.027f, 2987.647f, -68.1f, 0, iVar0, 1117782016, -1);
	uParam0->f_19 = 1;
}

void func_448(var uParam0, var uParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, bool bParam12, int iParam13, int iParam14, int iParam15)
{
	if (uParam0->f_20 < 17)
	{
		uParam1[uParam0->f_20]->f_5 = iParam2;
		uParam1[uParam0->f_20]->f_2 = { Param9 };
		uParam1[uParam0->f_20]->f_10 = { Param3 };
		uParam1[uParam0->f_20]->f_13 = { Param6 };
		uParam1[uParam0->f_20]->f_8 = bParam12;
		uParam1[uParam0->f_20]->f_73 = iParam15;
		if (bParam12)
		{
			(*uParam1)[uParam0->f_20] = iParam14;
		}
		if (iParam13 > -1)
		{
			uParam1[uParam0->f_20]->f_9 = iParam13;
		}
		else
		{
			uParam1[uParam0->f_20]->f_9 = uParam0->f_20;
		}
		uParam0->f_20++;
	}
}

void func_449()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
	func_450(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_64, 410);
}

int func_450(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_454();
			}
			else
			{
				return 0;
			}
		}
		if (!func_453())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_452())
				{
					if (!bParam2)
					{
						func_454();
					}
					else
					{
						return 0;
					}
				}
				if (func_451(157))
				{
					if (!bParam2)
					{
						func_454();
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
					func_454();
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
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_454();
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
			func_454();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_451(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_452()
{
	return Global_2450632.f_593;
}

bool func_453()
{
	return Global_1312854;
}

void func_454()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

