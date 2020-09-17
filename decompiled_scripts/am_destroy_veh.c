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
	iLocal_223 = 1076369579;
	iLocal_224 = 20;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_236(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_227(ScriptParam_0);
	}
	else
	{
		func_223();
	}
	while (true)
	{
		func_222();
		if (func_211() || func_207(17))
		{
			func_223();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			func_223();
		}
		switch (func_206(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_205() == 1)
				{
					func_204();
					func_202();
					if (func_201(60000))
					{
						if (!func_199())
						{
							if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_73.f_10))
							{
								func_198("DSV_HELP1", -1);
							}
							else
							{
								func_198("DSV_HELP2", -1);
							}
						}
					}
					Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
				}
				else if (func_205() == 4)
				{
					Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 1:
				if (func_205() == 1)
				{
					func_45();
				}
				else if (func_205() == 4)
				{
					Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 3;
				}
				break;
			
			case 3:
				func_44(&(Local_73.f_45));
				if (func_43(&(Local_73.f_45)))
				{
					Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
				}
				break;
			
			case 2:
				Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 4;
			
			case 4:
				func_223();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_205())
			{
				case 0:
					if (func_10())
					{
						func_204();
						func_9(&(Local_73.f_43), 0, 0);
						Local_73 = 1;
					}
					break;
				
				case 1:
					func_8();
					func_7();
					if (func_1())
					{
						Local_73 = 4;
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
	if (Local_73.f_42 == 0)
	{
		if (Local_73 != 4)
		{
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
				if (func_6(&(Local_73.f_47), 3000, 0))
				{
					if (Local_73.f_8 == func_5())
					{
						Var0.f_2 = -449914319;
						func_3(Var0, func_4(1));
					}
					else
					{
						Var0.f_2 = 670897506;
						Var0.f_10 = Local_73.f_8;
						func_3(Var0, func_4(1));
					}
					return 1;
				}
			}
			if (func_6(&(Local_73.f_43), Global_262145.f_11131, 0))
			{
				Var14.f_2 = -786182815;
				func_3(Var14, func_4(1));
				return 1;
			}
		}
	}
	return 0;
}

void func_3(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 1975453628;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_4(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_236(iVar2, 0, 0))
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

int func_5()
{
	return -1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
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

void func_7()
{
	switch (Local_73.f_42)
	{
		case 0:
			break;
		
		case 1:
			break;
	}
}

void func_8()
{
	if (Local_73 != 4)
	{
		iLocal_221 = 0;
		while (iLocal_221 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_221)))
			{
				uVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_221));
				if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 0))
				{
					Var0.f_2 = 670897506;
					Var0.f_10 = uVar14;
					Local_73.f_8 = uVar14;
					func_3(Var0, func_4(1));
					Local_73 = 4;
					return;
				}
				if (!MISC::IS_BIT_SET(Local_73.f_1, 0))
				{
					if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 1))
					{
						MISC::SET_BIT(&(Local_73.f_1), 0);
					}
					if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 2))
					{
						MISC::SET_BIT(&(Local_73.f_1), 0);
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_73.f_1, 1))
					{
						if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 3))
						{
							MISC::SET_BIT(&(Local_73.f_1), 1);
						}
					}
					if (!MISC::IS_BIT_SET(Local_73.f_1, 2))
					{
						if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 4))
						{
							MISC::SET_BIT(&(Local_73.f_1), 2);
						}
					}
					if (!MISC::IS_BIT_SET(Local_73.f_1, 3))
					{
						if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 5))
						{
							MISC::SET_BIT(&(Local_73.f_1), 3);
						}
					}
					if (!MISC::IS_BIT_SET(Local_73.f_1, 4))
					{
						if (MISC::IS_BIT_SET(Local_122[iLocal_221].f_1, 6))
						{
							MISC::SET_BIT(&(Local_73.f_1), 4);
						}
					}
				}
			}
			iLocal_221++;
		}
	}
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

int func_10()
{
	if (func_42(Local_73.f_10) && func_42(Local_73.f_11))
	{
		if ((func_21() && func_19()) && func_11())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_73.f_10);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_73.f_11);
			return 1;
		}
	}
	return 0;
}

int func_11()
{
	iVar0 = 0;
	while (iVar0 < Local_73.f_14)
	{
		if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_4[iVar0]) && func_42(Local_73.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
		{
			if (func_17(Local_73.f_2))
			{
				if (Local_73.f_12 == 0)
				{
					if (func_16(&(Local_73.f_4[iVar0]), Local_73.f_2, 22, Local_73.f_11, iVar0, 1, 1, 1))
					{
						func_13(&(Local_73.f_4[iVar0]));
					}
				}
				else if (func_12(&(Local_73.f_4[iVar0]), 22, Local_73.f_11, Local_73.f_28[iVar0], Local_73.f_38[iVar0], 1, 1, 1))
				{
					func_13(&(Local_73.f_4[iVar0]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_73.f_14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_4[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_12(var uParam0, int iParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam9);
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

void func_13(var uParam0)
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(*uParam0), Global_1575002);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(*uParam0), 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(*uParam0), 1);
	WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(*uParam0), func_15(), 25000, 1);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (iVar0 == 0 || iVar0 == 1)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 0);
	}
	else if ((iVar0 == 2 || iVar0 == 3) || iVar0 == 4)
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else
	{
		PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 2)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 5, 1);
	}
	else if (iVar0 == 3)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 17, 1);
	}
	else if ((iVar0 == 4 || iVar0 == 5) || iVar0 == 6)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 13, 1);
	}
	if (func_14())
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 20, 1);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(*uParam0), 2, 1);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iVar0 == 0)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 2);
	}
	else if (iVar0 == 1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 1);
	}
	else if (iVar0 == 2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(*uParam0), 3);
	}
	PED::_0x49E50BDB8BA4DAB2(NETWORK::NET_TO_PED(*uParam0), 1);
	PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 1);
	PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(*uParam0), 29, 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(*uParam0), 3);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(*uParam0), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
}

int func_14()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_15()
{
	switch (Local_73.f_11)
	{
		case 588969535:
		case -198252413:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 1593441988;
				
				case 1:
					return 487013001;
				
				case 2:
					return 324215364;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -1074790547;
				
				default:
			}
			break;
		
		case 832784782:
		case 1520708641:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 487013001;
				
				case 2:
					return 324215364;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -1074790547;
				
				default:
			}
			break;
		
		case 1330042375:
		case -44746786:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 1593441988;
				
				case 1:
					return 2017895192;
				
				case 2:
					return 736523883;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -1074790547;
				
				default:
			}
			break;
		
		case -9308122:
		case 2119136831:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 487013001;
				
				case 2:
					return -1357824103;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -2084633992;
				
				default:
			}
			break;
		
		case -39239064:
		case -984709238:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 2017895192;
				
				case 2:
					return 736523883;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -2084633992;
				
				default:
			}
			break;
		
		case 2064532783:
		case 1822107721:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 1593441988;
				
				case 1:
					return 2017895192;
				
				case 2:
					return 324215364;
				
				case 3:
					return -1660422300;
				
				case 4:
					return 2144741730;
				
				default:
			}
			break;
		
		case 663522487:
		case 846439045:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 487013001;
				
				case 2:
					return 324215364;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -1074790547;
				
				default:
			}
			break;
		
		case -48477765:
		case 228715206:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 2017895192;
				
				case 2:
					return 324215364;
				
				case 3:
					return -1660422300;
				
				case 4:
					return -1074790547;
				
				default:
			}
			break;
		
		default:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
			{
				case 0:
					return 453432689;
				
				case 1:
					return 487013001;
				
				case 2:
					return 736523883;
				
				case 3:
					return 2144741730;
				
				case 4:
					return -2084633992;
				
				default:
			}
			break;
	}
	return 453432689;
}

int func_16(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_17(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_18(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_18(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_19()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_3) && func_42(Local_73.f_11)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (func_17(Local_73.f_2))
		{
			if (Local_73.f_12 == 1)
			{
				if (func_12(&(Local_73.f_3), 22, Local_73.f_11, Local_73.f_24, Local_73.f_27, 1, 1, 1))
				{
					func_13(&(Local_73.f_3));
					func_20();
				}
			}
			else if (func_16(&(Local_73.f_3), Local_73.f_2, 22, Local_73.f_11, -1, 1, 1, 1))
			{
				func_13(&(Local_73.f_3));
				func_20();
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_3))
	{
		return 0;
	}
	return 1;
}

void func_20()
{
	if (Local_73.f_12 == 0)
	{
		if (func_14())
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786468);
		}
		else
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_73.f_3), NETWORK::NET_TO_VEH(Local_73.f_2), MISC::GET_RANDOM_FLOAT_IN_RANGE(7f, 18f), 786599);
		}
	}
	else if (Local_73.f_12 == 2)
	{
		func_204();
		TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73.f_3), uLocal_220);
	}
}

int func_21()
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (func_42(Local_73.f_10))
		{
			if (func_25(&(Local_73.f_16), &(Local_73.f_19)))
			{
				if (func_22(&(Local_73.f_2), Local_73.f_10, Local_73.f_16, Local_73.f_19, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_73.f_2), 0);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_73.f_2), 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_73.f_2));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_73.f_2), 1, 1, 0);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_73.f_2), 0);
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_73.f_2), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset"))
						{
							iVar0 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset");
						}
						MISC::SET_BIT(&iVar0, 10);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_73.f_2), "MPBitset", iVar0);
					}
					if (Local_73.f_12 == 0)
					{
						if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_73.f_2)) < Local_73.f_14)
						{
							Local_73.f_14 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_73.f_2));
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		return 0;
	}
	return 1;
}

int func_22(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, 0, 0, 0, 0, 0, 0);
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
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam10);
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
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_23(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_23(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_24(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
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

int func_24(int iParam0, struct<3> Param1, int iParam4)
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
				if (MISC::ABSF((Global_2417897.f_461[iVar0][iVar1].f_2 - Var2.z)) < 2f)
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

bool func_25(var uParam0, var uParam1)
{
	Var5 = { func_41(PLAYER::PLAYER_ID()) };
	if (Local_73.f_12 == 1)
	{
		return 1;
	}
	if (!bVar0)
	{
		if (VEHICLE::_0xA4822F1CF23F4810(&Var5, uParam0, &uVar2, 0f, 180f, 150f, 0, 1, 1))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(*uParam0, 1, uParam0, uParam1, &iVar1, 4, 1077936128, 0);
			if (iVar1 >= 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1367.557f, -3220.598f, 12.9448f, Var5, 1) >= 600f && MISC::GET_DISTANCE_BETWEEN_COORDS(750f, -3200f, 6f, Var5, 1) >= 700f)
				{
					if (iLocal_225 <= 5)
					{
						if (func_26(*uParam0, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
						{
							bVar0 = true;
						}
					}
					else
					{
						Local_73 = 4;
					}
				}
			}
		}
	}
	if (!bVar0)
	{
		iLocal_224 += 4;
		if (iLocal_224 >= 80)
		{
			iLocal_224 = 20;
			iLocal_225++;
		}
	}
	return bVar0;
}

int func_26(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_35(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405072.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_27(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405072.f_2++;
	return 1;
}

int func_27(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	if (iParam4 && !bParam7)
	{
		if (func_236(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_32(PLAYER::PLAYER_ID()), Param0, 1) <= (fVar2 + fParam3))
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
		if (func_236(iVar1, 1, 1))
		{
			if (!func_29(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_28(iVar1) || !bParam10) && !Global_2425662[iVar1].f_259)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_32(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_32(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_28(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425662[iParam0].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_30(-1, 0) == 8;
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

int func_30(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_31();
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

int func_31()
{
	return Global_1312745;
}

Vector3 func_32(int iParam0)
{
	iVar0 = iParam0;
	if ((func_34() && Global_1590535[iVar0].f_847) && !func_33(Global_1590535[iVar0].f_848))
	{
		return Global_1590535[iVar0].f_848;
	}
	return func_41(iParam0);
}

int func_33(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_34()
{
	return Global_2450632.f_17;
}

int func_35(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_236(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_28(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_36(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_41(iVar1), Param0, 1) < fParam3)
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

int func_36(int iParam0)
{
	if (func_40(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2513218 = { func_39(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2513218))
	{
		return 1;
	}
	if (func_37(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	iVar0 = func_38(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_38(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1628237[iParam0].f_11;
	}
	return func_5();
}

struct<13> func_39(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_40(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2513218 = { func_39(iParam0) };
		Global_2513231 = { func_39(iParam1) };
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

Vector3 func_41(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_43(var uParam0)
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

void func_44(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_9(uParam0, 0, 0);
		}
	}
}

void func_45()
{
	switch (Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_2)
	{
		case 0:
			func_202();
			func_51();
			func_46();
			if (Local_73.f_42 > 0)
			{
				Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = 1;
			}
			break;
		
		case 1:
			func_223();
			break;
	}
}

void func_46()
{
	func_47(Local_73.f_3, &uLocal_226, -1082130432, 0, 0, 0, 0, -1, -1, 1);
	iVar0 = 0;
	while (iVar0 < Local_73.f_14)
	{
		func_47(Local_73.f_4[iVar0], &(Local_234[iVar0]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Local_73.f_1, 0))
	{
		if (!MISC::IS_BIT_SET(Local_73.f_1, 1) && !MISC::IS_BIT_SET(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 3))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_73.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73.f_3), Global_1575003);
					MISC::SET_BIT(&(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 3);
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!MISC::IS_BIT_SET(Local_73.f_1, (2 + iVar0)) && !MISC::IS_BIT_SET(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, (4 + iVar0)))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_4[iVar0]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_4[iVar0]) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_73.f_4[iVar0]) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73.f_4[iVar0]), Global_1575003);
						if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(Local_73.f_4[iVar0])))
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_73.f_4[iVar0]), 100f, 0);
						}
						MISC::SET_BIT(&(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), (4 + iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

void func_47(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_50())
		{
			Global_2439138 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_49(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2439138, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_49(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2439138, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*uParam1))
	{
		func_48(uParam1);
	}
}

void func_48(var uParam0)
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_49(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
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
		if (!HUD::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0, 1);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(uParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(uParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(uParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(uParam0, uParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(uParam0, uParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(uParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(uParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_50()
{
	return Global_1312854;
}

void func_51()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_2))
	{
		if (!MISC::IS_BIT_SET(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 0))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
			}
			if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
				if (PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_73.f_2, &uVar0))
				{
					func_195(2104, 1, -1);
					func_192(68, 1, -1);
					func_143(0, PLAYER::PLAYER_PED_ID(), "XPT_KAIE", -875716015, 1504756458, Global_262145.f_8103, 1, -1, 0, 0, 0);
					if (func_14())
					{
						func_130(86, "DSV_PASS0", 0, 0, -99);
					}
					else
					{
						func_130(86, "DSV_PASS1", 0, 0, -99);
					}
					iVar1 = Global_262145.f_8104;
					Global_2462880 = iVar1;
					func_76(&iVar1, 1);
					if (iVar1 > 0)
					{
						func_72(iVar1, 1, 1, 1092616192);
						if (func_71())
						{
							func_59(-1922554349, iVar1, &uVar2, 0, 0, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar1, "AM_DESTROY_VEH", &uVar3);
						}
					}
					MISC::SET_BIT(&(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 0);
				}
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_73.f_1, 0))
				{
					if (!MISC::IS_BIT_SET(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 1))
					{
						if (func_58(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_73.f_2), 1))
						{
							MISC::SET_BIT(&(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 1);
						}
					}
					if (!MISC::IS_BIT_SET(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 2))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_73.f_2), PLAYER::PLAYER_PED_ID(), 1))
						{
							MISC::SET_BIT(&(Local_122[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 2);
						}
					}
				}
				if (func_236(PLAYER::PLAYER_ID(), 1, 1) && func_58(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_73.f_2), 0))
				{
					if (!MISC::IS_BIT_SET(Global_2537071.f_4592, 1))
					{
						MISC::SET_BIT(&(Global_2537071.f_4592), 1);
					}
				}
				else if (MISC::IS_BIT_SET(Global_2537071.f_4592, 1))
				{
					MISC::CLEAR_BIT(&(Global_2537071.f_4592), 1);
				}
				func_52();
			}
		}
	}
}

void func_52()
{
	if (!MISC::IS_BIT_SET(uLocal_219, 0))
	{
		if (func_57(27, -1) == 0)
		{
			if (func_236(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_58(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_73.f_2), 0))
				{
					if (func_6(&uLocal_259, 300000, 0))
					{
						func_55(27, 1, -1);
						MISC::SET_BIT(&iLocal_219, 0);
					}
				}
				else if (func_54(&uLocal_259))
				{
					func_53(&uLocal_259);
				}
			}
			else if (func_54(&uLocal_259))
			{
				func_53(&uLocal_259);
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_219, 0);
		}
	}
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_54(var uParam0)
{
	return uParam0->f_1;
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	uVar0 = Global_2585647[iParam0][func_56(iParam2)];
	STATS::STAT_SET_BOOL(uVar0, iParam1, 1);
}

int func_56(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_31();
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

int func_57(int iParam0, int iParam1)
{
	uVar0 = Global_2585647[iParam0][func_56(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_59(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_71())
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
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_60(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_60(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_60(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_31()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
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
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_67(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_66(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_61(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_62(iParam0);
	}
}

void func_62(int iParam0)
{
	bVar0 = false;
	if (!func_71())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_65(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_63(&(Global_4263954[iParam0]));
	}
}

void func_63(var uParam0)
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
	func_64(&(uParam0->f_14));
	func_64(&(uParam0->f_14.f_13));
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

void func_64(var uParam0)
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

int func_65(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_66(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_67(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_71())
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
			Global_4263954[iVar0].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_68(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_68(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_70(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_69();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_69()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_70(int iParam0)
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_71()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_73(iParam0, iParam1, iParam2, fParam3);
}

void func_73(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_74(iParam0, iParam1, iParam2, fParam3);
}

void func_74(int iParam0, int iParam1, int iParam2, float fParam3)
{
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
	Global_1590535[PLAYER::PLAYER_ID()].f_211.f_4 = iVar1;
	Global_1590535[PLAYER::PLAYER_ID()].f_211.f_3 = (Global_1590535[PLAYER::PLAYER_ID()].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_75(iVar1, 0);
	}
}

void func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_76(var uParam0, int iParam1)
{
	if (*uParam0 > 0)
	{
		if (!func_129())
		{
			if (func_128(0))
			{
				if (!func_124(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_123()))
					{
						if (func_122() == 100)
						{
							iVar0 = *uParam0;
							*uParam0 = 0;
						}
						else
						{
							iVar0 = ((*uParam0 / 100) * func_122());
							*uParam0 = (*uParam0 - iVar0);
						}
						func_120(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_81("GB_BCUT_TICK1", func_123(), iVar0, 0, 0, 1);
						}
						func_80(20);
						func_77(func_123(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_77(int iParam0, int iParam1, int iParam2)
{
	if (func_236(iParam0, 0, 1))
	{
		Var0 = -1294585740;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_79(iParam0);
		func_78(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_70(iParam0));
	}
}

void func_78(var uParam0, var uParam1)
{
	*uParam0 = Global_1650640.f_9;
	*uParam1 = Global_1650640.f_10;
}

var func_79(int iParam0)
{
	return Global_1628237[iParam0].f_533;
}

void func_80(int iParam0)
{
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

int func_81(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_88(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_86(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(0, 1);
		func_82(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_82(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	if ((!func_85() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_29(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_83(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1670846.f_5[iVar0] = iParam0;
		Global_1670846.f_5[iVar0].f_1 = iParam2;
		StringCopy(&(Global_1670846.f_5[iVar0].f_8), sParam1, 16);
		Global_1670846.f_5[iVar0].f_2[0] = uParam4;
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

int func_83(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (Global_1670846 - 1))
	{
		if (iParam0 > Global_1670846.f_5[iVar0].f_1)
		{
			func_84(iVar0);
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

void func_84(int iParam0)
{
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1670846.f_5[iVar0] = { Global_1670846.f_5[(iVar0 - 1)] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_85()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_86(char* sParam0)
{
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_87(&cVar0);
}

var func_87(char[4] cParam0)
{
	return cParam0;
}

int func_88(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_118(iParam0) && !bParam4)
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
	if (((func_118(PLAYER::PLAYER_ID()) || (func_117() && func_116())) && !MISC::IS_BIT_SET(Global_2537071.f_4591, 31)) && !bParam4)
	{
		uVar1 = func_115();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_236(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_190067[iParam1] != -1)
							{
								return func_113(iParam1, iParam0, 0);
							}
							else
							{
								return func_101(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_101(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_190067[iParam1] != -1)
				{
					return func_113(iParam1, iParam0, 0);
				}
				else
				{
					return func_89(0, -1, 0);
				}
			}
			else
			{
				return func_89(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_190067[iParam1] != -1)
		{
			return func_113(iParam1, iParam0, 0);
		}
		else
		{
			return func_101(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_101(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_89(bool bParam0, int iParam1, bool bParam2)
{
	return func_90(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_90(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_100() || (func_99() && func_97())) && Global_1388109.f_1)
	{
		if (bParam1)
		{
			return func_96(iParam2, iVar0);
		}
		else
		{
			return func_96(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_95(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_94(1);
				}
				else
				{
					return func_94(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_91(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_91(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_94(1);
	}
	return func_94(0);
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	iVar0 = func_93(iParam0, iParam1, iParam3);
	if (func_92(Global_4456448.f_194990, 1))
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

int func_92(int iParam0, bool bParam1)
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

int func_93(int iParam0, int iParam1, int iParam2)
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
			if (!func_95(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_95(int iParam0, int iParam1, int iParam2)
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
					return MISC::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_96(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93(iParam1, iParam0, 4);
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

bool func_97()
{
	if (func_98())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_237025, 4);
}

bool func_98()
{
	return MISC::IS_BIT_SET(Global_4456448.f_226020, 12);
}

bool func_99()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_237025, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_237025, 0) || Global_1653478) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1518439287) > 0);
}

int func_100()
{
	if (func_98() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_109())
			{
				iVar3 = func_106(iParam0);
				if (!iVar3 == -1)
				{
					return func_104(iVar3);
				}
			}
			if ((func_103(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_95(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_94(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_102(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574410 || Global_1574401) || Global_1590535[iParam0] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574410 == 1 && Global_1574420 == 0))
			{
				return func_94(1);
			}
			else
			{
				return func_90(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574405 && Global_1573902.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_106(iParam0);
	if (!iVar4 == -1)
	{
		return func_104(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_102(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_103(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_104(int iParam0)
{
	if (iParam0 > -1)
	{
		iVar0 = func_105(iParam0);
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

var func_105(int iParam0)
{
	return Global_2417897.f_818.f_44[iParam0].f_1;
}

int func_106(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_107(iParam0, 1))
		{
			return Global_2417897.f_818.f_11[func_38(iParam0)];
		}
	}
	return -1;
}

bool func_107(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_1628237[iParam0].f_11 != func_5();
}

int func_108(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1628237[iParam0].f_11 != func_5())
		{
			return Global_1628237[iParam0].f_11 == iParam0;
		}
	}
	return 0;
}

int func_109()
{
	if (((func_112() || func_111()) || func_34()) || func_110())
	{
		return 1;
	}
	return 0;
}

var func_110()
{
	return Global_2450632.f_19;
}

var func_111()
{
	return Global_2450632.f_16;
}

var func_112()
{
	return Global_2450632.f_15;
}

int func_113(int iParam0, int iParam1, bool bParam2)
{
	iVar1 = Global_969031.f_14[iParam0];
	if (func_109())
	{
		iVar2 = func_106(iParam1);
		if (!iVar2 == -1)
		{
			return func_104(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_271[iParam0].f_6513[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
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
				iVar0 = Global_4456448.f_190067[iParam0];
			}
		}
		else
		{
			iVar0 = func_90(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_114(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_95(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_102(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_114(int iParam0)
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

var func_115()
{
	return Global_2359302.f_2;
}

bool func_116()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_117()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

int func_118(int iParam0)
{
	if (func_29(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425662[iParam0].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_119()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

void func_120(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = func_121(1);
	}
	else
	{
		iVar1 = func_121(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_121(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12390;
}

int func_122()
{
	return Global_262145.f_12389;
}

int func_123()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_124(bool bParam0)
{
	return func_125(PLAYER::PLAYER_ID(), bParam0);
}

int func_125(int iParam0, bool bParam1)
{
	return func_126(iParam0, bParam1, 1);
}

int func_126(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_127(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_5() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1628237[iParam0].f_11 != func_5())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_128(bool bParam0)
{
	return func_107(PLAYER::PLAYER_ID(), bParam0);
}

bool func_129()
{
	return func_108(PLAYER::PLAYER_ID());
}

void func_130(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4)
{
	func_131(1, iParam0, sParam1, sParam2, bParam3, iParam4);
}

void func_131(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	uVar0 = uParam1;
	bVar1 = false;
	func_132(iParam0, sParam2, uVar0, bVar1, sParam3, bParam4, iParam5);
}

void func_132(var uParam0, char* sParam1, var uParam2, bool bParam3, char* sParam4, bool bParam5, int iParam6)
{
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
	iVar0 = func_141();
	if (iVar0 == -1)
	{
		return;
	}
	func_140(iVar0);
	func_139(iVar0, uParam0);
	func_138(iVar0, uParam2, bParam3);
	func_137(iVar0, sParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iParam6 == -99)
	{
		return;
	}
	func_136(iVar0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_134(iVar0, sParam4, bParam5);
	}
	if (!iParam6 == -99)
	{
		func_133(iVar0, iParam6);
	}
}

void func_133(int iParam0, int iParam1)
{
	Global_1370527.f_59[iParam0].f_15 = iParam1;
}

void func_134(int iParam0, char* sParam1, bool bParam2)
{
	StringCopy(&(Global_1370527.f_59[iParam0].f_7), sParam1, 32);
	if (!bParam2)
	{
		return;
	}
	func_135(iParam0);
}

void func_135(int iParam0)
{
	MISC::SET_BIT(&(Global_1370527.f_59[iParam0]), 5);
}

void func_136(int iParam0)
{
	MISC::SET_BIT(&(Global_1370527.f_59[iParam0]), 4);
}

void func_137(int iParam0, char* sParam1)
{
	StringCopy(&Var0, sParam1, 16);
	Global_1370527.f_59[iParam0].f_3 = { Var0 };
}

void func_138(int iParam0, var uParam1, bool bParam2)
{
	Global_1370527.f_59[iParam0].f_2 = uParam1;
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_1370527.f_59[iParam0]), 2);
		MISC::CLEAR_BIT(&(Global_1370527.f_59[iParam0]), 3);
	}
	else
	{
		MISC::SET_BIT(&(Global_1370527.f_59[iParam0]), 3);
		MISC::CLEAR_BIT(&(Global_1370527.f_59[iParam0]), 2);
	}
}

void func_139(int iParam0, var uParam1)
{
	Global_1370527.f_59[iParam0].f_1 = uParam1;
}

void func_140(int iParam0)
{
	MISC::SET_BIT(&(Global_1370527.f_59[iParam0]), 0);
}

int func_141()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_142(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_142(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1370527.f_59[iParam0], 0);
}

int func_143(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_144(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_144(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	iVar0 = func_154(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_150(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_145(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_145(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	Var0 = { func_148(iParam0, 1) };
	if (iParam0 == func_147(PLAYER::PLAYER_PED_ID()))
	{
		func_146(1);
	}
	func_150(Var0, iParam1, 0, sParam2, uParam3);
}

void func_146(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_147(var uParam0)
{
	return uParam0;
}

Vector3 func_148(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_149(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
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

int func_149(var uParam0)
{
	return uParam0;
}

void func_150(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_153(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_152();
			Global_2439138.f_1290[iVar1].f_10 = func_151();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_151()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_152()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_153(struct<3> Param0, var uParam3, var uParam4)
{
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
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

var func_154(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_155(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_155(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_191(PLAYER::PLAYER_ID()) || func_190(PLAYER::PLAYER_ID()))
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
	else if (func_188() || func_184(PLAYER::PLAYER_ID()))
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
	if (func_183(uParam2))
	{
	}
	if (func_182())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_180(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_179(&iVar1);
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
					func_175(&iVar1);
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
			func_195(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_165((func_174(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_195(1165, iVar1, -1);
				}
				func_160(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_156((func_158(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_156((func_158(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_156(int iParam0)
{
	if (func_182())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_157(-1804740956, iParam0);
	}
}

void func_157(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_158(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_236(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_159(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_159(-1804740956);
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_160(int iParam0)
{
	Var0 = { func_39(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_163(func_164(&Var0));
			if (iVar13 == 0)
			{
				func_162(&Global_1387915, iParam0);
				func_161(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_162(&Global_1387916, iParam0);
				func_161(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_162(&Global_1387917, iParam0);
				func_161(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_162(&Global_1387918, iParam0);
				func_161(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_162(&Global_1387919, iParam0);
				func_161(1894078811, Global_1387919);
			}
		}
	}
}

void func_161(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = uParam1;
			break;
		
		case 1669900865:
			Global_1387912 = uParam1;
			break;
		
		case 54164875:
			Global_1387912 = uParam1;
			break;
		
		case -842450336:
			Global_1387913 = uParam1;
			break;
		
		case -1576871964:
			Global_1387914 = uParam1;
			break;
		
		case -1446982891:
			Global_1387915 = uParam1;
			break;
		
		case -1676857426:
			Global_1387916 = uParam1;
			break;
		
		case 1280806976:
			Global_1387917 = uParam1;
			break;
		
		case -1096682281:
			Global_1387918 = uParam1;
			break;
		
		case 1894078811:
			Global_1387919 = uParam1;
			break;
		
		case -1566025259:
			Global_1387920 = uParam1;
			break;
		
		case -621080327:
			Global_1387921 = uParam1;
			break;
		
		case 1021002722:
			Global_1387922 = uParam1;
			break;
		
		case -1670771646:
			Global_1387923 = uParam1;
			break;
		
		case -1992420464:
			Global_1387924 = uParam1;
			break;
		
		case -386175531:
			Global_1387925 = uParam1;
			break;
		
		case -203536263:
			Global_1387926 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_163(int iParam0)
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

int func_164(var uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

void func_165(int iParam0, int iParam1, int iParam2)
{
	if (func_182())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_56(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_56(-1)])
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
		if (func_173(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_171(iParam0, 1);
		}
		func_170(639, iParam0, -1, 1);
		func_169(640, func_171(iParam0, 1), -1, 1, 0);
		Global_1388060[func_56(-1)] = iParam0;
		func_166(-1109644434, 7, 0);
	}
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	if (func_168(iParam1, iParam2))
	{
		iVar0 = func_167();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_167()
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

int func_168(int iParam0, var uParam1)
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

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_56(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_56(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_56(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_56(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_56(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_56(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_56(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_56(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_56(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_56(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_56(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_56(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_56(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_56(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_56(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_56(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_56(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_56(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_56(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_56(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_56(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_56(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_56(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_56(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_56(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_56(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_56(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_56(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_56(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_56(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_56(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_56(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_56(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_56(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_56(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_56(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_56(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_56(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_56(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_56(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_56(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_56(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_56(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_56(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_56(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_56(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_56(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_56(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_56(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_56(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_56(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_56(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_56(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_56(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_56(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_56(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_56(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_56(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_56(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_56(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_56(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_56(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_56(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_56(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_56(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_56(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_56(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_56(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_56(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_56(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_56(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_56(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_56(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_56(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_56(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_56(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_56(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_56(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_56(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_56(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_56(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_56(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_56(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_56(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_56(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_56(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_56(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_56(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_56(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_56(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_56(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_56(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_56(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_56(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_56(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_56(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_56(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_56(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_56(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_56(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_56(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_56(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_56(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_56(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_56(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_56(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_56(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_171(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_172(iParam0, 0);
}

int func_172(int iParam0, int iParam1)
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

int func_173(int iParam0)
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

int func_174(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_56(-1)];
			}
			else if (func_173(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_56(-1)];
	}
	return 0;
}

void func_175(int iParam0)
{
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_95(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_40(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_176(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_176(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_176(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_177(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_236(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_40(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_236(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_178(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_40(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_176(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_176(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_178(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_41(iParam0), func_41(iParam1));
	return 0f;
}

int func_179(int iParam0)
{
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_176(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_180(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_174(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_174(PLAYER::PLAYER_ID());
		}
	}
	if (func_181(8000, 0, 0) > 0)
	{
		if (func_181(8000, 0, 0) < (iParam0 + func_174(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_181(8000, 0, 0) - func_174(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_181(int iParam0, bool bParam1, int iParam2)
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

int func_182()
{
	return 1;
}

int func_183(var uParam0)
{
	if (MISC::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(uParam0, "") || MISC::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)
{
	return func_185(func_186(iParam0));
}

int func_185(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_186(int iParam0)
{
	if (func_187(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_187(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_34();
	}
	return func_189(Global_4456448.f_194990);
}

int func_189(int iParam0)
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

bool func_190(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_191(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_192(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_194(iParam0, func_56(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_193(iParam0, iVar0, iParam2);
}

void func_193(int iParam0, int iParam1, var uParam2)
{
	iVar0 = Global_2585280[iParam0][func_56(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_194(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_56(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_197(iParam0, func_56(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_196(iParam0))
	{
		func_169(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_170(iParam0, iVar0, iParam2, 1);
	}
}

int func_196(int iParam0)
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

int func_197(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_56(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_198(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_199()
{
	if (func_200(20))
	{
		return 1;
	}
	if (func_200(0))
	{
		return 1;
	}
	return 0;
}

bool func_200(int iParam0)
{
	uVar0 = func_197(2480, -1, 0);
	return MISC::IS_BIT_SET(uVar0, iParam0);
}

bool func_201(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413895, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_202()
{
	if (HUD::DOES_BLIP_EXIST(uLocal_222))
	{
		if (func_199() || func_203())
		{
			HUD::SET_BLIP_DISPLAY(uLocal_222, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(uLocal_222, 4);
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_73.f_2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
		{
			uLocal_222 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_73.f_2));
			if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Local_73.f_10))
			{
				HUD::SET_BLIP_SPRITE(uLocal_222, 225);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(uLocal_222, 348);
			}
			HUD::SET_BLIP_COLOUR(uLocal_222, 1);
			HUD::SET_BLIP_FLASH_TIMER(uLocal_222, 7000);
			HUD::SET_BLIP_PRIORITY(uLocal_222, 6);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_222, "DSV_BLIP");
			if (func_199())
			{
				HUD::SET_BLIP_DISPLAY(uLocal_222, 0);
			}
		}
	}
}

var func_203()
{
	return Global_2416079.f_1812;
}

void func_204()
{
	if (Local_73.f_12 == 2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_73.f_2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_73.f_2), 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_220);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_73.f_2), Local_73.f_20, 7f, iLocal_223, 3f);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_73.f_24, 1f, -1, 1048576000, 0, Local_73.f_27);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_220);
			}
		}
	}
}

int func_205()
{
	return Local_73;
}

int func_206(int iParam0)
{
	return Local_122[iParam0];
}

bool func_207(int iParam0)
{
	return !func_208(iParam0);
}

int func_208(int iParam0)
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
			if (Global_262145.f_6660)
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_209(4))
			{
				return 0;
			}
			if (func_210(PLAYER::PLAYER_ID(), 7))
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

int func_209(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_236(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2425662[iVar0].f_208, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_210(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_211()
{
	func_219(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_218())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_217())
	{
		return 1;
	}
	if (func_216(159))
	{
		if (!func_215())
		{
			return 1;
		}
	}
	if (func_216(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_212() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_212()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_212()
{
	switch (func_214())
	{
		case 0:
			return func_213();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_213()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_214()
{
	return Global_30768;
}

bool func_215()
{
	return Global_2450632.f_598;
}

int func_216(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_217()
{
	return Global_2460680;
}

bool func_218()
{
	return Global_2450632.f_593;
}

void func_219(var uParam0)
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
					func_220(iVar0);
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

void func_220(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_236(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_221(uVar4, &bVar5))
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

int func_221(int iParam0, var uParam1)
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

void func_222()
{
	SYSTEM::WAIT(0);
}

void func_223()
{
	if (HUD::DOES_BLIP_EXIST(uLocal_222))
	{
		HUD::REMOVE_BLIP(&uLocal_222);
	}
	func_226();
	if (func_205() == 4 && Local_73.f_10 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_73.f_10, 0);
	}
	MISC::CLEAR_BIT(&(Global_2537071.f_4592), 1);
	func_225(17, 0);
	func_224();
}

void func_224()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_225(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
		{
			MISC::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425662[PLAYER::PLAYER_ID()].f_208, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_208), iParam0);
	}
}

void func_226()
{
	if (Local_73.f_12 == 2)
	{
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_220);
	}
}

void func_227(struct<21> Param0)
{
	func_234(func_235(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(4);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_233(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_73, 49);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_122, 97);
	if (!func_232())
	{
		func_223();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_228();
			Local_73.f_8 = func_5();
		}
		func_225(17, 1);
		Local_122[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
	}
	else
	{
		func_223();
	}
}

void func_228()
{
	func_231();
	Local_73.f_12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Local_73.f_12 == 1 || Local_73.f_12 == 2)
	{
		Local_73.f_15 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		if (Local_73.f_12 == 1)
		{
			func_230(&(Local_73.f_16), &(Local_73.f_19));
		}
		else
		{
			func_230(&(Local_73.f_20), &(Local_73.f_23));
		}
		func_229();
	}
	Local_73.f_14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (Global_262145.f_8107 >= 0 && Global_262145.f_8107 < 5)
	{
		Local_73.f_13 = Global_262145.f_8107;
	}
	else
	{
		Local_73.f_13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	}
}

void func_229()
{
	switch (Local_73.f_15)
	{
		case 0:
			Local_73.f_24 = { -2195.782f, -420.2502f, 12.0819f };
			Local_73.f_27 = 117.3927f;
			Local_73.f_28[0] = { -2189.975f, -422.8502f, 12.0709f };
			Local_73.f_38[0] = 152.6699f;
			Local_73.f_28[1] = { -2184.031f, -400.948f, 12.2027f };
			Local_73.f_38[1] = 337.9892f;
			Local_73.f_28[2] = { -2175.282f, -426.3756f, 12.128f };
			Local_73.f_38[2] = 12.2947f;
			break;
		
		case 1:
			Local_73.f_24 = { -981.5774f, -1487.319f, 4.5867f };
			Local_73.f_27 = 300.0815f;
			Local_73.f_28[0] = { -977.8269f, -1494.568f, 4.5867f };
			Local_73.f_38[0] = 0.731f;
			Local_73.f_28[1] = { -977.7324f, -1491.717f, 4.5867f };
			Local_73.f_38[1] = 173.7717f;
			Local_73.f_28[2] = { -954.6693f, -1486.713f, 4.16f };
			Local_73.f_38[2] = 304.8721f;
			break;
		
		case 2:
			Local_73.f_24 = { 697.3923f, -1375.27f, 25.196f };
			Local_73.f_27 = 111.1953f;
			Local_73.f_28[0] = { 717.8624f, -1360.491f, 25.0461f };
			Local_73.f_38[0] = 55.1674f;
			Local_73.f_28[1] = { 703.9843f, -1361.094f, 24.6728f };
			Local_73.f_38[1] = 306.7133f;
			Local_73.f_28[2] = { 707.1707f, -1388.706f, 25.2759f };
			Local_73.f_38[2] = 204.5666f;
			break;
		
		case 3:
			Local_73.f_24 = { -258.5791f, 302.4799f, 91.0086f };
			Local_73.f_27 = 180.4109f;
			Local_73.f_28[0] = { -244.9193f, 299.3712f, 91.0424f };
			Local_73.f_38[0] = 43.0354f;
			Local_73.f_28[1] = { -248.7361f, 305.6155f, 91.1444f };
			Local_73.f_38[1] = 191.8736f;
			Local_73.f_28[2] = { -232.4524f, 299.4706f, 91.2088f };
			Local_73.f_38[2] = 199.8353f;
			break;
		
		case 4:
			Local_73.f_24 = { 862.7026f, 2875.148f, 56.9868f };
			Local_73.f_27 = 206.7217f;
			Local_73.f_28[0] = { 880.2893f, 2862.074f, 55.6697f };
			Local_73.f_38[0] = 191.0122f;
			Local_73.f_28[1] = { 865.2399f, 2853.536f, 56.2583f };
			Local_73.f_38[1] = 305.8056f;
			Local_73.f_28[2] = { 867.6559f, 2841.155f, 56.944f };
			Local_73.f_38[2] = 235.4465f;
			break;
	}
}

void func_230(var uParam0, var uParam1)
{
	switch (Local_73.f_15)
	{
		case 0:
			*uParam0 = { -2192.39f, -419.3334f, 12.0959f };
			*uParam1 = 71.2404f;
			break;
		
		case 1:
			*uParam0 = { -977.0366f, -1482.866f, 4.0099f };
			*uParam1 = 124.7807f;
			break;
		
		case 2:
			*uParam0 = { 702.5064f, -1370.477f, 25.0573f };
			*uParam1 = 279.9129f;
			break;
		
		case 3:
			*uParam0 = { -253.3582f, 299.4982f, 90.9592f };
			*uParam1 = 184.8169f;
			break;
		
		case 4:
			*uParam0 = { 868.8133f, 2868.439f, 55.9186f };
			*uParam1 = 200.5778f;
			break;
	}
}

void func_231()
{
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (Global_262145.f_8106 >= 0 && Global_262145.f_8106 < 8)
	{
		iVar0 = Global_262145.f_8106;
	}
	switch (iVar0)
	{
		case 0:
			if (func_14())
			{
				Local_73.f_10 = -808831384;
			}
			else
			{
				Local_73.f_10 = -1122289213;
			}
			if (func_14())
			{
				Local_73.f_11 = 588969535;
			}
			else
			{
				Local_73.f_11 = -198252413;
			}
			break;
		
		case 1:
			if (func_14())
			{
				Local_73.f_10 = -685276541;
			}
			else
			{
				Local_73.f_10 = -789894171;
			}
			if (func_14())
			{
				Local_73.f_11 = 832784782;
			}
			else
			{
				Local_73.f_11 = 1520708641;
			}
			break;
		
		case 2:
			if (func_14())
			{
				Local_73.f_10 = 2006142190;
			}
			else
			{
				Local_73.f_10 = -1745203402;
			}
			if (func_14())
			{
				Local_73.f_11 = 1330042375;
			}
			else
			{
				Local_73.f_11 = -44746786;
			}
			break;
		
		case 3:
			if (func_14())
			{
				Local_73.f_10 = -909201658;
			}
			else
			{
				Local_73.f_10 = 850565707;
			}
			if (func_14())
			{
				Local_73.f_11 = -9308122;
			}
			else
			{
				Local_73.f_11 = 2119136831;
			}
			break;
		
		case 4:
			if (func_14())
			{
				Local_73.f_10 = 2136773105;
			}
			else
			{
				Local_73.f_10 = -685276541;
			}
			if (func_14())
			{
				Local_73.f_11 = -39239064;
			}
			else
			{
				Local_73.f_11 = -984709238;
			}
			break;
		
		case 5:
			if (func_14())
			{
				Local_73.f_10 = -120287622;
			}
			else
			{
				Local_73.f_10 = -1189015600;
			}
			if (func_14())
			{
				Local_73.f_11 = 2064532783;
			}
			else
			{
				Local_73.f_11 = 1822107721;
			}
			break;
		
		case 6:
			if (func_14())
			{
				Local_73.f_10 = 884422927;
			}
			else
			{
				Local_73.f_10 = -1453280962;
			}
			if (func_14())
			{
				Local_73.f_11 = 663522487;
			}
			else
			{
				Local_73.f_11 = 846439045;
			}
			break;
		
		case 7:
			if (func_14())
			{
				Local_73.f_10 = 736902334;
			}
			else
			{
				Local_73.f_10 = 1177543287;
			}
			if (func_14())
			{
				Local_73.f_11 = -48477765;
			}
			else
			{
				Local_73.f_11 = 228715206;
			}
			break;
	}
}

int func_232()
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
		if (func_218())
		{
			return 0;
		}
		if (func_216(157))
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

int func_233(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_224();
			}
			else
			{
				return 0;
			}
		}
		if (!func_50())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_224();
					}
					else
					{
						return 0;
					}
				}
				if (func_218())
				{
					if (!bParam2)
					{
						func_224();
					}
					else
					{
						return 0;
					}
				}
				if (func_216(157))
				{
					if (!bParam2)
					{
						func_224();
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
					func_224();
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
				func_224();
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
			func_224();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_234(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_224();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_235(int iParam0)
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

int func_236(int iParam0, bool bParam1, bool bParam2)
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

