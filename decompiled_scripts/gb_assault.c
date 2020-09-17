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
	Local_341 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_473 = -1;
	iLocal_474 = -1;
	iLocal_476 = -1;
	iLocal_477 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1245(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1197(ScriptParam_0);
	}
	else
	{
		func_1144();
	}
	while (true)
	{
		func_1143();
		if (func_1136())
		{
			func_1144();
		}
		else if (func_1132(1))
		{
			func_1144();
		}
		Global_1674356.f_2 = Local_80.f_63;
		Global_1674356.f_3 = Local_80.f_64;
		switch (func_1131(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1130() == 1)
				{
					if (func_1129())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
						{
						}
						func_1128();
						if (func_1127())
						{
							func_1112(159, 1, -1, 0);
							OBJECT::_0x78857FC65CADB909(1);
						}
						else
						{
							func_1112(159, 0, -1, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
							{
								OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
							}
						}
						if (func_1111() == 1)
						{
							STREAMING::REMOVE_IPL("CS3_07_MPGates");
							GAMEPLAY::SET_BIT(&uLocal_338, 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(782665360, 1);
						}
						else if (func_1111() == 2)
						{
							func_1110();
						}
						else if (func_1111() == 3)
						{
							func_1109();
						}
						if (func_1108(1))
						{
							GAMEPLAY::SET_BIT(&uLocal_339, 5);
						}
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_80.f_12), 1200);
						}
						func_1107();
						func_1100();
						Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
					}
				}
				else if (func_1130() == 4)
				{
					Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 1:
				if (func_1130() == 1)
				{
					func_1099();
					func_1091();
					func_395();
					func_383();
					if (func_1127() || func_382())
					{
						func_221(&(Global_1366905.f_534), &Global_1366905, 28, &(Global_1366905.f_1), &(Global_1366905.f_117), -1, 0, 0);
					}
				}
				else if (func_1130() == 4)
				{
					Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				func_220();
				break;
			
			case 3:
				func_219(&(Local_80.f_52));
				if (func_218(&(Local_80.f_52)))
				{
					Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
				}
				func_220();
				break;
			
			case 2:
				func_220();
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
			
			case 4:
				func_1144();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1130())
			{
				case 0:
					if (func_1111() != -1)
					{
						if ((func_208() && func_49()) && func_26())
						{
							func_25();
							func_23();
							if (func_1111() == 3)
							{
								GAMEPLAY::SET_BIT(&(Local_80.f_1), 6);
							}
							Local_80 = 1;
							Local_80.f_8 = NETWORK::PARTICIPANT_ID_TO_INT();
							Local_80.f_9 = PLAYER::PLAYER_ID();
							func_1112(159, 1, -1, 0);
							STATS::_0x6DEE77AFF8C21BD1(&(Local_80.f_63), &(Local_80.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_80 = 4;
					}
					else if (func_1())
					{
						Local_80 = 4;
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
	if (Global_2537071.f_5124.f_40)
	{
		Global_2537071.f_5124.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_80.f_51 > 0)
	{
		if (Local_80 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_80.f_51)
	{
		case 0:
			Local_80.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 7))
			{
				Local_80.f_51 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 20))
			{
				if (Local_80.f_5 != -1)
				{
					Local_80.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[0]))
				{
					if (func_10(Local_80.f_13[0]))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 20))
		{
			if (!func_9(&(Local_80.f_60)))
			{
				func_8(&(Local_80.f_60), 0, 0);
			}
			else if (func_6(&(Local_80.f_60), func_7(), 0))
			{
				GAMEPLAY::SET_BIT(&(Local_80.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_80.f_54)))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 2))
		{
			func_8(&(Local_80.f_54), 0, 0);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
			{
				if (func_6(&(Local_80.f_54), func_12(), 0))
				{
					GAMEPLAY::SET_BIT(&(Local_80.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_12449;
}

void func_13()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_80.f_35[iVar0])
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iVar0]))
				{
					if (func_1111() != 2)
					{
						Local_80.f_35[iVar0] = 3;
					}
					else
					{
						Local_80.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 11))
				{
					Local_80.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 12))
				{
					Local_80.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 13))
				{
					Local_80.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 14))
				{
					Local_80.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()
{
	iVar0 = -1;
	iVar1 = -1;
	if (Local_80 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
				{
					iLocal_340 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
					if (func_1245(iVar4, 1, 1))
					{
						func_15(iLocal_340, 0);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 2))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_1), 2);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 7))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 7))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 7);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 11))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 12))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 11);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 12))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 13))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 12);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 13))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 14))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 13);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 14))
					{
						if (Local_145[iLocal_340].f_2 != 0)
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 2))
						{
							iVar0 = iLocal_340;
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 4))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 3))
							{
								Local_80.f_6 = iVar4;
								GAMEPLAY::SET_BIT(&(Local_80.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 8))
						{
							iVar1 = iLocal_340;
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 9))
						{
							Local_80.f_6 = iVar4;
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 8);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 10))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 11))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 5))
							{
								Local_80.f_6 = iVar4;
							}
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 10);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 15))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 15))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 15);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 18))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 16))
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 18);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 4)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 5)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 9)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 10)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 15)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 18))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_145[iLocal_340].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 5))
				{
					if (Local_80.f_9 > -1)
					{
						if (iVar3 == Local_80.f_9)
						{
							GAMEPLAY::SET_BIT(&(Local_80.f_1), 5);
						}
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (Local_80.f_9 > -1)
				{
					if (iVar3 == Local_80.f_9)
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 4))
			{
				if (Local_80.f_5 != iVar0)
				{
					Local_80.f_5 = iVar0;
					if (Local_80.f_5 == -1)
					{
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_1), 16);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
		{
			if (Local_80.f_7 != iVar1)
			{
				Local_80.f_7 = iVar1;
				if (Local_80.f_7 == -1)
				{
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16))
				{
					GAMEPLAY::SET_BIT(&(Local_80.f_1), 16);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 0))
		{
			if (!bVar2)
			{
				GAMEPLAY::SET_BIT(&(Local_80.f_1), 0);
			}
		}
	}
}

void func_15(int iParam0, int iParam1)
{
	if (func_1111() == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_2, iParam0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[iParam1]))
			{
				if (func_21(Local_80.f_29[iParam1]))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_80.f_9 > -1)
					{
						iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_80.f_2), iParam0);
							}
						}
					}
					if (bVar2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_80.f_29[iParam1]), iVar0, 1);
						GAMEPLAY::SET_BIT(&(Local_80.f_2), iParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			return iParam1 == Global_1628237[iParam0].f_11;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1628237[iParam0].f_11 != func_18())
			{
				if (Global_1628237[iParam0].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_22(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_22(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
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

void func_23()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 17))
	{
		Var0 = { 200f, 200f, 200f };
		Var3 = { func_24() };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var3 - Var0, Var3 + Var0, 0, 1);
		GAMEPLAY::SET_BIT(&(Local_80.f_1), 17);
	}
}

Vector3 func_24()
{
	iVar0 = func_1111();
	iVar1 = func_25();
	Var2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					Var2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					Var2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					Var2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					Var2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					Var2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					Var2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					Var2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					Var2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					Var2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					Var2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					Var2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					Var2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return Var2;
}

int func_25()
{
	if (Local_80.f_4 != -1)
	{
		return Local_80.f_4;
	}
	iVar0 = 0;
	iVar1 = func_1111();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
	Local_80.f_4 = iVar0;
	return Local_80.f_4;
}

int func_26()
{
	switch (Local_80.f_3)
	{
		case 1:
			func_28(0, 782665360, -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, 1127131465, -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, 1123216662, -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, 301427732, -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, 301427732, -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	switch (func_1111())
	{
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_80.f_10, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(Param2, 5f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_80.f_10), iParam0);
				}
				if (func_33(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_80.f_29[iParam0]), iParam1, Param2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_80.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 2);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1);
						}
						VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 0);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 0, 0);
						VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1);
						ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]));
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1, 1, 0);
						ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 1);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), 0);
						if (func_1111() == 1)
						{
							if (iParam1 == 782665360)
							{
								fVar0 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), SYSTEM::ROUND(fVar0), 0);
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), SYSTEM::ROUND(fVar0));
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_80.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_12455;
}

int func_30(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == -32878452)
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2537071.f_6516 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_REGISTER(iVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, iParam9);
			unk_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				unk_0xFC40CBF7B90CA77C(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_31(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_31(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_32(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2405072.f_2912[1].f_5 == iParam5 && Global_2405072.f_2912[1].f_4 == iParam4) && SYSTEM::VDIST(Global_2405072.f_2912[1], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405072.f_2912[iVar0] = { Global_2405072.f_2912[iVar0 + 1] };
			}
			iVar0++;
		}
		Global_2405072.f_2912[1] = { Param0 };
		Global_2405072.f_2912[1].f_3 = uParam3;
		Global_2405072.f_2912[1].f_4 = iParam4;
		Global_2405072.f_2912[1].f_5 = iParam5;
	}
}

int func_32(int iParam0, struct<3> Param1, int iParam4)
{
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417897.f_461[iVar0][iVar1].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (GAMEPLAY::ABSF((Global_2417897.f_461[iVar0][iVar1].f_2 - Var2.z)) < 2f)
				{
					Var2.z = Global_2417897.f_461[iVar0][iVar1].f_2;
				}
				if (SYSTEM::VDIST(Global_2417897.f_461[iVar0][iVar1], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_33(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405072.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.y, (Param0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (fParam14 > 0f)
	{
		if (func_43(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_34(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_34(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_1245(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_39(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1245(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_35(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_39(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_39(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_35(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_36(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_37(-1, 0) == 8;
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

int func_37(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_38();
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

int func_38()
{
	return Global_1312745;
}

Vector3 func_39(int iParam0)
{
	iVar0 = iParam0;
	if ((func_42() && Global_1590535[iVar0].f_847) && !func_41(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_40(iParam0);
}

Vector3 func_40(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_41(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return Global_2450632.f_17;
}

int func_43(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1245(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_44(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_40(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_48(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_47(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_45(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)
{
	iVar0 = func_46(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_46(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_18();
}

struct<13> func_47(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_48(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_47(iParam0) };
		Global_2513231 = { func_47(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_49()
{
	switch (Local_80.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_50(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_50(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_50(bool bParam0, int iParam1, bool bParam2)
{
	iVar0 = 880595258;
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				Var36 = { func_207() };
				if (!func_9(&(Local_80.f_58)))
				{
					func_8(&(Local_80.f_58), 0, 0);
				}
				if (func_51(Var36, 5f, &Local_465, &uLocal_468, &Var1) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 19))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 19))
					{
						Local_465 = { Var36 };
					}
					Local_80.f_12 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(-301062413, Local_465, 1, iVar0));
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_80.f_12, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_80.f_12), Local_465 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_80.f_12), 1);
					ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(Local_80.f_12), 1);
					if (bParam0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iParam1]))
						{
							if (!func_10(Local_80.f_13[iParam1]))
							{
								OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(NETWORK::NET_TO_OBJ(Local_80.f_12), NETWORK::NET_TO_PED(Local_80.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_80.f_12), Var36 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 19))
				{
					if (func_6(&(Local_80.f_58), 15000, 0))
					{
						GAMEPLAY::SET_BIT(&(Local_80.f_1), 19);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		return 1;
	}
	return 0;
}

int func_51(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_52(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var62 = { Param0 - Var0[0] };
			if (Var62.z > uParam6->f_12)
			{
				Var0[0] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_52(var uParam0, var uParam1, var uParam2)
{
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405072.f_2458 == *uParam0 || !Global_2405072.f_2458.f_1 == uParam0->f_1) || !Global_2405072.f_2458.f_2 == uParam0->f_2) || !Global_2405072.f_2461 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405072.f_2472 == uParam0->f_8 || !Global_2405072.f_2472.f_1 == uParam0->f_8.f_1) || !Global_2405072.f_2472.f_2 == uParam0->f_8.f_2) || !Global_2405072.f_2475 == uParam0->f_11) || !Global_2405072.f_2475.f_1 == uParam0->f_11.f_1) || !Global_2405072.f_2475.f_2 == uParam0->f_11.f_2) || !Global_2405072.f_2478 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405072.f_2456 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_2465))
			{
				if (Global_2405072.f_2465 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2462) < func_206(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2462) < func_206(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_205();
		}
		Global_2405072.f_2456 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2462) > func_206(0))
	{
		Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
		func_199();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405072.f_2456)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_205();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_33(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*uParam2[0] = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405072.f_2479 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405072.f_2458 = { *uParam0 };
					Global_2405072.f_2461 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = 0f;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405072.f_2472 = { uParam0->f_8 };
					Global_2405072.f_2475 = { uParam0->f_11 };
					Global_2405072.f_2478 = uParam0->f_14;
					Global_2405072.f_2458 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_198(Var8.x, Var8.y);
			}
			Global_2405072.f_2457 = 1;
			Global_2405072.f_2456 = 1;
			Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
			Global_2405072.f_2462 = NETWORK::GET_NETWORK_TIME();
			Global_2405072.f_2465 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405072.f_2456)
	{
		if (Global_2405072.f_2457 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2463) > 5000)
			{
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*uParam2[0] = { uParam0->f_18 };
					}
					else
					{
						*uParam2[0] = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = -1008861746;
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17] = { uParam1->f_13[iVar17] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_197(Global_4456448.f_232883))
					{
						Var26.f_9 = 1;
					}
					func_172(uParam2[0], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_171(*uParam2[0], *uParam0, uParam0->f_4, 1, 1))
						{
							*uParam2[0] = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405072.f_2457 = 9;
				}
				else
				{
					Global_2405072.f_2457 = 2;
				}
			}
		}
		if (Global_2405072.f_2457 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2463) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(Var11, Var14) == 0)
			{
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_36(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405072.f_2457 = 3;
				}
				else
				{
					Global_2405072.f_2457 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2467) > 7000)
			{
				func_170(Var8.x, Var8.y);
			}
		}
		if (Global_2405072.f_2457 == 3)
		{
			if (func_169() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2463) > 10000)
			{
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				Global_2405072.f_2457 = 4;
			}
		}
		if (Global_2405072.f_2457 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_199();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 1:
							func_168(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), Var18, Var21, uVar24, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
								Global_2405072.f_2457 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
								Global_2405072.f_2457 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
					Global_2405072.f_2457 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_168(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(Var18, Var21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405072.f_2457 == 5)
		{
			if (func_105(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405072.f_2483.f_5)
				{
					Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
					Global_2405072.f_2457 = 6;
				}
				else
				{
					Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *uParam2[0] };
							uParam2->f_16[0] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.y);
						}
					}
					Global_2405072.f_2457 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2463) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 6)
		{
			iVar0 = 0;
			Global_2405072.f_2483.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_104(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_103(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
			Global_2405072.f_2457 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_168(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(Var18, Var21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405072.f_2457 == 7)
		{
			if (func_105(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*uParam2[0]) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*uParam2[0]) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405072.f_2617[iVar17]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_171(Global_2405072.f_2617[iVar17], *uParam0, uParam0->f_4, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 1:
										if (func_101(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405072.f_2617[iVar17], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*uParam2[0] = { Global_2405072.f_2617[iVar17] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*uParam2[0]) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_55(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*uParam2[0] = { Var1 };
					}
				}
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *uParam2[iVar17] };
						uParam2->f_16[iVar17] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.y);
						iVar17++;
					}
				}
				Global_2405072.f_2457 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405072.f_2463) > 20000)
			{
				Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
				Global_2405072.f_2457 = 8;
			}
		}
		if (Global_2405072.f_2457 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_54(Global_2405072.f_486))
				{
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_53(uParam2, &(Global_2405072.f_2483.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*uParam2[0] = { Global_2405072.f_2458 };
				func_55(uParam2[0], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405072.f_2463 = NETWORK::GET_NETWORK_TIME();
			Global_2405072.f_2457 = 9;
		}
		if (Global_2405072.f_2457 == 9)
		{
			Global_2405072.f_2456 = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_205();
			return 1;
		}
		Global_2405072.f_2462 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_53(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*uParam0[iVar0] = { uParam1[iVar0]->f_4 };
		uParam0->f_16[iVar0] = uParam1[iVar0]->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
}

int func_54(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_55(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = -1008861746;
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var67 = { *uParam5 };
						if (func_104(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_103(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						Var67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_103(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_69(*uParam0, &Var0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64] = { uParam6->f_13[iVar64] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_67(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_172(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				break;
			
			case 2:
				Var70 = { uParam5->f_8 };
				Var73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_66(Var0, uParam5->f_7, Var70, Var73, fVar76))
		{
			if (func_69(*uParam0, &Var0, iVar66, iParam3, 0))
			{
				if (!func_66(Var0, uParam5->f_7, Var70, Var73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var70 };
					}
					if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar63, 0, 0))
					{
						Var0.z = uVar63;
					}
				}
			}
			else if (func_56(uParam0, 1, 1, 1, 1))
			{
				func_55(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var70 + Var73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var70 };
				}
				if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar63, 0, 0))
				{
					Var0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2405072.f_661 = 1;
}

int func_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409984[iVar0].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409984[iVar0].f_16))
			{
				if (func_65(*uParam0, &(Global_2409984[iVar0]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409984[iVar0].f_12)
						{
							*uParam0 = { Global_2409984[iVar0].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_57(&Var1, &(Global_2409984[iVar0]), 1036831949, 0, bParam3);
							if (func_56(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_57(&Var1, &(Global_2409984[iVar0]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_57(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_64(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_64(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_62(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_61(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_58(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_58(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	Var0 = { Param4 - Param1 };
	Var0.z = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.z = 0f;
	Var6 = { func_60(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.y, Var3.x, Var3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_59(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_59(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.x, Param1.y, 0f, Param4.x, Param4.y, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.z = 0f;
		Var6 = { func_60(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.z = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.z = 0f;
		Var6 = { func_60(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.x, Var26.y, Var29.x, Var29.y)));
		if (!bParam9)
		{
			if (func_59(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_59(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_59(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_60(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.y * Param3.z) - (Param0.z * Param3.y)), ((Param0.z * Param3.x) - (Param0.x * Param3.z)), ((Param0.x * Param3.y) - (Param0.y * Param3.x));
}

void func_61(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.x = (Param1 - fParam7);
			}
			else
			{
				Var0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.x = (Param4 + fParam7);
		}
		else
		{
			Var0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_62(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	Var0 = { *uParam0 - Param1 };
	Var0.z = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_63(&Var0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_63(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.x;
	uParam0->f_1 = Var3.y;
}

void func_63(var uParam0, struct<3> Param1)
{
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.y);
	fVar1 = SYSTEM::SIN(Param1.y);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.y = uParam0->f_1;
	Var2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.z);
	fVar1 = SYSTEM::SIN(Param1.z);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.z = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_64(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	switch (iParam10)
	{
		case 0:
			func_62(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_61(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_58(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_171(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_101(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_65(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_171(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405072.f_2726) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_101(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.z < uParam3->f_2 && Param0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.z > uParam3->f_2 && Param0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_66(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_101(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param4, Param7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_67(int iParam0, bool bParam1)
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
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_68(int iParam0)
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

int func_69(struct<3> Param0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_100(Param0, uParam3))
	{
		if (func_70(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, 0, uParam3, iParam4))
	{
		if (func_70(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(struct<3> Param0, var uParam3, int iParam4, bool bParam5)
{
	fVar0 = SYSTEM::VDIST(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_86(Global_2405072.f_509, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_74(*uParam3, 1056964608))
			{
				if (!func_71(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_71(var uParam0, bool bParam1)
{
	Var1 = { *uParam0 };
	iVar4 = func_73(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_72(Var1, &(Global_2410189[iVar4][iVar0])))
		{
			if (bParam1)
			{
				func_58(&Var1, Global_2410189[iVar4][iVar0], Global_2410189[iVar4][iVar0].f_3, Global_2410189[iVar4][iVar0].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_72(Var1, &(Global_2410189[8][iVar0])))
		{
			if (bParam1)
			{
				func_58(&Var1, Global_2410189[8][iVar0], Global_2410189[8][iVar0].f_3, Global_2410189[8][iVar0].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_72(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_73(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411469[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411469[1])
	{
		if (Param0 < Global_2411473[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411469[2])
	{
		if (Param0 < Global_2411473[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411473[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411473[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_74(struct<3> Param0, float fParam3)
{
	if (func_83(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4456448.f_91960 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_91960)
			{
				if (Global_4456448.f_91961[iVar0].f_7 != 0)
				{
					if (func_75(Param0, Global_4456448.f_91961[iVar0], Global_4456448.f_91961[iVar0].f_6, Global_4456448.f_91961[iVar0].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_78239 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_78239)
			{
				if (Global_4456448.f_78242[iVar0].f_15 != 0)
				{
					if (func_75(Param0, Global_4456448.f_78242[iVar0], Global_4456448.f_78242[iVar0].f_3, Global_4456448.f_78242[iVar0].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_124061 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_124061)
			{
				if (Global_4456448.f_124065[iVar0].f_12 != 0)
				{
					if (func_75(Param0, Global_4456448.f_124065[iVar0], Global_4456448.f_124065[iVar0].f_3, Global_4456448.f_124065[iVar0].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_233[iVar0], 0))
				{
					if (func_75(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_233[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969031.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969031.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969031.f_119[iVar0], 0))
				{
					if (func_75(Param0, ENTITY::GET_ENTITY_COORDS(Global_969031.f_119[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969031.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969031.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_75(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	if (SYSTEM::VDIST(Param0, Param3) < func_82(iParam7, 1008981770))
	{
		func_76(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_76(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	Var0 = { 0f, 1f, 0f };
	func_63(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_77(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.y + fParam8)) };
	Var9.z = (Var9.z - ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.y * -1f) + fParam8)) };
	Var12.z = (Var12.z + ((0.5f * GAMEPLAY::ABSF((Var6.z - Var3.z))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = GAMEPLAY::ABSF((Var6.x - Var3.x));
}

void func_77(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_80(iParam0);
		if (iVar0 != 0)
		{
			func_78(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_78(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	func_79(iParam0, &Global_1315812);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315812[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315812[iVar0], &(Global_1315816[iVar0]), &(Global_1315823[iVar0]));
		}
		if (SYSTEM::VMAG(Global_1315816[iVar0]) <= 0.01f || SYSTEM::VMAG(Global_1315823[iVar0]) <= 0.01f)
		{
			Global_1315816[iVar0] = (0f - (fParam4 * 0.5f));
			Global_1315823[iVar0] = (0f + (fParam4 * 0.5f));
			Global_1315816[iVar0].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315823[iVar0].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315816[iVar0].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315823[iVar0].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315830[iVar0] = (Global_1315823[iVar0] - Global_1315816[iVar0]);
		Global_1315833[iVar0] = (Global_1315823[iVar0].f_1 - Global_1315816[iVar0].f_1);
		Global_1315836[iVar0] = (Global_1315823[iVar0].f_2 - Global_1315816[iVar0].f_2);
		if (Global_1315830[iVar0] > Global_1315839)
		{
			Global_1315839 = Global_1315830[iVar0];
		}
		if (Global_1315836[iVar0] > Global_1315840)
		{
			Global_1315840 = Global_1315836[iVar0];
		}
		iVar0++;
	}
	Global_1315841 = (Global_1315839 * -0.5f);
	Global_1315844 = (Global_1315839 * 0.5f);
	Global_1315841.f_1 = ((((0.5f * Global_1315833[0]) + Global_1315833[1]) + Global_1315812.f_3) * -1f);
	Global_1315844.f_1 = (0.5f * Global_1315833[0]);
	Global_1315841.f_2 = (Global_1315836[0] * -0.5f);
	Global_1315844.f_2 = (Global_1315836[0] * 0.5f);
	*uParam1 = { Global_1315841 };
	*uParam2 = { Global_1315844 };
}

void func_79(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = 387748548;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = 177270108;
			(*uParam1)[1] = 1502869817;
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = 433954513;
			(*uParam1)[1] = -1881846085;
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_80(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_81(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_81(int iParam0)
{
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_82(int iParam0, float fParam1)
{
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_77(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.y * 0.5f) * (Var6.y * 0.5f))) + ((Var6.z * 0.5f) * (Var6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_83(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_84(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0);
}

bool func_85(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

int func_86(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	if (func_93(Param0))
	{
		if (func_56(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_88(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_87(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *uParam4[iVar0]) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_62(uParam3, *uParam4[iVar0], (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_87(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405072.f_2728[iVar0]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_88(var uParam0, bool bParam1, bool bParam2)
{
	if (func_90(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_57(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 0, bParam2);
			if (func_90(Var2, &uVar1) || func_89(Var2))
			{
				Var2 = { *uParam0 };
				func_57(&Var2, &(Global_2405072.f_365[iVar0]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_89(struct<3> Param0)
{
	if (Global_2405072.f_590 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405072.f_587);
		if (fVar0 < Global_2405072.f_590)
		{
			return 1;
		}
	}
	return 0;
}

int func_90(struct<3> Param0, var uParam3)
{
	if (func_92())
	{
		return 0;
	}
	iVar1 = func_91();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405072.f_365[iVar0].f_9 == 1)
		{
			if (func_65(Param0, &(Global_2405072.f_365[iVar0]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91()
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405072.f_365[iVar0].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_92()
{
	return Global_1676377.f_474;
}

int func_93(struct<3> Param0)
{
	if (!Global_2405072.f_512 && !Global_2405072.f_513)
	{
		if (!Global_2405072.f_45.f_314)
		{
			if (!func_97(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_96(Param0, 1008981770))
			{
				if (!func_56(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_56(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_95(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_94(&(Global_2405072.f_45[iVar0])) };
					if (!func_56(&Var1, 0, 0, 0, 1))
					{
						if (!func_56(&Param0, 0, 0, 0, 1))
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

Vector3 func_94(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_95(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_65(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_96(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405072.f_45[iVar0].f_9)
		{
			if (func_65(Param0, &(Global_2405072.f_45[iVar0]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_97(int iParam0, bool bParam1)
{
	if (func_99() != 0)
	{
		return func_98(iParam0) != 0;
	}
	return func_83(iParam0, bParam1, 0);
}

int func_98(int iParam0)
{
	if (func_1245(iParam0, 0, 1))
	{
		return Global_2425662[iParam0].f_1;
	}
	return 0;
}

int func_99()
{
	return Global_30768;
}

int func_100(struct<3> Param0, var uParam3)
{
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			fVar3 = SYSTEM::VDIST(Global_2405072.f_2255[iVar0], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405072.f_2255[iVar1] };
			return 1;
		}
	}
	return 0;
}

int func_101(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_102(&Param3, &Param6);
	if (((!Param0.x >= Param3.x || !Param0.y >= Param3.y) || !Param0.x <= Param6.x) || !Param0.y <= Param6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.z >= Param3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.z <= Param6.z)
		{
			return 1;
		}
	}
	else if (Param0.z >= Param3.z && Param0.z <= Param6.z)
	{
		return 1;
	}
	return 0;
}

void func_102(var uParam0, var uParam1)
{
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_103(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (Param0.x > Param3.x)
	{
		Var3.x = Param0.x;
		Var0.x = Param3.x;
	}
	else
	{
		Var3.x = Param3.x;
		Var0.x = Param0.x;
	}
	if (Param0.y > Param3.y)
	{
		Var3.y = Param0.y;
		Var0.y = Param3.y;
	}
	else
	{
		Var3.y = Param3.y;
		Var0.y = Param0.y;
	}
	if (Param0.z > Param3.z)
	{
		Var3.z = Param0.z;
		Var0.z = Param3.z;
	}
	else
	{
		Var3.z = Param3.z;
		Var0.z = Param0.z;
	}
	if (SYSTEM::VMAG(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_104(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_105(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (Global_2405072.f_2483.f_1 == 0 && Global_2405072.f_2483 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_2405072.f_2483.f_1)))
			{
				case 0:
					func_166(uParam1, uParam2);
					if (!Global_2405072.f_2483.f_2)
					{
						if (uParam2->f_7 && Global_2405072.f_552.f_7 == 0)
						{
							*uParam0[0] = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*uParam0[0] = { uParam1->f_18 };
							}
							else
							{
								*uParam0[0] = { Global_2405072.f_2458 };
							}
							if (uParam1->f_5 && func_54(Global_2405072.f_486))
							{
								if (!Global_2405072.f_2483.f_5)
								{
									Global_2405072.f_2483.f_5 = 1;
								}
								else
								{
									func_55(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_55(uParam0[0], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_166(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_166(uParam1, uParam2);
					Global_2405072.f_2483.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_166(uParam1, uParam2);
				if (!Global_2405072.f_2483.f_2)
				{
					Global_2405072.f_2483.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_163(Global_2405072.f_552, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90));
	}
	if (uParam2->f_7 && !Global_2405072.f_2483.f_4)
	{
		Global_2405072.f_2483.f_4 = 1;
		func_113(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405072.f_2483.f_1 > 0 || Global_2405072.f_2483 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405072.f_2483.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405072.f_2483.f_3)
					{
						iVar4 = Global_2405072.f_2483.f_3 + 1;
					}
					if (iVar4 > (Global_2405072.f_2483.f_1 - 1))
					{
						iVar4 = (Global_2405072.f_2483.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::_0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_113(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405072.f_2483.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405072.f_2483.f_1;
		}
		if (Global_2405072.f_2483.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405072.f_2880)
			{
				func_107(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
			}
			if (uParam1->f_5 && func_54(Global_2405072.f_486))
			{
				if (Global_2405072.f_2483.f_2)
				{
					func_53(uParam0, &(Global_2405072.f_2483.f_6));
					func_106(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_55(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_106(*uParam0[0]);
					return 1;
				}
			}
			else if (Global_2405072.f_2483.f_2)
			{
				func_53(uParam0, &(Global_2405072.f_2483.f_6));
				func_106(*uParam0[0]);
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2405072.f_2483.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0], &(uParam0->f_16[0]));
				if (!func_71(uParam0[0], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_106(*uParam0[0]);
					return 1;
				}
				else
				{
					*uParam0[0] = { Global_2405072.f_2458 };
					func_55(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_106(*uParam0[0]);
					return 1;
				}
			}
			else
			{
				*uParam0[0] = { Global_2405072.f_2458 };
				func_55(uParam0[0], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_106(*uParam0[0]);
				return 1;
			}
		}
	}
	else
	{
		*uParam0[0] = { Global_2405072.f_2458 };
		if (uParam1->f_5 && func_54(Global_2405072.f_486))
		{
			if (!Global_2405072.f_2483.f_5)
			{
				Global_2405072.f_2483.f_5 = 1;
			}
			else
			{
				func_55(uParam0[0], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_55(uParam0[0], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_106(*uParam0[0]);
		return 1;
	}
	return 0;
}

void func_106(struct<3> Param0)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405072.f_2617[(3 - iVar0)] = { Global_2405072.f_2617[(3 - iVar0 + 1)] };
		}
		iVar0++;
	}
	Global_2405072.f_2617[0] = { Param0 };
}

void func_107(var uParam0, var uParam1, var uParam2)
{
	if (func_54(Global_2405072.f_486) && func_112() < 4096)
	{
		func_111(uParam0, 0f);
		func_111(uParam1, uParam0->f_2);
		func_111(uParam2, uParam1->f_2);
	}
	else
	{
		func_110(uParam0);
		func_109(uParam2, uParam0->f_4);
		func_108(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_108(var uParam0, struct<3> Param1, struct<3> Param4)
{
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0].f_4, Param1);
			fVar3 = SYSTEM::VDIST(Global_2408006[iVar0].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2408006[iVar0].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_109(var uParam0, struct<3> Param1)
{
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2408006[iVar0].f_4, Param1);
			fVar2 = (fVar2 * Global_2408006[iVar0].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_110(var uParam0)
{
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 > fVar1)
			{
				fVar1 = Global_2408006[iVar0].f_1;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_111(var uParam0, float fParam1)
{
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_2 < fVar1 && Global_2408006[iVar0].f_2 > fParam1)
			{
				fVar1 = Global_2408006[iVar0].f_2;
				Var2 = { Global_2408006[iVar0] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_112()
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > iVar1)
		{
			iVar1 = Global_2408006[iVar0];
		}
		iVar0++;
	}
	return iVar1;
}

void func_113(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405072.f_486 == 1)
		{
			if (GAMEPLAY::ABSF((Global_2405072.f_509.f_2 - Param0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_159(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_158(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_43(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam5->f_13[iVar11]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_152(Param0, fParam3, uParam4->f_15, func_157(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405072.f_3;
		}
	}
	else if (!func_149(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_34(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_34(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			Var12 = { Global_2405072.f_509 };
			if (Global_2405072.f_486 == 26)
			{
				Var12 = { Global_2405072.f_552.f_18 };
			}
			if (!func_87(Param0, 0.5f))
			{
				if (func_93(Var12))
				{
					if (!func_56(&Param0, 0, 0, 0, 1) && !func_148(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_148(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_147(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_146(PLAYER::PLAYER_ID()) && func_144(PLAYER::PLAYER_ID())))
		{
			if (!func_143(&Param0, &(Global_2405072.f_2483.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_144(PLAYER::PLAYER_ID()))
		{
			if (!func_142(Param0, &(Global_2405072.f_2483.f_57), &(Global_2405072.f_2483.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_141(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_54(Global_2405072.f_486))
			{
				if (func_96(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_140(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405072.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405072.f_693)
		{
			if (!func_88(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_71(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_95(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_139(Param0, &Var17, &Var20, &fVar23);
			if (!func_134(&(Global_2405072.f_45[iVar16]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_74(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.y, (Param0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.x, Param0.y, (Param0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_133(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405072.f_2880 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_125(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_125(Param0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_54(Global_2405072.f_486) && iVar8 < 4096)
			{
				Var25.f_2 = func_123(Param0);
			}
			uVar7 = func_118(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_117(Var25);
			Global_2405072.f_2483.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405072.f_2483.f_6[iVar24])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_125(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_125(Param0, Global_2405072.f_2458, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_54(Global_2405072.f_486) && iVar8 == Global_2405072.f_2483.f_6[iVar24]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_123(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405072.f_2483.f_6[iVar24].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_116(Var25, iVar24);
							Global_2405072.f_2483.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar0 > Global_2405072.f_2483.f_6[iVar24].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_116(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_115(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_118(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_114(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_114(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405072.f_2483.f_6[iVar24] || (iVar8 == Global_2405072.f_2483.f_6[iVar24] && fVar3 > Global_2405072.f_2483.f_6[iVar24].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_116(Var25, iVar24);
						Global_2405072.f_2483.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_114(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_115(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_1245(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1245(iVar1, 1, 1))
		{
			if (!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_35(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_116(struct<10> Param0, int iParam10)
{
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405072.f_2483.f_6[iParam10] };
	Global_2405072.f_2483.f_6[iParam10] = { Param0 };
	if (iParam10 < 4)
	{
		func_116(Var0, iParam10 + 1);
	}
}

void func_117(struct<10> Param0)
{
	Var1.f_2 = 1176256410;
	iVar11 = func_112();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] < iVar11)
		{
			Global_2408006[iVar0] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] == 0)
		{
			Global_2408006[iVar0] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2408006[iVar0] > 0)
		{
			if (Global_2408006[iVar0].f_1 < fVar12)
			{
				fVar12 = Global_2408006[iVar0].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2408006[iVar13] = { Param0 };
	}
}

float func_118(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_1245(iVar11, 1, 1) || (iParam7 == 1 && func_1245(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_119(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_97(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_35(iVar11))
						{
							Var5 = { func_40(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								Var8 = { unk_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.z < -100f)
								{
									Var5.z = Param0.z;
								}
								if (Var8.z < -100f)
								{
									Var8.z = Param0.z;
								}
							}
							fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, 1);
							fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_119(int iParam0)
{
	if (func_1245(iParam0, 0, 1))
	{
		if (!func_121(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_83(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_120(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_83(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_44(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, int iParam2)
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
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (func_36(iParam0, 0))
	{
		return 1;
	}
	if (func_122())
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

bool func_122()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

float func_123(struct<3> Param0)
{
	return func_124(Param0, &(Global_2405072.f_45), &uVar0);
}

float func_124(struct<3> Param0, var uParam3, var uParam4)
{
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (uParam3[iVar0]->f_9)
		{
			fVar1 = 0f;
			switch (uParam3[iVar0]->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*uParam3[iVar0], Param0);
					fVar1 = (fVar1 - (uParam3[iVar0]->f_6 + (IntToFloat(Global_2405072.f_2726) * uParam3[iVar0]->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.x < (*uParam3)[iVar0])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0] - Param0.x));
					}
					else if (Param0.x > uParam3[iVar0]->f_3)
					{
						fVar1 = (fVar1 + (Param0.x - uParam3[iVar0]->f_3));
					}
					if (Param0.y < uParam3[iVar0]->f_1)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_1 - Param0.y));
					}
					else if (Param0.y > uParam3[iVar0]->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.y - uParam3[iVar0]->f_3.f_1));
					}
					if (Param0.z < uParam3[iVar0]->f_2)
					{
						fVar1 = (fVar1 + (uParam3[iVar0]->f_2 - Param0.z));
					}
					else if (Param0.z > uParam3[iVar0]->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.z - uParam3[iVar0]->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_125(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_114(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_118(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_114(fVar4, 0f, func_132(), func_130(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_128(Param0);
	fVar0 = func_114(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_97(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_127(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_114(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_126(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_114(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_114(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_114(SYSTEM::VDIST(Global_2405072.f_509, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_126(struct<3> Param0, var uParam3, var uParam4)
{
	uVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar3, &Var0);
		*uParam3 = SYSTEM::VDIST(Param0.x, Param0.y, 0f, Var0.x, Var0.y, 0f);
		*uParam4 = GAMEPLAY::ABSF((Param0.z - Var0.z));
		return 1;
	}
	return 0;
}

float func_127(struct<3> Param0, int iParam3, int iParam4)
{
	fVar0 = 999999.9f;
	if (func_1245(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1245(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417897.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417897.f_131[iVar2], Param0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_128(struct<3> Param0)
{
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_129(uVar6[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], 1) };
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405072.f_2925)
	{
		if (Global_969031.f_267 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969031.f_267)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969031.f_152[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969031.f_152[iVar2], 0))
					{
						if (func_129(Global_969031.f_152[iVar2]))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(Global_969031.f_152[iVar2], 1) };
							fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_129(var uParam0)
{
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCC6E3B6BB69501F1(Global_1574967[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574967[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCC6E3B6BB69501F1(Global_1574677[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574677[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_130()
{
	if (func_131())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405072.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_131()
{
	if (Global_2405072.f_45.f_65 && !Global_2405072.f_45.f_301)
	{
		if (!func_121(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_132()
{
	if (func_131())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405072.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405072.f_45.f_67)) || Global_2405072.f_45.f_67 == 782665360)
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_133(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_138(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_137(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_135(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_135(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	func_136(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25], Param7, Param10, fParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_136(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	if (Param0.z == Param3.z)
	{
		Param3.z = (Param3.z + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_60(Var0, Var0.x, Var0.y, 0f) };
	Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.z > Param3.z)
	{
		uVar6 = Param3.z;
		uVar7 = Param0.z;
	}
	else
	{
		uVar6 = Param0.z;
		uVar7 = Param3.z;
	}
	*uParam7[0] = { Vector(uVar6, Param0.y, Param0.x) + Var3 };
	*uParam7[1] = { Vector(uVar6, Param0.y, Param0.x) - Var3 };
	*uParam7[2] = { Vector(uVar7, Param0.y, Param0.x) - Var3 };
	*uParam7[3] = { Vector(uVar7, Param0.y, Param0.x) + Var3 };
	*uParam7[4] = { Vector(uVar6, Param3.y, Param3.x) + Var3 };
	*uParam7[5] = { Vector(uVar6, Param3.y, Param3.x) - Var3 };
	*uParam7[6] = { Vector(uVar7, Param3.y, Param3.x) - Var3 };
	*uParam7[7] = { Vector(uVar7, Param3.y, Param3.x) + Var3 };
}

int func_137(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	Var0[0] = { Param0.x, Param0.y, Param0.z };
	Var0[1] = { Param0.x, Param0.y, Param3.z };
	Var0[2] = { Param0.x, Param3.y, Param3.z };
	Var0[3] = { Param0.x, Param3.y, Param0.z };
	Var0[4] = { Param3.x, Param0.y, Param0.z };
	Var0[5] = { Param3.x, Param0.y, Param3.z };
	Var0[6] = { Param3.x, Param3.y, Param3.z };
	Var0[7] = { Param3.x, Param3.y, Param0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25], Param6, Param9, fParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_138(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	Var0[0] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar13], Param4, Param7, fParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_139(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	Var1 = { Param0 };
	iVar4 = func_73(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2411459[iVar4])
	{
		if (func_72(Var1, &(Global_2410189[iVar4][iVar0])))
		{
			*uParam3 = { Global_2410189[iVar4][iVar0] };
			*uParam4 = { Global_2410189[iVar4][iVar0].f_3 };
			*uParam5 = Global_2410189[iVar4][iVar0].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411459[8])
	{
		if (func_72(Var1, &(Global_2410189[8][iVar0])))
		{
			*uParam3 = { Global_2410189[8][iVar0] };
			*uParam4 = { Global_2410189[8][iVar0].f_3 };
			*uParam5 = Global_2410189[8][iVar0].f_6;
			return;
		}
		iVar0++;
	}
}

int func_140(struct<3> Param0)
{
	if (Global_2405072.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405072.f_45.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Param0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_2405072.f_45.f_57)
					{
						return 0;
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
	return 1;
}

int func_141(struct<3> Param0)
{
	switch (Global_2405072.f_2479)
	{
		case 0:
			return func_171(Param0, Global_2405072.f_2458, Global_2405072.f_2461, 0, 0);
			break;
		
		case 1:
			return func_101(Param0, Global_2405072.f_2472, Global_2405072.f_2475, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2405072.f_2472, Global_2405072.f_2475, Global_2405072.f_2478, 0, 1);
			break;
	}
	return 0;
}

int func_142(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = (uParam3[iVar1]->f_3 + fParam5);
		if (SYSTEM::VDIST(*uParam3[iVar1], Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *uParam4[iVar1] };
		Var5 = { uParam4[iVar1]->f_3 };
		fVar8 = uParam4[iVar1]->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST(uParam1[iVar0]->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_62(&Var1, uParam1[iVar0]->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_144(int iParam0)
{
	switch (func_99())
	{
		case 0:
			if (!func_145(iParam0))
			{
				if (Global_1590535[iParam0] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_145(int iParam0)
{
	return Global_1590535[iParam0].f_196 != 0;
}

int func_146(int iParam0)
{
	if (func_83(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_147(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405072.f_2617[iVar0], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_148(var uParam0, bool bParam1)
{
	if (func_89(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_62(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 0, fVar4);
			if (func_90(Var1, &uVar0) || func_89(Var1))
			{
				Var1 = { *uParam0 };
				func_62(&Var1, Global_2405072.f_587, Global_2405072.f_590, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_149(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_151(Param0, fParam3, iParam4, iParam5, 0) || func_150(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_150(struct<3> Param0, int iParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417897.f_461[iVar0][iVar1].f_4 == 0)
				{
					if (func_75(Param0, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 1036831949))
					{
						if (func_1245(iVar2, 0, 1) && func_1245(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1245(iVar1, 0, 1) && func_1245(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1245(iVar1, 0, 1) && func_1245(iParam4, 0, 1))
				{
					if (Global_2417897.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417897.f_131[iVar0], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_40(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417897.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417897.f_131[iVar0], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1245(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_40(iVar1), Param0) < 1f)
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

int func_152(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405072.f_3 = 0;
	if (!func_149(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405072.f_3++;
		if (bParam5)
		{
			if (func_33(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_156(Param0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_74(Param0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_33(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
				if (!func_156(Param0, fParam12))
				{
					Global_2405072.f_3++;
					if (!func_153(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2405072.f_3++;
						if (!func_74(Param0, 1056964608))
						{
							Global_2405072.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			}
		}
		else if (func_33(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
			if (!func_156(Param0, fParam12))
			{
				Global_2405072.f_3++;
				if (!func_153(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2405072.f_3++;
					if (!func_74(Param0, 1056964608))
					{
						Global_2405072.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405072.f_3 = (Global_2405072.f_3 + Global_2405072.f_2);
		}
	}
	return 0;
}

int func_153(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1245(iVar1, 1, 1) && func_35(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_155(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_154(func_40(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
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

bool func_154(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.x = SYSTEM::SIN(fParam6);
	Var0.y = SYSTEM::COS(fParam6);
	Var0.z = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.z = Param3.z;
	Var3.z = (Var3.z + fParam9);
	Param3.z = (Param3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param3, Var3, fParam8, 0, 1);
}

bool func_155(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_156(struct<3> Param0, float fParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1245(iVar1, 1, 1) && func_35(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_97(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_155(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_40(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(int iParam0)
{
	if ((Global_2405072.f_486 == 9 || Global_2405072.f_486 == 9) || (Global_2405072.f_486 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_158(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1245(iVar1, 1, 1))
			{
				if ((!func_36(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_40(iVar1), Param0, 1) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (((func_97(iParam0, 1) || func_162(iParam0)) || func_161(iParam0, 0)) || func_160(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	if (!func_1245(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590535[iParam0].f_35;
}

int func_161(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

void func_163(struct<3> Param0, var uParam3, var uParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*uParam3[iVar0] = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*uParam4[iVar0] = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_12, 11))
			{
				if (SYSTEM::VMAG(*uParam3[iVar0]) == 0f || SYSTEM::VDIST(Global_2359721[iVar1].f_3, Param0) < SYSTEM::VDIST(*uParam3[iVar0], Param0))
				{
					Var3 = { Global_2359721[iVar1].f_3 };
					Var3.f_3 = Global_2359721[iVar1].f_6.f_2;
					func_165(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*uParam3[iVar0]) == 0f || SYSTEM::VDIST(Global_262145.f_5999[iVar1], Param0) < SYSTEM::VDIST(*uParam3[iVar0], Param0))
			{
				Var3 = { Global_262145.f_5999[iVar1] };
				Var3.f_3 = 3f;
				func_165(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*uParam3[iVar0]) == 0f || SYSTEM::VDIST(Global_262145.f_6045[iVar1][iVar2], Param0) < SYSTEM::VDIST(*uParam3[iVar0], Param0))
				{
					Var3 = { Global_262145.f_6045[iVar1][iVar2] };
					Var3.f_3 = 3f;
					func_165(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1311025[iVar1].f_1 + Global_1311025[iVar1].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *uParam4[iVar0] + uParam4[iVar0]->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*uParam4[iVar0]) == 0f || SYSTEM::VDIST(Var17, Param0) < SYSTEM::VDIST(Var20, Param0))
			{
				Var7 = { Global_1311025[iVar1].f_1 };
				Var7.f_3 = { Global_1311025[iVar1].f_4 };
				Var7.f_6 = Global_1311025[iVar1].f_7;
				Var7.f_7 = { Global_2359397[iVar1] };
				func_164(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	Global_2412464 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_164(&Global_2412464, uParam1, iParam2 + 1);
	}
}

void func_165(var uParam0, var uParam1, int iParam2)
{
	Global_2412460 = { *uParam1[iParam2] };
	*uParam1[iParam2] = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_165(&Global_2412460, uParam1, iParam2 + 1);
	}
}

void func_166(var uParam0, var uParam1)
{
	if (Global_2405072.f_2254 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_2254)
		{
			if (func_167(Global_2405072.f_2255[iVar0], uParam0))
			{
				fVar4 = Global_2405072.f_2255[iVar0].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2405072.f_2255[iVar0] };
					fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.y);
				}
				func_113(Global_2405072.f_2255[iVar0], fVar4, uParam0, uParam1, 0, -1);
				Global_2405072.f_2483++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405072.f_2880)
	{
		func_107(&(Global_2405072.f_2483.f_6[0]), &(Global_2405072.f_2483.f_6[1]), &(Global_2405072.f_2483.f_6[2]));
	}
}

int func_167(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_66(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_66(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_168(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, var uParam8)
{
	func_102(&Param0, &Param3);
	fVar0 = (Param3.x - Param0.x);
	*uParam6 = (Param0.x + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.y;
	uParam6->f_2 = Param0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.y;
	uParam7->f_2 = Param3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_169()
{
	return Global_1310987.f_4;
}

void func_170(var uParam0, var uParam1)
{
	func_205();
	func_198(uParam0, uParam1);
}

bool func_171(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.z = 0f;
		Param3.z = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.z > Param3.z)
		{
			Param0.z = Param3.z;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.z < Param3.z)
		{
			Param0.z = Param3.z;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

void func_172(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		while (func_194(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_173(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_173(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_193(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412474.f_162 = 0;
	Global_2412474.f_163 = 0;
	Global_2412474.f_164 = -99;
	Global_2412474.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412474[iVar16] = { 0f, 0f, 0f };
		Global_2412474.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_80(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412474.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412474.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar8)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_148(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_192(Var1))
									{
										Var1 = { func_188(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_74(Var1, 5f))
											{
												if (Var1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_187(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_193(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_183(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_86(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_182(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_33(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_33(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_180(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_179(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162)
																										{
																											Global_2412474[iVar16] = { 0f, 0f, 0f };
																											Global_2412474.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412474.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412474.f_162 == 0)
																									{
																										Global_2412474[0] = { Var1 };
																										Global_2412474.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412474.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar16], uParam2->f_35))
																												{
																													func_178(Var1, fVar4, iVar16);
																													iVar16 = Global_2412474.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412474.f_162++;
																									if (Global_2412474.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412474[Global_2412474.f_162] = { Var1 };
																									Global_2412474.f_121[Global_2412474.f_162] = fVar4;
																									Global_2412474.f_162++;
																									if (func_187(Var1, uParam2))
																									{
																										Global_2412474.f_163++;
																									}
																									if (Global_2412474.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412474.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412474.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
						{
							func_176(0, uParam2);
						}
						iVar26 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412474[0] };
						uVar30 = Global_2412474.f_121[0];
						Global_2412474[0] = { Global_2412474[iVar26] };
						Global_2412474.f_121[0] = Global_2412474.f_121[iVar26];
						Global_2412474[iVar26] = { Var27 };
						Global_2412474.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412474[0] };
						*uParam1 = Global_2412474.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_175(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_86(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_193(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_174(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412474.f_164 = iVar8;
	}
	return 0;
}

void func_174(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*uParam0[iVar2], Param3);
		if (fVar1 < fVar0)
		{
			if (!func_149(*uParam0[iVar2], 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *uParam0[iVar3] };
		*uParam2 = uParam0[iVar3]->f_3;
	}
}

void func_175(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_188(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_192(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_176(int iParam0, var uParam1)
{
	if (!func_187(Global_2412474[iParam0], uParam1))
	{
		Global_2412474.f_162 = (Global_2412474.f_162 - 1);
		func_177(iParam0);
		if (Global_2412474.f_162 > Global_2412474.f_163)
		{
			func_176(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_176(iParam0 + 1, uParam1);
	}
}

void func_177(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412474[iParam0] = { Global_2412474[iParam0 + 1] };
			Global_2412474.f_121[iParam0] = Global_2412474.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_178(struct<3> Param0, float fParam3, int iParam4)
{
	Var0 = { Global_2412474[iParam4] };
	uVar3 = Global_2412474.f_121[iParam4];
	Global_2412474[iParam4] = { Param0 };
	Global_2412474.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412474.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_178(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_179(struct<3> Param0, float fParam3, float fParam4)
{
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_119(iVar5))
		{
			Var1 = { func_40(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_180(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_1245(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_35(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_44(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, 0) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_181(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_75(func_40(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_181(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	if (func_75(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_77(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.y, 0f };
	func_63(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.y, 0f };
	func_63(&Var23, 0f, 0f, fParam3);
	Var26 = { (GAMEPLAY::ABSF((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
	func_63(&Var26, 0f, 0f, fParam3);
	Var1[0] = { Param0 + Var20 + Var26 };
	Var1[0].f_2 = (Var1[0].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[1] = { Param0 + Var20 - Var26 };
	Var1[1].f_2 = (Var1[1].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[2] = { Param0 + Var23 + Var26 };
	Var1[2].f_2 = (Var1[2].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	Var1[3] = { Param0 + Var23 - Var26 };
	Var1[3].f_2 = (Var1[3].f_2 + (0.5f * GAMEPLAY::ABSF((Var17.z - Var14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_75(Var1[iVar0], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_181(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_181(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_181(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_186(Param0, fParam3, iParam4, iParam5, iParam6) || func_184(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_184(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_185(Param0, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_4))
				{
					if (func_181(Param0, fParam3, iParam4, Global_2417897.f_461[iVar0][iVar1], Global_2417897.f_461[iVar0][iVar1].f_3, Global_2417897.f_461[iVar0][iVar1].f_4, 0))
					{
						if (func_1245(iVar2, 0, 1) && func_1245(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_185(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	fVar0 = func_82(iParam3, 1008981770);
	fVar1 = func_82(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_186(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1245(iVar1, 0, 1) && func_1245(iParam5, 0, 1))
			{
				if (Global_2417897.f_261[iVar0])
				{
					if (func_75(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_75(func_40(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417897.f_261[iVar0])
			{
				if (func_75(Global_2417897.f_131[iVar0], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1245(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_75(func_40(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_187(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_171(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_101(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_188(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_191(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_190(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_189(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_189(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_191(Param0, *uParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.z == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA0F8A7517A273C05(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_189(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_189(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_189(int iParam0, float fParam1)
{
	func_77(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_190(struct<3> Param0)
{
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Param0.x, Param0.y, (Param0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_191(struct<3> Param0, float fParam3, struct<3> Param4)
{
	Var0 = { 0f, 1f, 0f };
	func_63(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_59(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_192(struct<3> Param0)
{
	iVar1 = func_73(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412181[iVar1])
	{
		if (func_72(Param0, &(Global_2411478[iVar1][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412181[8])
	{
		if (func_72(Param0, &(Global_2411478[8][iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_193(var uParam0, bool bParam1)
{
	bVar0 = false;
	if (Global_2405072.f_26.f_18)
	{
		switch (Global_2405072.f_26.f_17)
		{
			case 0:
				if (func_171(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_101(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_64(*uParam0, Global_2405072.f_26.f_10, Global_2405072.f_26.f_13, Global_2405072.f_26.f_16, Global_2405072.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_194(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405072.f_1746 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_86(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_193(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412474.f_162 = 0;
		Global_2412474.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412474[iVar6] = { 0f, 0f, 0f };
			Global_2412474.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_195(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405072.f_1746)
		{
			iVar1 = Global_2405072.f_2152[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405072.f_1747[iVar1] };
				fVar5 = Global_2405072.f_1747[iVar1].f_3;
				if (SYSTEM::VMAG(Var2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var2.x, Var2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_183(Var2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_86(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_182(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_33(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_33(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_180(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_179(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162)
															{
																Global_2412474[iVar6] = { 0f, 0f, 0f };
																Global_2412474.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412474.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412474.f_162 == 0)
														{
															Global_2412474[0] = { Var2 };
															Global_2412474.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412474.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(Var2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412474[iVar6], uParam2->f_35))
																	{
																		func_178(Var2, fVar5, iVar6);
																		iVar6 = Global_2412474.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
													else
													{
														Global_2412474[Global_2412474.f_162] = { Var2 };
														Global_2412474.f_121[Global_2412474.f_162] = fVar5;
														Global_2412474.f_162++;
														if (Global_2412474.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405072.f_1746;
															}
															else if (Global_2412474.f_162 == 40)
															{
																iVar0 = Global_2405072.f_1746;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412474.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412474.f_163 > 0 && !Global_2412474.f_163 == Global_2412474.f_162)
				{
					func_176(0, uParam2);
				}
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412474.f_162);
				Var15 = { Global_2412474[0] };
				uVar18 = Global_2412474.f_121[0];
				Global_2412474[0] = { Global_2412474[iVar14] };
				Global_2412474.f_121[0] = Global_2412474.f_121[iVar14];
				Global_2412474[iVar14] = { Var15 };
				Global_2412474.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412474[0] };
				*uParam1 = Global_2412474.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_195(struct<3> Param0)
{
	fVar0 = -1f;
	while (iVar2 < Global_2405072.f_1746)
	{
		uVar1 = func_196(Param0, fVar0, &fVar0);
		Global_2405072.f_2152[iVar2] = uVar1;
		iVar2++;
	}
}

int func_196(struct<3> Param0, float fParam3, float fParam4)
{
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405072.f_1746)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405072.f_1747[iVar3]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_197(int iParam0)
{
	return iParam0 == 50;
}

void func_198(var uParam0, var uParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_2405072.f_2466 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405072.f_2464 = 1;
	Global_2405072.f_2467 = NETWORK::GET_NETWORK_TIME();
}

void func_199()
{
	func_204();
	func_203();
	func_202();
	func_201();
	func_200();
}

void func_200()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2408006[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_201()
{
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405072.f_2483.f_90[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_202()
{
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405072.f_2483.f_57[iVar4] = { Var0 };
		iVar4++;
	}
}

void func_203()
{
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405072.f_2483.f_6[iVar10] = { Var0 };
		iVar10++;
	}
}

void func_204()
{
	Var0.f_3 = -1;
	Global_2405072.f_2483 = { Var0 };
}

void func_205()
{
	if (Global_2405072.f_2464)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_2466)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405072.f_2464 = 0;
	}
}

int func_206(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_207()
{
	iVar0 = func_1111();
	Var1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			Var1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			Var1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			Var1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			Var1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return Var1;
}

int func_208()
{
	switch (Local_80.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_209())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_209()
{
	uVar0 = func_217();
	iVar1 = func_216();
	if (func_1111() == 0)
	{
		iVar7 = Global_1575003;
	}
	else if (func_1111() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1575006;
	}
	switch (func_1111())
	{
		case 1:
			func_215(&Var2, &uVar6, &uVar5);
			func_214(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_213((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_211(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_215(&Var2, &uVar6, &uVar5);
			func_214(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_213((iVar8 - 1), &Var2, &uVar6, &uVar5);
				if (iVar8 <= 2)
				{
					iVar1 = 2072724299;
				}
				else
				{
					iVar1 = func_216();
				}
				func_211(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_215(&Var2, &uVar6, &uVar5);
			func_214(0, uVar0, Var2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_216();
				}
				else
				{
					iVar1 = 850468060;
				}
				func_213((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_211(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_215(&Var2, &uVar6, &uVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_213((iVar8 - 1), &Var2, &uVar6, &uVar5);
				func_211(iVar8, iVar1, Var2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_210())
	{
		return 1;
	}
	return 0;
}

int func_210()
{
	switch (func_1111())
	{
		case 1:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[1]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[4])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[5])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[6])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[7])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[8])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_80.f_11, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(Param2, 2f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_80.f_11), iParam0);
				}
				if (func_33(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_212(&(Local_80.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), -2084633992, 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 42, 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), Param2, uParam6, 0, 0);
						if (func_1111() == 2)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_213(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_1111())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*uParam2 = 252.5942f;
					*uParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*uParam2 = 47.6051f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*uParam2 = 107.9506f;
					*uParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*uParam2 = 323.9433f;
					*uParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*uParam2 = 357.3127f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*uParam2 = 219.4789f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*uParam2 = 62.113f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*uParam2 = 28.2234f;
					*uParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*uParam2 = 65.8332f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*uParam2 = 323.2079f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*uParam2 = 296.486f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*uParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*uParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*uParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*uParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*uParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*uParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*uParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*uParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*uParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*uParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_214(int iParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, int iParam7)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(uParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_80.f_11, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(Param2, 2f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_80.f_11), iParam0);
				}
				if (func_33(Param2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_212(&(Local_80.f_13[iParam0]), 26, iParam1, Param2, uParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1, 0);
						if (func_1111() == 1)
						{
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 10, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 0, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 0);
						}
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), -1357824103, 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 42, 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_80.f_13[iParam0]), Param2, uParam6, 0, 0);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	switch (func_1111())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*uParam1 = 346.3493f;
			*uParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*uParam1 = 155.4586f;
			*uParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*uParam1 = 235.3724f;
			*uParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*uParam1 = 22.5507f;
			*uParam2 = 1f;
			break;
	}
}

int func_216()
{
	switch (func_1111())
	{
		case 0:
			iVar0 = 1430544400;
			break;
		
		case 1:
			iVar0 = -220552467;
			break;
		
		case 2:
			iVar0 = -39239064;
			break;
		
		case 3:
			iVar0 = -1275859404;
			break;
	}
	return iVar0;
}

int func_217()
{
	switch (func_1111())
	{
		case 0:
			iVar0 = 1268862154;
			break;
		
		case 1:
			iVar0 = -265970301;
			break;
		
		case 2:
			iVar0 = -236444766;
			break;
		
		case 3:
			iVar0 = 2047212121;
			break;
	}
	return iVar0;
}

int func_218(var uParam0)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_219(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_220()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_338, 29))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_338, 28))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 25))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_339, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 26))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 26);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 26))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 27))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							GAMEPLAY::SET_BIT(&iLocal_338, 27);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(iLocal_338, 27))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 25);
					}
				}
			}
		}
	}
}

void func_221(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	if (func_367(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_365() || iParam2 == 28)
	{
		if (func_310(uParam1, iParam2, uParam3, Global_1574185, 0, func_363(), sParam7))
		{
			func_309(1);
			if ((!func_307() && !func_305()) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
			{
				if (func_304())
				{
					func_299();
				}
				else
				{
					GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_298(1);
						Global_1574185 = 0;
						iVar54 = -1;
						if (Global_1574406 != 1)
						{
							func_297(uParam1, 0, 0);
							if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
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
								if (func_1245(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_36(iVar35, 0))
									{
										if ((func_296(iVar35) || Global_2425662[iVar35].f_236 != -1) || func_145(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_295(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_292(PLAYER::PLAYER_ID(), 0) && func_291(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_290())
							{
								if (func_1245(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_18();
								}
							}
							else
							{
								iVar35 = uParam0[iVar52]->f_1;
							}
							if ((func_289(iVar35) && func_284(iVar35, iParam2)) && func_1245(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590535[iVar44].f_211.f_6;
								Var38 = { func_279(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*uParam4[iVar52] = { func_47(iVar35) };
								iVar37 = func_273(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574185++;
								if (uParam0[iVar52]->f_22 != -1f)
								{
									fVar45 = uParam0[iVar52]->f_22;
								}
								if (uParam0[iVar52]->f_31 != -1)
								{
									iVar46 = uParam0[iVar52]->f_31;
								}
								if (uParam0[iVar52]->f_41 != -1)
								{
									iVar47 = uParam0[iVar52]->f_41;
								}
								iVar43 = uParam0[iVar52]->f_9;
								if ((uParam0[iVar52]->f_9 != -1 || uParam0[iVar52]->f_22 != -1f) || uParam0[iVar52]->f_31 != -1)
								{
									if (!func_290())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_268(&iVar43, &fVar45, uParam0[iVar52]->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_267(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = uParam0[iVar52]->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_260(iVar35, 0);
								if (bVar34)
								{
									if (func_19(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44].f_1 = iVar53;
								if (uParam0[iVar52]->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, uParam0[iVar52]->f_39, 16);
								}
								if (func_259(iParam5))
								{
									func_258(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								else
								{
									func_258(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, uParam0[iVar52]->f_40, iVar48, bParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1245(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_289(iVar35))
							{
								if (func_1245(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590535[iVar44].f_211.f_6;
									Var38 = { func_279(iVar35) };
									*uParam4[iVar52] = { func_47(iVar35) };
									iVar37 = func_273(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574185++;
									iVar51 = func_260(iVar35, 1);
									if (bVar34)
									{
										if (func_19(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44].f_1 = iVar53;
									func_235(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_232(uParam3, uParam1, iParam2);
						}
						func_231(&(uParam3->f_21));
						func_230();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_229(uParam3, uParam1);
							func_228(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_229(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_224(uParam3))
						{
							Global_1574406 = 1;
						}
						func_222(uParam3);
						if (Global_1574406 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574406 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_230();
			func_298(0);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_222(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_231(&(uParam0->f_21));
		func_223(0);
	}
}

void func_223(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574406 != 2)
		{
			Global_1574406 = 2;
		}
	}
	else
	{
		switch (Global_1574406)
		{
			case 0:
				Global_1574406 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_224(var uParam0)
{
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_18() && func_1245(iVar15, 0, 1))
	{
		Var2 = { func_47(iVar15) };
		iVar1 = func_227(uParam0, uParam0->f_37);
		if (func_226(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_225(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_225(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_225(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_225(uParam0, iVar0, 0);
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

void func_225(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1] = iParam2;
}

bool func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_227(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1];
}

void func_228(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_229(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_230()
{
	if (Global_1574406 != 0)
	{
		Global_1574406 = 0;
	}
}

void func_231(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_232(var uParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1245(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0].f_1 != -1)
				{
					iVar1 = func_234(uParam0->f_38[iVar0], 0, iParam2);
					func_233(uParam1, uParam0->f_38[iVar0].f_1, iVar1, Global_1590535[iVar0].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_233(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_234(int iParam0, bool bParam1, int iParam2)
{
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

void func_235(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	if (iParam4 >= func_257() && iParam4 < func_256())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574187)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_255("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_255(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_255("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_255("");
			if (uParam3->f_108 == 6)
			{
				func_255("");
			}
			else
			{
				func_255(&sParam5);
			}
			func_240(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_239(uParam3))
			{
				func_238("DPAD_FRIEND");
			}
			else if (func_237(uParam3))
			{
				func_238("DPAD_FRIEND");
			}
			else if (func_236(uParam3))
			{
				func_238("DPAD_CREW");
			}
			else
			{
				func_238("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_236(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_237(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_238(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

int func_239(var uParam0)
{
	if (func_237(uParam0) && func_236(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_240(var uParam0, int iParam1)
{
	if (func_254(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_245(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2425662[iParam1].f_413, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_241())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_241()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_243() || func_242())
		{
			return 1;
		}
	}
	return 0;
}

var func_242()
{
	return Global_2450632.f_15;
}

int func_243()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_242();
	}
	return func_244(Global_4456448.f_194990);
}

int func_244(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4990[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_245(int iParam0)
{
	if ((func_1245(iParam0, 0, 1) && func_249()) && func_246(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0, bool bParam1)
{
	return func_247(iParam0, bParam1, 1);
}

int func_247(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_248(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_18() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1628237[iParam0].f_11 != func_18())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_249()
{
	if (func_162(PLAYER::PLAYER_ID()) || func_253())
	{
		if (!func_250(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_250(int iParam0)
{
	if (func_252(iParam0) == 236 || func_252(iParam0) == 150)
	{
		return func_251(iParam0);
	}
	return 0;
}

int func_251(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

int func_252(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_253()
{
	switch (func_291(PLAYER::PLAYER_ID()))
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

int func_254(int iParam0)
{
	if (func_241())
	{
		if (func_1245(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1245(iParam0, 0, 1) && func_249()) && func_248(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_255(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_256()
{
	if (Global_1574187)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_257()
{
	iVar0 = 0;
	if (Global_1574187)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_258(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	if (iParam3 >= func_257() && iParam3 < func_256())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574187)
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
		if (Global_1574406 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_255("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_238(sParam16);
				}
				else
				{
					func_255(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_255("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_290())
				{
					func_255("");
				}
				else if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 5 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 7 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_TWO_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 8 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
					UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_NG_CASH");
						UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam10, 1);
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_238(&(uParam2->f_104));
					}
					else
					{
						func_255("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
					UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_255("");
				}
				if (uParam2->f_108 == 6)
				{
					func_255("");
				}
				else
				{
					func_255(&sParam4);
				}
				func_240(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_255("");
					func_255("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_239(uParam2))
				{
					func_238("DPAD_FRIEND");
				}
				else if (func_237(uParam2))
				{
					func_238("DPAD_FRIEND");
				}
				else if (func_236(uParam2))
				{
					func_238("DPAD_CREW");
				}
				else
				{
					func_238("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_259(int iParam0)
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

int func_260(int iParam0, bool bParam1)
{
	iVar0 = 116;
	if ((!bParam1 && func_162(iParam0)) && !func_265(iParam0))
	{
		iVar0 = func_264();
	}
	iVar1 = func_263(iParam0);
	if (!iVar1 == -1)
	{
		return func_261(iVar1);
	}
	return iVar0;
}

int func_261(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_262(iParam0);
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

var func_262(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_263(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_46(iParam0)];
		}
	}
	return -1;
}

int func_264()
{
	return 21;
}

bool func_265(int iParam0)
{
	return func_266(iParam0, 20);
}

bool func_266(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

char* func_267(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (GAMEPLAY::_0xD3D15555431AB793())
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
			if (GAMEPLAY::_0xD3D15555431AB793())
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

int func_268(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_272(iParam3))
	{
		*fParam1 = (func_269(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_259(iParam3))
	{
		*fParam1 = (func_269(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_269(int iParam0, int iParam1)
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
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_271(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_270(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_270(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_271(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_272(int iParam0)
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

int func_273(int iParam0)
{
	iVar0 = func_276(iParam0);
	if (iVar0 == -1)
	{
		func_274(iParam0, 1);
		return 0;
	}
	Global_1389078[iVar0].f_4 = 1;
	return Global_1389078[iVar0].f_2;
}

void func_274(int iParam0, bool bParam1)
{
	if (!func_1245(iParam0, 0, 1))
	{
		return;
	}
	if (func_276(iParam0) != -1)
	{
		return;
	}
	if (Global_1389241)
	{
		if (iParam0 == Global_1389241.f_1)
		{
			return;
		}
	}
	if (func_275(iParam0))
	{
		return;
	}
	if (Global_1389279 >= 32)
	{
		return;
	}
	Global_1389246[Global_1389279] = iParam0;
	Global_1389279++;
	if (bParam1)
	{
	}
}

int func_275(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389279)
	{
		if (Global_1389246[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_276(int iParam0)
{
	if (!func_1245(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389239 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389239)
	{
		if (Global_1389078[iVar0].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iVar0].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389078[iVar0].f_2))
			{
				return iVar0;
			}
			func_277(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_277(int iParam0)
{
	if (iParam0 >= Global_1389239)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389078[iParam0].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389078[iParam0].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389078[iParam0].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389078[iParam0].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389239)
	{
		Global_1389078[iVar32] = { Global_1389078[iVar33] };
		iVar32++;
		iVar33++;
	}
	func_278(&(Global_1389078[iVar32]));
	Global_1389239 = (Global_1389239 - 1);
}

void func_278(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_279(int iParam0)
{
	if (func_1245(iParam0, 0, 1))
	{
		Global_2513218 = { func_47(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_226(Global_2513218))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2513218))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_283(&Global_2513218))
		{
			Global_2513148 = { func_281(iParam0) };
			func_280(&Global_2513148, &Var0);
		}
	}
	return Var0;
}

void func_280(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_281(int iParam0)
{
	if (func_282(iParam0))
	{
		return Global_1312909[PLAYER::PLAYER_ID()];
	}
	Var0 = { func_47(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_282(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_283(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_288(iParam0) || func_287(iParam0)) || func_286(iParam0))
		{
			return 0;
		}
	}
	if (!func_285(iParam0))
	{
		return 0;
	}
	if ((!func_296(iParam0) && Global_2425662[iParam0].f_236 == -1) && !func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_285(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_142, 22);
}

bool func_286(int iParam0)
{
	if (func_288(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8);
}

int func_287(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 9));
	}
	return 0;
}

bool func_288(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 2);
}

int func_289(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_36(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iVar0].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_290()
{
	switch (func_291(PLAYER::PLAYER_ID()))
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
	switch (func_252(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_265(PLAYER::PLAYER_ID()))
	{
		switch (func_291(PLAYER::PLAYER_ID()))
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
	if (func_250(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_291(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_292(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 && func_293(Global_1628237[iParam0].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1)
	{
		if (func_293(Global_1628237[iParam0].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0)
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
	return func_294(iParam0, 0);
	return 0;
}

int func_294(int iParam0, int iParam1)
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

void func_295(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1245(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar1, 0))
			{
				if ((func_296(iVar1) || Global_2425662[iVar1].f_236 != -1) || func_145(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
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

int func_296(int iParam0)
{
	if (func_1245(iParam0, 0, 1))
	{
		if (func_1245(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_291(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_297(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_298(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377167.f_2 == 0)
		{
			Global_1377167.f_2 = 1;
		}
	}
	else if (Global_1377167.f_2 == 1)
	{
		Global_1377167.f_2 = 0;
	}
}

void func_299()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1))
	{
		if (func_303())
		{
			func_300();
		}
	}
}

void func_300()
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2439138.f_2723[iVar0].f_2 != 0)
		{
			Global_2439138.f_2723[iVar0].f_2 = 5;
			func_301(&(Global_2439138.f_2723[iVar0].f_69), 1);
		}
		iVar0++;
	}
}

void func_301(var uParam0, int iParam1)
{
	func_302(uParam0, iParam1);
}

void func_302(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_303()
{
	return Global_2439138.f_2723[0].f_1 != 0;
}

int func_304()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 0) && func_303())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 1) && func_303())
	{
		return 1;
	}
	return 0;
}

int func_305()
{
	if (func_303())
	{
		if (func_306(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_306(int iParam0)
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

int func_307()
{
	if (func_303())
	{
		if (func_308(Global_2439138.f_2723[0].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_308(int iParam0)
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
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_309(int iParam0)
{
	if (Global_1377167.f_1 != Global_1377167)
	{
		Global_1377167.f_1 = Global_1377167;
	}
	if (Global_1377167 != iParam0)
	{
		Global_1377167 = iParam0;
	}
}

int func_310(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_362(iParam1);
	fVar7 = func_361();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_360())
		{
			if (func_359() > 0 && Global_1574187)
			{
				UI::_0x25F87B30C382FCA7();
				UI::_0x55598D21339CB998(fVar7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					UI::HIDE_HELP_TEXT_THIS_FRAME();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_344())
		{
			func_343(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 26))
	{
		func_343(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_359() == 1)
		{
			func_342(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_343(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_359() == 0 && !bParam5))
		{
			func_343(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_341();
				if (iParam1 == 27 || iParam1 == 28)
				{
					UI::_0x25F87B30C382FCA7();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_341();
					if (iParam1 == 27 || iParam1 == 28)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_0x55598D21339CB998(fVar7);
				if (func_342(bVar6, uParam0, 0))
				{
					func_297(uParam0, 0, 0);
					sVar4 = func_339(iParam1, &(Global_4456448.f_194997), bParam4);
					Var0 = { func_337(iParam1) };
					if (bParam4)
					{
						func_334(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_327(uParam0, func_331(uParam2), func_328(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_320(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_318(uParam0, sVar9, func_319(), -1);
					}
					else if (func_241())
					{
						uParam2->f_34 = Global_1574186;
						func_334(uParam0, sVar4, &Var0, 1, -1, Global_1574186, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_311(iParam1);
						uParam2->f_34 = Global_1574186;
						func_334(uParam0, sVar4, "", 0, iVar8, Global_1574186, 1);
					}
					else
					{
						iVar8 = func_311(iParam1);
						func_334(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					GAMEPLAY::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574185 = uParam3;
				Global_1574184 = 1;
				UI::_0x55598D21339CB998(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574186)
					{
						GAMEPLAY::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_311(int iParam0)
{
	iVar0 = -1;
	if (func_317())
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
			if (func_316(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_315(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_314(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_312())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_312()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_42();
	}
	return func_313(Global_4456448.f_194990);
}

int func_313(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_314(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 4;
}

bool func_315(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

bool func_316(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_317()
{
	return Global_4456448.f_1 == 0;
}

void func_318(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_238(sParam1);
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_238("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_319()
{
	switch (func_291(PLAYER::PLAYER_ID()))
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

char* func_320(var uParam0)
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
	switch (func_291(PLAYER::PLAYER_ID()))
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
			if (func_323())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_322(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_322(1))
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
			if (func_321(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_321(int iParam0)
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

bool func_322(bool bParam0)
{
	return func_246(PLAYER::PLAYER_ID(), bParam0);
}

bool func_323()
{
	return (func_326() && func_324(func_325()));
}

bool func_324(int iParam0)
{
	return func_248(iParam0, 1);
}

int func_325()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35;
}

bool func_326()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 148;
}

void func_327(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_238(sParam1);
		}
		else if (func_252(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		func_238("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_328(var uParam0)
{
	iVar0 = func_252(PLAYER::PLAYER_ID());
	if (func_330())
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
			switch (func_329())
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

int func_329()
{
	if (func_252(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2537071.f_5045;
	}
	return -1;
}

bool func_330()
{
	return Global_1590408;
}

char* func_331(var uParam0)
{
	iVar0 = func_252(PLAYER::PLAYER_ID());
	if (func_330())
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
			if (func_333() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_333() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_329())
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
			if (func_332() == 1)
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

int func_332()
{
	return Global_2537071.f_5048;
}

int func_333()
{
	if (func_252(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2537071.f_5043;
	}
	return -1;
}

void func_334(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_255(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_238(sParam1);
		}
		if (func_360() && iParam6)
		{
			if (func_336())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("LBD_DPD_CNT");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		}
		else
		{
			func_238(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_335(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_42())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_335(int iParam0)
{
	if (func_316(iParam0) || func_315(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_336()
{
	return Global_1574187;
}

struct<4> func_337(int iParam0)
{
	StringCopy(&Var0, "", 16);
	if (func_338(PLAYER::PLAYER_ID()) || func_314(PLAYER::PLAYER_ID()))
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
			StringIntConCat(&Var0, Global_4456448.f_204, 16);
			break;
	}
	if (func_241() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_204, 16);
	}
	return Var0;
}

bool func_338(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 5;
}

char* func_339(int iParam0, char* sParam1, bool bParam2)
{
	if (iParam0 == 20 && (!func_241() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_340();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574425 == 1)
		{
			Global_1574425 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574425 == 0)
		{
			Global_1574425 = 1;
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

char* func_340()
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

void func_341()
{
	Global_42351 = 1;
}

bool func_342(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_343(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574185 = 0;
	func_230();
	Global_1574184 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_231(&(uParam1->f_19));
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4592), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam1->f_33, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	UI::_0x55598D21339CB998(0f);
}

int func_344()
{
	if (func_358())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (!func_355())
	{
		return 0;
	}
	if (!func_353())
	{
		return 0;
	}
	if (func_352(8, -1))
	{
		return 0;
	}
	if (func_359() == 2)
	{
		return 0;
	}
	if (Global_2537071.f_4543)
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	else if (!func_83(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0] > 0)
	{
		return 0;
	}
	if (((func_350(1) || func_348(1)) || Global_22211.f_124) || Global_22211)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_347() && Global_1695468 == 2)
	{
		return 0;
	}
	if (func_121(PLAYER::PLAYER_ID()) && !func_347())
	{
		return 0;
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (Global_1662011)
	{
		return 0;
	}
	if (func_346(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370230)
	{
		return 0;
	}
	if ((Global_1688696.f_718.f_5 || Global_1691522.f_718.f_5) || Global_1687724.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1696433.f_724.f_5 || Global_1696433.f_744.f_724.f_5) || Global_1696433.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (func_345(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370265 || Global_1370266) || Global_1370267)
	{
		return 0;
	}
	return 1;
}

bool func_345(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310.f_4, 6);
}

bool func_346(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_45, iParam0);
}

bool func_347()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1695469, 0));
}

int func_348(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_349(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22211.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_349(int iParam0)
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == 100416529 || iVar0 == 205991906) || iVar0 == -952879014) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_350(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

bool func_351()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

bool func_352(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

int func_353()
{
	if (func_354() == 0)
	{
		return 1;
	}
	return 0;
}

int func_354()
{
	return Global_1312467.f_18;
}

int func_355()
{
	if (func_356())
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
	if (GAMEPLAY::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_356()
{
	return Global_1312440;
}

bool func_357()
{
	return Global_1590535[PLAYER::PLAYER_ID()] == 5;
}

bool func_358()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_359()
{
	return Global_1377170.f_68;
}

int func_360()
{
	if (Global_1574186 > 16)
	{
		return 1;
	}
	return 0;
}

float func_361()
{
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_362(int iParam0)
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

int func_363()
{
	if (func_364(PLAYER::PLAYER_ID()))
	{
		return Global_1319101;
	}
	return 0;
}

int func_364(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_36(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_365()
{
	if (func_363())
	{
		return 1;
	}
	if (func_286(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_330())
	{
		return 1;
	}
	if (func_162(PLAYER::PLAYER_ID()))
	{
		switch (func_252(PLAYER::PLAYER_ID()))
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
				if (!func_366(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_366(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_366(PLAYER::PLAYER_ID()))
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

bool func_366(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 4);
}

int func_367(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_162(PLAYER::PLAYER_ID()) && !func_265(PLAYER::PLAYER_ID())) && !func_250(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_161(PLAYER::PLAYER_ID(), 0) && func_265(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_368(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	iVar0 = 2;
	bVar1 = ((func_162(iParam0) && !func_288(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_1, 8));
	bVar2 = func_265(iParam0);
	uVar3 = func_381();
	uVar4 = func_372();
	if ((bVar1 && (func_251(iParam0) || func_371(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_370(iParam0)) && !func_369(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2537071.f_5124.f_216 != iVar0)
	{
		Global_2537071.f_5124.f_216 = iVar0;
	}
	return iVar0;
}

bool func_369(int iParam0)
{
	return func_266(iParam0, 19);
}

int func_370(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_266(iParam0, 9);
	}
	return 0;
}

int func_371(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_372()
{
	if ((func_266(PLAYER::PLAYER_ID(), 21) || func_266(PLAYER::PLAYER_ID(), 22)) || func_378())
	{
		return 1;
	}
	if (func_374())
	{
		func_373(22);
		return 1;
	}
	return 0;
}

void func_373(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

int func_374()
{
	if (func_161(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_381() && !func_377()) || func_376(PLAYER::PLAYER_ID(), 21)) || func_376(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_375(27);
		}
	}
	return 0;
}

void func_375(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_4), iParam0);
}

bool func_376(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

bool func_377()
{
	return Global_1312418.f_1;
}

bool func_378()
{
	return func_379(358, -1);
}

int func_379(int iParam0, int iParam1)
{
	uVar0 = Global_2583656[iParam0][func_380(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_380(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_38();
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

bool func_381()
{
	return Global_1312418;
}

bool func_382()
{
	return GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 5);
}

void func_383()
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_384(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_384(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (func_1111() == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 11))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 15))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 16))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 15))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 10))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0))
									{
										if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
										{
											iVar17 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0);
											if (iVar17 == NETWORK::NET_TO_VEH(Local_80.f_29[0]))
											{
												if (Var0.f_5)
												{
													if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
													{
														if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
														{
															iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
															if (PED::IS_PED_A_PLAYER(iVar13))
															{
																iVar15 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar13);
																if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar15))
																{
																	if (iVar15 == PLAYER::PLAYER_ID())
																	{
																		GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 11);
																		if (!func_266(PLAYER::PLAYER_ID(), 20))
																		{
																			if (func_382())
																			{
																				func_387(0);
																				func_385();
																			}
																		}
																	}
																}
																else
																{
																	GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 16);
																}
															}
															else
															{
																GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 15);
															}
														}
													}
												}
												else if (!func_266(PLAYER::PLAYER_ID(), 20))
												{
													if (func_382())
													{
														if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
														{
															if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
															{
																iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																if (PED::IS_PED_A_PLAYER(iVar13))
																{
																	iVar15 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar13);
																	if (iVar15 == PLAYER::PLAYER_ID())
																	{
																		func_387(0);
																		func_385();
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_1111() == 2)
		{
			iVar18 = 0;
			while (iVar18 < 15)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iVar18]))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, iVar18))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
								if (iVar14 == NETWORK::NET_TO_PED(Local_80.f_13[iVar18]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(iVar13))
											{
												iVar15 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar13);
												if (iVar15 == PLAYER::PLAYER_ID())
												{
													GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), iVar18);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar18++;
			}
		}
		if (func_382())
		{
			if (!func_266(PLAYER::PLAYER_ID(), 20))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0))
					{
						iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
						if (PED::IS_PED_A_PLAYER(iVar14))
						{
							iVar16 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar14);
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(iVar13))
									{
										iVar15 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar13);
										if (iVar15 == PLAYER::PLAYER_ID())
										{
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar16))
											{
												iVar19 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar16);
												if (iVar19 == Local_80.f_5)
												{
													func_387(0);
													func_385();
												}
												else if (iVar19 == Local_80.f_7)
												{
													func_387(0);
													func_385();
												}
												else if (func_19(iVar16, 1))
												{
													if (Local_80.f_8 > -1)
													{
														iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_8));
														if (func_16(iVar16, iVar20, 1))
														{
															func_387(0);
															func_385();
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_385()
{
	if (!func_386(PLAYER::PLAYER_ID()))
	{
		func_373(25);
	}
}

bool func_386(int iParam0)
{
	return func_266(iParam0, 25);
}

void func_387(int iParam0)
{
	if (!func_265(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_368(PLAYER::PLAYER_ID()) != 0)
		{
			func_373(20);
			func_388(func_390());
			if (func_162(PLAYER::PLAYER_ID()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 8))
				{
					GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 8);
				}
			}
		}
	}
}

void func_388(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_389()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_389()
{
	iVar0 = 0;
	return iVar0;
}

int func_390()
{
	iVar0 = func_291(PLAYER::PLAYER_ID());
	if (func_394(iVar0) == 0)
	{
		return -1;
	}
	if (func_393(iVar0))
	{
		return 65;
	}
	if (func_392(iVar0))
	{
		return 66;
	}
	if (func_391(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_391(int iParam0)
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

int func_392(int iParam0)
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

int func_393(int iParam0)
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

int func_394(int iParam0)
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
			return 0;
		
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
		case 24:
		case 26:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_395()
{
	switch (Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5)
	{
		case 0:
			if (func_1127())
			{
				Var0 = { func_1090() };
				func_1089(86, "BIGM_ASLTN", &Var0, 1, -1, 2, 1, 0);
				func_1066(-1, 0, 0, -1, 0, 0);
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 1;
			}
			else
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 2;
			}
			break;
		
		case 1:
			func_1060();
			func_1057();
			func_1056();
			func_1047();
			func_1043();
			func_1040();
			func_1039();
			func_1038();
			func_732();
			if (Local_80.f_51 == 2)
			{
				if (UI::DOES_BLIP_EXIST(uLocal_471))
				{
					UI::REMOVE_BLIP(&uLocal_471);
				}
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 2;
			}
			else if (Local_80.f_51 == 3)
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 3;
			}
			else if (Local_80.f_51 == 4)
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 4;
			}
			break;
		
		case 2:
			func_731();
			func_1060();
			func_714();
			func_1057();
			func_1056();
			func_690();
			func_604();
			func_1047();
			func_549();
			func_548();
			func_1040();
			func_546();
			func_1039();
			func_449();
			func_1038();
			func_732();
			if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 1))
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 3;
			}
			else if (Local_80.f_51 == 3)
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 3;
			}
			else if (Local_80.f_51 == 4)
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 4;
			}
			else if (func_440())
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 24);
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_80.f_51 == 4)
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 = 4;
			}
			break;
		
		case 4:
			func_1144();
			break;
	}
	if (Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 < 3)
	{
		func_396();
	}
}

void func_396()
{
	if (!func_1127() && !func_382())
	{
		return;
	}
	if (func_1111() == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_29[0]), 0) };
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_12), 0) };
	}
	if (!func_439(Var0, 0f, 0f, 0f, 0))
	{
		func_397(159, Var0, &uLocal_488, 1140457472, 1144750080, 0);
	}
}

void func_397(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	if ((((func_162(PLAYER::PLAYER_ID()) && !func_288(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 8)) && (func_251(PLAYER::PLAYER_ID()) || func_371(PLAYER::PLAYER_ID()))) || func_41(Param1))
	{
		return;
	}
	Global_1674347 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param1);
	func_437(iParam0, fVar0);
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_370(PLAYER::PLAYER_ID()) || func_436(PLAYER::PLAYER_ID()))
		{
			if (!UI::_0x84698AB38D0C6636(1344549371))
			{
				UI::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (UI::_0x84698AB38D0C6636(1344549371))
		{
			UI::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_376(PLAYER::PLAYER_ID(), 21) || func_376(PLAYER::PLAYER_ID(), 25)))
		{
			func_435(Param1, 1, 0);
		}
		if (!*uParam4 && func_1245(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_434(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_433(iParam0));
				if (func_432(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_431(iParam0))
			{
				fVar1 = func_430(iParam0);
				if (fVar1 != 1f)
				{
					func_427(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_426(iParam0) && func_370(PLAYER::PLAYER_ID()))
				{
					func_424(1);
					func_423(2);
				}
			}
			func_373(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_266(PLAYER::PLAYER_ID(), 19))
			{
				func_375(19);
			}
		}
		if (*uParam4 && func_1245(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_434(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 0);
				}
			}
			if (func_431(iParam0))
			{
				func_422();
				GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 1);
			}
			if (iParam7 && !func_162(PLAYER::PLAYER_ID()))
			{
				if (func_291(PLAYER::PLAYER_ID()) != 152)
				{
					func_399();
				}
			}
			if (func_346(2))
			{
				func_424(0);
				func_398(2);
			}
		}
	}
}

void func_398(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_399()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_24), &Global_2409327, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_26), &Global_2409329, 19);
	func_420();
	func_402(1, 1, 0);
	func_400();
}

void func_400()
{
	func_401(0, 0);
}

void func_401(int iParam0, int iParam1)
{
	Global_2405072.f_22 = iParam0;
	Global_2405072.f_23 = iParam1;
}

void func_402(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_45), &Global_2409348, 320);
	}
	else
	{
		Global_2405072.f_45 = { Global_2409348 };
		Global_2405072.f_45.f_49 = { Global_2409348.f_49 };
		Global_2405072.f_45.f_52 = Global_2409348.f_52;
		Global_2405072.f_45.f_53 = Global_2409348.f_53;
	}
	if (bParam0)
	{
		func_419();
	}
	if (!bParam2)
	{
		func_405(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_404(0);
	func_403();
}

void func_403()
{
	if (Global_2405072.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405072.f_487 = { Var0 };
	}
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		Global_2405072.f_705 = 0;
	}
	else
	{
		Global_2405072.f_705 = 1;
	}
}

void func_405(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_418())
		{
			func_417();
		}
		Global_2405072.f_706.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405072.f_706.f_504 = iParam1;
		Global_2405072.f_706.f_505 = iParam2;
		Global_2405072.f_706.f_506 = iParam10;
		func_415();
		func_409(8, 0, 0, 0, 0);
		Global_2405072.f_706.f_507 = iParam11;
		Global_2405072.f_706.f_512 = iParam3;
		Global_2405072.f_706.f_513 = iParam4;
		Global_2405072.f_706.f_510 = iParam5;
		Global_2405072.f_706.f_511 = iParam6;
		Global_2405072.f_706.f_514 = iParam7;
		Global_2405072.f_706.f_515 = iParam8;
		Global_2405072.f_706.f_516 = iParam9;
		Global_2405072.f_706.f_517 = iParam14;
		Global_2405072.f_706.f_508 = iParam12;
		Global_2405072.f_706.f_509 = iParam13;
		Global_2405072.f_1745 = 1;
	}
	else
	{
		func_406();
	}
}

void func_406()
{
	if (func_418() && !func_408())
	{
		func_417();
	}
	if (func_408())
	{
		func_407();
	}
	else
	{
		func_415();
		func_409(0, 0, 0, 0, 0);
		Global_2405072.f_1745 = 0;
		Global_2405072.f_1744 = 0;
	}
}

void func_407()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_706), &(Global_2405072.f_1225), 519);
	Global_2405072.f_487 = { Global_2405072.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		Global_2405072.f_1744 = 0;
	}
}

int func_408()
{
	if ((Global_2405072.f_1744 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_1225.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_1225.f_518))
	{
		return 1;
	}
	return 0;
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2439138.f_1894.f_703.f_16 != func_18())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_2439138.f_1894.f_703.f_16].f_404, 0) && func_410())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412642 = 0;
	}
	Global_2405072.f_487 = iParam0;
	Global_2405072.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405072.f_487.f_2 = iParam1;
	Global_2405072.f_487.f_3 = iParam2;
	Global_2405072.f_487.f_4 = iParam3;
	Global_2405072.f_487.f_5 = iParam4;
}

int func_410()
{
	if ((((((func_291(PLAYER::PLAYER_ID()) == 229 || func_291(PLAYER::PLAYER_ID()) == 191) || func_414()) || func_413()) || func_412(PLAYER::PLAYER_ID())) || Global_2513890.f_226 == 1) || (Global_2405072.f_1745 && func_411(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_411(int iParam0)
{
	if (func_251(iParam0))
	{
		return 1;
	}
	if (func_265(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_412(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
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

var func_413()
{
	return Global_1574405;
}

int func_414()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_415()
{
	if (func_418() && !func_408())
	{
		func_417();
	}
	func_416();
	Global_2405072.f_706 = 0;
}

void func_416()
{
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405072.f_706.f_1[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_417()
{
	if (func_408())
	{
		if (Global_2405072.f_706.f_518 == Global_2405072.f_1225.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_1225), &(Global_2405072.f_706), 519);
		Global_2405072.f_493 = { Global_2405072.f_487 };
		Global_2405072.f_1744 = 1;
	}
}

int func_418()
{
	if ((Global_2405072.f_1745 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405072.f_706.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405072.f_706.f_518))
	{
		return 1;
	}
	return 0;
}

void func_419()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405072.f_365), &Global_2409668, 121);
}

void func_420()
{
	func_421();
	Global_2405072.f_2254 = 0;
}

void func_421()
{
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405072.f_2255[iVar0] = { Var1 };
		iVar0++;
	}
}

void func_422()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2537071.f_5119 < 1f)
		{
			return;
		}
	}
	Global_2537071.f_5120 = -1;
	Global_2537071.f_5119 = 1f;
}

void func_423(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_45), iParam0);
}

void func_424(int iParam0)
{
	if (func_425() && iParam0)
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

int func_425()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_426(int iParam0)
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

void func_427(float fParam0)
{
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_428())
	{
		return;
	}
	fVar0 = (Global_2537071.f_5119 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2537071.f_5120))
	{
		if (!Global_2537071.f_5120 == SCRIPT::GET_ID_OF_THIS_THREAD() && GAMEPLAY::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2537071.f_5119 = fParam0;
	Global_2537071.f_5120 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_428()
{
	switch (func_99())
	{
		case 0:
			return func_429();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_429()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

float func_430(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_431(int iParam0)
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

int func_432(int iParam0, int iParam1)
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

float func_433(int iParam0)
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

int func_434(int iParam0)
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

void func_435(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405072.f_45.f_49 = { Param0 };
	Global_2405072.f_45.f_52 = iParam3;
	Global_2405072.f_45.f_53 = iParam4;
}

int func_436(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_437(int iParam0, float fParam1)
{
	iVar0 = func_438(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_385();
	}
}

int func_438(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12522;
		
		case 142:
			return Global_262145.f_12510;
		
		case 157:
			return Global_262145.f_12477;
		
		case 159:
			return Global_262145.f_12460;
		
		case 162:
			return Global_262145.f_12571;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_439(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

bool func_440()
{
	if (func_443())
	{
		bVar0 = true;
	}
	else if (func_442())
	{
		bVar0 = true;
	}
	else if (func_441(PLAYER::PLAYER_ID()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), PLAYER::PLAYER_PED_ID()))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 2))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 2);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
				OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_80.f_12));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 0);
				unk_0x867458251D47CCB2(NETWORK::NET_TO_OBJ(Local_80.f_12), 0);
			}
		}
	}
	return bVar0;
}

int func_441(int iParam0)
{
	return Global_1590535[iParam0].f_196;
}

bool func_442()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 20);
}

int func_443()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_393.f_5, 0))
	{
		return 1;
	}
	if (func_445() && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 3)
	{
		return 1;
	}
	if (func_444() && Global_1590535[PLAYER::PLAYER_ID()].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574650.f_20)
	{
		return 1;
	}
	return 0;
}

bool func_444()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 5);
}

int func_445()
{
	if (((func_448() || func_442()) || func_447()) || func_446())
	{
		return 1;
	}
	return 0;
}

bool func_446()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 1);
}

bool func_447()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 2);
}

bool func_448()
{
	return Global_2450632.f_598;
}

void func_449()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 6))
	{
		if (func_1127())
		{
			if (func_368(PLAYER::PLAYER_ID()) >= 1)
			{
				if (func_451(82, func_545(), 0, 0))
				{
					GAMEPLAY::SET_BIT(&iLocal_338, 6);
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&iLocal_338, 6);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 15))
	{
		if (func_1111() == 0 || func_1111() == 3)
		{
			if (func_1127())
			{
				if (func_368(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_80.f_5 != -1 || Local_80.f_7 != -1)
					{
						if (func_451(82, func_450(), 0, 0))
						{
							GAMEPLAY::SET_BIT(&iLocal_338, 15);
						}
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 15);
			}
		}
	}
}

char* func_450()
{
	switch (func_1111())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_451(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_452(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_452(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_453(&uVar0, iParam0, func_544(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_453(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam2) > 7)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_543(sParam2, sParam3);
	iVar2 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = GAMEPLAY::GET_HASH_KEY(sParam7);
	}
	if (func_542(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_536(uParam6))
	{
		return 0;
	}
	if (func_533(iVar0, iVar1, iVar2))
	{
		if (func_532())
		{
			return 0;
		}
		func_531();
		return func_460(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_459(iParam4))
	{
		return 0;
	}
	func_454(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_454(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1370527.f_40.f_1 = iParam0;
	Global_1370527.f_40.f_2 = iParam1;
	Global_1370527.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370527.f_40.f_4), sParam3, 16);
	Global_1370527.f_40.f_8 = iParam4;
	Global_1370527.f_40.f_9 = iParam5;
	Global_1370527.f_40.f_14 = uParam6;
	func_455(iParam4);
	func_531();
	Global_1370527.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_455(int iParam0)
{
	if (func_458(iParam0))
	{
		func_457();
		return;
	}
	func_456();
}

void func_456()
{
	Global_1370527.f_40.f_10 = 0;
}

void func_457()
{
	Global_1370527.f_40.f_10 = 1;
}

int func_458(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_459(int iParam0)
{
	return iParam0 > Global_1370527.f_40.f_8;
}

int func_460(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	func_530();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_527(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_524(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_527(uParam0, sParam3, sParam4);
		}
		return func_507(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_506(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_494(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_493(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_461(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_461(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_492();
	bVar0 = true;
	if (func_463(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_462(120000);
		return 1;
	}
	return 0;
}

void func_462(int iParam0)
{
	Global_1370527.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370527.f_40.f_12 = 1;
}

int func_463(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_273(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_491(uParam5, bParam6, &iVar3);
	uVar5 = func_489(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_488(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_467(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 0))
	{
		func_466();
	}
	func_492();
	func_465();
	func_464();
	return 1;
}

void func_464()
{
	Global_1370527.f_57 = 0;
	Global_1370527.f_57.f_1 = 0;
}

void func_465()
{
	Global_1370527.f_40 = 3;
}

void func_466()
{
	GAMEPLAY::SET_BIT(&Global_7356, 8);
}

int func_467(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_468(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			GAMEPLAY::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_468(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_481();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4269750 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1870099198) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1346140115) > 0)
		{
			return 0;
		}
	}
	if (func_480() == 0)
	{
		func_478();
		return 0;
	}
	func_477(Global_4269749);
	StringCopy(&(Global_4268500[Global_4269749]), sParam1, 64);
	Global_4268500[Global_4269749].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4268500[Global_4269749].f_24 = iParam2;
	}
	Global_4268500[Global_4269749].f_25 = iParam7;
	Global_4268500[Global_4269749].f_26 = uParam8;
	Global_4268500[Global_4269749].f_29 = uParam9;
	Global_4268500[Global_4269749].f_30 = uParam12;
	Global_4268500[Global_4269749].f_31 = uParam11;
	Global_4268500[Global_4269749].f_28 = 0;
	Global_4268500[Global_4269749].f_32 = iParam3;
	StringCopy(&(Global_4268500[Global_4269749].f_33), sParam4, 64);
	Global_4268500[Global_4269749].f_49 = iParam6;
	StringCopy(&(Global_4268500[Global_4269749].f_50), sParam5, 64);
	Global_4268500[Global_4269749].f_66 = iParam13;
	StringCopy(&(Global_4268500[Global_4269749].f_67), sParam14, 64);
	StringCopy(&(Global_4268500[Global_4269749].f_83), sParam15, 64);
	func_481();
	switch (iParam16)
	{
		case 3:
			Global_4268500[Global_4269749].f_99[Global_19486] = 1;
			break;
		
		case 0:
			Global_4268500[Global_4269749].f_99[0] = 1;
			break;
		
		case 2:
			Global_4268500[Global_4269749].f_99[2] = 1;
			break;
		
		case 1:
			Global_4268500[Global_4269749].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19486)
		{
			case 0:
				func_476(0);
				break;
			
			case 1:
				func_476(1);
				break;
			
			case 2:
				func_476(2);
				break;
			
			case 3:
				func_476(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4269750 = 1;
				break;
			
			case 0:
				Global_4269750 = 1;
				break;
			
			case 2:
				Global_4269750 = 1;
				break;
			
			case 1:
				Global_4269750 = 1;
				break;
			}
	}
	Global_21874[Global_4269749] = 0;
	if (bParam10)
	{
		func_481();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_475())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_474(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_471(1);
			func_474(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_469(uParam0, sParam1);
	return 1;
}

void func_469(var uParam0, char* sParam1)
{
	if (!func_470())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, -1180597171, GAMEPLAY::GET_HASH_KEY(sParam1), 0);
}

int func_470()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_18())
	{
		return 0;
	}
	if (func_265(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_471(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_473(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_238(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_472(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_472(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_238(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_238(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_238(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_238(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_238(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_473(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_474(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_475()
{
	return Global_1312877;
}

void func_476(int iParam0)
{
	uVar0 = Global_111638.f_14046[iParam0].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_477(int iParam0)
{
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_4268500[iParam0].f_18 = uVar0;
	Global_4268500[iParam0].f_18.f_1 = uVar1;
	Global_4268500[iParam0].f_18.f_2 = uVar2;
	Global_4268500[iParam0].f_18.f_3 = uVar3;
	Global_4268500[iParam0].f_18.f_4 = uVar4;
	Global_4268500[iParam0].f_18.f_5 = uVar5;
}

void func_478()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_479(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
		{
			Global_4269749 = iVar2;
		}
		iVar2++;
	}
	Global_4268500[Global_4269749].f_24 = 1;
}

int func_479(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_480()
{
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0)
		{
			Global_4269749 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4269749 = 11;
	Global_4268500[Global_4269749].f_18 = -1;
	Global_4268500[Global_4269749].f_18.f_1 = 0;
	Global_4268500[Global_4269749].f_18.f_2 = 0;
	Global_4268500[Global_4269749].f_18.f_3 = 0;
	Global_4268500[Global_4269749].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4268500[iVar2].f_24 == 0 || Global_4268500[iVar2].f_24 == 1)
		{
			if (!func_479(Global_4268500[iVar2].f_18, Global_4268500[Global_4269749].f_18))
			{
				Global_4269749 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4269749 == 11)
	{
		return 0;
	}
	Global_4268500[Global_4269749].f_99[0] = 0;
	Global_4268500[Global_4269749].f_99[1] = 0;
	Global_4268500[Global_4269749].f_99[2] = 0;
	return 1;
}

void func_481()
{
	if (func_473(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0])
			{
				Global_19486 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1])
			{
				Global_19486 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
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
		Global_19486 = func_482();
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

var func_482()
{
	func_483();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_483()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_486(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_485(PLAYER::PLAYER_PED_ID());
			if (func_484(iVar0) && (!func_473(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_484(Global_111638.f_2358.f_539.f_4321))
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

bool func_484(int iParam0)
{
	return iParam0 < 3;
}

int func_485(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_486(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_486(int iParam0)
{
	if (func_484(iParam0))
	{
		return func_487(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_487(int iParam0)
{
	return Global_1798[iParam0];
}

int func_488(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_468(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			GAMEPLAY::SET_BIT(&Global_4269765, 0);
		}
		return 1;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_490(2, iParam1);
	return iParam0;
}

void func_490(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_491(char* sParam0, bool bParam1, int iParam2)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_18;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_490(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return UI::_GET_LABEL_TEXT(sParam0);
}

void func_492()
{
	Global_1370527.f_40.f_9 = 4;
}

int func_493(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	func_492();
	bVar0 = false;
	return func_463(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_494(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bVar0 = false;
	return func_495(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_495(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_273(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370527.f_40.f_13))
			{
				return 0;
			}
		}
		Global_21866 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_491(uParam5, bParam6, &iVar3);
	uVar5 = func_489(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_505(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_497(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 0))
	{
		func_466();
	}
	func_496();
	func_465();
	func_464();
	return 1;
}

void func_496()
{
	Global_1370527.f_40.f_9 = 3;
}

int func_497(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	GAMEPLAY::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_499(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8063 = iParam6;
			Global_7966[3] = { func_498(iParam0) };
			Global_8043 = iParam0;
			GAMEPLAY::SET_BIT(&Global_7356, 1);
			GAMEPLAY::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_498(int iParam0)
{
	return Global_1798[iParam0].f_3;
}

int func_499(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_481();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19486 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19486 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19486 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111638.f_14046[Global_19486].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-757906387) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-757906387) > 0)
		{
			return 0;
		}
	}
	if (func_504() == 0)
	{
		func_502();
		return 0;
	}
	func_501(Global_21872);
	StringCopy(&(Global_111638.f_14136[Global_21872]), sParam1, 64);
	Global_111638.f_14136[Global_21872].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111638.f_14136[Global_21872].f_24 = iParam2;
	}
	Global_111638.f_14136[Global_21872].f_25 = iParam7;
	Global_111638.f_14136[Global_21872].f_26 = uParam8;
	Global_111638.f_14136[Global_21872].f_29 = uParam9;
	Global_111638.f_14136[Global_21872].f_30 = uParam12;
	Global_111638.f_14136[Global_21872].f_31 = uParam11;
	Global_111638.f_14136[Global_21872].f_28 = 0;
	Global_111638.f_14136[Global_21872].f_32 = iParam3;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_33), sParam4, 64);
	Global_111638.f_14136[Global_21872].f_49 = iParam6;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_50), sParam5, 64);
	Global_111638.f_14136[Global_21872].f_66 = iParam13;
	StringCopy(&(Global_111638.f_14136[Global_21872].f_67), sParam14, 64);
	StringCopy(&(Global_111638.f_14136[Global_21872].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_7356, 10))
	{
		Global_111638.f_14136[Global_21872].f_99[0] = 1;
		Global_111638.f_14136[Global_21872].f_99[1] = 1;
		Global_111638.f_14136[Global_21872].f_99[2] = 1;
		Global_8062 = 4;
		func_476(0);
		func_476(2);
		func_476(1);
	}
	else
	{
		func_481();
		switch (iParam16)
		{
			case 3:
				Global_111638.f_14136[Global_21872].f_99[Global_19486] = 1;
				break;
			
			case 0:
				Global_111638.f_14136[Global_21872].f_99[0] = 1;
				break;
			
			case 2:
				Global_111638.f_14136[Global_21872].f_99[2] = 1;
				break;
			
			case 1:
				Global_111638.f_14136[Global_21872].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19486)
			{
				case 0:
					func_476(0);
					Global_8062 = 0;
					break;
				
				case 1:
					func_476(1);
					Global_8062 = 1;
					break;
				
				case 2:
					func_476(2);
					Global_8062 = 2;
					break;
				
				case 3:
					func_476(3);
					Global_8062 = 3;
					break;
				
				default:
					Global_8062 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_7356, 10))
		{
			Global_111638.f_14046[0].f_17 = 1;
			Global_111638.f_14046[1].f_17 = 1;
			Global_111638.f_14046[2].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111638.f_14046[Global_19486].f_17 = 1;
					break;
				
				case 0:
					Global_111638.f_14046[0].f_17 = 1;
					break;
				
				case 2:
					Global_111638.f_14046[2].f_17 = 1;
					break;
				
				case 1:
					Global_111638.f_14046[1].f_17 = 1;
					break;
				}
			}
	}
	Global_21874[Global_21872] = 0;
	if (bParam10)
	{
		func_481();
		if (Global_19429)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19486)
			{
				case 0:
					StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8161[Global_19486][0].f_259 == 1)
		{
			if (!func_475())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19475, 1);
			}
		}
	}
	if (!Global_19665)
	{
		if (Global_19486.f_1 == 6)
		{
			func_474(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_471(1);
			func_474(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
		}
	}
	func_500(uParam0, sParam1);
	return 1;
}

void func_500(var uParam0, char* sParam1)
{
	if (!func_470())
	{
		return;
	}
	unk_0x6DFDEDC7A51E8DAE(uParam0, 1654525105, GAMEPLAY::GET_HASH_KEY(sParam1), 0);
}

void func_501(int iParam0)
{
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_111638.f_14136[iParam0].f_18 = uVar0;
	Global_111638.f_14136[iParam0].f_18.f_1 = uVar1;
	Global_111638.f_14136[iParam0].f_18.f_2 = uVar2;
	Global_111638.f_14136[iParam0].f_18.f_3 = uVar3;
	Global_111638.f_14136[iParam0].f_18.f_4 = uVar4;
	Global_111638.f_14136[iParam0].f_18.f_5 = uVar5;
}

void func_502()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_503(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
		{
			Global_21872 = iVar2;
		}
		iVar2++;
	}
	Global_111638.f_14136[Global_21872].f_24 = 1;
}

int func_503(struct<6> Param0, struct<6> Param6)
{
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_504()
{
	if (Global_76622)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0)
		{
			Global_21872 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_21872 = 34;
	Global_111638.f_14136[Global_21872].f_18 = -1;
	Global_111638.f_14136[Global_21872].f_18.f_1 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_2 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_3 = 0;
	Global_111638.f_14136[Global_21872].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111638.f_14136[iVar2].f_24 == 0 || Global_111638.f_14136[iVar2].f_24 == 1)
		{
			if (!func_503(Global_111638.f_14136[iVar2].f_18, Global_111638.f_14136[Global_21872].f_18))
			{
				Global_21872 = iVar2;
			}
		}
		if (Global_111638.f_14136[iVar2].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_21872 == 34)
	{
		return 0;
	}
	Global_111638.f_14136[Global_21872].f_99[0] = 0;
	Global_111638.f_14136[Global_21872].f_99[1] = 0;
	Global_111638.f_14136[Global_21872].f_99[2] = 0;
	return 1;
}

int func_505(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_7356, 10);
	iVar0 = 3;
	if (func_499(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8063 = iParam10;
			Global_7966[3] = { func_498(iParam0) };
			Global_8043 = iParam0;
			StringCopy(&Global_8044, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_7356, 1);
			GAMEPLAY::SET_BIT(&Global_7356, 7);
		}
		return 1;
	}
	return 0;
}

int func_506(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_496();
	bVar0 = true;
	if (func_495(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_462(120000);
		return 1;
	}
	return 0;
}

int func_507(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_523(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_513(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
		{
			func_512(1);
		}
		if (GAMEPLAY::IS_BIT_SET(iParam4, 5))
		{
			func_511(1);
		}
		func_510();
		func_465();
		func_509();
		func_508();
		return 1;
	}
	return 0;
}

void func_508()
{
	Global_2546572 = 0;
}

void func_509()
{
	Global_1370527.f_57 = 1;
	Global_1370527.f_57.f_1 = 0;
}

void func_510()
{
	Global_1370527.f_40.f_9 = 1;
}

void func_511(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7358, 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
	}
}

void func_512(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
	}
}

int func_513(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_522(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_514(sParam3, iParam4, bParam7);
}

int func_514(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_521();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_352(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_520();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			GAMEPLAY::CLEAR_BIT(&Global_7356, 20);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 17);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_481();
				if (Global_8161[Global_19486][0].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_519())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_518())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_517();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_516();
		func_515();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_521();
	}
	return 0;
}

void func_515()
{
	if (!func_470())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

void func_516()
{
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_20805 = 1;
}

void func_517()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_7357, 16);
}

int func_518()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_519()
{
	if (Global_76622)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == 100416529 || iVar1 == 205991906) || iVar1 == 856002082)
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_520()
{
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0] = 0;
		StringCopy(&(Global_20094[iVar0].f_1), "", 24);
		Global_20094[iVar0].f_7 = 0;
		Global_20094[iVar0].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

void func_521()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

void func_522(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

int func_523(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_522(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_20853 = 1;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 0;
	Global_20859 = 0;
	Global_2621441 = 0;
	return func_514(sParam3, iParam4, bParam7);
}

int func_524(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_526(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_525();
		func_510();
		func_465();
		func_509();
		func_508();
		return 1;
	}
	return 0;
}

void func_525()
{
	Global_21823 = 0;
}

bool func_526(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_522(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 1;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20810 = 0;
	Global_20857 = 1;
	Global_20859 = 0;
	StringCopy(&Global_20953, sParam5, 24);
	Global_2621441 = 0;
	return func_514(sParam3, iParam4, bParam8);
}

int func_527(var uParam0, char* sParam1, char* sParam2)
{
	if (func_529(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_528();
		func_465();
		func_509();
		return 1;
	}
	return 0;
}

void func_528()
{
	Global_1370527.f_40.f_9 = 2;
}

bool func_529(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_522(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_514(sParam2, iParam3, 0);
}

void func_530()
{
	Global_1370527.f_55 = Global_1370527.f_40.f_1;
	Global_1370527.f_55.f_1 = Global_1370527.f_40.f_10;
}

void func_531()
{
	Global_1370527.f_40 = 1;
}

bool func_532()
{
	return Global_1370527.f_40 == 1;
}

int func_533(int iParam0, int iParam1, int iParam2)
{
	if (!func_534(iParam0))
	{
		return 0;
	}
	if (Global_1370527.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370527.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_534(int iParam0)
{
	if (!func_535())
	{
		return 0;
	}
	if (!Global_1370527.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_535()
{
	if (Global_1370527.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_536(int iParam0)
{
	if (func_541())
	{
		return 0;
	}
	if (func_540())
	{
		return 0;
	}
	if (func_539(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1662006 || func_538())
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0, 6))
	{
		if (func_537())
		{
			return 0;
		}
	}
	return 1;
}

bool func_537()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387714);
}

int func_538()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_539(int iParam0)
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

bool func_540()
{
	return Global_1370527.f_40 == 3;
}

bool func_541()
{
	return func_518();
}

int func_542(int iParam0, int iParam1, int iParam2)
{
	if (!func_540())
	{
		return 0;
	}
	return func_533(iParam0, iParam1, iParam2);
}

int func_543(char* sParam0, char* sParam1)
{
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

char* func_544()
{
	return "TXTMSG";
}

char* func_545()
{
	switch (func_1111())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_546()
{
	if (func_1111() == 0)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 7))
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, func_547(), 1) < 200f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GAMEPLAY::SET_BIT(&iLocal_339, 7);
				}
			}
		}
		else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, func_547(), 1) < 121f)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		}
	}
}

Vector3 func_547()
{
	switch (func_1111())
	{
		case 0:
			Var0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			Var0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			Var0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			Var0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return Var0;
}

void func_548()
{
	if (!func_1127() && !func_382())
	{
		return;
	}
	if (!func_266(PLAYER::PLAYER_ID(), 20))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_338, 18))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_487, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_487, 0);
				GAMEPLAY::CLEAR_BIT(&iLocal_338, 18);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&iLocal_338, 18);
			}
		}
		else if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iLocal_487 != iVar0)
			{
				iLocal_487 = iVar0;
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 18))
	{
		GAMEPLAY::SET_BIT(&iLocal_338, 18);
	}
}

void func_549()
{
	if (!func_1127() && !func_382())
	{
		return;
	}
	if (!func_560())
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 10))
	{
		if (Local_80.f_51 > 1)
		{
			if (func_558())
			{
				if (!func_557())
				{
					if (!func_556())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_555());
						GAMEPLAY::SET_BIT(&iLocal_338, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_555(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					else if (func_554())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_555());
						GAMEPLAY::SET_BIT(&iLocal_338, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_555(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_558())
		{
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		}
	}
	if (Local_80.f_5 != -1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 11))
		{
			if (Local_80.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_555());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_555(), 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				GAMEPLAY::SET_BIT(&iLocal_338, 11);
			}
			else if (func_552())
			{
				iVar0 = func_551();
				if (iVar0 != func_18())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 10))
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_555());
						GAMEPLAY::SET_BIT(&iLocal_338, 10);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
						{
							if (func_550(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar0), 1) <= 200f)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_555(), 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								GAMEPLAY::SET_BIT(&iLocal_338, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_552())
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_338, 11);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(iLocal_338, 11))
	{
		GAMEPLAY::CLEAR_BIT(&iLocal_338, 11);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 8))
		{
			iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iLocal_475 != iVar1)
			{
				iLocal_475 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_1127())
				{
					fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_547(), 1);
					if (fVar2 < 150f)
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					}
				}
			}
		}
		else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (iLocal_475 > 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_555());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_475, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			GAMEPLAY::CLEAR_BIT(&iLocal_338, 8);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 8))
	{
		GAMEPLAY::SET_BIT(&iLocal_338, 8);
	}
}

float func_550(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

int func_551()
{
	iVar0 = func_18();
	iVar1 = Local_80.f_5;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

int func_552()
{
	iVar0 = func_551();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_553();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_553()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_554()
{
	return (((GAMEPLAY::IS_BIT_SET(Local_80.f_1, 11) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 12)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 13)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 14));
}

int func_555()
{
	switch (func_1111())
	{
		case 1:
			return Global_262145.f_12452;
		
		case 2:
			return Global_262145.f_12454;
		
		case 0:
			return Global_262145.f_12451;
		
		case 3:
			return Global_262145.f_12453;
		
		default:
	}
	return 5;
}

int func_556()
{
	switch (func_1111())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_557()
{
	switch (func_1111())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_558()
{
	iVar0 = func_1111();
	switch (iVar0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var1, func_547(), 1) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (func_559(Var1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (func_559(Var1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var1, func_547(), 1) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_559(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0] = { -804.3439f, -3346.5f, 10f };
			Var46[0] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1] = { -1911.488f, -2934.197f, 10f };
			Var46[1] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2] = { -844.9433f, -2802.785f, 10f };
			Var46[2] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3] = { -1021.086f, -2952.277f, 10f };
			Var46[3] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4] = { -1027.136f, -2436.457f, 10f };
			Var46[4] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5] = { -1497.549f, -2408.712f, 10f };
			Var46[5] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7] = { -1110.083f, -3496.806f, 12f };
			Var46[7] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8] = { -1886.899f, -3193.024f, 12f };
			Var46[8] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9] = { -1134.337f, -3535.648f, 12f };
			Var46[9] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10] = { -969.1279f, -3463.899f, 12f };
			Var46[10] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11] = { -1369.491f, -2173.579f, 10f };
			Var46[11] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12] = { -1010.926f, -3550.943f, 10f };
			Var46[12] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0] = { -1773.944f, 3287.334f, 30f };
			Var46[0] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			Var0[1] = { -2725.889f, 3291.099f, 30f };
			Var46[1] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2] = { -2442.026f, 3326.699f, 30f };
			Var46[2] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3] = { -1917.165f, 3374.209f, 30f };
			Var46[3] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4] = { -2192.753f, 3373.278f, 30f };
			Var46[4] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			Var0[5] = { -2077.663f, 3344.514f, 30f };
			Var46[5] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6] = { -2861.755f, 3352.661f, 30f };
			Var46[6] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7] = { -2005.574f, 3364.533f, 30f };
			Var46[7] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8] = { -1682.235f, 3004.285f, 30f };
			Var46[8] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 140f;
			Var0[11] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9].f_2 = (Var46[9].f_2 + IntToFloat(iVar111));
			Var46[10].f_2 = (Var46[10].f_2 + IntToFloat(iVar111));
			Var46[11].f_2 = (Var46[11].f_2 + IntToFloat(iVar111));
			Var46[12].f_2 = (Var46[12].f_2 + IntToFloat(iVar111));
			Var46[13].f_2 = (Var46[13].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0] = { 1541.607f, 2527.555f, 40f };
			Var46[0] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1] = { 1788.879f, 2445.727f, 40f };
			Var46[1] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2] = { 1601.157f, 2436.244f, 40f };
			Var46[2] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3] = { 1706.331f, 2407.597f, 40f };
			Var46[3] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4] = { 1712.452f, 2756.218f, 40f };
			Var46[4] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5] = { 1830.228f, 2661.24f, 40f };
			Var46[5] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6] = { 1559.05f, 2632.22f, 40f };
			Var46[6] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7] = { 1612.021f, 2716.869f, 40f };
			Var46[7] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8] = { 1809.872f, 2729.827f, 40f };
			Var46[8] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9] = { 1818.789f, 2605.948f, 40f };
			Var46[9] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0] = { 3411.002f, 3663.185f, 20f };
			Var46[0] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1] = { 3426.66f, 3733.078f, 20f };
			Var46[1] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2] = { 3446.036f, 3795.688f, 20f };
			Var46[2] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0] = { 526.053f, -3391.497f, -10f };
			Var46[0] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0] = { -1108.55f, -570.8798f, 20f };
			Var46[0] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1] = { -1201.378f, -485.9673f, 20f };
			Var46[1] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2] = { -985.6311f, -525.4233f, 20f };
			Var46[2] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3] = { -1055.849f, -477.8226f, 20f };
			Var46[3] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0[iVar109], Var46[iVar109], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_560()
{
	if (!func_562(1, 1, 1, 0))
	{
		return 0;
	}
	if (func_372())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 11))
		{
			if (!func_561())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
				{
					GAMEPLAY::SET_BIT(&iLocal_339, 11);
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&iLocal_339, 11);
			}
		}
		return 0;
	}
	if (func_368(PLAYER::PLAYER_ID()) < 1)
	{
		return 0;
	}
	if (func_1127())
	{
		return 1;
	}
	if (func_382())
	{
		return 1;
	}
	return 0;
}

bool func_561()
{
	iVar0 = func_1111();
	return iVar0 == 1;
}

int func_562(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_603(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_376(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_376(PLAYER::PLAYER_ID(), 25))
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
	if (!func_285(PLAYER::PLAYER_ID()))
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
	if (func_146(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_602())
	{
		return 0;
	}
	if (func_357())
	{
		return 0;
	}
	if (func_475())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_84(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_353())
	{
		return 0;
	}
	if (func_376(PLAYER::PLAYER_ID(), 0) || func_376(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_376(PLAYER::PLAYER_ID(), 12) || func_376(PLAYER::PLAYER_ID(), 14)) || func_376(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_595(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_570())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_569())
		{
			return 0;
		}
	}
	if (Global_1662006)
	{
		return 0;
	}
	if (func_160(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_538())
	{
		return 0;
	}
	if (func_568(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_567(PLAYER::PLAYER_ID()) && func_566(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_565())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_564(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_412(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_265(PLAYER::PLAYER_ID()))
	{
		if (func_563(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_563(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1703159[iVar0].f_12 != 0;
	}
	return 0;
}

int func_564(int iParam0)
{
	if (Global_2425662[iParam0].f_261.f_4 != 0 || Global_2425662[iParam0].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_565()
{
	return Global_1676377.f_4303 != -1;
}

int func_566(int iParam0)
{
	if (iParam0 != func_18() && func_1245(iParam0, 1, 1))
	{
		return Global_2425662[iParam0].f_310.f_14;
	}
	return -1;
}

int func_567(int iParam0)
{
	if (iParam0 != func_18() && func_1245(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 3);
	}
	return 0;
}

int func_568(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

bool func_569()
{
	return Global_98796.f_346 > 0;
}

int func_570()
{
	iVar0 = func_291(PLAYER::PLAYER_ID());
	if (((func_594(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_28) || func_593(PLAYER::PLAYER_ID())) || func_592(PLAYER::PLAYER_ID())) || func_587(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_585(PLAYER::PLAYER_ID()))
	{
		if (func_392(iVar0) || func_584(iVar0))
		{
			return 1;
		}
	}
	if (func_583(PLAYER::PLAYER_ID()))
	{
		if (func_584(iVar0))
		{
			return 1;
		}
	}
	if (func_582(PLAYER::PLAYER_ID()))
	{
		if (func_581(iVar0))
		{
			return 1;
		}
	}
	if (func_580(PLAYER::PLAYER_ID()))
	{
		if (func_579(iVar0))
		{
			return 1;
		}
	}
	if (func_578(PLAYER::PLAYER_ID()))
	{
		if (func_577(iVar0))
		{
			return 1;
		}
	}
	if (func_576(PLAYER::PLAYER_ID()))
	{
		if (func_575(iVar0))
		{
			return 1;
		}
	}
	if (func_67(PLAYER::PLAYER_ID(), 0))
	{
		if (func_391(iVar0))
		{
			if (func_573(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_572(PLAYER::PLAYER_ID()))
	{
		if (func_571(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_571(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_572(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 14;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	if (func_574(iParam0) != func_18())
	{
		return func_574(iParam0) == func_46(iParam0);
	}
	return 0;
}

int func_574(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_35;
}

int func_575(int iParam0)
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

int func_576(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_578(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_579(int iParam0)
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

int func_580(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 7;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
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

int func_582(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 4;
			}
		}
	}
	return 0;
}

int func_583(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 2;
			}
		}
	}
	return 0;
}

int func_584(int iParam0)
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

int func_585(int iParam0)
{
	if (func_586(Global_1590535[iParam0].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_586(int iParam0, int iParam1)
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

int func_587(int iParam0)
{
	if (func_588(Global_1590535[iParam0].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_588(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_589(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_589(PLAYER::PLAYER_ID(), 0))
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

bool func_589(int iParam0, bool bParam1)
{
	if (Global_1590373 != func_18())
	{
		if (!func_591(Global_1590373))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590373)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2425662[Global_1590373].f_195, 24) || func_590(Global_1590373))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 24);
}

int func_590(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_195, 9);
	}
	return 0;
}

int func_591(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 2);
	}
	return 0;
}

int func_592(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 1;
			}
		}
	}
	return 0;
}

int func_593(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 0;
			}
		}
	}
	return 0;
}

int func_594(int iParam0)
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

int func_595(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590535[iParam0].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_593(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_583(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_592(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_582(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_580(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_578(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_601(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_576(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_600(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_67(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_599(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_572(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_598(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_597(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_596(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 17;
			}
		}
	}
	return 0;
}

int func_597(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 16;
			}
		}
	}
	return 0;
}

int func_598(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_599(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 13;
			}
		}
	}
	return 0;
}

int func_600(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_601(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1245(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1 && Global_2425662[iParam0].f_310.f_8 != func_18())
			{
				return func_68(Global_2425662[iParam0].f_310.f_5) == 8;
			}
		}
	}
	return 0;
}

bool func_602()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 0);
}

bool func_603(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_5, iParam1);
}

void func_604()
{
	if (Local_80.f_3 != 1)
	{
		return;
	}
	if (!func_560())
	{
		if (iLocal_474 != -2)
		{
			if (iLocal_474 > -1)
			{
				iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_474);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
					if (iVar2 != PLAYER::PLAYER_ID())
					{
						func_688(iVar2, 421, 0, 0);
						if (!func_1127())
						{
							func_687(iVar2, 1, 0, 0);
							func_686(iVar2, 0, 0, 0);
							func_685(iVar2, 0);
							func_682(iVar2, Global_262145.f_12355, 0, 0);
						}
					}
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_472))
			{
				UI::REMOVE_BLIP(&uLocal_472);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_470))
			{
				UI::REMOVE_BLIP(&uLocal_470);
			}
			iLocal_474 = -2;
			func_681();
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_21(Local_80.f_29[0]))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_29[0])))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_80.f_29[0]), -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 8))
						{
							GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 8);
							func_385();
							func_387(0);
							if (UI::DOES_BLIP_EXIST(uLocal_472))
							{
								UI::REMOVE_BLIP(&uLocal_472);
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 8))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 8);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 8))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 8);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 8))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 8);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 8))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 8);
		}
		if (iLocal_474 != Local_80.f_7)
		{
			if (func_21(Local_80.f_29[0]))
			{
				if (Local_80.f_7 == -1)
				{
					if (func_560())
					{
						if (func_368(PLAYER::PLAYER_ID()) >= 1)
						{
							iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_474);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_688(iVar2, 421, 0, 0);
									if (!func_1127())
									{
										func_687(iVar2, 1, 0, 0);
										func_686(iVar2, 0, 0, 0);
										func_685(iVar2, 0);
										func_682(iVar2, Global_262145.f_12355, 0, 0);
									}
								}
							}
						}
					}
					func_678();
				}
				else
				{
					iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_7);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						if (func_560())
						{
							if (func_368(PLAYER::PLAYER_ID()) >= 1)
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
								if (UI::DOES_BLIP_EXIST(uLocal_472))
								{
									UI::REMOVE_BLIP(&uLocal_472);
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									if (!func_1127())
									{
										if (!func_676())
										{
											func_688(iVar2, 421, 1, 0);
											func_686(iVar2, 1, 1, 0);
											func_687(iVar2, 1, 1, 0);
											func_685(iVar2, 1);
											func_682(iVar2, Global_262145.f_12355, 1, 0);
										}
										else
										{
											func_688(iVar2, 421, 1, 0);
											func_682(iVar2, Global_262145.f_12355, 1, 0);
										}
									}
									else if (func_676())
									{
										func_688(iVar2, 421, 1, 0);
										func_682(iVar2, Global_262145.f_12355, 1, 0);
									}
									else
									{
										func_688(iVar2, 421, 1, 0);
										func_686(iVar2, 1, 1, 0);
										func_687(iVar2, 1, 1, 0);
										func_685(iVar2, 1);
										func_682(iVar2, Global_262145.f_12355, 1, 0);
									}
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_646("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 0);
								}
							}
						}
					}
				}
				iLocal_474 = Local_80.f_7;
				if (iLocal_474 == -1)
				{
				}
			}
		}
		if (func_560())
		{
			if (func_368(PLAYER::PLAYER_ID()) > 2)
			{
				if (iLocal_474 == -1)
				{
					if (func_1127())
					{
						if (!func_645("GB_AST_RETV"))
						{
							func_642("GB_AST_RETV", 0);
						}
					}
					else if (func_382())
					{
						if (!func_645("GB_AST_DESR"))
						{
							func_642("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_474 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_1127())
					{
						if (!func_645("GB_AST_DROPV"))
						{
							func_642("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_641();
					if (iVar2 != func_18())
					{
						if (func_1108(1))
						{
							iVar3 = func_553();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_645("GB_AST_DROPBV"))
								{
									iVar0 = func_263(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_261(iVar0);
										func_629("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_645("GB_AST_DESR"))
							{
								func_642("GB_AST_DESR", 0);
							}
						}
						else if (!func_645("GB_AST_DESR"))
						{
							func_642("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_474 == -1)
		{
			if (UI::DOES_BLIP_EXIST(uLocal_470))
			{
				UI::REMOVE_BLIP(&uLocal_470);
			}
			func_678();
		}
		else if (iLocal_474 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (UI::DOES_BLIP_EXIST(uLocal_472))
			{
				UI::REMOVE_BLIP(&uLocal_472);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
			{
				if (func_368(PLAYER::PLAYER_ID()) >= 1)
				{
					if (!UI::DOES_BLIP_EXIST(uLocal_470))
					{
						uLocal_470 = UI::ADD_BLIP_FOR_COORD(func_24());
						UI::SET_BLIP_ROUTE(uLocal_470, 1);
					}
				}
				else if (UI::DOES_BLIP_EXIST(uLocal_470))
				{
					UI::REMOVE_BLIP(&uLocal_470);
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_470))
			{
				UI::REMOVE_BLIP(&uLocal_470);
			}
		}
		else
		{
			if (UI::DOES_BLIP_EXIST(uLocal_472))
			{
				UI::REMOVE_BLIP(&uLocal_472);
			}
			iVar2 = func_641();
			if (iVar2 != func_18())
			{
				if (func_1108(1))
				{
					iVar3 = func_553();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
							{
								if (func_368(PLAYER::PLAYER_ID()) >= 1)
								{
									if (!UI::DOES_BLIP_EXIST(uLocal_470))
									{
										uLocal_470 = UI::ADD_BLIP_FOR_COORD(func_24());
										UI::SET_BLIP_ROUTE(uLocal_470, 1);
									}
								}
							}
							else if (UI::DOES_BLIP_EXIST(uLocal_470))
							{
								UI::REMOVE_BLIP(&uLocal_470);
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 2))
		{
			if (func_382())
			{
				if (!func_628(86))
				{
					if (func_368(PLAYER::PLAYER_ID()) >= 1)
					{
						if (func_622(0, 1, 1, 1))
						{
							sVar5 = func_616(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
							iVar6 = func_615(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
							if (func_1108(1))
							{
								func_614("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_614("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_613(1);
							GAMEPLAY::SET_BIT(&iLocal_338, 2);
						}
					}
				}
			}
		}
		func_607();
	}
	func_605();
}

void func_605()
{
	if (!func_560())
	{
		return;
	}
	if (!func_1127() && !func_382())
	{
		return;
	}
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
	{
		if (func_21(Local_80.f_29[0]))
		{
			if (Local_80.f_7 == -1)
			{
				if (!func_382())
				{
					UI::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_641();
				if (iVar5 != func_18())
				{
					if (!func_1108(1))
					{
						UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_553();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_606(NETWORK::NET_TO_VEH(Local_80.f_29[0]), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_606(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	fVar6 = 0.5f;
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.z - Var0.z) / 2f);
	fVar8 = (Var3.z - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, 1) + Vector((((Var3.z - Var0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_607()
{
	iVar0 = func_641();
	Var1 = { func_24() };
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_29[0]))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 9))
			{
				if (iVar0 == PLAYER::PLAYER_ID())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), Var1, 6f, 6f, 2f, 1, 1, 0))
						{
							func_608(NETWORK::NET_TO_VEH(Local_80.f_29[0]), &uLocal_496, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_80.f_29[0])))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_80.f_29[0]), 1);
							}
							GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_608(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_611(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1245(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, 0))
					{
						func_609(func_610(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, 0);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_609(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = -130330100;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = GAMEPLAY::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_610(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_611(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_612(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::_NETWORK_GET_PED_PLAYER(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_18()) && func_1245(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::_NETWORK_GET_PED_PLAYER(iVar2)) == 0)
							{
								if (!bParam5)
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
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_612(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || AI::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_613(int iParam0)
{
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_322(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_303())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_614(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

int func_615(int iParam0)
{
	iVar0 = func_263(iParam0);
	if (iVar0 != -1)
	{
		return func_261(iVar0);
	}
	return 1;
}

char* func_616(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_621(&(Global_1628237[iParam0].f_11.f_104));
		return sVar0;
	}
	if (Global_1628237[iParam0].f_11.f_120 != Global_1628237[PLAYER::PLAYER_ID()].f_11.f_120)
	{
		sVar0 = func_619(iParam0, 0);
		return sVar0;
	}
	if (((func_266(iParam0, 28) || func_266(PLAYER::PLAYER_ID(), 28)) || func_618(iParam0)) && !func_617(iParam0))
	{
		return func_619(iParam0, 0);
	}
	iVar1 = func_46(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_619(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		sVar0 = func_621(&(Global_1628237[iVar1].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_619(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_617(int iParam0)
{
	Var0 = { func_47(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_618(int iParam0)
{
	if (iParam0 != func_18())
	{
		Var0 = { func_47(iParam0) };
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_619(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_246(iParam0, 1))
		{
			return func_620();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_620()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_621(var uParam0)
{
	return uParam0;
}

int func_622(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_627())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_358())
	{
		return 0;
	}
	if (func_602())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_83(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_626(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_625())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574184)
	{
		return 0;
	}
	if (func_624())
	{
		return 0;
	}
	if (func_623())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (Global_2547056)
	{
		return 0;
	}
	if (func_412(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_623()
{
	return Global_2450632.f_591;
}

bool func_624()
{
	return Global_2450632.f_744;
}

bool func_625()
{
	return Global_2439138.f_3047.f_578;
}

int func_626(int iParam0)
{
	if (Global_2425662[iParam0].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_627()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_628(int iParam0)
{
	return Global_2439138.f_2723[0].f_1 == iParam0;
}

void func_629(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_630(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312585 = 15;
		Global_1312585.f_56 = iParam3;
		Global_1312585.f_57 = uParam4;
		Global_1312585.f_54 = iParam1;
	}
}

int func_630(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 63)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam2) > 63)
	{
		return 0;
	}
	if (func_640(sParam0, sParam1, sParam2) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_634();
	Global_1312585 = 10;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	StringCopy(&(Global_1312585.f_32), sParam2, 64);
	Global_1312585.f_58 = uParam4;
	Global_1312585.f_56 = uParam4;
	func_633();
	func_632(bParam3);
	func_631();
	return 1;
}

void func_631()
{
	GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 1);
}

void func_632(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312585.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312585.f_59), 0);
}

void func_633()
{
	Global_1312585.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_634()
{
	func_636();
	func_635(0);
}

void func_635(bool bParam0)
{
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312585 = 20;
	StringCopy(&(Global_1312585.f_1), "", 32);
	Global_1312585.f_9 = 0;
	if (bVar0)
	{
		Global_1312585.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312585.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312585.f_12), "", 16);
	StringCopy(&(Global_1312585.f_16), "", 64);
	StringCopy(&(Global_1312585.f_32), "", 64);
	Global_1312585.f_52 = 0;
	Global_1312585.f_53 = 0;
	Global_1312585.f_54 = 0;
	Global_1312585.f_55 = -1;
	Global_1312585.f_56 = 0;
	Global_1312585.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_636()
{
	if (!func_639())
	{
	}
	if (func_638())
	{
		UI::_BEGIN_TEXT_COMMAND_UNK(&(Global_1312585.f_12));
		func_637();
		UI::_END_TEXT_COMMAND_UNK();
	}
}

void func_637()
{
	switch (Global_1312585)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312585.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312585.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_16));
			UI::_SET_NOTIFACTION_COLOR_NEXT(Global_1312585.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312585.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312585.f_32));
			return;
		
		default:
	}
}

int func_638()
{
	if (Global_1312585 == 20)
	{
		return 0;
	}
	return 1;
}

int func_639()
{
	if (!func_638())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312585.f_12));
	func_637();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_640(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_638())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam2) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_32));
}

int func_641()
{
	iVar0 = func_18();
	iVar1 = Local_80.f_7;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

void func_642(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return;
	}
	if (func_643(sParam0))
	{
		return;
	}
	func_634();
	Global_1312585 = 0;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	func_633();
	func_632(bParam1);
	func_631();
}

bool func_643(char* sParam0)
{
	if (!func_638())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		return func_644(sParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12));
}

bool func_644(char* sParam0)
{
	if (!func_638())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

int func_645(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_638())
	{
		return 0;
	}
	if (Global_1312585 == 11)
	{
		if (UI::_0x43E4111189E54F0E(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	return func_643(sParam0);
}

int func_646(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_190067[iVar1] != -1)
			{
				UI::_SET_NOTIFACTION_COLOR_NEXT(func_674(iVar1, iParam1, 0));
			}
			else
			{
				UI::_SET_NOTIFACTION_COLOR_NEXT(func_654(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UI::_SET_NOTIFACTION_COLOR_NEXT(func_654(iParam1, -2, 1, 0, 0));
		}
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_652(&Var2));
		if (!bParam4)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2513218 = { func_47(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
			{
				iVar18 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2513148.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_651(&Var2) };
					}
					iVar0 = UI::_NOTIFICATION_SEND_CLAN_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, &Var2, Global_1314034, Global_1314035, Global_1314036);
				}
				else
				{
					iVar0 = UI::_NOTIFICATION_SEND_APARTMENT_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar18, 0, Global_2513148, Global_1314034, Global_1314035, Global_1314036);
				}
			}
			else
			{
				iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_647(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_647(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_650() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_36(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_648(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = iParam4;
		Global_1670846.f_5[iVar0].f_2[1] = iParam5;
		Global_1670846.f_5[iVar0].f_2[2] = iParam6;
		Global_1670846.f_5[iVar0].f_7 = iParam7;
		Global_1670846.f_5[iVar0].f_6 = iParam8;
		StringCopy(&(Global_1670846.f_5[iVar0].f_12), sParam3, 64);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[0]), sParam9, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[1]), sParam10, 24);
		StringCopy(&(Global_1670846.f_5[iVar0].f_28[2]), sParam11, 24);
	}
}

int func_648(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_649(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1670846++;
	if (Global_1670846 > 5)
	{
		Global_1670846 = 5;
		return Global_1670846;
	}
	return (Global_1670846 - 1);
}

void func_649(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_650()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_651(char* sParam0)
{
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_652(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_653(&cVar0);
}

var func_653(char[4] cParam0)
{
	return cParam0;
}

int func_654(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_121(iParam0) && !bParam4)
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
			if (Global_4456448.f_190067[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_121(PLAYER::PLAYER_ID()) || (func_673() && func_672())) && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_671();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::_NETWORK_GET_PED_PLAYER(iVar1) != -1)
				{
					if (func_1245(NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_674(iParam1, iParam0, 0);
							}
							else
							{
								return func_666(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_666(iParam0, NETWORK::_NETWORK_GET_PED_PLAYER(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_674(iParam1, iParam0, 0);
				}
				else
				{
					return func_655(0, -1, 0);
				}
			}
			else
			{
				return func_655(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_674(iParam1, iParam0, 0);
		}
		else
		{
			return func_666(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_666(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_655(bool bParam0, int iParam1, bool bParam2)
{
	return func_656(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_656(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_665() || (func_664() && func_662())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_661(iParam2, iVar0);
		}
		else
		{
			return func_661(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_120(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_660(1);
				}
				else
				{
					return func_660(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_657(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_657(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_660(1);
	}
	return func_660(0);
}

int func_657(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_659(iParam0, iParam1, iParam3);
	if (func_658(Global_4456448.f_194990, 1))
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

int func_658(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (Global_4456448.f_232883 == 65)
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
		if (iParam0 == Global_262145.f_9019[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_659(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_120(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_660(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_661(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_659(iParam1, iParam0, 4);
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

bool func_662()
{
	if (func_663())
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_663()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_664()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0);
}

int func_665()
{
	if (func_663() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_666(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590535[PLAYER::PLAYER_ID()] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590535[iVar2] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_668())
			{
				iVar3 = func_263(iParam0);
				if (!iVar3 == -1)
				{
					return func_261(iVar3);
				}
			}
			if ((func_155(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_120(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_660(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_667(1);
			}
			else
			{
				return func_656(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_660(1);
			}
			else
			{
				return func_656(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_263(iParam0);
	if (!iVar4 == -1)
	{
		return func_261(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_667(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_668()
{
	if (((func_242() || func_670()) || func_42()) || func_669())
	{
		return 1;
	}
	return 0;
}

var func_669()
{
	return Global_2450632.f_19;
}

var func_670()
{
	return Global_2450632.f_16;
}

var func_671()
{
	return Global_2359302.f_2;
}

bool func_672()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

bool func_673()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

int func_674(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_668())
	{
		iVar2 = func_263(iParam1);
		if (!iVar2 == -1)
		{
			return func_261(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_18())
	{
		if (Global_4456448.f_190067[iParam0] != -1 && Global_4456448.f_190067[iParam0] <= 4)
		{
			if (Global_4456448.f_190067[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_190067[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_190067[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_190067[iParam0] == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_656(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_675(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_120(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_667(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_675(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_233007;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_233008;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_233009;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_233010;
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

int func_676()
{
	switch (func_1111())
	{
		case 1:
			return func_677();
		
		case 0:
		case 2:
		case 3:
			return func_552();
		
		default:
	}
	return 0;
}

int func_677()
{
	iVar0 = func_641();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_553();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_678()
{
	if (UI::DOES_BLIP_EXIST(uLocal_472))
	{
		return;
	}
	if (!func_1127() && !func_382())
	{
		return;
	}
	if (func_368(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_472))
		{
			UI::REMOVE_BLIP(&uLocal_472);
		}
		return;
	}
	uLocal_472 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_80.f_29[0]));
	UI::_0xC4278F70131BAA6D(uLocal_472, 1);
	UI::_0x75A16C3DA34F1245(uLocal_472, 1);
	UI::SET_BLIP_PRIORITY(uLocal_472, 12);
	UI::SET_BLIP_SPRITE(uLocal_472, 421);
	UI::SET_BLIP_SCALE(uLocal_472, Global_262145.f_12355);
	UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_472, "GB_AST_RHN");
	if (func_1127())
	{
		func_679(&uLocal_472, 9);
	}
	else
	{
		func_679(&uLocal_472, 6);
	}
	if (func_1127())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 0))
		{
			UI::SET_BLIP_FLASHES(uLocal_472, 1);
			UI::SET_BLIP_FLASH_TIMER(uLocal_472, 7000);
			UI::FLASH_MINIMAP_DISPLAY();
			GAMEPLAY::SET_BIT(&iLocal_338, 0);
		}
	}
}

void func_679(var uParam0, int iParam1)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_680(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_680(int iParam0)
{
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
	UI::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_681()
{
	if (!func_638())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312585.f_9)
	{
		return;
	}
	func_634();
}

void func_682(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (func_684(iParam0))
	{
		return;
	}
	if (func_683(&(Global_2416079.f_753[iParam0]), &(Global_2416079.f_1116[iParam0]), &(Global_2416079.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_555[iParam0] = uParam1;
		}
	}
}

int func_683(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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
			if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::SET_BIT(uParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::CLEAR_BIT(uParam2, iParam4);
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

int func_684(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_428())
	{
		return 1;
	}
	return 0;
}

void func_685(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2416079.f_368), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2416079.f_368), iParam0);
	}
	if (UI::DOES_BLIP_EXIST(Global_2416079[iParam0]))
	{
		if (bParam1)
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 0);
		}
		else
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2416079[iParam0], 1);
		}
	}
}

void func_686(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_684(iParam0))
	{
		return;
	}
	if (func_683(&(Global_2416079.f_819[iParam0]), &(Global_2416079.f_1182[iParam0]), &(Global_2416079.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_685(iParam0, bParam2);
	}
}

void func_687(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_684(iParam0))
	{
		return;
	}
	if (func_683(&(Global_2416079.f_621[iParam0]), &(Global_2416079.f_984[iParam0]), &(Global_2416079.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_456[iParam0] = iParam1;
		}
	}
}

void func_688(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_684(iParam0))
	{
		return;
	}
	if (func_683(&(Global_2416079.f_588[iParam0]), &(Global_2416079.f_951[iParam0]), &(Global_2416079.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416079.f_423[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_689();
		}
	}
}

void func_689()
{
	Global_2416079.f_1614 = 1;
}

void func_690()
{
	if (Local_80.f_3 == 1)
	{
		return;
	}
	if (!func_560())
	{
		if (iLocal_473 != -2)
		{
			if (iLocal_473 > -1)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_473);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						func_688(iVar0, 457, 0, 0);
						if (!func_1127())
						{
							func_687(iVar0, 1, 0, 0);
							func_686(iVar0, 0, 0, 0);
							func_685(iVar0, 0);
							func_682(iVar0, Global_262145.f_12355, 0, 0);
						}
						else if (Local_80.f_9 > -1)
						{
							iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_687(iVar0, 1, 0, 0);
									func_686(iVar0, 0, 0, 0);
									func_685(iVar0, 0);
									func_682(iVar0, Global_262145.f_12355, 0, 0);
								}
							}
						}
					}
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_469))
			{
				UI::REMOVE_BLIP(&uLocal_469);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_470))
			{
				UI::REMOVE_BLIP(&uLocal_470);
			}
			iLocal_473 = -2;
			func_681();
		}
		return;
	}
	if (iLocal_473 != Local_80.f_5)
	{
		if (Local_80.f_5 == -1)
		{
			if (func_560())
			{
				if (func_368(PLAYER::PLAYER_ID()) >= 1)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_473);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							func_688(iVar0, 457, 0, 0);
							if (!func_1127())
							{
								func_687(iVar0, 1, 0, 0);
								func_686(iVar0, 0, 0, 0);
								func_685(iVar0, 0);
								func_682(iVar0, Global_262145.f_12355, 0, 0);
							}
							else if (Local_80.f_9 > -1)
							{
								iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9);
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_687(iVar0, 1, 0, 0);
										func_686(iVar0, 0, 0, 0);
										func_685(iVar0, 0);
										func_682(iVar0, Global_262145.f_12355, 0, 0);
									}
								}
							}
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
					{
						func_713("GB_AST_TCKD");
					}
				}
			}
		}
		else
		{
			if (iLocal_473 != -1)
			{
				if (iLocal_473 > -1)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_473);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							if (func_368(PLAYER::PLAYER_ID()) >= 1)
							{
								func_688(iVar0, 457, 0, 0);
								if (!func_1127())
								{
									func_687(iVar0, 1, 0, 0);
									func_686(iVar0, 0, 0, 0);
									func_685(iVar0, 0);
									func_682(iVar0, Global_262145.f_12355, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_80.f_5);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				if (func_560())
				{
					if (func_368(PLAYER::PLAYER_ID()) >= 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
						if (func_1245(iVar0, 1, 1))
						{
							if (UI::DOES_BLIP_EXIST(uLocal_469))
							{
								UI::REMOVE_BLIP(&uLocal_469);
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								if (!func_1127())
								{
									if (!func_552())
									{
										func_688(iVar0, 457, 1, 0);
										func_686(iVar0, 1, 1, 0);
										func_687(iVar0, 1, 1, 0);
										func_685(iVar0, 1);
										func_682(iVar0, Global_262145.f_12355, 1, 0);
									}
									else
									{
										func_688(iVar0, 457, 1, 0);
										func_682(iVar0, Global_262145.f_12355, 1, 0);
									}
								}
								else if (func_552())
								{
									func_688(iVar0, 457, 1, 0);
									func_682(iVar0, Global_262145.f_12355, 1, 0);
								}
								else
								{
									func_688(iVar0, 457, 1, 0);
									func_686(iVar0, 1, 1, 0);
									func_687(iVar0, 1, 1, 0);
									func_685(iVar0, 1);
									func_682(iVar0, Global_262145.f_12355, 1, 0);
								}
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								func_646("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_473 = Local_80.f_5;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), PLAYER::PLAYER_PED_ID()))
				{
					GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 2);
					func_712(1);
					func_385();
					if (func_382())
					{
						func_387(0);
						GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 6);
					}
					if (!func_711())
					{
						func_709(1, -1);
					}
					if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
							GAMEPLAY::SET_BIT(&iLocal_338, 12);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(iLocal_338, 12))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_338, 12);
						GAMEPLAY::CLEAR_BIT(&iLocal_338, 13);
					}
					iLocal_477 = AUDIO::GET_SOUND_ID();
					if (func_322(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_477, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_477, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_708(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_80.f_12), Local_341, 0, 0, 1);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), PLAYER::PLAYER_PED_ID()))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 2);
				if (func_711())
				{
					func_709(0, -1);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_80.f_8)
				{
					func_712(0);
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 12))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_338, 12);
					GAMEPLAY::CLEAR_BIT(&iLocal_338, 13);
				}
			}
			else
			{
				if (func_708(PLAYER::PLAYER_PED_ID()))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_80.f_12), Local_341, 0, 0, 1);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 12))
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 13))
					{
						if (func_622(0, 1, 1, 1))
						{
							func_707("GB_ASLT_SUB", -1);
							GAMEPLAY::SET_BIT(&iLocal_338, 13);
						}
					}
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 2);
	}
	if (iLocal_473 == -1)
	{
		if (func_560())
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_469))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
				{
					func_706();
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 5))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
				{
					GAMEPLAY::SET_BIT(&iLocal_338, 5);
					UI::REMOVE_BLIP(&uLocal_469);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
			{
				if (func_368(PLAYER::PLAYER_ID()) >= 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[0]))
					{
						if (!func_10(Local_80.f_13[0]))
						{
							UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
							GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_80.f_13[0]), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
						}
					}
				}
			}
		}
		if (UI::DOES_BLIP_EXIST(uLocal_470))
		{
			UI::REMOVE_BLIP(&uLocal_470);
		}
	}
	else if (iLocal_473 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (UI::DOES_BLIP_EXIST(uLocal_469))
		{
			UI::REMOVE_BLIP(&uLocal_469);
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
		{
			if (func_368(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!UI::DOES_BLIP_EXIST(uLocal_470))
				{
					uLocal_470 = UI::ADD_BLIP_FOR_COORD(func_24());
					UI::SET_BLIP_ROUTE(uLocal_470, 1);
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_470))
			{
				UI::REMOVE_BLIP(&uLocal_470);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uLocal_470))
		{
			UI::REMOVE_BLIP(&uLocal_470);
		}
	}
	else
	{
		if (UI::DOES_BLIP_EXIST(uLocal_469))
		{
			UI::REMOVE_BLIP(&uLocal_469);
		}
		iVar0 = func_551();
		if (iVar0 != func_18())
		{
			if (func_1108(1))
			{
				iVar1 = func_553();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
						{
							if (func_368(PLAYER::PLAYER_ID()) >= 1)
							{
								if (!UI::DOES_BLIP_EXIST(uLocal_470))
								{
									uLocal_470 = UI::ADD_BLIP_FOR_COORD(func_24());
									UI::SET_BLIP_ROUTE(uLocal_470, 1);
								}
							}
						}
						else if (UI::DOES_BLIP_EXIST(uLocal_470))
						{
							UI::REMOVE_BLIP(&uLocal_470);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_560())
		{
			if (func_368(PLAYER::PLAYER_ID()) >= 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_553();
						if (func_1108(1))
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), 0))
								{
									func_606(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), uVar3, uVar4, uVar5, 0);
								}
								else
								{
									GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 4))
	{
		GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 4);
	}
	if (func_560())
	{
		if (func_368(PLAYER::PLAYER_ID()) > 2)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
				{
					if (iLocal_473 == -1)
					{
						if (func_1127())
						{
							if (!func_645("GB_AST_RETP"))
							{
								func_642("GB_AST_RETP", 0);
							}
						}
						else if (func_382())
						{
							if (!func_645("GB_AST_RETP"))
							{
								func_642("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_473 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!func_645("GB_AST_DROP"))
						{
							func_642("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_551();
						if (iVar0 != func_18())
						{
							if (func_1108(1))
							{
								iVar1 = func_553();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_645("GB_AST_DROPB"))
									{
										iVar16 = func_263(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_261(iVar16);
											func_629("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_645("GB_AST_RETNG"))
									{
										func_703("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_645("GB_AST_RETGR"))
								{
									sVar18 = func_616(iVar0);
									func_700("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_645("GB_AST_RETNG"))
								{
									func_703("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_645("GB_AST_RETGR"))
							{
								sVar18 = func_616(iVar0);
								func_700("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_699() };
					if (!func_645(&Var8))
					{
						func_642(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_681();
		}
	}
	else
	{
		func_681();
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 2))
	{
		if (func_382())
		{
			if (!func_628(86))
			{
				if (func_368(PLAYER::PLAYER_ID()) >= 1)
				{
					if (func_622(0, 1, 1, 1))
					{
						sVar18 = func_616(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
						iVar19 = func_615(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
						if (func_1108(1))
						{
							if (Local_80.f_5 > -1)
							{
								func_614("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_614("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_80.f_5 > -1)
						{
							func_614("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_614("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_613(1);
						GAMEPLAY::SET_BIT(&iLocal_338, 2);
					}
				}
			}
		}
	}
	func_693();
	func_692();
	func_691();
}

void func_691()
{
	if (!func_560())
	{
		return;
	}
	if (func_368(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_12) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_80.f_12), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_80.f_12)))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 3) && !GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
				{
					UI::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
					GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_80.f_12), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_692()
{
	iVar0 = func_551();
	Var1 = { func_24() };
	if (UI::DOES_BLIP_EXIST(uLocal_470))
	{
		UI::GET_HUD_COLOUR(12, &uVar4, &uVar5, &uVar6, &uVar7);
		GRAPHICS::DRAW_MARKER(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 3))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 3);
				}
			}
		}
	}
}

void func_693()
{
	switch (iLocal_478)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_80.f_12), 1) };
				if (!func_439(Local_480, 0f, 0f, 0f, 0))
				{
					Local_480 = { 0f, 0f, 0f };
				}
				if (func_694(Var0, iLocal_479, 0))
				{
					iLocal_478++;
				}
				if (iLocal_478 == 0)
				{
					iLocal_479++;
				}
				if (iLocal_479 >= 37)
				{
					iLocal_479 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_80.f_5 == -1)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
				{
					bVar3 = true;
					if (func_439(Local_480, 0f, 0f, 0f, 0))
					{
						Local_480 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_80.f_12), 1) };
					}
				}
			}
			else if (Local_80.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
				{
					if (func_439(Local_480, 0f, 0f, 0f, 0))
					{
						Local_480 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_80.f_12), 1) };
					}
					bVar3 = true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_80.f_12);
				}
			}
			if (bVar3)
			{
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_32 = -1082130432;
				Var4.f_34 = 1;
				Var4.f_3 = 0;
				Var4.f_5 = 1f;
				Var4.f_13[0] = { Local_480 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
				{
					if (func_51(Local_480, 20f, &Local_483, &uLocal_486, &Var4))
					{
						Local_483 = { Local_483 + Vector(0.5f, 0f, 0f) };
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_80.f_12));
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_80.f_12), Local_483, 0, 0, 1);
						ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(Local_80.f_12), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
						GAMEPLAY::SET_BIT(&iLocal_339, 3);
						iLocal_478 = 0;
					}
				}
			}
			else if (Local_80.f_5 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_80.f_12), 1) };
				if (!func_694(Var0, iLocal_479, 0))
				{
					iLocal_478 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_339, 3))
	{
		if (func_622(0, 1, 1, 1))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_339, 3);
			func_707("GB_HLP_WRP", -1);
		}
	}
}

int func_694(struct<3> Param0, int iParam3, float fParam4)
{
	if (func_698(iParam3))
	{
		func_695(iParam3, &Var0, &Var3, &uVar6, fParam4);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, uVar6, 0, 1);
	}
	return 0;
}

void func_695(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	Var0 = { func_697(iParam0) };
	uVar3 = func_696(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_63(&Var4, 0f, 0f, uVar3);
	Var4 = { Var4 / FtoV(SYSTEM::VMAG(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_696(int iParam0)
{
	return Global_4008564[iParam0].f_7;
}

Vector3 func_697(int iParam0)
{
	return Global_4008564[iParam0].f_4;
}

int func_698(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 37)
	{
		return 1;
	}
	return 0;
}

struct<8> func_699()
{
	switch (func_1111())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_700(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_701(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312585 = 16;
		Global_1312585.f_56 = iParam2;
	}
}

int func_701(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_702(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	func_634();
	Global_1312585 = 3;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	func_633();
	func_632(bParam2);
	func_631();
	return 1;
}

bool func_702(char* sParam0, char* sParam1)
{
	if (!func_638())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_703(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_704(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_704(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_0x43E4111189E54F0E(sParam1) > 63)
	{
		return 0;
	}
	if (func_705(sParam0, sParam1) && Global_1312585.f_56 == Global_1312585.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312585.f_54;
	func_634();
	Global_1312585 = 9;
	StringCopy(&(Global_1312585.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312585.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_1));
	StringCopy(&(Global_1312585.f_12), sParam0, 16);
	StringCopy(&(Global_1312585.f_16), sParam1, 64);
	Global_1312585.f_58 = iParam3;
	Global_1312585.f_56 = iParam3;
	Global_1312585.f_54 = uVar0;
	func_633();
	func_632(bParam2);
	func_631();
	return 1;
}

bool func_705(char* sParam0, char* sParam1)
{
	if (!func_638())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(sParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_12)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(sParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312585.f_16));
}

void func_706()
{
	if (func_368(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_469))
		{
			UI::REMOVE_BLIP(&uLocal_469);
		}
		return;
	}
	if (UI::DOES_BLIP_EXIST(uLocal_469))
	{
		return;
	}
	uLocal_469 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_80.f_12));
	UI::SET_BLIP_PRIORITY(uLocal_469, 12);
	UI::SET_BLIP_SPRITE(uLocal_469, 457);
	UI::_0xC4278F70131BAA6D(uLocal_469, 1);
	UI::_0x75A16C3DA34F1245(uLocal_469, 1);
	UI::SET_BLIP_SCALE(uLocal_469, Global_262145.f_12355);
	UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_469, "GB_AST_BLIP");
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
	{
		if (func_1127())
		{
			func_679(&uLocal_469, 18);
		}
		else
		{
			func_679(&uLocal_469, 18);
		}
	}
	else
	{
		func_679(&uLocal_469, 6);
	}
	if (func_1127())
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 0))
		{
			UI::SET_BLIP_FLASHES(uLocal_469, 1);
			UI::SET_BLIP_FLASH_TIMER(uLocal_469, 7000);
			UI::FLASH_MINIMAP_DISPLAY();
			GAMEPLAY::SET_BIT(&iLocal_338, 0);
		}
	}
}

void func_707(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_708(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_150304;
}

void func_709(bool bParam0, int iParam1)
{
	iVar0 = func_710(iParam1);
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1573343, iVar0))
		{
			GAMEPLAY::SET_BIT(&Global_1573343, iVar0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1573343, iVar0))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573343, iVar0);
	}
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

bool func_711()
{
	return Global_1573342;
}

void func_712(bool bParam0)
{
	if (bParam0)
	{
		if (!func_266(PLAYER::PLAYER_ID(), 9))
		{
			if (func_368(PLAYER::PLAYER_ID()) != 0)
			{
				func_373(9);
			}
		}
	}
	else if (func_266(PLAYER::PLAYER_ID(), 9))
	{
		func_375(9);
	}
}

int func_713(char* sParam0)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_647(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_714()
{
	if (func_372())
	{
		return;
	}
	if (func_368(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 5))
	{
		if (!func_1127())
		{
			if (((Local_80.f_5 != -1 || Local_80.f_7 != -1) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 20))
			{
				GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 5);
				OBJECT::_0x78857FC65CADB909(1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_80.f_12))
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 0, 1);
				}
				cVar8 = func_616(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
				iVar9 = func_615(PLAYER::INT_TO_PLAYERINDEX(Local_80.f_9));
				if (func_19(PLAYER::PLAYER_ID(), 1))
				{
					Var0 = { func_730(1) };
					if (func_560())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 0)
						{
							func_715(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1066(-1, 0, 0, -1, 0, 0);
				}
				else
				{
					Var0 = { func_730(0) };
					if (func_560())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 0)
						{
							func_715(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1066(-1, 0, 0, -1, 0, 0);
				}
				func_424(1);
			}
		}
	}
}

int func_715(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_716(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_716(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_729(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_301(&(Var0.f_69), 4);
	return func_717(&Var0);
}

int func_717(var uParam0)
{
	if (uParam0->f_1 == 1)
	{
		if (Global_2439138.f_3045)
		{
			return 0;
		}
	}
	func_728(uParam0, uParam0->f_17);
	func_727(uParam0);
	if (func_42())
	{
		func_727(uParam0);
	}
	if (func_726(uParam0->f_1))
	{
		func_719();
		if (Global_2439138.f_2723[0].f_2 == 0)
		{
			Global_2439138.f_2723[0] = { *uParam0 };
			return 1;
		}
		if (((Global_2439138.f_2723[0].f_1 == 13 || Global_2439138.f_2723[0].f_1 == 53) || Global_2439138.f_2723[0].f_1 == 54) || Global_2439138.f_2723[0].f_1 == 58)
		{
			Global_2439138.f_2723[0].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2439138.f_2723[iVar0 + 1] = { Global_2439138.f_2723[iVar0] };
			iVar0 = (iVar0 + -1);
		}
		Global_2439138.f_2723[1] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2439138.f_2723[iVar0].f_2 == 0)
		{
			Global_2439138.f_2723[iVar0] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_719();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_301(&(Global_2439138.f_2723[iVar0].f_69), 2);
				Global_2439138.f_2723[iVar0].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_718(uParam0->f_69, 128))
			{
				if (func_306(Global_2439138.f_2723[iVar0].f_1))
				{
					Global_2439138.f_2723[iVar0].f_2 = 5;
					func_301(&(Global_2439138.f_2723[iVar0].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_718(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_719()
{
	if (Global_2439138.f_3046)
	{
		return;
	}
	if (!Global_76890)
	{
		Global_76890 = 1;
		bVar0 = true;
	}
	func_720();
	if (bVar0)
	{
		Global_76890 = 0;
	}
}

void func_720()
{
	Global_2439138.f_3047 = 0;
	Global_2439138.f_3047.f_578 = 0;
	func_724(&(Global_2439138.f_3047.f_1));
	Global_2439138.f_3047.f_1.f_1 = 0;
	func_721(&(Global_2439138.f_3047.f_1));
}

void func_721(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_76890)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_76891)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_723(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_722(0);
}

void func_722(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_723(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_724(var uParam0)
{
	func_725(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_725(var uParam0)
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

int func_726(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_727(var uParam0)
{
	if (func_308(uParam0->f_1))
	{
		uParam0->f_72 = func_264();
	}
}

void func_728(var uParam0, int iParam1)
{
	if (func_308(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_18() || !func_1245(iParam1, 0, 1))
	{
		return;
	}
	if (func_306(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_654(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_729(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_19 = func_18();
	uParam1->f_20 = func_18();
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

struct<8> func_730(bool bParam0)
{
	if (bParam0)
	{
		switch (func_1111())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_1111())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_731()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 12))
		{
			if (func_371(PLAYER::PLAYER_ID()))
			{
				GAMEPLAY::SET_BIT(&iLocal_339, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
			}
			else if (func_368(PLAYER::PLAYER_ID()) < 1)
			{
				GAMEPLAY::SET_BIT(&iLocal_339, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
			}
		}
		else if (!func_371(PLAYER::PLAYER_ID()))
		{
			if (func_368(PLAYER::PLAYER_ID()) >= 1)
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 0, 1);
				GAMEPLAY::CLEAR_BIT(&iLocal_339, 12);
			}
		}
	}
}

void func_732()
{
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
			{
				func_1037(&sVar25, &cVar29, &cVar33, &cVar37, &cVar41, &sVar45);
				if (func_560())
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_6);
					if (iVar0 == PLAYER::PLAYER_ID())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(87, "GB_WINNER", &sVar25, 1, -1, 2, 1, 0);
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
						{
							GAMEPLAY::SET_BIT(&iLocal_338, 17);
							func_925(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_751(159, 1, &Var2, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						iVar1 = func_553();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_368(PLAYER::PLAYER_ID()) > 1)
							{
								sVar49 = func_750();
								iVar50 = func_615(PLAYER::PLAYER_ID());
								func_715(87, "GB_WINNER", &cVar29, sVar49, iVar50, 0, -1, -1, -1, 2, -1);
							}
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							if (func_1128() == Local_80.f_8)
							{
								func_751(159, 1, &Var2, 0);
							}
							else
							{
								func_751(159, 0, &Var2, 0);
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						}
						else
						{
							if (func_368(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar49 = func_616(iVar0);
									iVar50 = func_615(iVar0);
								}
								else
								{
									sVar49 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar50 = 1;
								}
								if (func_1111() != 1)
								{
									func_715(88, "GB_WORK_OVER", &cVar33, sVar49, iVar50, 0, -1, -1, -1, 2, -1);
								}
								else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
								{
									func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
								}
							}
							func_751(159, 0, &Var2, 0);
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							func_751(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar49 = func_616(iVar0);
								iVar50 = func_615(iVar0);
							}
							else
							{
								sVar49 = PLAYER::GET_PLAYER_NAME(iVar0);
								iVar50 = 1;
							}
							if (func_1111() != 1)
							{
								func_715(88, "GB_WORK_OVER", &cVar33, sVar49, iVar50, 0, -1, -1, -1, 2, -1);
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
							{
								func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
						{
							GAMEPLAY::SET_BIT(&iLocal_338, 17);
							func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_751(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 10))
			{
				if (Local_80.f_6 > -1)
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_80.f_6);
				}
				if (func_560())
				{
					if (func_1127())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar49 = func_616(iVar0);
									iVar50 = func_615(iVar0);
								}
								else
								{
									sVar49 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar50 = 1;
								}
								func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
							}
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else if (Local_80.f_6 > -1)
					{
						if (func_19(PLAYER::PLAYER_ID(), 1))
						{
							iVar1 = func_553();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == PLAYER::PLAYER_ID())
								{
									if (func_368(PLAYER::PLAYER_ID()) > 1)
									{
										func_1089(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1, 0);
									}
								}
								else if (func_368(PLAYER::PLAYER_ID()) > 1)
								{
									iVar50 = func_615(PLAYER::PLAYER_ID());
									sVar49 = func_750();
									func_715(87, "GB_WINNER", "BIGM_ASL_DESG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
								}
								if (func_1127() || func_382())
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
									{
										GAMEPLAY::SET_BIT(&iLocal_338, 17);
										func_925(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								if (Local_80.f_6 == PLAYER::PLAYER_ID())
								{
									func_751(159, 1, &Var2, 0);
								}
								else
								{
									func_751(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_368(PLAYER::PLAYER_ID()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar49 = func_616(iVar0);
										iVar50 = func_615(iVar0);
									}
									else
									{
										sVar49 = PLAYER::GET_PLAYER_NAME(iVar0);
										iVar50 = 1;
									}
									func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
								}
								if (func_1127() || func_382())
								{
									if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
									{
										GAMEPLAY::SET_BIT(&iLocal_338, 17);
										func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								func_751(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == PLAYER::PLAYER_ID())
						{
							if (func_368(PLAYER::PLAYER_ID()) > 1)
							{
								func_1089(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1, 0);
							}
							if (func_1127() || func_382())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
								{
									GAMEPLAY::SET_BIT(&iLocal_338, 17);
									func_925(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_751(159, 1, &Var2, 0);
						}
						else
						{
							if (func_368(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar49 = func_616(iVar0);
									iVar50 = func_615(iVar0);
								}
								else
								{
									sVar49 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar50 = 1;
								}
								func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
							}
							if (func_1127() || func_382())
							{
								if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
								{
									GAMEPLAY::SET_BIT(&iLocal_338, 17);
									func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_751(159, 0, &Var2, 0);
						}
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							sVar49 = func_750();
							iVar50 = func_615(PLAYER::PLAYER_ID());
							func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 15))
			{
				if (func_560())
				{
					if (func_1127())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							sVar49 = func_750();
							iVar50 = func_615(PLAYER::PLAYER_ID());
							func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 18))
			{
				if (func_560())
				{
					if (func_1127())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1, 0);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							sVar49 = func_750();
							iVar50 = func_615(PLAYER::PLAYER_ID());
							func_715(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar49, iVar50, 0, -1, -1, -1, 2, -1);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
					else
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1, 0);
						}
						if (func_1127() || func_382())
						{
							if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
							{
								GAMEPLAY::SET_BIT(&iLocal_338, 17);
								func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_751(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 3))
			{
				func_1037(&sVar25, &cVar29, &cVar33, &cVar37, &cVar41, &sVar45);
				if (func_560())
				{
					if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", &sVar45, 1, -1, 2, 1, 0);
						}
					}
					else if (func_368(PLAYER::PLAYER_ID()) > 1)
					{
						func_1089(88, "GB_WORK_OVER", &sVar45, 1, -1, 2, 1, 0);
					}
				}
				if (func_1127() || func_382())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 17);
						func_925(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_751(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 5))
			{
				if (func_560())
				{
					if (func_1127())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
						}
					}
					else if (func_368(PLAYER::PLAYER_ID()) > 1)
					{
						func_1089(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (func_1127() || func_382())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 17);
						func_925(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_751(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 9))
			{
				if (func_560())
				{
					if (func_1127())
					{
						if (func_368(PLAYER::PLAYER_ID()) > 1)
						{
							func_1089(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1, 0);
						}
					}
					else if (func_368(PLAYER::PLAYER_ID()) > 1)
					{
						func_1089(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1, 0);
					}
				}
				if (func_1127() || func_382())
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 17);
						func_925(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_751(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&iLocal_339, 6);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_339, 6))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 8))
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 19))
				{
					iLocal_476 = -1;
					AUDIO::STOP_SOUND(iLocal_476);
				}
				func_681();
				GAMEPLAY::SET_BIT(&iLocal_339, 8);
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 20))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
					AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
				}
			}
			if (UI::DOES_BLIP_EXIST(uLocal_472))
			{
				UI::REMOVE_BLIP(&uLocal_472);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_471))
			{
				UI::REMOVE_BLIP(&uLocal_471);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_469))
			{
				UI::REMOVE_BLIP(&uLocal_469);
			}
			func_749();
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 29))
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 29);
			}
			if (func_733(&uLocal_489, 1, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 1);
			}
		}
	}
}

int func_733(var uParam0, bool bParam1, int iParam2)
{
	func_373(29);
	if ((*uParam0 > 0 && !func_303()) && func_368(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_748())
		{
			func_747();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 2);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2537071.f_4588), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_746(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_740(iParam2);
				func_746(uParam0, 2);
			}
			break;
		
		case 2:
			func_740(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_734(func_735(0)))
				{
					UI::CLEAR_HELP(1);
				}
				func_746(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 2);
				func_746(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_734(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_735(int iParam0)
{
	if (((func_738(PLAYER::PLAYER_ID()) || func_737(PLAYER::PLAYER_ID())) || func_323()) || iParam0)
	{
		if (func_737(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_293(func_736()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_736()
{
	return Global_1650640;
}

bool func_737(int iParam0)
{
	return func_294(func_291(iParam0), 0);
}

bool func_738(int iParam0)
{
	return func_739(func_291(iParam0));
}

int func_739(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590535[PLAYER::PLAYER_ID()] == 148 && func_248(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_35, 1))
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

void func_740(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4588, 0))
	{
		if (((((((((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2537071.f_795, 2)) && func_1245(PLAYER::PLAYER_ID(), 1, 1)) && !Global_73825) && !Global_58693) && !CAM::IS_SCREEN_FADED_OUT()) && !func_266(PLAYER::PLAYER_ID(), 22)) && func_368(PLAYER::PLAYER_ID()) != 0) && !func_744(func_745())) && !func_738(PLAYER::PLAYER_ID())) && !func_743(func_291(PLAYER::PLAYER_ID()))) && !func_742(func_291(PLAYER::PLAYER_ID())))
		{
			GAMEPLAY::SET_BIT(&(Global_2537071.f_4588), 1);
			func_741(func_735(iParam0), -1);
			func_613(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4588), 0);
		}
	}
}

void func_741(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_742(int iParam0)
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

int func_743(int iParam0)
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

int func_744(int iParam0)
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

int func_745()
{
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_746(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_747()
{
	Global_2462222 = 1;
}

int func_748()
{
	if (((((((func_291(PLAYER::PLAYER_ID()) == 170 || func_291(PLAYER::PLAYER_ID()) == 219) || func_291(PLAYER::PLAYER_ID()) == 221) || func_291(PLAYER::PLAYER_ID()) == 220) || func_291(PLAYER::PLAYER_ID()) == 216) || func_291(PLAYER::PLAYER_ID()) == 215) || func_291(PLAYER::PLAYER_ID()) == 214) || func_291(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_583(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_749()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 9))
	{
		GAMEPLAY::SET_BIT(&iLocal_339, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_561())
					{
						func_688(iVar1, 421, 0, 0);
					}
					else
					{
						func_688(iVar1, 457, 0, 0);
					}
					func_687(iVar1, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_750()
{
	iVar0 = func_46(PLAYER::PLAYER_ID());
	if (iVar0 != func_18())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_266(iVar0, 28) || func_266(PLAYER::PLAYER_ID(), 28)) || func_618(iVar0)) && !func_617(iVar0))
			{
				return func_619(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_619(iVar0, 0);
			}
		}
		sVar1 = func_621(&(Global_1628237[iVar0].f_11.f_104));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return func_619(iVar0, 0);
		}
		else
		{
			return sVar1;
		}
	}
	return "";
}

void func_751(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	func_923(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_922(iParam0, uParam2->f_13, bParam3));
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
		iVar0 = (iVar0 + func_921(iParam0, bParam3));
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
	if (func_919(iParam0))
	{
		if (bParam1)
		{
			if (func_918(PLAYER::PLAYER_ID()) > 0)
			{
				func_917();
			}
			else
			{
				func_916();
			}
		}
		else
		{
			func_915();
		}
	}
	func_899(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_897(iParam0, uParam2, &iVar0, &iVar5);
	func_872(iParam0, uParam2, &iVar0, &iVar5);
	func_869(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_852(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2537071.f_5124.f_382 = uVar4;
	}
	else
	{
		Global_2537071.f_5124.f_382 = iVar5;
	}
	iVar8 = func_325();
	if (iVar8 != func_18() && iParam0 != 148)
	{
		if (func_19(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_16(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_843(&iVar0, 1);
			}
		}
	}
	func_839(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1674356.f_10 = iVar1;
		func_838();
		func_795(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1674356.f_9 = iVar0;
		func_772(iParam0, iVar0, iVar7, uVar4, iVar5, uParam2);
		func_771(iParam0, iVar0);
		if (func_770(iParam0))
		{
			if (func_769(iParam0) > -1)
			{
				func_768(func_769(iParam0), iVar0);
			}
		}
		Global_2462880 = iVar0;
		func_767(&Global_2461144, 0, 0);
	}
	if (func_370(PLAYER::PLAYER_ID()) || func_265(PLAYER::PLAYER_ID()))
	{
		func_758(iParam0);
	}
	if (func_739(iParam0))
	{
		Global_1674374.f_13 = iVar0;
		Global_1674374.f_14 = iVar1;
	}
	if (func_743(iParam0))
	{
		Global_1674428.f_13 = iVar0;
		Global_1674428.f_14 = iVar1;
	}
	if (func_581(iParam0))
	{
		Global_1674491.f_12 = iVar0;
		Global_1674491.f_13 = iVar1;
	}
	if (func_579(iParam0))
	{
		Global_1674535.f_12 = iVar0;
		Global_1674535.f_13 = iVar1;
	}
	if (func_577(iParam0))
	{
		Global_1674589.f_12 = iVar0;
		Global_1674589.f_13 = iVar1;
	}
	if (func_742(iParam0))
	{
		if (func_757(iParam0))
		{
			Global_1674671.f_12 = iVar0;
			Global_1674671.f_13 = iVar1;
		}
		else if (func_753(iParam0))
		{
			Global_1674725.f_12 = iVar0;
			Global_1674725.f_13 = iVar1;
		}
	}
	if (func_752(iParam0))
	{
		Global_1674809.f_12 = iVar0;
		Global_1674809.f_13 = iVar1;
	}
	if (func_571(iParam0))
	{
		Global_1674884.f_16 = iVar0;
		Global_1674884.f_17 = iVar1;
	}
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_753(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_754(func_755(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_754(int iParam0)
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

int func_755(int iParam0)
{
	if (func_291(iParam0) == 237 || func_291(iParam0) == 250)
	{
		return func_756(iParam0);
	}
	return -1;
}

int func_756(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_757(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_758(int iParam0)
{
	if (func_766(PLAYER::PLAYER_ID()) && func_765())
	{
		if (func_392(iParam0))
		{
			func_760(10146, -1);
		}
		else if (func_393(iParam0))
		{
			func_760(10148, -1);
		}
		else if (func_294(iParam0, 1))
		{
			func_760(10149, -1);
		}
		else if (func_759(iParam0))
		{
			func_760(10150, -1);
		}
	}
}

int func_759(int iParam0)
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

void func_760(int iParam0, int iParam1)
{
	iVar0 = func_764(iParam0, func_380(iParam1), 0);
	iVar0++;
	if (!func_763(iParam0))
	{
		func_762(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_761(iParam0, iVar0, iParam1, 1);
	}
}

void func_761(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_380(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_380(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_380(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_380(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_380(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_380(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_380(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_380(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_380(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_380(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_380(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_380(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_380(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_380(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_380(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_380(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_380(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_380(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_380(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_380(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_380(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_380(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_380(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_380(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_380(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_380(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_380(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_380(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_380(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_380(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_380(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_380(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_380(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_380(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_380(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_380(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_380(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_380(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_380(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_380(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_380(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_380(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_380(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_380(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_380(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_380(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_380(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_380(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_380(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_380(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_380(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_380(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_380(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_380(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_380(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_380(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_380(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_380(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_380(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_380(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_380(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_380(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_380(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_380(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_380(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_380(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_380(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_380(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_380(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_380(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_380(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_380(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_380(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_380(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_380(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_380(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_380(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_380(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_380(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_380(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_380(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_380(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_380(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_380(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_380(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_380(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_380(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_380(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_380(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_380(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_380(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_380(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_380(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_380(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_380(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_380(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_380(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_380(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_380(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_380(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_380(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_380(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_380(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_380(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_380(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_380(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_762(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_380(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_763(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
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
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_764(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_380(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_765()
{
	return func_324(PLAYER::PLAYER_ID());
}

bool func_766(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_123, 14);
}

void func_767(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_768(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23489 == 0 || Global_262145.f_23489 == 1)
		{
			if (!GAMEPLAY::IS_PC_VERSION() || Global_262145.f_23489 == 1)
			{
				Global_2537071.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6584)
				{
					iParam1 = Global_262145.f_6584;
				}
				Global_2537071.f_284 = iParam1;
				Global_2537071.f_285 = 0;
			}
		}
	}
}

int func_769(int iParam0)
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

int func_770(int iParam0)
{
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

void func_771(int iParam0, int iParam1)
{
	if (func_766(PLAYER::PLAYER_ID()) && func_765())
	{
		if (func_392(iParam0) && iParam1 > 0)
		{
			func_762(10147, (func_764(10147, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_772(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	iVar5 = func_553();
	if (iVar5 != func_18())
	{
		func_794(iVar5, &uVar0, &uVar1);
	}
	bVar6 = !func_1108(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_793())
			{
				unk_0xECA658CE2A4E5A72(iParam1, uParam3);
			}
			break;
		
		case 190:
			if (func_765())
			{
				if (!func_793())
				{
					Var7 = { func_792() };
					unk_0x8586789730B10CAF(iParam1, GAMEPLAY::GET_HASH_KEY(func_791(Var7)), func_790(Var7), iParam4);
				}
			}
			else if (func_793())
			{
				func_779(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_778())
			{
				if (!func_793())
				{
					unk_0x8586789730B10CAF(iParam1, GAMEPLAY::GET_HASH_KEY(func_791(func_777(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_793())
			{
				func_779(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_778())
			{
				if (!func_793())
				{
					iVar2 = func_773(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					unk_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_793())
			{
				func_779(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xDEE612F2D71B0308(uVar0, uVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_793())
			{
				func_779(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iParam1);
			}
			break;
		
		case 237:
			if (func_778())
			{
				if (!func_793())
				{
					unk_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_793())
			{
				func_779(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_793())
			{
				func_779(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_793())
			{
				func_779(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_793())
			{
				func_779(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_793())
			{
				func_779(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0xA8C1B24657FB32B3(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_793())
				{
					func_779(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					unk_0xB0E03FD240577D6C(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_793())
			{
				func_779(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				unk_0xB0E03FD240577D6C(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_793())
			{
				func_779(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4263954[iVar4].f_6 = uVar0;
				Global_4263954[iVar4].f_7 = uVar1;
				Global_4263954[iVar4].f_8 = bVar6;
			}
			else
			{
				unk_0x0CB1BE0633C024A8(uVar0, uVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_773(int iParam0, int iParam1)
{
	fVar0 = func_776(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_774(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_774(int iParam0, int iParam1)
{
	return (func_775(iParam0) * iParam1);
}

int func_775(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22306;
		
		case 0:
			return Global_262145.f_22307;
		
		case 1:
			return Global_262145.f_22308;
		
		case 2:
			return Global_262145.f_22309;
		
		case 3:
			return Global_262145.f_22310;
		
		case 4:
			return Global_262145.f_22311;
		
		case 5:
			return Global_262145.f_22312;
		
		case 6:
			return Global_262145.f_22313;
		
		case 7:
			return Global_262145.f_22314;
		
		default:
	}
	return 0;
}

float func_776(int iParam0, int iParam1)
{
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22316);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22318;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22315);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22319;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22320;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22317);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_777(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1590535[iParam0].f_274.f_183[5];
}

bool func_778()
{
	return func_20(PLAYER::PLAYER_ID());
}

void func_779(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_793())
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
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_780(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_780(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_780(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_780(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_780(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_793())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_38()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_787(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_786(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_781(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_781(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_782(iParam0);
	}
}

void func_782(int iParam0)
{
	bVar0 = false;
	if (!func_793())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_785(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_783(&(Global_4263954[iParam0]));
	}
}

void func_783(var uParam0)
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
	func_784(&(uParam0->f_14));
	func_784(&(uParam0->f_14.f_13));
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

void func_784(var uParam0)
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

int func_785(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_786(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_787(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_793())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = uParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = uParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_788(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_788(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_610(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_789();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_789()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_790(int iParam0)
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

char* func_791(int iParam0)
{
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

struct<2> func_792()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11.f_193;
}

int func_793()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_794(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1628237[iParam0].f_11.f_8[0];
	*uParam2 = Global_1628237[iParam0].f_11.f_8[1];
}

int func_795(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_796(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_796(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	iVar0 = func_806(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_802(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_797(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_797(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	Var0 = { func_800(iParam0, 1) };
	if (iParam0 == func_799(PLAYER::PLAYER_PED_ID()))
	{
		func_798(1);
	}
	func_802(Var0, iParam1, 0, sParam2, iParam3);
}

void func_798(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_799(var uParam0)
{
	return uParam0;
}

Vector3 func_800(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_801(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = Var3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.z + 0.18f);
	}
	else
	{
		fVar13 = (Var7.z + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_801(var uParam0)
{
	return uParam0;
}

void func_802(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { Param0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_805(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_804();
			Global_2439138.f_1290[iVar1].f_10 = func_803();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_803()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_804()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_805(struct<3> Param0, var uParam3, var uParam4)
{
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
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

var func_806(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_807(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_807(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_837(PLAYER::PLAYER_ID()) || func_836(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_312() || func_835(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_834(uParam2))
	{
	}
	if (func_833())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_831(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_830(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_828(0, &iVar1);
					break;
				
				case 3:
					func_828(1, &iVar1);
					break;
				
				case 1:
					func_826(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
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
			func_825(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_817((func_824(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_825(1165, iVar1, -1);
				}
				func_812(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_808((func_810(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_808((func_810(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_808(int iParam0)
{
	if (func_833())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_809(-1804740956, iParam0);
	}
}

void func_809(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_810(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1245(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_811(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_811(-1804740956);
		}
	}
	return 0;
}

int func_811(int iParam0)
{
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_812(int iParam0)
{
	Var0 = { func_47(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_815(func_816(&Var0));
			if (iVar13 == 0)
			{
				func_814(&Global_1387915, iParam0);
				func_813(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_814(&Global_1387916, iParam0);
				func_813(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_814(&Global_1387917, iParam0);
				func_813(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_814(&Global_1387918, iParam0);
				func_813(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_814(&Global_1387919, iParam0);
				func_813(1894078811, Global_1387919);
			}
		}
	}
}

void func_813(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = iParam1;
			break;
		
		case 1669900865:
			Global_1387912 = iParam1;
			break;
		
		case 54164875:
			Global_1387912 = iParam1;
			break;
		
		case -842450336:
			Global_1387913 = iParam1;
			break;
		
		case -1576871964:
			Global_1387914 = iParam1;
			break;
		
		case -1446982891:
			Global_1387915 = iParam1;
			break;
		
		case -1676857426:
			Global_1387916 = iParam1;
			break;
		
		case 1280806976:
			Global_1387917 = iParam1;
			break;
		
		case -1096682281:
			Global_1387918 = iParam1;
			break;
		
		case 1894078811:
			Global_1387919 = iParam1;
			break;
		
		case -1566025259:
			Global_1387920 = iParam1;
			break;
		
		case -621080327:
			Global_1387921 = iParam1;
			break;
		
		case 1021002722:
			Global_1387922 = iParam1;
			break;
		
		case -1670771646:
			Global_1387923 = iParam1;
			break;
		
		case -1992420464:
			Global_1387924 = iParam1;
			break;
		
		case -386175531:
			Global_1387925 = iParam1;
			break;
		
		case -203536263:
			Global_1387926 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_814(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_815(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_816(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_817(int iParam0, int iParam1, int iParam2)
{
	if (func_833())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_380(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_380(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
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
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_823(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_821(iParam0, 1);
		}
		func_761(639, iParam0, -1, 1);
		func_762(640, func_821(iParam0, 1), -1, 1, 0);
		Global_1388060[func_380(-1)] = iParam0;
		func_818(-1109644434, 7, 0);
	}
}

void func_818(int iParam0, int iParam1, int iParam2)
{
	if (func_820(iParam1, iParam2))
	{
		iVar0 = func_819();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_819()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_820(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_821(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_822(iParam0, 0);
}

int func_822(int iParam0, int iParam1)
{
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
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
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

int func_823(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_824(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_380(-1)];
			}
			else if (func_823(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_380(-1)];
	}
	return 0;
}

void func_825(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_764(iParam0, func_380(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_763(iParam0))
	{
		func_762(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_761(iParam0, iVar0, iParam2, 1);
	}
}

void func_826(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_120(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_48(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_827(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_827(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_827(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_828(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1245(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_48(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_1245(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_829(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_48(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_827(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_827(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_829(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_40(iParam0), func_40(iParam1));
	return 0f;
}

int func_830(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_827(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_831(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_824(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_824(PLAYER::PLAYER_ID());
		}
	}
	if (func_832(8000, 0, 0) > 0)
	{
		if (func_832(8000, 0, 0) < (iParam0 + func_824(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_832(8000, 0, 0) - func_824(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_832(int iParam0, bool bParam1, int iParam2)
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
	return Global_291133[iParam0];
}

int func_833()
{
	return 1;
}

int func_834(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_835(int iParam0)
{
	return func_577(func_291(iParam0));
}

bool func_836(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_837(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_838()
{
	Global_2462221 = 1;
}

void func_839(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_346(7))
	{
		return;
	}
	iVar0 = func_842(iParam0);
	iVar1 = func_841(iParam0);
	iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2537071.f_5124.f_265, NETWORK::GET_NETWORK_TIME()));
	if (func_840(iParam0) != -1)
	{
		if (iVar2 > func_840(iParam0))
		{
			iVar2 = func_840(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12395)
	{
		iVar2 = Global_262145.f_12395;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_840(int iParam0)
{
	if (func_294(iParam0, 0) || func_393(iParam0))
	{
		return Global_262145.f_18487;
	}
	if (func_392(iParam0))
	{
		return Global_262145.f_18486;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18483;
		
		case 191:
			return Global_262145.f_18485;
		
		case 190:
			return Global_262145.f_18484;
		
		case 227:
			return Global_262145.f_21043;
		
		case 226:
			return Global_262145.f_21031;
		
		case 225:
			return Global_262145.f_21051;
		
		case 230:
			return Global_262145.f_22303;
		
		case 229:
			return Global_262145.f_22207;
		
		case 233:
			return Global_262145.f_22779;
		
		case 237:
			return Global_262145.f_23942;
		
		case 238:
			return Global_262145.f_24053;
		
		case 249:
			return Global_262145.f_24069;
		
		case 243:
			return Global_262145.f_26301;
		
		default:
	}
	return -1;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12486;
		
		case 152:
			return Global_262145.f_12521;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12509;
		
		case 157:
			return Global_262145.f_12476;
		
		case 159:
			return Global_262145.f_12459;
		
		case 164:
			return Global_262145.f_12499;
		
		case 160:
			return Global_262145.f_12549;
		
		case 162:
			return Global_262145.f_12569;
		
		case 163:
			return Global_262145.f_12534;
		
		case 154:
			return Global_262145.f_12604;
		
		case 155:
			return Global_262145.f_12594;
		
		case 153:
			return Global_262145.f_12558;
		
		case 170:
			return Global_262145.f_14995;
		
		case 171:
			return Global_262145.f_15054;
		
		case 172:
			return Global_262145.f_15072;
		
		case 173:
			return Global_262145.f_15013;
		
		case 166:
			return Global_262145.f_15028;
		
		case 167:
			return Global_262145.f_15119;
		
		case 169:
			return Global_262145.f_15091;
		
		case 168:
			return Global_262145.f_15084;
		
		case 179:
			return Global_262145.f_18366;
		
		case 180:
			return Global_262145.f_18144;
		
		case 182:
			return Global_262145.f_18144;
		
		case 183:
			return Global_262145.f_18144;
		
		case 185:
			return Global_262145.f_18144;
		
		case 186:
			return Global_262145.f_18144;
		
		case 189:
			return Global_262145.f_18366;
		
		case 190:
			return Global_262145.f_18020;
		
		case 191:
			return Global_262145.f_18111;
		
		case 192:
			return Global_262145.f_17905;
		
		case 193:
			return Global_262145.f_18366;
		
		case 194:
			return Global_262145.f_18366;
		
		case 195:
			return Global_262145.f_18144;
		
		case 197:
			return Global_262145.f_18144;
		
		case 198:
			return Global_262145.f_18144;
		
		case 199:
			return Global_262145.f_18366;
		
		case 200:
			return Global_262145.f_18366;
		
		case 201:
			return Global_262145.f_18366;
		
		case 205:
			return Global_262145.f_18366;
		
		case 207:
			return Global_262145.f_18144;
		
		case 208:
			return Global_262145.f_18144;
		
		case 209:
			return Global_262145.f_18144;
		
		case 210:
			return Global_262145.f_18366;
		
		case 211:
			return Global_262145.f_18366;
		
		case 214:
			return Global_262145.f_19216;
		
		case 215:
			return Global_262145.f_19218;
		
		case 216:
			return Global_262145.f_19220;
		
		case 217:
			return Global_262145.f_19222;
		
		case 218:
			return Global_262145.f_19224;
		
		case 219:
			return Global_262145.f_19226;
		
		case 220:
			return Global_262145.f_19228;
		
		case 221:
			return Global_262145.f_19230;
		
		case 225:
			if (!func_778())
			{
				return Global_262145.f_21053;
			}
			break;
		
		case 226:
			if (!func_778())
			{
				return Global_262145.f_21033;
			}
			break;
		
		case 227:
			if (!func_778())
			{
				return Global_262145.f_21045;
			}
			break;
		
		case 229:
			if (!func_778())
			{
				return Global_262145.f_22209;
			}
			break;
		
		case 230:
			if (!func_778())
			{
				return Global_262145.f_22305;
			}
			break;
		
		case 233:
			if (!func_778())
			{
				return Global_262145.f_22778;
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
			if (!func_778())
			{
				return Global_262145.f_23944;
			}
			break;
		
		case 238:
			if (!func_778())
			{
				return Global_262145.f_24055;
			}
			break;
		
		case 249:
			if (!func_778())
			{
				return Global_262145.f_24071;
			}
			break;
		
		case 243:
			if (!func_778())
			{
				return Global_262145.f_26304;
			}
			break;
		
		case 158:
			if (!func_778())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_842(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12485;
		
		case 152:
			return Global_262145.f_12520;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12508;
		
		case 157:
			return Global_262145.f_12475;
		
		case 159:
			return Global_262145.f_12458;
		
		case 164:
			return Global_262145.f_12498;
		
		case 160:
			return Global_262145.f_12548;
		
		case 162:
			return Global_262145.f_12568;
		
		case 163:
			return Global_262145.f_12533;
		
		case 154:
			return Global_262145.f_12603;
		
		case 155:
			return Global_262145.f_12593;
		
		case 153:
			return Global_262145.f_12557;
		
		case 170:
			return Global_262145.f_14994;
		
		case 171:
			return Global_262145.f_15053;
		
		case 172:
			return Global_262145.f_15071;
		
		case 173:
			return Global_262145.f_15012;
		
		case 166:
			return Global_262145.f_15027;
		
		case 179:
			return Global_262145.f_18365;
		
		case 180:
			return Global_262145.f_18143;
		
		case 182:
			return Global_262145.f_18143;
		
		case 183:
			return Global_262145.f_18143;
		
		case 185:
			return Global_262145.f_18143;
		
		case 186:
			return Global_262145.f_18143;
		
		case 189:
			return Global_262145.f_18365;
		
		case 193:
			return Global_262145.f_18365;
		
		case 194:
			return Global_262145.f_18365;
		
		case 195:
			return Global_262145.f_18143;
		
		case 197:
			return Global_262145.f_18143;
		
		case 198:
			return Global_262145.f_18143;
		
		case 199:
			return Global_262145.f_18365;
		
		case 200:
			return Global_262145.f_18365;
		
		case 201:
			return Global_262145.f_18365;
		
		case 205:
			return Global_262145.f_18365;
		
		case 207:
			return Global_262145.f_18143;
		
		case 208:
			return Global_262145.f_18143;
		
		case 209:
			return Global_262145.f_18143;
		
		case 210:
			return Global_262145.f_18365;
		
		case 211:
			return Global_262145.f_18365;
		
		case 190:
			if (func_322(0))
			{
				return Global_262145.f_18019;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_322(0))
			{
				return Global_262145.f_18110;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_322(0))
			{
				return Global_262145.f_17904;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19215;
		
		case 215:
			return Global_262145.f_19217;
		
		case 216:
			return Global_262145.f_19219;
		
		case 217:
			return Global_262145.f_19221;
		
		case 218:
			return Global_262145.f_19223;
		
		case 219:
			return Global_262145.f_19225;
		
		case 220:
			return Global_262145.f_19227;
		
		case 221:
			return Global_262145.f_19229;
		
		case 225:
			if (func_322(0))
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 226:
			if (func_322(0))
			{
				return Global_262145.f_21032;
			}
			break;
		
		case 227:
			if (func_322(0))
			{
				return Global_262145.f_21044;
			}
			break;
		
		case 229:
			if (func_322(0))
			{
				return Global_262145.f_22208;
			}
			break;
		
		case 230:
			if (func_322(0))
			{
				return Global_262145.f_22304;
			}
			break;
		
		case 233:
			if (func_322(0))
			{
				return Global_262145.f_22780;
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
			if (func_322(0))
			{
				return Global_262145.f_23943;
			}
			break;
		
		case 238:
			if (func_322(0))
			{
				return Global_262145.f_24054;
			}
			break;
		
		case 249:
			if (func_322(0))
			{
				return Global_262145.f_24070;
			}
			break;
		
		case 243:
			return Global_262145.f_26300;
		
		case 158:
			if (func_322(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_843(int iParam0, int iParam1)
{
	if (*iParam0 > 0)
	{
		if (!func_778())
		{
			if (func_1108(0))
			{
				if (!func_322(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_553()))
					{
						if (func_851() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_851());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_849(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_848("GB_BCUT_TICK1", func_553(), iVar0, 0, 0, 1);
						}
						func_847(20);
						func_844(func_553(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_844(int iParam0, int iParam1, int iParam2)
{
	if (func_1245(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_846(iParam0);
		func_845(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_610(iParam0));
	}
}

void func_845(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_846(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_847(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_848(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
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
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFACTION_COLOR_NEXT(func_654(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_652(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_647(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_849(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_850(1);
	}
	else
	{
		iVar1 = func_850(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_850(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_851()
{
	return Global_262145.f_12389;
}

void func_852(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar18 = func_322(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_778())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_553();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590535[iVar11].f_854.f_1;
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
				iVar2 = Global_1590535[iVar11].f_854.f_2;
			}
			else
			{
				iVar2 = func_868(Global_1590535[iVar11].f_854, *uParam3);
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
			iVar10 = func_867(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_866("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1674671.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_865(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_863(*uParam3);
				}
				iVar6 = func_862(&uVar5);
				iVar7 = Global_262145.f_23973;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23972));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_847(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_861(iVar23))
								{
									func_853(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23945;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23946;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_847(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_853(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_855(iParam0);
	func_854(iParam0, uVar0, iParam1, iParam2);
}

void func_854(int iParam0, var uParam1, var uParam2, var uParam3)
{
	Var0 = -601653676;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_846(iParam0);
	func_845(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_610(iParam0));
		}
	}
}

int func_855(int iParam0)
{
	iVar0 = func_860();
	iVar0 = func_858(iParam0, iVar0);
	iVar1 = Global_1628237[func_553()].f_11.f_449;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14955));
	if (iVar0 < func_857())
	{
		iVar0 = func_857();
	}
	if (iVar0 > func_856())
	{
		iVar0 = func_856();
	}
	return iVar0;
}

int func_856()
{
	return Global_262145.f_14956;
}

int func_857()
{
	return Global_262145.f_16131;
}

int func_858(int iParam0, int iParam1)
{
	iVar0 = (func_918(iParam0) * func_859());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_859()
{
	return Global_262145.f_16130;
}

var func_860()
{
	return Global_262145.f_12381;
}

int func_861(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_16(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_266(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_862(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_36(iVar2, 0) && !func_16(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_36(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_863(int iParam0)
{
	func_864(iParam0, 7236);
}

void func_864(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_764(iParam1, -1, 0);
	func_762(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_865(int iParam0)
{
	func_864(iParam0, 7231);
}

int func_866(char* sParam0, int iParam1)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_647(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_867(int iParam0)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23974);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

var func_868(struct<5> Param0, int iParam5)
{
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

void func_869(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	*uParam4 = 0;
	bVar16 = func_322(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_778())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_553();
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
			iVar2 = func_774(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_773(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_871(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_866("SMTICK_RONCUT", func_871(*iParam2));
				}
				*iParam2 = (*iParam2 - func_871(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_870(iVar2, iVar9);
				iVar6 = func_862(&uVar5);
				iVar7 = Global_262145.f_22322;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22321));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_847(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_861(iVar20))
								{
									func_853(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22255;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22256;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_847(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_870(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_864(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_864(iParam1, 6117);
	}
}

int func_871(int iParam0)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22289);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22290))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22290);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_872(int iParam0, var uParam1, int iParam2, var uParam3)
{
	bVar17 = func_322(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_778())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_553();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_777(iVar15);
			iVar0 = (func_896(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_892(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21035));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21034));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_886(iVar16, iVar2);
				if (func_882(iVar16) >= Global_262145.f_20583 || iVar2 >= Global_262145.f_20583)
				{
					func_873(5);
				}
				iVar6 = func_862(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21037);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21036));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_847(108);
					}
					else
					{
						func_847(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_861(iVar20))
								{
									func_853(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21038;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21039;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1686723 = *iParam2;
					func_847(112);
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

void func_873(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20571)
			{
				if (func_875(Global_262145.f_20572))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20573)
			{
				if (func_875(Global_262145.f_20574))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20575)
			{
				if (func_875(Global_262145.f_20576))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20577)
			{
				if (func_875(Global_262145.f_20578))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20579)
			{
				if (func_875(Global_262145.f_20580))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20581)
			{
				if (func_875(Global_262145.f_20582))
				{
					func_866("CLOTHAWDSTRAP3", Global_262145.f_20583);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20584)
			{
				if (func_875(Global_262145.f_20585))
				{
					func_866("CLOTHAWDSTRAP5", Global_262145.f_20717);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20587)
			{
				if (func_875(Global_262145.f_20588))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20589)
			{
				if (func_875(Global_262145.f_20590))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20591)
			{
				if (func_875(Global_262145.f_20592))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20593)
			{
				if (func_875(Global_262145.f_20594))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20595)
			{
				if (func_875(Global_262145.f_20596))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20597)
			{
				if (func_875(Global_262145.f_20598))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20599)
			{
				if (func_875(Global_262145.f_20600))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20601)
			{
				if (func_875(Global_262145.f_20602))
				{
					func_874("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_874(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		UI::_SET_NOTIFACTION_COLOR_NEXT(iParam3);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2513218 = { func_47(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218))
		{
			iVar1 = 0;
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2513148.f_22), "Leader") && Global_2513148.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2513148.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UI::_NOTIFICATION_SEND_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_2513148, 35), &(Global_2513148.f_17), Global_2513148.f_30, iVar1, 0, Global_2513148, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314034, Global_1314035, Global_1314036);
		}
		else
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_647(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_875(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_879(15417, -1, -1))
			{
				func_878(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_879(15418, -1, -1))
			{
				func_878(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_879(15425, -1, -1))
			{
				func_878(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_879(15405, -1, -1))
			{
				func_878(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_879(15393, -1, -1))
			{
				func_878(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_879(15409, -1, -1))
			{
				func_878(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_879(15396, -1, -1))
			{
				func_878(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_879(15412, -1, -1))
			{
				func_878(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_879(15403, -1, -1))
			{
				func_878(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_879(15389, -1, -1))
			{
				func_878(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_879(15398, -1, -1))
			{
				func_878(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_879(15400, -1, -1))
			{
				func_878(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_879(15408, -1, -1))
			{
				func_878(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_879(15411, -1, -1))
			{
				func_878(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_879(15397, -1, -1))
			{
				func_878(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_879(15413, -1, -1))
			{
				func_878(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_879(15391, -1, -1))
			{
				func_878(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_879(15388, -1, -1))
			{
				func_878(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_879(15401, -1, -1))
			{
				func_878(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_879(15394, -1, -1))
			{
				func_878(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_879(15406, -1, -1))
			{
				func_878(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_879(15395, -1, -1))
			{
				func_878(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_879(15410, -1, -1))
			{
				func_878(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_879(15407, -1, -1))
			{
				func_878(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_879(15414, -1, -1))
			{
				func_878(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_879(15415, -1, -1))
			{
				func_878(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_879(15399, -1, -1))
			{
				func_878(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_879(15404, -1, -1))
			{
				func_878(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_879(15392, -1, -1))
			{
				func_878(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_879(15390, -1, -1))
			{
				func_878(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_879(15402, -1, -1))
			{
				func_878(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_879(15416, -1, -1))
			{
				func_878(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_379(209, -1))
			{
				func_876(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_879(15426, -1, -1))
			{
				func_878(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_879(15422, -1, -1))
			{
				func_878(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_879(15423, -1, -1))
			{
				func_878(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_879(15421, -1, -1))
			{
				func_878(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_879(15427, -1, -1))
			{
				func_878(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_879(15419, -1, -1))
			{
				func_878(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_879(15420, -1, -1))
			{
				func_878(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_876(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_877())
	{
		iVar0 = Global_2583656[iParam0][func_380(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_877()
{
	return 1;
	return 0;
}

int func_878(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_879(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar1 = func_881(iParam0, iParam1);
	uVar2 = func_880(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_880(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
	}
	return iVar0;
}

int func_881(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	return iVar0;
}

int func_882(int iParam0)
{
	iVar0 = func_884(iParam0);
	return func_764(func_883(iVar0), -1, 0);
}

int func_883(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_884(int iParam0)
{
	if (func_885(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_885(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_886(int iParam0, int iParam1)
{
	iVar0 = func_884(iParam0);
	iVar1 = func_883(iVar0);
	iVar2 = (func_764(iVar1, -1, 0) + iParam1);
	func_762(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_889(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iVar0] != 0)
			{
				iVar1 = func_883(iVar0);
				iVar3 = (iVar3 + func_764(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_888(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_887(9357, iVar5, -1, 1);
	}
}

var func_887(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_38();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_888(int iParam0)
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

int func_889(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	iVar1 = func_891(iParam0, iParam1);
	uVar2 = func_890(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_890(int iParam0)
{
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_0x94F12ABF9C79E339((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_0x94F12ABF9C79E339((iParam0 - 28483)) * 8) * 8;
	}
	return iVar0;
}

int func_891(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_38();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	return iVar0;
}

int func_892(int iParam0, int iParam1, int iParam2)
{
	iVar1 = func_790(iParam1);
	if (func_885(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16960;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16965);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16959;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16964);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16958;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16963);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16968);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16956;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16961);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16966);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16957;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16962);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16967);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21060;
				if (func_893(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21062);
				}
				if (func_893(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21061);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_893(int iParam0, int iParam1, int iParam2)
{
	if (func_895(iParam0, iParam1))
	{
		iVar0 = func_894(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_183[iVar0].f_5, iParam2);
	}
	return 0;
}

int func_894(int iParam0, int iParam1)
{
	if (func_885(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_895(int iParam0, int iParam1)
{
	if (func_885(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_896(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_885(iParam1))
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

void func_897(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_765())
			{
				Var0 = { func_792() };
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
				iVar7 = func_892(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18595);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18594);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_862(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18585);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18584));
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
					func_847(86);
				}
				Global_2537071.f_5124.f_381 = *iParam2;
			}
			else if (func_322(0))
			{
				Var15 = { func_898(func_553()) };
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
				iVar22 = func_892(func_553(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18595));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18594));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18634;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18635;
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

struct<2> func_898(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_193;
}

void func_899(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	if (iParam0 == 167)
	{
		if (func_20(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_914();
			}
			func_913();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_905(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_904(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_862(&uVar2);
					iVar4 = Global_262145.f_16141;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15350));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_847(44);
					}
				}
				func_902(*iParam3);
				func_901();
				Global_2537071.f_5124.f_381 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_861(iVar9))
						{
							func_853(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(PLAYER::PLAYER_ID()))
		{
			func_900();
		}
	}
}

void func_900()
{
	iVar0 = Global_2586255[func_38()];
	iVar0++;
	func_761(3667, iVar0, -1, 1);
}

void func_901()
{
	iVar0 = Global_2586261[func_38()];
	iVar0++;
	func_761(3666, iVar0, -1, 1);
}

void func_902(int iParam0)
{
	iVar0 = Global_2586264[func_38()];
	iVar0 = (iVar0 + iParam0);
	func_761(3668, iVar0, -1, 1);
	if (func_889(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_903(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_887(7666, iVar2, -1, 1);
	}
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16274;
			break;
		
		case 2:
			return Global_262145.f_16275;
			break;
		
		case 3:
			return Global_262145.f_16276;
			break;
		
		case 4:
			return Global_262145.f_16277;
			break;
		
		case 5:
			return Global_262145.f_16278;
			break;
		
		case 6:
			return Global_262145.f_16279;
			break;
		
		case 7:
			return Global_262145.f_16280;
			break;
		
		case 8:
			return Global_262145.f_16281;
			break;
		
		case 9:
			return Global_262145.f_16282;
			break;
		
		case 10:
			return Global_262145.f_16283;
			break;
		
		case 11:
			return Global_262145.f_16284;
			break;
		
		case 12:
			return Global_262145.f_16285;
			break;
		
		case 13:
			return Global_262145.f_16286;
			break;
		
		case 14:
			return Global_262145.f_16287;
			break;
		
		case 15:
			return Global_262145.f_16288;
			break;
		
		case 16:
			return Global_262145.f_16289;
			break;
		
		case 17:
			return Global_262145.f_16290;
			break;
		
		case 18:
			return Global_262145.f_16291;
			break;
		
		case 19:
			return Global_262145.f_16292;
			break;
		
		case 20:
			return Global_262145.f_16293;
			break;
		
		case 21:
			return Global_262145.f_16294;
			break;
		
		case 22:
			return Global_262145.f_16295;
			break;
		
		case 23:
			return Global_262145.f_16296;
			break;
		
		case 24:
			return Global_262145.f_16297;
			break;
	}
	return 0;
}

var func_904(int iParam0)
{
	if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	else if (iParam0 >= Global_262145.f_15316)
	{
		return Global_262145.f_15337;
	}
	else if (iParam0 >= Global_262145.f_15315)
	{
		return Global_262145.f_15336;
	}
	else if (iParam0 >= Global_262145.f_15314)
	{
		return Global_262145.f_15335;
	}
	else if (iParam0 >= Global_262145.f_15313)
	{
		return Global_262145.f_15334;
	}
	else if (iParam0 >= Global_262145.f_15312)
	{
		return Global_262145.f_15333;
	}
	else if (iParam0 >= Global_262145.f_15311)
	{
		return Global_262145.f_15332;
	}
	else if (iParam0 >= Global_262145.f_15310)
	{
		return Global_262145.f_15331;
	}
	else if (iParam0 >= Global_262145.f_15309)
	{
		return Global_262145.f_15330;
	}
	return Global_262145.f_15329;
}

int func_905(int iParam0)
{
	if (func_912(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_911(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_910(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_906(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_906(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_910(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_906(int iParam0)
{
	if (func_909(iParam0))
	{
		iVar0 = func_907(func_908(iParam0));
		return func_764(iVar0, -1, 0);
	}
	return 0;
}

int func_907(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_908(int iParam0)
{
	if (func_909(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_909(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_910(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15528;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15526;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15524;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15522;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15532;
	}
	return 0;
}

int func_911(int iParam0, int iParam1)
{
	if (func_909(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1676087[iVar0] == iParam1 && Global_1676094[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_912(int iParam0)
{
	if (func_909(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_106[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_913()
{
	iVar0 = Global_2586252[func_38()];
	iVar0++;
	Global_2586252[func_38()] = iVar0;
	func_761(3665, iVar0, -1, 1);
}

void func_914()
{
	iVar0 = Global_2586249[func_38()];
	iVar1 = Global_2586258[func_38()];
	iVar0++;
	iVar1++;
	Global_2586249[func_38()] = iVar0;
	Global_2586258[func_38()] = iVar1;
	Global_1590535[PLAYER::PLAYER_ID()].f_274.f_128 = iVar1;
	func_761(3663, iVar0, -1, 1);
	func_761(3664, iVar1, -1, 1);
}

void func_915()
{
	if (func_778())
	{
		Global_2451426.f_3074.f_134 = 0;
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_449 = Global_2451426.f_3074.f_134;
	}
}

void func_916()
{
	if (func_778())
	{
		if (Global_2451426.f_3074.f_134 < 10)
		{
			Global_2451426.f_3074.f_134++;
			Global_1628237[PLAYER::PLAYER_ID()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

void func_917()
{
	if (func_778())
	{
		if (Global_2451426.f_3074.f_134 > 0)
		{
			Global_2451426.f_3074.f_134 = (Global_2451426.f_3074.f_134 - 1);
			Global_1628237[PLAYER::PLAYER_ID()].f_11.f_449 = Global_2451426.f_3074.f_134;
		}
	}
}

int func_918(int iParam0)
{
	return Global_1628237[iParam0].f_11.f_28;
}

int func_919(int iParam0)
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
			if (func_1108(1) && !func_322(1))
			{
				if (func_920(func_553()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_920(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 26);
}

int func_921(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18281;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12506) * Global_262145.f_12511));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12456) * Global_262145.f_12461));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12483) * Global_262145.f_12487));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12496) * Global_262145.f_12500));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12518) * Global_262145.f_12523));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12680) * Global_262145.f_12681));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12678) * Global_262145.f_12679));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12682) * Global_262145.f_12683));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12676) * Global_262145.f_12677));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15051;
		
		case 172:
			return Global_262145.f_15067;
		
		case 173:
			return Global_262145.f_15010;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18289;
		
		case 180:
			return Global_262145.f_18164;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18172;
		
		case 185:
			return Global_262145.f_18181;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18377;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18394;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18241;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18425;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18303;
		
		case 205:
			return Global_262145.f_18412;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18270;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18407;
		
		case 211:
			return Global_262145.f_18371;
		
		case 214:
			return Global_262145.f_18965;
		
		case 215:
			return Global_262145.f_18975;
		
		case 216:
			return Global_262145.f_18985;
		
		case 217:
			return Global_262145.f_18994;
		
		case 218:
			return Global_262145.f_19003;
		
		case 219:
			return Global_262145.f_19019;
		
		case 241:
			return Global_262145.f_24090;
		
		case 242:
			return Global_262145.f_24086;
		
		case 248:
			return Global_262145.f_24089;
		
		case 244:
			return Global_262145.f_24087;
		
		case 239:
			return Global_262145.f_24091;
		
		case 240:
			return Global_262145.f_24092;
		
		case 243:
			return Global_262145.f_26299;
		
		default:
	}
	return 0;
}

int func_922(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18282;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12507) * Global_262145.f_12512));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12457) * Global_262145.f_12462));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12484) * Global_262145.f_12488));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12497) * Global_262145.f_12501));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12519) * Global_262145.f_12524));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12556) * Global_262145.f_12559));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12602) * Global_262145.f_12605));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12592) * Global_262145.f_12595));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12547) * Global_262145.f_12550));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12572));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12532) * Global_262145.f_12535));
		
		case 170:
			return Global_262145.f_14993;
		
		case 171:
			return Global_262145.f_15052;
		
		case 172:
			return Global_262145.f_15068;
		
		case 173:
			return Global_262145.f_15011;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17090;
		
		case 168:
			return Global_262145.f_17089;
		
		case 179:
			return Global_262145.f_18290;
		
		case 180:
			return Global_262145.f_18165;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18173;
		
		case 185:
			return Global_262145.f_18182;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18378;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18395;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18242;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18426;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18304;
		
		case 205:
			return Global_262145.f_18413;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18271;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18408;
		
		case 211:
			return Global_262145.f_18372;
		
		case 214:
			return Global_262145.f_18966;
		
		case 215:
			return Global_262145.f_18976;
		
		case 216:
			return Global_262145.f_18986;
		
		case 217:
			return Global_262145.f_18995;
		
		case 218:
			return Global_262145.f_19004;
		
		case 219:
			return Global_262145.f_19020;
		
		case 178:
			if (func_778())
			{
				return Global_262145.f_18843;
			}
			else if (bParam1)
			{
				return Global_262145.f_18844;
			}
			break;
		
		case 188:
			if (func_778())
			{
				return Global_262145.f_18927;
			}
			else if (bParam1)
			{
				return Global_262145.f_18928;
			}
			break;
		
		case 225:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21048;
				}
				else
				{
					return Global_262145.f_21049;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_21050;
			}
			break;
		
		case 226:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21028;
				}
				else
				{
					return Global_262145.f_21029;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_21030;
			}
			break;
		
		case 227:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21040;
				}
				else
				{
					return Global_262145.f_21041;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 229:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22204;
				}
				else
				{
					return Global_262145.f_22205;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_22206;
			}
			break;
		
		case 230:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22300;
				}
				else
				{
					return Global_262145.f_22301;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_22302;
			}
			break;
		
		case 233:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22776;
				}
				else
				{
					return Global_262145.f_22777;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_22775;
			}
			break;
		
		case 241:
			return Global_262145.f_24097;
		
		case 242:
			return Global_262145.f_24093;
		
		case 244:
			return Global_262145.f_24094;
		
		case 248:
			return Global_262145.f_24096;
		
		case 239:
			return Global_262145.f_24098;
		
		case 240:
			return Global_262145.f_24099;
		
		case 237:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23939;
				}
				else
				{
					return Global_262145.f_23940;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_23941;
			}
			break;
		
		case 238:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24050;
				}
				else
				{
					return Global_262145.f_24051;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_24052;
			}
			break;
		
		case 249:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24066;
				}
				else
				{
					return Global_262145.f_24067;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 243:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26302;
				}
				else
				{
					return Global_262145.f_26303;
				}
			}
			else if (func_765())
			{
				return Global_262145.f_26302;
			}
			break;
		
		case 158:
			if (func_778() && !func_765())
			{
				if (func_920(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_765())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_923(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_924(iParam0))
	{
		if (!func_778())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12400;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_739(iParam0))
		{
			*uParam1 = (Global_262145.f_18141 / 100f);
			*uParam2 = (Global_262145.f_18141 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24100;
			*uParam2 = Global_262145.f_24100;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24101;
			*uParam2 = Global_262145.f_24101;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24103;
			*uParam2 = Global_262145.f_24103;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24104;
			*uParam2 = Global_262145.f_24104;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24105;
			*uParam2 = Global_262145.f_24105;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24106;
			*uParam2 = Global_262145.f_24106;
		}
		else
		{
			*uParam1 = Global_262145.f_12397;
			*uParam2 = Global_262145.f_12396;
		}
	}
	else if (func_739(iParam0))
	{
		*uParam1 = (Global_262145.f_18142 / 100f);
		*uParam2 = (Global_262145.f_18142 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24107;
		*uParam2 = Global_262145.f_24107;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24108;
		*uParam2 = Global_262145.f_24108;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24110;
		*uParam2 = Global_262145.f_24110;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24111;
		*uParam2 = Global_262145.f_24111;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24112;
		*uParam2 = Global_262145.f_24112;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24113;
		*uParam2 = Global_262145.f_24113;
	}
	else
	{
		*uParam1 = Global_262145.f_12399;
		*uParam2 = Global_262145.f_12398;
	}
	iVar0 = func_325();
	if (iVar0 != func_18())
	{
		if (func_16(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_924(int iParam0)
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

void func_925(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_252(PLAYER::PLAYER_ID());
		Global_1674635.f_4 = func_1036();
		Global_1674635.f_5 = func_1035();
		if (func_371(PLAYER::PLAYER_ID()) || func_251(PLAYER::PLAYER_ID()))
		{
			Global_1674635.f_6 = 1;
		}
		else
		{
			Global_1674635.f_6 = 0;
		}
		Global_1674635.f_1 = func_1029(bParam9);
		Global_1674635.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1674635.f_9 = func_1028(bParam0);
		Global_1674635.f_10 = iParam1;
		Global_1674635.f_17 = Global_1674635.f_2;
		Global_1674635.f_18 = Global_1674635.f_2;
		Global_1674635.f_19 = func_1027();
		Global_1674635.f_21 = (Global_1674635.f_8 - Global_1674635.f_7);
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_1028(func_322(1));
		}
		Global_1674635.f_24 = func_1026(PLAYER::PLAYER_ID());
		Global_1674635.f_28 = func_1025(PLAYER::PLAYER_ID());
		if (Global_1674635.f_24 > 2)
		{
			Global_1674635.f_24 = 2;
		}
		func_1023(iVar0);
	}
	else
	{
		iVar0 = func_291(PLAYER::PLAYER_ID());
	}
	if (func_739(iVar0))
	{
		Global_1674374.f_2 = func_1036();
		Global_1674374.f_3 = func_1035();
		Global_1674374.f_50 = iParam4;
		Global_1674374.f_51 = iParam5;
		Global_1674374.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1674374.f_20 = (Global_1674374.f_10 - Global_1674374.f_9);
		Global_1674374.f_12 = iParam1;
		Global_1674374.f_19 = func_1019(iVar0, bParam0, func_1022(bParam3));
		if (bParam0)
		{
			Global_1674374.f_11 = 1;
		}
		else
		{
			Global_1674374.f_11 = 0;
		}
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674374.f_8 = 1;
		}
		else
		{
			Global_1674374.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1674374.f_43 = 0;
			Global_1674374.f_45 = func_1018(func_553(), iParam2);
			Global_1674374.f_47 = iParam7;
			Global_1674374.f_46 = iParam6;
			Global_1674374.f_52 = func_1017(func_553(), iParam2);
		}
		func_1015(iVar0);
	}
	else if (func_743(iVar0))
	{
		Global_1674428.f_2 = func_1036();
		Global_1674428.f_3 = func_1035();
		Global_1674428.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1674428.f_19 = (Global_1674428.f_10 - Global_1674428.f_9);
		Global_1674428.f_12 = iParam1;
		if (bParam0)
		{
			Global_1674428.f_11 = 1;
		}
		else
		{
			Global_1674428.f_11 = 0;
		}
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674428.f_8 = 1;
		}
		else
		{
			Global_1674428.f_8 = 0;
		}
		func_1013(iVar0);
	}
	else if (func_581(iVar0))
	{
		Global_1674491.f_2 = func_1036();
		Global_1674491.f_3 = func_1035();
		Global_1674491.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674491.f_18 = (Global_1674491.f_9 - Global_1674491.f_8);
		Global_1674491.f_11 = iParam1;
		Global_1674491.f_7 = func_1027();
		Global_1674491.f_42 = func_1011(func_38(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_777(iVar1);
		Global_1674491.f_28 = iVar2;
		Global_1674491.f_29 = func_1028((func_1010(iVar1) || func_1009(iVar1)));
		Global_1674491.f_30 = func_1028(func_1008(iVar1));
		Global_1674491.f_32 = func_1028(func_1007(iVar1));
		Global_1674491.f_33 = func_1028(func_1006(iVar1));
		Global_1674491.f_34 = func_1028(func_1005(iVar1));
		Global_1674491.f_35 = func_1028(func_1004(0, iVar1) == 1);
		Global_1674491.f_36 = func_1028(func_1003(iVar1));
		Global_1674491.f_37 = func_1028(func_1002(iVar1));
		Global_1674491.f_38 = func_1028(func_1001(iVar1));
		Global_1674491.f_39 = func_1028(func_893(iVar1, iVar2, 0));
		Global_1674491.f_40 = func_1028(func_893(iVar1, iVar2, 2));
		Global_1674491.f_41 = func_1028(func_893(iVar1, iVar2, 1));
		if (func_1000(iVar1))
		{
			Global_1674491.f_31 = 2;
		}
		else if (func_999(iVar1))
		{
			Global_1674491.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1674491.f_10 = 1;
		}
		else
		{
			Global_1674491.f_10 = 0;
		}
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_6 = 1;
		}
		else
		{
			Global_1674491.f_6 = 0;
		}
		Global_1674491.f_21 = -2;
		Global_1674491.f_22 = -2;
		func_997(iVar0);
	}
	else if (func_579(iVar0))
	{
		Global_1674535.f_2 = func_1036();
		Global_1674535.f_3 = func_1035();
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674535.f_6 = 1;
		}
		else
		{
			Global_1674535.f_6 = 0;
		}
		Global_1674535.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674535.f_10 = func_1028(bParam0);
		Global_1674535.f_11 = iParam1;
		Global_1674535.f_17 = func_996(func_325());
		Global_1674535.f_18 = (Global_1674535.f_9 - Global_1674535.f_8);
		Global_1674535.f_20 = iParam8;
		Global_1674535.f_21 = -2;
		Global_1674535.f_22 = -2;
		Global_1674535.f_27 = func_995();
		Global_1674535.f_29 = func_764(6107, -1, 0);
		Global_1674535.f_30 = func_764(6103, -1, 0);
		Global_1674535.f_31 = func_764(6104, -1, 0);
		Global_1674535.f_32 = func_764(6106, -1, 0);
		Global_1674535.f_33 = func_764(6105, -1, 0);
		Global_1674535.f_34 = func_764(6108, -1, 0);
		Global_1674535.f_36 = func_1028(func_322(1));
		Global_1674535.f_37 = func_993();
		func_979();
		func_977(iVar0);
	}
	else if (func_577(iVar0))
	{
		Global_1674589.f_2 = func_1036();
		Global_1674589.f_3 = func_1035();
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674589.f_6 = 1;
		}
		else
		{
			Global_1674589.f_6 = 0;
		}
		Global_1674589.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674589.f_10 = func_1028(bParam0);
		Global_1674589.f_11 = iParam1;
		Global_1674589.f_18 = (Global_1674589.f_9 - Global_1674589.f_8);
		Global_1674589.f_20 = iParam8;
		Global_1674589.f_23 = Global_786547;
		Global_1674589.f_36 = Global_786547.f_1;
		Global_1674589.f_24 = func_764(6157, -1, 0);
		Global_1674589.f_25 = func_764(6162, -1, 0);
		Global_1674589.f_26 = func_764(6163, -1, 0);
		Global_1674589.f_27 = func_1028((((func_976() || func_975()) || func_974()) || func_973(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_764(6164, -1, 0);
		Global_1674589.f_29 = func_1028(func_972());
		Global_1674589.f_35 = -1;
		Global_1674589.f_38 = -1;
		Global_1674589.f_39 = Global_1674589.f_4;
		Global_1674589.f_40 = Global_1674589.f_5;
		Global_1674589.f_41 = func_1036();
		Global_1674589.f_42 = func_1028(func_322(1));
		Global_1674589.f_44 = Global_1674589.f_18;
		func_970(iVar0);
	}
	else if (func_753(iVar0))
	{
		if (Global_1674725.f_2 == -1)
		{
			Global_1674725.f_2 = func_1036();
		}
		if (Global_1674725.f_3 == -1)
		{
			Global_1674725.f_3 = func_1035();
		}
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674725.f_6 = 1;
		}
		else
		{
			Global_1674725.f_6 = 0;
		}
		Global_1674725.f_1 = func_1029(0);
		Global_1674725.f_7 = func_1027();
		Global_1674725.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674725.f_10 = func_1028(bParam0);
		Global_1674725.f_11 = iParam1;
		if (func_553() != -1)
		{
			Global_1674725.f_17 = func_969(func_553());
		}
		Global_1674725.f_18 = (Global_1674725.f_9 - Global_1674725.f_8);
		Global_1674725.f_19 = Global_2537071.f_6579;
		Global_1674725.f_28 = func_1025(PLAYER::PLAYER_ID());
		Global_1674725.f_29 = func_1028(func_968(PLAYER::PLAYER_ID()));
		Global_1674725.f_30 = func_1028(func_967(PLAYER::PLAYER_ID()));
		Global_1674725.f_31 = func_966(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_1028(func_322(1));
		}
		if (Global_1674725.f_34 > 2)
		{
			Global_1674725.f_34 = 2;
		}
		func_964(iVar0);
	}
	else if (func_757(iVar0))
	{
		Global_1674671.f_2 = func_1036();
		Global_1674671.f_3 = func_1035();
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674671.f_6 = 1;
		}
		else
		{
			Global_1674671.f_6 = 0;
		}
		Global_1674671.f_1 = func_1029(0);
		Global_1674671.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674671.f_10 = func_1028(bParam0);
		Global_1674671.f_11 = iParam1;
		Global_1674671.f_18 = (Global_1674671.f_9 - Global_1674671.f_8);
		Global_1674671.f_28 = func_1025(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_963(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_947(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_966(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_1028(func_946(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_1028(func_945(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_1028(func_944(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_1028(func_943(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_942(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_941(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_940(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_1028(func_322(1));
		}
		if (Global_1674671.f_42 > 2)
		{
			Global_1674671.f_42 = 2;
		}
		func_938(iVar0);
	}
	else if (func_752(iVar0))
	{
		Global_1674809.f_2 = func_1036();
		Global_1674809.f_3 = func_1035();
		Global_1674809.f_4 = func_937(func_553());
		Global_1674809.f_5 = func_936(func_553());
		if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
		{
			Global_1674809.f_6 = 1;
		}
		else
		{
			Global_1674809.f_6 = 0;
		}
		Global_1674809.f_7 = func_1027();
		Global_1674809.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1674809.f_10 = func_1028(bParam0);
		Global_1674809.f_11 = iParam1;
		if (func_325() != -1)
		{
			Global_1674809.f_17 = func_969(func_325());
		}
		Global_1674809.f_18 = (Global_1674809.f_9 - Global_1674809.f_8);
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = func_935(PLAYER::PLAYER_ID());
		Global_1674809.f_27 = func_1028(func_934(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_931(21, -1);
		Global_1674809.f_29 = func_1028(func_930(PLAYER::PLAYER_ID()));
		func_928(iVar0);
	}
	else if (func_571(iVar0))
	{
		Global_1674884.f_6 = func_937(func_553());
		Global_1674884.f_7 = func_936(func_553());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_1028(func_322(1));
		}
		Global_1674884.f_10 = func_1027();
		Global_1674884.f_11 = 1;
		Global_1674884.f_13 = (NETWORK::_GET_POSIX_TIME() - Global_1702973);
		Global_1674884.f_14 = iParam1;
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		func_926(iVar0);
	}
	else
	{
		Global_1674356.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_1674356.f_7 = 1;
		}
		else
		{
			Global_1674356.f_7 = 0;
		}
		Global_1674356.f_8 = iParam1;
		if (Global_1674356.f_4 == 0)
		{
			if ((func_370(PLAYER::PLAYER_ID()) || func_369(PLAYER::PLAYER_ID())) || func_265(PLAYER::PLAYER_ID()))
			{
				Global_1674356.f_4 = 1;
			}
		}
	}
}

void func_926(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x1A0D4A6C336B7BC5(&Global_1674884);
	func_927();
}

void func_927()
{
	Global_1674884 = { Var0 };
	Global_1674884.f_23 = 0;
	Global_1674884.f_22 = 0;
	Global_1674884.f_21 = 0;
}

void func_928(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x62CC3DEF90BBBB82(&Global_1674809);
	func_929();
}

void func_929()
{
	Global_1674809 = { Var0 };
}

int func_930(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_931(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_38();
	}
	if (iParam0 == 7 && !Global_262145.f_16984)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_933(iParam0);
		if (iVar1 == 0 && func_764(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_932(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_1025(PLAYER::PLAYER_ID()) && iVar1 == 1)
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
		return Global_2586065[(iParam0 - 1)][iVar0];
	}
	return 0;
}

bool func_932(int iParam0)
{
	if (!Global_262145.f_23663)
	{
		return 0;
	}
	return func_764(7207, iParam0, 0) != 0;
}

int func_933(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

int func_934(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_369 != 0;
	}
	return 0;
}

int func_935(int iParam0)
{
	if (func_291(iParam0) == 243)
	{
		return func_756(iParam0);
	}
	return -1;
}

int func_936(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_937(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

void func_938(int iParam0)
{
	unk_0x2D7A9B577E72385E(&Global_1674671);
	func_939();
}

void func_939()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
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
	Global_1674671 = { Var0 };
}

int func_940(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 12);
	}
	return 0;
}

int func_941(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 10);
	}
	return 0;
}

int func_942(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_334, 11);
	}
	return 0;
}

bool func_943(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 4);
}

bool func_944(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 3);
}

bool func_945(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 2);
}

bool func_946(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 1);
}

int func_947(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_18() || !func_962(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_957(iParam0, iParam2);
		
		case 1:
			return func_955(iParam0, iParam2);
		
		case 3:
			return func_954(iParam0);
		
		case 2:
			return func_949(iParam0, iParam2);
		
		case 4:
			return func_948(iParam0);
		
		default:
	}
	return 0;
}

bool func_948(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 6);
}

int func_949(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_953(iParam0);
		
		case 11:
			return func_952(iParam0);
		
		case 12:
			return func_951(iParam0);
		
		case 13:
			return func_950(iParam0);
		
		default:
	}
	return 0;
}

bool func_950(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 15);
}

bool func_951(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 14);
}

bool func_952(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 13);
}

bool func_953(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 12);
}

bool func_954(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 5);
}

int func_955(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_956(iParam0);
		
		case 6:
			return func_946(iParam0);
		
		case 7:
			return func_945(iParam0);
		
		case 8:
			return func_944(iParam0);
		
		case 9:
			return func_943(iParam0);
		
		default:
	}
	return 0;
}

bool func_956(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 0);
}

int func_957(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_961(iParam0);
		
		case 1:
			return func_960(iParam0);
		
		case 2:
			return func_959(iParam0);
		
		case 3:
			return func_958(iParam0);
		
		case 4:
			return func_966(iParam0);
		
		default:
	}
	return 0;
}

bool func_958(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 10);
}

bool func_959(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 9);
}

bool func_960(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 8);
}

bool func_961(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_281.f_4, 7);
}

bool func_962(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_963(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_947(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_947(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_947(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_947(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_964(int iParam0)
{
	unk_0x830C3A44EB3F2CF9(&Global_1674725);
	func_965();
}

void func_965()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1674725 = { Var0 };
}

bool func_966(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 31);
}

bool func_967(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 0);
}

bool func_968(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_322.f_1, 19);
}

var func_969(int iParam0)
{
	return Global_1590535[iParam0].f_211.f_6;
}

void func_970(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1674589);
	func_971();
}

void func_971()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1674589 = { Var0 };
	Global_1674589.f_16 = 0;
}

bool func_972()
{
	return func_764(6156, -1, 0) != 0;
}

int func_973(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_271 != 0;
	}
	return 0;
}

bool func_974()
{
	return func_764(6164, -1, 0) == 3;
}

bool func_975()
{
	return func_764(6164, -1, 0) == 2;
}

bool func_976()
{
	return func_764(6164, -1, 0) == 1;
}

void func_977(int iParam0)
{
	unk_0x320C35147D5B5DDD(&Global_1674535);
	func_978();
}

void func_978()
{
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Global_1674535 = { Var0 };
	Global_1674535.f_23 = 0;
	Global_1674535.f_24 = 0;
	Global_1674535.f_16 = 0;
}

void func_979()
{
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_990(12));
		func_989(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323615[iVar1].f_66 != 0 && func_981(Global_1323615[iVar1].f_66, 1))
			{
				if (Global_2537071.f_896 != iVar1)
				{
					if (func_980(Global_1323615[iVar1].f_66))
					{
						if (Global_1323615[iVar1].f_66 != 0)
						{
							iVar3 = Global_1323615[iVar1].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1674535.f_38 = iVar3;
								break;
							
							case 1:
								Global_1674535.f_39 = iVar3;
								break;
							
							case 2:
								Global_1674535.f_40 = iVar3;
								break;
							
							case 3:
								Global_1674535.f_41 = iVar3;
								break;
							
							case 4:
								Global_1674535.f_42 = iVar3;
								break;
							
							case 5:
								Global_1674535.f_43 = iVar3;
								break;
							
							case 6:
								Global_1674535.f_44 = iVar3;
								break;
							
							case 7:
								Global_1674535.f_45 = iVar3;
								break;
							
							case 8:
								Global_1674535.f_46 = iVar3;
								break;
							
							case 9:
								Global_1674535.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case 788747387:
		case -82626025:
		case -1600252419:
		case 970385471:
		case -50547061:
		case 1621617168:
		case -1984275979:
		case -42959138:
		case -1845487887:
		case 710198397:
		case -1671539132:
		case -339587598:
		case 1075432268:
		case 744705981:
		case -1660661558:
		case 837858166:
		case -749299473:
		case -975345305:
		case -1700874274:
		case -392675425:
		case -1763555241:
		case 1043222410:
		case -1281684762:
		case -1386191424:
		case 1565978651:
		case 1036591958:
		case -1007528109:
		case -32878452:
		case -1523619738:
		case -1295027632:
		case -1214293858:
		case 1077420264:
		case -901163259:
		case 165154707:
		case 1824333165:
		case 1341619767:
		case 970356638:
		case -1214505995:
		case -644710429:
		case 621481054:
		case -2122757008:
		case -1746576111:
		case 1981688531:
		case -1673356438:
		case 1181327175:
		case 447548909:
		case -726768679:
			return 1;
		
		default:
	}
	if (iParam0 == 1692272545)
	{
		return 1;
	}
	return 0;
}

int func_981(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == -613725916) || (iParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_988())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == -150975354)
	{
		if ((((!func_987() && !func_986()) && !func_985()) && !func_984()) && !func_988())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_985())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_983(iParam0))
		{
			return 0;
		}
	}
	if (!func_982(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_982(int iParam0)
{
	if (!func_793())
	{
		return 1;
	}
	UNK3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case -827162039:
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case 989294410:
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case 941494461:
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case -1649536104:
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case 1180875963:
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case 682434785:
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case -1912017790:
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case -1590337689:
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!MOBILE::_NETWORK_SHOP_IS_ITEM_UNLOCKED(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_983(int iParam0)
{
	if (Global_2513258)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == -602287871)
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12922) && iVar1 < Global_262145.f_12923)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -2039755226)
	{
		if (!Global_262145.f_14222 && iVar1 < Global_262145.f_14234)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 16646064 || iParam0 == -899509638)
	{
		if (!Global_262145.f_14218 && iVar1 < Global_262145.f_14230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223258115)
	{
		if (!Global_262145.f_14219 && iVar1 < Global_262145.f_14231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1797613329)
	{
		if (!Global_262145.f_14220 && iVar1 < Global_262145.f_14232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1126264336)
	{
		if (!Global_262145.f_14221 && iVar1 < Global_262145.f_14233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1119641113)
	{
		if (!Global_262145.f_14223 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 2123327359)
	{
		if (!Global_262145.f_14224 && iVar1 < Global_262145.f_14227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1757836725)
	{
		if (!Global_262145.f_14225 && iVar1 < Global_262145.f_14228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829802492)
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 86520421)
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1549126457)
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 390201602)
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 683047626)
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1232836011)
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -777172681)
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 101905590)
	{
		if (!Global_262145.f_16849 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -663299102)
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1887331236)
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 741090084)
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2103821244)
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1071380347)
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2067820283)
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 819197656)
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 482197771)
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -401643538)
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 349315417)
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -915704871)
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 237764926)
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 822018448)
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1606187161)
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1009268949)
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2035069708)
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2115793025)
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -570033273)
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -255678177)
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -609625092)
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -405626514)
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 6774487)
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -674927303)
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1404136503)
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -440768424)
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1558399629)
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1026149675)
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -618617997)
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1289178744)
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1842748181)
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2140431165)
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1491277511)
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523428744)
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1873600305)
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 989294410)
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 941494461)
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -827162039)
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -312295511)
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1649536104)
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1180875963)
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 682434785)
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1912017790)
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1590337689)
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1045541610)
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2022483795)
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -239841468)
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1790834270)
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 196747873)
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -566387422)
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 627535535)
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -757735410)
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2048333973)
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -482719877)
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1034187331)
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1093792632)
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1758137366)
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1886268224)
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1074745671)
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 272929391)
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19740 && iVar1 < Global_262145.f_19736)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19741 && iVar1 < Global_262145.f_19737)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19742 && iVar1 < Global_262145.f_19738)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19743 && iVar1 < Global_262145.f_19739)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20619 && iVar1 < Global_262145.f_20627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20620 && iVar1 < Global_262145.f_20628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20621 && iVar1 < Global_262145.f_20629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20622 && iVar1 < Global_262145.f_20630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20623 && iVar1 < Global_262145.f_20631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20624 && iVar1 < Global_262145.f_20632)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21408 && iVar1 < Global_262145.f_21428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21407 && iVar1 < Global_262145.f_21427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21406 && iVar1 < Global_262145.f_21426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21403 && iVar1 < Global_262145.f_21423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21404 && iVar1 < Global_262145.f_21424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21405 && iVar1 < Global_262145.f_21425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23578 && iVar1 < Global_262145.f_23594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23581 && iVar1 < Global_262145.f_23597)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23580 && iVar1 < Global_262145.f_23596)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23579 && iVar1 < Global_262145.f_23595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23584 && iVar1 < Global_262145.f_23600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23577 && iVar1 < Global_262145.f_23593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23583 && iVar1 < Global_262145.f_23599)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23576 && iVar1 < Global_262145.f_23592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23582 && iVar1 < Global_262145.f_23598)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23664 && iVar1 < Global_262145.f_23651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23669 && iVar1 < Global_262145.f_23656)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23668 && iVar1 < Global_262145.f_23655)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23666 && iVar1 < Global_262145.f_23653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23672 && iVar1 < Global_262145.f_23659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23674 && iVar1 < Global_262145.f_23661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23675 && iVar1 < Global_262145.f_23662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23673 && iVar1 < Global_262145.f_23660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23665 && iVar1 < Global_262145.f_23652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23667 && iVar1 < Global_262145.f_23654)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23671 && iVar1 < Global_262145.f_23658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23670 && iVar1 < Global_262145.f_23657)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25978 && iVar1 < Global_262145.f_25980)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24991 && iVar1 < Global_262145.f_24984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24992 && iVar1 < Global_262145.f_24985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24993 && iVar1 < Global_262145.f_24986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24994 && iVar1 < Global_262145.f_24987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25979 && iVar1 < Global_262145.f_25981)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24995 && iVar1 < Global_262145.f_24988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24996 && iVar1 < Global_262145.f_24989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24997 && iVar1 < Global_262145.f_24990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_25002 && iVar1 < Global_262145.f_25023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_25003 && iVar1 < Global_262145.f_25024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_25004 && iVar1 < Global_262145.f_25025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_25005 && iVar1 < Global_262145.f_25026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_25006 && iVar1 < Global_262145.f_25027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_25007 && iVar1 < Global_262145.f_25028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_25008 && iVar1 < Global_262145.f_25029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_25009 && iVar1 < Global_262145.f_25030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_25010 && iVar1 < Global_262145.f_25031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_25011 && iVar1 < Global_262145.f_25032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_25012 && iVar1 < Global_262145.f_25033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_25013 && iVar1 < Global_262145.f_25034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_25014 && iVar1 < Global_262145.f_25035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_25015 && iVar1 < Global_262145.f_25036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_25016 && iVar1 < Global_262145.f_25037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_25017 && iVar1 < Global_262145.f_25038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_25018 && iVar1 < Global_262145.f_25039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_25019 && iVar1 < Global_262145.f_25040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_25020 && iVar1 < Global_262145.f_25041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_25021 && iVar1 < Global_262145.f_25042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_25022 && iVar1 < Global_262145.f_25043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1118611807)
	{
		if (!Global_262145.f_27821 && iVar1 < Global_262145.f_27842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 409049982)
	{
		if (!Global_262145.f_27822 && iVar1 < Global_262145.f_27843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1756021720)
	{
		if (!Global_262145.f_27823 && iVar1 < Global_262145.f_27844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2031587082)
	{
		if (!Global_262145.f_27824 && iVar1 < Global_262145.f_27845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1693751655)
	{
		if (!Global_262145.f_27825 && iVar1 < Global_262145.f_27846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 987469656)
	{
		if (!Global_262145.f_27826 && iVar1 < Global_262145.f_27847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 872704284)
	{
		if (!Global_262145.f_27827 && iVar1 < Global_262145.f_27848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 408825843)
	{
		if (!Global_262145.f_27828 && iVar1 < Global_262145.f_27849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 740289177)
	{
		if (!Global_262145.f_27829 && iVar1 < Global_262145.f_27850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -834353991)
	{
		if (!Global_262145.f_27830 && iVar1 < Global_262145.f_27851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 301304410)
	{
		if (!Global_262145.f_27831 && iVar1 < Global_262145.f_27852)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 960812448)
	{
		if (!Global_262145.f_27832 && iVar1 < Global_262145.f_27853)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1284356689)
	{
		if (!Global_262145.f_27833 && iVar1 < Global_262145.f_27854)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 394110044)
	{
		if (!Global_262145.f_27834 && iVar1 < Global_262145.f_27855)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1938952078)
	{
		if (!Global_262145.f_27835 && iVar1 < Global_262145.f_27856)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -907477130)
	{
		if (!Global_262145.f_27836 && iVar1 < Global_262145.f_27857)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1987130134)
	{
		if (!Global_262145.f_27837 && iVar1 < Global_262145.f_27858)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1747439474)
	{
		if (!Global_262145.f_27838 && iVar1 < Global_262145.f_27859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1254331310)
	{
		if (!Global_262145.f_27839 && iVar1 < Global_262145.f_27860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 469291905)
	{
		if (!Global_262145.f_27840 && iVar1 < Global_262145.f_27861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -48031959)
	{
		if (!Global_262145.f_27841 && iVar1 < Global_262145.f_27862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 340154634)
	{
		if ((!Global_262145.f_27864 && iVar1 < Global_262145.f_27865) && !Global_262145.f_27819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1960756985)
	{
		if ((!Global_262145.f_27867 && iVar1 < Global_262145.f_27868) && !Global_262145.f_27820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1132721664)
	{
		if (!Global_262145.f_27872 && iVar1 < Global_262145.f_27875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 83136452)
	{
		if (!Global_262145.f_27873 && iVar1 < Global_262145.f_27876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456336509)
	{
		if (!Global_262145.f_27874 && iVar1 < Global_262145.f_27877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2122646867)
	{
		if (!Global_262145.f_28874 && iVar1 < Global_262145.f_28539)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2098954619)
	{
		if (!Global_262145.f_28525 && iVar1 < Global_262145.f_28546)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2134119907)
	{
		if (!Global_262145.f_28526 && iVar1 < Global_262145.f_28532)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 67753863)
	{
		if (!Global_262145.f_28872 && iVar1 < Global_262145.f_28540)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1107404867)
	{
		if (!Global_262145.f_28873 && iVar1 < Global_262145.f_28541)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -913589546)
	{
		if (!Global_262145.f_28519 && iVar1 < Global_262145.f_28538)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -631322662)
	{
		if (!Global_262145.f_28520 && iVar1 < Global_262145.f_28547)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -838099166)
	{
		if (!Global_262145.f_28521 && iVar1 < Global_262145.f_28537)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1810806490)
	{
		if (!Global_262145.f_28522 && iVar1 < Global_262145.f_28535)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1358197432)
	{
		if (!Global_262145.f_28868 && iVar1 < Global_262145.f_28542)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1492612435)
	{
		if (!Global_262145.f_28869 && iVar1 < Global_262145.f_28543)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181339704)
	{
		if (!Global_262145.f_28870 && iVar1 < Global_262145.f_28544)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1728685474)
	{
		if (!Global_262145.f_28871 && iVar1 < Global_262145.f_28545)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1717532765)
	{
		if (!Global_262145.f_28523 && iVar1 < Global_262145.f_28534)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1802742206)
	{
		if (!Global_262145.f_28524 && iVar1 < Global_262145.f_28536)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_984()
{
	return 0;
}

int func_985()
{
	return 1;
}

int func_986()
{
	return 1;
}

int func_987()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_988()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(1571103992, &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150472 == 2)
	{
		return 1;
	}
	else if (Global_150472 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_989(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10163)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1671199[iParam0] - 1);
		if (bParam2)
		{
			if ((GAMEPLAY::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_990(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_933(iParam0);
		return func_992(iVar0);
	}
	return (func_991(iParam0, -1) * iParam0);
}

int func_991(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_588(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_594(iParam1))
			{
				return 0;
			}
			else if (func_586(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049922[iParam1].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049922[iParam1].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049922[iParam1].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_992(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

var func_993()
{
	uVar0 = func_994();
	if (!func_778())
	{
		if (func_553() != func_18())
		{
			uVar0 = func_1026(func_553()) + 1;
		}
	}
	return uVar0;
}

int func_994()
{
	return func_1026(PLAYER::PLAYER_ID()) + 1;
}

int func_995()
{
	return func_764(6113, -1, 0);
}

int func_996(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1628237[iParam0].f_11.f_451;
	}
	return -1;
}

void func_997(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1674491);
	func_998();
}

void func_998()
{
	Global_1674491 = { Var0 };
	Global_1674491.f_23 = 0;
	Global_1674491.f_24 = 0;
	Global_1674491.f_16 = 0;
}

bool func_999(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 12);
}

bool func_1000(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 13);
}

int func_1001(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 12) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 13)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_1002(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1003(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (((((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 3) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 4)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 5)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 0)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 1)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1004(int iParam0, int iParam1)
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 0))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 3))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 6))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 9))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 12))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 15))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 18))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 21))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 1))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 4))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 7))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 10))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 13))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 16))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 19))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 22))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 2))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 5))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 8))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 11))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 14))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 17))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 20))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 23))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam1].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_1005(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 6) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 7)) || GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1006(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 8);
}

bool func_1007(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 7);
}

bool func_1008(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 9);
}

bool func_1009(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 11);
}

bool func_1010(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_351, 10);
}

int func_1011(int iParam0, int iParam1)
{
	return func_764(func_1012(iParam1), iParam0, 0);
}

int func_1012(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_1013(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1674428);
	func_1014();
}

void func_1014()
{
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
	Global_1674428 = { Var0 };
	Global_1674428.f_24 = 0;
	Global_1674428.f_25 = 0;
	Global_1674428.f_17 = 0;
}

void func_1015(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1674374);
	func_1016();
}

void func_1016()
{
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
	Global_1674374 = { Var0 };
	Global_1674374.f_29 = 0;
	Global_1674374.f_30 = 0;
	Global_1674374.f_17 = 0;
}

int func_1017(int iParam0, int iParam1)
{
	bVar0 = func_893(iParam0, iParam1, 2);
	bVar1 = func_893(iParam0, iParam1, 1);
	bVar2 = func_893(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_1018(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_885(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1019(int iParam0, bool bParam1, bool bParam2)
{
	if (func_392(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 19;
	}
	else if (func_584(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_294(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17679;
			iVar1 = 20;
		}
	}
	else if (func_739(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17699;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17698;
		}
		else
		{
			iVar0 = Global_262145.f_17680;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_937(func_553()), func_936(func_553()), func_1036(), func_1035(), iVar1, iVar0);
	}
	func_1021(iVar0);
	func_1020(iVar0);
	return iVar0;
}

void func_1020(int iParam0)
{
	iVar0 = func_764(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_490 = iVar0;
	func_762(3968, iVar0, -1, 1, 0);
}

void func_1021(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	Global_1628237[iVar0].f_11.f_489 = (Global_1628237[iVar0].f_11.f_489 + iParam0);
	if (Global_1628237[iVar0].f_11.f_489 < -9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
	else if (Global_1628237[iVar0].f_11.f_489 > 9999)
	{
		Global_1628237[iVar0].f_11.f_489 = 9999;
	}
}

int func_1022(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID()) || func_265(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_1023(var uParam0)
{
	unk_0x316DB59CD14C1774(&Global_1674635);
	func_1024();
}

void func_1024()
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
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
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1674635 = { Var0 };
}

int func_1025(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_322 != 0;
	}
	return 0;
}

int func_1026(int iParam0)
{
	if (func_46(iParam0) == func_18())
	{
		return 0;
	}
	return Global_1628237[iParam0].f_11.f_19;
}

int func_1027()
{
	if (func_765())
	{
		return 4;
	}
	else if (func_778())
	{
		if (func_920(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_322(1))
	{
		iVar0 = func_996(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1108(1))
	{
		if (func_920(func_553()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_1028(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1029(bool bParam0)
{
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_252(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_291(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_1034(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_1032(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_1031(PLAYER::PLAYER_ID());
			if (func_754(func_755(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_1031(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_1030(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_1030(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_1030(int iParam0)
{
	if (func_291(PLAYER::PLAYER_ID()) == 238 || func_291(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1628237[iParam0].f_11.f_499;
	}
	return -1;
}

int func_1031(int iParam0)
{
	if (func_291(PLAYER::PLAYER_ID()) == 237 || func_291(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1628237[iParam0].f_11.f_498;
	}
	return -1;
}

int func_1032(int iParam0)
{
	return func_1033(iParam0, 150);
}

int func_1033(int iParam0, int iParam1)
{
	if (func_252(iParam0) == iParam1)
	{
		return Global_1628237[iParam0].f_11.f_496;
	}
	return -1;
}

int func_1034(int iParam0)
{
	return func_1033(iParam0, 236);
}

int func_1035()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_1036()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

void func_1037(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_1111())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_1038()
{
	if (func_266(PLAYER::PLAYER_ID(), 20) || func_370(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 20))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			GAMEPLAY::SET_BIT(&iLocal_338, 20);
		}
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 21))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_START"))
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 21);
			}
		}
		else if (Local_80.f_5 == -1 && Local_80.f_7 == -1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 22))
			{
				if (Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 > 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_COLLECT"))
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 22);
						if (GAMEPLAY::IS_BIT_SET(iLocal_338, 23))
						{
							GAMEPLAY::CLEAR_BIT(&iLocal_338, 23);
						}
					}
				}
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 23))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_DELIVER"))
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 23);
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 22))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_338, 22);
				}
			}
		}
	}
}

void func_1039()
{
	if (func_561())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 10))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
			{
				if (!func_21(Local_80.f_29[0]))
				{
					GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 10);
				}
			}
		}
	}
}

void func_1040()
{
	if (func_1111() != 2)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 11))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 12))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 12);
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 12))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 13))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (GAMEPLAY::IS_BULLET_IN_AREA(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 13);
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iVar0]))
			{
				if (!func_10(Local_80.f_13[iVar0]))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 14))
					{
						if (func_1041(NETWORK::NET_TO_PED(Local_80.f_13[iVar0])))
						{
							GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_1041(var uParam0)
{
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0))
	{
		return 1;
	}
	if (func_1042())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(uVar0))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
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

bool func_1042()
{
	return Global_1574404;
}

void func_1043()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 7))
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_471))
		{
			func_1045();
		}
		if (func_560())
		{
			if (func_368(PLAYER::PLAYER_ID()) > 2)
			{
				if (!func_645("GB_ASLT_GO"))
				{
					func_701("GB_ASLT_GO", func_1044(), 0, 0);
				}
			}
			else
			{
				func_681();
			}
		}
		else
		{
			func_681();
		}
		if (func_558())
		{
			GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 7);
		}
	}
	func_449();
}

char* func_1044()
{
	switch (func_1111())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_1045()
{
	if (func_368(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_471))
		{
			UI::REMOVE_BLIP(&uLocal_471);
		}
		return;
	}
	Var0 = { func_1046() };
	if (func_1127())
	{
		if (!func_439(Var0, 0f, 0f, 0f, 0))
		{
			uLocal_471 = UI::ADD_BLIP_FOR_COORD(Var0);
			UI::SET_BLIP_ROUTE(uLocal_471, 1);
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 0))
			{
				UI::SET_BLIP_FLASHES(uLocal_471, 1);
				UI::SET_BLIP_FLASH_TIMER(uLocal_471, 7000);
				UI::FLASH_MINIMAP_DISPLAY();
				GAMEPLAY::SET_BIT(&iLocal_338, 0);
			}
		}
	}
}

Vector3 func_1046()
{
	switch (func_1111())
	{
		case 0:
			Var0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			Var0 = { func_547() };
			break;
	}
	return Var0;
}

void func_1047()
{
	func_1055();
	Var8 = { func_547() };
	if (!func_561())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_560()) && GAMEPLAY::IS_BIT_SET(iLocal_338, 3)) && !func_595(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (func_1127())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16))
			{
				if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 16))
				{
					fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var8, 0);
					if (func_1111() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_405(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
						func_1052();
						GAMEPLAY::SET_BIT(&iLocal_338, 16);
					}
				}
				else
				{
					fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var8, 0);
					if (func_1111() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_338, 16);
						func_415();
						func_405(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
					}
				}
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(iLocal_338, 16))
				{
					GAMEPLAY::CLEAR_BIT(&iLocal_338, 16);
					func_415();
					func_405(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				}
				bVar11 = true;
			}
		}
		else
		{
			bVar11 = true;
		}
		if (!bVar11)
		{
			return;
		}
		Var3 = { func_1051() };
		if (func_439(Var3, 0f, 0f, 0f, 0))
		{
			return;
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		switch (func_1111())
		{
			case 1:
				if (!func_559(Var0, 3, 1000, 0))
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				else if (func_559(Var3, 3, 1000, 0))
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				else
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_559(Var0, 2, 1000, 0))
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				else if (func_559(Var3, 2, 1000, 0))
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				else
				{
					func_409(10, 0, 0, 0, 0);
					func_1050(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_435(Var3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_409(10, 0, 0, 0, 0);
				func_1050(Var3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				func_435(Var3, 1, 0);
				break;
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_338, 16))
		{
			GAMEPLAY::CLEAR_BIT(&iLocal_338, 16);
			func_415();
			func_405(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		}
		if (GAMEPLAY::IS_BIT_SET(iLocal_338, 7))
		{
			func_403();
			func_1048();
		}
	}
}

void func_1048()
{
	if (Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_1049();
	}
}

void func_1049()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413899 = { Var0 };
	Global_2413899.f_6 = -1;
}

void func_1050(struct<3> Param0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		if (!Global_2413899.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413899.f_6))
	{
		Global_2413899.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413899.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_159(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413899 = { Var0 };
}

Vector3 func_1051()
{
	Var0 = { 0f, 0f, 0f };
	if (func_561())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			if (func_21(Local_80.f_29[0]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_29[0]), 1) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_12), 1) };
	}
	return Var0;
}

void func_1052()
{
	iVar0 = func_1111();
	switch (iVar0)
	{
		case 0:
			func_1053(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_1053(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_1053(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_1053(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_1053(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_1053(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_1053(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_1053(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_1053(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_1053(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_1053(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_1053(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_1053(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_1053(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_1053(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_1053(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_1053(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_1053(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_1053(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_1053(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_1053(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_1053(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_1053(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_1053(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_1053(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_1053(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_1053(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_1053(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_1053(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_1053(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_1053(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_1053(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_1053(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_1053(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_1053(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_1053(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_1053(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_1053(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_1053(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_1053(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_1053(struct<3> Param0, float fParam3, int iParam4)
{
	func_1054(Param0, fParam3, iParam4);
}

void func_1054(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2405072.f_1745)
	{
	}
	if (Global_2405072.f_706 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405072.f_706.f_1[Global_2405072.f_706] = { Param0 };
		Global_2405072.f_706.f_1[Global_2405072.f_706].f_3 = uParam3;
		Global_2405072.f_706.f_1[Global_2405072.f_706].f_4 = uParam4;
		Global_2405072.f_706++;
	}
}

void func_1055()
{
	Var0 = { 0f, 0f, 0f };
	if (!func_1127() && !func_382())
	{
		return;
	}
	if (func_561())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			if (func_21(Local_80.f_29[0]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_80.f_29[0]), 1) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_80.f_12), 1) };
	}
	if (!func_439(Var0, 0f, 0f, 0f, 0))
	{
		if (func_560())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar6 = SYSTEM::VDIST2(Var0, Var3);
				if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 3))
				{
					if (fVar6 <= 250000f)
					{
						GAMEPLAY::SET_BIT(&iLocal_338, 3);
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6))
					{
						if (func_559(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0))
						{
							GAMEPLAY::SET_BIT(&iLocal_338, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6) || (!GAMEPLAY::IS_BIT_SET(Local_80.f_1, 6) && !func_559(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0)))
					{
						GAMEPLAY::CLEAR_BIT(&iLocal_338, 3);
					}
				}
			}
		}
	}
}

void func_1056()
{
	if (func_382())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 9))
			{
				if (func_381())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 1, 1);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_80.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_80.f_12));
						}
					}
					GAMEPLAY::SET_BIT(&iLocal_338, 9);
				}
			}
			else if (!func_372())
			{
				if (!func_381())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_80.f_12), 0, 1);
					GAMEPLAY::CLEAR_BIT(&iLocal_338, 9);
				}
			}
		}
	}
}

void func_1057()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 1))
	{
		if (func_1127())
		{
			if (func_368(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!func_628(86))
				{
					if (func_622(0, 1, 1, 1))
					{
						Var0 = { func_1059() };
						func_741(&Var0, -1);
						func_613(1);
						GAMEPLAY::SET_BIT(&iLocal_338, 1);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&iLocal_338, 1);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 2))
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_338, 1))
		{
			if (func_1127())
			{
				if (Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_5 > 1)
				{
					if (func_622(0, 1, 1, 1))
					{
						if (func_622(0, 1, 1, 1))
						{
							Var0 = { func_1058() };
							func_741(&Var0, -1);
							func_613(1);
							GAMEPLAY::SET_BIT(&iLocal_339, 2);
						}
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 10))
	{
		if (func_1127())
		{
			if (((Local_80.f_5 != -1 || Local_80.f_7 != -1) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 16)) || GAMEPLAY::IS_BIT_SET(Local_80.f_1, 20))
			{
				if (func_622(0, 1, 1, 1))
				{
					func_741("GB_SGHT_RVL", -1);
					func_613(1);
					GAMEPLAY::SET_BIT(&iLocal_339, 10);
				}
			}
		}
	}
}

struct<8> func_1058()
{
	switch (func_1111())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_1059()
{
	if (func_778())
	{
		switch (func_1111())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_1111())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_1060()
{
	if (!func_9(&(Local_80.f_54)))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_339, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_1065(&(Local_80.f_54), 0, 0));
	if (!func_560())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 1))
	{
		return;
	}
	if (func_368(PLAYER::PLAYER_ID()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 19))
		{
			iLocal_476 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_476, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			GAMEPLAY::SET_BIT(&iLocal_338, 19);
		}
	}
	func_1064(iVar0);
	if (iVar0 > 30000)
	{
		func_1061(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else if (iVar0 >= 0)
	{
		func_1061(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
	else
	{
		func_1061(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
	}
}

void func_1061(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_1063(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_1062(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = iParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_1062(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_1063(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_1064(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 29))
	{
		func_220();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 30))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 30);
				GAMEPLAY::SET_BIT(&iLocal_338, 28);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 0))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					GAMEPLAY::SET_BIT(&iLocal_339, 0);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 31))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					GAMEPLAY::SET_BIT(&iLocal_338, 31);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(iLocal_338, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						GAMEPLAY::SET_BIT(&iLocal_339, 1);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GAMEPLAY::CLEAR_BIT(&iLocal_338, 28);
						}
					}
				}
			}
		}
	}
}

int func_1065(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_1066(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam5)
	{
		iVar0 = func_252(PLAYER::PLAYER_ID());
		Global_1674635 = iVar0;
		Global_1674635.f_1 = iParam0;
		if (func_553() != func_18())
		{
			Global_1674635.f_2 = func_937(func_553());
			Global_1674635.f_3 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674635.f_2), &(Global_1674635.f_3));
		}
		Global_1674635.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_1674635.f_28 = func_1025(PLAYER::PLAYER_ID());
		Global_1674635.f_13 = 0;
		Global_1674635.f_14 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674635.f_23 = func_1028(func_322(1));
		}
	}
	else
	{
		iVar0 = func_291(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_739(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1674374 = iVar0;
		if (func_392(iVar0))
		{
			Global_1674374.f_1 = 4;
		}
		else if (func_584(iVar0))
		{
			Global_1674374.f_1 = 5;
		}
		else if (func_294(iVar0, 0))
		{
			Global_1674374.f_1 = 2;
			if (func_759(iVar0))
			{
				Global_1674374.f_1 = 3;
			}
		}
		else
		{
			Global_1674374.f_1 = 1;
		}
		if (func_553() != func_18())
		{
			Global_1674374.f_4 = func_937(func_553());
			Global_1674374.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674374.f_6), &(Global_1674374.f_7));
		}
		Global_1674374.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1674374.f_27 = 1;
			Global_1674374.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1674374.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1674374.f_40 = func_790(iParam1);
			Global_1674374.f_41 = func_1088();
			Global_1674374.f_42 = func_896(PLAYER::PLAYER_ID(), iParam1);
			Global_1674374.f_44 = func_1018(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_778() || iVar0 != 192)
		{
			Global_1674374.f_53 = 0;
		}
	}
	else if (func_581(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1674491 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1674491 = iParam0 + 1;
		}
		else
		{
			Global_1674491 = func_1087(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_756(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1674491.f_1 = 0;
				}
				else
				{
					Global_1674491.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1674491.f_1 = 2;
				break;
			
			case 227:
				Global_1674491.f_1 = 3;
				break;
		}
		Global_1674491.f_21 = 1;
		Global_1674491.f_22 = 1;
		if (func_553() != func_18())
		{
			Global_1674491.f_4 = func_937(func_553());
			Global_1674491.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674491.f_4), &(Global_1674491.f_5));
		}
		Global_1674491.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1674491.f_20 = iParam0;
		}
	}
	else if (func_743(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1674428 = iVar0;
		Global_1674374.f_1 = 1;
		if (func_553() != func_18())
		{
			Global_1674428.f_4 = func_937(func_553());
			Global_1674428.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674428.f_6), &(Global_1674428.f_7));
		}
		Global_1674428.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1674428.f_21 = iParam0;
		}
	}
	else if (func_579(iVar0))
	{
		Global_1674535 = iVar0;
		Global_1674535.f_1 = iParam0;
		Global_1674535.f_21 = 1;
		Global_1674535.f_22 = 1;
		if (func_553() != func_18())
		{
			Global_1674535.f_4 = func_937(func_553());
			Global_1674535.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674535.f_4), &(Global_1674535.f_5));
		}
		Global_1674535.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1674535.f_20 = iParam0;
		}
		Global_1674535.f_27 = func_1011(func_38(), 5);
		Global_1674535.f_28 = func_1028(func_1086(PLAYER::PLAYER_ID()));
		Global_1674535.f_29 = func_764(6107, -1, 0);
		Global_1674535.f_30 = func_764(6103, -1, 0);
		Global_1674535.f_31 = func_764(6104, -1, 0);
		Global_1674535.f_32 = func_764(6106, -1, 0);
		Global_1674535.f_33 = func_764(6105, -1, 0);
		Global_1674535.f_34 = func_764(6108, -1, 0);
		Global_1674535.f_7 = func_1027();
		Global_1674535.f_51 = func_1028(bParam4);
	}
	else if (func_577(iVar0))
	{
		Global_1674589 = iVar0;
		Global_1674589.f_1 = iParam0;
		Global_1674589.f_21 = 1;
		Global_1674589.f_22 = 1;
		if (func_553() != func_18())
		{
			Global_1674589.f_4 = func_937(func_553());
			Global_1674589.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674589.f_4), &(Global_1674589.f_5));
		}
		Global_1674589.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1674589.f_20 = iParam0;
		}
		Global_1674589.f_24 = func_764(6157, -1, 0);
		Global_1674589.f_25 = func_764(6162, -1, 0);
		Global_1674589.f_26 = func_764(6163, -1, 0);
		Global_1674589.f_27 = func_1028((((func_976() || func_975()) || func_974()) || func_973(PLAYER::PLAYER_ID())));
		Global_1674589.f_28 = func_764(6164, -1, 0);
		Global_1674589.f_29 = func_1028(func_972());
		Global_1674589.f_31 = 0;
		Global_1674589.f_30 = 0;
		Global_1674589.f_32 = 0;
		Global_1674589.f_33 = 0;
		Global_1674589.f_34 = 0;
		Global_1674589.f_16 = 0;
		Global_1674589.f_7 = func_1027();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_754(func_755(PLAYER::PLAYER_ID()))))
	{
		Global_1674725 = iVar0;
		Global_1674725.f_1 = iParam0;
		Global_1674725.f_21 = 1;
		Global_1674725.f_22 = 1;
		Global_1674725.f_7 = func_1027();
		if (func_553() != func_18())
		{
			Global_1674725.f_4 = func_937(func_553());
			Global_1674725.f_5 = func_936(func_553());
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674725.f_4), &(Global_1674725.f_5));
		}
		if (func_553() != -1)
		{
			Global_1674725.f_17 = func_969(func_553());
		}
		Global_1674725.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1674725.f_28 = func_1025(PLAYER::PLAYER_ID());
		Global_1674725.f_16 = 0;
		Global_1674725.f_24 = 0;
		Global_1674725.f_23 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674725.f_33 = func_1028(func_322(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1674671 = iVar0;
		Global_1674671.f_1 = iParam0;
		Global_1674671.f_21 = 1;
		Global_1674671.f_22 = 1;
		Global_1674671.f_7 = func_1027();
		Global_1674671.f_24 = 0;
		Global_1674671.f_23 = 0;
		Global_1674671.f_16 = 0;
		if (func_553() != func_18())
		{
			Global_1674671.f_4 = func_937(func_553());
			Global_1674671.f_5 = func_936(func_553());
		}
		Global_1674671.f_28 = func_1025(PLAYER::PLAYER_ID());
		if (Global_1674671.f_28)
		{
			Global_1674671.f_29 = func_963(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1674671.f_29 = 0;
		}
		Global_1674671.f_30 = func_947(PLAYER::PLAYER_ID(), 4, -1);
		Global_1674671.f_31 = func_966(PLAYER::PLAYER_ID());
		Global_1674671.f_32 = func_1028(func_946(PLAYER::PLAYER_ID()));
		Global_1674671.f_33 = func_1028(func_945(PLAYER::PLAYER_ID()));
		Global_1674671.f_34 = func_1028(func_944(PLAYER::PLAYER_ID()));
		Global_1674671.f_35 = func_1028(func_943(PLAYER::PLAYER_ID()));
		Global_1674671.f_36 = func_942(PLAYER::PLAYER_ID());
		Global_1674671.f_37 = func_941(PLAYER::PLAYER_ID());
		Global_1674671.f_39 = func_940(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674671.f_41 = func_1028(func_322(1));
		}
		if (func_325() != func_18())
		{
			func_794(func_325(), &(Global_1674671.f_4), &(Global_1674671.f_5));
		}
		Global_1674671.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1674671.f_28 = func_1025(PLAYER::PLAYER_ID());
	}
	else if (func_752(iVar0))
	{
		Global_1674809 = iVar0;
		Global_1674809.f_1 = func_756(PLAYER::PLAYER_ID());
		Global_1674809.f_2 = func_1036();
		Global_1674809.f_3 = func_1035();
		Global_1674809.f_4 = func_937(func_553());
		Global_1674809.f_5 = func_936(func_553());
		Global_1674809.f_7 = func_1027();
		Global_1674809.f_8 = NETWORK::_GET_POSIX_TIME();
		if (func_553() != -1)
		{
			Global_1674809.f_17 = func_969(func_553());
		}
		Global_1674809.f_21 = 1;
		Global_1674809.f_22 = 1;
		Global_1674809.f_25 = iParam0;
		Global_1674809.f_27 = func_1028(func_934(PLAYER::PLAYER_ID()));
		Global_1674809.f_28 = func_931(21, -1);
	}
	else if (func_571(iVar0))
	{
		Global_1674884 = Global_786547.f_1;
		Global_1674884.f_2 = Global_786547;
		Global_1674884.f_6 = func_937(func_553());
		Global_1674884.f_7 = func_936(func_553());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1674884.f_8 = func_1028(func_322(1));
		}
		if (func_553() != -1)
		{
			Global_1674884.f_9 = func_969(func_553());
		}
		Global_1674884.f_10 = func_1027();
		Global_1674884.f_19 = 1;
		Global_1674884.f_20 = 1;
		Global_1674884.f_21 = 0;
		Global_1674884.f_22 = 0;
		Global_1674884.f_23 = 0;
		Global_1702973 = NETWORK::_GET_POSIX_TIME();
	}
	else
	{
		if (func_553() != func_18())
		{
			Global_1674356 = func_937(func_553());
			Global_1674356.f_1 = func_936(func_553());
		}
		Global_1674356.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_1674356.f_13 = func_1085();
		Global_1674356.f_15 = 0;
		if (func_1108(1))
		{
			if (func_325() == func_553())
			{
				Global_1674356.f_15 = 1;
			}
		}
		if (func_1084())
		{
			Global_1674491.f_28 = 1;
		}
		if (((((func_1083() || func_1082()) || func_1081()) || func_1080()) || func_1079()) || func_1078(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_30 = 1;
		}
		if (func_1076(func_1077(-1881846085)))
		{
			Global_1674491.f_32 = 1;
		}
		if (func_1070(func_1075(1147287684)))
		{
			Global_1674491.f_31 = 1;
		}
		if (func_1010(PLAYER::PLAYER_ID()) || func_1009(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_29 = 1;
		}
		if (func_1006(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_33 = 1;
			Global_1674491.f_34 = 1;
		}
		if (func_1007(PLAYER::PLAYER_ID()))
		{
			Global_1674491.f_36 = 1;
		}
		if (func_1004(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1674491.f_35 = 1;
		}
		if (func_1069(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1674491.f_37 = 1;
		}
		if (func_1069(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1674491.f_38 = 1;
		}
		if (func_1068(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1067(PLAYER::PLAYER_ID(), iVar2);
				if (func_893(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1674491.f_39 = 1;
				}
				if (func_893(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1674491.f_40 = 1;
				}
				if (func_893(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1674491.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1067(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_885(Global_1590535[iParam0].f_274.f_183[iParam1]))
	{
		uVar0 = Global_1590535[iParam0].f_274.f_183[iParam1];
	}
	return uVar0;
}

int func_1068(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590535[iParam0].f_274.f_183[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1069(int iParam0, int iParam1, var uParam2)
{
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_1004(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1070(int iParam0)
{
	if (func_931(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_990(11));
		func_989(iVar1, &iVar0, 1);
		iVar2 = func_931(func_1072(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_764(func_1071(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1071(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8012;
				
				case 262:
					return 8019;
				
				case 263:
					return 8026;
				
				case 264:
					return 8033;
				
				case 265:
					return 8040;
				
				case 266:
					return 8047;
				
				case 267:
					return 8054;
				
				case 268:
					return 8061;
				
				case 269:
					return 8068;
				
				case 270:
					return 8075;
				
				case 271:
					return 8536;
				
				case 272:
					return 8543;
				
				case 273:
					return 8550;
				
				case 274:
					return 8557;
				
				case 275:
					return 8564;
				
				case 276:
					return 8571;
				
				case 277:
					return 8578;
				
				case 278:
					return 8585;
				
				case 279:
					return 8592;
				
				case 280:
					return 8599;
				
				case 281:
					return 8981;
				
				case 282:
					return 8988;
				
				case 283:
					return 8995;
				
				case 284:
					return 9002;
				
				case 285:
					return 9009;
				
				case 286:
					return 9016;
				
				case 287:
					return 9023;
				
				case 288:
					return 9030;
				
				case 289:
					return 9037;
				
				case 290:
					return 9044;
				
				case 291:
					return 9051;
				
				case 292:
					return 9057;
				
				case 293:
					return 9063;
				
				case 294:
					return 9069;
				
				case 295:
					return 9076;
				
				case 296:
					return 9083;
				
				case 297:
					return 9090;
				
				case 298:
					return 9097;
				
				case 299:
					return 9104;
				
				case 300:
					return 9111;
				
				case 301:
					return 9118;
				
				case 302:
					return 9125;
				
				case 303:
					return 9132;
				
				case 304:
					return 9139;
				
				case 305:
					return 9145;
				
				case 306:
					return 9151;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_1072(int iParam0)
{
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_990(iVar0) && iParam0 < func_1073(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1073(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_933(iParam0);
		return func_1074(iVar0);
	}
	return (func_991(iParam0, -1) * iParam0 + 1);
}

int func_1074(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_1075(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 1180875963:
			return 0;
			break;
		
		case 682434785:
			return 1;
			break;
		
		case -1912017790:
			return 2;
			break;
		
		case -1649536104:
			return 3;
			break;
		
		case 989294410:
			return 4;
			break;
		
		case -827162039:
			return 5;
			break;
		
		case -312295511:
			return 5;
			break;
		
		case 941494461:
			return 6;
			break;
		
		case -1590337689:
			return 7;
			break;
	}
	return -1;
}

int func_1076(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_989(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_764(func_1071(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1077(int iParam0)
{
	switch (iParam0)
	{
		case -1881846085:
			return 0;
			break;
	}
	return -1;
}

int func_1078(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1590535[iParam0].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1079()
{
	return func_764(6542, -1, 0) != 0;
}

bool func_1080()
{
	return func_764(6163, -1, 0) != 0;
}

bool func_1081()
{
	return func_764(5380, -1, 0) != 0;
}

bool func_1082()
{
	return func_764(3828, -1, 0) != 0;
}

bool func_1083()
{
	return func_764(3223, -1, 0) != 0;
}

bool func_1084()
{
	return func_764(5379, -1, 0) != 0;
}

int func_1085()
{
	iVar0 = func_553();
	if (iVar0 != func_18())
	{
		return Global_1628237[iVar0].f_11.f_98;
	}
	return 0;
}

int func_1086(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1590535[iParam0].f_274.f_264 != 0;
	}
	return 0;
}

int func_1087(int iParam0)
{
	if (func_291(iParam0) == 225 || func_291(iParam0) == 226)
	{
		return func_756(iParam0);
	}
	return -1;
}

var func_1088()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_895(PLAYER::PLAYER_ID(), iVar0))
		{
			GAMEPLAY::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_1089(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_729(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_301(&(Var0.f_69), iParam7);
	}
	return func_717(&Var0);
}

struct<8> func_1090()
{
	switch (func_1111())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_1091()
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_80.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_13[iVar0]))
				{
					if (func_1096(Local_80.f_13[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_13[iVar0]))
						{
							if (!func_10(Local_80.f_13[iVar0]))
							{
								if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_13[iVar0]), -1442466670) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_80.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_1111() == 2)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_80.f_13[iVar0]), 0);
									}
									AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_80.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_1092(Local_80.f_13[iVar0], &(Local_344[iVar0]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_1092(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_1095())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1094(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2439138, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1094(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2439138, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (UI::DOES_BLIP_EXIST(*uParam1))
	{
		func_1093(uParam1);
	}
}

void func_1093(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_1))
	{
		UI::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				UI::_0xD30C50DF888D58B5(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_1094(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!UI::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				UI::_0xD30C50DF888D58B5(iParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			UI::_0xE52B8E7F85D39A08(iParam0, iParam2);
			UI::_0x97C65887D4B37FA9(iParam0, fParam6);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		UI::_0x0C4BBF625CA98C4E(iParam0, uParam4);
		UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, uParam5);
		*uParam1 = UI::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					UI::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = UI::_0x56176892826A4FE8(iParam0);
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (UI::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						UI::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						UI::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					UI::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					GAMEPLAY::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!UI::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1095()
{
	return Global_1312854;
}

int func_1096(var uParam0)
{
	if (NETWORK::_0xA1607996431332DF(uParam0))
	{
		return 1;
	}
	if (func_1097(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1097(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_1098(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1098(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_1099()
{
	if (Local_80 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3, iVar0))
						{
							if (func_561())
							{
								func_688(iVar1, 421, 0, 0);
							}
							else
							{
								func_688(iVar1, 457, 0, 0);
							}
							GAMEPLAY::SET_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3), iVar0);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3, iVar0))
					{
						if (func_561())
						{
							func_688(iVar1, 421, 0, 0);
						}
						else
						{
							func_688(iVar1, 457, 0, 0);
						}
						GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3), iVar0);
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3, iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_1100()
{
	if (func_1111() == 0)
	{
		if (func_25() == 0)
		{
			func_1101("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_1101(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_12, 11))
		{
			if (func_1102(&(Global_2359721[iVar1].f_15)) == iVar0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_13, 26))
				{
					GAMEPLAY::SET_BIT(&(Global_2359721[iVar1].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_1102(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_1104(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_1103(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_1103(var uParam0)
{
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_1104(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13];
		
		case 62:
			return Global_917806.f_9405[iVar13];
		
		default:
	}
	return Var0;
}

int func_1104(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1106(uParam0->f_1))
	{
		if (func_1105(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1105(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1106(int iParam0)
{
	return iParam0 == 9999;
}

void func_1107()
{
	if (func_1111() != 1 && func_1111() != 2)
	{
		return;
	}
	if (func_1111() != 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_80.f_29[0], 1);
		}
	}
}

bool func_1108(bool bParam0)
{
	return func_19(PLAYER::PLAYER_ID(), bParam0);
}

void func_1109()
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 1f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 1f, 0, 0);
	}
}

void func_1110()
{
	Global_1671757 = 1;
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 0))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 0);
		GAMEPLAY::SET_BIT(&Global_1671758, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 1))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 1);
		GAMEPLAY::SET_BIT(&Global_1671758, 1);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2546092, 5))
	{
		GAMEPLAY::SET_BIT(&Global_2546092, 5);
		GAMEPLAY::SET_BIT(&Global_1671758, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-355737150))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-580979506))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-811770997))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, 0, 0);
	}
}

int func_1111()
{
	if (Local_80.f_3 != -1)
	{
		return Local_80.f_3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_80.f_3 == -1)
		{
			if (Local_80.f_3 == -1)
			{
				if (Global_2537071.f_5898 != -1)
				{
					Local_80.f_3 = Global_2537071.f_5898;
				}
				else
				{
					Local_80.f_3 = 1;
				}
			}
		}
	}
	return Local_80.f_3;
}

void func_1112(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 != iParam0)
	{
		func_1126(-1);
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 = iParam0;
		if (func_1125() != -1)
		{
			func_1124(-1);
		}
		if (func_1123() != -1)
		{
			func_1122(-1);
		}
		func_1121(iParam2);
		func_1119(iParam0);
		if (!func_431(iParam0))
		{
			fVar0 = func_430(iParam0);
			if (fVar0 != 1f)
			{
				func_427(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 1);
			}
		}
		if (!func_434(iParam0) || iParam3)
		{
			if (func_432(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_381())
		{
			func_373(27);
		}
		if (bParam1)
		{
			if (!func_372())
			{
				func_424(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 1) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 4)) || GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 0))
			{
				func_847(6);
			}
			func_1118();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_162(PLAYER::PLAYER_ID()) && func_370(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_1), 8);
		}
		func_1114();
		if (func_1113(iParam0))
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
			GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 6);
		}
		Global_2537071.f_6579 = 0;
	}
}

int func_1113(int iParam0)
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

void func_1114()
{
	uVar3 = func_1117();
	iVar2 = func_46(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_1115(iVar1, PLAYER::PLAYER_ID()))
			{
				unk_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, uVar3);
				unk_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1115(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_1116(iParam0) == func_46(iParam1) || func_1116(iParam1) == func_46(iParam0));
	}
	return 0;
}

int func_1116(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1628237[func_46(iParam0)].f_11.f_484;
	}
	return func_18();
}

int func_1117()
{
	iVar0 = func_553();
	if (iVar0 != func_18())
	{
		if (func_1245(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar1].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1118()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4555, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 6);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_4555), 2);
	Global_1590535[PLAYER::PLAYER_ID()].f_751 = 0;
	if (Global_2537071.f_4557 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2537071.f_4557);
	}
	Global_2537071.f_4556 = 0;
}

void func_1119(int iParam0)
{
	iVar0 = func_764(3791, -1, 0);
	iVar1 = func_1120(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_762(3791, iVar0, -1, 1, 0);
	}
}

int func_1120(int iParam0)
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

void func_1121(int iParam0)
{
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1628237[iVar0].f_11.f_181 != iParam0)
	{
		Global_1628237[iVar0].f_11.f_181 = iParam0;
	}
}

void func_1122(int iParam0)
{
	if (Global_2537071.f_5124.f_340 != iParam0)
	{
		Global_2537071.f_5124.f_340 = iParam0;
	}
}

int func_1123()
{
	return Global_2537071.f_5124.f_340;
}

void func_1124(int iParam0)
{
	if (Global_2537071.f_5124.f_339 != iParam0)
	{
		Global_2537071.f_5124.f_339 = iParam0;
	}
}

int func_1125()
{
	return Global_2537071.f_5124.f_339;
}

void func_1126(int iParam0)
{
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_32 = iParam0;
}

int func_1127()
{
	iVar0 = func_1128();
	if (iVar0 > -1)
	{
		if (Local_80.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1128()
{
	if (Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 != -1)
	{
		return Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_4;
	}
	if (func_20(PLAYER::PLAYER_ID()))
	{
		Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_80.f_8)
		{
			func_712(1);
		}
	}
	else if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_553();
		if (iVar0 != func_18())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_145[NETWORK::PARTICIPANT_ID_TO_INT()].f_4;
}

int func_1129()
{
	if (func_561())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			return 0;
		}
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
	{
		return 0;
	}
	return 1;
}

int func_1130()
{
	return Local_80;
}

int func_1131(int iParam0)
{
	return Local_145[iParam0];
}

int func_1132(bool bParam0)
{
	if (func_1135(1))
	{
		return 1;
	}
	if (Global_2537071.f_5124.f_41)
	{
		Global_2537071.f_5124.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_325() == func_18() || !func_1245(func_325(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_573(PLAYER::PLAYER_ID()))
	{
		if (func_1134(PLAYER::PLAYER_ID()) && func_1133())
		{
			return 1;
		}
	}
	return 0;
}

int func_1133()
{
	switch (func_68(func_566(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1134(int iParam0)
{
	if (iParam0 != func_18() && func_1245(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_310, 4);
	}
	return 0;
}

int func_1135(bool bParam0)
{
	if (!func_1108(1))
	{
		bVar0 = false;
		if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57 != func_18())
		{
			if (func_1245(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57, 0, 1))
			{
				if ((Global_1628237[PLAYER::PLAYER_ID()].f_11.f_24 == 4 || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_24 == 8) || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_394(func_291(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_847(31);
				if (func_739(func_291(PLAYER::PLAYER_ID())))
				{
					func_847(81);
				}
				if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57 != func_18() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57))
				{
					Global_1626725 = func_654(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57, -2, 0, 0, 0);
					if (!func_324(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57))
					{
						func_847(88);
					}
				}
				else
				{
					Global_1626725 = 1;
				}
				Global_1626709 = { Global_1628237[PLAYER::PLAYER_ID()].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1136()
{
	func_1140(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1139())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_1138())
	{
		return 1;
	}
	if (func_1137(159))
	{
		if (!func_448())
		{
			return 1;
		}
	}
	if (func_1137(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_428() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_428()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1137(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1138()
{
	return Global_2460680;
}

bool func_1139()
{
	return Global_2450632.f_593;
}

void func_1140(var uParam0)
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
					func_1141(iVar0);
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

void func_1141(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_1245(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1142(uVar4, &bVar5))
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

int func_1142(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1143()
{
	SYSTEM::WAIT(0);
}

void func_1144()
{
	if (func_561())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_29[0]))
		{
			if (GAMEPLAY::IS_BIT_SET(iLocal_339, 5))
			{
				if (!func_1108(1))
				{
					if (func_21(Local_80.f_29[0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_80.f_29[0])))
							{
								AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1196();
	OBJECT::_0x78857FC65CADB909(1);
	func_712(0);
	if (!GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1127() || func_382())
			{
				GAMEPLAY::SET_BIT(&iLocal_338, 17);
				Global_1674356.f_2 = Local_80.f_63;
				Global_1674356.f_3 = Local_80.f_64;
				func_925(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 17))
	{
		func_1194(func_1111(), -1, -1, -1082130432);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 4))
	{
		func_423(8);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	}
	if (Local_80.f_3 == 1)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(782665360, 0);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (!func_1193())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_80.f_12))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_80.f_12))
			{
				uVar0 = NETWORK::NET_TO_ENT(Local_80.f_12);
				ENTITY::DELETE_ENTITY(&uVar0);
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&iLocal_338, 29);
	}
	if (func_711())
	{
		func_709(0, -1);
	}
	func_1150(1, 0);
	if (Global_2537071.f_5898 != -1)
	{
		Global_2537071.f_5898 = -1;
	}
	func_1149();
	if (func_1111() == 3)
	{
		func_1148();
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_339, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_339, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_220();
	func_1146();
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 19))
	{
		AUDIO::STOP_SOUND(iLocal_476);
	}
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 16))
	{
		func_415();
		func_405(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_1145();
}

void func_1145()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1146()
{
	if (func_1111() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_1147(Var0);
		}
	}
}

void func_1147(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_12, 11))
		{
			if (func_1102(&(Global_2359721[iVar1].f_15)) == iVar0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1].f_13, 26))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2359721[iVar1].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_1148()
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 0f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 0f, 0, 0);
	}
}

void func_1149()
{
	if (Global_1671757)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 0))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 1))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1671758, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2546092, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1671758 = 0;
	}
	Global_1671757 = 0;
}

void func_1150(bool bParam0, int iParam1)
{
	if (Global_1366905.f_1.f_108 != 0)
	{
		Global_1366905.f_1.f_108 = 0;
	}
	Global_1366905.f_1.f_109 = -1;
	Global_1366905.f_1.f_110 = -1;
	if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 167 || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 168)
	{
		func_1191();
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 4);
	}
	if ((func_765() && iParam1 != 0) && Global_262145.f_16981)
	{
		if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 190 || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 192)
		{
			func_1173(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 164 || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 208) || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 250) || Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 == 237)
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
	}
	if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 != -1)
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_33 = -1;
		if (!GAMEPLAY::IS_BIT_SET(Global_1574650.f_1, 14) && !func_162(PLAYER::PLAYER_ID()))
		{
			func_424(0);
		}
	}
	else if (func_1171(PLAYER::PLAYER_ID()) != -1)
	{
		func_1126(-1);
	}
	func_1170(func_18());
	if (func_346(16))
	{
		func_398(16);
	}
	func_1167(0);
	func_1121(-1);
	func_1166();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1165(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1163(iVar1);
		iVar1++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 5);
	}
	iVar2 = func_745();
	if ((func_293(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1162(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_392(iVar2))
	{
		func_1159(-1, 1);
	}
	else if (((((func_744(iVar2) || func_1158(iVar2)) || func_1157(iVar2)) || func_581(iVar2)) || func_579(iVar2)) || func_577(iVar2))
	{
	}
	else
	{
		func_1159(-1, 1);
	}
	func_375(19);
	func_375(20);
	func_375(21);
	func_375(22);
	func_375(27);
	func_398(3);
	func_398(4);
	func_398(7);
	func_1156();
	if (func_370(PLAYER::PLAYER_ID()))
	{
		func_712(0);
	}
	func_375(29);
	Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57 = func_18();
	if (Global_2537071.f_5124.f_41 != 0)
	{
		Global_2537071.f_5124.f_41 = 0;
	}
	if (bParam0)
	{
		func_399();
	}
	if (!func_162(PLAYER::PLAYER_ID()))
	{
		func_422();
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 6))
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 6);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 7);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 8))
	{
		func_1155("IMPEXP_SELFDES", 0);
		func_1153("IMPEXP_SELFDES");
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 8);
	}
	func_1151(iVar2, 0);
}

void func_1151(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1152(iParam0));
			GAMEPLAY::SET_BIT(&(Global_1674347.f_3), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1674347.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1152(iParam0));
		GAMEPLAY::CLEAR_BIT(&(Global_1674347.f_3), 9);
	}
}

char* func_1152(int iParam0)
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

void func_1153(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_111638.f_14136[iVar0])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 2)
				{
				}
				else
				{
					func_481();
					Global_111638.f_14136[iVar0].f_99[Global_19486] = 0;
					if (func_1154(iVar0))
					{
					}
					else
					{
						Global_111638.f_14136[iVar0].f_24 = 0;
						Global_111638.f_14136[iVar0].f_28 = 0;
						Global_111638.f_14136[iVar0].f_29 = 0;
					}
					UI::_REMOVE_NOTIFICATION(Global_111638.f_14136[iVar0].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1154(int iParam0)
{
	if ((Global_111638.f_14136[iParam0].f_99[0] == 1 || Global_111638.f_14136[iParam0].f_99[1] == 1) || Global_111638.f_14136[iParam0].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1155(char* sParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_111638.f_14136[iVar0])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14136[iVar0]), sParam0))
			{
				if (Global_111638.f_14136[iVar0].f_24 == 0)
				{
				}
				Global_111638.f_14136[iVar0].f_24 = 1;
				if (Global_111638.f_14136[iVar0].f_25 == 1)
				{
					if (Global_111638.f_14136[iVar0].f_99[0] == 1)
					{
						Global_111638.f_14046[0].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[1] == 1)
					{
						Global_111638.f_14046[1].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[2] == 1)
					{
						Global_111638.f_14046[2].f_17 = 0;
					}
					if (Global_111638.f_14136[iVar0].f_99[3] == 1)
					{
						Global_111638.f_14046[3].f_17 = 0;
					}
					Global_111638.f_14136[iVar0].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111638.f_14136[iVar0].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1156()
{
	if (func_386(PLAYER::PLAYER_ID()))
	{
		func_375(25);
	}
}

int func_1157(int iParam0)
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

int func_1158(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1159(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_745();
	}
	if (iParam0 > 0)
	{
		if (func_553() != func_18())
		{
			if (func_574(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2514606.f_93[func_1161(iParam0)] = 1;
			}
		}
		iVar0 = func_1161(159);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(157);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(148);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(164);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(142);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(152);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(166);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(170);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(173);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(179);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(200);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(201);
		if (func_1160(iVar0, Global_262145.f_12606, bParam1))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(182);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(183);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(185);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(186);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(180);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(195);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(197);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(198);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(207);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(208);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(209);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(214);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(215);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(216);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(217);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(218);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(219);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(220);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(221);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

int func_1160(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_266(PLAYER::PLAYER_ID(), 19) && !func_266(PLAYER::PLAYER_ID(), 20)) && !func_266(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2514606.f_93[iParam0] == 1 && func_9(&(Global_2514606[iParam0])))
	{
		if (func_1065(&(Global_2514606[iParam0]), 1, 0) < iParam1)
		{
			Global_2514606.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1161(int iParam0)
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

void func_1162(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_745();
	}
	if (iParam0 > 0)
	{
		if (func_553() != func_18())
		{
			Global_2514606.f_93[func_1161(iParam0)] = 1;
		}
		iVar0 = func_1161(155);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(163);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(160);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(153);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(162);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(154);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(171);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(172);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(199);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(194);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(193);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(210);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(205);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(189);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
		iVar0 = func_1161(211);
		if (func_1160(iVar0, Global_262145.f_12607, 0))
		{
			func_231(&(Global_2514606[iVar0]));
			func_8(&(Global_2514606[iVar0]), 1, 0);
		}
	}
}

void func_1163(int iParam0)
{
	if (!func_439(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_337[iParam0], func_1164(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_337[iParam0] = { func_1164() };
	}
	if (!func_439(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_324[iParam0], func_1164(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_324[iParam0] = { func_1164() };
	}
}

Vector3 func_1164()
{
	return Var0;
}

void func_1165(int iParam0)
{
	if (!func_439(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_150[iParam0], func_1164(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_150[iParam0] = { func_1164() };
	}
	if (!func_439(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_125[iParam0], func_1164(), 0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_125[iParam0] = { func_1164() };
	}
}

void func_1166()
{
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573902 = { Var0 };
	Global_1573902.f_13 = func_18();
	if (GAMEPLAY::IS_BIT_SET(Global_1573344, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573344, 3);
	}
}

void func_1167(bool bParam0)
{
	if (bParam0)
	{
		if (!func_603(PLAYER::PLAYER_ID(), 14))
		{
			func_1169(14);
		}
	}
	else if (func_603(PLAYER::PLAYER_ID(), 14))
	{
		func_1168(14);
	}
}

void func_1168(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_5), iParam0);
}

void func_1169(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1628237[PLAYER::PLAYER_ID()].f_11.f_5), iParam0);
}

void func_1170(int iParam0)
{
	if (func_20(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1628237[PLAYER::PLAYER_ID()].f_11.f_484 != iParam0)
			{
				Global_1628237[PLAYER::PLAYER_ID()].f_11.f_484 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1171(int iParam0)
{
	if (func_1172(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_32;
	}
	return -1;
}

int func_1172(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_32 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1173(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_895(iParam0, iParam1) && func_1190(iParam0, iParam1))
	{
		iVar0 = func_894(iParam0, iParam1);
		func_1177(iVar0, bParam2, bParam3);
		func_1174(iVar0, 1);
	}
}

void func_1174(int iParam0, int iParam1)
{
	if (!func_1176(iParam0))
	{
		return;
	}
	func_878(func_1175(iParam0), iParam1, -1, 1);
	Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_6 = iParam1;
}

int func_1175(int iParam0)
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

bool func_1176(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1177(int iParam0, bool bParam1, bool bParam2)
{
	bVar1 = false;
	iVar2 = func_1067(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1189(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2513475[iParam0];
		iVar0 = func_1188(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1676233 = -1;
		}
		func_1187(iParam0, 0, bParam2);
	}
	else if (func_1185(iParam0, bParam2))
	{
		iVar0 = func_1184(iVar2, 0);
		iVar3 = func_1018(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1183(iVar2, bParam2);
		iVar5 = func_1184(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1182(iVar2) && func_1181(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1189(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1180(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1179(iParam0, (Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_2 - (func_1183(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1184(iVar2, bParam2) / func_1180(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1182(iVar2) && func_1181(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1178(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1178(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_885(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				if (bParam3)
				{
					Global_1590535[iParam0].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590535[iParam0].f_274.f_183[iVar0].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1179(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_2)
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_274.f_183[iParam0].f_2 = iParam1;
	}
}

int func_1180(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_885(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1181(int iParam0, int iParam1)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_885(iParam1) && func_1182(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590535[iParam0].f_274.f_183[iVar0] == iParam1)
			{
				return Global_1590535[iParam0].f_274.f_183[iVar0].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1182(int iParam0)
{
	return func_790(iParam0) == 5;
}

int func_1183(int iParam0, bool bParam1)
{
	iVar1 = func_790(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16950;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16955;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16949;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16954;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16948;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16953;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16946;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16951;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16947;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16952;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21074;
				if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21075;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21058;
				if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21059;
				}
			}
			break;
	}
	return uVar0;
}

int func_1184(int iParam0, bool bParam1)
{
	iVar1 = func_790(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16931;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16940);
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16932;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16939);
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16933;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16938);
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16943);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16934;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16936);
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16941);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16935;
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16937);
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16942);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21071;
			}
			else
			{
				iVar0 = Global_262145.f_21055;
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21072);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21056);
				}
			}
			if (func_893(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_21073);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_21057);
				}
			}
			if (func_1181(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1185(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_879(15384, -1, -1);
	}
	return func_879(func_1186(iParam0), -1, -1);
}

int func_1186(int iParam0)
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

void func_1187(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_878(15384, iParam1, -1, 1);
		return;
	}
	func_878(func_1186(iParam0), iParam1, -1, 1);
}

int func_1188(int iParam0, bool bParam1)
{
	iVar0 = Global_2513475[iParam0];
	iVar1 = func_1067(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2513482;
	}
	if (func_1182(iVar1))
	{
		if (func_1181(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1189(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2513482 = iParam1;
		return;
	}
	Global_2513475[iParam0] = iParam1;
}

int func_1190(int iParam0, int iParam1)
{
	if (func_895(iParam0, iParam1))
	{
		iVar0 = func_894(iParam0, iParam1);
		if (Global_1590535[iParam0].f_274.f_183[iVar0].f_4 > 0 && Global_1590535[iParam0].f_274.f_183[iVar0].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1191()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1737), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1737), 29);
	func_1192(24);
}

void func_1192(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_1193()
{
	if (GAMEPLAY::IS_BIT_SET(iLocal_338, 24))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 3))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 4))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 5))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 8))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 9))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 10))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 15))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1194(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1674356;
	Var1.f_1 = Global_1674356.f_1;
	Var1.f_2 = Global_1674356.f_2;
	Var1.f_3 = Global_1674356.f_3;
	Var1.f_4 = Global_1674356.f_4;
	Var1.f_5 = Global_1674356.f_5;
	Var1.f_6 = Global_1674356.f_6;
	Var1.f_7 = Global_1674356.f_7;
	Var1.f_8 = Global_1674356.f_8;
	Var1.f_9 = Global_1674356.f_9;
	Var1.f_10 = Global_1674356.f_10;
	Var1.f_11 = Global_1674356.f_11;
	Var1.f_12 = Global_1674356.f_12;
	Var1.f_13 = Global_1674356.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1674356.f_15;
			Var15.f_15 = Global_1674356.f_16;
			Var15.f_16 = Global_1674356.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1674356.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1674356.f_15;
			Var49.f_15 = uParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1674356.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1674356.f_15;
			Var82.f_15 = uParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1674356.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1674356.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1674356.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1674356.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1195();
}

void func_1195()
{
	Global_1674356 = { Var0 };
}

void func_1196()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_80.f_1, 17))
		{
			Var0 = { 200f, 200f, 200f };
			Var3 = { func_24() };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var3 - Var0, Var3 + Var0, 1, 1);
			GAMEPLAY::CLEAR_BIT(&(Local_80.f_1), 17);
		}
	}
}

void func_1197(struct<21> Param0)
{
	func_1243(func_1244(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(15);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(5);
	func_1242(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_80, 65);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_145, 193);
	if (!func_1241())
	{
		func_1144();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1240();
		func_1198(0, 0, 0);
		if (func_346(8))
		{
			func_398(8);
		}
		Local_145[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
	}
	else
	{
		func_1144();
	}
}

void func_1198(int iParam0, int iParam1, bool bParam2)
{
	func_1239();
	if (func_573(PLAYER::PLAYER_ID()))
	{
		func_1201(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1200(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1674342, 0);
				break;
			}
	}
	if (!func_778() && !func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_378())
		{
			func_423(3);
		}
	}
	func_423(4);
	if (func_1108(0))
	{
		Global_1628237[PLAYER::PLAYER_ID()].f_11.f_57 = func_553();
	}
	if (func_739(iParam0))
	{
		func_1016();
		Global_1674374.f_18 = func_996(func_325());
	}
	else if (func_743(func_1171(PLAYER::PLAYER_ID())))
	{
		func_1014();
		Global_1674428.f_18 = func_996(func_325());
	}
	if (bParam2)
	{
		if (!func_372())
		{
			func_424(1);
		}
	}
	func_1199();
}

void func_1199()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1366905.f_534[iVar0].f_1 = func_18();
		Global_1366905.f_534[iVar0].f_9 = 0;
		iVar0++;
	}
}

int func_1200(int iParam0, bool bParam1)
{
	return func_16(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1201(bool bParam0)
{
	func_1192(33);
	func_1192(34);
	func_1192(35);
	func_1192(36);
	func_1192(37);
	func_1192(38);
	func_1192(39);
	func_1192(40);
	func_1192(43);
	func_1192(41);
	func_1192(54);
	func_1192(42);
	func_1192(47);
	func_1238(23);
	func_1238(24);
	func_1192(92);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_1737), 2);
	func_1237();
	func_1232();
	func_1227();
	func_1222();
	func_1211();
	func_1207();
	func_1203();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1202(3))
	{
		func_1238(3);
	}
	else if (func_1202(4))
	{
		func_1238(4);
	}
	else if (func_1202(5))
	{
		func_1238(5);
	}
	else if (func_1202(6))
	{
		func_1238(6);
	}
	else if (func_1202(7))
	{
		func_1238(7);
	}
	else if (((((((((((((((((func_1202(0) || func_1202(1)) || func_1202(2)) || func_1202(8)) || func_1202(9)) || func_1202(10)) || func_1202(11)) || func_1202(12)) || func_1202(13)) || func_1202(14)) || func_1202(15)) || func_1202(16)) || func_1202(17)) || func_1202(18)) || func_1202(19)) || func_1202(20)) || func_1202(21)) || func_1202(22))
	{
		func_1238(8);
		func_1238(0);
		func_1238(1);
		func_1238(2);
		func_1238(9);
		func_1238(10);
		func_1238(11);
		func_1238(12);
		func_1238(13);
		func_1238(14);
		func_1238(15);
		func_1238(16);
		func_1238(17);
		func_1238(18);
		func_1238(19);
		func_1238(20);
		func_1238(21);
		func_1238(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2537071.f_5124.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1202(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_14[iVar0], iVar1);
}

void func_1203()
{
	if (func_1205())
	{
		func_1204(0);
		func_1204(1);
		func_1204(2);
		func_1204(3);
	}
}

void func_1204(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_33[iVar0]), iVar1);
}

int func_1205()
{
	if (((func_1206(0) || func_1206(1)) || func_1206(2)) || func_1206(3))
	{
		return 1;
	}
	return 0;
}

bool func_1206(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_33[iVar0], iVar1);
}

void func_1207()
{
	if (func_1209())
	{
		func_1208(4);
		func_1208(5);
		func_1208(6);
		func_1208(7);
	}
}

void func_1208(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_31[iVar0]), iVar1);
}

int func_1209()
{
	if (((func_1210(4) || func_1210(5)) || func_1210(6)) || func_1210(7))
	{
		return 1;
	}
	return 0;
}

bool func_1210(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_31[iVar0], iVar1);
}

void func_1211()
{
	if (func_1221())
	{
		func_1220(8);
		func_1220(9);
		func_1220(10);
		func_1220(12);
		func_1220(13);
		func_1220(14);
		func_1220(19);
		func_1220(20);
		func_1220(21);
		func_1220(22);
		func_1220(23);
		func_1220(24);
		func_1220(25);
		func_1220(26);
		func_1220(15);
		func_1220(16);
		func_1220(17);
		func_1220(18);
		func_1220(35);
		func_1220(45);
		func_1220(46);
		if (func_1219(11))
		{
			func_1220(11);
			iVar0 = func_764(7226, -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, 2);
			func_762(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1219(48))
	{
		if (func_1217(151, 3))
		{
			func_1215(151, 3);
		}
		func_1220(48);
	}
	if (func_1219(49))
	{
		if (func_1217(152, 3))
		{
			func_1215(152, 3);
		}
		func_1220(49);
	}
	if (func_1219(50))
	{
		if (func_1217(153, 3))
		{
			func_1215(153, 3);
		}
		func_1220(50);
	}
	if (func_1219(51))
	{
		if (func_1217(func_1212(), 3))
		{
			func_1215(func_1212(), 3);
		}
		func_1220(51);
	}
}

int func_1212()
{
	if (func_1214())
	{
		func_1213(154, Global_19486, 1);
	}
	return 154;
}

void func_1213(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_24[iParam1] = iParam2;
	}
}

int func_1214()
{
	iVar0 = func_46(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_18()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1215(int iParam0, int iParam1)
{
	if (Global_117[iParam0].f_8 != 150)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			iVar0 = iParam1;
			func_1216(iParam0, iVar0, 0);
			func_1213(iParam0, iVar0, 0);
		}
	}
}

void func_1216(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0].f_12[iParam1] = iParam2;
	}
}

int func_1217(int iParam0, int iParam1)
{
	if (func_1218(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

int func_1218(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_12[iParam1];
}

bool func_1219(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_26[iVar0], iVar1);
}

void func_1220(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_26[iVar0]), iVar1);
}

int func_1221()
{
	if (((((((((((((((((((((func_1219(8) || func_1219(9)) || func_1219(10)) || func_1219(12)) || func_1219(11)) || func_1219(13)) || func_1219(14)) || func_1219(19)) || func_1219(20)) || func_1219(21)) || func_1219(22)) || func_1219(23)) || func_1219(24)) || func_1219(25)) || func_1219(26)) || func_1219(15)) || func_1219(16)) || func_1219(17)) || func_1219(18)) || func_1219(35)) || func_1219(45)) || func_1219(46))
	{
		return 1;
	}
	return 0;
}

void func_1222()
{
	if (func_1226())
	{
		func_1225(0);
		func_1225(1);
		func_1225(2);
		func_1225(3);
		func_1225(4);
		func_1225(5);
		if (func_1224(32))
		{
			if (func_1217(func_1223(), 3))
			{
				func_1215(func_1223(), 3);
			}
			func_1225(32);
		}
	}
}

int func_1223()
{
	if (func_1214())
	{
		func_1213(12, Global_19486, 1);
	}
	return 12;
}

bool func_1224(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_23[iVar0], iVar1);
}

void func_1225(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_23[iVar0]), iVar1);
}

int func_1226()
{
	if ((((func_1224(1) || func_1224(0)) || func_1224(2)) || func_1224(4)) || func_1224(5))
	{
		return 1;
	}
	return 0;
}

void func_1227()
{
	if (func_1231())
	{
		func_1230(0);
		func_1230(1);
		func_1230(2);
		func_1230(3);
		func_1230(4);
		func_1230(5);
		func_1230(6);
		func_1230(7);
		if (func_1229(8))
		{
			func_1230(8);
		}
		if (func_1229(15))
		{
			if (func_1217(func_1228(), 3))
			{
				func_1215(func_1228(), 3);
			}
			func_1230(15);
		}
	}
}

int func_1228()
{
	if (func_1214())
	{
		func_1213(20, Global_19486, 1);
	}
	return 20;
}

bool func_1229(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_21[iVar0], iVar1);
}

void func_1230(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_21[iVar0]), iVar1);
}

int func_1231()
{
	if ((((((((func_1229(0) || func_1229(1)) || func_1229(2)) || func_1229(3)) || func_1229(4)) || func_1229(5)) || func_1229(6)) || func_1229(7)) || func_1229(8))
	{
		return 1;
	}
	return 0;
}

void func_1232()
{
	if (func_1236())
	{
		func_1235(0);
		func_1235(1);
		func_1235(2);
		func_1235(3);
		func_1235(4);
		func_1235(5);
		func_1235(6);
		func_1235(7);
		func_1235(8);
		func_1235(9);
		func_1235(10);
		func_1235(11);
		func_1235(12);
		if (func_1234(13))
		{
			if (func_1217(func_1233(), 3))
			{
				func_1215(func_1233(), 3);
			}
			func_1235(13);
		}
	}
}

int func_1233()
{
	if (func_1214())
	{
		func_1213(76, Global_19486, 1);
	}
	return 76;
}

bool func_1234(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_5124.f_19[iVar0], iVar1);
}

void func_1235(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_19[iVar0]), iVar1);
}

int func_1236()
{
	if ((((((((((((func_1234(0) || func_1234(1)) || func_1234(2)) || func_1234(3)) || func_1234(4)) || func_1234(5)) || func_1234(6)) || func_1234(7)) || func_1234(8)) || func_1234(9)) || func_1234(10)) || func_1234(11)) || func_1234(12))
	{
		return 1;
	}
	return 0;
}

void func_1237()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2537071.f_5124.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1238(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_5124.f_14[iVar0]), iVar1);
}

void func_1239()
{
	Global_1674356 = { Var0 };
	Global_1674356.f_14 = 0;
	Global_1674356.f_15 = 0;
}

void func_1240()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574967[iVar0], -347613984);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -347613984, Global_1574967[iVar0]);
		iVar0++;
	}
}

int func_1241()
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
		if (func_1139())
		{
			return 0;
		}
		if (func_1137(157))
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

int func_1242(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1145();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1095())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1145();
					}
					else
					{
						return 0;
					}
				}
				if (func_1139())
				{
					if (!bParam2)
					{
						func_1145();
					}
					else
					{
						return 0;
					}
				}
				if (func_1137(157))
				{
					if (!bParam2)
					{
						func_1145();
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
					func_1145();
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
				func_1145();
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
			func_1145();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1243(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1145();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_1244(int iParam0)
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

int func_1245(int iParam0, bool bParam1, bool bParam2)
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

