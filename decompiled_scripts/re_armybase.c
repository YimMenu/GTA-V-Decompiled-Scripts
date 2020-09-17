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
	Local_232 = { -1744.281f, 3247.029f, 31.7987f };
	Local_235 = { -1783.295f, 3179.115f, 31.8283f };
	Local_238 = { -1780.851f, 3183.688f, 31.8261f };
	Local_255 = { -1591.913f, 2799.37f, 15.9362f };
	fLocal_258 = 218.6321f;
	Local_259 = { -2303.674f, 3384.374f, 30.0307f };
	fLocal_262 = 101.3716f;
	fLocal_280 = 0f;
	Local_421 = { -1894.567f, 3092.903f, 31.8103f };
	Local_424 = { -1963.457f, 3133.104f, 31.8103f };
	Local_427 = { -1960.055f, 3130.99f, 31.8103f };
	iLocal_538 = 1000;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
		func_58();
	}
	uLocal_223 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_223, 0))
		{
			iLocal_537 = 5;
		}
		if (Global_30775)
		{
			iLocal_537 = 5;
		}
		MISC::CLEAR_AREA(-1931.548f, 3026.929f, 31.8104f, 15f, 1, 0, 0, 0);
		switch (iLocal_537)
		{
			case 0:
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -472287501);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -472287501, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, -472287501);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, -472287501);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, -1533126372);
				iLocal_537 = 1;
				break;
			
			case 1:
				func_57();
				iLocal_537 = 2;
				break;
			
			case 2:
				if (func_56())
				{
					iLocal_537 = 3;
				}
				break;
			
			case 3:
				if (func_54())
				{
					iLocal_537 = 4;
				}
				break;
			
			case 4:
				func_53();
				func_52();
				func_51();
				func_50();
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_49(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0))
						{
							PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
						}
					}
				}
				if (bLocal_541)
				{
					func_38();
					SYSTEM::WAIT(100);
					func_3();
					SYSTEM::WAIT(100);
					func_1();
				}
				else
				{
					iLocal_537 = 5;
				}
				break;
			
			case 5:
				func_58();
				break;
		}
		SYSTEM::WAIT(iLocal_538);
	}
}

void func_1()
{
	switch (iLocal_467)
	{
		case 0:
			Local_430[0] = { -1f, 0f, 0f };
			Local_430[1] = { -2f, 0f, 0f };
			Local_430[2] = { 0f, -1.5f, 0f };
			Local_430[3] = { -1f, -1.5f, 0f };
			Local_430[4] = { -2f, -1.5f, 0f };
			Local_446[0] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_421, 57.3018f, Local_430[0]) };
			Local_446[1] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_421, 57.3018f, Local_430[1]) };
			Local_446[2] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_421, 57.3018f, Local_430[2]) };
			Local_446[3] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_421, 57.3018f, Local_430[3]) };
			Local_446[4] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_421, 57.3018f, Local_430[4]) };
			MISC::CLEAR_AREA_OF_VEHICLES(Local_421, 10f, 0, 0, 0, 0, 0, 0);
			iLocal_467 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(1702441027);
			STREAMING::REQUEST_MODEL(1925237458);
			TASK::REQUEST_WAYPOINT_RECORDING("OfficerMarch01");
			iLocal_467 = 2;
			break;
		
		case 2:
			if ((STREAMING::HAS_MODEL_LOADED(1702441027) && STREAMING::HAS_MODEL_LOADED(1925237458)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OfficerMarch01"))
			{
				iLocal_467 = 3;
			}
			break;
		
		case 3:
			switch (iLocal_466)
			{
				case 0:
					MISC::CLEAR_AREA_OF_VEHICLES(Local_421, 10f, 0, 0, 0, 0, 0, 0);
					iLocal_413 = PED::CREATE_PED(6, 1702441027, Local_421, 57.3018f, 1, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, -472287501);
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_413, -1074790547, -1, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_413, 1000);
					PED::SET_PED_KEEP_TASK(iLocal_413, 1);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_413, "OfficerMarch01", 0, 0, -1);
					iLocal_466++;
					break;
				
				case 1:
					MISC::CLEAR_AREA_OF_VEHICLES(Local_421, 10f, 0, 0, 0, 0, 0, 0);
					iVar0 = 0;
					while (iVar0 < 5)
					{
						uLocal_414[iVar0] = PED::CREATE_PED(6, 1702441027, Local_446[iVar0], 57.3018f, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_414[iVar0], -472287501);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_414[iVar0], -1074790547, -1, 1, 1);
						ENTITY::SET_ENTITY_LOD_DIST(uLocal_414[iVar0], 1000);
						PED::SET_PED_KEEP_TASK(uLocal_414[iVar0], 1);
						PED::SET_PED_STEERS_AROUND_PEDS(uLocal_414[iVar0], 0);
						iVar0++;
					}
					iLocal_466++;
					break;
				
				case 2:
					MISC::CLEAR_AREA_OF_VEHICLES(Local_421, 10f, 0, 0, 0, 0, 0, 0);
					iVar0 = 0;
					while (iVar0 < 5)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_413) && ENTITY::DOES_ENTITY_EXIST(uLocal_414[iVar0])) && !PED::IS_PED_INJURED(iLocal_413)) && !PED::IS_PED_INJURED(uLocal_414[iVar0]))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_413))
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_414[iVar0], iLocal_413, Local_430[iVar0], 1f, -1, 1036831949, 1);
							}
						}
						iVar0++;
					}
					iLocal_466++;
					break;
				
				case 3:
					iLocal_467 = 4;
					break;
			}
			break;
		
		case 4:
			if (!iLocal_465)
			{
				if (bLocal_49)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_413, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_413);
						}
						iVar0 = 0;
						while (iVar0 < 5)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_414[iVar0]) && !PED::IS_PED_INJURED(uLocal_414[iVar0]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_414[iVar0]);
							}
							iVar0++;
						}
						iLocal_465 = 1;
					}
					else
					{
						iLocal_465 = 0;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413) && !PED::IS_PED_INJURED(iLocal_413))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_413))
				{
					if (iLocal_464)
					{
						Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_413, 1) };
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						}
						if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_413) && !CAM::IS_SPHERE_VISIBLE(Local_421, 50f)) && SYSTEM::VDIST2(Var5, Var2) > 10000f)
						{
							MISC::CLEAR_AREA_OF_VEHICLES(Local_421, 10f, 0, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iLocal_413, Local_421, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_413, 57.3018f);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_413, "OfficerMarch01", 0, 0, -1);
							func_2();
							iLocal_464 = 0;
							iLocal_462 = 0;
							iLocal_463 = 0;
						}
						else if (!iLocal_462)
						{
							if (!iLocal_463)
							{
								iVar0 = 0;
								while (iVar0 < 5)
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_414[iVar0]) && !PED::IS_PED_INJURED(uLocal_414[iVar0]))
									{
										TASK::CLEAR_PED_TASKS(uLocal_414[iVar0]);
										TASK::TASK_STAND_STILL(uLocal_414[iVar0], -1);
									}
									iVar0++;
								}
								iLocal_463 = 1;
							}
							if (!PED::IS_PED_INJURED(iLocal_413))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_424, 1f, 20000, 1193033728, 1056964608);
								TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_427, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_413, uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								iLocal_462 = 1;
							}
						}
					}
				}
				else
				{
					iLocal_464 = 1;
				}
			}
			break;
	}
}

void func_2()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_413) && ENTITY::DOES_ENTITY_EXIST(uLocal_414[iVar0])) && !PED::IS_PED_INJURED(iLocal_413)) && !PED::IS_PED_INJURED(uLocal_414[iVar0]))
		{
			ENTITY::SET_ENTITY_COORDS(uLocal_414[iVar0], Local_446[iVar0], 1, 0, 0, 1);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_414[iVar0], iLocal_413, Local_430[iVar0], 1f, -1, 1036831949, 1);
		}
		iVar0++;
	}
}

void func_3()
{
	switch (iLocal_284)
	{
		case 0:
			Local_241[0] = { 1f, 0f, 0f };
			Local_241[1] = { -1f, 0f, 0f };
			Local_248[0] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_232, 140.0094f, 1f, 0f, 0f) };
			Local_248[1] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_232, 140.0094f, -1f, 0f, 0f) };
			iLocal_284 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(1702441027);
			STREAMING::REQUEST_MODEL(1925237458);
			TASK::REQUEST_WAYPOINT_RECORDING("AccomMarching01");
			iLocal_284 = 2;
			break;
		
		case 2:
			if ((STREAMING::HAS_MODEL_LOADED(1702441027) && STREAMING::HAS_MODEL_LOADED(1925237458)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("AccomMarching01"))
			{
				iLocal_284 = 3;
			}
			break;
		
		case 3:
			func_37();
			if (bLocal_266)
			{
				iLocal_284 = 4;
			}
			break;
		
		case 4:
			func_35();
			if (!Global_31107[0].f_6)
			{
				func_4();
			}
			break;
	}
}

void func_4()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -472287501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -472287501, 1862763509);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
		{
			TASK::TASK_COMBAT_PED(uLocal_228[0], PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
		{
			TASK::TASK_COMBAT_PED(uLocal_228[1], PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
		{
			if (!iLocal_269 && iLocal_270)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[0], 242628503) != 1)
				{
					TASK::CLEAR_PED_TASKS(uLocal_228[0]);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_282);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_282);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_255, 1f, 20000, 0.25f, 0, fLocal_258);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_282);
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(uLocal_228[0], uLocal_282);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_282);
					iLocal_269 = 1;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
		{
			if (!iLocal_271 && iLocal_272)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[1], 242628503) != 1)
				{
					TASK::CLEAR_PED_TASKS(uLocal_228[1]);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_283);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_283);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_259, 1f, 20000, 0.25f, 0, fLocal_262);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_283);
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(uLocal_228[1], uLocal_283);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_283);
					iLocal_271 = 1;
				}
			}
		}
	}
	if (bLocal_267)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
			{
				iLocal_270 = 1;
				iLocal_269 = 0;
				if (func_34(&uLocal_277))
				{
					func_32(&uLocal_277);
				}
				iLocal_275 = 0;
			}
		}
	}
	switch (iLocal_275)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_228[0]))
					{
						if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN1", 9, 0, 0, 0))
						{
							bLocal_267 = true;
							iLocal_270 = 0;
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_228[0], -1587.327f, 2798.517f, 15.8582f, 1f, 20000, 0.25f, 0, 216.3294f);
							}
							iLocal_275 = 1;
						}
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_267)
			{
				if (func_34(&uLocal_277))
				{
					fLocal_280 = func_6(&uLocal_277);
					if (fLocal_280 > 7f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[0], 1227113341) != 1)
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_228[0], PLAYER::PLAYER_PED_ID(), -1, 0);
									if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN1a", 9, 0, 0, 0))
									{
										iLocal_275 = 2;
									}
								}
							}
						}
					}
				}
				else
				{
					func_5(&uLocal_277);
				}
			}
			break;
		
		case 2:
			if (func_34(&uLocal_277))
			{
				fLocal_280 = func_6(&uLocal_277);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_228[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_228[0])))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[0], 167901368) != 1)
					{
						TASK::TASK_SHOOT_AT_ENTITY(uLocal_228[0], PLAYER::PLAYER_PED_ID(), -1, 0);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 5)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						iLocal_275 = 3;
					}
				}
			}
			break;
		
		case 3:
			break;
	}
	if (bLocal_268)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
			{
				iLocal_272 = 1;
				iLocal_271 = 0;
				if (func_34(&uLocal_277))
				{
					func_32(&uLocal_277);
				}
				iLocal_276 = 0;
			}
		}
	}
	switch (iLocal_276)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_228[1]))
				{
					if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN2", 9, 0, 0, 0))
					{
						bLocal_268 = true;
						iLocal_272 = 0;
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_228[0], -2307.763f, 3385.597f, 29.9984f, 1f, 20000, 0.25f, 0, 58.9552f);
						}
						iLocal_276 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (bLocal_268)
			{
				if (func_34(&uLocal_277))
				{
					fLocal_280 = func_6(&uLocal_277);
					if (fLocal_280 > 7f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[1], 1227113341) != 1)
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_228[1], PLAYER::PLAYER_PED_ID(), -1, 0);
									if (func_9(&uLocal_50, "ARMYAUD", "ARMY_WRN2a", 9, 0, 0, 0))
									{
										iLocal_276 = 2;
									}
								}
							}
						}
					}
				}
				else
				{
					func_5(&uLocal_277);
				}
			}
			break;
		
		case 2:
			if (func_34(&uLocal_277))
			{
				fLocal_280 = func_6(&uLocal_277);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_228[1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_228[1])))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_228[1], 167901368) != 1)
					{
						TASK::TASK_SHOOT_AT_ENTITY(uLocal_228[1], PLAYER::PLAYER_PED_ID(), -1, 0);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 5)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						iLocal_276 = 3;
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_5(var uParam0)
{
	if (!func_34(uParam0))
	{
		func_32(uParam0);
	}
}

float func_6(var uParam0)
{
	if (func_34(uParam0))
	{
		if (func_8(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_7(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_7(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_8(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_9(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_31(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_10(sParam2, iParam3, 0);
}

int func_10(char* sParam0, int iParam1, bool bParam2)
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
					func_30();
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
		if (func_29(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_28();
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
			MISC::CLEAR_BIT(&Global_7356, 20);
			MISC::CLEAR_BIT(&Global_7357, 17);
			MISC::CLEAR_BIT(&Global_7358, 0);
			if (bParam2)
			{
				func_20();
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
				if (func_19())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
			if (func_18())
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
				if (MISC::IS_BIT_SET(Global_7356, 9))
				{
					return 0;
				}
			}
			func_17();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_16();
		func_11();
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
		func_30();
	}
	return 0;
}

void func_11()
{
	if (!func_12())
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

int func_12()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_15())
	{
		return 0;
	}
	if (func_13(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1628237[PLAYER::PLAYER_ID()].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0, 20);
}

bool func_14(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_15()
{
	return -1;
}

void func_16()
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

void func_17()
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
	MISC::CLEAR_BIT(&Global_7357, 16);
}

int func_18()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_19()
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

void func_20()
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
		Global_19486 = func_21();
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

var func_21()
{
	func_22();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_22()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_24(PLAYER::PLAYER_PED_ID());
			if (func_23(iVar0) && (!func_27(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_23(Global_111638.f_2358.f_539.f_4321))
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

bool func_23(int iParam0)
{
	return iParam0 < 3;
}

int func_24(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_25(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_25(int iParam0)
{
	if (func_23(iParam0))
	{
		return func_26(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_26(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_27(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_28()
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

bool func_29(int iParam0, int iParam1)
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
	return MISC::IS_BIT_SET(Global_1377170.f_1048, iParam0);
}

void func_30()
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

void func_31(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_32(var uParam0)
{
	func_33(uParam0, 0f);
}

void func_33(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_7(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_34(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_35()
{
	if (!iLocal_273)
	{
		if (bLocal_49)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_224, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_224);
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_225[iVar0]) && !PED::IS_PED_INJURED(uLocal_225[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_225[iVar0]);
					}
					iVar0++;
				}
				iLocal_273 = 1;
			}
			else
			{
				iLocal_273 = 0;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_224) && !PED::IS_PED_INJURED(iLocal_224))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_224))
		{
			if (iLocal_265)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_224, 1) };
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_224) && !CAM::IS_SPHERE_VISIBLE(Local_232, 50f)) && SYSTEM::VDIST2(Var4, Var1) > 10000f)
				{
					MISC::CLEAR_AREA_OF_VEHICLES(Local_232, 10f, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_COORDS(iLocal_224, Local_232, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_224, 140.0094f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_224, "AccomMarching01", 0, 0, -1);
					func_36();
					iLocal_265 = 0;
					iLocal_263 = 0;
					iLocal_264 = 0;
				}
				else if (!iLocal_263)
				{
					if (!iLocal_264)
					{
						iVar0 = 0;
						while (iVar0 < 2)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_225[iVar0]) && !PED::IS_PED_INJURED(uLocal_225[iVar0]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_225[iVar0]);
								TASK::TASK_STAND_STILL(uLocal_225[iVar0], -1);
							}
							iVar0++;
						}
						iLocal_264 = 1;
					}
					if (!PED::IS_PED_INJURED(iLocal_224))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_281);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_235, 1f, 20000, 1193033728, 1056964608);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_238, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_281);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_224, uLocal_281);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_281);
						iLocal_263 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_265 = 1;
		}
	}
}

void func_36()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_224) && ENTITY::DOES_ENTITY_EXIST(uLocal_225[iVar0])) && !PED::IS_PED_INJURED(iLocal_224)) && !PED::IS_PED_INJURED(uLocal_225[iVar0]))
		{
			ENTITY::SET_ENTITY_COORDS(uLocal_225[iVar0], Local_248[iVar0], 1, 0, 0, 1);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_225[iVar0], iLocal_224, Local_241[iVar0], 1f, -1, 1036831949, 1);
		}
		iVar0++;
	}
}

void func_37()
{
	switch (iLocal_274)
	{
		case 0:
			iLocal_224 = PED::CREATE_PED(6, 1702441027, Local_232, 140.0094f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_224, -1074790547, -1, 1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_224, 1000);
			PED::SET_PED_KEEP_TASK(iLocal_224, 1);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_224, "AccomMarching01", 0, 0, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_224, -472287501);
			iLocal_274++;
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				uLocal_225[iVar0] = PED::CREATE_PED(6, 1702441027, Local_248[iVar0], 140.0094f, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_225[iVar0], -1074790547, -1, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_225[iVar0], 1000);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_225[iVar0], -472287501);
				PED::SET_PED_KEEP_TASK(uLocal_225[iVar0], 1);
				PED::SET_PED_STEERS_AROUND_PEDS(uLocal_225[iVar0], 0);
				iVar0++;
			}
			iLocal_274++;
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (((ENTITY::DOES_ENTITY_EXIST(iLocal_224) && ENTITY::DOES_ENTITY_EXIST(uLocal_225[iVar0])) && !PED::IS_PED_INJURED(iLocal_224)) && !PED::IS_PED_INJURED(uLocal_225[iVar0]))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_224))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_225[iVar0], iLocal_224, Local_241[iVar0], 1f, -1, 1036831949, 1);
					}
				}
				iVar0++;
			}
			iLocal_274++;
			break;
		
		case 3:
			bLocal_266 = true;
			break;
	}
}

void func_38()
{
	if (((func_27(0) || func_27(2)) || func_27(3)) || func_27(4))
	{
		return;
	}
	switch (iLocal_349)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2836.268f, 3392.663f, 22.47202f, -1793.299f, 2846.217f, 281.9545f, 250f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1668.02f, 3121.112f, 20.71911f, -2352.193f, 3484.961f, 286.5063f, 250f, 0, 1, 0))
				{
					iLocal_349 = 1;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(-1281684762);
			STREAMING::REQUEST_MODEL(1702441027);
			STREAMING::REQUEST_MODEL(321739290);
			iLocal_349 = 2;
			break;
		
		case 2:
			if ((STREAMING::HAS_MODEL_LOADED(-1281684762) && STREAMING::HAS_MODEL_LOADED(1702441027)) && STREAMING::HAS_MODEL_LOADED(321739290))
			{
				iLocal_349 = 3;
			}
			break;
		
		case 3:
			iLocal_349 = 4;
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_286 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_286))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(iLocal_286) || (Var0.z > 50f && func_49(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 350, 0)))
						{
							bLocal_341 = true;
						}
					}
				}
			}
			if (bLocal_341)
			{
				switch (iLocal_301)
				{
					case 0:
						uLocal_292 = PED::CREATE_PED(5, 1702441027, -2127.982f, 2824.686f, 50.437f, 34.9781f, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_292, 1);
						uLocal_293[0] = PED::CREATE_PED(5, 1702441027, -1993.875f, 3145.167f, 54.4011f, 147.2257f, 1, 1);
						uLocal_293[1] = PED::CREATE_PED(5, 1702441027, -2176.656f, 3250.501f, 54.3807f, 140.5236f, 1, 1);
						uLocal_293[2] = PED::CREATE_PED(5, 1702441027, -2002.671f, 2960.148f, 31.8103f, 28.6649f, 1, 1);
						func_48();
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_292) && !ENTITY::IS_ENTITY_DEAD(iLocal_292, 0))
						{
							func_47(&uLocal_50, 3, iLocal_292, "ARMY_ANNOUNCER", 0, 1);
							func_46();
						}
						iLocal_301 = 1;
						break;
					
					case 1:
						func_46();
						func_43();
						func_42(&uLocal_293);
						func_42(&uLocal_297);
						func_41();
						func_40();
						if (!iLocal_345)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_285))
							{
								Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
								uVar6 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								Var3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, uVar6, 0f, -150f, 0f) };
								uVar7 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
								uVar7 = uVar7;
								if (!func_39(Var3))
								{
									if (!CAM::IS_SPHERE_VISIBLE(Var3, 10f))
									{
										iLocal_285 = VEHICLE::CREATE_VEHICLE(-1281684762, Var3, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1, 1, 0);
										uVar7 = ENTITY::GET_ENTITY_HEADING(iLocal_285);
										ENTITY::SET_ENTITY_ROTATION(iLocal_285, 0f, 0f, fVar6, 2, 1);
										VEHICLE::CONTROL_LANDING_GEAR(iLocal_285, 3);
										ENTITY::_SET_ENTITY_SOMETHING(iLocal_285, 0);
										uLocal_291 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_285, 5, 1702441027, -1, 1, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_291, 1);
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(uLocal_291, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
											WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_291, -123497569);
										}
										TASK::TASK_PLANE_MISSION(uLocal_291, iLocal_285, iLocal_286, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6, 70f, -1f, 30f, 500, 50, 1);
										iLocal_345 = 1;
									}
								}
							}
						}
						break;
					}
			}
			break;
	}
}

int func_39(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	if (!bLocal_344)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_285) && ENTITY::IS_ENTITY_DEAD(iLocal_285, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
			bLocal_344 = true;
		}
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_285) && !ENTITY::IS_ENTITY_DEAD(iLocal_285, 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_291, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_286)) && !ENTITY::IS_ENTITY_DEAD(iLocal_286, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || !func_49(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 350, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_291);
					TASK::TASK_PLANE_MISSION(iLocal_291, iLocal_285, iLocal_286, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 70f, -1f, 30f, 500, 50, 1);
					PED::SET_PED_KEEP_TASK(iLocal_291, 1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
					bLocal_344 = true;
				}
			}
		}
	}
	if (bLocal_344)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_286 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_286) && !ENTITY::IS_ENTITY_DEAD(iLocal_286, 0))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iLocal_286) && func_49(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 350, 0))
					{
						iLocal_345 = 0;
					}
				}
			}
		}
	}
}

void func_41()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_293[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_293[iVar0], 0))
		{
			if (PED::IS_PED_SHOOTING(uLocal_293[iVar0]))
			{
				iLocal_343 = 1;
			}
		}
		iVar0++;
	}
}

void func_42(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1, 0) || (!ENTITY::IS_ENTITY_DEAD(iVar1, 0) && !ENTITY::IS_ENTITY_IN_AIR(iVar1)))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iVar0], -1074790547, -1, 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0], -1074790547, 1);
						}
						iVar0++;
					}
				}
			}
		}
	}
}

void func_43()
{
	switch (iLocal_303)
	{
		case 0:
			func_45();
			if (!CAM::IS_SPHERE_VISIBLE(-2144.552f, 3244.999f, 31.8106f, 10f))
			{
				iVar4 = 0;
				while (iVar4 < 3)
				{
					uLocal_287[iVar4] = VEHICLE::CREATE_VEHICLE(321739290, Local_317[iVar4], fLocal_337[iVar4], 1, 1, 0);
					uLocal_297[iVar4] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_287[iVar4], 5, 1702441027, -1, 1, 1);
					func_44(&uLocal_297, iVar4);
					iVar4++;
				}
				iLocal_303 = 1;
			}
			break;
		
		case 1:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_287[iVar4]) && !ENTITY::IS_ENTITY_DEAD(uLocal_287[iVar4], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&(uVar0[iVar4]));
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_287[iVar4], Local_327[iVar4], 25f, 0, 321739290, 786469, 5f, -1f);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, -957453492);
					TASK::CLOSE_SEQUENCE_TASK(uVar0[iVar4]);
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_297[iVar4], 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(uLocal_297[iVar4], uVar0[iVar4]);
					}
					TASK::CLEAR_SEQUENCE_TASK(&(uVar0[iVar4]));
				}
				iVar4++;
			}
			iLocal_303 = 2;
			break;
		
		case 2:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_297[iVar4]) && !ENTITY::IS_ENTITY_DEAD(uLocal_297[iVar4], 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_297[iVar4], -1817882002) != 1)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_297[iVar4], 1, 0);
					}
				}
				iVar4++;
			}
			iLocal_303 = 3;
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_297[iVar4]) && !ENTITY::IS_ENTITY_DEAD(uLocal_297[iVar4], 0))
				{
					if (PED::IS_PED_SHOOTING(uLocal_297[iVar4]))
					{
						iLocal_343 = 1;
					}
				}
				iVar4++;
			}
			break;
	}
}

void func_44(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iParam1]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[iParam1], 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iParam1], 1);
		WEAPON::GIVE_WEAPON_TO_PED((*uParam0)[iParam1], 1752584910, 20, 1, 1);
		PED::SET_PED_ACCURACY((*uParam0)[iParam1], 100);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[iParam1], -472287501);
		PED::SET_PED_KEEP_TASK((*uParam0)[iParam1], 1);
	}
}

void func_45()
{
	Local_317[0] = { -2158f, 3254.864f, 31.8106f };
	Local_317[1] = { -2138.572f, 3253.477f, 31.8106f };
	Local_317[2] = { -2133.471f, 3243.626f, 31.8106f };
	Local_327[0] = { -2226.64f, 3172.212f, 31.8103f };
	Local_327[1] = { -2156.083f, 3197.557f, 31.8106f };
	Local_327[2] = { -1899.385f, 3054.546f, 31.8102f };
	fLocal_337[0] = 192.2879f;
	fLocal_337[1] = 149.8821f;
	fLocal_337[2] = 158.0152f;
}

void func_46()
{
	iLocal_302 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if ((!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()) || (!ENTITY::IS_ENTITY_DEAD(uVar0, 0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || iLocal_343)
		{
			return;
		}
	}
	if (!iLocal_342)
	{
		if (iLocal_302 == 0)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN1", 9, 0, 0, 0))
			{
				if (!func_34(&uLocal_346))
				{
					func_5(&uLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 1)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN2", 9, 0, 0, 0))
			{
				if (!func_34(&uLocal_346))
				{
					func_5(&uLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 2)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN3", 9, 0, 0, 0))
			{
				if (!func_34(&uLocal_346))
				{
					func_5(&uLocal_346);
				}
				iLocal_342 = 1;
			}
		}
		else if (iLocal_302 == 3)
		{
			if (func_9(&uLocal_50, "ARMYAUD", "ARMY_ANN4", 9, 0, 0, 0))
			{
				if (!func_34(&uLocal_346))
				{
					func_5(&uLocal_346);
				}
				iLocal_342 = 1;
			}
		}
	}
	if (iLocal_342)
	{
		if (func_34(&uLocal_346))
		{
			if (func_6(&uLocal_346) > 25f)
			{
				iLocal_342 = 0;
				func_32(&uLocal_346);
			}
		}
	}
}

void func_47(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_48()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_293[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_293[iVar0], 0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_293[iVar0], 1);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_293[iVar0], 1752584910, 20, 1, 1);
			PED::SET_PED_ACCURACY(uLocal_293[iVar0], 100);
			TASK::TASK_COMBAT_PED(uLocal_293[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_293[iVar0], -472287501);
			PED::SET_PED_KEEP_TASK(uLocal_293[iVar0], 1);
		}
		iVar0++;
	}
}

int func_49(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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

void func_50()
{
	if (iLocal_539 > 0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 1);
			iLocal_539 = 0;
		}
	}
	switch (iLocal_539)
	{
		case 0:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS"))
				{
					iLocal_539 = 1;
				}
			}
			break;
		
		case 1:
			AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
			iLocal_539 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_51()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1599.593f, 2818.15f, -17.645f, -1612.423f, 2806.997f, 17.645f, 51f, 1, 0, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2301.089f, 3385.031f, -31.086f, -2305.302f, 3379.441f, 31.086f, 16f, 1, 0, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2287.138f, 3385.616f, 31.124f, -2292.554f, 3378.428f, 31.124f, 19.8f, 1, 0, 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 5)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
}

void func_52()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2080.115f, 3292.193f, -11.667f, -2112.049f, 3224.331f, 11.667f, 115f, 0, 0, 0))
		{
			bLocal_541 = false;
		}
		else
		{
			bLocal_541 = true;
		}
	}
}

void func_53()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
	{
		if (!iLocal_540)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -472287501);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -472287501, 1862763509);
			bLocal_49 = true;
			iLocal_540 = 1;
		}
	}
	else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) && bLocal_49)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -472287501);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, -472287501, 1862763509);
		iLocal_540 = 0;
	}
}

int func_54()
{
	STREAMING::REQUEST_MODEL(1702441027);
	while (!STREAMING::HAS_MODEL_LOADED(1702441027))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_255, 10f) || func_55(PLAYER::PLAYER_PED_ID(), Local_255, 1) > 100f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_228[0]))
			{
				uLocal_228[0] = PED::CREATE_PED(6, 1702441027, Local_255, fLocal_258, 1, 1);
				MISC::CLEAR_AREA(Local_255, 10f, 1, 0, 0, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(Local_255 - Vector(10f, 10f, 10f), Local_255 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_228[0], -1074790547, -1, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_228[0], 1000);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_228[0], -472287501);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_228[0], 1);
				func_47(&uLocal_50, 4, uLocal_228[0], "ARMY_Guard01", 0, 1);
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_228[0], "WORLD_HUMAN_GUARD_STAND_ARMY", Local_255, fLocal_258, -1, 0, 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_228[0], 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_228[0], PLAYER::PLAYER_PED_ID(), -1, 1024, 4);
				}
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_259, 10f) || func_55(PLAYER::PLAYER_PED_ID(), Local_259, 1) > 100f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_228[1]))
			{
				uLocal_228[1] = PED::CREATE_PED(6, 1702441027, Local_259, fLocal_262, 1, 1);
				MISC::CLEAR_AREA(Local_259, 10f, 1, 0, 0, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(Local_259 - Vector(10f, 10f, 10f), Local_259 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_228[1], -1074790547, -1, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_228[1], 1000);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_228[1], -472287501);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_228[1], 1);
				func_47(&uLocal_50, 5, uLocal_228[1], "ARMY_Guard02", 0, 1);
				TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_228[1], "WORLD_HUMAN_GUARD_STAND_ARMY", Local_259, fLocal_262, -1, 0, 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_228[1], 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_228[1], PLAYER::PLAYER_PED_ID(), -1, 1024, 4);
				}
				return 1;
			}
		}
	}
	return 0;
}

float func_55(int iParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

int func_56()
{
	return 1;
}

void func_57()
{
}

void func_58()
{
	func_68();
	func_67();
	func_66();
	func_65();
	func_62();
	func_60();
	func_59();
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -472287501, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1862763509, -472287501);
	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_59()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_285))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iLocal_291, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_285, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_291);
			TASK::TASK_PLANE_MISSION(iLocal_291, iLocal_285, 0, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 70f, -1f, 30f, 500, 50, 1);
			PED::SET_PED_KEEP_TASK(iLocal_291, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_291);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_285, 0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_285);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_292))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_292))
		{
			PED::DELETE_PED(&iLocal_292);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_292);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_293[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_293[iVar0]))
			{
				PED::DELETE_PED(&(uLocal_293[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_293[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_297[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_297[iVar0]))
			{
				PED::DELETE_PED(&(uLocal_297[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_297[iVar0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_287[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_287[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_287[iVar0]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_287[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_60()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_469))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_481))
		{
			HUD::REMOVE_BLIP(&uLocal_481);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_469))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_469);
		}
		else
		{
			func_61(&iLocal_469, &uLocal_475);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_469);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_474))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_474))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_474);
		}
		else
		{
			func_61(&iLocal_474, &uLocal_476);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_474);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_470))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_482))
		{
			HUD::REMOVE_BLIP(&uLocal_482);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_470))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_470);
		}
		else
		{
			func_61(&iLocal_470, &uLocal_477);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_470);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_471))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_483))
		{
			HUD::REMOVE_BLIP(&uLocal_483);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_471))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_471);
		}
		else
		{
			func_61(&iLocal_471, &uLocal_478);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_471);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_472))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_472))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_472);
		}
		else
		{
			func_61(&iLocal_472, &uLocal_479);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_472);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_473))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_473))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_473);
		}
		else
		{
			func_61(&iLocal_473, &uLocal_480);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_473);
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "CargoTakeOff");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "LazerTakeOff");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "LazerTakeOff");
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "ArmyBaseNew");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "ArmyBaseNew");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "ArmyBaseNew");
}

void func_61(var uParam0, var uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_62()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_420))
		{
			HUD::REMOVE_BLIP(&uLocal_420);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_413) || (func_63(0) && CAM::IS_SCREEN_FADED_OUT()))
		{
			PED::DELETE_PED(&iLocal_413);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_413);
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_414[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_414[iVar0]) || (func_63(0) && CAM::IS_SCREEN_FADED_OUT()))
			{
				PED::DELETE_PED(&(uLocal_414[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_414[iVar0]));
			}
		}
		iVar0++;
	}
	TASK::REMOVE_WAYPOINT_RECORDING("OfficerMarch01");
}

int func_63(bool bParam0)
{
	if (bParam0)
	{
		if (func_64())
		{
			return 1;
		}
	}
	if (func_27(14))
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	if (Global_110583)
	{
		return 1;
	}
	if (!func_27(14) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_385[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_403[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_403[iVar0]));
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_385[iVar0]));
		}
		iVar0++;
	}
}

void func_66()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_351[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_356[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_356[iVar0]));
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_351[iVar0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_361[iVar0]));
		}
		iVar0++;
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "SingleRoute");
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "SingleRoute");
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SingleRoute");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SingleRoute");
}

void func_67()
{
}

void func_68()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_225[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_225[iVar0]) || (func_63(0) && CAM::IS_SCREEN_FADED_OUT()))
			{
				PED::DELETE_PED(&(uLocal_225[iVar0]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_225[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_228[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_228[iVar0]) || (func_63(0) && CAM::IS_SCREEN_FADED_OUT()))
			{
				PED::DELETE_PED(&(uLocal_228[iVar0]));
			}
			else if (!ENTITY::IS_ENTITY_DEAD(uLocal_228[iVar0], 0))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_228[iVar0], "WORLD_HUMAN_GUARD_STAND_ARMY", -1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_228[iVar0], 0);
				PED::SET_PED_KEEP_TASK(uLocal_228[iVar0], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_228[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_224))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_231))
		{
			HUD::REMOVE_BLIP(&uLocal_231);
		}
		if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_224) || (func_63(0) && CAM::IS_SCREEN_FADED_OUT()))
		{
			PED::DELETE_PED(&iLocal_224);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_224);
		}
	}
	TASK::REMOVE_WAYPOINT_RECORDING("AccomMarching01");
}

