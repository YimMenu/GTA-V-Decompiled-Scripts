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
	iLocal_525 = 416176080;
	iLocal_533 = -1;
	iLocal_540 = -1;
	iLocal_558 = 303280717;
	iLocal_559 = SYSTEM::ROUND(Global_262145.f_2422);
	iLocal_560 = SYSTEM::ROUND(Global_262145.f_2418) + 1;
	iLocal_561 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_443(ScriptParam_0))
		{
			func_438();
		}
		if (func_437(1))
		{
			func_425(PLAYER::PLAYER_ID(), 0, 98816, 0);
		}
	}
	while (true)
	{
		func_424();
		if (func_413())
		{
			func_438();
		}
		func_411();
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6))
		{
			if (func_437(1))
			{
				func_425(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_408();
				GAMEPLAY::CLEAR_BIT(&(Local_467.f_53), 7);
				func_407();
			}
		}
		switch (func_406(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_396())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_395(Local_467), 0);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73))
						{
							if (func_394() > 0)
							{
								if (!func_393(Local_73))
								{
									func_392(&uLocal_590, 3, NETWORK::NET_TO_PED(Local_73), &(Local_73.f_46), 1, 0);
									func_391();
								}
								GAMEPLAY::SET_BIT(&(Local_467.f_52), 22);
								Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 2;
							}
						}
					}
				}
				if (func_394() == 6)
				{
					Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_467, Local_534, Local_537, &Local_73, &(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_73), Local_583, Local_586, uLocal_589, 0, 1, 0), 0);
				func_259();
				if (func_394() == 2)
				{
					func_129();
				}
				else if (func_394() == 6)
				{
					Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_573, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 6;
				}
				break;
			
			case 5:
				func_128(&(Local_73.f_69));
				if (func_127(&(Local_73.f_69)))
				{
					Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 6;
				}
				break;
			
			case 4:
				Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 6;
			
			case 6:
				func_53();
				func_438();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_394())
			{
				case 0:
					if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 16))
					{
						func_51(func_52(0));
						func_51(func_52(1));
						func_51(func_52(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_396())
							{
								GAMEPLAY::CLEAR_AREA(Local_534, 1.5f, 0, 1, 0, 1);
								GAMEPLAY::CLEAR_AREA(Local_529, 1.5f, 0, 1, 0, 1);
								GAMEPLAY::SET_BIT(&(Local_467.f_52), 16);
							}
						}
					}
					else if (func_49())
					{
						Local_73.f_12 = 2;
					}
					break;
				
				case 2:
					func_48();
					func_45();
					func_29();
					func_28();
					func_21();
					func_20();
					func_12();
					func_11();
					if (func_4())
					{
						func_1();
						Local_73.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
	{
		if (func_3(Local_73.f_13))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_73.f_13)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 1, 1);
				func_2(&(Local_73.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_3(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 2))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 3))
	{
		return 1;
	}
	if (!func_10())
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 19)) || (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20)))
		{
			func_6(Local_467.f_50, 1, func_7());
			return 1;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 18))
		{
			func_6(Local_467.f_50, 1, func_7());
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 18))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 7))
		{
			func_6(Local_467.f_50, 1, func_7());
			GAMEPLAY::SET_BIT(&(Local_73.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	Var0 = 917314517;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_9(), -1, 0));
}

int func_8(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_9()
{
	switch (Global_2463024)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

int func_10()
{
	if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 13) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 27)) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 21))
	{
		if (func_393(Local_73))
		{
			Local_73.f_72 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_73, &uVar0);
			GAMEPLAY::SET_BIT(&(Local_73.f_23), 21);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 19))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 10) && Local_73.f_37 <= 0f)
		{
			GAMEPLAY::SET_BIT(&(Local_73.f_23), 19);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 17))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20))
		{
			if (func_3(Local_73.f_13))
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_73.f_13), 0, 0);
				GAMEPLAY::SET_BIT(&(Local_73.f_24), 17);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6))
	{
		if (Global_2537071.f_8 == 1)
		{
			GAMEPLAY::SET_BIT(&(Local_73.f_23), 6);
			GAMEPLAY::SET_BIT(&(Local_73.f_23), 16);
		}
	}
}

int func_12()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !GAMEPLAY::IS_BIT_SET(Local_73.f_25, 0))
	{
		return 0;
	}
	if (Local_73.f_66 != 6)
	{
		if (Local_73.f_66 > 0 && func_393(Local_73.f_15))
		{
			Local_73.f_66 = 6;
			return 0;
		}
		switch (Local_73.f_66)
		{
			case 0:
				if (!func_18(&uLocal_780, 10000, 0))
				{
					iVar0 = PED::GET_RANDOM_PED_AT_COORD(Local_583, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if (((((((iVar1 != 1885233650 && iVar1 != -1667301416) && !PED::IS_COP_PED_IN_AREA_3D(Local_583, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_570, 1f, 1f, 2f, 0, 1, 0)) && !WEAPON::IS_PED_ARMED(iVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1)) && PED::IS_PED_HUMAN(iVar0)) && func_17(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
								{
									if (func_16(&(Local_73.f_15), iVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73.f_15), 453432689, 25000, 0);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73.f_15), 1);
										Local_73.f_66 = 1;
										GAMEPLAY::SET_BIT(&(Local_73.f_25), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73.f_15), Global_1575005);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_73.f_15), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_73.f_15), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
										func_392(&uLocal_590, 4, NETWORK::NET_TO_PED(Local_73.f_15), "StoreHero", 1, 0);
										AI::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_73.f_15), func_15(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 5)) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4))
				{
					Local_73.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_18(&(Local_73.f_67), 3000, 0) || (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 1227113341) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 1227113341) != 1))
				{
					func_14(&(Local_73.f_67));
					Local_73.f_66 = 3;
				}
				break;
			
			case 3:
				if (((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 5) || GAMEPLAY::IS_BIT_SET(Local_73.f_25, 8)) || GAMEPLAY::IS_BIT_SET(Local_73.f_25, 9)) || func_18(&(Local_73.f_67), 5000, 0))
				{
					if (func_13() || func_18(&(Local_73.f_67), 5000, 0))
					{
						Local_73.f_66 = 4;
					}
					else
					{
						Local_73.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_13()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_15()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_16(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, bParam2, iParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1885233650 || iParam0 == 1558115333) || iParam0 == -839953400) || iParam0 == 1567728751) || iParam0 == 1250841910) || iParam0 == 368603149) || iParam0 == -1614285257) || iParam0 == -1420211530) || iParam0 == 1096929346) || iParam0 == -1782092083) || iParam0 == 1669696074) || iParam0 == -1613485779) || iParam0 == 1650288984) || iParam0 == 788443093) || iParam0 == -730659924) || iParam0 == -306416314) || iParam0 == 653289389) || iParam0 == -245247470) || iParam0 == 691061163) || iParam0 == -1452549652) || iParam0 == 1985653476) || iParam0 == -220552467) || iParam0 == -265970301) || iParam0 == -1286380898) || iParam0 == -413447396) || iParam0 == -163714847) || iParam0 == 1650036788) || iParam0 == 1936142927) || iParam0 == 1456041926) || iParam0 == 1092080539) || iParam0 == -681004504) || iParam0 == -1614577886) || iParam0 == -792862442) || iParam0 == 1644266841) || iParam0 == 1657546978) || iParam0 == 189425762) || iParam0 == -1275859404) || iParam0 == 2047212121) || iParam0 == 1581098148) || iParam0 == 579932932) || iParam0 == -1229853272) || iParam0 == -294281201) || iParam0 == 1939545845) || iParam0 == 1702441027) || iParam0 == 1490458366) || iParam0 == 1925237458) || iParam0 == -1422914553) || iParam0 == -277793362) || iParam0 == -1320879687) || iParam0 == -1920001264) || iParam0 == -905948951) || iParam0 == 999748158) || iParam0 == -1387498932) || iParam0 == -1395868234) || iParam0 == 337826907)
	{
		return 0;
	}
	return 1;
}

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

void func_20()
{
	if (Local_73.f_30 == 0)
	{
		if (Local_73.f_3 >= 2 && Local_73.f_3 != 9)
		{
			Local_73.f_30 = DECISIONEVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(101, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_21()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 5))
	{
		if (Local_73.f_41 > 0)
		{
			func_25();
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 5))
			{
				return;
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_1, 1))
	{
		if (Local_73.f_2 == 3 && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
		{
			Local_73.f_2 = 0;
		}
		GAMEPLAY::CLEAR_BIT(&(Local_73.f_1), 1);
	}
	switch (Local_73.f_2)
	{
		case 0:
			if ((((func_3(Local_73) && !func_393(Local_73)) && func_3(Local_73.f_16[Local_73.f_26])) && Local_73.f_3 != 8) && Local_73.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_73.f_1, 4))
					{
						Local_73.f_2 = 2;
						return;
					}
					if (!iLocal_523)
					{
						AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_73), Local_73.f_42, 1600);
						iLocal_523 = 1;
					}
					if (func_18(&uLocal_770, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_73));
						fVar1 = (Local_73.f_42 - 10f);
						fVar2 = (Local_73.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_73.f_42 - 10f) + 360f);
							fVar1 = ((Local_73.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_73.f_42 - 10f) - 360f);
							fVar1 = ((Local_73.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_18(&uLocal_776, 1000, 0)) || func_18(&uLocal_776, 3125, 0))
						{
							AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_73));
							Local_73.f_27 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_73), -0.65f, 0.87f, -0.02f), Local_537, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_73), Local_73.f_27, "mp_am_hold_up", func_24(Local_73.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[Local_73.f_26]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26]), true, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26]), Local_73.f_27, "mp_am_hold_up", func_23(Local_73.f_26), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_73.f_27);
							Local_73.f_2 = 1;
							iLocal_540 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_73.f_1, 4))
			{
				iLocal_540 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_27);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_73.f_27);
				}
				Local_73.f_2 = 2;
				return;
			}
			if (iLocal_540 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540) || func_18(&uLocal_772, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_540) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_540) == 1f) || func_18(&uLocal_772, 2000, 0))
					{
						if ((func_3(Local_73) && !func_393(Local_73)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_73.f_27);
						Local_73.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_540 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_27);
			}
			break;
		
		case 2:
			func_3(Local_73.f_16[Local_73.f_26]);
			if (func_18(&uLocal_778, 1000, 0) && func_3(Local_73.f_16[Local_73.f_26]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26]), true);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_73.f_16[Local_73.f_26]), func_22(Local_73.f_26), 1, 0, 0, 1);
				}
				iLocal_540 = -1;
				iLocal_523 = 0;
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_1, 4))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_73.f_1), 4);
				}
				func_14(&uLocal_778);
				func_14(&uLocal_772);
				func_14(&uLocal_770);
				func_14(&uLocal_776);
				Local_73.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Local_554 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return Local_554 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return Local_554 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return Local_554 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return Local_554 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return Local_554 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return Local_554 - Vector(1f, 0f, -0.1f);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_25()
{
	if (((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[5]))
	{
		if (((((func_51(func_27(3)) && func_51(func_27(1))) && func_51(func_27(2))) && func_51(func_27(4))) && func_51(func_27(0))) && func_51(func_27(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[3]))
				{
					if (func_26(&(Local_73.f_16[3]), func_27(3), func_22(3), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[3]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[3]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[3]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[1]))
				{
					if (func_26(&(Local_73.f_16[1]), func_27(1), func_22(1), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[1]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[1]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[1]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[2]))
				{
					if (func_26(&(Local_73.f_16[2]), func_27(2), func_22(2), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[2]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[2]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[2]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[4]))
				{
					if (func_26(&(Local_73.f_16[4]), func_27(4), func_22(4), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[4]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[4]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[4]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[0]))
				{
					if (func_26(&(Local_73.f_16[0]), func_27(0), func_22(0), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[0]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[0]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[0]), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_16[5]))
				{
					if (func_26(&(Local_73.f_16[5]), func_27(5), func_22(5), 1, 1, 0, 1, 0, 0, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_16[5]), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_16[5]), true);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_16[5]), false, 0);
					}
				}
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Local_73.f_1), 5);
		return 1;
	}
	return 0;
}

int func_26(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_LINKED_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
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

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1374501775;
		
		case 1:
			return -447760697;
		
		case 2:
			return 921283475;
		
		case 4:
			return -596948790;
		
		case 0:
			return 1020618269;
		
		case 5:
			return 683570518;
		
		default:
	}
	return 1374501775;
}

void func_28()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
	{
		if (Global_2537071.f_8 == 1 || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6))
		{
			if ((((func_3(Local_73.f_13) && func_3(Local_73)) && !func_393(Local_73)) && Local_73.f_3 != 8) && Local_73.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 30))
					{
						AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_73), Local_73.f_42, 1600);
						GAMEPLAY::SET_BIT(&(Local_467.f_52), 30);
					}
					if (func_18(&uLocal_768, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_73));
						if ((fVar0 > (Local_73.f_42 - 20f) && fVar0 < (Local_73.f_42 + 20f)) || func_18(&uLocal_774, 1500, 0))
						{
							AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_73));
							Local_73.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_534, Local_537, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_73), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_13), false);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_73.f_13), 1);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_73.f_13), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_73.f_14), Local_73.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_73.f_29);
							GAMEPLAY::SET_BIT(&(Local_73.f_23), 9);
						}
					}
				}
				else
				{
					Local_73.f_3 = 8;
				}
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 17))
	{
		iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
		if (iLocal_533 != -1)
		{
			func_3(Local_73);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 17);
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 15))
	{
		iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
		if (iLocal_533 != -1)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
			{
				func_3(Local_73);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13) && func_3(Local_73.f_13)) && func_3(Local_73))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_13), true, 0);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_73.f_13), true, 0);
						GAMEPLAY::SET_BIT(&(Local_73.f_24), 15);
					}
				}
			}
		}
	}
}

int func_29()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_43();
	if (Local_73.f_3 != 9)
	{
		if (func_393(Local_73))
		{
			Local_73.f_3 = 9;
			return 0;
		}
		if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9)) && Local_73.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
			{
				Local_73.f_3 = 8;
			}
		}
		switch (Local_73.f_3)
		{
			case 0:
				if (!func_393(Local_73))
				{
					Local_73.f_3 = 1;
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4))
				{
					Local_73.f_3 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
				{
					Local_73.f_3 = 4;
				}
				else if (func_41() || func_34(0))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 2:
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
				{
					Local_73.f_3 = 4;
				}
				else if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 3:
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 1920390111) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 1920390111) != 1)
				{
					Local_73.f_3 = 4;
				}
				else if (func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				break;
			
			case 4:
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 17))
				{
					iVar0 = 0;
					iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
					if (iLocal_533 != -1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
						{
							if (GAMEPLAY::IS_BULLET_IN_AREA(Local_526, 3f, 0))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 25))
								{
									GAMEPLAY::SET_BIT(&(Local_73.f_23), 25);
								}
								Local_73.f_33 = (Local_73.f_33 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533);
							if (fVar1 >= 0.8f)
							{
								Local_73.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_73.f_37 = 0f;
							}
							else if (fVar1 > Local_73.f_37)
							{
								Local_73.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_73.f_37 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_73.f_3 = 6;
					}
					else if (func_34(1))
					{
						Local_73.f_3 = 8;
					}
					else if (func_32())
					{
						Local_73.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				break;
			
			case 6:
				func_30();
				if (func_41() || func_34(1))
				{
					Local_73.f_3 = 8;
				}
				else if (func_32())
				{
					Local_73.f_3 = 7;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 3))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 4))
					{
						Local_73.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_30();
				break;
			
			case 7:
				break;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73))
		{
			Local_73.f_43 = (Local_73.f_43 - 1);
			GAMEPLAY::SET_BIT(&(Local_73.f_24), 10);
		}
	}
	return 1;
}

void func_30()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 2))
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_561 + func_31());
		if (iVar0 < iVar1)
		{
			GAMEPLAY::SET_BIT(&(Local_73.f_24), 3);
		}
		GAMEPLAY::SET_BIT(&(Local_73.f_24), 2);
	}
}

int func_31()
{
	iVar0 = (Global_2425662[PLAYER::PLAYER_ID()].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_32()
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 24) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_33(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != -1569615261 && iVar0 != 0) && iVar0 != 1259576109) && iVar0 != 1186503822) && iVar0 != -268631733) && iVar0 != 1945616459) && iVar0 != 1233104067)
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_566)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_33(int iParam0)
{
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1);
	return uVar0;
}

int func_34(int iParam0)
{
	if (func_39(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (func_38(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
	{
		return 1;
	}
	if (func_37() || func_36())
	{
		return 1;
	}
	if (func_35())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 185)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 13))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1) && ENTITY::IS_ENTITY_A_PED(Var1))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
					if (PED::IS_PED_INJURED(iVar14) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar14) == iLocal_566)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar15 != NETWORK::NET_TO_PED(Local_73))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(Local_576 - Vector(25f, 25f, 25f), Local_576 + Vector(25f, 25f, 25f)))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_24), 5);
			}
		}
	}
	return 0;
}

int func_35()
{
	if (Local_467.f_50 >= 15 && Local_467.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_576, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_576, Local_579, uLocal_582))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_583, Local_586, fLocal_589))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_583, Local_586, fLocal_589, -1813897027, 0) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_583, Local_586, fLocal_589, 615608432, 0)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_583, Local_586, fLocal_589, 741814745, 0))
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if ((GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_576, Local_579, uLocal_582, -1813897027, 0) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_576, Local_579, fLocal_582, 615608432, 0)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Local_576, Local_579, fLocal_582, 741814745, 0))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
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
			iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
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

int func_39(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0] == iParam1)
	{
		return func_40(iParam0);
	}
	return 0;
}

int func_40(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_41()
{
	if (func_42() || func_35())
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	if (GAMEPLAY::IS_BULLET_IN_ANGLED_AREA(Local_576, Local_579, fLocal_582, 0))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BULLET_IN_ANGLED_AREA(Local_583, Local_586, fLocal_589, 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	if (Local_73.f_33 > 0f)
	{
		if (func_44(&(Local_73.f_34), 50, 0))
		{
			Local_73.f_33 = (Local_73.f_33 - 0.02f);
			if (Local_73.f_33 < 0f)
			{
				Local_73.f_33 = 0f;
			}
			func_14(&(Local_73.f_34));
		}
	}
}

int func_44(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_14(uParam0);
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_14(uParam0);
		return 1;
	}
	return 0;
}

void func_45()
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_547)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_547));
		uVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_73.f_13))
				{
					if (func_3(Local_73.f_13))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 1, 1);
						func_47(&(Local_73.f_13));
					}
				}
				else
				{
					Local_73.f_38 = { Local_146[iLocal_547].f_7 };
					Local_73.f_44 = 7;
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 11);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 14))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 6))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 14);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 15))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 7))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 15);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 26))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 24))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 26);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 22))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 22))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 22);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 23))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 23))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 23);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 30))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 25))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 30);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 31))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 26))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 31);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 29))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_24), 6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 9))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 31))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_24), 9);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_1, 3))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_1), 3);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_25, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_5, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_25), 6);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 7))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_5, 2))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_25), 7);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 5))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_5, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_25), 5);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 11))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 20);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 17))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 13))
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_24), 17);
			}
		}
		if (func_46(iVar0, 1, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 5))
			{
				if (!func_393(Local_73))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_73), uVar1, 1))
					{
						GAMEPLAY::SET_BIT(&(Local_73.f_23), 5);
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_25, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 8))
				{
					if (!func_393(Local_73.f_15))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_73.f_15), uVar1, 1))
						{
							GAMEPLAY::SET_BIT(&(Local_73.f_25), 8);
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 9))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_5, 3))
					{
						GAMEPLAY::SET_BIT(&(Local_73.f_25), 9);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 1))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 6);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 16))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 8))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 16);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 27))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_24), 1);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 0))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 7);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 4))
				{
					if (Local_73.f_3 != 5 && Local_73.f_3 != 6)
					{
						Local_73.f_3 = 5;
					}
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 10);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 2))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_1, 2))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 2);
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 4);
					iLocal_549 = iLocal_547;
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_146[iLocal_549].f_1, 2))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_73.f_1), 2);
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_1, 3))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_73.f_1), 3);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 8))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 30))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_24), 8);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547].f_1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 0);
					GAMEPLAY::SET_BIT(&(Local_73.f_1), 1);
					Local_73.f_26 = Local_146[iLocal_547].f_2;
					iLocal_548 = iLocal_547;
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_146[iLocal_548].f_1, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_73.f_1), 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 13))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iLocal_547], 21))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_24), 13);
				}
			}
		}
	}
	iLocal_547++;
	if (iLocal_547 == NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_547 = 0;
	}
}

int func_46(int iParam0, bool bParam1, bool bParam2)
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

void func_47(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

void func_48()
{
	GAMEPLAY::SET_BIT(&(Local_73.f_23), 2);
	GAMEPLAY::SET_BIT(&(Local_73.f_23), 3);
	GAMEPLAY::CLEAR_BIT(&(Local_73.f_23), 13);
	GAMEPLAY::CLEAR_BIT(&(Local_73.f_23), 27);
	GAMEPLAY::CLEAR_BIT(&(Local_73.f_23), 28);
	GAMEPLAY::CLEAR_BIT(&(Local_73.f_24), 4);
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 18))
	{
		if (func_393(Local_73))
		{
			if (Local_73.f_37 <= 0f)
			{
				GAMEPLAY::SET_BIT(&(Local_73.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_146[iVar0].f_3 > 0)
			{
				Local_73.f_4 = (Local_73.f_4 + Local_146[iVar0].f_3);
				Local_146[iVar0].f_3 = 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_573, 30f, 30f, 30f, 0, 1, 0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_73.f_23), 3);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 16))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_146[iVar0], 12))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_24), 16);
				}
			}
			if (func_46(iVar5, 1, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 2))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_73.f_23), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar6) == iLocal_566)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_567 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_568)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iVar6) == iLocal_569)
					{
						GAMEPLAY::SET_BIT(&(Local_73.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 13);
					iVar4++;
					if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 21))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(iVar6, &iVar1, 1))
							{
								if ((((iVar1 != -1569615261 && iVar1 != 0) && iVar1 != 966099553) && iVar1 != 1233104067) && iVar1 != 126349499)
								{
									if (Local_73.f_32 == -1)
									{
										Local_73.f_32 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32)))
									{
										Local_73.f_32 = -1;
									}
									GAMEPLAY::SET_BIT(&(Local_73.f_23), 4);
									if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_526, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											GAMEPLAY::SET_BIT(&(Local_73.f_23), 12);
										}
									}
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								GAMEPLAY::SET_BIT(&(Local_73.f_24), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iVar6, Local_573, 5f, 5f, 2.5f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_73.f_23), 28);
					iVar4++;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 4))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_146[iVar0], 28))
					{
						GAMEPLAY::SET_BIT(&(Local_73.f_24), 4);
					}
				}
				if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 19))
				{
					if (Local_146[iLocal_547].f_6 > Local_73.f_33)
					{
						Local_73.f_33 = Local_146[iVar0].f_6;
						func_14(&(Local_73.f_34));
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 24))
						{
							if (Local_73.f_33 > (0.55f + 0.2f))
							{
								GAMEPLAY::SET_BIT(&(Local_73.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_73.f_41 != iVar4)
	{
		Local_73.f_41 = iVar4;
	}
}

int func_49()
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
	{
		if ((func_51(iLocal_525) && func_51(func_52(1))) && func_51(func_52(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73))
				{
					if (func_50(&Local_73, 4, iLocal_525, Local_526 - Vector(1f, 0f, 0f), Local_73.f_42, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73), 0, iLocal_755[0], iLocal_761[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73), 2, iLocal_755[1], iLocal_761[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73), 3, iLocal_755[2], iLocal_761[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73), 4, iLocal_755[3], iLocal_761[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_73), 8, iLocal_755[4], iLocal_761[4], 0);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_PED(Local_73), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_73), 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_73), 1, 0);
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_73), 0);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_73), 1024, 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_73), 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_73), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_73), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_73), "XP_Blocker", 1);
						}
						func_392(&uLocal_590, 3, NETWORK::NET_TO_PED(Local_73), &(Local_73.f_46), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
				{
					uVar0 = OBJECT::CREATE_PORTABLE_PICKUP(-1795552418, Local_550, 0, func_52(1));
					if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					{
						Local_73.f_13 = NETWORK::OBJ_TO_NET(uVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_13), true);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_73.f_13), false, 0);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_73.f_13), uLocal_553);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_13), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_73.f_13), 1);
						OBJECT::_0xA08FE5E49BDC39DD(NETWORK::NET_TO_OBJ(Local_73.f_13), -0.2f, 1);
						OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_73.f_13), 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_73.f_13), false, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
				{
					if (func_26(&(Local_73.f_14), func_52(2), Local_554 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_73.f_14), uLocal_557);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_73.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(Local_526));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_73.f_14), true);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_50(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_REGISTER(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
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

int func_51(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_52(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 416176080;
		
		case 1:
			return -1666779307;
		
		case 2:
			return 892543765;
		
		default:
	}
	return 416176080;
}

void func_53()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 20))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11) || GAMEPLAY::IS_BIT_SET(Local_73.f_24, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_566 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_573, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_56();
				func_54();
				func_6(Local_467.f_50, 1, func_7());
				GAMEPLAY::SET_BIT(&(Local_467.f_52), 20);
			}
			else
			{
				if ((GAMEPLAY::IS_BIT_SET(Local_467.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_573, 20f, 20f, 20f, 0, 1, 0))
				{
					func_56();
				}
				GAMEPLAY::SET_BIT(&(Local_467.f_52), 20);
			}
		}
	}
}

void func_54()
{
	iVar0 = func_55(47);
	Global_2414418[iVar0] = 47;
	StringCopy(&(Global_2414418[iVar0].f_18[0]), "-StraightIntoFreemode", 64);
}

int func_55(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414418[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414418[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_56()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
	{
		iVar0 = func_126(1181, -1, 0);
		if (!GAMEPLAY::IS_BIT_SET(iVar0, Local_467.f_50))
		{
			func_124(14, 1, -1);
			GAMEPLAY::SET_BIT(&iVar0, Local_467.f_50);
			func_123(1181, iVar0, -1, 1, 0);
			if (func_122(14, -1) >= 20)
			{
				func_108(44, 1);
			}
			else
			{
				func_107(44, func_122(14, -1));
			}
		}
		func_105(1167, 1, -1);
		func_104(12, 1, -1, 1);
		func_102(19);
		iLocal_783 = 100;
		iLocal_783 = SYSTEM::ROUND((IntToFloat(iLocal_783) * Global_262145.f_4226));
		func_57(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_783, 1, -1, 0);
	}
}

var func_57(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_58(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_58(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_59(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_59(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_101(PLAYER::PLAYER_ID()) || func_100(PLAYER::PLAYER_ID()))
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
	else if (func_97() || func_93(PLAYER::PLAYER_ID()))
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
	if (func_92(uParam2))
	{
	}
	if (func_91())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_89(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_88(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_85(0, &iVar1);
					break;
				
				case 3:
					func_85(1, &iVar1);
					break;
				
				case 1:
					func_81(&iVar1);
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
			func_105(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_70((func_80(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_105(1165, iVar1, -1);
				}
				func_64(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_60((func_62(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_60((func_62(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_60(int iParam0)
{
	if (func_91())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_61(-1804740956, iParam0);
	}
}

void func_61(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_62(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_46(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_63(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_63(-1804740956);
		}
	}
	return 0;
}

int func_63(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_64(int iParam0)
{
	Var0 = { func_69(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_67(func_68(&Var0));
			if (iVar13 == 0)
			{
				func_66(&Global_1387915, iParam0);
				func_65(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_66(&Global_1387916, iParam0);
				func_65(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_66(&Global_1387917, iParam0);
				func_65(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_66(&Global_1387918, iParam0);
				func_65(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_66(&Global_1387919, iParam0);
				func_65(1894078811, Global_1387919);
			}
		}
	}
}

void func_65(int iParam0, var uParam1)
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

void func_66(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_67(int iParam0)
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

int func_68(var uParam0)
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

struct<13> func_69(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_70(int iParam0, int iParam1, int iParam2)
{
	if (func_91())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_78(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_78(-1)])
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
		if (func_77(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_75(iParam0, 1);
		}
		func_74(639, iParam0, -1, 1);
		func_123(640, func_75(iParam0, 1), -1, 1, 0);
		Global_1388060[func_78(-1)] = iParam0;
		func_71(-1109644434, 7, 0);
	}
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	if (func_73(iParam1, iParam2))
	{
		iVar0 = func_72();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_72()
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

int func_73(int iParam0, var uParam1)
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

void func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_78(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_78(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_78(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_78(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_78(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_78(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_78(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_78(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_78(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_78(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_78(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_78(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_78(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_78(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_78(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_78(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_78(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_78(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_78(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_78(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_78(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_78(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_78(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_78(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_78(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_78(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_78(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_78(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_78(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_78(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_78(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_78(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_78(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_78(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_78(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_78(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_78(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_78(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_78(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_78(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_78(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_78(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_78(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_78(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_78(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_78(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_78(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_78(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_78(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_78(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_78(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_78(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_78(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_78(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_78(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_78(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_78(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_78(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_78(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_78(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_78(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_78(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_78(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_78(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_78(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_78(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_78(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_78(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_78(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_78(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_78(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_78(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_78(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_78(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_78(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_78(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_78(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_78(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_78(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_78(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_78(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_78(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_78(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_78(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_78(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_78(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_78(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_78(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_78(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_78(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_78(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_78(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_78(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_78(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_78(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_78(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_78(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_78(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_78(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_78(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_78(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_78(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_78(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_78(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_78(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_76(iParam0, 0);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0)
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

int func_78(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
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

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_78(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_78(-1)];
	}
	return 0;
}

void func_81(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_84(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_83(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_82(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_82(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_82(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_83(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_69(iParam0) };
		Global_2513231 = { func_69(iParam1) };
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

int func_84(int iParam0, int iParam1, int iParam2)
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

void func_85(bool bParam0, int iParam1)
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
				if (func_46(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_83(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_46(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_86(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_82(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_82(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_86(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_87(iParam0), func_87(iParam1));
	return 0f;
}

Vector3 func_87(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_88(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_82(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_89(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_80(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_80(PLAYER::PLAYER_ID());
		}
	}
	if (func_90(8000, 0, 0) > 0)
	{
		if (func_90(8000, 0, 0) < (iParam0 + func_80(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_90(8000, 0, 0) - func_80(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_90(int iParam0, bool bParam1, int iParam2)
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

int func_91()
{
	return 1;
}

int func_92(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0)
{
	return func_94(func_95(iParam0));
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_96(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_97()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_99();
	}
	return func_98(Global_4456448.f_194990);
}

int func_98(int iParam0)
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

var func_99()
{
	return Global_2450632.f_17;
}

bool func_100(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_101(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_102(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_103()].f_6174.f_4111[iVar0] == iParam0)
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

int func_103()
{
	iVar0 = 0;
	return iVar0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_79();
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

void func_105(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_126(iParam0, func_78(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_106(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_74(iParam0, iVar0, iParam2, 1);
	}
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_108(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_109(iParam0, iParam1);
}

int func_109(int iParam0, int iParam1)
{
	if (func_121(14) && !func_120(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31017 != 0 && !Global_76622)
	{
		return 0;
	}
	if (func_119(&Global_4270065))
	{
		if (func_117(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_110(&Global_4270065, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_110(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	func_113(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_111(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_111(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_121(14) && !func_120(iParam1))
	{
		return 0;
	}
	if (func_117(uParam0, iParam1))
	{
		return 0;
	}
	if (func_116(uParam0) < 0f)
	{
		func_115(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_112(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_112(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_113(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_114(uParam0, iVar0);
		iVar0++;
	}
	func_115(uParam0, (Global_4270064 - 0.5f));
}

void func_114(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_115(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_116(var uParam0)
{
	return uParam0->f_80;
}

bool func_117(var uParam0, int iParam1)
{
	return func_118(uParam0, iParam1) != -1;
}

int func_118(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_119(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_121(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_122(int iParam0, int iParam1)
{
	uVar0 = Global_2585280[iParam0][func_78(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_78(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_122(iParam0, func_78(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_125(iParam0, iVar0, iParam2);
}

void func_125(int iParam0, int iParam1, var uParam2)
{
	iVar0 = Global_2585280[iParam0][func_78(uParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, 1);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_78(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_127(var uParam0)
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

void func_128(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_129()
{
	func_251();
	func_221();
	func_172();
	func_53();
	func_170();
	func_169();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_566)
		{
			if (Global_2537071.f_5884.f_1 == 0)
			{
				Global_2537071.f_5884.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_567 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_568)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_569)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2537071.f_5884.f_1 == 1)
		{
			Global_2537071.f_5884.f_1 = 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 31))
	{
		if (func_95(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_573, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				if (!func_38(PLAYER::PLAYER_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
					GAMEPLAY::SET_BIT(&(Local_467.f_52), 31);
				}
			}
		}
	}
	if ((!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 26) && bVar0) && !(func_168(0) || func_167()))
	{
		if (func_165("SNK_MNU", Local_467, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_467.f_52), 26);
		}
	}
	if (!bVar0 && GAMEPLAY::IS_BIT_SET(Local_467.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_467.f_1) && CAM::IS_CAM_ACTIVE(Local_467.f_1)))
		{
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (Local_467.f_51 > 0)
			{
				Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_3 = Local_467.f_51;
				Local_467.f_51 = 0;
			}
			func_408();
			GAMEPLAY::CLEAR_BIT(&(Local_467.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_467.f_1))
			{
				CAM::DESTROY_CAM(Local_467.f_1, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		func_162(1, Local_467);
		GAMEPLAY::CLEAR_BIT(&(Local_467.f_52), 26);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 21))
	{
		if (iVar1 || func_160(PLAYER::PLAYER_PED_ID(), Local_467.f_50))
		{
			GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_157();
		func_151();
		func_145();
		func_141(1);
		func_134();
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
		if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_7, 0))
		{
			PLAYER::_0xB45EFF719D8427A6(Local_73.f_71);
			func_132(Local_573, func_133(30), 0);
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_573, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_141(0);
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_7, 0))
		{
			PLAYER::_0x0032A6DBA562C518();
			func_130(Local_573, func_133(30), "");
			GAMEPLAY::SET_BIT(&(Global_2537071.f_7), 0);
		}
	}
	if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 22) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 23)) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_130(struct<3> Param0, char* sParam3, char* sParam4)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2537071.f_3968[iVar0].f_4), sParam3))
			{
				if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2537071.f_3968[iVar0].f_4)))
				{
					Global_2537071.f_3968[iVar0] = 1;
					Global_2537071.f_3968[iVar0].f_1 = { Param0 };
					StringCopy(&(Global_2537071.f_3968[iVar0].f_4), sParam3, 24);
					StringCopy(&(Global_2537071.f_3968[iVar0].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_131(Global_2537071.f_3968[iVar0].f_1, Param0, 0))
			{
				Global_2537071.f_3968[iVar0] = 1;
				Global_2537071.f_3968[iVar0].f_1 = { Param0 };
				StringCopy(&(Global_2537071.f_3968[iVar0].f_4), sParam3, 24);
				StringCopy(&(Global_2537071.f_3968[iVar0].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_131(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_132(struct<3> Param0, char* sParam3, int iParam4)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2537071.f_3968[iVar0].f_4), sParam3))
			{
				if (iParam4 || func_131(Global_2537071.f_3968[iVar0].f_1, Param0, 0))
				{
					Global_2537071.f_3968[iVar0] = 0;
					Global_2537071.f_3968[iVar0].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2537071.f_3968[iVar0].f_4), "", 24);
					StringCopy(&(Global_2537071.f_3968[iVar0].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_133(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_134()
{
	GAMEPLAY::CLEAR_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 28);
	if (!func_393(Local_73) && func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if ((((iVar0 != -1569615261 && iVar0 != 966099553) && iVar0 != 1233104067) && iVar0 != 126349499) && iVar0 != -1951375401)
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_73), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_73), 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73)))
				{
					if (!(func_168(0) || func_167()) && ((!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154) || func_95(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_136(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
							{
								func_135(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 1);
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 8))
							{
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 8);
							}
						}
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 28);
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 28))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != 126349499)
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_524 = "hold_up_head_additive_pistol";
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_524, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_524 = "hold_up_head_additive_rifle";
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_524, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_524 = "";
					}
					GAMEPLAY::SET_BIT(&(Local_467.f_52), 28);
				}
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sLocal_524))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_524, 3))
			{
				AI::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_524, -1056964608);
			}
		}
		GAMEPLAY::CLEAR_BIT(&(Local_467.f_52), 28);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_25, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5, 3))
		{
			if (!func_393(Local_73.f_15) && func_46(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
				{
					if ((((iVar3 != -1569615261 && iVar3 != 966099553) && iVar3 != 1233104067) && iVar3 != 126349499) && !(func_168(0) || func_167()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73.f_15)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73.f_15)))
						{
							if (func_136(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_73.f_15)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_135(int iParam0)
{
	Var0 = -1971399614;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_136(int iParam0, int iParam1)
{
	if (func_46(iParam0, 1, 1))
	{
		Var0 = { func_87(iParam0) };
	}
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	Var9 = { Var3 - Var0 };
	if (!PED::IS_PED_INJURED(iParam1))
	{
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 7f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9.z = 0f;
	Var12.z = 0f;
	fVar15 = func_137(Var9, Var12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_137(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

int func_138(int iParam0)
{
	if (func_40(iParam0))
	{
		return 1;
	}
	if (func_139(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_139(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_140(iParam0, 9);
	}
	return 0;
}

bool func_140(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

void func_141(int iParam0)
{
	if (PLAYER::PLAYER_ID() != Global_2537071.f_5049 && !func_38(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1))
				{
					if ((((iVar2 != -1569615261 && iVar2 != 0) && iVar2 != 966099553) && iVar2 != 1233104067) && iVar2 != 126349499)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_526, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 5)) || (iVar0 == 1 && Local_73.f_3 >= 3)) || (iVar0 == 1 && GAMEPLAY::IS_BIT_SET(Local_73.f_24, 16))) || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 12))
				{
					if (((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 12) || Local_73.f_3 >= 3) || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 12)) || (iVar0 == 1 && GAMEPLAY::IS_BIT_SET(Local_73.f_24, 16)))
					{
						Global_2425662[PLAYER::PLAYER_ID()].f_36++;
						func_14(&(Global_2439138.f_3748));
						func_19(&(Global_2439138.f_3748), 0, 0);
						if (Global_2425662[PLAYER::PLAYER_ID()].f_36 <= 2)
						{
							if (func_144())
							{
								if (func_143() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_2425662[PLAYER::PLAYER_ID()].f_36 >= 5)
						{
							if (func_144())
							{
								if (func_143() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_144())
						{
							if (func_143() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
						{
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 2);
						}
						GAMEPLAY::SET_BIT(&(Local_467.f_52), 6);
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 25);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 27) && !GAMEPLAY::IS_BIT_SET(Local_467.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_18(&uLocal_564, 2000, 0) || PED::_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						GAMEPLAY::SET_BIT(&(Local_467.f_52), 27);
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 27);
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 25);
						if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
						{
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 2);
						}
					}
				}
				else if (func_142(&uLocal_564))
				{
					func_14(&uLocal_564);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 24))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_467.f_52, 31))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					GAMEPLAY::SET_BIT(&(Local_467.f_52), 24);
					if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
					{
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 2);
					}
				}
			}
		}
	}
}

bool func_142(var uParam0)
{
	return uParam0->f_1;
}

int func_143()
{
	return Global_262145.f_12597;
}

int func_144()
{
	if (func_139(PLAYER::PLAYER_ID()) && func_95(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_145()
{
	if (func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 23) && GAMEPLAY::IS_BIT_SET(Local_73.f_23, 17))
		{
			if (!func_393(Local_73))
			{
				iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
				if (iLocal_533 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
					{
						if ((!GAMEPLAY::IS_BIT_SET(Global_1653350, 15) && func_150()) && func_149())
						{
							GAMEPLAY::SET_BIT(&Global_1653350, 15);
						}
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_126(1190, -1, 0);
							if (!GAMEPLAY::IS_BIT_SET(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_566)
								{
									func_148("FHU_HELP3", -1);
									GAMEPLAY::SET_BIT(&iVar0, 3);
									func_123(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iVar0, 5) || !GAMEPLAY::IS_BIT_SET(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_566)
								{
									func_148("FHU_HELP4", -1);
									GAMEPLAY::SET_BIT(&iVar0, 5);
									func_123(1190, iVar0, -1, 1, 0);
									GAMEPLAY::SET_BIT(&(Local_467.f_52), 23);
								}
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_467.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((((!func_39(PLAYER::PLAYER_ID(), 146) && !func_147()) && func_95(PLAYER::PLAYER_ID()) != 167) && func_95(PLAYER::PLAYER_ID()) != 190) && func_95(PLAYER::PLAYER_ID()) != 191) && func_95(PLAYER::PLAYER_ID()) != 250) && func_95(PLAYER::PLAYER_ID()) != 237) && func_95(PLAYER::PLAYER_ID()) != 238) && !func_38(PLAYER::PLAYER_ID())) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_467.f_53, 1))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_393(Local_73) || Local_73.f_3 > 7) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11)) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_534, 1.5f) == 0)
					{
						iVar1 = func_126(1190, -1, 0);
						if (!GAMEPLAY::IS_BIT_SET(iVar1, 20) || !GAMEPLAY::IS_BIT_SET(iVar1, 21))
						{
							func_148("FHU_HELPM", -1);
							if (!GAMEPLAY::IS_BIT_SET(iVar1, 20))
							{
								GAMEPLAY::SET_BIT(&iVar1, 20);
							}
							else
							{
								GAMEPLAY::SET_BIT(&iVar1, 21);
							}
							func_123(1190, iVar1, -1, 1, 0);
							GAMEPLAY::SET_BIT(&(Local_467.f_53), 1);
						}
						else
						{
							GAMEPLAY::SET_BIT(&(Local_467.f_53), 1);
						}
					}
				}
			}
			else if (func_146("FHU_HELPM"))
			{
				if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11)) || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 5))
				{
					UI::CLEAR_HELP(1);
				}
			}
		}
	}
}

bool func_146(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_147()
{
	return Global_1573342;
}

void func_148(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_149()
{
	return GAMEPLAY::IS_BIT_SET(Global_2537071.f_1732, 21);
}

bool func_150()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_146, 3);
}

void func_151()
{
	if (Local_73.f_3 == 4)
	{
		if (func_46(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_393(Local_73))
			{
				iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
				if (iLocal_533 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_152(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_156(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_152(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_153(iParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
}

void func_153(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_155(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_154(0, iVar0);
		Global_1378678.f_1135[iVar0] = uParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = uParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = uParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

void func_154(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_155(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_157()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_467.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_158());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_158()))
		{
			GAMEPLAY::SET_BIT(&(Local_467.f_53), 2);
		}
	}
}

char* func_158()
{
	if (func_159(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_159(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2425662[iParam0].f_230;
}

int func_160(int iParam0, int iParam1)
{
	Var0 = { 0f, 0f, 0f };
	Var3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_161(iParam1, &Var0, &Var3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Var0, Var3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_162(bool bParam0, int iParam1)
{
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22350.f_8417)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_22350.f_8417 = 0;
	}
	UI::_0x55598D21339CB998(0f);
	if (Global_22350.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_22350.f_5628[iVar0] = 0;
	}
	if (Global_22350.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_22350.f_5614[iVar0] = 0;
	}
	if (Global_22350.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_22350.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_163(&(Global_22350.f_5660[iVar0]));
		Global_22350.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22350.f_5721[iVar0] = 0;
	}
}

void func_163(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_164(var uParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_22350.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_22350.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_22350.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

bool func_165(char* sParam0, int iParam1, bool bParam2)
{
	if (!func_164(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22350.f_5635[iVar0]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_5635[iVar0])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_22350.f_5635[iVar0]), 9);
		Global_22350.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_22350.f_5635[iVar0]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_22350.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_22350.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22350.f_5660[iVar0].f_1), "instructional_buttons", 24);
	bVar2 = func_166(&(Global_22350.f_5660[iVar0]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_166(var uParam0)
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
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
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

int func_167()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
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

void func_169()
{
	if (PLAYER::PLAYER_ID() != Global_2537071.f_5049 && !func_38(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 24))
		{
			if (Local_73.f_72 == PLAYER::PLAYER_ID() || (GAMEPLAY::IS_BIT_SET(Local_467.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_576, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_393(Local_73))
				{
					if (func_144())
					{
						if (func_143() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_143()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					GAMEPLAY::SET_BIT(&(Local_467.f_52), 24);
					if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 1))
					{
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 2);
					}
				}
			}
		}
	}
}

int func_170()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 0))
	{
		return 0;
	}
	if (func_393(Local_73.f_15))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_782))
		{
			UI::REMOVE_BLIP(&uLocal_782);
		}
		return 0;
	}
	if (Local_73.f_66 == 4)
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_782))
		{
			uLocal_782 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_73.f_15));
			UI::SET_BLIP_COLOUR(uLocal_782, 1);
			UI::SET_BLIP_SCALE(uLocal_782, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_15))
	{
		return 0;
	}
	switch (Local_73.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 713668775) != 0)
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 713668775) != 1)
				{
					if (func_46(PLAYER::PLAYER_ID(), 1, 1))
					{
						AI::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_73.f_15), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 5) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 1227113341) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 1227113341) != 1)
				{
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_73.f_15), PLAYER::PLAYER_PED_ID(), 10000);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5), 0);
				}
			}
			if ((!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 6) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5, 1)) && !func_171())
			{
				func_392(&uLocal_590, 4, NETWORK::NET_TO_PED(Local_73.f_15), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_73.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5), 1);
			}
			break;
		
		case 4:
			if ((!GAMEPLAY::IS_BIT_SET(Local_73.f_25, 7) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5, 2)) && !func_171())
			{
				func_392(&uLocal_590, 4, NETWORK::NET_TO_PED(Local_73.f_15), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_73.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5), 2);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_25, 7) || GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_5, 2))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), -1442466670) != 1)
				{
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73.f_15));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73.f_15), Global_1575006);
					AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_73.f_15), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 242628503) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), 242628503) != 1)
			{
				AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73.f_15));
				AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73.f_15), uLocal_542);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73.f_15), 1);
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73.f_15), -875674219) != 0)
			{
				if (func_18(&uLocal_562, 5000, 0))
				{
					func_14(&uLocal_562);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_73.f_15), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_171()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_172()
{
	if (Local_73.f_3 == 4)
	{
		if ((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 10) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 4)) && GAMEPLAY::IS_BIT_SET(Local_73.f_23, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_13) || (!NETWORK::_0xA1607996431332DF(Local_73.f_13) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_393(Local_73))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_73.f_13), true, 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_73.f_13), 1);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 0f, 0f, -1f);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_73.f_13), true, 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_73.f_13), 1);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 0f, 0f, -1f);
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 4);
					}
				}
			}
		}
	}
	func_173();
}

void func_173()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_73.f_13), 0))
		{
			if ((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 5)) && Local_73.f_37 > 0f)
			{
				if (((func_220() || func_219(0.87f)) || Local_73.f_3 >= 5) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 10))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_13))
						{
							OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_73.f_13), 0, 0);
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 13);
						}
						if (func_95(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::_0x0BF3B3BD47D79C08(func_52(1), 1);
						}
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_73.f_13), PLAYER::PLAYER_PED_ID()))
					{
						Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_7, &(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_7.f_2), 0, 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_13))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 1, 1);
							func_47(&(Local_73.f_13));
						}
						iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iLocal_559, iLocal_560);
						if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_73.f_37));
						}
						if (Local_73.f_4 > 1000)
						{
							Local_73.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_73.f_4);
						iVar0 = func_218(iVar0, 1);
						if (iVar0 > Global_262145.f_167)
						{
							iVar0 = Global_262145.f_167;
						}
						if (func_217(PLAYER::PLAYER_ID()) && func_215(func_216(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4227 > 1f)
							{
								Global_262145.f_4227 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4227));
						}
						if (iVar0 > 0)
						{
							if (func_214())
							{
								func_203(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_199(iVar0, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2537071.f_5884 = (Global_2537071.f_5884 + iVar0);
						Global_2537071.f_5884.f_2 = 1;
						Global_2537071.f_5884.f_5 = 1;
						iLocal_784 = (iLocal_784 + iVar0);
						func_198(3);
						if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 5))
						{
							func_197(Local_73.f_38, iVar0);
						}
						else
						{
							func_188(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_187(1, iVar0);
						if (func_183(1))
						{
							func_174(4);
						}
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 5);
						GAMEPLAY::SET_BIT(&(Local_467.f_53), 6);
					}
				}
			}
		}
	}
}

void func_174(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17692;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17682;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17693;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17685;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17681;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17696;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17697;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17700;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17701;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17694;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18583;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18582;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_181(func_182()), func_179(func_182()), func_178(), func_177(), iParam0, iVar0);
	}
	func_176(iVar0);
	func_175(iVar0);
}

void func_175(int iParam0)
{
	iVar0 = func_126(3968, -1, 0);
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
	func_123(3968, iVar0, -1, 1, 0);
}

void func_176(int iParam0)
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

int func_177()
{
	if (Global_1674356.f_3 != 0)
	{
		return Global_1674356.f_3;
	}
	return -1;
}

int func_178()
{
	if (Global_1674356.f_2 != 0)
	{
		return Global_1674356.f_2;
	}
	return -1;
}

int func_179(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[1];
}

int func_180()
{
	return -1;
}

int func_181(int iParam0)
{
	if (iParam0 == func_180())
	{
		return -1;
	}
	return Global_1628237[iParam0].f_11.f_8[0];
}

int func_182()
{
	return Global_1628237[PLAYER::PLAYER_ID()].f_11;
}

bool func_183(bool bParam0)
{
	return func_184(PLAYER::PLAYER_ID(), bParam0);
}

int func_184(int iParam0, bool bParam1)
{
	return func_185(iParam0, bParam1, 1);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == func_180())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_186(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628237[iParam0].f_11;
	if (iVar0 != func_180() && Global_1628237[iVar0].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != func_180())
	{
		if (Global_1628237[iParam0].f_11 != func_180())
		{
			if (Global_1628237[iParam0].f_11 == iParam0 && Global_1628237[iParam0].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1)
{
	Var0 = { func_195(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_194(PLAYER::PLAYER_PED_ID()))
	{
		func_193(1);
	}
	func_189(Var0, iParam1, 7, 0, 0);
}

void func_189(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
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
			Global_2439138.f_1290[iVar1].f_4 = func_192(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_191();
			Global_2439138.f_1290[iVar1].f_10 = func_190();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_190()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_191()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_192(struct<3> Param0, var uParam3, var uParam4)
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

void func_193(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

int func_194(int iParam0)
{
	return iParam0;
}

Vector3 func_195(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_196(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_196(var uParam0)
{
	return uParam0;
}

void func_197(struct<3> Param0, int iParam3)
{
	func_189(Param0, iParam3, 6, 0, 0);
}

void func_198(int iParam0)
{
	Global_2439138.f_1893 = iParam0;
}

void func_199(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_200(iParam0, iParam1, iParam2, fParam3);
}

void func_200(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_201(iParam0, iParam1, iParam2, fParam3);
}

void func_201(int iParam0, int iParam1, int iParam2, float fParam3)
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
		func_202(iVar1, 0);
	}
}

void func_202(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_203(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_214())
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
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_204(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_204(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_204(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_79()) || UNK3::_0x810E8431C0614BF9())
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
			*uParam0 = func_211(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_210(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_205(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_205(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_206(iParam0);
	}
}

void func_206(int iParam0)
{
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_209(iParam0))
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
		func_207(&(Global_4263954[iParam0]));
	}
}

void func_207(var uParam0)
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
	func_208(&(uParam0->f_14));
	func_208(&(uParam0->f_14.f_13));
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

void func_208(var uParam0)
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

int func_209(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_210(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_211(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_214())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = iParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = iParam2;
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
			if (iParam1 == -1135378931 && bParam10)
			{
				func_212(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_212(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
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
	iVar36 = func_8(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_213();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_213()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_214()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

float func_215(int iParam0)
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

int func_216(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0];
	}
	return -1;
}

int func_217(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1628237[iVar0] != -1;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_219(float fParam0)
{
	iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
	if (iLocal_533 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_220()
{
	iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
	if (iLocal_533 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_221()
{
	func_222();
}

int func_222()
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73))
	{
		return 0;
	}
	if (func_393(Local_73))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_73));
			GAMEPLAY::SET_BIT(&(Local_467.f_53), 3);
		}
		return 0;
	}
	switch (Local_73.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_73), 71, 1);
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 12))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 13))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 17))
					{
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
						AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_228(10);
						}
						else if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 11))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 12))
								{
									func_228(13);
								}
								else
								{
									func_228(20);
								}
							}
							else
							{
								func_228(17);
							}
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 25);
						}
						else if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 12))
							{
								func_228(0);
							}
							else
							{
								func_228(18);
							}
						}
						else
						{
							func_228(15);
						}
						GAMEPLAY::SET_BIT(&(Local_467.f_52), 17);
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 0)
					{
						if (func_18(&uLocal_562, 5000, 0))
						{
							func_14(&uLocal_562);
							if (!iLocal_523)
							{
								AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_73), PLAYER::PLAYER_PED_ID(), 10000);
							}
							AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_73), 71, 1);
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 0))
			{
				uVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_73.f_32 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32));
						uVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), uVar1, -1, 0, 2);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
					AI::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_73), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 0);
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 0)
			{
				if (func_18(&uLocal_562, 5000, 0))
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_73.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					func_14(&uLocal_562);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_73), iVar1, 10000);
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), iVar1, -1, 0, 2);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 16))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_73), 71, 1);
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 25))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 1920390111) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 1920390111) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_73), 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_73), 8, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_73), 16, 1);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
					AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_73), Local_73.f_42, -1);
					GAMEPLAY::SET_BIT(&(Local_467.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 17) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2537071.f_8 = 1;
				}
				uVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2537071.f_9 != func_180())
				{
					if (func_46(Global_2537071.f_9, 1, 1))
					{
						uVar2 = PLAYER::GET_PLAYER_PED(Global_2537071.f_9);
					}
				}
				AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), uVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_73), "mood_stressed_1", 0);
				GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 3);
			}
			else
			{
				iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
				if (iLocal_533 != -1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
					{
						fLocal_767 = (Local_73.f_33 + 0.6f);
						if (fLocal_767 < 0.75f)
						{
							fLocal_767 = 0.75f;
						}
						if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 4))
						{
							fLocal_767 = (fLocal_767 + 0.25f);
						}
						if (fLocal_767 > 1.75f)
						{
							fLocal_767 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_533, fLocal_767);
					}
				}
			}
			break;
		
		case 5:
			if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 10))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 242628503) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), 242628503) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
					{
						iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
						if ((iLocal_533 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533)) || iLocal_533 == -1)
						{
							AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_542);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 10);
						}
					}
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -875674219) != 0)
			{
				if (func_18(&uLocal_562, 5000, 0))
				{
					func_14(&uLocal_562);
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_73.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_73), iVar1, 10000);
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_73), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 10))
			{
				if ((iLocal_533 == -1 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) >= 0.95f)
				{
					func_227();
					iVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_73.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32)))
						{
							iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_73.f_32));
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
						}
					}
					AI::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_73), -1, iVar1, -1, 1);
					PED::_0x2208438012482A1A(NETWORK::NET_TO_PED(Local_73), 0, 0);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 10);
				}
			}
			break;
		
		case 7:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -1442466670) != 1)
			{
				if (!func_171())
				{
					func_226();
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
					AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_73), 20f, 0);
					func_228(4);
				}
			}
			break;
		
		case 8:
			if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 9))
			{
				func_227();
				iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
				if ((iLocal_533 != -1 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533)) || iLocal_533 == -1)
				{
					if ((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 27) && !func_37()) && !func_36())
					{
						if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 2))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 3))
							{
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_544);
								iVar3 = 1;
							}
							else
							{
								func_226();
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_545);
								iVar3 = 1;
							}
						}
					}
					else
					{
						AI::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_73), Local_529, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_228(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
						func_6(Local_467.f_50, 1, func_7());
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 9);
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 19))
			{
				iVar4 = AI::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_73));
				if (iVar4 == 3)
				{
					AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_73));
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 19);
				}
				else if (iVar4 == 2)
				{
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
					if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 3))
					{
						AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_546);
					}
					else
					{
						AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_73), 20f, 0);
					}
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 19);
				}
			}
			break;
	}
	func_223();
	return 1;
}

void func_223()
{
	if ((Local_73.f_3 != 8 && Local_73.f_3 != 7) && Local_73.f_2 == 3)
	{
		if ((((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 14) || !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 15)) || !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 22)) || !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 23)) || !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 30))
		{
			iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
			if (iLocal_533 != -1)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
				{
					if (!func_171())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 14) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 6))
						{
							func_228(2);
							GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 6);
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 15) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_533) > 0.87f)
							{
								func_228(3);
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 7);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 22) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 22))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 24) && !func_171())
							{
								func_228(11);
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 22);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 23) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 23))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 25) && !func_171())
							{
								func_228(12);
								GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 23);
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 9))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 26) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 24))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7))
				{
					if (!func_171())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 12))
							{
								func_228(1);
							}
							else
							{
								func_228(19);
							}
						}
						else
						{
							func_228(16);
						}
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 24);
						return;
					}
					else
					{
						func_224();
						return;
					}
				}
			}
			if (((!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 30) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 25)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 0) && !func_171())
				{
					if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7) && GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4)) || (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 7) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 4)))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 12))
							{
								func_228(13);
							}
							else
							{
								func_228(20);
							}
						}
						else
						{
							func_228(17);
						}
						GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 25);
						return;
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_23, 31) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 26))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 1) && !func_171())
				{
					func_228(14);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 26);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 9) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 31))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 8) && !func_171())
				{
					func_228(22);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 31);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_1, 3) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_1, 3))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_1, 2) && !func_171())
				{
					func_228(24);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_1), 3);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 14) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 20))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 13) && !func_171())
				{
					func_228(23);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 20);
					return;
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 6) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 29))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_24, 5))
		{
			if (!func_171())
			{
				func_228(21);
				GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 29);
				return;
			}
		}
	}
}

void func_224()
{
	Global_19671 = 0;
	func_225();
}

void func_225()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_226()
{
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 453432689, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 1593441988, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 324215364, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 2144741730, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), -1786099057, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), -1074790547, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 2017895192, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 487013001, 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_467.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_73), Global_1575006);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_73), 1);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_73), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_73), Local_526, 20f, 0, 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
}

void func_227()
{
	iLocal_533 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(Local_73.f_29);
	if (iLocal_533 != -1)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_533))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_73.f_29);
		}
	}
}

void func_228(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 13))
	{
		if (!func_393(Local_73))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73) || (!NETWORK::_0xA1607996431332DF(Local_73) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_73)))
				{
					if (Local_73.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_73.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_73.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1))
						{
							if ((((((iVar4 == -1569615261 || iVar4 == 0) || iVar4 == 966099553) || iVar4 == 1233104067) || iVar4 == 126349499) || func_250(iVar4)) || func_249(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_392(&uLocal_590, 3, NETWORK::NET_TO_PED(Local_73), &(Local_73.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_GREET", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_229(&uLocal_590, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_229(&uLocal_590, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_229(&uLocal_590, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_BRAVE", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_REMOVE_VEHICLE", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_REACT_TO_SHOUT", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_HURRYING", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_NO_COPS", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_THREATENED", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_GREET_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_SCARED_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_NO_COPS_START", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_GREET_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_SCARED_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_NO_COPS_END", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_COPS_ARRIVED", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_SELL", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_NO_ENTRY", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SHOP_STEAL", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_73), "SCREAM_PANIC", &(Local_73.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 1;
	return func_230(sParam2, iParam3, 0);
}

int func_230(char* sParam0, int iParam1, bool bParam2)
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
					func_247();
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
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_245();
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
				func_238();
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
				if (func_237())
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
			if (func_236())
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
			func_235();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_234();
		func_231();
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
		func_247();
	}
	return 0;
}

void func_231()
{
	if (!func_232())
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

int func_232()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_180())
	{
		return 0;
	}
	if (func_233(PLAYER::PLAYER_ID()))
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

bool func_233(int iParam0)
{
	return func_140(iParam0, 20);
}

void func_234()
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

void func_235()
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

int func_236()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_237()
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

void func_238()
{
	if (func_121(14))
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
		Global_19486 = func_239();
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

var func_239()
{
	func_240();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_240()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_243(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_242(PLAYER::PLAYER_PED_ID());
			if (func_241(iVar0) && (!func_121(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_241(Global_111638.f_2358.f_539.f_4321))
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

bool func_241(int iParam0)
{
	return iParam0 < 3;
}

int func_242(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_243(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_243(int iParam0)
{
	if (func_241(iParam0))
	{
		return func_244(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_244(int iParam0)
{
	return Global_1798[iParam0];
}

void func_245()
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

bool func_246(int iParam0, int iParam1)
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

void func_247()
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

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 615608432:
		case -37975472:
		case -1813897027:
		case 741814745:
		case -1420407917:
			return 1;
			break;
		
		case -1169823560:
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case -1716189206:
		case -1786099057:
		case 1737195953:
		case 1317494643:
		case 1141786504:
		case -2067956739:
		case -102323637:
		case -1834847097:
		case -656458692:
		case -102973651:
		case -581044007:
		case -538741184:
		case -853065399:
		case -1810795771:
		case 419712736:
		case 940833800:
			return 1;
		
		default:
	}
	return 0;
}

void func_251()
{
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0);
	if (Local_73.f_43 != iVar0)
	{
		if (Local_73.f_43 < iVar0 || func_258(Local_73.f_43, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_73.f_43);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0);
	if (Local_73.f_44 != iVar0)
	{
		if (Local_73.f_44 < iVar0 || func_252(Local_73.f_44, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_73.f_44);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_1389296, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1590535[PLAYER::PLAYER_ID()] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
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

int func_256(int iParam0, bool bParam1)
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

int func_257(int iParam0)
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

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()
{
	switch (iLocal_785)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Local_467.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
				{
					if (func_265(Local_791))
					{
						Local_791 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_73.f_14), 0f, -0.5f, 0f) };
						GAMEPLAY::SET_BIT(&(Local_467.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_791, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_393(Local_73) || Local_73.f_3 > 7)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_534, 1.5f) == 0)
			{
				if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !func_168(0)) && !func_264()) && !UI::IS_PAUSE_MENU_ACTIVE()) && !func_39(PLAYER::PLAYER_ID(), 146)) && !func_38(PLAYER::PLAYER_ID())) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14)) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
				{
					func_148("FHU_MANR", -1);
					Global_2537071.f_5884.f_4 = 1;
					iLocal_785 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!GAMEPLAY::IS_BIT_SET(Local_73.f_24, 16) && !GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 12)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_73.f_23, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_791, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154))
			{
				if (((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51) && !func_263(0)) && !func_264()) && !UI::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_146("FHU_MANR"))
					{
						UI::CLEAR_HELP(1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 640);
					GAMEPLAY::SET_BIT(&(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()]), 12);
					iLocal_785 = 2;
				}
				else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_790 == 0)
					{
						func_260(&iLocal_790, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_146("FHU_MANR"))
			{
				UI::CLEAR_HELP(1);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Local_791.z = (Var3.z - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_791, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Local_554.x - Local_791.x), (Local_554.y - Local_791.y)));
				AI::CLEAR_SEQUENCE_TASK(&uVar6);
				AI::OPEN_SEQUENCE_TASK(&uVar6);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				AI::CLOSE_SEQUENCE_TASK(uVar6);
				AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_789, 1);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				}
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_786))
				{
					uLocal_786 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_786, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_786, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_786, 35f);
				CAM::SHAKE_CAM(uLocal_786, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_786, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_785 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_787))
				{
					uLocal_787 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_787, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_787, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_787, 35f);
				CAM::SHAKE_CAM(uLocal_787, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_787, uLocal_786, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			iLocal_785 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_787))
			{
				iLocal_785 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_788)
						{
							iVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_559) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_560) * 0.75f) / 4f));
							iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iVar7, iVar8 + 1);
							iVar1 = func_218(iVar1, 1);
							if (iVar1 > (Global_262145.f_167 / 4))
							{
								iVar1 = (Global_262145.f_167 / 4);
							}
							if (func_217(PLAYER::PLAYER_ID()) && func_215(func_216(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4227 > 1f)
								{
									Global_262145.f_4227 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_4227));
							}
							if (iVar1 > 0)
							{
								if (func_214())
								{
									func_203(1734805203, iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_199(iVar1, 1, 1, 1092616192);
									NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2537071.f_5884 = (Global_2537071.f_5884 + iVar1);
							iLocal_784 = (iLocal_784 + iVar1);
							func_187(1, iLocal_784);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_788 = 1;
						}
					}
					else if (iLocal_788)
					{
						iLocal_788 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_789 != -1569615261 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_789, 1);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(uLocal_786))
			{
				CAM::DESTROY_CAM(uLocal_786, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_787))
			{
				CAM::DESTROY_CAM(uLocal_787, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Global_2537071.f_5884.f_2 = 1;
			Global_2537071.f_5884.f_5 = 1;
			if (func_183(1))
			{
				func_174(4);
			}
			iLocal_785 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(uLocal_787, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_785 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_261(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

void func_261(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_262(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
			{
				if (Global_19485 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		if (Global_19485 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_19486.f_1 > 3)
	{
		if (Global_19485 == 1)
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

bool func_264()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_265(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, struct<3> Param4, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_390(&(uParam7->f_5))) || (func_142(&(Global_2537071.f_10)) && !func_389(Global_2537071.f_10, 300000, 0)))
	{
		if (func_142(&(Global_2537071.f_10)))
		{
			if ((GAMEPLAY::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_142(&(Global_2537071.f_10)))
			{
				func_19(&(Global_2537071.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_142(&(Global_2537071.f_10)))
		{
			func_14(&(Global_2537071.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((GAMEPLAY::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_46(PLAYER::PLAYER_ID(), 1, 1)) && GAMEPLAY::IS_BIT_SET(uParam0->f_52, 26)) && !func_388(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_393(*uParam7))
	{
		iVar8 = 0;
		if ((UI::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::_0x2EAC52B4019E2782())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_387(uParam0, &(uParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!UI::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_138(PLAYER::PLAYER_ID()) || func_95(PLAYER::PLAYER_ID()) == 154)) && !func_386(PLAYER::PLAYER_ID(), 21))
				{
					if (func_385(*uParam0, &uParam1, Param4.z, &(uParam0->f_16[0]), &(uParam0->f_16[1]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), 1) };
						if ((GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var2, uParam0->f_23, 1) < 5f && GAMEPLAY::ABSF((Var2.z - Var5.z)) < 0.25f) || func_437(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0], uParam0->f_16[1], uParam0->f_26, 0, 1, 0) || func_437(1))
							{
								if (PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_437(1))
								{
									if (uParam0->f_34)
									{
										if (func_437(1))
										{
											func_407();
										}
										if (((!func_146("SHR_HOLDUP_1") && !func_146("SHR_MENU")) && !func_384()) && func_383())
										{
											func_148("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_437(1))
										{
										}
										uParam0->f_14 = -1;
										func_260(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[0], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_16[1], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(Var2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_146("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					if (func_40(PLAYER::PLAYER_ID()))
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_53, 4))
						{
							func_148("SHR_FM_CRIT", -1);
							unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
							GAMEPLAY::SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), 1) };
				if ((!PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || GAMEPLAY::ABSF((Var2.z - Var5.z)) >= 0.25f) && !func_437(1))
				{
					if (func_146("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (UI::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_146("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_168(0) || func_167())
				{
					if (func_146("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					func_162(1, *uParam0);
					GAMEPLAY::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_382(uParam0->f_14, 1) || func_437(1))
					{
						if (func_437(1))
						{
							func_407();
						}
						if (func_146("SHR_MENU"))
						{
							UI::CLEAR_HELP(1);
						}
						func_380(&(uParam0->f_44));
						func_261(&(uParam0->f_14));
						func_374(0, 0);
						GAMEPLAY::SET_BIT(&(uParam0->f_53), 7);
						func_425(PLAYER::PLAYER_ID(), 0, 66048, 0);
						UI::_0xA8FDB297A8D25FBA();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_393(*uParam7))
						{
							AI::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 1);
						}
						func_373();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_372(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &uVar10);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, uVar10);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_395(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				uParam0->f_13 = 6;
				func_371(0, 0);
				func_370(1, 1, 0, 0, 0);
				func_369(1, 2, 1, 1, 1);
				func_368("SNK_ITEM");
				if (!bParam10)
				{
					func_366(1, uParam0->f_37, uParam0->f_37);
				}
				iVar11 = 0;
				while (iVar11 < uParam0->f_13)
				{
					func_361(iVar11, func_365(iVar11), 0, 1, 0, 0);
					if (uParam7->f_5[iVar11] >= 10 || ((func_142(&(Global_2537071.f_12[iVar11])) && !func_389(Global_2537071.f_12[iVar11], 150000, 0)) && *uParam0 == Global_2537071.f_27))
					{
						func_361(iVar11, "", 1, 1, 0, 0);
						func_360(15, 0);
						if (func_142(&(Global_2537071.f_12[iVar11])) && !func_389(Global_2537071.f_12[iVar11], 150000, 0))
						{
							uParam7->f_5[iVar11] = 10;
						}
						if (!func_142(&(Global_2537071.f_12[iVar11])))
						{
							Global_2537071.f_27 = *uParam0;
							func_19(&(Global_2537071.f_12[iVar11]), 0, 0);
						}
					}
					else if (func_357(iVar11))
					{
						func_361(iVar11, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam10)
					{
						func_361(iVar11, "ITEM_COST", 1, 1, 0, 0);
						func_353(func_356(uParam0, iVar11), 0);
					}
					else
					{
						func_361(iVar11, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar11++;
				}
				func_352(0);
				func_351(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_350("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_350("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_350("SNK_SOUT", 0, 0);
				}
				else
				{
					func_350(func_349(uParam0->f_12), 0, 0);
				}
				func_348(201, "ITEM_SELECT", -1, 0);
				func_348(202, "ITEM_BACK", -1, 0);
				if (!bParam10)
				{
					func_348(203, "SNK_LIFT", -1, 0);
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 7)
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_425(PLAYER::PLAYER_ID(), 0, 98816, 0);
						}
						else
						{
							func_425(PLAYER::PLAYER_ID(), 0, 256, 0);
						}
						GAMEPLAY::SET_BIT(&(uParam8->f_1), 1);
					}
				}
				iVar8 = 0;
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
					{
						CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 237, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 238, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 241, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_310(0, 0, 0, 1);
						func_309(0, -1, 1);
						if (func_308())
						{
							if (Global_4268497 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4268497;
								func_351(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar9 = func_349(uParam0->f_12);
								if (UI::DOES_TEXT_LABEL_EXIST(sVar9))
								{
									func_350(sVar9, 0, 0);
								}
							}
							else
							{
								iVar8 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_298(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && GAMEPLAY::IS_BIT_SET(uParam7->f_1, 0)) && GAMEPLAY::IS_BIT_SET(uParam8->f_1, 0))
				{
					GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 0);
				}
				if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || iVar8 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_380(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_214())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_356(uParam0, uParam0->f_12);
							}
							func_286(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_356(uParam0, uParam0->f_12);
							}
							func_285(GAMEPLAY::GET_HASH_KEY(func_349(uParam0->f_12)), iVar0, 0);
							func_278(0, 31, 3);
							uParam0->f_54 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_380(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_158(), func_277(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam10)
							{
								func_387(uParam0, &(uParam8->f_3));
							}
						}
					}
				}
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202) || CONTROLS::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_437(1))
					{
						func_407();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_387(uParam0, &(uParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2460710 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_387(uParam0, &(uParam8->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					if (func_142(&(Global_2537071.f_12[iVar12])) && func_389(Global_2537071.f_12[iVar12], 150000, 0))
					{
						func_14(&(Global_2537071.f_12[iVar12]));
						uParam7->f_5[iVar12] = 0;
						uParam0->f_54 = 3;
					}
					iVar12++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_356(uParam0, uParam0->f_12);
				}
				if (func_286(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_356(uParam0, uParam0->f_12);
								}
								func_285(GAMEPLAY::GET_HASH_KEY(func_349(uParam0->f_12)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_437(1))
								{
									func_407();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam10)
								{
									func_387(uParam0, &(uParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_214())
				{
					UNK3::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_273(func_274()));
				}
				if (bParam10)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_123, 6))
					{
						unk_0x0D30EB83668E63C5(1, uParam0->f_12, 0, 1);
						GAMEPLAY::SET_BIT(&(Global_1590535[PLAYER::PLAYER_ID()].f_274.f_123), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_105(1275, 1, -1);
							func_104(16, 1, -1, 1);
							break;
						
						case 1:
							func_105(1276, 1, -1);
							func_104(15, 1, -1, 1);
							break;
						
						case 2:
							func_104(14, 1, -1, 1);
							func_105(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_126(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1097, -1, 0));
							}
							func_105(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_105(62, 1, -1);
							break;
						
						case 5:
							func_105(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(1275, 1, -1);
							func_104(16, 1, -1, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(1276, 1, -1);
							func_104(15, 1, -1, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_104(14, 1, -1, 1);
							func_105(1277, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_126(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_126(1097, -1, 0));
							}
							func_105(1097, uParam0->f_55, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(62, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_356(uParam0, uParam0->f_12);
							}
							func_105(63, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_214())
				{
					func_206(func_274());
				}
				func_271(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!GAMEPLAY::IS_BIT_SET(*uParam8, 30))
				{
					GAMEPLAY::SET_BIT(uParam8, 30);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 0))
				{
					GAMEPLAY::SET_BIT(&(uParam8->f_1), 0);
					uParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_387(uParam0, &(uParam8->f_3));
					}
					func_148("SHR_SOLD_OUT", -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_357(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_193(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_269(0, 1f, 3);
						func_105(1275, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_105(1276, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_105(1277, 1, -1);
						func_104(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_126(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_126(1097, -1, 0));
						}
						func_269(5, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_105(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_105(62, 1, -1);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_105(63, 1, -1);
						break;
				}
				if (!bParam10)
				{
					func_425(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_267(PLAYER::PLAYER_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					GAMEPLAY::SET_BIT(uParam8, 25);
					if (!GAMEPLAY::IS_BIT_SET(*uParam8, 1))
					{
						GAMEPLAY::SET_BIT(uParam8, 2);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
				{
					GAMEPLAY::SET_BIT(&(uParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_98796.f_1417 && !NETWORK::_0x2EAC52B4019E2782())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_425(PLAYER::PLAYER_ID(), 1, 0, 0);
				}
				if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 203);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 188);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 187);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 189);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 203);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 188);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 187);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 189);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (GAMEPLAY::IS_BIT_SET(uParam7->f_1, 3))
				{
					if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
					{
						GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 2);
					}
					if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 3))
					{
						GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (GAMEPLAY::IS_BIT_SET(uParam7->f_1, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 2);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 3))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && GAMEPLAY::IS_BIT_SET(uParam0->f_52, 26)) && !NETWORK::_0x2EAC52B4019E2782())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_387(uParam0, &(uParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_261(&(uParam0->f_14));
		}
	}
}

int func_267(int iParam0)
{
	if ((func_40(iParam0) || func_268(iParam0)) && func_215(func_216(iParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			func_193(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2439138.f_1290[iVar11].f_6 == 0 || Global_2439138.f_1290[iVar11].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2439138.f_1290[iVar12] = { Var8 };
				Global_2439138.f_1290[iVar12].f_6 = 1;
				Global_2439138.f_1290[iVar12].f_4 = func_192(Global_2439138.f_1290[iVar12], &Global_1312317, &Global_1312318);
				Global_2439138.f_1290[iVar12].f_5 = fParam1;
				Global_2439138.f_1290[iVar12].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2439138.f_1290[iVar12].f_8 = iParam2;
				Global_2439138.f_1290[iVar12].f_14 = { Var0 };
				Global_2439138.f_1290[iVar12].f_9 = func_191();
				Global_2439138.f_1290[iVar12].f_10 = func_190();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_201(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_202(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_180())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425662[iParam0].f_310.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66;
	}
	return -1;
}

int func_274()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_209(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_275()
{
	Global_2450632.f_684.f_32 = 1;
}

void func_276()
{
	Global_2450632.f_684.f_28 = 1;
	Global_2450632.f_684.f_32 = 0;
	Global_2450632.f_684.f_31 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_14(&(Global_2450632.f_684.f_29));
}

char* func_277()
{
	if (func_13())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x883D79C4071E18B3())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_282(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 199) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (UI::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_98796.f_1417 && !NETWORK::_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2461734 = iParam1;
			Global_98796.f_1417 = 1;
			Global_98796.f_1418 = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()
{
	return Global_2461181;
}

bool func_281()
{
	return Global_2461839;
}

int func_282(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_283(iParam0))
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

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

bool func_284(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

void func_285(int iParam0, int iParam1, int iParam2)
{
	Global_98796.f_1419 = iParam0;
	Global_98796.f_1420 = iParam1;
	Global_98796.f_1421 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() > 0)
				{
					if (NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
					{
						if (NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_365(uParam0->f_12);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, GAMEPLAY::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
					{
						UI::_0x170F541E1CADD1DE(1);
						UI::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				UI::_0x170F541E1CADD1DE(0);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_206(func_274());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				UI::_0x170F541E1CADD1DE(0);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_2 != 1;
	}
	return 0;
}

int func_289()
{
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_79()) || UNK3::_0x810E8431C0614BF9())
		{
			if (func_290(Global_4263954[iVar2].f_66.f_6, Global_4263954[iVar2].f_66.f_4, Global_4263954[iVar2].f_66.f_1) == 1)
			{
				Global_4264536 = 1;
			}
			return 0;
		}
		if (Global_2461839)
		{
			if (Global_4263954[iVar2].f_66.f_6 == 1067618600 || Global_4263954[iVar2].f_66.f_6 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4263954[iVar2].f_66.f_13 = 1;
			Global_4263954[iVar2].f_66.f_12 = 0;
			Global_4263954[iVar2].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4263954[iVar2].f_66.f_8 = 1;
				Global_4263954[iVar2].f_66.f_12 = 1;
			}
			Global_4263954[iVar2].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_212(Global_4263954[iVar2], iVar2);
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
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
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
				return 1;
			
			case 1775876058:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_79()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4263954[iVar1].f_66.f_1 = Var2.f_2;
		Global_4263954[iVar1].f_66.f_15 = Var2;
		Global_4263954[iVar1].f_66.f_16 = Var2.f_1;
		if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_79()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4263954[iVar1].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4263954[iVar1].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (UNK3::_NETWORK_SHOP_BASKET_END())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (bVar0 || UNK3::_NETWORK_SHOP_BASKET_START(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_211(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(PLAYER::PLAYER_ID(), 1, 0) || func_296(PLAYER::PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_296(int iParam0)
{
	if (iParam0 != func_180())
	{
		if (func_46(iParam0, 1, 1))
		{
			if (Global_2425662[iParam0].f_310.f_5 != -1)
			{
				return func_297(Global_2425662[iParam0].f_310.f_5) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
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

void func_298(var uParam0, var uParam1, bool bParam2)
{
	if (!uParam0->f_29)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_351(uParam0->f_12, 1, 1);
		sVar0 = func_349(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_350(sVar0, 0, 0);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_351(uParam0->f_12, 1, 1);
		sVar0 = func_349(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_350(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_356(uParam0, uParam0->f_12), 0, 1, 0, -1, 0))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_126(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_126(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_126(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_126(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_126(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_126(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_350("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_299(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_350("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_350("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_350("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_350("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_350("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_350("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_350("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_350("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_350("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_350("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_350("SNK_NEEDED", 0, 0);
				}
				GAMEPLAY::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_306(&(uParam0->f_44));
			sVar0 = func_349(uParam0->f_12);
			if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_350(sVar0, 0, 0);
			}
		}
	}
}

float func_299(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)
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

bool func_301(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_302(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_303(var uParam0)
{
	fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 187)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_302(&(uParam0->f_41)))
		{
			func_305(&(uParam0->f_41));
			return 1;
		}
		else if (func_304(&(uParam0->f_41)) > 0.25f)
		{
			func_380(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_41)))
	{
		func_306(&(uParam0->f_41));
	}
	return 0;
}

float func_304(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(var uParam0)
{
	if (!func_302(uParam0))
	{
		func_380(uParam0);
	}
}

void func_306(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_307(var uParam0)
{
	fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 188)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_302(&(uParam0->f_38)))
		{
			func_305(&(uParam0->f_38));
			return 1;
		}
		else if (func_304(&(uParam0->f_38)) > 0.25f)
		{
			func_380(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_38)))
	{
		func_306(&(uParam0->f_38));
	}
	return 0;
}

int func_308()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268497 > -1)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
{
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		UI::_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_4268497 == -6)
	{
		UI::_SET_CURSOR_SPRITE(4);
		if (iParam0 && CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268497 = -1;
			return 0;
		}
	}
	if (((Global_4268497 > -1 || Global_4268497 == -3) || Global_4268497 == -2) || UI::_0x3D9ACB1EB139E702())
	{
		UI::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4268497 == -1 && iParam0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			UI::_SET_CURSOR_SPRITE(4);
			Global_4268497 = -6;
			return 1;
		}
		else
		{
			UI::_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	UI::_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		Global_4268497 = -1;
		return;
	}
	CONTROLS::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_22347;
	fVar2 = (fVar0 + Global_22349);
	fVar3 = Global_22350.f_5730;
	fVar1 = (Global_22350.f_5730 - (IntToFloat(Global_22350.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22350.f_5732 < 1)
	{
		fVar1 = (Global_22350.f_5730 - 0.034722f);
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
	func_313();
	if (Global_4268497 == -6)
	{
		return;
	}
	Global_4268497 = -1;
	fVar7 = Global_4268491;
	fVar8 = Global_4268492;
	if (Global_22350.f_5733 > Global_22350.f_5732)
	{
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= fVar3) && Global_4268492 < (fVar3 + fVar6))
		{
			Global_4268497 = -2;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
		if (((Global_4268491 >= fVar0 && Global_4268491 <= fVar2) && Global_4268492 >= (fVar3 + fVar6)) && Global_4268492 < (fVar3 + 0.034722f))
		{
			Global_4268497 = -3;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_22350.f_5733 == -1)
		{
			Global_4268497 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22350.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22349, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
			}
		}
		Global_4268497 = Global_22350.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268497 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268497 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268497 = -4;
		return;
	}
	Global_4268497 = -1;
}

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_312(bool bParam0)
{
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22347;
	fVar1 = Global_22350.f_5730;
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268497 == -2)
	{
		func_311(fVar0, fVar1, Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268497 == -3)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_22349, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_313()
{
	Global_4268493 = Global_4268491;
	Global_4268494 = Global_4268492;
	Global_4268491 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268492 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268495 = (Global_4268491 - Global_4268493);
	Global_4268496 = (Global_4268492 - Global_4268494);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_346(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_22350)
	{
		if (func_344(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_22350 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_22348;
	}
	else
	{
		fVar59 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22349;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar60, &iVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_343())
		{
			iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(iVar60) / SYSTEM::TO_FLOAT(iVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_343())
		{
			fVar62 = 1f;
		}
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar62));
		iVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar60, &iVar61);
	}
	if (bParam3)
	{
		if (Global_22350.f_5218 <= 1)
		{
			func_361(Global_22350.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22350.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22350.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_22348;
			}
			else
			{
				if (Global_22350)
				{
					StringCopy(&cVar65, func_342(29), 64);
					StringCopy(&cVar81, func_340(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
					{
						func_311(Global_22347, Global_22348, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_22347 + (fParam5 * 0.5f)), (Global_22348 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22350.f_8387)
				{
					iVar1 = Global_22350.f_8383;
					iVar2 = Global_22350.f_8384;
					iVar3 = Global_22350.f_8385;
					iVar4 = Global_22350.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_311(Global_22347, (Global_22348 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_22348 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_1)) != 0)
				{
					func_339();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22350.f_68)
					{
						if (Global_22350.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22350.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_14[iVar16], Global_22350.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22350.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_22[iVar17]));
							iVar17++;
						}
						else if (Global_22350.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						else if (Global_22350.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_35[iVar18]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_22347 + 0.00390625f), ((Global_22348 + fVar57) + 0.00416664f), 0);
				}
				if (Global_22350.f_5735)
				{
					func_339();
					func_337((((Global_22347 + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5736, Global_22350.f_5737);
				}
				else if (Global_22350.f_5731 > Global_22350.f_5225)
				{
					if (Global_22350.f_5734 != 0)
					{
						func_339();
						func_337((((Global_22347 + fParam5) - 0.00390625f) - func_338("CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733)), ((Global_22348 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_22350.f_5734, Global_22350.f_5733);
					}
				}
			}
			iVar6 = Global_22350.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_22350.f_8397)
			{
				iVar1 = Global_22350.f_8393;
				iVar2 = Global_22350.f_8394;
				iVar3 = Global_22350.f_8395;
				iVar4 = Global_22350.f_8396;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22350.f_5225 && iVar6 <= Global_22350.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22350.f_5485[iVar6])
					{
						if (Global_22350.f_5356[iVar6] && iVar6 != Global_22350.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_22350.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_22350.f_5731 > Global_22350.f_5225)
			{
				if (Global_22350.f_8402)
				{
					iVar1 = Global_22350.f_8398;
					iVar2 = Global_22350.f_8399;
					iVar3 = Global_22350.f_8400;
					iVar4 = Global_22350.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_311(Global_22347, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar62));
				Var38.y = (Var38.y * (0.5f / fVar62));
				if (Global_22350.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar62), ((Var38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4690)) != 0 && Global_22350.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_22350.f_4768 != 0)
				{
					func_344(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_336(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22350.f_4762)
				{
					if (Global_22350.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22350.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4705[iVar16], Global_22350.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22350.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					else if (Global_22350.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_4713[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_22350.f_4768 != 0)
				{
					func_344(Global_22350.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_335(Global_22350.f_4768, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4768), func_340(Global_22350.f_4768, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22350.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_22350.f_4767) > Global_22350.f_4766)
					{
						StringCopy(&(Global_22350.f_4690), "", 24);
						Global_22350.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_21)) != 0 && Global_4268421.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_22347 + 0.0046875f);
				if (Global_4268421.f_67 != 0)
				{
					func_344(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_22347 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_336(fVar42);
				UI::_SET_TEXT_GXT_ENTRY(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_22347, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22350.f_8407)
				{
					iVar1 = Global_22350.f_8403;
					iVar2 = Global_22350.f_8404;
					iVar3 = Global_22350.f_8405;
					iVar4 = Global_22350.f_8406;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_22347 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_336(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4268421.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4268421.f_61)
				{
					if (Global_4268421.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4268421.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4268421.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4268421.f_34[iVar16], Global_4268421.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4268421.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					else if (Global_4268421.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4268421.f_42[iVar17]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4268421.f_67 != 0)
				{
					func_344(Global_4268421.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_335(Global_4268421.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					GRAPHICS::DRAW_SPRITE(func_342(Global_4268421.f_67), func_340(Global_4268421.f_67, 1), ((Global_22347 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4268421.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4268421.f_66) > Global_4268421.f_65)
					{
						StringCopy(&(Global_4268421.f_21), "", 16);
						Global_4268421.f_65 = -1;
					}
				}
			}
			func_328(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22350.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_22350.f_5218;
			if (Global_22350.f_5729)
			{
				iVar98 = (Global_22350.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_22350.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_22350.f_5745[iVar6];
				}
				if (Global_22350.f_5729)
				{
					iVar6 = Global_22350.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22350.f_5738 && iVar9 < Global_22350.f_5225)
				{
					bVar33 = true;
					if (Global_22350.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_22350.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22350.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22347 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_22350.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_22350.f_8409)
					{
						UI::GET_HUD_COLOUR(Global_22350.f_8408, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_22347 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_22350.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22350.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_22350.f_5089[iVar6], iVar8) || Global_22350.f_5056[iVar8] == 5)
					{
						if (Global_22350.f_5729)
						{
							iVar19 = Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar20 = Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar21 = Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar22 = Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)];
							iVar23 = Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)];
						}
						else
						{
							Global_22350.f_8054[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar19;
							Global_22350.f_8095[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar20;
							Global_22350.f_8136[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar21;
							Global_22350.f_8177[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar22;
							Global_22350.f_8218[((iVar9 * Global_22350.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_22350.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_22350.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22350.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_22350.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22347 + 0.0046875f) + Global_22350.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22350.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22350.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_22350.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_22347 + Global_22349) - 0.0046875f) - fVar34);
						}
						if ((Global_22350.f_5075[iVar8] && Global_22350.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_22350.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_22350.f_2124[iVar24][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[iVar24]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
												}
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
												}
												iVar29++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0)
										{
											fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_22350.f_4433[(iVar22 + iVar14)] == 2 || Global_22350.f_4433[(iVar22 + iVar14)] == 51) || Global_22350.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
										Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_22350.f_5083[iVar101] == 2)
												{
													Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] = (Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar101)] - Global_22350.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22350.f_2124[iVar24][iVar14] == 5 || Global_22350.f_2124[iVar24][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_22350.f_2124[iVar24][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_22350.f_73[iVar24]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22350.f_2124[iVar24][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 1;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(iVar24 + iVar25)]));
											}
											iVar31 = 8;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[(iVar23 + iVar29)]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[(iVar21 + iVar27)], Global_22350.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22350.f_2124[iVar24][iVar14] == 4)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar28)] == 2 || Global_22350.f_4433[(iVar22 + iVar28)] == 51) || Global_22350.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_344(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_335(Global_22350.f_4433[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[(iVar22 + iVar28)]), func_340(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[(iVar22 + iVar28)]), func_340(Global_22350.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[iVar24])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22350.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_324() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1768762336) > 0)
											{
												if (iVar8 == 0)
												{
													func_326(0, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_22350.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22350.f_4433[(iVar22 + iVar14)] != 2 && Global_22350.f_4433[(iVar22 + iVar14)] != 51) && Global_22350.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_344(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_335(Global_22350.f_4433[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_22350.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (Global_22347 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else if (Global_22350.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[(iVar22 + iVar14)]), func_340(Global_22350.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22350.f_2124[iVar24][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22350.f_2124[iVar24][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[iVar20]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										func_323((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22350.f_5729)
									{
										func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_22350.f_8413 && Global_22350.f_8414 == iVar6)
										{
											func_325(bVar32);
										}
										UI::_SET_TEXT_ENTRY_FOR_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
										fVar43 = UI::_GET_TEXT_SCREEN_WIDTH(1);
										fVar42 = 0f;
										if (Global_22350.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_22350.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
										Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
										fVar43 = Global_22350.f_8300[((iVar9 * Global_22350.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_344(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
										if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
												}
											}
										}
									}
									func_326(bVar32, Global_22350.f_1610[iVar24], Global_22350.f_1867[iVar24], bVar55, 0, 0, 0);
									func_322((fVar34 + fVar42), fVar35, "NUMBER", Global_22350.f_4175[iVar21], Global_22350.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_344(Global_22350.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22350.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_22350.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_22350.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar42;
											Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_22350.f_8259[((iVar9 * Global_22350.f_5226) + iVar8)];
											fVar44 = Global_22350.f_8341[((iVar9 * Global_22350.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_344(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22350.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_335(26, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_342(26), func_340(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
											if (func_344(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_344(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_335(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_342(27), func_340(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_344(Global_22350.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_335(Global_22350.f_4433[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												GRAPHICS::DRAW_SPRITE(func_342(Global_22350.f_4433[iVar22]), func_340(Global_22350.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_321(Global_22350.f_4433[iVar22])), (fVar37 * func_321(Global_22350.f_4433[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_22350.f_5056[iVar8] == 5)
						{
							if (Global_22350.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
							if (Global_22350.f_5075[iVar8])
							{
								if (func_344(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22350.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_22350.f_8038[iVar9] = iVar6;
						Global_22350.f_5740 = iVar6;
						iVar9++;
						if (Global_22350.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22350.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_22350.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_22350.f_5728)
					{
						Global_22350.f_5485[iVar6] = 1;
						if (Global_22350.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22350.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22350.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22350.f_5728)
			{
				Global_22350.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_22350.f_5733 = iVar11;
				Global_22350.f_5731 = iVar10;
				Global_22350.f_5728 = 1;
			}
		}
		if (!Global_22350.f_5729)
		{
			Global_22350.f_5732 = iVar9;
			Global_22350.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22350.f_5876 = fVar51;
	Global_22350.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_0x55598D21339CB998(Global_22350.f_5876);
	if (!Global_22350.f_8382)
	{
		func_316(0);
	}
	Global_22350.f_8382 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_315(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_315(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_316(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_168(0))
		{
			func_317(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_317(int iParam0)
{
	if (func_320())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_319())
		{
			func_318(1, 1);
		}
		else
		{
			func_318(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_236())
	{
		Global_19486.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_168(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19423);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
		}
	}
}

bool func_319()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_320()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

float func_321(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_322(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_323(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

var func_324()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_325(bool bParam0)
{
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_22350.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_326(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (bParam2)
	{
		if (bParam3)
		{
			func_327(Global_22350.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!func_164(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_346(bParam4, bParam8))
	{
		return;
	}
	if (func_333())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_331(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_22350.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (Global_22350.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_22350.f_5026[iVar1], 1), 64);
				}
				else if (Global_22350.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22350.f_4771[iVar1]), CONTROLS::_0x80C2FD58D720C801(2, Global_22350.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_22350.f_4770 = 0;
		}
		if (!Global_22350.f_4770)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_22350.f_5081 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_22350.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar1])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_330(&(Global_22350.f_4771[iVar1]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_4964[iVar2])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_330(&(Global_22350.f_4771[iVar2]));
						iVar2++;
					}
					if (Global_22350.f_5013[iVar1] == -1)
					{
						func_329(&(Global_22350.f_4964[iVar1]));
					}
					else
					{
						iVar3 = Global_22350.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_22350.f_5026[iVar1] != 361 && GAMEPLAY::IS_BIT_SET(Global_22350.f_5052, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4268421.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_22350.f_4769);
				func_330(&Global_4268421);
				if (Global_4268421.f_20 == -1)
				{
					func_329(&(Global_4268421.f_16));
				}
				else
				{
					iVar4 = Global_22350.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22350.f_5082)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_22350.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22350.f_4769)
		{
			if (Global_22350.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_22350.f_4964[iVar1]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4268421.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_22350.f_5660[iVar0], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Global_4268421.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22350.f_8417)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_22350.f_8417 = 1;
			}
		}
		else if (Global_22350.f_8417)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_22350.f_8417 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_22350.f_5055)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_22350.f_5660[iVar0], Global_22350.f_5053, Global_22350.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_22350.f_5660[iVar0], 255, 255, 255, 255, 0);
		}
	}
}

void func_329(var uParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_330(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

bool func_331(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_332(-1, 0) == 8;
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

int func_332(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
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

int func_333()
{
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	if (func_334())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_19431 == 0)
		{
			if (Var0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.y > -101f)
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

int func_334()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) > 0)
	{
		return 1;
	}
	return 0;
}

void func_335(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			UI::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_336(float fParam0)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_337(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_338(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_339();
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_339()
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22350.f_8392)
	{
		iVar0 = Global_22350.f_8388;
		iVar1 = Global_22350.f_8389;
		iVar2 = Global_22350.f_8390;
		iVar3 = Global_22350.f_8391;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	UI::SET_TEXT_WRAP((Global_22347 + 0.0046875f), ((Global_22347 + Global_22349) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_340(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_69(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_341(&uVar3);
			}
		}
		else
		{
			return func_341(&(Global_22350.f_7029[iParam0]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_341(var uParam0)
{
	return uParam0;
}

char* func_342(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_69(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_341(&uVar0);
		}
		else
		{
			return func_341(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_343()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_342(iParam0), 64);
	StringCopy(&cVar16, func_340(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_343())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_343())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		Var37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		Var37.x = (Var37.x * (func_345(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_345(iParam0) / fVar34));
		if (!bParam2)
		{
			Var37.x = (Var37.x - 2f);
			Var37.y = (Var37.y - 2f);
		}
		if (iParam0 == 30)
		{
			Var37.x = 288f;
			Var37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
		{
			Var37.x = 106f;
			Var37.y = 106f;
		}
		*fParam3 = ((Var37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var37.y / IntToFloat(iVar33)) / (Var37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22349)
			{
				*fParam4 = (*fParam4 * (Global_22349 / *fParam3));
				*fParam3 = Global_22349;
			}
		}
		return 1;
	}
	return 0;
}

float func_345(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_346(bool bParam0, bool bParam1)
{
	if (Global_2439138.f_1894.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_246(8, -1) && func_347() != 65)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_76882) || Global_22350.f_8416) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_98796.f_1417)
	{
		return 0;
	}
	return 1;
}

int func_347()
{
	return Global_1312812;
}

void func_348(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_22350.f_4769 >= 12)
	{
		StringCopy(&Global_4268421, sVar0, 64);
		StringCopy(&(Global_4268421.f_16), sParam1, 16);
		Global_4268421.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_5052), Global_22350.f_4769);
	}
	StringCopy(&(Global_22350.f_4771[Global_22350.f_4769]), sVar0, 64);
	StringCopy(&(Global_22350.f_4964[Global_22350.f_4769]), sParam1, 16);
	Global_22350.f_5013[Global_22350.f_4769] = iParam2;
	Global_22350.f_5026[Global_22350.f_4769] = iParam0;
	Global_22350.f_5039[Global_22350.f_4769] = 32;
	Global_22350.f_4769++;
}

char* func_349(int iParam0)
{
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_350(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(&(Global_22350.f_4690), sParam0, 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = iParam1;
	Global_22350.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_22350.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_351(var uParam0, bool bParam1, int iParam2)
{
	Global_22350.f_5739 = uParam0;
	Global_22350.f_5874 = iParam2;
	if (Global_22350.f_5739 < Global_22350.f_5738)
	{
		Global_22350.f_5738 = Global_22350.f_5739;
	}
	else if ((Global_22350.f_5729 && Global_22350.f_5739 > Global_22350.f_5740) || (!Global_22350.f_5729 && Global_22350.f_5739 >= (Global_22350.f_5738 + Global_22350.f_5225)))
	{
		iVar0 = Global_22350.f_5738;
		while (iVar0 <= Global_22350.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22350.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22350.f_5225 && Global_22350.f_5738 < 128)
		{
			Global_22350.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22350.f_5738;
			while (iVar0 <= Global_22350.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22350.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22350.f_4690), "", 24);
		StringCopy(&(Global_4268421.f_21), "", 16);
	}
}

void func_352(int iParam0)
{
	Global_22350.f_5738 = iParam0;
}

void func_353(var uParam0, bool bParam1)
{
	if (Global_22350.f_5222 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_3918[Global_22350.f_5222] = uParam0;
	Global_22350.f_5222++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 2;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_355();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_344(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_354();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

float func_354()
{
	iVar0 = 0;
	while (iVar0 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)] != 0)
		{
			if (func_344(Global_22350.f_4433[((Global_22350.f_5224 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_355()
{
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_326(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(Global_22350.f_73[Global_22350.f_5742]));
	}
	iVar7 = 0;
	while (iVar7 < Global_22350.f_5743)
	{
		if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 1)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 8)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_22350.f_73[(Global_22350.f_5742 + iVar8)]));
			}
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 2)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_22350.f_3918[((Global_22350.f_5222 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 3)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_FLOAT(Global_22350.f_4175[((Global_22350.f_5223 - iVar4) + iVar10)], Global_22350.f_4304[((Global_22350.f_5223 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 5)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 6)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 7)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		else if (Global_22350.f_2124[Global_22350.f_5742][iVar7] == 9)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2461220[((Global_22350.f_5221 - iVar6) + iVar11)]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_73[Global_22350.f_5742])) != 0)
	{
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)] != 0)
		{
			func_344(Global_22350.f_4433[((Global_22350.f_5224 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_356(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	if (func_126(func_359(iParam0), -1, 0) >= func_358(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_358(var uParam0)
{
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_359(var uParam0)
{
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 11511;
}

void func_360(int iParam0, bool bParam1)
{
	if (Global_22350.f_5224 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 >= 4)
	{
		return;
	}
	if (Global_22350.f_5744 != 1)
	{
		return;
	}
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		return;
	}
	Global_22350.f_4433[Global_22350.f_5224] = iParam0;
	Global_22350.f_5224++;
	Global_22350.f_2124[Global_22350.f_5742][Global_22350.f_5743] = 4;
	Global_22350.f_5743++;
	if (Global_22350.f_5743 >= Global_22350.f_5741)
	{
		fVar0 = func_355();
		if (Global_22350.f_5075[Global_22350.f_5219] && Global_22350.f_5743 == Global_22350.f_5741)
		{
			func_344(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_22350.f_5068[(Global_22350.f_5219 - 1)])
		{
			Global_22350.f_5068[(Global_22350.f_5219 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_22350.f_5743 >= Global_22350.f_5741)
		{
			fVar3 = func_354();
			if (fVar3 > Global_22350.f_5745[Global_22350.f_5218])
			{
				Global_22350.f_5745[Global_22350.f_5218] = fVar3;
			}
		}
	}
}

void func_361(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (Global_22350.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22350.f_5218 >= 128)
	{
		return;
	}
	if (Global_22350.f_5220 >= 256)
	{
		return;
	}
	if (Global_22350.f_5743 < Global_22350.f_5741)
	{
		return;
	}
	if (Global_22350.f_5218 != iParam0)
	{
		Global_22350.f_5218 = iParam0;
		Global_22350.f_5219 = 0;
	}
	iVar0 = Global_22350.f_5056[Global_22350.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22350.f_5219 < 4 && iVar0 != 1)
		{
			Global_22350.f_5219++;
			iVar0 = Global_22350.f_5056[Global_22350.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22350.f_73[Global_22350.f_5220]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_22350.f_1610[Global_22350.f_5220] = bParam3;
	Global_22350.f_1867[Global_22350.f_5220] = iParam4;
	Global_22350.f_5220++;
	if (!bParam3)
	{
		func_364(Global_22350.f_5218, 1);
	}
	else
	{
		func_364(Global_22350.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_363(&(Global_22350.f_73[Global_22350.f_5220]));
		if (Global_22350.f_5075[Global_22350.f_5219])
		{
			func_344(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22350.f_5068[Global_22350.f_5219])
		{
			Global_22350.f_5068[Global_22350.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_362(&(Global_22350.f_73[Global_22350.f_5220]));
			if (fVar4 > Global_22350.f_5745[iParam0])
			{
				Global_22350.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_22350.f_5089[iParam0]), Global_22350.f_5219);
	Global_22350.f_5219++;
	Global_22350.f_5744 = 1;
	Global_22350.f_5742 = (Global_22350.f_5220 - 1);
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = iParam2;
}

float func_362(char* sParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_363(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_326(0, 1, 0, 0, 0, 0, 0);
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

void func_364(int iParam0, bool bParam1)
{
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_22350.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_365(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	Global_22350 = iParam0;
	func_367(29, sParam1, sParam2);
}

void func_367(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22350.f_6020[iParam0]), sParam1, 64);
	StringCopy(&(Global_22350.f_7029[iParam0]), sParam2, 64);
}

void func_368(char* sParam0)
{
	StringCopy(&(Global_22350.f_1), sParam0, 16);
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5083[0] = iParam0;
	Global_22350.f_5083[1] = iParam1;
	Global_22350.f_5083[2] = iParam2;
	Global_22350.f_5083[3] = iParam3;
	Global_22350.f_5083[4] = iParam4;
}

void func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22350.f_5056[0] = iParam0;
	Global_22350.f_5056[1] = iParam1;
	Global_22350.f_5056[2] = iParam2;
	Global_22350.f_5056[3] = iParam3;
	Global_22350.f_5056[4] = iParam4;
	Global_22350.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22350.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22350.f_5226++;
	}
}

void func_371(bool bParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22350.f_73[iVar0]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22350.f_2124[iVar0][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2461220[iVar0]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22350.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22350.f_5089[iVar0] = 0;
		Global_22350.f_5227[iVar0] = 0;
		Global_22350.f_5356[iVar0] = 0;
		Global_22350.f_5879[iVar0] = 0f;
		Global_22350.f_5485[iVar0] = 0;
		Global_22350.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22350.f_5056[iVar0] = 0;
		Global_22350.f_5068[iVar0] = 0f;
		Global_22350.f_5062[iVar0] = -1f;
		Global_22350.f_5075[iVar0] = 0;
		Global_22350.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22350.f_4964[iVar0]), "", 16);
		Global_22350.f_5013[iVar0] = -1;
		Global_22350.f_5026[iVar0] = 361;
		Global_22350.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22350.f_6020[iVar0]), "", 64);
		StringCopy(&(Global_22350.f_7029[iVar0]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22350.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4268421.f_16), "", 16);
	Global_4268421.f_20 = -1;
	Global_22350 = 0;
	Global_22350.f_5218 = 0;
	Global_22350.f_5219 = 0;
	Global_22350.f_5220 = 0;
	Global_22350.f_5222 = 0;
	Global_22350.f_5223 = 0;
	Global_22350.f_5224 = 0;
	Global_22350.f_5221 = 0;
	Global_22350.f_5874 = 0;
	Global_22350.f_6014 = 0;
	Global_22350.f_5739 = 0;
	Global_22350.f_5738 = 0;
	Global_22350.f_5740 = 0;
	StringCopy(&(Global_22350.f_4690), "", 24);
	Global_22350.f_4762 = 0;
	Global_22350.f_4763 = 0;
	Global_22350.f_4764 = 0;
	Global_22350.f_4765 = 0;
	Global_22350.f_4766 = 0;
	Global_22350.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_4768 = 0;
	StringCopy(&(Global_4268421.f_21), "", 16);
	Global_4268421.f_61 = 0;
	Global_4268421.f_62 = 0;
	Global_4268421.f_63 = 0;
	Global_4268421.f_64 = 0;
	Global_4268421.f_65 = 0;
	Global_4268421.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4268421.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4268421.f_67 = 0;
	StringCopy(&(Global_22350.f_1), "", 16);
	Global_22350.f_5074 = 0f;
	Global_22350.f_68 = 0;
	Global_22350.f_69 = 0;
	Global_22350.f_70 = 0;
	Global_22350.f_71 = 0;
	Global_22350.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22350.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_5744 = 0;
	Global_22350.f_5743 = 0;
	Global_22350.f_5741 = 0;
	Global_22350.f_5742 = 0;
	Global_22350.f_4769 = 0;
	Global_22350.f_4770 = 0;
	Global_22350.f_5225 = 10;
	Global_22350.f_5226 = 0;
	Global_22350.f_5876 = 0f;
	Global_22350.f_5877 = 0f;
	Global_22350.f_5728 = 0;
	Global_22350.f_5729 = 0;
	Global_22350.f_5730 = 0f;
	Global_22350.f_5731 = 0;
	Global_22350.f_5733 = 0;
	Global_22350.f_5732 = 0;
	Global_22350.f_5734 = 0;
	Global_22350.f_5735 = 0;
	Global_22350.f_5736 = 0;
	Global_22350.f_5737 = 0;
	Global_22350.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22350.f_6008[iVar0] = -1;
		Global_22350.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22350.f_5081 = 0f;
	Global_22350.f_5052 = 0;
	Global_22350.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22350.f_6015)
	{
		Global_22350.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22350.f_8392 = 0;
	Global_22350.f_8387 = 0;
	Global_22350.f_8397 = 0;
	Global_22350.f_8402 = 0;
	Global_22350.f_8407 = 0;
	Global_22350.f_8409 = 0;
	Global_22350.f_8415 = 0;
	Global_22347 = 0.05f;
	Global_22348 = 0.05f;
	Global_22349 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22349 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22349 = 0.225f;
	}
}

int func_372(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			Var0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			Var0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			Var0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			Var0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			Var0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			Var0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			Var0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			Var0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			Var0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			Var0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			Var0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			Var0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			Var0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			Var0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_373()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		CONTROLS::_SET_CURSOR_POSITION(0.325f, 0.3f);
	}
}

void func_374(int iParam0, int iParam1)
{
	if (!func_282(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_379())
		{
			Global_1312418.f_1 = 1;
			Global_1628237[PLAYER::PLAYER_ID()].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_375(7, 0, -1);
		}
	}
}

void func_375(int iParam0, int iParam1, int iParam2)
{
	if (!func_379() || iParam1)
	{
		Global_1312418 = 1;
		func_378(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_377()) && !func_376(PLAYER::PLAYER_ID())) && !func_138(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 1;
		}
		Global_1628237[PLAYER::PLAYER_ID()].f_8 = 1;
		unk_0x35EEC6C2BC821A71(1, iParam0, iParam2, -1);
	}
}

int func_376(int iParam0)
{
	if (func_282(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_377()
{
	return Global_2450632.f_740;
}

void func_378(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_379())
		{
			if (func_46(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_46(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

bool func_379()
{
	return Global_1312418;
}

void func_380(var uParam0)
{
	func_381(uParam0, 0f);
}

void func_381(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_382(int iParam0, bool bParam1)
{
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_168(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

int func_383()
{
	if (Global_111638.f_20405.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_384()
{
	return Global_22209;
}

int func_385(int iParam0, var uParam1, float fParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, fParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_386(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

void func_387(var uParam0, var uParam1)
{
	AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_425(PLAYER::PLAYER_ID(), 1, 0, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_408();
	GAMEPLAY::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_146("SHR_MENU"))
	{
		UI::CLEAR_HELP(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_261(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

int func_388(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_0x336B3D200AB007CB(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_389(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_390(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_391()
{
	AI::OPEN_SEQUENCE_TASK(&uLocal_542);
	AI::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_542);
	AI::OPEN_SEQUENCE_TASK(&uLocal_543);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_543);
	AI::OPEN_SEQUENCE_TASK(&uLocal_544);
	AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_529, 2f, -1, 0.25f, 0, fLocal_532);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	AI::TASK_SMART_FLEE_COORD(0, Local_529, 250f, -1, 1, 0);
	AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_544);
	AI::OPEN_SEQUENCE_TASK(&uLocal_546);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_546);
	AI::OPEN_SEQUENCE_TASK(&uLocal_545);
	AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_529, 2f, -1, 0.25f, 0, (fLocal_532 - 180f));
	AI::TASK_SWAP_WEAPON(0, 1);
	AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_545);
}

void func_392(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
	}
	(*uParam0)[iParam1] = iParam2;
	StringCopy(&(uParam0[iParam1]->f_1), sParam3, 24);
	uParam0[iParam1]->f_7 = 1;
	uParam0[iParam1]->f_8 = iParam4;
	uParam0[iParam1]->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(iParam2))
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

int func_393(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_394()
{
	return Local_73.f_12;
}

char* func_395(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_396()
{
	if (func_404(&(Local_467.f_50), 0))
	{
		func_402(Local_467.f_50, &iLocal_566, &iLocal_567, &iLocal_568, &iLocal_569, &Local_570, &Local_573);
		func_401(Local_467.f_50, &Local_576, &Local_579, &fLocal_582);
		func_400(Local_467.f_50, &Local_583, &Local_586, &fLocal_589);
		switch (Local_467.f_50)
		{
			case 0:
				Local_534 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				Local_537 = { 0f, 0f, 21.89f };
				iLocal_525 = func_52(0);
				Local_529 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_532 = 116.5329f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				break;
			
			case 1:
				Local_537 = { 0f, 0f, -160f };
				Local_534 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_532 = 178.8753f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				break;
			
			case 2:
				Local_534 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				Local_537 = { 0f, 0f, 175.52f };
				iLocal_525 = func_52(0);
				Local_529 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_532 = 191.594f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				break;
			
			case 3:
				Local_537 = { 0f, 0f, -82.38f };
				Local_534 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_532 = 228.4295f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				break;
			
			case 4:
				Local_537 = { 0f, 0f, 180f };
				Local_534 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_532 = 197.2994f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				break;
			
			case 5:
				Local_537 = { 0f, 0f, 155f };
				Local_534 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_532 = 296.5427f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				break;
			
			case 6:
				Local_537 = { 0f, 0f, 63.3f };
				Local_534 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_532 = 130.9518f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 2;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				break;
			
			case 7:
				Local_537 = { 0f, 0f, 117f };
				Local_534 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_532 = 73.6245f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 1;
				}
				break;
			
			case 8:
				Local_537 = { 0f, 0f, 92f };
				Local_534 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_532 = 110.7699f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 2;
				}
				break;
			
			case 9:
				Local_537 = { 0f, 0f, 75f };
				Local_534 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_532 = 52.0064f;
				iLocal_561 = 1;
				if (func_398(6, 18))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 2;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 0;
					iLocal_761[4] = 0;
				}
				break;
			
			case 10:
				Local_537 = { 0f, 0f, 0f };
				Local_534 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_532 = 136.5945f;
				iLocal_561 = 3;
				if (func_398(10, 22))
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 11:
				Local_537 = { 0f, 0f, -92f };
				Local_534 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_532 = 176.1174f;
				iLocal_561 = 3;
				if (func_398(10, 22))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 12:
				Local_537 = { 0f, 0f, -145f };
				Local_534 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_532 = 43.8031f;
				iLocal_561 = 3;
				if (func_398(10, 22))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 13:
				Local_537 = { 0f, 0f, 103f };
				Local_534 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_532 = 269.2587f;
				iLocal_561 = 3;
				if (func_398(10, 22))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 2;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 14:
				Local_537 = { 0f, 0f, -41f };
				Local_534 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_525 = func_52(0);
				Local_529 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_532 = 36.5415f;
				iLocal_561 = 3;
				if (func_398(10, 22))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 15:
				Local_537 = { 0f, 0f, 145f };
				Local_534 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_532 = 24.9178f;
				iLocal_561 = 2;
				if (func_398(8, 20))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 16:
				Local_537 = { 0f, 0f, -87f };
				Local_534 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_525 = func_52(0);
				Local_529 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_532 = 291.6504f;
				iLocal_561 = 2;
				if (func_398(8, 20))
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 1;
					iLocal_761[1] = 0;
					iLocal_755[2] = 1;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 2;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 17:
				Local_537 = { 0f, 0f, -125f };
				Local_534 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_525 = func_52(0);
				Local_529 = { -40.42f, -1751.423f, 28.421f };
				fLocal_532 = 145.6553f;
				iLocal_561 = 2;
				if (func_398(8, 20))
				{
					iLocal_755[0] = 1;
					iLocal_761[0] = 0;
					iLocal_755[1] = 1;
					iLocal_761[1] = 1;
					iLocal_755[2] = 1;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 2;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 18:
				Local_537 = { 0f, 0f, -74f };
				Local_534 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_525 = func_52(0);
				Local_529 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_532 = 232.6337f;
				iLocal_561 = 2;
				if (func_398(8, 20))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 0;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 1;
					iLocal_755[1] = 2;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 0;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
			
			case 19:
				Local_534 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				Local_537 = { 0f, 0f, -47.3f };
				iLocal_525 = func_52(0);
				Local_529 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_532 = 247.1234f;
				iLocal_561 = 2;
				if (func_398(8, 20))
				{
					iLocal_755[0] = 2;
					iLocal_761[0] = 1;
					iLocal_755[1] = 0;
					iLocal_761[1] = 0;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 0;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				else
				{
					iLocal_755[0] = 0;
					iLocal_761[0] = 2;
					iLocal_755[1] = 2;
					iLocal_761[1] = 1;
					iLocal_755[2] = 0;
					iLocal_761[2] = 1;
					iLocal_755[3] = 0;
					iLocal_761[3] = 1;
					iLocal_755[4] = 1;
					iLocal_761[4] = 0;
				}
				break;
		}
		Local_534 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_534, Local_537.z, 0f, 0.075f, 0f) };
		Local_526 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", Local_534, Local_537, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", Local_534, Local_537, 0, 2) };
		Local_73.f_42 = Var0.z;
		Local_550 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", Local_534, Local_537, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", Local_534, Local_537, 0, 2) };
		uLocal_553 = Var0.z;
		Local_554 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", Local_534, Local_537, 0, 2) };
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", Local_534, Local_537, 0, 2) };
		uLocal_557 = Var0.z;
		Local_467 = func_397(Local_467.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_73.f_45 = iLocal_755[0];
			if (Local_73.f_45 == 0)
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner2", 16);
			}
			else if (Local_73.f_45 == 1)
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_73.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_73.f_46), "StoreOwner3", 16);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_467.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(Local_534, 0.5f, iLocal_558, 1);
			GAMEPLAY::SET_BIT(&(Local_467.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_398(int iParam0, int iParam1)
{
	return func_399(TIME::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_399(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_401(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_402(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_403(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_403(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_404(var uParam0, bool bParam1)
{
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_87(PLAYER::PLAYER_ID()), func_405(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2425491.f_62, iVar2) && GAMEPLAY::IS_BIT_SET(Global_2425491.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_405(int iParam0)
{
	func_403(iParam0, &Var0, &uVar3);
	return Var0;
}

int func_406(int iParam0)
{
	return Local_146[iParam0].f_4;
}

void func_407()
{
	Global_2450632.f_684.f_28 = 0;
}

void func_408()
{
	if (Global_1312418.f_1 == 1)
	{
		func_409(7, 0, 1);
		Global_1312418.f_1 = 0;
		Global_1628237[PLAYER::PLAYER_ID()].f_9 = 0;
	}
}

void func_409(int iParam0, int iParam1, bool bParam2)
{
	if (func_379())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_410(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_410(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
				func_378(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
			func_378(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_377()) && !func_376(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		unk_0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

void func_410(var uParam0, bool bParam1, bool bParam2)
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

void func_411()
{
	if (!func_46(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (GAMEPLAY::IS_BIT_SET(Local_467.f_53, 6) && !GAMEPLAY::IS_BIT_SET(Local_467.f_53, 5))
		{
			iVar1 = NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1);
			iVar2 = 0;
			GAMEPLAY::SET_BIT(&iVar2, 8);
			GAMEPLAY::SET_BIT(&iVar2, 4);
			GAMEPLAY::SET_BIT(&iVar2, 1);
			if (iLocal_784 > Global_262145.f_167)
			{
				iLocal_784 = Global_262145.f_167;
			}
			if (iVar1 < iLocal_784)
			{
				if (iVar1 > 0)
				{
					if (func_51(func_52(1)))
					{
						if (NETWORKCASH::_0x7303E27CC6532080(iVar1, 0, 0, 0, &uVar3, -1, 0))
						{
							if (func_214())
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_7, 1))
								{
									Global_2537071.f_4949 = iVar1;
									Global_2537071.f_4950 = iVar2;
									Global_2537071.f_4951 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
									func_204(&(Global_2537071.f_4948), -1135378931, 537254313, 1474183246, 1022400740, Global_2537071.f_4949, 1, 3);
									GAMEPLAY::SET_BIT(&(Global_2537071.f_7), 1);
									iLocal_784 = 0;
									GAMEPLAY::SET_BIT(&(Local_467.f_53), 5);
								}
							}
							else
							{
								OBJECT::CREATE_AMBIENT_PICKUP(-31919185, PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520), iVar2, iVar1, func_52(1), 0, 0);
								func_199(-iVar1, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_SPENT_HOLDUPS(iVar1, 0, 0);
								func_203(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_784 = 0;
								func_412();
								GAMEPLAY::SET_BIT(&(Local_467.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_784 > 0)
			{
				if (func_51(func_52(1)))
				{
					if (NETWORKCASH::_0x7303E27CC6532080(iLocal_784, 0, 0, 0, &uVar3, -1, 0))
					{
						if (func_214())
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2537071.f_7, 1))
							{
								Global_2537071.f_4949 = iLocal_784;
								Global_2537071.f_4950 = iVar2;
								Global_2537071.f_4951 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
								func_204(&(Global_2537071.f_4948), -1135378931, 537254313, 1474183246, 1022400740, Global_2537071.f_4949, 1, 3);
								GAMEPLAY::SET_BIT(&(Global_2537071.f_7), 1);
								iLocal_784 = 0;
								GAMEPLAY::SET_BIT(&(Local_467.f_53), 5);
							}
						}
						else
						{
							OBJECT::CREATE_AMBIENT_PICKUP(-31919185, PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520), iVar2, iLocal_784, func_52(1), 0, 0);
							func_199(-iLocal_784, 1, 1, 1092616192);
							NETWORKCASH::NETWORK_SPENT_HOLDUPS(iLocal_784, 0, 0);
							func_203(1022400740, iLocal_784, &uVar5, 0, 0, 0);
							iLocal_784 = 0;
							func_412();
							GAMEPLAY::SET_BIT(&(Local_467.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_438();
		}
		else
		{
			return;
		}
	}
}

void func_412()
{
	Global_2537071.f_283 = 0;
	Global_2537071.f_284 = 0;
	Global_2537071.f_285 = 0;
}

int func_413()
{
	func_421(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_420())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_419())
	{
		return 1;
	}
	if (func_418(159))
	{
		if (!func_417())
		{
			return 1;
		}
	}
	if (func_418(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_414() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_414()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_414()
{
	switch (func_416())
	{
		case 0:
			return func_415();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_415()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_416()
{
	return Global_30768;
}

bool func_417()
{
	return Global_2450632.f_598;
}

int func_418(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_419()
{
	return Global_2460680;
}

bool func_420()
{
	return Global_2450632.f_593;
}

void func_421(var uParam0)
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
					func_422(iVar0);
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

void func_422(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_46(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_423(uVar4, &bVar5))
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

int func_423(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
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

void func_424()
{
	SYSTEM::WAIT(0);
}

void func_425(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_436())
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
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
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
		if (!func_434())
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
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_331(PLAYER::PLAYER_ID(), 0) && !func_433()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_430(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_429(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar27) && PED::_0x7350823473013C02(uVar27))
				{
					PED::_0x4668D80430D6C299(uVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_428();
					func_427();
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
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_429(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(uVar27, 1);
						}
					}
					if (func_426(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar27) && !PED::IS_PED_IN_ANY_VEHICLE(uVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
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

bool func_426(int iParam0)
{
	return iParam0 == 17;
}

void func_427()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_428()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_429(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
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
			if (iParam0 == 1)
			{
				func_432();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_331(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_431(-2008016205, iParam0);
	}
}

void func_431(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_432()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_433()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_434()
{
	if (func_435() == 0)
	{
		return 1;
	}
	return 0;
}

int func_435()
{
	return Global_1312467.f_18;
}

int func_436()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_437(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2450632.f_684.f_28 && GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2450632.f_684.f_31);
	}
	return Global_2450632.f_684.f_28;
}

void func_438()
{
	Global_2537071.f_8 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_393(Local_73))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73) || (!NETWORK::_0xA1607996431332DF(Local_73) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_73), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_73));
				if (GAMEPLAY::IS_BIT_SET(Local_467.f_52, 22))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_467.f_52, 20))
					{
						if (Local_73.f_3 != 7)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 9))
							{
								AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_544);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_73), 0);
							}
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_73), -1442466670) != 1)
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_73), 453432689, 0))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_73), 453432689, 25000, 1);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_73), 30);
							}
							func_228(4);
							AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_73), 20f, 0);
						}
					}
					else if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 3) || !func_10()) || !func_442())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_146[NETWORK::PARTICIPANT_ID_TO_INT()], 9))
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
							AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_73), uLocal_544);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_73), 0);
						}
					}
					else
					{
						AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_73));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_73), 1);
						AI::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_73), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_73), 0);
					}
				}
			}
		}
		if ((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 3) || !func_10()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_13))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_73.f_13), 1, 1);
					func_47(&(Local_73.f_13));
				}
			}
		}
		if (((GAMEPLAY::IS_BIT_SET(Local_73.f_23, 3) || !func_10()) || GAMEPLAY::IS_BIT_SET(Local_467.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_73.f_14))
				{
					func_47(&(Local_73.f_14));
				}
			}
		}
		if (func_214() && GAMEPLAY::IS_BIT_SET(Global_2537071.f_7, 1))
		{
			if (func_287(Global_2537071.f_4948) == 1)
			{
				func_441(Global_2537071.f_4948, 4);
			}
			else
			{
				func_206(Global_2537071.f_4948);
			}
			GAMEPLAY::CLEAR_BIT(&(Global_2537071.f_7), 1);
		}
		if (Local_73.f_12 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_73))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_73), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_73), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			DECISIONEVENT::REMOVE_SHOCKING_EVENT(Local_73.f_30);
		}
	}
	func_440();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::_0x0032A6DBA562C518();
	if (func_146("SHR_MENU"))
	{
		UI::CLEAR_HELP(1);
	}
	Global_2537071.f_9 = func_180();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_395(Local_467));
	func_162(1, Local_467);
	if (Local_467.f_14 != -1)
	{
		func_261(&(Local_467.f_14));
	}
	Global_2537071.f_27 = Local_467;
	if (Global_2537071.f_5884.f_4 == 1)
	{
		Global_2537071.f_5884.f_4 = 0;
	}
	if (Global_2537071.f_5884.f_5 == 1)
	{
		Global_2537071.f_5884.f_5 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_467.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_534, 0.5f, iLocal_558, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_467.f_53, 7))
	{
		func_408();
		GAMEPLAY::CLEAR_BIT(&(Local_467.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_73.f_23, 21))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_73.f_23, 21))
			{
				iVar0 = 1;
			}
			STATS::_0xCB00196B31C39EB1(30, iLocal_783, iLocal_784, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_467.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_467.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(Local_467.f_1, 0);
	}
	func_439();
}

void func_439()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_440()
{
	AI::CLEAR_SEQUENCE_TASK(&uLocal_541);
	AI::CLEAR_SEQUENCE_TASK(&uLocal_542);
}

void func_441(int iParam0, int iParam1)
{
	if (func_273(iParam0) != -1)
	{
		if (Global_4263954[iParam0].f_66.f_2 == 1)
		{
			Global_4263954[iParam0].f_66.f_11 = iParam1;
		}
	}
}

int func_442()
{
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			uVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_46(iVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar2) == iLocal_566)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_443(struct<21> Param0)
{
	func_449(func_450(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_447(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_73, 73);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_146, 321);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_446())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_51(func_52(0));
		func_51(func_52(1));
		func_51(func_52(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_73.f_44 = 8;
		if (func_445())
		{
			GAMEPLAY::SET_BIT(&(Local_73.f_24), 11);
		}
		else if (func_444())
		{
			GAMEPLAY::SET_BIT(&(Local_73.f_24), 12);
		}
		Local_73.f_28 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_73.f_31 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_13() && !func_386(PLAYER::PLAYER_ID(), 1)) && !func_386(PLAYER::PLAYER_ID(), 2))
		{
			Local_73.f_43 = 2;
			GAMEPLAY::SET_BIT(&(Local_73.f_25), 0);
		}
		else
		{
			Local_73.f_43 = 1;
		}
		Local_73.f_71 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_95(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::_0x0BF3B3BD47D79C08(func_52(1), 0);
	}
	uVar0 = func_126(1190, -1, 0);
	if (GAMEPLAY::IS_BIT_SET(uVar0, 20) && GAMEPLAY::IS_BIT_SET(iVar0, 21))
	{
		GAMEPLAY::SET_BIT(&(Local_467.f_53), 1);
	}
	Local_146[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = 0;
	return 1;
}

int func_444()
{
	if (Local_467.f_50 >= 0 && Local_467.f_50 <= 9)
	{
		if (func_398(5, 6) || func_398(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_467.f_50 >= 10 && Local_467.f_50 <= 14)
	{
		if (func_398(9, 10) || func_398(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_467.f_50 >= 15 && Local_467.f_50 <= 19)
	{
		if (func_398(7, 8) || func_398(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_445()
{
	if (Local_467.f_50 >= 0 && Local_467.f_50 <= 9)
	{
		if (func_398(6, 7) || func_398(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_467.f_50 >= 10 && Local_467.f_50 <= 14)
	{
		if (func_398(10, 11) || func_398(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_467.f_50 >= 15 && Local_467.f_50 <= 19)
	{
		if (func_398(8, 9) || func_398(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_446()
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
		if (func_420())
		{
			return 0;
		}
		if (func_418(157))
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

int func_447(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_439();
			}
			else
			{
				return 0;
			}
		}
		if (!func_448())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_420())
				{
					if (!bParam2)
					{
						func_439();
					}
					else
					{
						return 0;
					}
				}
				if (func_418(157))
				{
					if (!bParam2)
					{
						func_439();
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
					func_439();
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
				func_439();
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
			func_439();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_448()
{
	return Global_1312854;
}

void func_449(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_439();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_450(int iParam0)
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

