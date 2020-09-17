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
	Local_61 = { 0f, 0f, 0f };
	Local_64 = { 0f, 0f, 0f };
	iLocal_67 = -1;
	iLocal_70 = 318;
	iLocal_71 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_56();
	}
	SYSTEM::WAIT(0);
	func_37();
	func_33();
	func_29();
	while (iLocal_71 && func_20(3, 0))
	{
		if (func_16())
		{
			func_56();
		}
		SYSTEM::WAIT(0);
		switch (iLocal_69)
		{
			case 0:
				if (func_11())
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
					iLocal_69 = 1;
				}
				break;
			
			case 1:
				if (func_2())
				{
					iLocal_69 = 2;
				}
				break;
			
			case 2:
				func_1();
				break;
		}
	}
	func_56();
}

void func_1()
{
	iLocal_71 = 0;
}

int func_2()
{
	if (func_5(&uLocal_241, 0f))
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_77[iVar0], 0))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_77[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f);
				fVar3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f);
				VEHICLE::START_VEHICLE_HORN(iLocal_77[iVar0], SYSTEM::ROUND((fVar2 * 1000f)), 0, 0);
				func_3(&uLocal_241, fVar3);
			}
		}
	}
	if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_237, 1) > 100f)
	{
		return 1;
	}
	return 0;
}

void func_3(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_4(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) + fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_4(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

int func_5(var uParam0, float fParam1)
{
	if (func_9(uParam0))
	{
		if (func_6(uParam0) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_6(var uParam0)
{
	if (func_9(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (uParam0->f_1 - func_4(GAMEPLAY::IS_BIT_SET(*uParam0, 4)));
		}
	}
	return uParam0->f_1;
}

bool func_7(var uParam0)
{
	return func_8(uParam0);
}

bool func_8(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_9(var uParam0)
{
	return func_10(uParam0);
}

bool func_10(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_11()
{
	if (func_5(&uLocal_241, 0f))
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 12);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_77[iVar0], 0))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_77[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				fVar2 = (GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1f) * 2f);
				fVar3 = (GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f) * 2f);
				VEHICLE::START_VEHICLE_HORN(iLocal_77[iVar0], SYSTEM::ROUND((fVar2 * 1000f)), 0, 0);
				func_3(&uLocal_241, fVar3);
			}
		}
	}
	if (!func_15())
	{
		func_13();
		func_12(&uLocal_241, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 2.25f));
		return 1;
	}
	if (!func_9(&uLocal_241))
	{
		func_12(&uLocal_241, (GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(1.75f, 2.25f) * 2f));
	}
	return 0;
}

void func_12(var uParam0, float fParam1)
{
	if (!func_9(uParam0))
	{
		func_3(uParam0, fParam1);
	}
}

void func_13()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_77[iVar0], 0))
		{
			uVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_77[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar1))
			{
				func_14(uVar1, iLocal_77[iVar0], 10f, 786603);
				PED::SET_PED_KEEP_TASK(uVar1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_153[iVar0], 0))
		{
			uVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_153[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar2))
			{
				func_14(uVar2, iLocal_153[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar2, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], 0))
		{
			uVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_181[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar3))
			{
				func_14(uVar3, iLocal_181[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar3, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_209[iVar0], 0))
		{
			uVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_209[iVar0], -1, 0);
			if (!PED::IS_PED_INJURED(uVar4))
			{
				func_14(uVar4, iLocal_209[iVar0], 5f, 786603);
				PED::SET_PED_KEEP_TASK(uVar4, 1);
			}
		}
		iVar0++;
	}
}

void func_14(var uParam0, var uParam1, float fParam2, int iParam3)
{
	Var0 = { 0f, fParam2, 0f };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, Var0) };
	AI::OPEN_SEQUENCE_TASK(&uVar6);
	AI::TASK_VEHICLE_DRIVE_TO_COORD(0, uParam1, Var3, fParam2, 0, ENTITY::GET_ENTITY_MODEL(uParam1), iParam3, 2f, 5f);
	AI::TASK_VEHICLE_DRIVE_WANDER(0, uParam1, fParam2, iParam3);
	AI::CLOSE_SEQUENCE_TASK(uVar6);
	AI::TASK_PERFORM_SEQUENCE(uParam0, uVar6);
	AI::CLEAR_SEQUENCE_TASK(&uVar6);
}

int func_15()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return 0;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::SET_PLAYER_INVERTED_UP() > 0)
			{
				if (STREAMING::_0x5B48A06DD0E792A5() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_16()
{
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uVar0))
					{
						return 0;
					}
				}
			}
		}
	}
	if ((func_19(0) || func_19(3)) || func_19(2))
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_18())
		{
			return 1;
		}
	}
	if (func_17(8, -1))
	{
		return 1;
	}
	if (Global_2439138.f_74)
	{
		return 1;
	}
	if (Global_96222.f_44 == 1)
	{
		if (Global_96222.f_46 == 0)
		{
			return 1;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_17(int iParam0, int iParam1)
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

int func_18()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_19(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_20(int iParam0, int iParam1)
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() <= 2 && STREAMING::GET_PLAYER_SWITCH_STATE() != 1)
			{
				return 1;
			}
		}
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_19(14))
		{
			return 0;
		}
		if (GAMEPLAY::_0x9689123E3F213AA5())
		{
			return 0;
		}
		if (!func_22(iParam0, func_23()))
		{
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
			fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0);
			if (fVar3 > 250f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam1))
					{
						return 0;
					}
				}
				else if (!CAM::IS_SPHERE_VISIBLE(Var0, 1.5f))
				{
					return 0;
				}
			}
		}
		else if (iParam1 == func_21(Global_98465) && iParam1 != 0)
		{
			Global_98465 = 0;
		}
	}
	return 1;
}

int func_21(var uParam0)
{
	return uParam0;
}

bool func_22(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

int func_23()
{
	func_24();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_24()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_26(PLAYER::PLAYER_PED_ID());
			if (func_25(iVar0) && (!func_19(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_25(Global_111638.f_2358.f_539.f_4321))
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

bool func_25(int iParam0)
{
	return iParam0 < 3;
}

int func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_27(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_27(int iParam0)
{
	if (func_25(iParam0))
	{
		return func_28(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_28(int iParam0)
{
	return Global_1798[iParam0];
}

void func_29()
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_32();
		}
		return;
	}
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		func_32();
		return;
	}
	func_30();
	if (Global_98467 > 0)
	{
		return;
	}
	STREAMING::_0x74DE2E8739086740();
}

void func_30()
{
	func_31((Global_98467 - 1));
}

void func_31(int iParam0)
{
	Global_98467 = iParam0;
}

void func_32()
{
	func_31(0);
}

void func_33()
{
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_90)
	{
		STREAMING::REQUEST_MODEL(iLocal_90[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_158)
	{
		STREAMING::REQUEST_MODEL(iLocal_158[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_186)
	{
		STREAMING::REQUEST_MODEL(iLocal_186[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_214)
	{
		STREAMING::REQUEST_MODEL(iLocal_214[iVar0]);
		iVar0++;
	}
	iVar1 = 0;
	bVar2 = false;
	while (!bVar2 && iVar1 < 400)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 < iLocal_72)
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_72[iVar0]))
			{
				STREAMING::REQUEST_MODEL(iLocal_72[iVar0]);
				bVar2 = false;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_77[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_90[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_90[iVar0]);
					bVar2 = false;
				}
				else
				{
					GAMEPLAY::CLEAR_AREA(Local_237 + Local_103[iVar0], 10f, 1, 0, 0, 0);
					iLocal_77[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_90[iVar0], Local_237 + Local_103[iVar0], (fLocal_240 + uLocal_140[iVar0]), 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_77[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_77[iVar0], 2f);
					ENTITY::_SET_ENTITY_REGISTER(iLocal_77[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_153[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_158[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_158[iVar0]);
					bVar2 = false;
				}
				else
				{
					GAMEPLAY::CLEAR_AREA(Local_237 + Local_163[iVar0], 10f, 1, 0, 0, 0);
					iLocal_153[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_158[iVar0], Local_237 + Local_163[iVar0], (fLocal_240 + uLocal_176[iVar0]), 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_153[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_153[iVar0], 2f);
					ENTITY::_SET_ENTITY_REGISTER(iLocal_153[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_186[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_186[iVar0]);
					bVar2 = false;
				}
				else
				{
					GAMEPLAY::CLEAR_AREA(Local_237 + Local_191[iVar0], 10f, 1, 0, 0, 0);
					iLocal_181[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_186[iVar0], Local_237 + Local_191[iVar0], (fLocal_240 + uLocal_204[iVar0]), 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_181[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_181[iVar0], 2f);
					ENTITY::_SET_ENTITY_REGISTER(iLocal_181[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(iLocal_214[iVar0]))
				{
					STREAMING::REQUEST_MODEL(iLocal_214[iVar0]);
					bVar2 = false;
				}
				else
				{
					GAMEPLAY::CLEAR_AREA(Local_237 + Local_219[iVar0], 10f, 1, 0, 0, 0);
					iLocal_209[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_214[iVar0], Local_237 + Local_219[iVar0], (fLocal_240 + uLocal_232[iVar0]), 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_209[iVar0], 250);
					VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_209[iVar0], 2f);
					ENTITY::_SET_ENTITY_REGISTER(iLocal_209[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iVar1++;
		}
		SYSTEM::WAIT(0);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_77[iVar0], 0))
		{
			uVar3 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_77[iVar0], 4, iLocal_72[func_36()], -1, 1, 1);
			func_34(uVar3);
			ENTITY::_SET_ENTITY_REGISTER(iLocal_77[iVar0], 1);
			ENTITY::_SET_ENTITY_REGISTER(uVar3, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_90[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_153[iVar0], 0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_153[iVar0]) > 0)
			{
				uVar4 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_153[iVar0], 4, iLocal_72[func_36()], -1, 1, 1);
				func_34(uVar4);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_77[iVar0], 1);
				ENTITY::_SET_ENTITY_REGISTER(uVar4, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_158[iVar0]);
			}
		}
		iVar0++;
	}
	if (!VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_153[2]) > 0)
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_153[0], iLocal_153[2], 1065353216);
	}
	if (!VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_153[3]) > 0)
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_153[1], iLocal_153[3], 1065353216);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_181[iVar0], 0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_181[iVar0]) > 0)
			{
				uVar5 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_181[iVar0], 4, iLocal_72[func_36()], -1, 1, 1);
				func_34(uVar5);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_77[iVar0], 1);
				ENTITY::_SET_ENTITY_REGISTER(uVar5, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_209[iVar0], 0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iLocal_209[iVar0]) > 0)
			{
				uVar6 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_209[iVar0], 4, iLocal_72[func_36()], -1, 1, 1);
				func_34(uVar6);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_77[iVar0], 1);
				ENTITY::_SET_ENTITY_REGISTER(uVar6, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72[iVar0]);
		iVar0++;
	}
}

void func_34(int iParam0)
{
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(uParam0, 0);
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == 1328415626)
	{
		if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3) == 1)
		{
			if (func_35())
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 3), 0);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 3), 0);
			}
		}
	}
}

int func_35()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iLocal_72);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_72[iVar0]))
	{
		return iVar0;
	}
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < iLocal_72)
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_72[iVar6]))
		{
			uVar1[iVar7] = iLocal_72[iVar6];
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 <= 0)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar7);
	iVar6 = 0;
	while (iVar6 < iLocal_72)
	{
		if (uVar1[iVar0] == iLocal_72[iVar6])
		{
			return iVar6;
		}
		iVar6++;
	}
	return iVar0;
}

void func_37()
{
	iLocal_70 = Global_98147;
	func_49(iLocal_70, &Local_237, &fLocal_240, &cVar0);
	func_38(iLocal_70, &iLocal_72, &iLocal_90, &Local_103, &uLocal_140, &iLocal_158, &Local_163, &uLocal_176, &iLocal_186, &Local_191, &uLocal_204, &iLocal_214, &Local_219, &uLocal_232);
}

void func_38(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, int iParam8, var uParam9, var uParam10, int iParam11, var uParam12, var uParam13)
{
	switch (iParam0)
	{
		case 105:
			func_48(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_47(iParam1, iParam2, iParam5, iParam8, iParam11);
			func_49(iParam0, &Var0, &fVar3, &cVar4);
			*uParam12[0] = { Vector(38.0807f, -1565.916f, -453.6f) - Var0 };
			(*uParam13)[0] = (171.8581f - fVar3);
			*uParam12[1] = { Vector(38.094f, -1599.477f, -467.9528f) - Var0 };
			(*uParam13)[1] = (151.2346f - fVar3);
			*uParam12[2] = { Vector(38.1786f, -1566.734f, -442.0422f) - Var0 };
			(*uParam13)[2] = (170.751f - fVar3);
			*uParam12[3] = { Vector(32.4872f, -1614.501f, -486.7076f) - Var0 };
			(*uParam13)[3] = (146.9473f - fVar3);
			break;
		
		case 106:
			func_46(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_47(iParam1, iParam2, iParam5, iParam8, iParam11);
			*uParam12[0] = { Vector(0f, 0f, -7.5f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[0] = (0f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[1] = { Vector(12f, -21.6f, 0f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[1] = (-8.1f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[2] = { Vector(0f, -6.3f, 2.4f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[2] = (0f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[3] = { Vector(0f, -5.4f, 9.3f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[3] = (0f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 107:
			func_44(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_43(iParam1, iParam2, iParam5, iParam8, iParam11);
			*uParam12[0] = { Vector(0f, -18.7658f, 17.4294f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[0] = (-82.86f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[1] = { Vector(0f, -0.2185f, -8.4f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[1] = (326.88f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[2] = { Vector(0f, 11.1031f, -1.0773f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[2] = (-16.56f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[3] = { Vector(0f, 6.6924f, 3.6826f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[3] = (-21.4898f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 208:
		case 23:
			func_48(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_47(iParam1, iParam2, iParam5, iParam8, iParam11);
			func_49(iParam0, &Var12, &fVar15, &cVar16);
			*uParam12[0] = { Vector(38.0807f, -1565.916f, -453.6f) - Var12 };
			(*uParam13)[0] = (171.8581f - fVar15);
			*uParam12[1] = { Vector(38.094f, -1599.477f, -467.9528f) - Var12 };
			(*uParam13)[1] = (151.2346f - fVar15);
			*uParam12[2] = { Vector(38.1786f, -1566.734f, -442.0422f) - Var12 };
			(*uParam13)[2] = (170.751f - fVar15);
			*uParam12[3] = { Vector(32.4872f, -1614.501f, -486.7076f) - Var12 };
			(*uParam13)[3] = (146.9473f - fVar15);
			break;
		
		case 209:
			func_42(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_41(iParam1, iParam2, iParam5, iParam8, iParam11);
			*uParam12[0] = { Vector(0f, -18.4198f, 12.4248f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[0] = (-42.9526f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[1] = { Vector(0f, 6.1436f, -6.4904f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[1] = (0f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[2] = { Vector(0f, -46.6f, 15.2f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[2] = (74.0878f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[3] = { Vector(0f, -43.7f, 9f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[3] = (-102.24f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		case 210:
			func_40(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_39(iParam1, iParam2, iParam5, iParam8, iParam11);
			*uParam12[0] = { Vector(0f, -8.466f, -3.4877f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[0] = (-10.26f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[1] = { Vector(0f, 5.6192f, -2.7229f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[1] = (2.3194f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[2] = { Vector(0f, 5.1081f, 6.8717f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[2] = (350.1767f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			*uParam12[3] = { Vector(0f, -9.6576f, 0.997f) + func_45(-1090519040, 1056964608) };
			(*uParam13)[3] = (349.0776f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f));
			break;
		
		default:
			func_48(uParam3, uParam4, uParam6, uParam7, uParam9, uParam10);
			func_47(iParam1, iParam2, iParam5, iParam8, iParam11);
			iVar24 = 0;
			while (iVar24 < *uParam12)
			{
				(*iParam11)[iVar24] = 0;
				*uParam12[iVar24] = { 0f, 0f, 0f };
				(*uParam13)[iVar24] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				iVar24++;
			}
			break;
	}
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	(*uParam0)[0] = 1328415626;
	(*uParam0)[1] = -1760377969;
	(*uParam0)[2] = (*uParam0)[1];
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = -956048545;
	(*uParam1)[2] = -1177863319;
	(*uParam1)[3] = 1777363799;
	(*uParam1)[7] = 1830407356;
	(*uParam1)[8] = -1894894188;
	(*uParam1)[11] = -1216765807;
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar0 = 2072687711;
			break;
		
		case 1:
			iVar0 = 2136773105;
			break;
		
		case 2:
			iVar0 = -1903012613;
			break;
	}
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar1 = -1137532101;
			break;
		
		case 1:
			iVar1 = 1269098716;
			break;
		
		case 2:
			iVar1 = -685276541;
			break;
	}
	(*uParam1)[10] = iVar0;
	(*uParam1)[9] = iVar0;
	(*uParam1)[1] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[4] = iVar1;
	(*uParam1)[5] = iVar1;
	(*uParam2)[0] = -1961627517;
	(*uParam2)[1] = -233098306;
	(*uParam2)[2] = -713569950;
	(*uParam2)[3] = 1917016601;
	(*uParam3)[0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4)
	{
		(*uParam4)[iVar2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar2++;
	}
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam0[0] = { 16.332f, -30.08f, 0f };
	(*uParam1)[0] = -90.4349f;
	*uParam0[1] = { 22.782f, -37.68f, 0f };
	(*uParam1)[1] = -90.4349f;
	*uParam0[2] = { 28.272f, -29.22f, 0f };
	(*uParam1)[2] = -90.7451f;
	*uParam0[3] = { 22.282f, -32.05f, 0f };
	(*uParam1)[3] = -97.2851f;
	*uParam0[4] = { 15.012f, -34.53f, 0f };
	(*uParam1)[4] = -94.9851f;
	*uParam0[5] = { -14.088f, -53.31f, 0f };
	(*uParam1)[5] = 174.4849f;
	*uParam0[6] = { -8.618f, -54.68f, 0f };
	(*uParam1)[6] = 176.0549f;
	*uParam0[7] = { 4.432f, -2.42f, 0f };
	(*uParam1)[7] = -4.3151f;
	*uParam0[8] = { 1.422f, 5.53f, 0f };
	(*uParam1)[8] = -4.3151f;
	*uParam0[9] = { 28.922f, -34.42f, 0f };
	(*uParam1)[9] = -96.0151f;
	*uParam0[10] = { 34.012f, -36.51f, 0f };
	(*uParam1)[10] = -99.9451f;
	*uParam0[11] = { -4.888f, -0.68f, 0f };
	(*uParam1)[11] = -5.7f;
	*uParam2[0] = { -0.818f, -16.7f, 0f };
	(*uParam3)[0] = 7.2f;
	*uParam2[1] = { 21.212f, -26.79f, 0f };
	(*uParam3)[1] = -97.2851f;
	*uParam2[2] = { -31.208f, -27.73f, 0f };
	(*uParam3)[2] = 83.7149f;
	*uParam2[3] = { 36.182f, -32.35f, 0f };
	(*uParam3)[3] = -99.9451f;
	*uParam4[0] = { -8.798f, -15.99f, 0f };
	(*uParam5)[0] = -54.0451f;
	*uParam4[1] = { -16.408f, -17.59f, 0f };
	(*uParam5)[1] = -96.0451f;
	*uParam4[2] = { -18.108f, -12.54f, 0f };
	(*uParam5)[2] = -88.5451f;
	*uParam4[3] = { 52.11f, -3.18f, 0f };
	(*uParam5)[3] = -86.76f;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	(*uParam0)[0] = 1328415626;
	(*uParam0)[1] = -1760377969;
	(*uParam0)[2] = -781039234;
	(*uParam0)[3] = (*uParam0)[2];
	(*uParam1)[0] = 1876516712;
	(*uParam1)[2] = 2016857647;
	(*uParam1)[3] = -344943009;
	(*uParam1)[4] = -14495224;
	(*uParam1)[7] = -599568815;
	(*uParam1)[9] = -2124201592;
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar0 = -1130810103;
			break;
		
		case 1:
			iVar0 = 699456151;
			break;
		
		case 2:
			iVar0 = 970598228;
			break;
	}
	switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			iVar1 = -1903012613;
			break;
		
		case 1:
			iVar1 = -2095439403;
			break;
		
		case 2:
			iVar1 = 1507916787;
			break;
	}
	(*uParam1)[1] = iVar0;
	(*uParam1)[8] = iVar0;
	(*uParam1)[5] = iVar0;
	(*uParam1)[6] = iVar1;
	(*uParam1)[11] = iVar1;
	(*uParam1)[10] = iVar1;
	(*uParam2)[0] = 2053223216;
	(*uParam2)[1] = -713569950;
	(*uParam2)[2] = -2072933068;
	(*uParam2)[3] = 904750859;
	(*uParam3)[0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar2 = 0;
	while (iVar2 < *uParam4)
	{
		(*uParam4)[iVar2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar2++;
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam0[0] = { 1.34f, -37.14f, 0f };
	(*uParam1)[0] = -91.57f;
	*uParam0[1] = { 7.99f, -38.55f, 0f };
	(*uParam1)[1] = -91.57f;
	*uParam0[2] = { 11.35f, -25.5f, 0f };
	(*uParam1)[2] = -87.74f;
	*uParam0[3] = { 19.16f, -25.28f, 0f };
	(*uParam1)[3] = -94.86f;
	*uParam0[4] = { 40.1f, -8.519f, 0f };
	(*uParam1)[4] = -108.59f;
	*uParam0[5] = { 35.52f, -12.35f, 0f };
	(*uParam1)[5] = -108.59f;
	*uParam0[6] = { 23.22f, -21.68f, 0f };
	(*uParam1)[6] = -105.31f;
	*uParam0[7] = { 21.56f, -38.68f, 0f };
	(*uParam1)[7] = 90.43f;
	*uParam0[8] = { 12.05f, -10.24f, 0f };
	(*uParam1)[8] = -4.32f;
	*uParam0[9] = { 6.32f, -5.309f, 0f };
	(*uParam1)[9] = -4.32f;
	*uParam0[10] = { 51.94f, -36.66f, 0f };
	(*uParam1)[10] = -177.9f;
	*uParam0[11] = { 57.47f, -41.3f, 0f };
	(*uParam1)[11] = -177.9f;
	*uParam2[0] = { 29.53f, -17.97f, 0f };
	(*uParam3)[0] = -103.07f;
	*uParam2[1] = { 35.68f, 0.27f, 0f };
	(*uParam3)[1] = -66.81f;
	*uParam2[2] = { 11.74f, -31.94f, 0f };
	(*uParam3)[2] = -126.95f;
	*uParam2[3] = { 45.13f, -2.58f, 0f };
	(*uParam3)[3] = -89.89f;
	*uParam4[0] = { 26.69f, -41.23f, 0f };
	(*uParam5)[0] = 87.02f;
	*uParam4[1] = { 22.21f, -46.2f, 0f };
	(*uParam5)[1] = 90.07f;
	*uParam4[2] = { 45.62f, -10.14f, 0f };
	(*uParam5)[2] = -86.76f;
	*uParam4[3] = { 52.11f, -3.18f, 0f };
	(*uParam5)[3] = -86.76f;
}

void func_43(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	(*uParam0)[0] = 1626646295;
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = -1760377969;
	(*uParam0)[3] = -781039234;
	(*uParam1)[0] = 1876516712;
	(*uParam1)[1] = -1130810103;
	(*uParam1)[2] = 2016857647;
	(*uParam1)[3] = -344943009;
	(*uParam1)[4] = -14495224;
	(*uParam1)[5] = 970598228;
	(*uParam1)[6] = -1903012613;
	(*uParam1)[7] = -599568815;
	(*uParam1)[8] = 699456151;
	(*uParam1)[9] = 1177543287;
	(*uParam1)[10] = 1507916787;
	(*uParam1)[11] = -2095439403;
	(*uParam2)[0] = -713569950;
	(*uParam2)[1] = -1987130134;
	(*uParam2)[2] = -713569950;
	(*uParam2)[3] = -233098306;
	(*uParam3)[0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		(*uParam4)[iVar0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar0++;
	}
}

void func_44(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam0[0] = { -29.899f, -48.6f, 0f };
	(*uParam1)[0] = 296f;
	*uParam0[1] = { -17.809f, -40.73f, 0f };
	(*uParam1)[1] = 274.46f;
	*uParam0[2] = { -18.339f, -26.16f, 0f };
	(*uParam1)[2] = 309.22f;
	*uParam0[3] = { -12.76f, -37.72f, 0f };
	(*uParam1)[3] = 273f;
	*uParam0[4] = { -7.669f, -34.99f, 0f };
	(*uParam1)[4] = 270f;
	*uParam0[5] = { 4.461f, -23.85f, 0f };
	(*uParam1)[5] = 270f;
	*uParam0[6] = { -2.609f, -32.32f, 0f };
	(*uParam1)[6] = 270f;
	*uParam0[7] = { 3.591f, -30.44f, 0f };
	(*uParam1)[7] = 266f;
	*uParam0[8] = { 9.701f, -22.01f, 0f };
	(*uParam1)[8] = 259f;
	*uParam0[9] = { 34.851f, -18.68f, 0f };
	(*uParam1)[9] = 259f;
	*uParam0[10] = { 2.311f, -7.35f, 0f };
	(*uParam1)[10] = 353.49f;
	*uParam0[11] = { 7.721f, -5.22f, 0f };
	(*uParam1)[11] = 353.49f;
	*uParam2[0] = { -21.429f, -36.16f, 0f };
	(*uParam3)[0] = -40.2806f;
	*uParam2[1] = { -32.949f, -44.24f, 0f };
	(*uParam3)[1] = 296f;
	*uParam2[2] = { -5.419f, -28.52f, 0f };
	(*uParam3)[2] = 268.79f;
	*uParam2[3] = { -16.149f, -34.45f, 0f };
	(*uParam3)[3] = 269.44f;
	*uParam4[0] = { 9.911f, -27.02f, 0f };
	(*uParam5)[0] = 265f;
	*uParam4[1] = { 15.671f, -24.5f, 0f };
	(*uParam5)[1] = 262f;
	*uParam4[2] = { 20.341f, -22.64f, 0f };
	(*uParam5)[2] = 260f;
	*uParam4[3] = { 28.061f, -20.67f, 0f };
	(*uParam5)[3] = 269f;
}

Vector3 func_45(float fParam0, float fParam1)
{
	return GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1), 0f;
}

void func_46(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam0[0] = { -38.3005f, 8.5562f, 0f };
	(*uParam1)[0] = -16.0462f;
	*uParam0[1] = { -29.9505f, 8.6162f, 0f };
	(*uParam1)[1] = -18.0565f;
	*uParam0[2] = { -23.7805f, 13.1962f, 0f };
	(*uParam1)[2] = -18.3452f;
	*uParam0[3] = { -29.6605f, 16.1762f, 0f };
	(*uParam1)[3] = -21.835f;
	*uParam0[4] = { -14.3505f, 6.5462f, 0f };
	(*uParam1)[4] = -20.3657f;
	*uParam0[5] = { -18.3605f, 0.5062f, 0f };
	(*uParam1)[5] = -18.8008f;
	*uParam0[6] = { -29.4805f, 2.2262f, 0f };
	(*uParam1)[6] = -20.524f;
	*uParam0[7] = { -24.1905f, 4.6262f, 0f };
	(*uParam1)[7] = -21.9109f;
	*uParam0[8] = { -24.3405f, -2.2238f, 0f };
	(*uParam1)[8] = -17.9999f;
	*uParam0[9] = { -13.5805f, -4.2538f, 0f };
	(*uParam1)[9] = -17.9017f;
	*uParam0[10] = { -19.6705f, -6.3938f, 0f };
	(*uParam1)[10] = -15.6317f;
	*uParam0[11] = { -15.2805f, -10.5438f, 0f };
	(*uParam1)[11] = -21.7654f;
	*uParam2[0] = { -47.51f, 23.097f, 0f };
	(*uParam3)[0] = -50.2806f;
	*uParam2[1] = { -44.64f, 28.267f, 0f };
	(*uParam3)[1] = -8.5494f;
	*uParam2[2] = { -43.8405f, 19.3262f, 0f };
	(*uParam3)[2] = -15.1402f;
	*uParam2[3] = { -8.2179f, -30.6764f, 0f };
	(*uParam3)[3] = -21.3636f;
	*uParam4[0] = { -7.25f, -9.213f, 0f };
	(*uParam5)[0] = 2.174f;
	*uParam4[1] = { -9.14f, -15.643f, 0f };
	(*uParam5)[1] = -8.9755f;
	*uParam4[2] = { 1.83f, -16.063f, 0f };
	(*uParam5)[2] = -29.2004f;
	*uParam4[3] = { -3.76f, -20.593f, 0f };
	(*uParam5)[3] = -27.8686f;
}

void func_47(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	(*uParam0)[0] = 1626646295;
	(*uParam0)[1] = (*uParam0)[0];
	(*uParam0)[2] = -1760377969;
	(*uParam0)[3] = -781039234;
	(*uParam1)[0] = 1876516712;
	(*uParam1)[1] = -1130810103;
	(*uParam1)[2] = 2016857647;
	(*uParam1)[3] = -344943009;
	(*uParam1)[4] = -14495224;
	(*uParam1)[5] = 970598228;
	(*uParam1)[6] = -1903012613;
	(*uParam1)[7] = -599568815;
	(*uParam1)[8] = 699456151;
	(*uParam1)[9] = 1177543287;
	(*uParam1)[10] = 1507916787;
	(*uParam1)[11] = -2095439403;
	(*uParam2)[0] = 569305213;
	(*uParam2)[1] = 1518533038;
	(*uParam2)[2] = -730904777;
	(*uParam2)[3] = 2016027501;
	(*uParam3)[0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[1] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[2] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	(*uParam3)[3] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		(*uParam4)[iVar0] = (*uParam1)[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, *uParam1)];
		iVar0++;
	}
}

void func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	Var0 = { Vector(0f, 7f, 5f) * Vector(0.7f, 0.7f, 0.7f) };
	*uParam0[0] = { Vector(0f, -22.7769f, -9.2247f) + func_45(-1090519040, 1056964608) };
	*uParam0[1] = { Vector(0f, -21.4697f, -0.889f) + func_45(-1090519040, 1056964608) };
	iVar3 = 2;
	while (iVar3 <= (*uParam0 - 1))
	{
		*uParam0[iVar3] = { *(uParam0[(iVar3 - 2)]) };
		*uParam0[iVar3] = { *uParam0[iVar3] + Var0 * FtoV((1f + (SYSTEM::TO_FLOAT(iVar3) / SYSTEM::TO_FLOAT((*uParam0 + 1 - 2))))) };
		*uParam0[iVar3] = { *uParam0[iVar3] + func_45(-1090519040, 1056964608) };
		(*uParam1)[iVar3] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
		iVar3++;
	}
	*uParam2[0] = { -19.4623f, -36.7339f, 0f };
	*uParam2[1] = { -11.7179f, -35.5764f, 0f };
	*uParam2[2] = { *uParam2[0] + Var0 };
	*uParam2[3] = { *uParam2[1] + Var0 };
	*uParam4[0] = { Vector(0f, 8.1f, 2.1f) + func_45(-1090519040, 1056964608) };
	*uParam4[1] = { Vector(0f, 15.3f, 4.4f) + func_45(-1090519040, 1056964608) };
	*uParam4[2] = { Vector(-11.4f, -15.3f, -23.7f) + func_45(-1090519040, 1056964608) };
	*uParam4[3] = { Vector(-12.7f, -10.9f, -13.4f) + func_45(-1090519040, 1056964608) };
	(*uParam1)[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[1] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[2] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[3] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[4] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[5] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam1)[6] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[1] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[2] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam3)[3] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-22f, -15f);
	(*uParam5)[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-6f, 4f);
	(*uParam5)[1] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-16f, -6f);
	(*uParam5)[2] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-38f, -28f);
	(*uParam5)[3] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-28f, -18f);
}

int func_49(int iParam0, var uParam1, var uParam2, char* sParam3)
{
	if (func_52(iParam0, uParam2, sParam3))
	{
		switch (iParam0)
		{
			case 0:
				return 0;
				break;
			
			case 1:
				func_50(&iVar0);
				if (iVar0 < 5)
				{
					*uParam1 = { Global_93947[iVar0].f_3 };
					*uParam2 = Global_93947[iVar0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				else
				{
					*uParam1 = { Global_93947[0].f_3 };
					*uParam2 = Global_93947[0].f_6;
					StringCopy(sParam3, "", 32);
					return 1;
				}
				break;
			
			case 2:
				*uParam1 = { Global_96855[0].f_4 };
				*uParam2 = Global_96855[0].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 3:
				*uParam1 = { Global_96855[1].f_4 };
				*uParam2 = Global_96855[1].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 4:
				*uParam1 = { Global_96855[2].f_4 };
				*uParam2 = Global_96855[2].f_7;
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 5:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[0] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[0];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 6:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[1] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[1];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
			
			case 7:
				*uParam1 = { Global_111638.f_2358.f_539.f_2300[2] + Vector(-1f, 0f, 0f) };
				*uParam2 = Global_111638.f_2358.f_539.f_2310[2];
				StringCopy(sParam3, "", 32);
				return 1;
				break;
		}
		*uParam1 = { Global_97183[iParam0] };
		return 1;
	}
	return 0;
}

bool func_50(var uParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_4323;
	Var1 = { Global_111638.f_2358.f_539.f_2300[iVar0] };
	if (func_51(Var1, 0f, 0f, 0f, 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	}
	*uParam0 = 5;
	fVar4 = 9999999f;
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7224.f_11[iVar5], 0))
		{
			Var6 = { Global_93947[iVar5].f_3 };
			fVar9 = SYSTEM::VDIST(Var1, Var6);
			if (fVar9 > 150f)
			{
				if (fVar9 < fVar4)
				{
					*uParam0 = iVar5;
					fVar4 = fVar9;
				}
			}
		}
		iVar5++;
	}
	return *uParam0 != 5;
}

bool func_51(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_52(int iParam0, var uParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			func_50(&iVar3);
			if (iVar3 < 5)
			{
				*uParam1 = Global_93947[iVar3].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			else
			{
				*uParam1 = Global_93947[0].f_6;
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 2:
			*uParam1 = Global_96855[0].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 3:
			*uParam1 = Global_96855[1].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 4:
			*uParam1 = Global_96855[2].f_7;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 5:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[0];
			StringCopy(sParam2, func_55(Global_111638.f_2358.f_539.f_2314[0]), 32);
			return 1;
			break;
		
		case 6:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[1];
			StringCopy(sParam2, func_55(Global_111638.f_2358.f_539.f_2314[1]), 32);
			return 1;
			break;
		
		case 7:
			*uParam1 = Global_111638.f_2358.f_539.f_2310[2];
			StringCopy(sParam2, func_55(Global_111638.f_2358.f_539.f_2314[2]), 32);
			return 1;
			break;
		
		case 11:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_strip3", 32);
				return 1;
			}
			break;
		
		case 8:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 9:
			return func_52(8, uParam1, sParam2);
			break;
		
		case 10:
			return func_52(8, uParam1, sParam2);
			break;
		
		case 13:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 14:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 15:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 12:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 16:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 17:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 18:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 19:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 20:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 21:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 22:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 74:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 23:
			return func_52(208, uParam1, sParam2);
			break;
		
		case 24:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 67:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 25:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 26:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 27:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 28:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 29:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 30:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 31:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 32:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 33:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 34:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 35:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 36:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 37:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 58:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 59:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 60:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 38:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 39:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 40:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "v_trailer", 32);
				return 1;
			}
			break;
		
		case 41:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 42:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 43:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 44:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 45:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 46:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 47:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 49:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 48:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 124:
			Var0 = { -803.734f, 168.148f, 76.3542f };
			*uParam1 = 105f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 50:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 51:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 52:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 66:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 53:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 54:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 55:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 56:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 57:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 61:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 62:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 63:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 68:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 69:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 64:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 65:
			if (func_54(iParam0, &Var0, uParam1))
			{
				StringCopy(sParam2, "", 32);
				return 1;
			}
			break;
		
		case 70:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 71:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 72:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 73:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 0;
			break;
		
		case 234:
			*uParam1 = 122.69f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 316:
			*uParam1 = -60.31f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 315:
			*uParam1 = (41.654f - 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 75:
			*uParam1 = -172.697f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 76:
			*uParam1 = (181.8927f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 77:
			*uParam1 = -158f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 78:
			*uParam1 = -152f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 79:
			*uParam1 = 20.353f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 80:
			*uParam1 = (-48.53f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 81:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 82:
			*uParam1 = -113.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 83:
			*uParam1 = -173.748f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 84:
			*uParam1 = 32.7938f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 85:
			*uParam1 = -56f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 86:
			*uParam1 = 13f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 87:
			*uParam1 = 166.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 88:
			*uParam1 = 21f;
			*uParam1 = -132f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 89:
			*uParam1 = -84.8108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 90:
			*uParam1 = -90.5046f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 91:
			*uParam1 = 105.0795f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 92:
			*uParam1 = -54.347f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 93:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 94:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 95:
			*uParam1 = 70f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 96:
			*uParam1 = 34.621f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 97:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 98:
			*uParam1 = (-150.6148f + 0.0095f);
			*uParam1 = (*uParam1 + 0.0004f);
			*uParam1 = (*uParam1 + 0.0015f);
			*uParam1 = (*uParam1 + 0.0002f);
			*uParam1 = (*uParam1 + -0.0009f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 99:
			*uParam1 = -57f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 100:
			*uParam1 = 84.6073f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 101:
			*uParam1 = 249.0753f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 102:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 103:
			*uParam1 = 143.4931f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 104:
			*uParam1 = 123f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 105:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 106:
			*uParam1 = 63.4995f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 107:
			*uParam1 = -159f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 108:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 109:
			*uParam1 = 99f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 110:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 111:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 112:
			*uParam1 = -162.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 113:
			*uParam1 = 172f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 135:
			*uParam1 = -59.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 136:
			*uParam1 = 82.254f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 137:
			*uParam1 = -152.965f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 138:
			*uParam1 = -10.099f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 139:
			*uParam1 = 158.5974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 140:
			*uParam1 = 99.18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 141:
			*uParam1 = 218.4774f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 142:
			*uParam1 = 125.6193f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 143:
			*uParam1 = 142.373f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 144:
			*uParam1 = -34.878f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 145:
			*uParam1 = -172.419f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 146:
			*uParam1 = -107.439f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 147:
			*uParam1 = 157.311f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 148:
			*uParam1 = -68.812f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 149:
			*uParam1 = 4.693f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 150:
			*uParam1 = 78.65f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 114:
			*uParam1 = 8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 115:
			*uParam1 = 69f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 116:
			*uParam1 = 0f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 117:
			*uParam1 = -74.7818f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 118:
			*uParam1 = -48.36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 119:
			*uParam1 = 144.178f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 120:
			*uParam1 = 288f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 121:
			*uParam1 = 101.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 122:
			*uParam1 = 99.72f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 123:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 125:
			*uParam1 = -3f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 126:
			*uParam1 = -158.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 127:
			*uParam1 = -76.3681f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 128:
			*uParam1 = (30f + 180f);
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 129:
			*uParam1 = -80.6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 130:
			*uParam1 = -9.1673f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 131:
			*uParam1 = -86.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 132:
			*uParam1 = -161.0894f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 133:
			*uParam1 = (226.5579f - 270f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 134:
			*uParam1 = -33.128f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 151:
			*uParam1 = -6f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 152:
			*uParam1 = 72f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 153:
			*uParam1 = -176.25f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 154:
			*uParam1 = -147.192f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 155:
			*uParam1 = 59.082f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 156:
			*uParam1 = 26.087f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 157:
			*uParam1 = 37.27f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 158:
			*uParam1 = -13.8153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 159:
			*uParam1 = -62.5f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 160:
			*uParam1 = 119f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 161:
			*uParam1 = 86.3776f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 162:
			*uParam1 = 117f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 163:
			*uParam1 = -164f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 164:
			*uParam1 = 88f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 165:
			*uParam1 = -144.622f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 166:
			*uParam1 = -61.2262f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 167:
			*uParam1 = -22.32f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 168:
			if (func_53(0, 25, &uVar4, &fVar7))
			{
				*uParam1 = (fVar7 + 222.8314f);
				StringCopy(sParam2, "v_michael", 32);
				return 1;
			}
			break;
		
		case 169:
			*uParam1 = 112.841f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
		
		case 170:
			*uParam1 = (-103.8158f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 171:
			*uParam1 = -28.0926f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 173:
			*uParam1 = -0.0301f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 172:
			*uParam1 = -30.185f;
			*uParam1 = (*uParam1 + 0.003f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 174:
			*uParam1 = 14.98f;
			StringCopy(sParam2, "v_michael", 32);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 175:
			*uParam1 = -179.653f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 176:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 177:
			*uParam1 = -81f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 178:
			*uParam1 = -95.4016f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 179:
			*uParam1 = (-16.0627f + 180f);
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 180:
			*uParam1 = 129f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 181:
			*uParam1 = -86.613f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 182:
			*uParam1 = -63f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 183:
			*uParam1 = 111.688f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 184:
			*uParam1 = 143.7974f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 185:
			*uParam1 = 143.792f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 186:
			*uParam1 = 4.6834f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 187:
			*uParam1 = -108f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 188:
			*uParam1 = 69f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 189:
			*uParam1 = -172.2207f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 190:
			*uParam1 = 0f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 191:
			*uParam1 = -12.5158f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 196:
			*uParam1 = -1.5f;
			StringCopy(sParam2, "v_franklins", 32);
			return 1;
			break;
		
		case 197:
			*uParam1 = 27f;
			StringCopy(sParam2, "v_franklinshouse", 32);
			return 1;
			break;
		
		case 192:
			*uParam1 = 107.981f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 193:
			*uParam1 = 172.9187f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 194:
			*uParam1 = -67.608f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 195:
			*uParam1 = 74.1158f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 198:
			*uParam1 = 1.0411f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 199:
			*uParam1 = -152.203f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 200:
			*uParam1 = (310.879f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 201:
			*uParam1 = 130.879f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 202:
			*uParam1 = 35.604f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 203:
			*uParam1 = -93f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 204:
			*uParam1 = -119.3944f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 205:
			*uParam1 = 121.9322f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 206:
			*uParam1 = -36f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 207:
			*uParam1 = -95.588f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 208:
			*uParam1 = 168f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 209:
			*uParam1 = 230.78f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 210:
			*uParam1 = 165.7751f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 211:
			*uParam1 = -179f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 212:
			*uParam1 = 1.2709f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 213:
			*uParam1 = 84f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 214:
			*uParam1 = -117.03f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 215:
			*uParam1 = -49.0324f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 216:
			*uParam1 = -45f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 217:
			*uParam1 = 153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 221:
			*uParam1 = 84.96f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 222:
			*uParam1 = -59.3848f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 223:
			*uParam1 = 43.82f;
			StringCopy(sParam2, "v_chopshop", 32);
			return 1;
			break;
		
		case 224:
			return func_52(222, uParam1, sParam2);
			break;
		
		case 226:
			*uParam1 = 160f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 227:
			*uParam1 = -14.749f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 228:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 229:
			*uParam1 = 96.0116f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 230:
			*uParam1 = -43.6661f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 218:
			*uParam1 = -70.4124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 219:
			*uParam1 = -12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 220:
			*uParam1 = -117.356f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 225:
			*uParam1 = -83.8f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 231:
			*uParam1 = 350.3382f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 232:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 233:
			*uParam1 = 109.0206f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 235:
			*uParam1 = -112f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 236:
			*uParam1 = 114f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 237:
			*uParam1 = 30f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 238:
			*uParam1 = -164f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 239:
			*uParam1 = -122f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 240:
			*uParam1 = -4.124f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 241:
			*uParam1 = 108f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 242:
			*uParam1 = 13.7207f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 245:
			*uParam1 = 27.746f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 243:
			*uParam1 = 18f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 244:
			*uParam1 = -51f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 246:
			*uParam1 = -165f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 247:
			*uParam1 = 133f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 248:
			*uParam1 = 10.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 249:
			*uParam1 = (138f - 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 250:
			*uParam1 = 87f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 251:
			*uParam1 = -42.8529f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 252:
			*uParam1 = 2.6497f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 253:
			*uParam1 = 135f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 254:
			*uParam1 = -40f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 255:
			*uParam1 = 30.24f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 264:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 265:
			*uParam1 = -144.274f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 266:
			*uParam1 = 68.8227f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 267:
			*uParam1 = 56.2037f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 268:
			*uParam1 = 33f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 269:
			*uParam1 = -106.6605f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 270:
			*uParam1 = -102f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 271:
			*uParam1 = 26.3597f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 272:
			*uParam1 = -83.3175f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 273:
			*uParam1 = -153f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 274:
			*uParam1 = 9f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 275:
			*uParam1 = (277.613f - 360f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 276:
			*uParam1 = -4.7459f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 277:
			*uParam1 = -98.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 278:
			*uParam1 = -33.77f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 279:
			*uParam1 = 155.68f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 280:
			*uParam1 = -49.56f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 281:
			*uParam1 = -5.8739f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 282:
			*uParam1 = 70.1627f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 283:
			*uParam1 = 158.979f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 284:
			*uParam1 = -67.1851f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 285:
			*uParam1 = 47.054f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 256:
			*uParam1 = 120f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 257:
			*uParam1 = 171.253f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 258:
			*uParam1 = 10.247f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 259:
			*uParam1 = -32.488f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 260:
			*uParam1 = -29.093f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 261:
			*uParam1 = 229.6085f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 286:
			*uParam1 = -150f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 287:
			*uParam1 = -81f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 288:
			*uParam1 = 12f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 262:
			*uParam1 = -90f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 263:
			*uParam1 = -171f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 289:
			*uParam1 = -11.5018f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 290:
			*uParam1 = -129f;
			StringCopy(sParam2, "v_strip3", 32);
			return 1;
			break;
		
		case 291:
			*uParam1 = -147f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 292:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 293:
			*uParam1 = 28.7271f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 294:
			return func_52(293, uParam1, sParam2);
			break;
		
		case 295:
			return func_52(292, uParam1, sParam2);
			break;
		
		case 299:
			*uParam1 = 34.661f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 300:
			return func_52(303, uParam1, sParam2);
			break;
		
		case 301:
			return func_52(303, uParam1, sParam2);
			break;
		
		case 302:
			return func_52(303, uParam1, sParam2);
			break;
		
		case 303:
			*uParam1 = 32f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 296:
			*uParam1 = 116.742f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 297:
			*uParam1 = 100.46f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 298:
			*uParam1 = 102f;
			StringCopy(sParam2, "v_Trevors", 32);
			return 1;
			break;
		
		case 304:
			*uParam1 = -152.0894f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 305:
			*uParam1 = 122.5269f;
			StringCopy(sParam2, "v_methlab", 32);
			return 1;
			break;
		
		case 306:
			Var8 = { -7.4998f, 7.4995f, -0.5258f };
			*uParam1 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(-Var8.x, -Var8.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 307:
			Var11 = { 10.6345f, 0.7246f, 1.2508f };
			*uParam1 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(-Var11.x, -Var11.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 308:
			Var14 = { -3.4271f, -13.6787f, -1.4107f };
			*uParam1 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(-Var14.x, -Var14.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 309:
			Var17 = { -19.6582f, 7.896f, 0.1334f };
			*uParam1 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(-Var17.x, -Var17.y);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 310:
			*uParam1 = -87.7215f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 311:
			*uParam1 = -145f;
			StringCopy(sParam2, "v_trailer", 32);
			return 1;
			break;
		
		case 312:
			*uParam1 = ((103.2841f + 88.7571f) / 2f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 313:
			*uParam1 = (-177f + 180f);
			StringCopy(sParam2, "", 32);
			return 1;
			break;
		
		case 314:
			*uParam1 = 327.7746f;
			StringCopy(sParam2, "", 32);
			return 1;
			break;
	}
	*uParam1 = 0f;
	StringCopy(sParam2, "", 32);
	return 0;
}

int func_53(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 13.904f, 1.193f, 0.7f };
					*uParam3 = -144f;
					return 1;
					break;
				
				case 1:
					if (func_53(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -1.1731f, 0.809f) };
						*uParam3 = (*uParam3 + (456.7661f - 360f));
						return 1;
					}
					break;
				
				case 2:
					*uParam2 = { Vector(71.8356f, 180.5483f, -796.9911f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((16f - 222.8314f) + 360f);
					return 1;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 10.9793f, -5.9f, 4.6f };
					*uParam3 = 163.0716f;
					return 1;
					break;
				
				case 1:
					if (func_53(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0.25f, -0.6f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
				
				case 2:
					if (func_53(0, iParam1, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, -0.5f, -1.2f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { Vector(71.835f, 180.548f, -796.991f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = (((16f + 90f) - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
					*uParam2 = { 6.8878f, -5.5247f, 1.5228f };
					*uParam3 = 160f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.1937f, -9.0309f, 4.5877f };
					*uParam3 = 255f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.4577f, -9.6399f, 4.5876f };
					*uParam3 = 252f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.799f, -9.41f, 4.5877f };
					*uParam3 = 273f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					if (func_53(0, 5, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 12.552f, 4.373f, (4.6f + 1f) };
					*uParam3 = 318f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { -0.4395f, -11.0022f, 0.0747f };
					*uParam3 = 306f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 5.5001f, -12.4406f, 4.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.5f, -9.1f, 4.6f };
					*uParam3 = 330f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 0.849f, 1.575f, 0f };
					*uParam3 = 272.857f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 8.183f, -3.0467f, 5.5876f };
					*uParam3 = 158f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { 9.383f, -3.3887f, 5.73f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(76.89f, 176.176f, -802.702f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-159.23f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 4.488f, -9.098f, 5.4864f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 9.04f, 5.71f, 1.44f };
					*uParam3 = 159.3182f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { 3.25f, -9.53f, 4.588f };
					*uParam3 = 333f;
					return 1;
					break;
			}
			break;
		
		case 22:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(0f, -11.0022f, -0.4395f) + Vector(0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f)) };
					*uParam3 = (306f + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(10f, 10f));
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(60.2063f, 141.5129f, -863.5425f) - Vector(71.1531f, 179.5117f, -812.0607f) - Vector(1f, 0f, 0f) };
					*uParam2 = { *uParam2 * Vector(0.95f, 0.95f, 0.95f) };
					*uParam3 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(*uParam2, uParam2->f_1);
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(71.8266f, 180.4725f, -796.7593f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((26.087f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					*uParam2 = { Vector(72.6876f, 173.987f, -805.173f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((13f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					*uParam2 = { Vector(72.8447f, 172.4196f, -803.1823f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-28.7112f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 27.9648f, 8.3766f, 0.7f };
					*uParam3 = 319f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { Vector(0.6f, -6.5f, 10.3f) + Vector(0.1f, 0f, 0f) };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { -0.3142f, -10.9926f, 0.0747f };
					*uParam3 = 304.1026f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.3f, -6.5f, 4.6f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam0)
			{
				case 1:
					if (func_53(1, 32, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
						*uParam3 = (*uParam3 + 0f);
						return 1;
					}
					break;
			}
			break;
		
		case 38:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.505f, -10.9717f, 4.6019f };
					*uParam3 = 228f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 12.7165f, 4.7109f, (4.6f + 1f) };
					*uParam3 = 310.6696f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.0529f, -8.9175f, 1.6907f };
					*uParam3 = 102.156f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.4799f, -7.5315f, 0.682f };
					*uParam3 = 264f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.352f, -3.356f, 5.7338f };
					*uParam3 = 338f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.3003f, -10.3127f, 4.5874f };
					*uParam3 = 262.789f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.76f, -5.95f, 4.59f };
					*uParam3 = 177.6766f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 9.6691f, -7.6405f, 0.6817f };
					*uParam3 = 159.156f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 1.228f, 4.044f, 0.7665f };
					*uParam3 = 165f;
					return 1;
					break;
			}
			break;
		
		case 42:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.2365f, -7.6073f, 6.2761f };
					*uParam3 = 157.0716f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 8.161f, -7.562f, 2.17f };
					*uParam3 = 78f;
					return 1;
					break;
			}
			break;
		
		case 29:
		case 30:
		case 44:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.7668f, -7.8757f, 5.5559f };
					*uParam3 = 144.6939f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam0)
			{
				case 1:
					*uParam2 = { 10.6257f, -9.4927f, 5.5876f };
					*uParam3 = 257.4583f;
					return 1;
					break;
			}
			break;
		
		case 46:
			return func_53(iParam0, 26, uParam2, uParam3);
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
				case 3:
					*uParam2 = { 8.4451f, 3.1568f, 1.47f };
					*uParam3 = 159f;
					return 1;
					break;
			}
			break;
		
		case 48:
		case 68:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 9.0477f, -7.9397f, 0.6817f };
					*uParam3 = 88.5686f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 0f, 0f, 0f };
					*uParam3 = 0f;
					return 0;
					break;
			}
			break;
		
		case 50:
		case 69:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 21.7f, 9f, 1.7029f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 1.3278f, 1.534f, 0f };
					*uParam3 = 159.72f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 67:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -3.0265f, 1.7627f, 0.1273f };
					*uParam3 = 338.5f;
					return 1;
					break;
			}
			break;
		
		case 53:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 15.2374f, 8.723f, 1.4495f };
					*uParam3 = 205.677f;
					return 1;
					break;
			}
			break;
		
		case 54:
		case 70:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 28.7f, 8.8241f, 0.6f };
					*uParam3 = 39f;
					return 1;
					break;
			}
			break;
		
		case 55:
		case 71:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(1.1936f, -9.0107f, 9.0567f) + Vector((0.03f - 0.02f), 0f, 0f) };
					*uParam3 = 94.2086f;
					return 1;
					break;
			}
			break;
		
		case 64:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(5.2891f, 2.0403f, -2.8213f) + Vector((0.03f - 0.05f), 0f, 0f) };
					*uParam3 = 336f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.84f };
					*uParam3 = 311.4f;
					return 1;
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
				case 0:
					*uParam2 = { 5.5782f, 5.7755f, 3.8418f };
					*uParam3 = 306.6f;
					return 1;
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 5.8092f, 5.7965f, 3.85f };
					*uParam3 = 337.4f;
					return 1;
					break;
			}
			break;
		
		case 59:
		case 72:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 13.3221f, 0.0684f, 0.6817f };
					*uParam3 = 277.317f;
					return 1;
					break;
			}
			break;
		
		case 60:
			if (func_53(iParam0, 59, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
				*uParam3 = (*uParam3 + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
				return 1;
			}
			break;
		
		case 61:
		case 62:
		case 63:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { -2.235f, 1.725f, 4.5877f };
					*uParam3 = 172.714f;
					return 1;
					break;
			}
			break;
		
		case 65:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(75.7407f, 181.264f, -814.246f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-158f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 66:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { Vector(76.7233f, 181.114f, -812.896f) - Vector(71.1531f, 179.5117f, -812.0607f) };
					*uParam3 = ((-164f - 222.8314f) + 360f);
					return 1;
					break;
			}
			break;
		
		case 73:
			switch (iParam0)
			{
				case 2:
					*uParam2 = { 7.394f, 5.368f, 1.451f };
					*uParam3 = 235.0656f;
					return 1;
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
				case 1:
					*uParam2 = { 1.0704f, -1.4624f, 0.999f };
					*uParam3 = 157.44f;
					return 1;
					break;
			}
			break;
		
		case 75:
		case 84:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 14.8186f, 6.8253f, 0.5f };
					*uParam3 = 87.3368f;
					return 1;
					break;
			}
			break;
		
		case 76:
		case 78:
		case 85:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 13.6486f, 6.2253f, 0.45f };
					*uParam3 = 262.32f;
					return 1;
					break;
			}
			break;
		
		case 77:
			if (func_53(iParam0, 47, uParam2, uParam3))
			{
				*uParam2 = { *uParam2 + Vector(0f, 0f, 0f) };
				*uParam3 = (*uParam3 + 0f);
				return 1;
			}
			break;
		
		case 79:
		case 86:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 16.319f, -1.375f, 0.6817f };
					*uParam3 = 334.126f;
					return 1;
					break;
			}
			break;
		
		case 80:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { -0.39f, 3.27f, 0f };
					*uParam3 = 154.126f;
					return 1;
					break;
			}
			break;
		
		case 81:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.0213f, 6.9622f, 1.39f };
					*uParam3 = 142.889f;
					return 1;
					break;
			}
			break;
		
		case 82:
		case 83:
			switch (iParam0)
			{
				case 3:
					*uParam2 = { 15.128f, 6.842f, 0.4524f };
					*uParam3 = 54f;
					return 1;
					break;
			}
			break;
		
		case 87:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9019f, -23.8349f, -2.1f };
					*uParam3 = 339f;
					return 1;
					break;
			}
			break;
		
		case 88:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -10.9937f, -24.9005f, -2.18f };
					*uParam3 = 314.2132f;
					return 1;
					break;
			}
			break;
		
		case 89:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 31.7401f, -1.0943f, 0.6822f };
					*uParam3 = 147f;
					return 1;
					break;
			}
			break;
		
		case 90:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -27.1728f, -3.75f, -1.626f };
					*uParam3 = (147f + 90f);
					return 1;
					break;
			}
			break;
		
		case 91:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 14.7722f, -10.9336f, -0.537f };
					*uParam3 = 110.8505f;
					return 1;
					break;
			}
			break;
		
		case 92:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { -17.2536f, 2.451f, -0.6f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
		
		case 93:
			switch (iParam0)
			{
				case 4:
					*uParam2 = { 23.9716f, -20.3533f, -3.18f };
					*uParam3 = 324f;
					return 1;
					break;
			}
			break;
		
		case 94:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.1416f, -2.0799f, -0.0145f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 95:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 3.2746f, -4.1995f, -0.0144f };
					*uParam3 = 69f;
					return 1;
					break;
			}
			break;
		
		case 96:
		case 98:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 2.983f, -4.094f, 0.4629f };
					*uParam3 = 33f;
					return 1;
					break;
			}
			break;
		
		case 97:
			switch (iParam0)
			{
				case 5:
					*uParam2 = { 5.5235f, 2.9133f, 0.7288f };
					*uParam3 = 71f;
					return 1;
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					*uParam2 = { Vector(30.7131f, -1454.676f, -42.2059f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (84.7009f - 188.5817f);
					return 1;
					break;
				
				case 7:
					*uParam2 = { Vector(30.6803f, -1455.848f, -40.7478f) - Vector(30.116f, -1435.997f, -14.3064f) };
					*uParam3 = (90.6417f - 188.5817f);
					return 1;
					break;
			}
			break;
		
		case 100:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 2.0126f, 0.3422f, -0.0086f };
					*uParam3 = 354f;
					return 1;
					break;
			}
			break;
		
		case 101:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.2931f, 1.4476f, 1.0127f };
					*uParam3 = 61.7525f;
					return 1;
					break;
			}
			break;
		
		case 102:
		case 103:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 0.0158f, 1.4182f, 0.9913f };
					*uParam3 = 119.008f;
					return 1;
					break;
			}
			break;
		
		case 104:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -3.467f, 0.074f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 105:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.1014f, -5.4089f, -0.013f };
					*uParam3 = 123.753f;
					return 1;
					break;
			}
			break;
		
		case 106:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -2.802f, -6.3295f, -0.01f };
					*uParam3 = 42.757f;
					return 1;
					break;
			}
			break;
		
		case 107:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -2.156f, -4.9564f, 1.4886f };
					*uParam3 = 136.309f;
					return 1;
					break;
			}
			break;
		
		case 108:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 7.2656f, 3.022f, -0.9061f };
					*uParam3 = 92.8891f;
					return 1;
					break;
			}
			break;
		
		case 109:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { 0.5066f, 1.6992f, 0.0168f };
					*uParam3 = 115.77f;
					return 1;
					break;
			}
			break;
		
		case 110:
		case 111:
			switch (iParam0)
			{
				case 8:
					*uParam2 = { -0.2121f, -6.2791f, -0.0089f };
					*uParam3 = 114.3391f;
					return 1;
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 8.2458f, -0.7136f, -0.2503f };
					*uParam3 = 252.2687f;
					return 1;
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
				case 11:
					*uParam2 = { 2.334f, 1.6889f, 0.586f };
					*uParam3 = 109f;
					return 1;
					break;
			}
			break;
		
		case 112:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -0.6331f, 1.2093f, -0.0086f };
					*uParam3 = 137.1861f;
					return 1;
					break;
			}
			break;
		
		case 113:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { -3.887f, -0.166f, 0f };
					*uParam3 = 30f;
					return 1;
					break;
			}
			break;
		
		case 114:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { 3.5179f, 9.1355f, -1f };
					*uParam3 = 141.79f;
					return 1;
					break;
			}
			break;
		
		case 115:
			switch (iParam0)
			{
				case 9:
					*uParam2 = { Vector(0.15f, -1.9326f, -6.013f) + Vector(1f, 0f, 0f) };
					*uParam3 = 121.6591f;
					return 1;
					break;
			}
			break;
		
		case 118:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.2823f, 2.2595f, -1.0742f };
					*uParam3 = (170.2796f - 180f);
					return 1;
					break;
			}
			break;
		
		case 119:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 1.077f, -5.1446f, 0.9904f };
					*uParam3 = 107.1399f;
					return 1;
					break;
			}
			break;
		
		case 120:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { -12.903f, -6.623f, -0.0406f };
					*uParam3 = 63.48f;
					return 1;
					break;
			}
			break;
		
		case 121:
			switch (iParam0)
			{
				case 10:
					*uParam2 = { 10.5514f, 5.393f, -0.0998f };
					*uParam3 = 327.483f;
					return 1;
					break;
			}
			break;
		
		case 122:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 0.9794f, -0.3043f, 0f };
					*uParam3 = 179.7612f;
					return 1;
					break;
			}
			break;
		
		case 123:
			switch (iParam0)
			{
				case 11:
					*uParam2 = { 11.9759f, 1f, -1.0728f };
					*uParam3 = 238.9422f;
					return 1;
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
				case 8:
					*uParam2 = { -0.576f, 1.671f, 0.601f };
					*uParam3 = 296f;
					return 1;
					break;
			}
			break;
		
		case 125:
			switch (iParam0)
			{
				case 12:
					*uParam2 = { -0.6532f, 0.9556f, -0.0087f };
					*uParam3 = 121.0556f;
					return 1;
					break;
			}
			break;
		
		case 126:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -0.18f, -4.173f, 0.9981f };
					*uParam3 = 216.61f;
					return 1;
					break;
			}
			break;
		
		case 127:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.5937f, 0.3521f, 1f };
					*uParam3 = 119.4f;
					return 1;
					break;
			}
			break;
		
		case 128:
			switch (iParam0)
			{
				case 13:
					if (Global_111638.f_18528[2] == 299)
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else if (((Global_111638.f_18528[2] == 300 || Global_111638.f_18528[2] == 301) || Global_111638.f_18528[2] == 302) || Global_111638.f_18528[2] == 303)
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					if (func_35())
					{
						*uParam2 = { Vector(9.6327f, -1521.394f, -1158.133f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (34.661f - 90.6729f);
						return 1;
					}
					else
					{
						*uParam2 = { Vector(9.6327f, -1521.334f, -1157.803f) - Vector(9.6346f, -1517.601f, -1152.571f) };
						*uParam3 = (32f - 90.6729f);
						return 1;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector(10.6327f, -1519.561f, -1156.422f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = (102f - 90.6729f);
					return 1;
					break;
			}
			break;
		
		case 130:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -2.8352f, 0.0552f, 0f };
					*uParam3 = 334.44f;
					return 1;
					break;
			}
			break;
		
		case 131:
			switch (iParam0)
			{
				case 13:
					if (func_53(iParam0, 130, uParam2, uParam3))
					{
						*uParam2 = { *uParam2 + Vector(0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						*uParam3 = (*uParam3 + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f));
						return 1;
					}
					break;
			}
			break;
		
		case 132:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { -7.213f, -1.4536f, 0.9981f };
					*uParam3 = 42.6f;
					return 1;
					break;
			}
			break;
		
		case 133:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { Vector((9.6327f + 1f), -1518.736f, -1148.466f) - Vector(9.6346f, -1517.601f, -1152.571f) };
					*uParam3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					return 1;
					break;
			}
			break;
		
		case 134:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 5.24f, 6.217f, 0.998f };
					*uParam3 = 315.72f;
					return 1;
					break;
			}
			break;
		
		case 135:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 6.6447f, 0.7635f, 1.0507f };
					*uParam3 = 296.683f;
					return 1;
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					*uParam2 = { 3.968f, -1.04f, 0f };
					*uParam3 = 214.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 4.617f, -1.1314f, 0f };
					*uParam3 = 39.4085f;
					return 1;
					break;
			}
			break;
		
		case 137:
		case 138:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		case 140:
		case 141:
			*uParam2 = { 0f, 0f, 0f };
			*uParam3 = 0f;
			return 0;
			break;
		
		default:
			*uParam2 = { GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
			*uParam3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
			return 0;
			break;
	}
	*uParam2 = { GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-10f, 10f), 0f };
	*uParam3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	return 0;
}

int func_54(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*uParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_54(8, uParam1, uParam2);
			break;
		
		case 10:
			return func_54(8, uParam1, uParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*uParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*uParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*uParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*uParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*uParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*uParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*uParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*uParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*uParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*uParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*uParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*uParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*uParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

char* func_55(int iParam0)
{
	switch (iParam0)
	{
		case 2014101067:
			return "v_chopshop";
			break;
		
		case 551019620:
			return "v_franklins";
			break;
		
		case 223682799:
			return "v_franklinshouse";
			break;
		
		case 2081281344:
			return "v_methlab";
			break;
		
		case -1021412233:
			return "v_michael";
			break;
		
		case 1314234446:
			return "v_strip3";
			break;
		
		case 1681413451:
			return "v_trailer";
			break;
		
		case 1724779208:
			return "v_Trevors";
			break;
	}
	return "";
}

void func_56()
{
	iVar0 = 0;
	while (iVar0 < iLocal_77)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_77[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_153)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_153[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_181)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_181[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_209[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_72)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_72[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_90)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_90[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_158)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_158[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_186)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_186[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_214)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_214[iVar0]);
		iVar0++;
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	GAMEPLAY::SET_GAME_PAUSED(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

