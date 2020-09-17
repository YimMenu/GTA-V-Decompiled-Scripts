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
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_94 = -1;
	fLocal_96 = 0.5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_29(ScriptParam_0))
		{
			func_27();
		}
	}
	while (true)
	{
		func_26();
		if (func_14())
		{
			func_27();
		}
		switch (func_13(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_12() == 1)
				{
					Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
				}
				else if (func_12() == 4)
				{
					Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 1:
				if (func_12() == 4)
				{
					Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_102.f_78, 200f, 200f, 200f, 0, 1, 0))
				{
					Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
				}
				break;
			
			case 3:
				func_10(&(Local_102.f_82));
				if (func_9(&(Local_102.f_82)))
				{
					Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
				}
				break;
			
			case 2:
				Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
			
			case 4:
				func_27();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					if (func_5())
					{
						Local_102 = 1;
					}
					break;
				
				case 1:
					func_3();
					if (func_1())
					{
						Local_102 = 4;
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
	return 0;
}

void func_3()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_BIT_SET(Local_102.f_2[iVar0].f_6, 1))
		{
			func_4(iVar0);
			if (Local_102.f_2[iVar0].f_14 > 5)
			{
				MISC::SET_BIT(&(Local_102.f_2[iVar0].f_6), 1);
			}
			Local_102.f_2[iVar0].f_14++;
		}
		iVar0++;
	}
}

void func_4(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_102.f_2[iParam0].f_10[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_102.f_2[iParam0].f_10[iVar0]))
			{
				ENTITY::SET_ENTITY_COORDS(Local_102.f_2[iParam0].f_10[iVar0], ENTITY::GET_ENTITY_COORDS(Local_102.f_2[iParam0].f_10[iVar0], 1) + Vector((0.046f * 1.5f), 0f, 0f), 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

int func_5()
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_6(iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_6(int iParam0)
{
	if (func_8(Local_102.f_2[iParam0].f_2) || MISC::IS_BIT_SET(Local_102.f_2[iParam0].f_6, 0))
	{
		return 1;
	}
	iVar4 = 0;
	MISC::SET_BIT(&iVar4, 3);
	MISC::SET_BIT(&iVar4, 4);
	switch (Local_102.f_2[iParam0].f_7)
	{
		case 0:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_102.f_2[iParam0].f_10[iVar0]))
					{
						Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_102.f_2[iParam0].f_2, Local_102.f_2[iParam0].f_5, (0.6f - (IntToFloat(iVar0) * 0.4f)), 0f, 0.1f) };
						Local_102.f_2[iParam0].f_10[iVar0] = OBJECT::CREATE_AMBIENT_PICKUP(-512375144, Var1, iVar4, Local_102.f_2[iParam0].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_102.f_2[iParam0].f_10[iVar0]))
					{
						Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_102.f_2[iParam0].f_2, Local_102.f_2[iParam0].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.1f) };
						Local_102.f_2[iParam0].f_10[iVar0] = OBJECT::CREATE_AMBIENT_PICKUP(Local_102.f_2[iParam0].f_8, Var1, iVar4, -1, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 2))
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_102.f_2[iParam0].f_10[iVar0]))
					{
						Var1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_102.f_2[iParam0].f_2, Local_102.f_2[iParam0].f_5, 0f, (0.25f - (IntToFloat(iVar0) * 0.25f)), 0.2f) };
						Local_102.f_2[iParam0].f_10[iVar0] = OBJECT::CREATE_AMBIENT_PICKUP(1426343849, Var1, iVar4, Local_102.f_2[iParam0].f_9, 0, 1, 1);
					}
					iVar0++;
				}
				if (func_7(iParam0, 2))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_7(int iParam0, int iParam1)
{
	iVar3 = 0;
	MISC::SET_BIT(&iVar3, 3);
	MISC::SET_BIT(&iVar3, 4);
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 0, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_102.f_2[iParam0].f_10[iParam1]))
		{
			Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_102.f_2[iParam0].f_2, Local_102.f_2[iParam0].f_5, 0f, (0.25f - (IntToFloat(iParam1) * 0.25f)), 0.1f) };
			Local_102.f_2[iParam0].f_10[iParam1] = OBJECT::CREATE_AMBIENT_PICKUP(-512375144, Var0, iVar3, Global_262145.f_4446, 0, 1, 1);
		}
		return 1;
	}
	return 0;
}

int func_8(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_9(var uParam0)
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

void func_10(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_11(uParam0, 0, 0);
		}
	}
}

void func_11(var uParam0, bool bParam1, bool bParam2)
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

int func_12()
{
	return Local_102;
}

int func_13(int iParam0)
{
	return Local_186[iParam0];
}

int func_14()
{
	func_22(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_21())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_20())
	{
		return 1;
	}
	if (func_19(159))
	{
		if (!func_18())
		{
			return 1;
		}
	}
	if (func_19(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_15() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_15()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_15()
{
	switch (func_17())
	{
		case 0:
			return func_16();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_16()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_17()
{
	return Global_30768;
}

bool func_18()
{
	return Global_2450632.f_598;
}

int func_19(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_20()
{
	return Global_2460680;
}

bool func_21()
{
	return Global_2450632.f_593;
}

void func_22(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_23(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_25(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_24(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_24(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

void func_26()
{
	SYSTEM::WAIT(0);
}

void func_27()
{
	func_28();
}

void func_28()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_29(struct<41> Param0, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45)
{
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0 = Param0;
	Var0.f_16 = Param0.f_1;
	func_33(func_34(Param0), Var0);
	func_31(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_102, 84);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_186, 65);
	if (!func_30())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_102.f_81 = Param0.f_1;
		Local_102.f_78 = { Param0.f_2 };
		iVar21 = 0;
		while (iVar21 < 5)
		{
			if (!MISC::IS_BIT_SET(Param0.f_5, 0))
			{
				MISC::SET_BIT(&(Local_102.f_2[iVar21].f_6), 0);
			}
			Local_102.f_2[iVar21].f_2 = { Param0.f_6[iVar21] };
			Local_102.f_2[iVar21].f_5 = Param0.f_22[iVar21];
			Local_102.f_2[iVar21].f_7 = Param0.f_28[iVar21];
			Local_102.f_2[iVar21].f_8 = Param0.f_34[iVar21];
			Local_102.f_2[iVar21].f_9 = Param0.f_40[iVar21];
			iVar21++;
		}
	}
	Local_186[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
	return 1;
}

int func_30()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_21())
		{
			return 0;
		}
		if (func_19(157))
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

int func_31(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_28();
			}
			else
			{
				return 0;
			}
		}
		if (!func_32())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_21())
				{
					if (!bParam2)
					{
						func_28();
					}
					else
					{
						return 0;
					}
				}
				if (func_19(157))
				{
					if (!bParam2)
					{
						func_28();
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
					func_28();
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
				func_28();
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
			func_28();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_32()
{
	return Global_1312854;
}

void func_33(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_28();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_34(int iParam0)
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
		
		case 79:
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
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
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
		
		case 130:
			return 32;
		
		case 131:
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
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

