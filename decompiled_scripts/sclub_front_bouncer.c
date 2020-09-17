void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = -1;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_67 = ((0.05f + 0.275f) - 0.01f);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(99))
	{
		func_131();
	}
	bLocal_339 = bScriptParam_0;
	func_130(&uLocal_343, 4);
	if (bLocal_339)
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		func_127(0, -1, 0);
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_238, 4);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_242, 97);
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 10;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
	}
	iVar0 = 1;
	func_126(&uLocal_343, -1613485779);
	func_123(&uLocal_343);
	PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
	GAMEPLAY::CLEAR_AREA_OF_PEDS(130.8067f, -1299.166f, 28.2327f, 2f, 0);
	GAMEPLAY::CLEAR_AREA_OF_PEDS(128.1264f, -1299.691f, 28.23271f, 2f, 0);
	uLocal_341 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(28.23271f, -1299.691f, 128.1264f) - Vector(2f, 1f, 1f), Vector(28.23271f, -1299.691f, 128.1264f) + Vector(2f, 1f, 1f), 0, 1, 1, 1);
	func_122(0);
	while (true)
	{
		func_119(&uLocal_343);
		if (bLocal_339)
		{
			if (func_108() || func_106(PLAYER::PLAYER_ID()))
			{
				func_131();
			}
			if ((GAMEPLAY::GET_FRAME_COUNT() % 10) == 0)
			{
				func_105();
				func_104();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			func_122(ENTITY::IS_ENTITY_DEAD(iLocal_69, 0));
			if (ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
			{
				if (UI::DOES_BLIP_EXIST(uLocal_342))
				{
					UI::REMOVE_BLIP(&uLocal_342);
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 1))
			{
				bLocal_340 = true;
			}
		}
		else
		{
			func_122(1);
		}
		if (iVar0 && func_103() > 1)
		{
			iVar0 = 0;
			func_97(&uLocal_343, -1613485779, 1);
		}
		switch (func_103())
		{
			case 0:
				func_96(1);
				break;
			
			case 1:
				if (func_94())
				{
					func_96(2);
				}
				break;
			
			case 2:
				if (bLocal_339)
				{
					func_93();
				}
				func_35();
				if (func_32())
				{
					if (func_21())
					{
						func_96(3);
					}
				}
				break;
			
			case 3:
				func_6();
				break;
		}
		if (Global_110662)
		{
		}
		if (func_3() || (Global_110662 && !func_1()))
		{
			func_131();
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1()
{
	return func_2(Global_110663, 128);
}

bool func_2(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_3()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 1;
	}
	if (!bLocal_339)
	{
		return SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(156990570) == 0;
	}
	if (func_4(PLAYER::PLAYER_ID()) == 185 && Global_2537071.f_4577 == 2)
	{
		return 1;
	}
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 114.64f, -1290.34f, 29.68f) > 14400f;
}

int func_4(int iParam0)
{
	if (func_5(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_5(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iLocal_69, &iVar0, 1);
	if (((func_20() && PED::IS_PED_IN_COMBAT(iLocal_69, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && iVar0 != 453432689)
	{
		func_18(16);
		func_21();
	}
	if (func_17(PLAYER::PLAYER_PED_ID()) && func_15(32, -1))
	{
		func_10(1);
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_8(56);
	}
	if (bLocal_339)
	{
		iVar2 = 0;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
				{
					if (func_15(32, iVar1))
					{
						iVar2 = 1;
					}
				}
				iVar1++;
			}
			if (iVar2 == 0)
			{
				func_96(2);
				func_10(0);
			}
		}
		if (func_15(8, -1) || func_15(16, -1))
		{
			if ((!PED::IS_PED_SHOOTING(iLocal_69) && func_15(16, -1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 17))
			{
				func_7();
			}
			else if (!PED::IS_PED_IN_COMBAT(iLocal_69, 0))
			{
				func_21();
			}
		}
	}
	else if (!PED::IS_PED_IN_COMBAT(iLocal_69, PLAYER::PLAYER_PED_ID()))
	{
		func_21();
	}
}

void func_7()
{
	if (bLocal_339)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_69);
			return;
		}
	}
	AI::TASK_SHOOT_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), -1, 0);
}

void func_8(int iParam0)
{
	func_9(&uLocal_72, iParam0);
	if (bLocal_339)
	{
		func_9(&(Local_242[NETWORK::PARTICIPANT_ID_TO_INT()]), iParam0);
	}
}

void func_9(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_10(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 4);
	}
	else
	{
		func_11(&Global_110663, 4);
	}
}

void func_11(var uParam0, int iParam1)
{
	func_12(uParam0, iParam1);
}

void func_12(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_13(var uParam0, int iParam1)
{
	func_14(uParam0, iParam1);
}

void func_14(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_15(int iParam0, int iParam1)
{
	if (bLocal_339 && iParam1 >= 0)
	{
		return func_16(Local_242[iParam1], iParam0);
	}
	return func_16(uLocal_72, iParam0);
}

bool func_16(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

bool func_17(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_150304;
}

void func_18(int iParam0)
{
	func_19(&uLocal_72, iParam0);
	if (bLocal_339)
	{
		func_19(&(Local_242[NETWORK::PARTICIPANT_ID_TO_INT()]), iParam0);
	}
}

void func_19(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_20()
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if ((((iVar0 == 0 || iVar0 == -1569615261) || iVar0 == -1833087301) || iVar0 == -72657034) || iVar0 == 966099553)
	{
		return 0;
	}
	return 1;
}

int func_21()
{
	if (PED::IS_PED_INJURED(iLocal_69) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iLocal_69))
	{
		return 1;
	}
	if (Global_1312418.f_6 || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if ((func_24() && func_22()) && !bLocal_340)
	{
		return 0;
	}
	if (bLocal_339)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_69);
			return 0;
		}
	}
	if (func_15(16, -1))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, 453432689, -1, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_69, 453432689, 1);
		AI::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
	}
	else if (func_15(8, -1))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_69, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_69, -1569615261, 1);
		PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_69, 0);
		AI::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
	}
	else if (!(func_20() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_69, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_69, -1569615261, 1);
		PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_69, 0);
		AI::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_18(8);
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, 453432689, -1, 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_69, 453432689, 1);
		AI::TASK_COMBAT_PED(iLocal_69, PLAYER::PLAYER_PED_ID(), 0, 16);
		func_18(16);
	}
	func_18(32);
	if (!UI::DOES_BLIP_EXIST(uLocal_342))
	{
		uLocal_342 = UI::ADD_BLIP_FOR_ENTITY(iLocal_69);
		UI::SET_BLIP_COLOUR(uLocal_342, 1);
		UI::SET_BLIP_SCALE(uLocal_342, 0.7f);
	}
	return 1;
}

bool func_22()
{
	return func_23(4);
}

bool func_23(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iParam0], 0);
}

int func_24()
{
	if (func_25() == 2)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	func_26();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_26()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_28(Global_111638.f_2358.f_539.f_4321))
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

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1798[iParam0];
}

int func_32()
{
	bVar0 = false;
	bVar1 = false;
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return 0;
	}
	if (Global_1312418.f_6)
	{
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), iLocal_69))
	{
		bVar1 = true;
	}
	else if (func_20())
	{
		if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_69) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iLocal_69))
		{
			bVar0 = true;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar1 = true;
	}
	if (!(func_22() && func_25() == 2))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_69))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 10f, 10f, 10f, 0, 1, 0))
				{
					bVar0 = true;
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 17))
				{
					bVar0 = true;
					return 1;
				}
			}
		}
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_69, 1) };
		fVar8 = SYSTEM::VDIST2(Var2, Var5);
		if (fVar8 > (15f * 15f))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && fVar8 < (5f * 5f))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 126.32f, -1298.68f, 28.37f, 129.29f, -1296.8f, 30.39f, 3f, 0, 1, 0))
			{
				func_18(8);
				return 1;
			}
		}
		if (Var2.z > 32f)
		{
			return 0;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3)
		{
			return 1;
		}
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = true;
			}
			else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				bVar0 = true;
			}
			else
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::GET_PLAYER_INDEX());
			}
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69))
		{
			fVar9 = SYSTEM::VDIST2(func_34(), Var5);
			if (fVar9 > 0.7f)
			{
				bVar1 = true;
			}
			if (Var5.z < 29f)
			{
				bVar1 = true;
			}
		}
		if (func_33())
		{
			return 1;
		}
	}
	if (bVar1)
	{
		func_18(8);
	}
	if (bVar0)
	{
		func_18(16);
	}
	return (func_15(8, -1) || func_15(16, -1));
}

bool func_33()
{
	return func_2(Global_110663, 4);
}

Vector3 func_34()
{
	return 130.56f, -1298.85f, 29.24f;
}

void func_35()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iLocal_69))
	{
		return;
	}
	if (PED::IS_PED_IN_COMBAT(iLocal_69, 0))
	{
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iLocal_69, &iVar0, 1);
	iVar1 = 1;
	if (bLocal_339)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69))
		{
			iVar1 = 0;
		}
	}
	if (iVar0 != -1569615261 && iVar1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_69, -1569615261, 0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_69, 1);
	}
	if (!func_15(4, -1))
	{
		if (func_17(PLAYER::PLAYER_PED_ID()))
		{
			func_18(4);
		}
	}
	if (func_92())
	{
		func_18(4);
	}
	bVar2 = false;
	bVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 129.6385f, -1300.051f, 28.2327f) < (1.5f * 1.5f);
	if (bLocal_339)
	{
		if (!PED::IS_PED_INJURED(func_91()))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(iLocal_69, func_91()))
			{
				AI::TASK_LOOK_AT_ENTITY(iLocal_69, func_91(), -1, 4, 4);
			}
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_69, 1)) < (10f * 10f))
	{
		AI::TASK_LOOK_AT_ENTITY(iLocal_69, PLAYER::PLAYER_PED_ID(), 2500, 0, 2);
	}
	if ((!func_15(2, -1) && !func_15(4, -1)) || ((!func_15(64, -1) && func_90()) && bVar3))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_69, 5f, 5f, 2.5f, 0, 1, 1))
		{
			if (func_88())
			{
				func_86();
				if (func_90())
				{
					func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_W", func_85(), 0, 0, 0);
					func_18(64);
					bVar2 = true;
				}
				if (func_65() && !bVar2)
				{
					func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_C", func_85(), 0, 0, 0);
					bVar2 = true;
				}
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar4, 1) && !bVar2)
				{
					if (func_64(uVar4))
					{
						func_69(&uLocal_73, "SCAUD", "SC_BOUNCE_G", func_85(), 0, 0, 0);
						bVar2 = true;
					}
				}
				if (func_58() && !bVar2)
				{
					func_55("BOUNCER_COMMENTS_ON_UNDERWEAR");
					bVar2 = true;
				}
				if ((func_25() == 2 && func_22()) && !bVar2)
				{
					func_55("BOUNCER_GREET_TREVOR_OWNS");
					bVar2 = true;
				}
				if (!bVar2)
				{
					if (func_53(0))
					{
						func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
					}
					else if (func_48(0))
					{
						if (func_25() == 0)
						{
							func_55("BOUNCER_GREET_MICHAEL_LIKE");
						}
						else if (func_25() == 1)
						{
							func_55("BOUNCER_GREET_FRANKLIN_LIKE");
						}
						else if (func_25() == 2)
						{
							func_55("BOUNCER_GREET_TREVOR_LIKE");
						}
						else
						{
							func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
						}
					}
					else
					{
						func_55("BOUNCER_GREET_PLAYER_NEUTRAL");
					}
				}
				func_18(2);
			}
		}
	}
	func_36();
}

void func_36()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		return;
	}
	if (bLocal_339)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69))
		{
			return;
		}
	}
	if (!func_43(&uLocal_343))
	{
		return;
	}
	Var1 = { func_34() };
	fVar4 = func_42();
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_69, 1), Var1) > 2f && AI::GET_SCRIPT_TASK_STATUS(iLocal_69, 713668775) != 1)
	{
		func_41(0);
	}
	switch (func_40())
	{
		case 0:
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_69, 1), Var1) > 0.3f)
			{
				AI::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, Var1, 1f, -1, 0.1f, 512, fVar4);
			}
			func_41(1);
			break;
		
		case 1:
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_69, 713668775) != 1)
			{
				if (GAMEPLAY::ABSF((fVar4 - ENTITY::GET_ENTITY_HEADING(iLocal_69))) > 1f)
				{
					AI::TASK_ACHIEVE_HEADING(iLocal_69, fVar4, 0);
				}
				func_41(2);
			}
			break;
		
		case 2:
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_69, 1920390111) != 1)
			{
				AI::TASK_PLAY_ANIM(iLocal_69, func_39(0), func_38(0), 8f, -8f, -1, 2, 0, 0, 0, 0);
				func_41(3);
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, func_39(0), func_38(0), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, func_39(0), func_38(0)) > 0.985f)
				{
					iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 4);
					AI::TASK_PLAY_ANIM(iLocal_69, func_39(iVar0), func_38(iVar0), 8f, -8f, -1, 2, 0, 0, 0, 0);
					func_41(4);
				}
			}
			else
			{
				AI::TASK_PLAY_ANIM(iLocal_69, func_39(0), func_38(0), 8f, -8f, -1, 2, 0, 0, 0, 0);
			}
			break;
		
		case 4:
			iVar0 = func_37(iLocal_69);
			if (iVar0 > -1)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_69, func_39(iVar0), func_38(iVar0), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_69, func_39(iVar0), func_38(iVar0)) > 0.985f)
					{
						func_41(2);
					}
				}
			}
			else
			{
				func_41(2);
			}
			break;
		
		case 9:
			break;
	}
}

int func_37(int iParam0)
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0, func_39(0), func_38(0), 3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_39(1), func_38(1), 3))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_39(2), func_38(2), 3))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_39(3), func_38(3), 3))
	{
		return 3;
	}
	return -1;
}

char* func_38(int iParam0)
{
	if (iParam0 == 0)
	{
		return "base";
	}
	if (iParam0 == 1)
	{
		return "idle_a";
	}
	if (iParam0 == 2)
	{
		return "idle_b";
	}
	return "idle_c";
}

char* func_39(int iParam0)
{
	if (iParam0 == 0)
	{
		return "mini@strip_club@idles@bouncer@base";
	}
	if (iParam0 == 1)
	{
		return "mini@strip_club@idles@bouncer@idle_a";
	}
	if (iParam0 == 2)
	{
		return "mini@strip_club@idles@bouncer@idle_b";
	}
	return "mini@strip_club@idles@bouncer@idle_c";
}

int func_40()
{
	if (bLocal_339)
	{
		return Local_238.f_1;
	}
	return uLocal_71;
}

void func_41(int iParam0)
{
	uLocal_71 = iParam0;
	if (bLocal_339)
	{
		Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = iParam0;
	}
}

float func_42()
{
	return 200.48f;
}

bool func_43(var uParam0)
{
	return func_44(uParam0);
}

int func_44(var uParam0)
{
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (!GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_45(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_45(var uParam0)
{
	return func_46(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_46(var uParam0, var uParam1, var uParam2)
{
	if (GAMEPLAY::IS_BIT_SET(uParam0, 30))
	{
		if (GAMEPLAY::IS_BIT_SET(uParam0, 29))
		{
			switch (func_47(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(uParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, uParam1);
					break;
				
				case 5:
					return AI::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, GAMEPLAY::IS_BIT_SET(uParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(uParam2);
					break;
				
				case 8:
					return UI::HAS_ADDITIONAL_TEXT_LOADED(uParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_47(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (GAMEPLAY::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_48(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = 65;
			break;
	}
	if (func_49(iParam0) >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	return Global_111638.f_243[func_50()][iParam0];
}

int func_50()
{
	iVar0 = func_25();
	switch (iVar0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		default:
			switch (func_51(-1))
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				case 2:
					return 5;
					break;
				
				case 3:
					return 6;
					break;
				
				case 4:
					return 7;
					break;
				
				default:
					break;
			}
			break;
	}
	return 3;
}

int func_51(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
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

var func_52()
{
	return Global_1312745;
}

int func_53(int iParam0)
{
	if (func_49(iParam0) <= func_54(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 35;
	}
	return 35;
}

void func_55(char* sParam0)
{
	bVar0 = true;
	if (bLocal_339)
	{
		bVar0 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69);
	}
	if (bVar0)
	{
		func_56(iLocal_69, sParam0, 6);
	}
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1, func_57(iParam2), 1);
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

int func_58()
{
	return func_59(PLAYER::PLAYER_PED_ID());
	return 0;
}

int func_59(int iParam0)
{
	iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
	iVar0 = func_61(iParam0, 4);
	return func_60(iVar1, 4, iVar0);
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(uParam0))
	{
		return -99;
	}
	uVar0 = func_63(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, uVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, uVar0);
	return func_62(iParam0, iVar1, iVar2, iParam1);
}

int func_62(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uVar0 = func_63(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(uParam0, uVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(uParam0, uVar0, iVar3);
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

int func_63(int iParam0)
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

int func_64(var uParam0)
{
	iVar0 = WEAPON::GET_WEAPONTYPE_GROUP(uParam0);
	if (((((((iVar0 == 416676503 || iVar0 == -957766203) || iVar0 == 970310034) || iVar0 == 1159398588) || iVar0 == 860033945) || iVar0 == -1212426201) || iVar0 == -1569042529) || iVar0 == 88899580)
	{
		return 1;
	}
	return 0;
}

int func_65()
{
	if (func_68())
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(func_67()) && !func_66()) && !func_92())
		{
			return 1;
		}
	}
	return 0;
}

int func_66()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1196127390) > 0)
	{
		return 1;
	}
	return 0;
}

var func_67()
{
	return Global_94576;
}

int func_68()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_69(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_70(sParam2, iParam3, 0);
}

int func_70(char* sParam0, int iParam1, bool bParam2)
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
					func_83();
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
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_81();
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
				func_80();
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
				if (func_79())
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
			if (func_78())
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
			func_77();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_76();
		func_71();
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
		func_83();
	}
	return 0;
}

void func_71()
{
	if (!func_72())
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

int func_72()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_75())
	{
		return 0;
	}
	if (func_73(PLAYER::PLAYER_ID()))
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

bool func_73(int iParam0)
{
	return func_74(iParam0, 20);
}

bool func_74(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_75()
{
	return -1;
}

void func_76()
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

void func_77()
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

int func_78()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_79()
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

void func_80()
{
	if (func_27(14))
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
		Global_19486 = func_25();
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

void func_81()
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

bool func_82(int iParam0, int iParam1)
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

void func_83()
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

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
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

int func_85()
{
	return 3;
}

void func_86()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_69, 0))
	{
		func_87(&uLocal_73, 4, iLocal_69, "BOUNCER", 0, 1);
	}
}

void func_87(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = uParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if (uParam0[iParam1]->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (uParam0[iParam1]->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_88()
{
	if (func_89() || Global_20805 != 0)
	{
		return 0;
	}
	return 1;
}

int func_89()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_90()
{
	return func_2(Global_110663, 16);
}

int func_91()
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(Local_238.f_3))
	{
		return PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(Local_238.f_3));
	}
	return 0;
}

int func_92()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

void func_93()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (Local_242[iVar0].f_1 != 10)
				{
					Local_238.f_1 = Local_242[iVar0].f_1;
				}
				if (func_15(32, iVar0))
				{
					func_96(3);
				}
			}
			iVar0++;
		}
		Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 10;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
		{
			Local_238.f_2 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_69);
		}
	}
	else
	{
		if (Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 == Local_238.f_1)
		{
			Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 10;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_238.f_2))
		{
			iLocal_69 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(Local_238.f_2));
		}
	}
}

int func_94()
{
	if (bLocal_339)
	{
		if (func_4(PLAYER::PLAYER_ID()) == 185 && Global_2537071.f_4577 == 2)
		{
			return 0;
		}
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return 0;
		}
		if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			return 0;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_238.f_2))
		{
			iLocal_69 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(Local_238.f_2));
			return 1;
		}
	}
	if (!func_1())
	{
		if (!func_92() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (CAM::IS_SPHERE_VISIBLE(func_34(), 1f) && SYSTEM::VDIST2(func_34(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < (30f * 30f))
			{
				return 0;
			}
		}
	}
	if (func_44(&uLocal_343))
	{
		iLocal_69 = PED::CREATE_PED(26, -1613485779, func_34() - Vector(1f, 0f, 0f), func_42(), 1, 1);
		func_95(1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_69, 453432689, -1, 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_69, 1);
		PED::SET_PED_KEEP_TASK(iLocal_69, 1);
		return 1;
	}
	return 0;
}

void func_95(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 64);
	}
	else
	{
		func_11(&Global_110663, 64);
	}
}

void func_96(int iParam0)
{
	uLocal_70 = iParam0;
	if (bLocal_339)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_238 = iParam0;
		}
	}
}

void func_97(var uParam0, int iParam1, bool bParam2)
{
	func_98(uParam0, 0, iParam1, "NULL", bParam2);
}

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	iVar0 = 0;
	bVar1 = false;
	while (!bVar1 && iVar0 < 15)
	{
		if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						bVar1 = true;
					}
				}
				if (!bVar1)
				{
					if (iParam1 != 4)
					{
						if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam3, "NULL"))
						{
							if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0[iVar0]->f_2), sParam3))
							{
								bVar1 = true;
							}
						}
					}
				}
				if (!bVar1)
				{
					if (iParam1 == 9)
					{
						bVar1 = true;
					}
				}
			}
		}
		if (!bVar1)
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam4)
	{
		func_101(uParam0[iVar0]);
	}
	bVar2 = false;
	while (!bVar2 && iVar0 < 14)
	{
		iVar0++;
		if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			func_100(uParam0[iVar0], uParam0[(iVar0 - 1)]);
		}
		else
		{
			func_99(uParam0[(iVar0 - 1)]);
			bVar2 = true;
		}
	}
	if (!bVar2)
	{
		func_99(uParam0[iVar0]);
	}
}

void func_99(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_100(var uParam0, var uParam1)
{
	*uParam1 = *uParam0;
	uParam1->f_1 = uParam0->f_1;
	uParam1->f_2 = { uParam0->f_2 };
}

void func_101(var uParam0)
{
	func_102(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_102(var uParam0, var uParam1, int iParam2)
{
	if (GAMEPLAY::IS_BIT_SET(uParam0, 30))
	{
		switch (func_47(uParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, uParam1);
				break;
			
			case 5:
				AI::REMOVE_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				UI::CLEAR_ADDITIONAL_TEXT(iParam2, GAMEPLAY::IS_BIT_SET(uParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

int func_103()
{
	if (bLocal_339)
	{
		if (Local_238 <= 1 || func_44(&uLocal_343))
		{
			return Local_238;
		}
		else
		{
			return 0;
		}
	}
	return uLocal_70;
}

void func_104()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = -1;
		fVar2 = 999999f;
		iVar0 = 0;
		while (iVar0 < Local_242.x)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (Local_242[iVar0].f_2 > -0.5f)
				{
					if (Local_242[iVar0].f_2 < fVar2)
					{
						fVar2 = Local_242[iVar0].f_2;
						iVar1 = iVar0;
					}
				}
			}
			iVar0++;
		}
		if (iVar1 > -1)
		{
			Local_238.f_3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
		}
		else
		{
			Local_238.f_3 = 0;
		}
	}
}

void func_105()
{
	if ((!PED::IS_PED_INJURED(iLocal_69) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !func_17(PLAYER::PLAYER_PED_ID()))
	{
		Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_69, 1));
	}
	else
	{
		Local_242[NETWORK::PARTICIPANT_ID_TO_INT()].f_2 = -1f;
	}
}

int func_106(int iParam0)
{
	switch (func_107())
	{
		case 0:
			if (Global_1590535[iParam0] == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_107()
{
	return Global_30768;
}

int func_108()
{
	func_115(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_113())
	{
		return 1;
	}
	if (func_112(159))
	{
		if (!func_111())
		{
			return 1;
		}
	}
	if (func_112(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_109() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_109()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_109()
{
	switch (func_107())
	{
		case 0:
			return func_110();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_110()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

bool func_111()
{
	return Global_2450632.f_598;
}

int func_112(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_113()
{
	return Global_2460680;
}

bool func_114()
{
	return Global_2450632.f_593;
}

void func_115(var uParam0)
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
					func_116(iVar0);
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

void func_116(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_118(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_117(uVar4, &bVar5))
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

int func_117(int iParam0, var uParam1)
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

int func_118(int iParam0, bool bParam1, bool bParam2)
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

void func_119(var uParam0)
{
	if (uParam0->f_271)
	{
		if ((GAMEPLAY::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || GAMEPLAY::IS_BIT_SET(Global_98744.f_20, 2)) || GAMEPLAY::IS_BIT_SET(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
				{
					if (!GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 29))
					{
						func_120(uParam0[iVar0]);
						uParam0->f_272 = GAMEPLAY::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_120(var uParam0)
{
	func_121(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_121(var uParam0, var uParam1, var uParam2)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_47(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, GAMEPLAY::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				AI::REQUEST_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, GAMEPLAY::IS_BIT_SET(*uParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				UI::REQUEST_ADDITIONAL_TEXT(uParam1, uParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		GAMEPLAY::SET_BIT(uParam0, 29);
	}
}

void func_122(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 8);
	}
	else
	{
		func_11(&Global_110663, 8);
	}
}

void func_123(var uParam0)
{
	func_124(uParam0, func_39(0));
	func_124(uParam0, func_39(1));
	func_124(uParam0, func_39(2));
	func_124(uParam0, func_39(3));
}

void func_124(var uParam0, char* sParam1)
{
	func_125(uParam0, 1, -1, sParam1, 0);
}

void func_125(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], iParam1))
			{
				if (iParam2 != -1)
				{
					if (uParam0[iVar0]->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0[iVar0]->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			GAMEPLAY::SET_BIT(uParam0[iVar0], iParam1);
			GAMEPLAY::SET_BIT(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

void func_126(var uParam0, int iParam1)
{
	func_125(uParam0, 0, iParam1, "NULL", 0);
}

int func_127(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_129();
			}
			else
			{
				return 0;
			}
		}
		if (!func_128())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_114())
				{
					if (!bParam2)
					{
						func_129();
					}
					else
					{
						return 0;
					}
				}
				if (func_112(157))
				{
					if (!bParam2)
					{
						func_129();
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
					func_129();
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
				func_129();
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
			func_129();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_128()
{
	return Global_1312854;
}

void func_129()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_130(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_131()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1613485779);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_69) && func_135())
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_69);
		}
	}
	if (UI::DOES_BLIP_EXIST(uLocal_342))
	{
		UI::REMOVE_BLIP(&uLocal_342);
	}
	func_95(0);
	func_134(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_341, 0);
	func_132(&uLocal_343, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_132(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_133(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_99(uParam0[iVar0]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_133(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			func_101(uParam0[iVar0]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_134(bool bParam0)
{
	if (bParam0)
	{
		func_13(&Global_110663, 128);
	}
	else
	{
		func_11(&Global_110663, 128);
	}
}

bool func_135()
{
	if (!bLocal_339)
	{
		return 1;
	}
	return (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_69) && NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS("sclub_front_bouncer", -1, 0) == 1);
}

