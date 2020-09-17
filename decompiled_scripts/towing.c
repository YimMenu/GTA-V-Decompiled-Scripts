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
	Local_93 = { 500f, 500f, 500f };
	fLocal_428 = 0f;
	fLocal_429 = 0f;
	fLocal_430 = 0f;
	fLocal_431 = 0.8f;
	fLocal_432 = 1.5f;
	fLocal_433 = 0.5f;
	Local_437 = { 401.55f, -1631.309f, 29.3f };
	iLocal_440 = 1;
	iLocal_441 = 1;
	iLocal_649 = -1323100960;
	Local_2531 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2534 = 275.5635f;
	iLocal_2596 = -1;
	iLocal_2597 = -1;
	iLocal_2598 = -1;
	iLocal_2599 = -1;
	fLocal_2600 = 0f;
	sLocal_2618 = "";
	sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2931 = 1;
	iLocal_2932 = 1;
	iLocal_2933 = 1;
	iLocal_2941 = 1;
	iLocal_2976 = 1;
	iLocal_3037 = -1;
	Local_3060 = { -229.8159f, -1172f, 21.8557f };
	iLocal_3115 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		if (!func_302())
		{
			func_300(&Global_110289, 3);
			func_271(SCRIPT::GET_THIS_SCRIPT_NAME());
		}
		func_267();
	}
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0) && ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(ScriptParam_0, 0) && !ENTITY::IS_ENTITY_DEAD(ScriptParam_0.f_1, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_1, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	func_266(&Local_650);
	func_265(&Local_1870);
	func_264();
	iVar0 = 0;
	func_263(&uLocal_3091);
	switch (ScriptParam_0.f_2)
	{
		case 1:
			if (ScriptParam_0.f_4)
			{
				iLocal_420 = ScriptParam_0.f_3;
				if (iVar0 > 0)
				{
					iLocal_2604 = iVar0;
				}
				else
				{
					iLocal_2604 = func_262(100000f, iLocal_420, Global_111638.f_19968.f_9);
				}
			}
			else
			{
				if (Global_111638.f_19968.f_3 == 0)
				{
					bLocal_2959 = true;
				}
				if (!func_261())
				{
					func_258();
				}
				else
				{
					iLocal_2604 = Global_111638.f_19968.f_9;
					iLocal_420 = Global_111638.f_19968.f_2;
				}
				ScriptParam_0.f_3 = iLocal_420;
			}
			iLocal_2992 = 0;
			break;
	}
	if (!bLocal_2959)
	{
		func_257(&Local_2348, 3, 0, "TOWDISPATCH", 0, 1);
	}
	if (iLocal_420 == 0)
	{
		iLocal_2962 = 1;
		if ((Global_111638.f_19968.f_6 % 2) == 0)
		{
			bLocal_2965 = true;
		}
	}
	else if (iLocal_420 == 2)
	{
		bLocal_2966 = true;
		iLocal_2962 = 1;
	}
	if (iLocal_420 == 3 || iLocal_420 == 1)
	{
		iLocal_2961 = 1;
		iLocal_2962 = 1;
		iLocal_3051 = 1;
	}
	else if (iLocal_420 == 4)
	{
		iLocal_2962 = 1;
		iLocal_3051 = Local_1870[func_256()].f_27;
	}
	func_255();
	func_231(&ScriptParam_0);
	if (Global_111638.f_19968.f_3 >= 5)
	{
		bLocal_2945 = true;
		bLocal_2945 = bLocal_2945;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_3109 = ScriptParam_0.f_1;
			uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == -1323100960 || ENTITY::GET_ENTITY_MODEL(iVar1) == -442313018)
				{
					iLocal_3109 = iVar1;
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3109))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3109, 1, 1);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3109);
			VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_3109, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_3109, 1);
		}
	}
	uLocal_3112 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_3113 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 0);
	func_230();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_226(&uLocal_2656);
		func_225();
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (bLocal_2945 && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::NEW_LOAD_SCENE_START(408.8376f, -1638.952f, 28.2928f, -3.24f, 0f, -62.6001f, 20f, 0);
				while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				MISC::CLEAR_AREA_OF_VEHICLES(408.8376f, -1638.952f, 28.2928f, 8f, 0, 0, 0, 0, 0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		if (iLocal_3115 < 15)
		{
			func_223(&iLocal_3109, &uLocal_2985, &Local_2996, &Local_2625, &cLocal_3068, &iLocal_3052, iLocal_3047, bLocal_2958, &iLocal_2967, iLocal_2949, bLocal_2939, bLocal_461, iLocal_3115, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2992)
			{
				case 0:
					if (iLocal_3115 > 4 && iLocal_3115 < 15)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3109, 0))
						{
						}
						if (iLocal_420 != 2 && iLocal_420 != 4)
						{
							if (!func_220(&uLocal_3122, Local_2996[0].f_6, iLocal_3109, &uLocal_3042, &uLocal_3043, bLocal_2945))
							{
								iLocal_3084 = 15;
								func_267();
							}
						}
						if (bLocal_2959 || uLocal_2955)
						{
							func_219(&uLocal_3123, iLocal_3109, &uLocal_3045, &uLocal_3046, bLocal_2945);
						}
					}
					if (bLocal_2959)
					{
						if (iLocal_3115 >= 7)
						{
							func_214(iLocal_3109, Local_2996[0].f_6, Local_3017, &(Local_2996[0].f_8), &Local_2625, &cLocal_3068, &Local_437, bLocal_2959, &(Local_2996[0]));
						}
					}
					bLocal_2948 = false;
					if (((iLocal_420 == 0 || iLocal_420 == 2) && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (bLocal_2965 && iLocal_2976)
						{
							func_212();
							func_211(Local_2996[0].f_6, Local_2996[0]);
						}
						if (!bLocal_2959)
						{
							func_200();
						}
					}
					else if ((iLocal_420 == 1 && iLocal_3115 > 4) && iLocal_3115 < 17)
					{
						if (func_196())
						{
							func_193();
						}
						if (iLocal_3119 > 0)
						{
							func_189();
						}
					}
					else if (iLocal_420 == 3)
					{
						if ((iLocal_3115 == 5 && iLocal_3117 < 1) && !iLocal_2930)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2996[0].f_6))
								{
									iLocal_2930 = 1;
									TASK::CLEAR_PED_TASKS(Local_2996[0]);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2996[0], PLAYER::PLAYER_PED_ID(), 0);
								}
							}
						}
					}
					if (iLocal_2950 && !bLocal_442)
					{
						func_185(&(Local_1870[func_256()]), &(Local_1870[func_256()].f_10), Local_650[iLocal_2604].f_1, &(Local_2996[0]), &(Local_2996[0].f_2), &uLocal_2989, fLocal_3066, sLocal_2619, &sLocal_2620, iLocal_3051);
					}
					if (iLocal_420 == 4)
					{
						func_183(&uLocal_3116, iLocal_3110, iLocal_3111, iLocal_3109, &(Local_2996[0].f_2), iLocal_3051, sLocal_2619, &sLocal_2620, &iLocal_2984, bLocal_2945, &(Local_2996[0].f_6));
					}
					if (!bLocal_2945)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2984) && !ENTITY::IS_ENTITY_DEAD(iLocal_2984, 0))
						{
							if (func_175(iLocal_2984, 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
							{
								bLocal_2942 = true;
								TASK::TASK_SMART_FLEE_PED(iLocal_2984, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							}
							if (func_173())
							{
								bLocal_2943 = true;
							}
						}
					}
					if (bLocal_442 && !bLocal_2964)
					{
						if (func_175(Local_2996[0], Local_2996[0].f_6, &uLocal_412, &iLocal_419, 0, 1, 1, 1, 0))
						{
							func_172();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
							{
								TASK::CLEAR_PED_TASKS(Local_2996[0]);
								PED::SET_PED_KEEP_TASK(Local_2996[0], 1);
								TASK::TASK_SMART_FLEE_PED(Local_2996[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_1, 0))
							{
								TASK::CLEAR_PED_TASKS(Local_2996[0].f_1);
								PED::SET_PED_KEEP_TASK(Local_2996[0].f_1, 1);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1, 256);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
								if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_1, 0))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_2996[0].f_1, uLocal_421);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
								iLocal_3084 = 18;
							}
							if (!bLocal_2959)
							{
								switch (iLocal_419)
								{
									case 16:
										if (iLocal_420 == 2)
										{
											iLocal_3084 = 17;
											func_267();
										}
										else
										{
											iLocal_3084 = 16;
											func_267();
										}
										break;
									
									case 2:
										func_171(&Local_2348, "TOWAUD", "TOW_DISP_LAW", 9, 1, 0, 0);
										iLocal_3084 = 3;
										func_267();
										break;
								}
							}
							else
							{
								iLocal_3084 = 21;
								func_267();
							}
							if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
							{
								func_267();
							}
						}
						if (func_175(Local_2996[0].f_1, Local_2996[0].f_6, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 0))
						{
							func_172();
							if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_1, 0))
							{
								TASK::CLEAR_PED_TASKS(Local_2996[0].f_1);
								PED::SET_PED_KEEP_TASK(Local_2996[0].f_1, 1);
								TASK::TASK_SMART_FLEE_PED(Local_2996[0].f_1, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
								iLocal_3084 = 18;
							}
						}
					}
					else if (bLocal_2964)
					{
					}
					if (!bLocal_2948 && func_170(0))
					{
						if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3109, 0))
						{
							if (!iLocal_468)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_6))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
									{
										func_147(&uLocal_399, ENTITY::GET_ENTITY_COORDS(Local_2996[0].f_6, 1), 0, 0, 1, 1, 1);
									}
								}
							}
							else
							{
								func_147(&uLocal_399, Local_2629, 0, 0, 1, 1, 1);
							}
						}
					}
					if (!func_170(0))
					{
						func_146(&uLocal_399, 0, 0);
					}
					func_144(&uLocal_3094, 7f, 1);
					func_143();
					func_142();
					if (((!bLocal_467 || iLocal_3115 >= 15) || uLocal_2944) || bLocal_2939)
					{
						if (func_55())
						{
							func_49();
						}
					}
					if (iLocal_3115 == 9)
					{
						if (iLocal_420 == 1 || iLocal_420 == 3)
						{
							func_13(Local_2348, &Local_2996, &iLocal_3109);
						}
					}
					break;
			}
			if (func_1(ScriptParam_0))
			{
				func_267();
			}
		}
	}
}

int func_1(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	if (bLocal_2970)
	{
		iLocal_3084 = 13;
		return 1;
	}
	if (func_12())
	{
		iLocal_3084 = 11;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2996[0].f_6, 0, 7000))
			{
				iLocal_3084 = 15;
				return 1;
			}
		}
	}
	if (bLocal_467)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_3052) > 50000)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3109) && !ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_3109, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 625f)
			{
				iLocal_3084 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2942)
	{
		iLocal_3084 = 22;
		return 1;
	}
	if (bLocal_2943)
	{
		iLocal_3084 = 23;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3109))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3109))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
		{
			iLocal_3084 = 2;
			return 1;
		}
	}
	switch (Param0.z)
	{
		case 1:
			if (iLocal_3115 > 4 && iLocal_3115 < 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_6))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						iLocal_3084 = 5;
						return 1;
					}
					else if (func_8())
					{
						return 1;
					}
				}
			}
			if (func_2())
			{
				return 1;
			}
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_442)
					{
						if (!bLocal_2964)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
								{
									iLocal_3084 = 8;
									return 1;
								}
							}
						}
						if (bLocal_2965)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_1))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_1, 0))
								{
									iLocal_3084 = 9;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_3084 = 3;
		return 1;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_3109))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_3109);
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_3109))
	{
		iLocal_3084 = 4;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (!iLocal_2951)
	{
		if (func_3(&uLocal_3100, 180f))
		{
			iLocal_2951 = 1;
			func_171(&Local_2348, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (func_3(&uLocal_3100, 300f))
	{
		if (iLocal_420 != 2)
		{
			iLocal_3084 = 14;
			return 1;
		}
	}
	return 0;
}

int func_3(var uParam0, float fParam1)
{
	if (func_7(uParam0))
	{
		if (func_4(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_4(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_5(bool bParam0)
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

bool func_6(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

bool func_7(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_8()
{
	bVar0 = false;
	bVar1 = false;
	if (iLocal_420 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_3115 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!func_11(Local_2625[0]))
	{
		if (!iLocal_2952)
		{
			if (func_9(Local_2625[0], 0) > (fLocal_430 + 400f))
			{
				func_171(&Local_2348, "TOWAUD", sVar2, 9, 0, 0, 0);
				iLocal_2952 = 1;
			}
		}
		if (func_9(Local_2625[0], 0) > (fLocal_430 + 450f))
		{
			iLocal_3084 = 11;
			return 1;
		}
	}
	return 0;
}

float func_9(struct<3> Param0, int iParam3)
{
	return func_10(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam3);
}

float func_10(int iParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

int func_11(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return Global_98796.f_345 > 0;
}

void func_13(struct<165> Param0, int iParam165, int iParam166)
{
	if (!iLocal_463)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_2605 > 1)
			{
				if (func_48(iParam165, iParam166))
				{
					if (func_47())
					{
						Local_477 = { func_46() };
						func_44();
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
					else
					{
						iLocal_463 = 1;
						iLocal_2605 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2605)
	{
		case 0:
			if (!func_47())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2605 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && iLocal_468) && !func_43("TOWT_OBJ_04", 0, 0))
			{
				if (!func_47())
				{
					func_257(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(208926421) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-23209175) == 1)
					{
						if (iLocal_420 == 1)
						{
							func_171(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_483 = "TOW_TRN_C1";
						}
						else if (iLocal_420 == 3)
						{
							func_171(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_C";
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 1)
					{
						if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0], "TOWTRAINF", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH";
						}
						else if (Global_111638.f_19968.f_5 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0], "TOWILLEGALMAN2", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_483 = "TOW_MECH2";
						}
						else
						{
							func_42(Param0, iParam165);
						}
						bLocal_464 = true;
					}
					else if (iLocal_420 == 3)
					{
						if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
						{
							func_257(&Param0, 5, (*iParam165)[0], "TOWBREAKM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CONV";
						}
						else if (Global_111638.f_19968.f_7 == 2)
						{
							func_257(&Param0, 6, (*iParam165)[0], "TOWBREAKHIPM", 0, 1);
							func_171(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_483 = "TOW_BRK_CON2";
						}
						else
						{
							func_41(Param0, iParam165);
						}
						bLocal_464 = true;
					}
				}
				else if (func_39(sLocal_483))
				{
					iLocal_2605 = 2;
				}
			}
			break;
		
		case 3:
			func_38(Param0, iParam165);
			if (iLocal_465)
			{
				iLocal_2605 = 2;
			}
			break;
		
		case 2:
			if (func_37(iParam166))
			{
				if (bLocal_464)
				{
					if (iLocal_463)
					{
						if (!func_47())
						{
							if (func_14(&Local_2348, "TOWAUD", sLocal_483, &Local_477, 8, 0, 0))
							{
								iLocal_463 = 0;
								iLocal_2605 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_37(iParam166);
			break;
	}
}

bool func_14(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_15(sParam2, iParam4, 0);
}

int func_15(char* sParam0, int iParam1, bool bParam2)
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
					func_35();
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
		if (func_34(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_33();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_21();
		func_16();
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
		func_35();
	}
	return 0;
}

void func_16()
{
	if (!func_17())
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

int func_17()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_20())
	{
		return 0;
	}
	if (func_18(PLAYER::PLAYER_ID()))
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

bool func_18(int iParam0)
{
	return func_19(iParam0, 20);
}

bool func_19(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_20()
{
	return -1;
}

void func_21()
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

void func_22()
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

int func_23()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
{
	if (func_32(14))
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
		Global_19486 = func_26();
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

int func_26()
{
	func_27();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_27()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_30(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_29(PLAYER::PLAYER_PED_ID());
			if (func_28(iVar0) && (!func_32(14) || Global_110589))
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

bool func_32(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_33()
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

bool func_34(int iParam0, int iParam1)
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

void func_35()
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

void func_36(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_37(var uParam0)
{
	switch (iLocal_2606)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_465 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					iLocal_465 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	switch (iLocal_2606)
	{
		case 1:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1923051535) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1923051535) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1923051535) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1923051535) == 0)
			{
				if (iLocal_420 == 1)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (iLocal_420 == 3)
				{
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWTRAINF", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, (*uParam165)[0], "TOWBREAKM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, (*uParam165)[0], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_465)
					{
						if (func_171(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_465 = 1;
						}
					}
				}
			}
			break;
	}
}

int func_39(char* sParam0)
{
	if (func_47())
	{
		MemCopy(&uVar0, {func_40()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_40()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		func_257(&uParam0, 3, (*uParam165)[0], "TOWPEDA", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		func_257(&uParam0, 3, (*uParam165)[0], "TOWPEDB", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		func_257(&uParam0, 3, (*uParam165)[0], "TOWPEDD", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		func_257(&uParam0, 3, (*uParam165)[0], "TOWPEDE", 0, 1);
		func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_483 = "TOW_GEN_MCH4";
	}
}

void func_42(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	func_257(&uParam0, 3, (*uParam165)[0], "TOWPEDC", 0, 1);
	func_171(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_483 = "TOW_GEN_MCH2";
}

bool func_43(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_44()
{
	Global_19671 = 0;
	func_45();
}

void func_45()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_20805 = 6;
		return;
	}
}

struct<6> func_46()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8])))
					{
						return Global_19673[iVar8];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_47()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, var uParam1)
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_2606 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0[0]->f_6) && !ENTITY::IS_ENTITY_DEAD(uParam0[0]->f_6, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!bLocal_427)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0[0]->f_6, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0[0]->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0[0]->f_6))
			{
				iLocal_2606 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0], 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0], 1))
		{
			iLocal_2606 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, 0))
		{
			iLocal_2606 = 6;
			return 1;
		}
	}
	return 0;
}

void func_49()
{
	func_53(&Global_110289, 3);
	func_300(&(Global_111638.f_19968.f_1), 8192);
	func_50();
	func_193();
}

void func_50()
{
	func_51();
}

int func_51()
{
	if (func_52(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_53(var uParam0, int iParam1)
{
	func_54(uParam0, iParam1);
}

void func_54(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_55()
{
	switch (iLocal_3115)
	{
		case 1:
			func_141(14);
			if (iLocal_420 == 3)
			{
				if (func_139(&Local_3063, &fLocal_3066, &uLocal_3054, &uLocal_3057))
				{
					iLocal_3115 = 2;
				}
			}
			else
			{
				iLocal_3115 = 2;
			}
			break;
		
		case 2:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				switch (iLocal_420)
				{
					case 3:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACC_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 2:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ABN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 0:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (bLocal_2965)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
							{
								iLocal_3115 = 4;
							}
						}
						else if (func_171(&Local_2348, "TOWAUD", "TOW_HAN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 1:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					
					case 4:
						func_257(&Local_2348, 4, 0, "TOWDISPATCH", 0, 1);
						if (func_171(&Local_2348, "TOWAUD", "TOW_ACD_EXP2", 9, 0, 0, 0))
						{
							iLocal_3115 = 4;
						}
						break;
					}
			}
			break;
		
		case 4:
			switch (iLocal_420)
			{
				case 3:
					if (func_132("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 10);
						}
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 2:
					if (func_132("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2632 = { (Local_2625[0] + 15f), (Local_2625[0].f_1 + 15f), (Local_2625[0].f_2 + 15f) };
						Local_2635 = { (Local_2625[0] - 15f), (Local_2625[0].f_1 - 15f), (Local_2625[0].f_2 - 15f) };
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2632, Local_2635, 0, 1);
						iLocal_2963 = 1;
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2996[0].f_6, 1);
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 0:
					if (func_132("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 1:
					if (func_132("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2996[0].f_6, 1);
						func_130();
						VEHICLE::SET_RANDOM_TRAINS(0);
						func_129(0, 0);
						func_129(1, 0);
						func_129(2, 0);
						func_129(3, 0);
						func_129(4, 0);
						func_129(5, 0);
						func_129(6, 0);
						func_129(7, 0);
						func_129(8, 0);
						func_129(9, 0);
						func_129(10, 0);
						func_129(11, 0);
						iLocal_2960 = 1;
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				case 4:
					if (func_132("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2996[0].f_6, 1);
						func_130();
						func_263(&uLocal_3100);
						iLocal_3115 = 6;
					}
					break;
				
				default:
					break;
			}
			if (!HUD::DOES_BLIP_EXIST(Local_2996[0].f_8))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_6))
				{
					Local_2996[0].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[0].f_6);
					HUD::SET_BLIP_COLOUR(Local_2996[0].f_8, 3);
					HUD::SET_BLIP_ROUTE(Local_2996[0].f_8, 1);
				}
			}
			break;
		
		case 5:
			func_124();
			if (func_116(&iLocal_3117, 0, "TOW_BREAK1"))
			{
				iLocal_3115 = 7;
			}
			break;
		
		case 6:
			if (!func_47())
			{
				func_115(sLocal_3114, 7500, 1);
				StringCopy(&cLocal_3068, sLocal_3114, 64);
				if (iLocal_420 == 3)
				{
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 7:
			switch (iLocal_420)
			{
				case 3:
				case 1:
				case 4:
					sVar2 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (func_11(Local_2629))
					{
						Local_2629 = { Local_70[0] };
					}
					func_114(8, &Local_3017);
					sVar2 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_420 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2996[0], iLocal_3109, 0))
			{
				bLocal_2957 = true;
			}
			func_113();
			if (func_106(sVar2, Local_2629))
			{
				if (iLocal_420 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2996[0], iLocal_3109, 0))
				{
					bLocal_2957 = false;
					iLocal_2953 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0]))
					{
						Local_2996[0].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[0]);
						HUD::SET_BLIP_COLOUR(Local_2996[0].f_9, 3);
						HUD::SET_BLIP_SCALE(Local_2996[0].f_9, 0.7f);
					}
					iLocal_3115 = 5;
				}
				else
				{
					iLocal_3115 = 9;
				}
			}
			if (func_104(&uVar3, &uVar6, &uVar9))
			{
				bLocal_2935 = true;
				iLocal_3115 = 9;
			}
			break;
		
		case 9:
			if (iLocal_420 == 3)
			{
				sVar2 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar2 = "TOWT_OBJ_03Ga";
			}
			if (func_103(sVar2))
			{
				func_146(&uLocal_399, 0, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2996[0].f_6, 0, 0);
				if (iLocal_3038 == 0)
				{
					iLocal_2941 = 0;
					iLocal_3115 = 15;
				}
				else
				{
					func_115("TOWT_OBJ_05", 7500, 1);
					StringCopy(&cLocal_3068, "TOWT_OBJ_05", 64);
					iLocal_3115 = 7;
				}
			}
			break;
		
		case 15:
			func_102();
			if (bLocal_2939)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_2985))
				{
					HUD::REMOVE_BLIP(&uLocal_2985);
				}
			}
			HUD::CLEAR_HELP(1);
			fLocal_429 = (fLocal_429 + 500f);
			if (iLocal_470 != 0 && !bLocal_2935)
			{
				if (bLocal_2945)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_470) < 12000)
					{
						fLocal_429 = (fLocal_429 + 50f);
					}
				}
			}
			if (!bLocal_2945)
			{
				fLocal_429 = 0f;
			}
			fLocal_3067 = func_4(&uLocal_3091);
			fLocal_3067 = (fLocal_3067 * 1000f);
			uVar1 = SYSTEM::ROUND(fLocal_3067);
			STATS::PLAYSTATS_ODDJOB_DONE(uVar1, 14, 0);
			if (iLocal_420 != 2)
			{
			}
			if (bLocal_2945)
			{
				fLocal_429 = (fLocal_429 - fLocal_428);
			}
			iLocal_472 = SYSTEM::ROUND(fLocal_429);
			func_101(&uLocal_2608, "TOW_UI07", 500, SYSTEM::ROUND(fLocal_428), SYSTEM::ROUND(fLocal_429), "TOW_UI08", 4000, 1);
			if (iLocal_472 > 0)
			{
				func_62(0, iLocal_472);
			}
			func_61(1);
			iLocal_3115 = 16;
			break;
		
		case 16:
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(1);
			}
			if (!func_56(&uLocal_2608, 0))
			{
				HUD::CLEAR_THIS_PRINT("TOW_TUT_04A");
				HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
				iLocal_3115 = 17;
			}
			break;
		
		case 17:
			return 1;
			break;
	}
	Local_70[0] = { Local_70[0] };
	return 0;
}

int func_56(var uParam0, int iParam1)
{
	if (!func_7(&(uParam0->f_2)))
	{
		func_59(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_7(&(uParam0->f_5)))
			{
				func_59(&(uParam0->f_5));
				func_58(uParam0, 1051260355);
			}
		}
		if (func_7(&(uParam0->f_5)))
		{
			if (func_4(&(uParam0->f_5)) > 0.33f)
			{
				func_57(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_4(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_7(&(uParam0->f_5)))
		{
			func_59(&(uParam0->f_5));
			func_58(uParam0, 1051260355);
		}
		else if (func_4(&(uParam0->f_5)) > 0.33f)
		{
			func_57(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_57(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_58(var uParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_59(var uParam0)
{
	func_60(uParam0, 0f);
}

void func_60(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_61(bool bParam0)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_26())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

void func_62(int iParam0, int iParam1)
{
	func_64(Global_111638.f_24899[iParam0], func_100(iParam0), iParam1, 0, 0);
	switch (iParam0)
	{
		case 3:
			Global_111638.f_24899.f_69 = (Global_111638.f_24899.f_69 + iParam1);
			break;
		
		case 2:
			Global_111638.f_24899.f_70 = (Global_111638.f_24899.f_70 + iParam1);
			break;
		
		case 0:
			Global_111638.f_24899.f_71 = (Global_111638.f_24899.f_71 + iParam1);
			break;
	}
	STATS::STAT_GET_INT(func_63(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_63(iParam0, 1), iVar0, 1);
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1214599177;
					break;
				
				case 1:
					return 1155443333;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 376570353;
					break;
				
				case 1:
					return -643951985;
					break;
				
				case 2:
					return 134385628;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 967323175;
					break;
				
				case 1:
					return 357361784;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1787919671;
					break;
				
				case 1:
					return -494685207;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1593841643;
					break;
				
				case 1:
					return -559343533;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return -250890056;
					break;
				
				case 1:
					return -677448510;
					break;
				
				case 2:
					return 364367040;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return -785352478;
					break;
				
				case 1:
					return -1385258870;
					break;
				
				case 2:
					return -576365380;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1699455290;
					break;
				
				case 1:
					return 1718653583;
					break;
				
				case 2:
					return 1930528662;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 1606564553;
					break;
				
				case 1:
					return -1163886152;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return -404923039;
					break;
				
				case 1:
					return -1466275797;
					break;
				
				case 2:
					return -93632737;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return 1257260115;
					break;
				
				case 1:
					return 1317268386;
					break;
				
				case 2:
					return -1196961064;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2095192627;
					break;
				
				case 1:
					return 218419230;
					break;
				
				case 2:
					return 515434046;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1524227131;
					break;
				
				case 1:
					return -2004221950;
					break;
				
				case 2:
					return 1152527909;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1932333809;
					break;
				
				case 1:
					return 128471725;
					break;
				
				case 2:
					return 110476041;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return -963649420;
					break;
				
				case 1:
					return -1344429287;
					break;
				
				case 2:
					return 1977325971;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					return 218116163;
					break;
				
				case 1:
					return 137735898;
					break;
			}
			break;
	}
	return 1214599177;
}

void func_64(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_99(iParam0) == 3)
	{
		return;
	}
	if (func_99(iParam0) == 4)
	{
		return;
	}
	func_65(func_99(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1762386298;
					break;
				
				case 1:
					iVar1 = -544246134;
					break;
				
				case 2:
					iVar1 = -1147816992;
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 138536943;
					break;
				
				case 1:
					iVar1 = 691239862;
					break;
				
				case 2:
					iVar1 = -1133981805;
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_65(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_98();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_97(99, 1);
					func_96(-656546900, iParam3);
					break;
				
				case 1:
					func_96(-2098183071, iParam3);
					break;
				
				case 2:
					func_96(1578119842, iParam3);
					break;
			}
			func_81(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_76(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_96(-1190521599, iParam3);
							break;
						
						case 1:
							func_96(490143716, iParam3);
							break;
						
						case 2:
							func_96(121069433, iParam3);
							break;
					}
					if (func_76(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_96(219506691, iParam3);
							break;
						
						case 1:
							func_96(1871505786, iParam3);
							break;
						
						case 2:
							func_96(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_96(27639974, iParam3);
							break;
						
						case 1:
							func_96(422258364, iParam3);
							break;
						
						case 2:
							func_96(316202960, iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_96(1806738963, iParam3);
							break;
						
						case 1:
							func_96(1576781520, iParam3);
							break;
						
						case 2:
							func_96(671882196, iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_96(408653638, iParam3);
									break;
								
								case 1:
									func_96(-424799277, iParam3);
									break;
								
								case 2:
									func_96(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_96(2038531975, iParam3);
									break;
								
								case 1:
									func_96(-572903575, iParam3);
									break;
								
								case 2:
									func_96(-953947924, iParam3);
									break;
							}
							if (func_76(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_96(-445823242, iParam3);
									break;
								
								case 1:
									func_96(-1386757215, iParam3);
									break;
								
								case 2:
									func_96(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_96(-1744069936, iParam3);
									break;
								
								case 1:
									func_96(799609312, iParam3);
									break;
								
								case 2:
									func_96(181688102, iParam3);
									break;
							}
							func_75(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_97(95, iParam3);
					break;
				
				case 1:
					func_97(97, iParam3);
					break;
				
				case 2:
					func_97(96, iParam3);
					break;
			}
			func_97(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_68(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_68(iVar1);
	}
	iVar5 = (Global_58686[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58686[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58686[iVar2] = 2147483647;
				}
				else
				{
					Global_58686[iVar2] = (Global_58686[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_96(-330339780, iParam3);
					break;
				
				case 1:
					func_96(1697564429, iParam3);
					break;
				
				case 2:
					func_96(1674823841, iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58686[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58686[iVar2];
			Global_58686[iVar2] = (Global_58686[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1] = iParam1;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_1 = iParam2;
		Global_111638.f_20559.f_233[iVar2].f_2[Global_111638.f_20559.f_233[iVar2].f_1].f_2 = iParam3;
		Global_111638.f_20559.f_233[iVar2]++;
		Global_111638.f_20559.f_233[iVar2].f_1++;
		if (Global_111638.f_20559.f_233[iVar2].f_1 > 10)
		{
			Global_111638.f_20559.f_233[iVar2].f_1 = 0;
		}
	}
	func_67(iParam0);
	if (Global_41431 == 15)
	{
		func_66(0);
	}
	return 1;
}

void func_66(bool bParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_3 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1];
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_4 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_1;
			Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_5 = Global_111638.f_20559.f_233[iVar0].f_2[iVar1].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58694[iVar0][0] = Global_111638.f_20559[iVar0];
		Global_58694.f_31[iVar0][0] = Global_111638.f_20559.f_11[iVar0];
		Global_58694.f_62[iVar0][0] = Global_111638.f_20559.f_22[iVar0];
		Global_58694.f_93[iVar0][0] = Global_111638.f_20559.f_33[iVar0];
		Global_58694.f_124[iVar0][0] = Global_111638.f_20559.f_44[iVar0];
		Global_58694.f_155[iVar0][0] = Global_111638.f_20559.f_55[iVar0];
		Global_58694.f_186[iVar0][0] = Global_111638.f_20559.f_66[iVar0];
		Global_58694.f_217[iVar0][0] = Global_111638.f_20559.f_77[iVar0];
		Global_58694.f_248[iVar0][0] = Global_111638.f_20559.f_88[iVar0];
		if (!bParam0)
		{
			Global_58694[iVar0][1] = Global_111638.f_20559[iVar0];
			Global_58694.f_31[iVar0][1] = Global_111638.f_20559.f_11[iVar0];
			Global_58694.f_62[iVar0][1] = Global_111638.f_20559.f_22[iVar0];
			Global_58694.f_93[iVar0][1] = Global_111638.f_20559.f_33[iVar0];
			Global_58694.f_124[iVar0][1] = Global_111638.f_20559.f_44[iVar0];
			Global_58694.f_155[iVar0][1] = Global_111638.f_20559.f_55[iVar0];
			Global_58694.f_186[iVar0][1] = Global_111638.f_20559.f_66[iVar0];
			Global_58694.f_217[iVar0][1] = Global_111638.f_20559.f_77[iVar0];
			Global_58694.f_248[iVar0][1] = Global_111638.f_20559.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_67(int iParam0)
{
	iVar0 = Global_58686[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(1153264002, iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(-1921710979, iVar0, 1);
			break;
	}
}

void func_68(int iParam0)
{
	if (iParam0 == 8)
	{
		func_74(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_74(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_74(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_74(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_71(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_71(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_71(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_71(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_71(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_71(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_70()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_70()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_69(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_70()
{
	iVar0 = 0;
	return iVar0;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_72(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_72(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_73();
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

int func_73()
{
	return Global_1312745;
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_73();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_75(int iParam0)
{
	func_97(93, iParam0);
	func_97(29, iParam0);
	func_97(30, iParam0);
}

bool func_76(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_78(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_78(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_78(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_78(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_77(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_77(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_77(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_77(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_77(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_77(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_70()].f_6174.f_10, iParam0);
}

int func_77(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_72(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar1 = func_80(iParam0, iParam1);
	uVar2 = func_79(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_79(int iParam0)
{
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
	return iVar0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_73();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam1);
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

int func_81(bool bParam0)
{
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(-656546900, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(-2098183071, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(1578119842, &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(-422142831, &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(-422142831, iVar1, 1);
		func_95(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_82(27, 1);
	return 1;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_83(iParam0, iParam1);
}

int func_83(int iParam0, int iParam1)
{
	if (func_32(14) && !func_94(iParam0))
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
	if (func_93(&Global_4270065))
	{
		if (func_91(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_84(&Global_4270065, iParam0))
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

int func_84(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	func_87(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_85(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_85(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_32(14) && !func_94(iParam1))
	{
		return 0;
	}
	if (func_91(uParam0, iParam1))
	{
		return 0;
	}
	if (func_90(uParam0) < 0f)
	{
		func_89(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_86(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_87(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_88(uParam0, iVar0);
		iVar0++;
	}
	func_89(uParam0, (Global_4270064 - 0.5f));
}

void func_88(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_89(var uParam0, float fParam1)
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

float func_90(var uParam0)
{
	return uParam0->f_80;
}

bool func_91(var uParam0, int iParam1)
{
	return func_92(uParam0, iParam1) != -1;
}

int func_92(var uParam0, int iParam1)
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

bool func_93(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_96(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_97(int iParam0, int iParam1)
{
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57254[iParam0].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_57254[iParam0])
	{
		STATS::STAT_GET_INT(Global_57254[iParam0].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_57254[iParam0].f_1, iVar0, 1);
	}
}

void func_98()
{
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(52740893, &iVar0, -1);
		if (!Global_58686[0] == iVar0)
		{
			Global_58686[0] = iVar0;
		}
		STATS::STAT_GET_INT(1153264002, &iVar0, -1);
		if (!Global_58686[1] == iVar0)
		{
			Global_58686[1] = iVar0;
		}
		STATS::STAT_GET_INT(-1921710979, &iVar0, -1);
		if (!Global_58686[2] == iVar0)
		{
			Global_58686[2] = iVar0;
		}
	}
}

int func_99(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 99;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 101;
			break;
		
		case 3:
			return 102;
			break;
		
		case 4:
			return 103;
			break;
		
		case 5:
			return 104;
			break;
		
		case 6:
			return 105;
			break;
		
		case 7:
			return 106;
			break;
		
		case 8:
			return 107;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 109;
			break;
		
		case 11:
			return 110;
			break;
		
		case 12:
			return 111;
			break;
		
		case 13:
			return 112;
			break;
		
		case 14:
			return 113;
			break;
		
		case 15:
			return 25;
			break;
	}
	return 0;
}

void func_101(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam7);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam5);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_59(&(uParam0->f_2));
	uParam0->f_1 = iParam6;
	uParam0->f_9 = 1;
}

void func_102()
{
	Global_111638.f_19968.f_3++;
	Global_111638.f_19968.f_2 = iLocal_420;
	switch (iLocal_420)
	{
		case 2:
			Global_111638.f_19968.f_4++;
			break;
		
		case 3:
			Global_111638.f_19968.f_7++;
			break;
		
		case 0:
			Global_111638.f_19968.f_6++;
			break;
		
		case 1:
			Global_111638.f_19968.f_5++;
			break;
		
		case 4:
			Global_111638.f_19968.f_8++;
			break;
	}
}

int func_103(char* sParam0)
{
	if (iLocal_3037 == -1)
	{
	}
	if (Local_2996[iLocal_3037].f_15)
	{
		if ((func_4(&(Local_2996[iLocal_3037].f_11)) - Local_2996[iLocal_3037].f_14) > 120f)
		{
			VEHICLE::EXPLODE_VEHICLE(Local_2996[iLocal_3037].f_6, 1, 0);
		}
	}
	if (func_104(&uVar0, &uVar3, &uVar6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2996[iLocal_3037], 0) && PED::IS_PED_IN_VEHICLE(Local_2996[iLocal_3037], iLocal_3109, 0))
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_3109, 6f, 2, 0);
			iLocal_466 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iLocal_3037]) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iLocal_3037], 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_GOTO_ENTITY_OFFSET(0, Local_2996[0].f_6, 20000, 2f, 0f, 1f, 0);
				iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
				if (iVar7 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				else if (iVar7 == 1)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				}
				else if (iVar7 == 2)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
				}
				else
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
				TASK::TASK_PERFORM_SEQUENCE(Local_2996[iLocal_3037], uLocal_421);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
				PED::SET_PED_KEEP_TASK(Local_2996[iLocal_3037], 1);
			}
			if ((Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 == 1) || Global_111638.f_19968.f_3 == 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2984) && !ENTITY::IS_ENTITY_DEAD(iLocal_2984, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 227.082f, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2984, 0))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2984, uLocal_421);
						PED::SET_PED_KEEP_TASK(iLocal_2984, 1);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
				}
			}
			if (func_47())
			{
				func_172();
			}
			if ((Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 == 1) || Global_111638.f_19968.f_3 == 4)
			{
				if (Global_111638.f_19968.f_3 == 0)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDA", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_3 == 1)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDB", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_3 == 4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0], "TOWBREAKM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THNK", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0], "TOWBREAKHIPM", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_BRK_THAN", 9, 0, 0, 0);
				}
			}
			else if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_THANK2", 9, 0, 0, 0);
				}
			}
		}
		if (!bLocal_2959)
		{
		}
		iLocal_468 = 0;
		HUD::REMOVE_BLIP(&(Local_2996[iLocal_3037].f_8));
		func_59(&uLocal_3088);
		iLocal_3038 = (iLocal_3038 - 1);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iLocal_3037].f_6, 0))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[iLocal_3037].f_6))
		{
			iLocal_468 = 0;
			func_146(&uLocal_399, 0, 0);
			HUD::SET_BLIP_ROUTE(Local_2996[iLocal_3037].f_8, 0);
			HUD::REMOVE_BLIP(&(Local_2996[iLocal_3037].f_8));
			if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iLocal_3037].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iLocal_3037].f_6, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_2996[iLocal_3037].f_8))
				{
					Local_2996[iLocal_3037].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[iLocal_3037].f_6);
					HUD::SET_BLIP_COLOUR(Local_2996[iLocal_3037].f_8, 3);
				}
			}
			if (iLocal_420 == 1)
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_UNHOOK2", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			else if (iLocal_420 == 3)
			{
				if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0], "TOWBREAKM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_UNHK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
				else if (Global_111638.f_19968.f_7 == 2)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 6, Local_2996[0], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_2978)
					{
						if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_HOOK", 9, 1, 0, 0))
						{
							iLocal_2978 = 1;
						}
					}
				}
			}
			func_59(&uLocal_3088);
			if (!bLocal_2957)
			{
				if (func_47())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(1);
					HUD::CLEAR_PRINTS();
					func_115(sParam0, 7500, 1);
				}
				if (!func_47())
				{
					if (iLocal_2931)
					{
						HUD::CLEAR_PRINTS();
						func_115(sParam0, 7500, 1);
						iLocal_2931 = 0;
					}
					else
					{
						HUD::CLEAR_PRINTS();
						func_115(sParam0, 7500, 1);
					}
					StringCopy(&cLocal_3068, sParam0, 64);
				}
			}
			iLocal_3115 = 7;
		}
	}
	return 0;
}

int func_104(var uParam0, var uParam1, var uParam2)
{
	if (iLocal_3037 != -1)
	{
		if (!func_11(Local_3017.f_14))
		{
			Local_2629 = { Local_3017.f_14 };
			*uParam0 = { Local_3017.f_7 };
			*uParam1 = { Local_3017.f_10 };
			*uParam2 = Local_3017.f_13;
		}
		else
		{
			*uParam0 = { Local_3017 };
			*uParam1 = { Local_3017.f_3 };
			*uParam2 = Local_3017.f_6;
		}
		if (!bLocal_2959)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2629, 30f, 30f, 2f, 1, 1, 0))
				{
					if (iLocal_420 == 0 || iLocal_420 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 1);
							bLocal_2939 = true;
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iLocal_3037].f_6))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2996[iLocal_3037].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2941)
				{
					func_105("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iLocal_3037].f_6, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[iLocal_3037].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2996[iLocal_3037].f_6, 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[iLocal_3037].f_6)))
					{
						if (func_47())
						{
							func_172();
						}
						func_146(&uLocal_399, 0, 0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_106(char* sParam0, struct<3> Param1)
{
	bVar0 = true;
	if (!bLocal_2945 && !bLocal_2956)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3109) && !ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
		{
			iVar2 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_3109);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, 0))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iVar2))
				{
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2) != Local_2996[0].f_6)
					{
						if (!iLocal_2972)
						{
							func_257(&uLocal_484, 3, iLocal_2984, "TONYA", 0, 1);
							if (func_171(&uLocal_484, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
							{
								iLocal_2972 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2972 = 0;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iVar1].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iVar1].f_6, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[iVar1].f_6) && func_112())
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_3109, 1);
					func_109();
					func_146(&uLocal_399, 0, 0);
					iLocal_468 = 1;
					if (iLocal_2961 && !PED::IS_PED_IN_VEHICLE(Local_2996[iVar1], iLocal_3109, 0))
					{
						bVar0 = false;
						if (iLocal_3120 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_3120 = 5;
						}
					}
					if (bVar0)
					{
						func_108(&uLocal_3094);
						HUD::SET_BLIP_ROUTE(Local_2996[iVar1].f_8, 0);
						iLocal_2967 = 0;
						func_107(Local_2996[iVar1].f_8);
						Local_2996[iVar1].f_14 = func_4(&(Local_2996[iVar1].f_11));
						if (iLocal_2992 == 0)
						{
							Local_2996[iVar1].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_430 = func_9(Param1, 0);
							Local_2625[0] = { Param1 };
						}
						if (iLocal_420 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_2996[0].f_6, 0, 0);
						}
						func_59(&uLocal_3100);
						HUD::SET_BLIP_COLOUR(Local_2996[iVar1].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_2996[iVar1].f_8, 1);
						if (iLocal_420 == 0 && bLocal_2965)
						{
						}
						else if (iLocal_2932)
						{
							func_115(sParam0, 7500, 1);
							iLocal_2932 = 0;
						}
						StringCopy(&cLocal_3068, sParam0, 64);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_2625[0], 6f, 0, 0, 0, 0, 0, 0);
						iLocal_3037 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_107(var uParam0)
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		HUD::REMOVE_BLIP(&uParam0);
	}
}

void func_108(var uParam0)
{
	func_57(uParam0);
	StringCopy(&cLocal_317, "", 32);
}

void func_109()
{
	func_110("TOW_TUT_03");
	func_110("TOW_TUT_02");
	func_110("TOW_TUT_01");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03a");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03G");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJ_03Ga");
	HUD::CLEAR_THIS_PRINT("TOWT_OBJS_03");
}

void func_110(char* sParam0)
{
	if (func_111(sParam0))
	{
		HUD::CLEAR_HELP(1);
	}
}

bool func_111(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_112()
{
	if (bLocal_2959)
	{
		if (bLocal_2602 && !func_47())
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

void func_113()
{
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6)) || (Global_111638.f_19968.f_3 == 0 || Global_111638.f_19968.f_3 > 2))
	{
		return;
	}
	switch (iLocal_3050)
	{
		case 0:
			if (!func_7(&uLocal_3106))
			{
				func_263(&uLocal_3106);
				iLocal_3050 = 1;
			}
			break;
		
		case 1:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 10f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
						if (iVar0 == 0)
						{
							func_105("TOW_TUT_04C", -1);
						}
						else if (iVar0 == 1)
						{
							func_105("TOW_TUT_02", -1);
						}
						else
						{
							func_105("TOW_TUT_04C", -1);
						}
						func_59(&uLocal_3106);
						iLocal_3050 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						func_105("TOW_TUT_03", -1);
						func_59(&uLocal_3106);
						iLocal_3050 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_7(&uLocal_3106))
			{
				if (func_4(&uLocal_3106) > 15f)
				{
					if (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !func_47())
					{
						func_105("TOW_TUT_01", -1);
						iLocal_3050 = 4;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_114(int iParam0, var uParam1)
{
	if (func_11(Local_45[0]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_45[0] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[1] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_45[2] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_45[3] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_45[4] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_45[5] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_45[6] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_45[7] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_70[0] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_115(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_116(int iParam0, int iParam1, char* sParam2)
{
	sParam2 = sParam2;
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2958)
			{
				if ((func_123(Local_2996[iParam1].f_6, iLocal_3109, &iLocal_2603, 10, 150f, 4f, 1) || iLocal_2953) || iLocal_468)
				{
					if (!bLocal_2936)
					{
						iLocal_2603 = 0;
						func_122(&iLocal_2598);
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[iParam1], -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2996[iParam1], PLAYER::PLAYER_PED_ID(), -1);
						}
						bLocal_2936 = true;
					}
					if (bLocal_2936)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3109, ENTITY::GET_ENTITY_COORDS(Local_2996[iParam1], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2996[iParam1], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								TASK::STOP_ANIM_TASK(Local_2996[iParam1], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_121())
							{
								if (iLocal_420 == 1)
								{
									if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
									{
										func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1], "TOWTRAINF", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET", 9, 1, 0, 0);
									}
									else if (Global_111638.f_19968.f_5 == 2)
									{
										func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1], "TOWILLEGALMAN2", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_GREET2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2996[iParam1], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								else if (iLocal_420 == 3)
								{
									if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
									{
										func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 5, Local_2996[iParam1], "TOWBREAKM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT", 9, 1, 0, 0);
									}
									else if (Global_111638.f_19968.f_7 == 2)
									{
										func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
										func_257(&Local_2348, 6, Local_2996[iParam1], "TOWBREAKHIPM", 0, 1);
										func_171(&Local_2348, "TOWAUD", "TOW_BRK_GRT2", 9, 1, 0, 0);
									}
									TASK::TASK_ENTER_VEHICLE(Local_2996[iParam1], iLocal_3109, 20000, 0, 2f, 1048577, 0);
								}
								if (iLocal_2953)
								{
									HUD::REMOVE_BLIP(&(Local_2996[iParam1].f_8));
									if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iParam1]))
									{
										Local_2996[iParam1].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[iParam1]);
										HUD::SET_BLIP_COLOUR(Local_2996[iParam1].f_8, 3);
										HUD::SET_BLIP_SCALE(Local_2996[iParam1].f_8, 0.7f);
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_3109, ENTITY::GET_ENTITY_COORDS(Local_2996[iParam1], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2977)
							{
								if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
								{
									func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 5, Local_2996[iParam1], "TOWBREAKM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_CALLING", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
								else if (Global_111638.f_19968.f_7 == 2)
								{
									func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									func_257(&Local_2348, 6, Local_2996[iParam1], "TOWBREAKHIPM", 0, 1);
									if (func_171(&Local_2348, "TOWAUD", "TOW_BRK_CALL", 9, 1, 0, 0))
									{
										iLocal_2977 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2940 = true;
			func_59(&uLocal_3100);
			func_59(&uLocal_3085);
			func_107(Local_2996[iParam1].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_2996[0].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iParam1]))
				{
					Local_2996[0].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[iParam1]);
					HUD::SET_BLIP_COLOUR(Local_2996[0].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2996[0].f_9, 0.7f);
				}
			}
			func_115("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			PED::ADD_RELATIONSHIP_GROUP("TOWBUDDIES", &uLocal_2995);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_2995, 1862763509);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2996[iParam1], uLocal_2995);
			func_120(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(Local_2996[iParam1], iLocal_3109, 0))
			{
				if (func_117(&uLocal_3124, Local_2996[iParam1], 1125515264, 30000))
				{
					iLocal_3084 = 11;
					func_267();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2996[iParam1], iLocal_3109, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3109, 9);
					func_107(Local_2996[0].f_9);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2996[iParam1], iLocal_3109, 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_420 == 1)
				{
					if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_INTRUCK", 9, 1, 0, 0);
						}
					}
					else if (Global_111638.f_19968.f_5 == 2)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_GETIN", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
				else if (iLocal_420 == 3)
				{
					if (Global_111638.f_19968.f_7 == 0 || Global_111638.f_19968.f_7 == 1)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 5, Local_2996[0], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 5, Local_2996[0], "TOWBREAKM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STRT", 9, 1, 0, 0);
						}
					}
					else if (Global_111638.f_19968.f_7 == 2)
					{
						if (iLocal_2953)
						{
							func_257(&Local_2348, 6, Local_2996[0], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
						else
						{
							func_257(&Local_2348, 6, Local_2996[0], "TOWBREAKHIPM", 0, 1);
							func_171(&Local_2348, "TOWAUD", "TOW_BRK_STR2", 9, 1, 0, 0);
						}
					}
					*iParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Local_2996[iParam1], iLocal_3109, 0))
			{
				func_120(iParam1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					if (iLocal_2953 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
					{
						return 1;
					}
				}
				if (!HUD::DOES_BLIP_EXIST(Local_2996[0].f_8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2996[iParam1].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2996[iParam1].f_6, 0))
					{
						Local_2996[0].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[iParam1].f_6);
						HUD::SET_BLIP_COLOUR(Local_2996[iParam1].f_8, 3);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
					{
						func_115("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_3068, "TOWT_OBJ_03", 64);
					}
				}
				func_59(&uLocal_3085);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_117(var uParam0, int iParam1, int iParam2, int iParam3)
{
	iParam2 = iParam2;
	iParam3 = iParam3;
	switch (*uParam0)
	{
		case 0:
			uParam0->f_1 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = func_118(iParam1, 1);
			*uParam0 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_118(int iParam0, int iParam1)
{
	return func_119(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_119(int iParam0, int iParam1, int iParam2)
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
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_120(int iParam0)
{
	bLocal_2958 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_2996[iVar0].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2996[iVar0].f_8));
			}
		}
		iVar0++;
	}
}

int func_121()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_3109);
			if (fVar0 > 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_122(int iParam0)
{
	if (*iParam0 != -1)
	{
		AUDIO::STOP_SOUND(*iParam0);
		AUDIO::RELEASE_SOUND_ID(*iParam0);
		*iParam0 = -1;
	}
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			uVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uVar0, 0) && PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (bParam6)
			{
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && func_118(iParam0, 1) < fParam4)
			{
				*iParam2++;
			}
			else
			{
				*iParam2 = 0;
			}
			if (((*iParam2 > iParam3 || func_118(iParam0, 1) < 8f) && ENTITY::GET_ENTITY_SPEED(iParam1) < fParam5) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*iParam2 = 0;
				return 1;
			}
		}
	}
	if (bParam6)
	{
	}
	return 0;
}

void func_124()
{
	if (!bLocal_2940)
	{
		iVar0 = SYSTEM::ROUND(((300f - func_128(&uLocal_3100)) * 1000f));
		if (iLocal_420 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_125(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
		}
	}
}

void func_125(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_127(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_126(7, iVar0);
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

void func_126(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_127(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

float func_128(var uParam0)
{
	if (func_7(uParam0))
	{
		if (func_6(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_5(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_129(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_110276, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_110276, iParam0);
	}
	Global_110275 = 1;
}

void func_130()
{
	iVar0 = func_131(&Local_45, Local_2625[0], 400f);
	if (iVar0 != -1)
	{
		Local_2629 = { Local_45[iVar0] };
		func_114(iVar0, &Local_3017);
	}
	else
	{
		Local_2629 = { Local_45[0] };
	}
}

int func_131(var uParam0, struct<3> Param1, float fParam4)
{
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_11(*uParam0[iVar0]))
		{
			fVar3 = SYSTEM::VDIST2(*uParam0[iVar0], Param1);
			if (fVar3 < fVar2 && fVar3 > fParam4)
			{
				fVar2 = fVar3;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 == -1)
	{
	}
	return iVar1;
}

int func_132(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)
{
	fLocal_430 = func_9(Local_3063, 0);
	Local_2625[0] = { Local_3063 };
	sLocal_3114 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_138(Local_3063, fLocal_3066, uParam2, 0))
		{
			func_137(Local_2996[0].f_6, &uLocal_3042, &uLocal_3044);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_2996[0].f_6, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2996[0].f_6, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2996[0].f_6, 1, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2996[0].f_6, 1);
			return 1;
		}
	}
	else if (func_133(bParam4, 0))
	{
		func_137(Local_2996[0].f_6, &uLocal_3042, &uLocal_3044);
		VEHICLE::SET_FORCE_HD_VEHICLE(Local_2996[0].f_6, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2996[0].f_6, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2996[0].f_6, 1, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2996[0].f_6, 1);
		return 1;
	}
	return 0;
}

int func_133(bool bParam0, int iParam1)
{
	iVar0 = 0;
	if (!func_135(Local_650[iLocal_2604].f_1, Local_650[iLocal_2604].f_4, &iVar0, 0, iParam1))
	{
		return 0;
	}
	fLocal_430 = func_9(Local_650[iLocal_2604].f_1, 0);
	Local_2625[0] = { Local_650[iLocal_2604].f_1 };
	if (Local_650[iLocal_2604] == 2)
	{
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_650[iLocal_2604] == 4)
	{
		fLocal_3066 = -1f;
		iLocal_2950 = 1;
		iLocal_3110 = VEHICLE::CREATE_VEHICLE(1171614426, Local_1870[func_256()].f_23, Local_1870[func_256()].f_26, 1, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3110, 0))
		{
			VEHICLE::SET_VEHICLE_SIREN(iLocal_3110, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3110, 1, 1, 0);
			iLocal_3111 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3110, 4, -1286380898, -1, 1, 1);
		}
		if (!func_11(Local_1870[func_256()].f_17))
		{
			uLocal_2347 = func_134(Local_1870[func_256()].f_17, Local_1870[func_256()].f_20);
		}
		switch (Local_650[iLocal_2604].f_21)
		{
			case 1:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2996[0].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2996[0].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_442 = true;
		if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
		{
			Local_2996[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, -1106743555, -1, 1, 1);
		}
		else if (Global_111638.f_19968.f_5 == 2)
		{
			Local_2996[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, 891398354, -1, 1, 1);
		}
		else
		{
			Local_2996[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, uLocal_2989[0], -1, 1, 1);
		}
	}
	return 1;
}

var func_134(struct<3> Param0, struct<3> Param3)
{
	PED::SET_PED_NON_CREATION_AREA(Param0, Param3);
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param0, Param3, 1);
	return PED::ADD_SCENARIO_BLOCKING_AREA(Param0, Param3, 0, 1, 1, 1);
}

int func_135(struct<3> Param0, var uParam3, int iParam4, bool bParam5, var uParam6)
{
	*iParam4 = func_136(&Local_2996);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_3039 >= 2)
	{
		iLocal_3039 = 0;
	}
	Local_2996[*iParam4].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_2987[iLocal_3039], Param0, uParam3, 1, 1, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2996[*iParam4].f_6, 1, 1);
	iLocal_3039++;
	fLocal_430 = func_9(Param0, 0);
	if (iLocal_420 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!func_11(Local_650[iLocal_2604].f_10))
	{
		Local_2996[*iParam4].f_17 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(Local_650[iLocal_2604].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2996[*iParam4].f_17 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(Param0, fVar0, 0f, 0);
	}
	Local_2996[*iParam4].f_18 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(Param0, fVar1, 2.5f, 0);
	Local_2996[*iParam4].f_19 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2996[*iParam4].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2996[*iParam4].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2996[*iParam4].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2996[*iParam4].f_6, 1);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2996[*iParam4].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2996[*iParam4].f_6, 1f);
			VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_2996[*iParam4].f_6, 1);
		}
	}
	if (!bLocal_2958 && uParam6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2996[*iParam4].f_6))
		{
			Local_2996[*iParam4].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[*iParam4].f_6);
			HUD::SET_BLIP_COLOUR(Local_2996[*iParam4].f_8, 3);
		}
	}
	iLocal_3038++;
	func_263(&(Local_2996[*iParam4].f_11));
	return 1;
}

int func_136(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (uParam0[iVar0]->f_6 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_137(int iParam0, var uParam1, var uParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		*uParam2 = *uParam1;
	}
}

int func_138(struct<3> Param0, float fParam3, var uParam4, int iParam5)
{
	if (!func_135(Param0, fParam3, uParam4, 1, iParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2996[*uParam4].f_6, 4, 0, 0);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_2996[*uParam4].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2950 = 1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2996[*uParam4].f_6, 1.5f, 0f, 0f) };
	Var12 = { ENTITY::GET_ENTITY_COORDS(Local_2996[*uParam4].f_6, 1) };
	uVar15 = ENTITY::GET_ENTITY_HEADING(Local_2996[*uParam4].f_6);
	uLocal_3048 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_3049 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, 0, 0, 0, 0, 0, 0);
	Local_1870[func_256()][0] = { Var0.x, Var0.y, (Var0.z + 1f) };
	return 1;
}

int func_139(var uParam0, float fParam1, var uParam2, var uParam3)
{
	fVar8 = 0f;
	fVar9 = 0f;
	iVar10 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 3999) / 1000);
	if (iVar10 == 0)
	{
		fVar8 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else if (iVar10 == 1)
	{
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 100f);
	}
	else if (iVar10 == 2)
	{
		fVar9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	else
	{
		fVar9 = -MISC::GET_RANDOM_FLOAT_IN_RANGE(450f, 700f);
		fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), fVar8, fVar9, 0f) };
	if (!PATHFIND::GET_RANDOM_VEHICLE_NODE(Var0, 10f, 1, 1, 1, &Var5, &uVar4))
	{
		return 0;
	}
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var5, 2, uParam2, fParam1, &uVar3, 1, 1077936128, 0);
	*uParam0 = { Var5 };
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-23209175) == 1)
	{
		*uParam0 = { -476.1537f, 132.6556f, 62.9586f };
		*fParam1 = 87.951f;
	}
	if (func_140(*uParam0, 0f, 0f, 0f, 0))
	{
		return 0;
	}
	return 1;
}

bool func_140(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_141(int iParam0)
{
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &cVar1);
	}
}

void func_142()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_280[iVar0].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_280[iVar0], 0))
			{
				HUD::REMOVE_BLIP(&(Local_280[iVar0].f_1));
			}
			else if (Local_280[iVar0].f_2 && func_118(Local_280[iVar0], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_280[iVar0].f_1));
			}
		}
		iVar0++;
	}
}

void func_143()
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_272, ""))
	{
		if (!func_47())
		{
			func_171(&Local_96, &cLocal_272, &cLocal_276, 9, 0, 0, 0);
			StringCopy(&cLocal_272, "", 16);
		}
	}
}

void func_144(var uParam0, float fParam1, bool bParam2)
{
	if (func_145(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_105(&cLocal_317, -1);
		}
		else
		{
			func_115(&cLocal_317, 7500, 1);
		}
	}
}

int func_145(var uParam0, float fParam1)
{
	if (func_3(uParam0, fParam1))
	{
		func_57(uParam0);
		return 1;
	}
	return 0;
}

void func_146(var uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_111(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_111(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_147(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = iParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_111(iVar0))
	{
		func_169();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_164(uParam0, bParam6, bParam8, 0))
		{
			func_163(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_152(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
					{
						if (!func_111(iVar0))
						{
							func_105(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_151(1);
							}
						}
					}
				}
			}
		}
		else if (func_152(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam7)
				{
					if (!func_111(iVar0))
					{
						func_105(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_151(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_111(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_146(uParam0, iVar0, 1);
			}
		}
		if (!func_164(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_150(uParam0))
			{
				func_148(uParam0);
			}
		}
	}
}

void func_148(var uParam0)
{
	if (func_149(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_149(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_151(bool bParam0)
{
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111638.f_10044.f_100++;
			}
			return Global_111638.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111638.f_10044.f_101++;
			}
			return Global_111638.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111638.f_10044.f_102++;
			}
			return Global_111638.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_152(char* sParam0)
{
	if (!func_153(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_111(sParam0)) || func_111("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_151(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_151(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_153(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_162(0))
	{
		return 0;
	}
	if (func_161())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_73825)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) > 0)
	{
		return 0;
	}
	if (Global_58693)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_160() || func_159(Global_4456448.f_232883)) || func_158())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_157(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_156(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_154(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_20())
	{
		if (func_155(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_155(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_155(int iParam0, bool bParam1, bool bParam2)
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

int func_156(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_157(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_158()
{
	return Global_2450632.f_17;
}

bool func_159(int iParam0)
{
	return iParam0 == 51;
}

var func_160()
{
	return Global_2450632.f_16;
}

bool func_161()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_162(int iParam0)
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

void func_163(var uParam0, struct<3> Param1, int iParam4)
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_164(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_150(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_168(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_167(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_168(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_167(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_167(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_168(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_150(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_153(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_169();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_153(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_169()
{
	MISC::SET_BIT(&Global_7357, 4);
}

int func_170(bool bParam0)
{
	if (bLocal_467 || iLocal_466)
	{
		return 0;
	}
	if (bParam0)
	{
		if (iLocal_468)
		{
			return 0;
		}
	}
	return 1;
}

bool func_171(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_36(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_15(sParam2, iParam3, 0);
}

void func_172()
{
	Global_19671 = 0;
	func_35();
}

int func_173()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2984) && !ENTITY::IS_ENTITY_DEAD(iLocal_2984, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2984, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
	{
		if (!bLocal_2968)
		{
			func_174("TOW_TUT_RETONYA", 7500, 1);
			bLocal_2968 = true;
			if (!HUD::DOES_BLIP_EXIST(uLocal_425))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2984, 0))
				{
					uLocal_425 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2984);
					HUD::SET_BLIP_COLOUR(uLocal_425, 3);
					HUD::SET_BLIP_SCALE(uLocal_425, 0.5f);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_2996[0].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2996[0].f_8));
			}
		}
	}
	else if (bLocal_2968)
	{
		bLocal_2968 = false;
		if (HUD::DOES_BLIP_EXIST(uLocal_425))
		{
			HUD::REMOVE_BLIP(&uLocal_425);
		}
		if (!HUD::DOES_BLIP_EXIST(Local_2996[0].f_8))
		{
			Local_2996[0].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_2625[0]);
			if (iLocal_468)
			{
				HUD::SET_BLIP_COLOUR(Local_2996[0].f_8, 5);
				HUD::SET_BLIP_ROUTE(Local_2996[0].f_8, 1);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2996[0].f_8, 5);
			}
			else
			{
				HUD::SET_BLIP_COLOUR(Local_2996[0].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_2996[0].f_8, 1);
				HUD::SET_BLIP_ROUTE_COLOUR(Local_2996[0].f_8, 3);
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
	{
		if (bLocal_2968)
		{
			return 1;
		}
	}
	return 0;
}

void func_174(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_175(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_182(*uParam2, 1))
		{
			if (func_181(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_182(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_182(*uParam2, 4))
		{
			if (func_179(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_182(*uParam2, 8))
		{
			if (func_178(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_182(*uParam2, 128);
		if (bParam4)
		{
			if (func_176(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_182(*uParam2, 16))
		{
			if (func_176(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_395)
		{
			iLocal_396 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_395 = true;
		}
		iLocal_397 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_398 = (iLocal_396 - iLocal_397);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_395)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_398) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_177(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_118(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_177(int iParam0, int iParam1)
{
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == 883325847)
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, int iParam1, var uParam2)
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_179(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	iVar3 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_180(iVar3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.y - IntToFloat(uParam2->f_6)), (Var0.z - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.y + IntToFloat(uParam2->f_6)), (Var0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == 741814745)
					{
						if (func_119(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_181(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_118(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

bool func_182(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_183(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, var uParam8, bool bParam9, var uParam10)
{
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_175((*uParam4)[iVar0], 0, &uLocal_412, &iLocal_419, 0, 1, 0, 1, 1))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam4)[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_123(iParam1, iParam3, &iLocal_2603, 20, 70f, 65f, 0))
			{
				iLocal_2603 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iParam2, iParam1, 50f, 786469);
					PED::SET_PED_KEEP_TASK(iParam2, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (iLocal_468)
			{
				func_59(&uLocal_2513);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], 0))
					{
						if (func_118((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_471 = iVar0;
							iLocal_471 = iLocal_471;
							func_59(&uLocal_2513);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!func_11(Local_1870[func_256()].f_17))
			{
				func_184(uLocal_2347, Local_1870[func_256()].f_17, Local_1870[func_256()].f_20);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(821477338) == 1)
			{
				if (!iLocal_457)
				{
					func_257(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
					TASK::TASK_PLAY_ANIM(0, sParam6, (*sParam7)[iVar0], 4f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), 0, 0, 0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
					TASK::TASK_PERFORM_SEQUENCE((*uParam4)[iVar0], uLocal_421);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(821477338) == 1)
			{
				if (!iLocal_457)
				{
					func_257(&uLocal_484, 3, *uParam8, "TONYA", 0, 1);
					if (func_171(&uLocal_484, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_457 = 1;
					}
				}
				if (!iLocal_469)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam3, 0) && !ENTITY::IS_ENTITY_DEAD(*uParam10, 0))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam3, *uParam10))
						{
							if (!func_7(&uLocal_2528))
							{
								func_263(&uLocal_2528);
							}
							else if (func_4(&uLocal_2528) > 20f)
							{
								if (func_171(&uLocal_484, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_469 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_184(var uParam0, struct<3> Param1, struct<3> Param4)
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::DISABLE_NAVMESH_IN_AREA(Param1, Param4, 0);
}

int func_185(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char[4] cParam9, char* sParam10, int iParam11)
{
	Var3 = { *uParam0[0] };
	Var3.z = (Var3.z + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0, 0, 0) || func_9(*uParam0[0], 0) < 60f)
	{
		func_187(uParam1);
		MISC::CLEAR_AREA_OF_PEDS(Param2, 28f, 0);
		uParam0[0]->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = func_186(*uParam0[iVar2], Param2);
			}
			else
			{
				fParam8 = (fParam8 + 180f);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-23209175) == 1)
			{
				iVar1 = PED::CREATE_PED(4, -929103484, *uParam0[iVar2], fParam8, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-929103484);
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(821477338) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = PED::CREATE_PED(4, 891398354, *uParam0[iVar2], fParam8, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(891398354);
				}
				else
				{
					iVar1 = PED::CREATE_PED(4, 1068876755, *uParam0[iVar2], fParam8, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(1068876755);
				}
			}
			else
			{
				iVar1 = PED::CREATE_PED(4, (*uParam7)[(iVar2 % 2)], *uParam0[iVar2], fParam8, 1, 1);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1, 1, 1);
			fParam8 = -1f;
			if (iParam11 > 1)
			{
				(*uParam6)[iVar2] = iVar1;
			}
			else
			{
				*uParam5 = iVar1;
			}
			cParam9 = cParam9;
			(*sParam10)[iVar2] = (*sParam10)[iVar2];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 42, 1);
			PED::SET_PED_MOVEMENT_CLIPSET(iVar1, "move_m@JOG@", 1048576000);
			PED::SET_PED_RESET_FLAG(iVar1, 109, 1);
			if (iLocal_420 == 3)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				TASK::OPEN_SEQUENCE_TASK(&uVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
				{
					TASK::TASK_PERFORM_SEQUENCE(iVar1, uVar6);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uVar6);
			}
			iVar2++;
		}
		bLocal_442 = true;
		return 1;
	}
	else if (func_9(*uParam0[0], 0) < 70f)
	{
	}
	return 0;
}

float func_186(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_187(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2556[iVar0].f_2 = { *uParam0[iVar0] };
		Local_2556[iVar0].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2556[iVar0].f_8 = { func_188(MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 0f) };
		}
		else
		{
			Local_2556[iVar0].f_8 = { func_188(0.5f, 1f, 0f) };
		}
		Local_2556[iVar0].f_11 = 2f;
		Local_2556[iVar0].f_12 = 1f;
		Local_2556[iVar0].f_13 = 1f;
		Local_2556[iVar0].f_14 = -1f;
		Local_2556[iVar0].f_15 = 0.1f;
		Local_2556[iVar0].f_17 = 0;
		Local_2556[iVar0].f_1 = 1110;
		Local_2556[iVar0] = GRAPHICS::ADD_DECAL(Local_2556[iVar0].f_1, Local_2556[iVar0].f_2, Local_2556[iVar0].f_5, Local_2556[iVar0].f_8, Local_2556[iVar0].f_11, Local_2556[iVar0].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}

Vector3 func_188(struct<3> Param0)
{
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.y = 0f;
		Param0.z = 0f;
	}
	return Param0;
}

int func_189()
{
	func_192();
	switch (iLocal_3120)
	{
		case 0:
			func_257(&Local_2348, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_257(&Local_2348, 3, Local_2996[0], sLocal_2624, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0], 1);
			iLocal_3041 = MISC::GET_RANDOM_INT_IN_RANGE(35, 80);
			iLocal_3120 = 1;
			break;
		
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
			TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
			if (func_9(Local_650[iLocal_2604].f_1, 1) < 40f || Local_2993.f_1 > 0)
			{
				if (iLocal_420 == 1)
				{
					if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
					{
						func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
					else if (Global_111638.f_19968.f_5 == 2)
					{
						func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 8, 0, 0, 0);
						iLocal_3120 = 2;
					}
				}
			}
			else if (func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) < IntToFloat(iLocal_3041 + 10))
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_3120 = 2;
			}
			break;
		
		case 2:
			if (!func_11(Local_650[iLocal_2604].f_13))
			{
				Local_650[iLocal_2604].f_13.f_2 = 45f;
				Local_650[iLocal_2604].f_16.f_2 = -45f;
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2996[0].f_6, Local_650[iLocal_2604].f_13, Local_650[iLocal_2604].f_16, Local_650[iLocal_2604].f_19, 0, 1, 0))
				{
					func_122(&iLocal_2598);
					iLocal_2947 = 1;
					iLocal_2954 = 1;
					bLocal_427 = true;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			if (func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) < IntToFloat(iLocal_3041 + 15))
			{
				if (Global_111638.f_19968.f_5 == 0 || Global_111638.f_19968.f_5 == 1)
				{
					func_257(&Local_2348, 5, Local_2996[0], "TOWTRAINF", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT", 9, 0, 0, 0);
				}
				else if (Global_111638.f_19968.f_5 == 2)
				{
					func_257(&Local_2348, 6, Local_2996[0], "TOWILLEGALMAN2", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_GETOUT2", 9, 0, 0, 0);
				}
				func_122(&iLocal_2598);
				TASK::TASK_LOOK_AT_ENTITY(Local_2996[0], Local_2996[0].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_3120 = 3;
			}
			break;
		
		case 3:
			if (func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) < IntToFloat(iLocal_3041))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
				{
					if (iLocal_3040 == 1)
					{
						func_191(&Local_2993);
					}
					iLocal_2947 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_650[iLocal_2604].f_1, Local_650[iLocal_2604].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_2996[0], 64, 0);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
						iLocal_3120 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_3119 == 8 && iLocal_468) || func_190())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_3120 = 5;
			}
			break;
		
		case 5:
			iLocal_2953 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_116(&iLocal_3117, 0, "TOW_TRAIN1"))
				{
					iLocal_3120 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_190()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
	{
		if (bLocal_427)
		{
			switch (iLocal_3053)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_2996[0]) == 1)
					{
						iLocal_3053 = 1;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2996[0], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_3053 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}

void func_191(var uParam0)
{
	uParam0->f_1 = 0;
	CAM::DESTROY_CAM(*uParam0, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

void func_192()
{
	if (iLocal_2947 || ((!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0)) && !PED::IS_PED_IN_VEHICLE(Local_2996[0], Local_2996[0].f_6, 0)))
	{
		if (iLocal_2598 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_2598);
			AUDIO::RELEASE_SOUND_ID(iLocal_2598);
			iLocal_2598 = -1;
			return;
		}
	}
	if (!iLocal_2938)
	{
		iLocal_2598 = AUDIO::GET_SOUND_ID();
		iLocal_2938 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2996[0], "oddjobs@towing", "Start_Engine_Loop", 3))
		{
			fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_2996[0], "oddjobs@towing", "Start_Engine_Loop");
			if (((fVar0 >= 0.19f && fVar0 <= 0.262f) || (fVar0 >= 0.4f && fVar0 <= 0.6f)) || (fVar0 >= 0.9f && fVar0 <= 1f))
			{
				if (fVar0 >= 0.19f && fVar0 <= 0.262f)
				{
				}
				if (fVar0 >= 0.4f && fVar0 <= 0.6f)
				{
				}
				if (fVar0 >= 0.9f && fVar0 <= 1f)
				{
				}
				if (!iLocal_2937)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2598, "TOWING_ENGINE_TURNING_MASTER", Local_2996[0].f_6, 0, 0, 0);
					iLocal_2937 = 1;
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_2598);
				iLocal_2937 = 0;
			}
		}
	}
}

void func_193()
{
	func_195();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2608))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_2608);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_3109, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_3109, 0);
	}
	VEHICLE::_REMOVE_SPEED_ZONE(uLocal_3048);
	VEHICLE::_REMOVE_SPEED_ZONE(uLocal_3049);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3112, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_3113, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3060 - Vector(15f, 15f, 15f), Local_3060 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		VEHICLE::_REMOVE_SPEED_ZONE(Local_2996[iVar0].f_17);
		VEHICLE::_REMOVE_SPEED_ZONE(Local_2996[iVar0].f_18);
		VEHICLE::_REMOVE_SPEED_ZONE(Local_2996[iVar0].f_19);
		iVar0++;
	}
	if (!func_11(Local_1870[func_256()].f_17))
	{
		func_184(uLocal_2347, Local_1870[func_256()].f_17, Local_1870[func_256()].f_20);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2996[0].f_6));
	if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2996[0]));
		if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0]))
		{
			if (PED::IS_PED_IN_GROUP(Local_2996[0]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_2996[0]);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_2983))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2983, 0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2983);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_3109, 1, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3109);
	}
	if (iLocal_2963)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2632, Local_2635, 1, 1);
	}
	if (iLocal_2960 && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_7, 0))
	{
		VEHICLE::_0x1CF38D529D7441D9(Local_2996[0].f_7, 1);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_2996[0].f_7), 0);
		VEHICLE::SET_RANDOM_TRAINS(1);
		func_129(0, 1);
		func_129(1, 0);
		func_129(2, 0);
		func_129(3, 1);
		func_129(4, 0);
		func_129(5, 0);
		func_129(6, 0);
		func_129(7, 0);
		func_129(8, 0);
		func_129(9, 0);
		func_129(10, 0);
		func_129(11, 0);
	}
	func_122(&iLocal_2596);
	func_122(&iLocal_2597);
	func_194(&uLocal_3127);
	func_122(&iLocal_2598);
	func_146(&uLocal_399, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2993))
	{
		func_191(&Local_2993);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-1323100960, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_194(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((*uParam0)[iVar0], 0);
			(*uParam0)[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_195()
{
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

int func_196()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_2996[0], iLocal_3109, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_2996[0].f_10))
			{
				HUD::REMOVE_BLIP(&(Local_2996[0].f_10));
				func_122(&iLocal_2598);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_2996[0], Local_2996[0].f_6, 0))
		{
			func_122(&iLocal_2598);
		}
	}
	switch (iLocal_3119)
	{
		case 0:
			if (func_9(Local_650[iLocal_2604].f_1, 1) < 100f)
			{
				Local_2996[0].f_7 = VEHICLE::CREATE_MISSION_TRAIN(6, Local_650[iLocal_2604].f_6, Local_650[iLocal_2604].f_5);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_7))
				{
					Local_2996[0].f_10 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[0].f_7);
				}
				iLocal_2983 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_7, 4, 1985653476, -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2983, 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_7, 0))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2996[0].f_7, 0f);
				}
				func_115("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				func_199("CROSSING_BELL", &iLocal_2599, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_3119 = 1;
			}
			break;
		
		case 1:
			if (func_9(Local_650[iLocal_2604].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_7, 0))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2996[0].f_7, 26f);
				VEHICLE::SET_TRAIN_SPEED(Local_2996[0].f_7, 22f);
			}
			iLocal_3119 = 3;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_7, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
			{
				if (func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) < 175f)
				{
					func_198(Local_2996[0].f_7);
					func_199("TOWING_TRAIN_BRAKES_MASTER", &iLocal_2597, 1, Local_2996[0].f_7, 0, 0, 0, 0);
					func_197(&uLocal_3127, Local_2996[0].f_7);
					func_199("TOWING_TRAIN_HORN_MASTER", &iLocal_2596, 1, Local_2996[0].f_7, 0, 0, 0, 0);
					iLocal_3119 = 4;
				}
			}
			else
			{
				iLocal_3119 = 8;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_7, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
			{
				func_198(Local_2996[0].f_7);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2996[0].f_6, Local_650[iLocal_2604].f_13, Local_650[iLocal_2604].f_16, Local_650[iLocal_2604].f_19, 0, 1, 0))
				{
					func_194(&uLocal_3127);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2996[0].f_7, 1) };
				if (func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) < 3f)
				{
					iLocal_2934 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2996[0].f_7, Local_2996[0].f_6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2996[0].f_6, 1, 0);
					iLocal_3119 = 6;
				}
				else if (func_10(Local_2996[0].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2996[0].f_6, Local_650[iLocal_2604].f_13, Local_650[iLocal_2604].f_16, Local_650[iLocal_2604].f_19, 0, 1, 0))
				{
					iLocal_2934 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2996[0].f_6, 1, 0);
				}
				if (iLocal_2934 && func_10(Local_2996[0].f_7, Local_650[iLocal_2604].f_1, 1) > 4f)
				{
					iLocal_3119 = 6;
				}
			}
			else
			{
				iLocal_3119 = 6;
			}
			break;
		
		case 6:
			if (!iLocal_468)
			{
				func_115("TOWT_OBJ_03G", 7500, 1);
				if (HUD::DOES_BLIP_EXIST(Local_2996[0].f_10))
				{
					HUD::REMOVE_BLIP(&(Local_2996[0].f_10));
				}
			}
			HUD::REMOVE_BLIP(&(Local_2996[0].f_10));
			func_122(&iLocal_2596);
			func_122(&iLocal_2597);
			func_194(&uLocal_3127);
			func_122(&iLocal_2598);
			func_122(&iLocal_2599);
			iLocal_3119 = 7;
			break;
		
		case 7:
			if (!func_47())
			{
				if (!iLocal_468)
				{
					func_115("TOWT_OBJ_03G", 7500, 1);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_3119 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}

void func_197(var uParam0, var uParam1)
{
	(*uParam0)[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, 6.515f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, 6.515f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[2] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, 3.781f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[3] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, 3.781f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[4] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, -3.743f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[5] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.7711f, -3.743f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
	(*uParam0)[6] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, -0.771f, -6.537f, -1.507f, 0f, 0f, -20f, 1.15f, 1, 0, 0);
	(*uParam0)[7] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ojtt_train_sparks", uParam1, 0.771f, -6.537f, -1.507f, 0f, 0f, 20f, 1.15f, 0, 0, 0);
}

int func_198(int iParam0)
{
	if (!func_7(&uLocal_2593))
	{
		func_263(&uLocal_2593);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (func_3(&uLocal_2593, 0.15f))
	{
		fLocal_2600 = (fVar0 - 0.35f);
		if (fLocal_2600 < 8f)
		{
			fLocal_2600 = 8f;
		}
		func_59(&uLocal_2593);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_2600);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_2600);
	}
	return 1;
}

void func_199(char* sParam0, int iParam1, bool bParam2, int iParam3, float fParam4, float fParam5, float fParam6, char* sParam7)
{
	func_122(iParam1);
	if (bParam2)
	{
		*iParam1 = AUDIO::GET_SOUND_ID();
	}
	else
	{
		*iParam1 = -1;
	}
	if (iParam3 != 0)
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(*iParam1, sParam0, iParam3, sParam7, 0, 0);
	}
	else if ((fParam4 != 0f || fParam5 != 0f) || fParam6 != 0f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(*iParam1, sParam0, fParam4, fParam5, fParam6, sParam7, 0, 0, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(*iParam1, sParam0, sParam7, 1);
	}
}

int func_200()
{
	func_210();
	switch (iLocal_3118)
	{
		case 0:
			if (bLocal_2965)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					Local_2996[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, uLocal_2989[0], 1, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0], 1);
					func_257(&Local_2348, 5, Local_2996[0], "TOWSEXMANLYGUY", 0, 1);
					Local_2996[0].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, iLocal_74, 2, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0].f_1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_2996[0].f_1, 42, 1);
					func_257(&Local_2348, 6, Local_2996[0].f_1, "TOWSEXPRISSYGUY", 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2996[0], "oddjobs@towing", "m_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(Local_2996[0].f_1, "oddjobs@towing", "f_blow_job_loop", 1000f, -8f, -1, 1, 0, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 10);
					}
					bLocal_442 = true;
					func_257(&Local_2348, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
			}
			else if (bLocal_2966)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					Local_2996[0] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2996[0].f_6, 26, uLocal_2989[0], 0, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2996[0], 42, 1);
					func_257(&Local_2348, 2, Local_2996[0], sLocal_2624, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2996[0], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_442 = true;
				}
			}
			else if (func_209())
			{
				bLocal_2964 = true;
			}
			else
			{
				bLocal_2964 = false;
			}
			iLocal_3118 = 1;
			break;
		
		case 1:
			if (bLocal_2965)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_2996[0].f_6, 1), 15f, 15f, 15f, 0, 1, 0))
					{
						if (!iLocal_3136)
						{
							if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_SNDS", 9, 0, 0, 0))
							{
								iLocal_3136 = 1;
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6) || func_208(iLocal_3109, Local_2996[0].f_6, !(bLocal_2965 || bLocal_2966)))
				{
					if (func_208(iLocal_3109, Local_2996[0].f_6, !(bLocal_2965 || bLocal_2966)))
					{
						bLocal_2979 = true;
					}
					if (!bLocal_2966)
					{
						func_207(&uLocal_3103, 1f);
					}
					else
					{
						func_263(&uLocal_3103);
					}
				}
			}
			if (func_7(&uLocal_3103) && func_4(&uLocal_3103) > 1f)
			{
				if (bLocal_2965 && func_7(&uLocal_3103))
				{
					if (func_47())
					{
						func_172();
					}
					iLocal_2976 = 0;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 750, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_2996[0], 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", 0.25f, 0.25f, 30000, 1, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, Local_2996[0], 1000f, -1, 0, 0);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_1, 0))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2996[0].f_1, uLocal_421);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2966)
				{
					if ((Global_111638.f_19968.f_4 % 2) == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_3109, 20000, 9f, 1f, 1073741824, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_PLAY_ANIM(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
							TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
						}
						func_257(&Local_2348, 2, Local_2996[0], "TOWABDBITCHM", 0, 1);
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
						{
							func_206(Local_2996[0]);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2996[0], 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2996[0], 1, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
							TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
							if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0]))
							{
								uLocal_2986 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[0]);
								HUD::SET_BLIP_COLOUR(uLocal_2986, 1);
								HUD::SET_BLIP_SCALE(uLocal_2986, 0.7f);
								func_205(Local_2996[0], uLocal_2986, 1);
							}
							bLocal_2964 = true;
						}
						func_171(&Local_2348, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
					}
					iLocal_3118 = 2;
				}
				else if (bLocal_2964)
				{
					Local_2996[0] = PED::CREATE_PED(4, uLocal_2989[0], Local_650[iLocal_2604].f_6, Local_650[iLocal_2604].f_9, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2996[0], 42, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_PED_ANGR";
					bLocal_442 = false;
					if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_GO_TO_ENTITY(0, iLocal_3109, 20000, 15f, 3f, 1073741824, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
				else
				{
					Local_2996[0] = PED::CREATE_PED(4, uLocal_2989[0], Local_650[iLocal_2604].f_6, Local_650[iLocal_2604].f_9, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2996[0], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2996[0], 42, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2996[0], 1, 1);
					bLocal_442 = true;
					sLocal_2618 = "TOW_ILLEG1";
					if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_GOTO_ENTITY_OFFSET(0, PLAYER::PLAYER_PED_ID(), 20000, 12f, 0f, 3f, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
					}
					iLocal_3118 = 3;
				}
			}
			break;
		
		case 2:
			if (bLocal_2965)
			{
				if (!bLocal_2973)
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6) || bLocal_2979)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_47())
							{
								if (func_171(&Local_2348, "TOWAUD", "TOW_SEX_INIT", 9, 0, 0, 0))
								{
									bLocal_2973 = true;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2996[0], 0))
				{
					if (bLocal_2966)
					{
						if (!func_47())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[0], 242628503) == 1)
							{
								if (TASK::GET_SEQUENCE_PROGRESS(Local_2996[0]) == 2)
								{
									if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
									{
										Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
									}
									if (SYSTEM::VDIST2(Var1, ENTITY::GET_ENTITY_COORDS(Local_2996[0], 1)) < 400f)
									{
										if ((Global_111638.f_19968.f_4 % 2) == 0)
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
										}
										else
										{
											func_171(&Local_2348, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
										}
									}
									iLocal_3118 = 8;
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						if (func_204() || (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6) && !bLocal_2979))
						{
							func_172();
							iLocal_3118 = 5;
						}
						else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6) && bLocal_2979)
						{
							if (bLocal_2973)
							{
								if (!func_47())
								{
									iLocal_3118 = 5;
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
			{
				if (func_119(Local_2996[0], PLAYER::PLAYER_PED_ID(), 1) < 12f)
				{
					TASK::CLEAR_PED_TASKS(Local_2996[0]);
					if (bLocal_2964)
					{
						TASK::TASK_COMBAT_PED(Local_2996[0], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_421);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, 5000, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_421);
						TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uLocal_421);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_421);
					}
					iLocal_2949 = 1;
					if (bLocal_2965)
					{
						iLocal_3118 = 5;
					}
					else
					{
						iLocal_3118 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0]))
			{
				Local_2996[0].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2996[0]);
				if (bLocal_2964)
				{
					HUD::SET_BLIP_COLOUR(Local_2996[0].f_9, 1);
					HUD::SET_BLIP_SCALE(Local_2996[0].f_9, 0.7f);
				}
				else
				{
					HUD::SET_BLIP_COLOUR(Local_2996[0].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2996[0].f_9, 0.7f);
				}
			}
			if (bLocal_2964)
			{
				if (iLocal_420 == 0)
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 5, Local_2996[0], "TOWABDHANDMAN2", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_PED_ANGR", 0);
				}
				else
				{
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_257(&Local_2348, 2, Local_2996[0], "TOWABDATTACKM", 0, 1);
					func_203(Local_2348, "TOWAUD", "TOW_HOM_DRG", 0);
				}
			}
			else
			{
				func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				func_257(&Local_2348, 3, Local_2996[0], sLocal_2624, 0, 1);
				func_203(Local_2348, "TOWAUD", sLocal_2618, 0);
			}
			bLocal_2957 = true;
			SYSTEM::SETTIMERA(0);
			if (bLocal_2964)
			{
				func_59(&uLocal_3097);
				iLocal_3118 = 6;
			}
			else
			{
				iLocal_3118 = 5;
			}
			break;
		
		case 5:
			if (!func_47())
			{
				if (bLocal_2965)
				{
					SYSTEM::SETTIMERB(0);
				}
				func_59(&uLocal_3097);
				if ((!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2996[0], Local_2996[0].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
					}
					else
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 1);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_ENTER_VEHICLE(0, Local_2996[0].f_6, 20000, -1, 1073741824, 1, 0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_2996[0].f_6, 5f, 786597);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uVar0);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						bLocal_3137 = true;
					}
				}
				iLocal_3118 = 6;
			}
			break;
		
		case 6:
			func_201(0);
			if (!bLocal_2971)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
					{
						if (bLocal_2965)
						{
							if (SYSTEM::TIMERB() > 8000)
							{
								func_59(&uLocal_3097);
								if (!bLocal_3137)
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 1);
									TASK::TASK_ENTER_VEHICLE(Local_2996[0], Local_2996[0].f_6, 20000, -1, 1073741824, 1, 0);
								}
								iLocal_3118 = 7;
							}
						}
						else
						{
							func_59(&uLocal_3097);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2996[0].f_6, 1);
							TASK::TASK_ENTER_VEHICLE(Local_2996[0], Local_2996[0].f_6, 20000, -1, 1073741824, 1, 0);
							iLocal_3118 = 7;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
					{
						if (SYSTEM::TIMERB() > 7000)
						{
							if (!bLocal_2964)
							{
								if (PED::IS_PED_IN_VEHICLE(Local_2996[0], Local_2996[0].f_6, 0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iLocal_3109) < 2f)
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[0], -258271821) != 1)
											{
												TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2996[0], Local_2996[0].f_6, 2f, 786597);
											}
										}
										else
										{
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											TASK::OPEN_SEQUENCE_TASK(&uVar0);
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 5000, 4096);
											TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uVar0);
											if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
											{
												TASK::TASK_PERFORM_SEQUENCE(Local_2996[0], uVar0);
											}
											TASK::CLEAR_SEQUENCE_TASK(&uVar0);
											iLocal_3118 = 7;
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_3109) < 5f)
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[0], -1794415470) != 1)
										{
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_2996[0].f_6, -1, 0))
											{
												TASK::TASK_ENTER_VEHICLE(Local_2996[0], Local_2996[0].f_6, -1, -1, 1073741824, 1, 0);
											}
										}
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[0], 1056466932) != 1)
									{
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2996[0], Local_2996[0].f_6, 0f, 0f, 0f, 3f, -1, 10f, 1);
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 7:
			func_201(1);
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_2996[0], 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6))
			{
				if (bLocal_2964)
				{
					sLocal_2618 = "TOW_PED_ANTH";
				}
				else if (bLocal_2965)
				{
					sLocal_2618 = "TOW_ILLEG_SE";
				}
				bLocal_2970 = true;
				func_171(&Local_2348, "TOWAUD", sLocal_2618, 9, 0, 0, 0);
				bLocal_2957 = false;
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2996[0], Local_2996[0].f_6, 5f, 786597);
				iLocal_3118 = 8;
				return 1;
			}
			break;
		
		case 8:
			iLocal_2949 = 0;
			bLocal_2957 = false;
			if (HUD::DOES_BLIP_EXIST(Local_2996[0].f_9))
			{
				HUD::REMOVE_BLIP(&(Local_2996[0].f_9));
			}
			break;
	}
	return 0;
}

void func_201(bool bParam0)
{
	iVar0 = 0;
	fVar1 = func_119(Local_2996[0], Local_2996[0].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3109, 0) && !ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_3109, Local_2996[0].f_6) && !PED::IS_PED_IN_VEHICLE(Local_2996[0], Local_2996[0].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2996[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2996[0], 1))
		{
			func_59(&uLocal_3097);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2996[0]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
	{
		iLocal_3118 = 8;
	}
	else if (((fVar1 > 35f || (func_4(&uLocal_3097) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		if (bLocal_2964)
		{
			func_257(&Local_2348, 5, Local_2996[0], "TOWABDHANDMAN2", 0, 1);
			sVar2 = "TOW_PED_ANCU";
		}
		else if (bLocal_2965)
		{
			func_257(&Local_2348, 5, Local_2996[0], "TOWSEXMANLYGUY", 0, 1);
			sVar2 = "TOW_YELL";
		}
		else
		{
			func_257(&Local_2348, 6, Local_2996[0], "TOWABDHANDMAN1", 0, 1);
			sVar2 = "TOW_PED_ANC2";
		}
		uLocal_2980[0] = Local_2996[0];
		uLocal_2980[1] = Local_2996[0].f_1;
		bLocal_2971 = true;
		func_202(Local_2348, "TOWAUD", sVar2, &uLocal_2980, 0);
		HUD::REMOVE_BLIP(&(Local_2996[0].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0], 0))
		{
			TASK::CLEAR_PED_TASKS(Local_2996[0]);
			TASK::TASK_SMART_FLEE_PED(Local_2996[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		}
		iLocal_3118 = 8;
	}
}

int func_202(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, char[4] cParam165, char* sParam166, var uParam167, bool bParam168)
{
	bVar1 = true;
	iVar2 = 75;
	if (bParam168)
	{
		iVar2 = 100;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_118((*uParam167)[iVar0], 1) > IntToFloat(iVar2))
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		func_171(&uParam0, cParam165, sParam166, 9, 0, 0, 0);
		return 1;
	}
	return 0;
}

void func_203(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)
{
	if (bParam167)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	StringCopy(&cLocal_272, sParam165, 16);
	StringCopy(&cLocal_276, sParam166, 16);
	Local_96 = { Param0 };
}

int func_204()
{
	switch (iLocal_3121)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_2996[0]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_3121 = 1;
			}
			break;
		
		case 1:
			if (bLocal_2973 && !iLocal_2974)
			{
				if (!func_47())
				{
					if (!iLocal_2975)
					{
						if (!bLocal_2979)
						{
							func_115("TOWT_OBJ_06", 7500, 1);
							iLocal_2975 = 1;
						}
					}
					if (iLocal_2975 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_2996[0], -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2996[0], Local_2996[0].f_1, 0);
						}
						iLocal_2974 = 1;
						iLocal_3121 = 2;
					}
				}
			}
			if (func_118(Local_2996[0], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			break;
		
		case 2:
			if (func_118(Local_2996[0], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			if (!func_47())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_205(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_280[iVar0] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_280[iVar0].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_280[iVar0].f_1))
		{
			Local_280[iVar0] = iParam0;
			Local_280[iVar0].f_1 = uParam1;
			Local_280[iVar0].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_206(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			PED::SET_PED_COMBAT_ABILITY(iParam0, 1);
			PED::SET_PED_COMBAT_RANGE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 23, 0);
			PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, 324215364, 1000, 1, 1);
			PED::SET_PED_SHOOT_RATE(iParam0, 500);
		}
	}
}

void func_207(var uParam0, float fParam1)
{
	if (!func_7(uParam0))
	{
		func_60(uParam0, fParam1);
	}
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return 0;
	}
	iVar0 = 0;
	if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::GET_PLAYER_INDEX()) && func_118(uParam1, 1) < 40f)
	{
		iVar0 = 1;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, uParam1))
	{
		iVar0 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_209()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_210()
{
	if (!iLocal_2946)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2996[0].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2996[0].f_6, 0))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2996[0].f_6, 1) };
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (bLocal_2965)
		{
			if (SYSTEM::VDIST2(Var0, Var3) < 25f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				if (!func_47())
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_2996[0], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					func_257(&Local_2348, 5, Local_2996[0], "TOWSEXMANLYGUY", 0, 1);
					if (func_171(&Local_2348, "TOWAUD", "TOW_HANDI_CL", 9, 0, 0, 0))
					{
						iLocal_2946 = 1;
					}
				}
			}
		}
	}
}

int func_211(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (!func_7(&uLocal_434))
	{
		func_59(&uLocal_434);
	}
	if (func_118(uParam0, 0) < 15f)
	{
		fLocal_431 = 0.3f;
		fLocal_432 = 0.5f;
		fLocal_433 = 0.1f;
	}
	else if (func_118(uParam0, 0) < 40f)
	{
		fLocal_431 = 0.6f;
		fLocal_432 = 1f;
		fLocal_433 = 0.2f;
	}
	if (func_3(&uLocal_434, MISC::GET_RANDOM_FLOAT_IN_RANGE(fLocal_431, fLocal_432)))
	{
		func_59(&uLocal_434);
		ENTITY::APPLY_FORCE_TO_ENTITY(uParam0, 1, 0f, 0f, fLocal_433, -0.0067f, -0.8283f, -0.2766f, 0, 1, 1, 1, 1, 1);
	}
	return 1;
}

void func_212()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_213();
}

void func_213()
{
	Global_22211.f_134 = 1;
}

int func_214(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, var uParam27)
{
	if (iLocal_2601 != 12)
	{
		func_218(Param2, uParam0, uParam1);
	}
	if (!bLocal_467)
	{
		if (iLocal_2601 >= 6 && iLocal_2601 <= 11)
		{
			if (bParam26)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2601)
		{
			case 0:
				if (func_123(uParam1, uParam0, &iLocal_2603, 10, 90f, 100f, 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(uParam1, 0);
					func_257(&Local_2348, 3, *uParam27, "TONYA", 0, 1);
					func_257(&Local_2348, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2601 = 1;
				}
				break;
			
			case 1:
				if (!func_47())
				{
					func_105("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2601 = 2;
				}
				break;
			
			case 2:
				if (iLocal_468)
				{
					HUD::CLEAR_HELP(1);
					iLocal_2601 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || func_119(uParam0, uParam1, 1) < 15f) && func_119(uParam0, uParam1, 1) < 30f) && !func_47())
					{
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2601 = 3;
					}
				}
				break;
			
			case 3:
				if (!iLocal_468)
				{
					if (!func_47() && !func_111("TOW_TUT_03"))
					{
						func_217("TOW_TUT_02");
						iLocal_2601 = 4;
					}
				}
				else
				{
					iLocal_2601 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || iLocal_468)
				{
					if ((SYSTEM::TIMERA() > 12000 || func_119(uParam0, uParam1, 1) < 7.5f) || (iLocal_468 && func_119(uParam0, uParam1, 1) < 30f))
					{
						iLocal_443 = 1;
						iLocal_443 = iLocal_443;
						func_217("TOW_TUT_01");
						iLocal_2601 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2601 = 6;
				}
				break;
			
			case 6:
				if ((!func_47() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_460)
					{
						func_105("TOWT_HELP_CR", -1);
						iLocal_460 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*uParam22))
					{
						HUD::SET_BLIP_ROUTE(*uParam22, 0);
						HUD::REMOVE_BLIP(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*uParam23[0] = { Param2.f_14 };
					fLocal_430 = func_9(Param2.f_14, 0);
					*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2601 = 7;
				}
				break;
			
			case 7:
				if (!func_47())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						func_115("TOW_TUT_04A", 7500, 1);
						iLocal_2601 = 9;
					}
				}
				break;
			
			case 9:
				if (func_11(Param2.f_14))
				{
					iLocal_2601 = 10;
				}
				if (!func_47())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_470 = MISC::GET_GAME_TIMER();
						if (bLocal_444)
						{
							HUD::SET_BLIP_ROUTE(*uParam22, 0);
							HUD::REMOVE_BLIP(uParam22);
							*uParam23[0] = { Param2.f_14 };
							fLocal_430 = func_9(Param2.f_14, 0);
							*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam22))
						{
							HUD::SET_BLIP_COLOUR(*uParam22, 5);
						}
						iLocal_2601 = 10;
					}
				}
				break;
			
			case 10:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1, 0))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
						{
							iLocal_2601 = 11;
						}
					}
				}
				else
				{
					func_215();
				}
				break;
			
			case 11:
				if (!func_11(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					uVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					uVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, uVar6, 0, 1, 0))
				{
					func_105("TOWT_HELP_UH", -1);
					func_216();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						func_146(&uLocal_399, 0, 0);
						iLocal_2601 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1) && !bLocal_2602)
				{
					if (func_47())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						func_172();
						iLocal_2601 = 6;
					}
					else
					{
						func_107(*uParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2601 = 6;
						func_171(&Local_2348, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2602 = true;
					}
				}
			}
			if (!iLocal_462)
			{
				if (bLocal_2602)
				{
					if (!func_47())
					{
						HUD::CLEAR_HELP(1);
						func_115("TOWT_OBJ_06", 7500, 1);
						iLocal_462 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	switch (iLocal_476)
	{
		case 0:
			if (!func_7(&uLocal_2525))
			{
				func_263(&uLocal_2525);
			}
			else if (func_4(&uLocal_2525) > 10f)
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_476 = 1;
				}
			}
			break;
		
		case 1:
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					func_59(&uLocal_2525);
					iLocal_476 = 2;
				}
			}
			break;
		
		case 2:
			if (func_7(&uLocal_2525))
			{
				if (func_4(&uLocal_2525) > 15f)
				{
					if (!func_47())
					{
						if (func_171(&uLocal_484, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_476 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_216()
{
	if (!iLocal_459)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_47())
			{
				if (func_171(&uLocal_484, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_459 = 1;
				}
			}
		}
	}
}

void func_217(char* sParam0)
{
	SYSTEM::SETTIMERA(0);
	func_105(sParam0, -1);
}

void func_218(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam20) || !ENTITY::DOES_ENTITY_EXIST(uParam21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam20, 0) || ENTITY::IS_ENTITY_DEAD(iParam21, 0))
	{
		return;
	}
	if (!func_11(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		uVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		uVar6 = Param0.f_6;
	}
	if (!iLocal_445)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam21, Var0, Var3, uVar6, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam20, 0) && !ENTITY::IS_ENTITY_DEAD(iParam21, 0))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam20, iParam21))
				{
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					iLocal_2601 = 12;
					iLocal_445 = 1;
				}
			}
		}
	}
}

int func_219(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_428 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					func_171(&Local_2348, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_428 = (fLocal_428 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 0;
}

int func_220(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(uParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0) && !ENTITY::IS_ENTITY_DEAD(iParam2, 0))
				{
					if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam2) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam2, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					func_222("TOW_DMG_01", 25, -1);
					func_221(func_26(), 1, 25);
					fLocal_428 = (fLocal_428 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					func_222("TOW_DMG_01", 75, -1);
					func_221(func_26(), 1, 75);
					fLocal_428 = (fLocal_428 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					func_105("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 1;
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	if (func_99(iParam0) == 3)
	{
		return 0;
	}
	if (func_99(iParam0) == 4)
	{
		return 0;
	}
	return func_65(func_99(iParam0), 0, iParam1, iParam2, 0);
}

void func_222(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

void func_223(var uParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)
{
	uParam10 = uParam10;
	if (bParam11)
	{
		if (HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::REMOVE_BLIP(uParam1);
		}
		*uParam5 = MISC::GET_GAME_TIMER();
		bLocal_467 = !func_224(uParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*uParam1) && bLocal_467)
	{
		*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
		HUD::SET_BLIP_COLOUR(*uParam1, 3);
		HUD::SET_BLIP_ROUTE(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_467)
		{
			if (!func_224(uParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_440)
					{
						func_115("DTRSHRD_03", 7500, 1);
						iLocal_440 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*uParam1))
					{
						*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
						HUD::SET_BLIP_COLOUR(*uParam1, 3);
						HUD::SET_BLIP_ROUTE(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (HUD::DOES_BLIP_EXIST(uParam2[iVar0]->f_8))
					{
						HUD::SET_BLIP_ROUTE(uParam2[iVar0]->f_8, 0);
						HUD::REMOVE_BLIP(&(uParam2[iVar0]->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST(uParam2[0]->f_9))
				{
					HUD::REMOVE_BLIP(&(uParam2[0]->f_9));
				}
				bLocal_467 = true;
			}
		}
		else if (func_224(uParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0], *uParam0, 0) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0], uParam2[iParam6]->f_6, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uParam2[0]->f_9))
					{
						uParam2[0]->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0]);
						HUD::SET_BLIP_COLOUR(uParam2[0]->f_9, 3);
						HUD::SET_BLIP_SCALE(uParam2[0]->f_9, 0.7f);
					}
				}
			}
			if (iLocal_441)
			{
				func_115(sParam4, 7500, 1);
				iLocal_441 = 0;
			}
			if (!func_11(*uParam3[0]) && iParam12 == 9)
			{
				if (!HUD::DOES_BLIP_EXIST(uParam2[0]->f_8))
				{
					uParam2[0]->f_8 = HUD::ADD_BLIP_FOR_COORD(*uParam3[0]);
					HUD::SET_BLIP_ROUTE(uParam2[0]->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam2[iParam6]->f_6, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uParam2[iParam6]->f_8))
					{
						uParam2[iParam6]->f_8 = HUD::ADD_BLIP_FOR_ENTITY(uParam2[iParam6]->f_6);
						HUD::SET_BLIP_COLOUR(uParam2[iParam6]->f_8, 3);
						HUD::SET_BLIP_ROUTE(uParam2[0]->f_8, 1);
					}
				}
				else
				{
					if (iLocal_420 == 3)
					{
						Local_650[iLocal_2604].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST(uParam2[0]->f_8))
					{
						uParam2[0]->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_650[iLocal_2604].f_1);
						HUD::SET_BLIP_COLOUR(uParam2[0]->f_8, 3);
						HUD::SET_BLIP_ROUTE(uParam2[0]->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam2[iVar0]->f_6, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam2[iVar0]->f_8))
						{
							uParam2[iVar0]->f_8 = HUD::ADD_BLIP_FOR_ENTITY(uParam2[iVar0]->f_6);
							HUD::SET_BLIP_COLOUR(uParam2[iVar0]->f_8, 3);
							HUD::SET_BLIP_ROUTE(uParam2[iVar0]->f_8, 1);
						}
					}
					else
					{
						if (iLocal_420 == 3)
						{
							Local_650[iLocal_2604].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST(uParam2[0]->f_8))
						{
							uParam2[0]->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_650[iLocal_2604].f_1);
							HUD::SET_BLIP_COLOUR(uParam2[0]->f_8, 3);
							HUD::SET_BLIP_ROUTE(uParam2[0]->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_467 = false;
		}
	}
}

int func_224(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != *uParam0)
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

void func_225()
{
	iVar0 = func_26();
	if (iVar0 != 1)
	{
		func_193();
	}
}

void func_226(var uParam0)
{
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_98744.f_20, 2)) || MISC::IS_BIT_SET(Global_98744.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 29))
					{
						func_227(uParam0[iVar0]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_227(var uParam0)
{
	func_228(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_228(var uParam0, char* sParam1, var uParam2)
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_229(*uParam0))
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
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, MISC::IS_BIT_SET(*uParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

int func_229(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_230()
{
	if (Global_8161[0][0].f_259 == 2)
	{
		Global_8161[0][0].f_259 = 0;
	}
	if (Global_8161[1][0].f_259 == 2)
	{
		Global_8161[1][0].f_259 = 0;
	}
	if (Global_8161[2][0].f_259 == 2)
	{
		Global_8161[2][0].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7356, 25);
	MISC::SET_BIT(&Global_7357, 11);
}

void func_231(var uParam0)
{
	func_254();
	uLocal_2608 = func_253();
	if (uParam0->f_3 == 3)
	{
		sLocal_2620[0] = "base";
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingcome_here");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2959)
	{
		func_251(&uLocal_2648, "Ped");
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "oddjobs@towingangryidle_a");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_a");
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	else if (bLocal_2959)
	{
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towing");
	}
	if (uParam0->f_3 == 2)
	{
		func_251(&uLocal_2648, "RANDOM@CAR_SLEEPING");
	}
	else if (uParam0->f_3 == 4)
	{
		sLocal_2619 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		func_251(&uLocal_2648, sLocal_2619);
		func_249(&uLocal_2638, 1171614426);
		func_249(&uLocal_2638, -1286380898);
		sLocal_2620[0] = "react_big_variations_a";
		sLocal_2620[1] = "react_big_variations_b";
		sLocal_2620[2] = "react_big_variations_c";
		func_251(&uLocal_2648, "move_m@JOG@");
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-1323100960, 1);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		func_251(&uLocal_2648, "oddjobs@towing");
		func_251(&uLocal_2648, "amb@world_human_smoking@male@male_a@base");
		func_251(&uLocal_2648, "oddjobs@towingpleadingidle_b");
		func_249(&uLocal_2638, 920453016);
		func_249(&uLocal_2638, 586013744);
		func_249(&uLocal_2638, 1030400667);
		func_249(&uLocal_2638, 184361638);
		func_249(&uLocal_2638, 1985653476);
		func_249(&uLocal_2638, -1106743555);
		func_249(&uLocal_2638, 891398354);
	}
	if (uParam0->f_3 == 2)
	{
		func_248();
	}
	else if (uParam0->f_3 == 4)
	{
		iLocal_2987[iVar0] = Local_650[iLocal_2604].f_20;
	}
	else
	{
		func_247();
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_2987[iVar0] == 0)
		{
			iLocal_2987[iVar0] = func_245(&iLocal_2987, &iLocal_82, 10);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2987[iVar0], 3);
		}
		if (bLocal_2965)
		{
			iLocal_2987[iVar0] = 1269098716;
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2987[iVar0], 3);
		}
		else if (iLocal_2987[iVar0] != 0)
		{
			func_249(&uLocal_2638, iLocal_2987[iVar0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_2987[iVar0], 3);
		}
		iVar0++;
	}
	if (!bLocal_2959 && iLocal_2962)
	{
		if (bLocal_2965)
		{
			func_244(&iVar1);
			iLocal_74 = -521758348;
			iLocal_74 = iLocal_74;
			func_249(&uLocal_2638, iLocal_74);
		}
		else if (bLocal_2966)
		{
			func_243(&iVar1);
		}
		else if (uParam0->f_3 == 3)
		{
			func_242(&iVar1, 1);
		}
		else if (uParam0->f_3 == 0 && !bLocal_2965)
		{
			func_242(&iVar1, 1);
		}
		else
		{
			func_242(&iVar1, 0);
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			uLocal_2989[iVar0] = func_245(&uLocal_2989, &iLocal_75, iVar1);
			if (uLocal_2989[iVar0] != 0)
			{
				func_249(&uLocal_2638, uLocal_2989[iVar0]);
			}
			iVar0++;
		}
	}
	func_249(&uLocal_2638, iLocal_649);
	func_241(&uLocal_2656, "TOW", 2, 0);
	func_241(&uLocal_2656, "DTRSHRD", 3, 0);
	func_240(&uLocal_2638);
	func_237(&uLocal_2648, &uLocal_2656);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_2608))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_236(&uLocal_2638) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_2987[0]))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	while (!func_232(&uLocal_2656))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TOWING_TRAIN", false, -1) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			func_226(&uLocal_2656);
			SYSTEM::WAIT(0);
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		func_226(&uLocal_2656);
		SYSTEM::WAIT(0);
	}
}

bool func_232(var uParam0)
{
	return func_233(uParam0);
}

int func_233(var uParam0)
{
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 29))
			{
				return 0;
			}
			if (!func_234(uParam0[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_234(var uParam0)
{
	return func_235(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_235(int iParam0, char* sParam1, int iParam2)
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (func_229(iParam0))
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
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, MISC::IS_BIT_SET(iParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(uParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(uParam2);
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

int func_236(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_237(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			func_238(uParam1, (*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_238(var uParam0, char* sParam1)
{
	func_239(uParam0, 1, -1, sParam1, 0);
}

void func_239(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0], iParam1))
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
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0[iVar0]->f_2), sParam3))
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
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0], 30))
		{
			StringCopy(&(uParam0[iVar0]->f_2), sParam3, 64);
			uParam0[iVar0]->f_1 = iParam2;
			(*uParam0)[iVar0] = iParam4;
			MISC::SET_BIT(uParam0[iVar0], iParam1);
			MISC::SET_BIT(uParam0[iVar0], 30);
			return;
		}
		iVar0++;
	}
}

void func_240(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_241(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		MISC::SET_BIT(&uVar0, 26);
	}
	func_239(uParam0, 8, iParam2, sParam1, uVar0);
}

void func_242(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_75[0] = 891398354;
		iLocal_75[1] = -408329255;
		iLocal_75[2] = 663522487;
		iLocal_75[3] = 1068876755;
		*uParam0 = 4;
	}
	else
	{
		iLocal_75[0] = -1106743555;
		iLocal_75[1] = 891398354;
		iLocal_75[2] = -1745486195;
		iLocal_75[3] = -408329255;
		iLocal_75[4] = -2063419726;
		iLocal_75[5] = 663522487;
		*uParam0 = 6;
	}
}

void func_243(var uParam0)
{
	iLocal_75[0] = 516505552;
	iLocal_75[1] = 1768677545;
	iLocal_75[2] = 516505552;
	iLocal_75[3] = 1768677545;
	*uParam0 = 4;
}

void func_244(var uParam0)
{
	iLocal_75[0] = -1425378987;
	iLocal_75[1] = -408329255;
	iLocal_75[2] = 1264920838;
	*uParam0 = 3;
}

var func_245(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	while (func_246((*iParam1)[iVar1], uParam0) || iVar0 > 25)
	{
		iVar0++;
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, (iParam2 - 1));
	}
	return (*iParam1)[iVar1];
}

int func_246(int iParam0, var uParam1)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] != 0)
		{
			if ((*uParam1)[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_247()
{
	iLocal_82[0] = -1008861746;
	iLocal_82[1] = -1903012613;
	iLocal_82[2] = -1150599089;
	iLocal_82[3] = -1150599089;
	iLocal_82[4] = -746882698;
	iLocal_82[5] = -685276541;
	iLocal_82[6] = -1883869285;
	iLocal_82[7] = -304802106;
	iLocal_82[8] = 886934177;
	iLocal_82[9] = 886934177;
}

void func_248()
{
	iLocal_82[0] = -682211828;
	iLocal_82[1] = 523724515;
	iLocal_82[2] = -2124201592;
	iLocal_82[3] = -227741703;
	iLocal_82[4] = -227741703;
	iLocal_82[5] = 523724515;
	iLocal_82[6] = -1311240698;
	iLocal_82[7] = -1883002148;
	iLocal_82[8] = -1477580979;
	iLocal_82[9] = -1008861746;
}

int func_249(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_250(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_250(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_251(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], sParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_252(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}

int func_252(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

var func_253()
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

void func_254()
{
	func_300(&uLocal_412, 1);
}

void func_255()
{
	switch (iLocal_420)
	{
		case 2:
			if ((Global_111638.f_19968.f_4 % 2) == 0)
			{
				sLocal_2624 = "TOWABDBITCHM";
			}
			else
			{
				sLocal_2624 = "TOWABDATTACKM";
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2624 = "TOWBREAKM";
			break;
		
		case 0:
			if (bLocal_2965)
			{
			}
			else
			{
				sLocal_2624 = "TOWHANDIBEGM";
			}
			break;
		
		case 1:
			sLocal_2624 = "TOWTRAINM";
			break;
	}
}

int func_256()
{
	return Local_650[iLocal_2604].f_22;
}

void func_257(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_258()
{
	iLocal_420 = func_260(Global_111638.f_19968.f_2);
	if (!func_259(iLocal_420))
	{
		iLocal_420 = 3;
	}
	if (iLocal_420 == 3)
	{
	}
	else
	{
		iLocal_2604 = func_262(1300f, iLocal_420, Global_111638.f_19968.f_9);
		Global_111638.f_19968.f_9 = iLocal_2604;
	}
	if (iLocal_2604 == 0)
	{
		iLocal_420 = 3;
	}
	Global_111638.f_19968.f_2 = iLocal_420;
}

int func_259(int iParam0)
{
	iLocal_2604 = func_262(1300f, iParam0, Global_111638.f_19968.f_9);
	if (iLocal_2604 == -1)
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0)
{
	iVar0 = 2000000;
	iVar1 = 2;
	if (iParam0 != 2)
	{
		if (Global_111638.f_19968.f_4 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_4;
			iVar1 = 2;
		}
	}
	if (iParam0 != 0)
	{
		if (Global_111638.f_19968.f_6 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_6;
			iVar1 = 0;
		}
	}
	if (iParam0 != 1)
	{
		if (Global_111638.f_19968.f_5 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_5;
			iVar1 = 1;
		}
	}
	if (iParam0 != 3)
	{
		if (Global_111638.f_19968.f_7 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_7;
			iVar1 = 3;
		}
	}
	if (iParam0 != 4)
	{
		if (Global_111638.f_19968.f_8 < iVar0)
		{
			iVar0 = Global_111638.f_19968.f_8;
			iVar1 = 4;
		}
	}
	return iVar1;
}

int func_261()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

int func_262(float fParam0, int iParam1, int iParam2)
{
	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = func_9(Local_650[iVar58].f_1, 1);
		if (!func_11(Local_650[iVar58].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_650[iVar58] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}

void func_263(var uParam0)
{
	if (!func_7(uParam0))
	{
		func_59(uParam0);
	}
}

void func_264()
{
	Local_45[0] = { -227.6f, -1172.1f, 21.8963f };
	Local_45[1] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[2] = { -205.6866f, -1384.333f, 30.2585f };
	Local_45[3] = { 532.4957f, -172.2088f, 53.6835f };
	Local_45[4] = { 1151.507f, -773.4066f, 56.61f };
	Local_45[5] = { 808.4329f, -822.9456f, 25.1821f };
	Local_45[6] = { 2502.613f, 4080.141f, 37.6307f };
	Local_45[7] = { 263.4725f, 2601.842f, 43.8197f };
	Local_70[0] = { 401.6046f, -1632.781f, 28.2928f };
}

void func_265(var uParam0)
{
	*uParam0[0][0] = { 568.8983f, -1698.723f, 28.2631f };
	*uParam0[0][1] = { 575.1474f, -1697.549f, 28.2631f };
	*uParam0[0][2] = { 584.8786f, -1703.875f, 28.2631f };
	uParam0[0]->f_27 = 3;
	uParam0[0]->f_23 = { 565.9069f, -1702.813f, 28.2227f };
	uParam0[0]->f_26 = 58.4094f;
	uParam0[0]->f_17 = { 564.5385f, -1689.707f, 38.2854f };
	uParam0[0]->f_20 = { 605.4141f, -1715.221f, 18.0923f };
	*uParam0[1][0] = { 240.0033f, -1141.433f, 28.3033f };
	*uParam0[1][1] = { 240.5303f, -1137.75f, 28.3091f };
	*uParam0[1][2] = { 229.8743f, -1145.763f, 28.3013f };
	uParam0[1]->f_27 = 3;
	uParam0[1]->f_23 = { 239.0778f, -1134.141f, 28.2367f };
	uParam0[1]->f_26 = 266.7983f;
	uParam0[1]->f_17 = { 242.7403f, -1124.753f, 38.3223f };
	uParam0[1]->f_20 = { 225.7671f, -1152.415f, 18.2047f };
	uParam0[1]->f_10[0] = { 232.3824f, -1137.855f, 28.1944f };
	uParam0[1]->f_10[1] = { 230.8579f, -1136.252f, 28.0348f };
	*uParam0[2][0] = { -95.1473f, -1716.656f, 28.4491f };
	*uParam0[2][1] = { -93.1677f, -1717.84f, 28.4239f };
	uParam0[2]->f_27 = 2;
	uParam0[2]->f_23 = { -102.9092f, -1729.668f, 28.7511f };
	uParam0[2]->f_26 = 105.1153f;
	uParam0[2]->f_10[0] = { -99.8953f, -1726.702f, 28.4622f };
	uParam0[2]->f_10[1] = { -101.1025f, -1728.689f, 28.6286f };
	*uParam0[3][0] = { -117.7085f, -1321.069f, 28.2857f };
	*uParam0[3][1] = { -116.6308f, -1325.362f, 28.3192f };
	uParam0[3]->f_27 = 2;
	uParam0[3]->f_23 = { -112.3024f, -1329.219f, 28.2685f };
	uParam0[3]->f_26 = 179.9845f;
	uParam0[3]->f_10[0] = { -113.1683f, -1319.459f, 28.2125f };
	uParam0[3]->f_10[1] = { -112.2886f, -1322.422f, 28.2633f };
	*uParam0[4][0] = { 308.2367f, -1706.026f, 28.3827f };
	*uParam0[4][1] = { 298.1392f, -1700.768f, 28.3234f };
	uParam0[4]->f_27 = 2;
	uParam0[4]->f_23 = { 314.1078f, -1704.305f, 28.3111f };
	uParam0[4]->f_26 = 227.316f;
	uParam0[4]->f_10[0] = { 304.5671f, -1697.522f, 28.2629f };
	uParam0[4]->f_10[1] = { 308.3995f, -1699.695f, 28.3051f };
	*uParam0[5][0] = { 776.3322f, -2046.078f, 28.2818f };
	*uParam0[5][1] = { 776.0253f, -2048.392f, 28.2653f };
	uParam0[5]->f_27 = 2;
	uParam0[5]->f_23 = { 787.8897f, -2034.542f, 28.2393f };
	uParam0[5]->f_26 = 348.1702f;
	uParam0[5]->f_10[0] = { 782.5989f, -2047.48f, 28.159f };
	uParam0[5]->f_10[1] = { 783.3265f, -2051.183f, 28.1589f };
	*uParam0[6][0] = { 28.2787f, -986.7457f, 28.5094f };
	*uParam0[6][1] = { 35.6153f, -988.3468f, 28.4971f };
	*uParam0[6][2] = { 38.553f, -985.1667f, 28.5576f };
	uParam0[6]->f_27 = 3;
	uParam0[6]->f_23 = { 43.6799f, -982.0863f, 28.4103f };
	uParam0[6]->f_26 = 251.1427f;
	uParam0[6]->f_10[0] = { 30.5244f, -980.0237f, 28.4037f };
	uParam0[6]->f_10[1] = { 34.0509f, -979.3044f, 28.4079f };
	*uParam0[7][0] = { 99.1579f, -1521.963f, 28.3247f };
	*uParam0[7][1] = { 105.699f, -1527.331f, 28.3186f };
	uParam0[7]->f_27 = 2;
	uParam0[7]->f_23 = { 95.4077f, -1529.473f, 28.3325f };
	uParam0[7]->f_26 = 51.3731f;
	uParam0[7]->f_10[0] = { 100.3829f, -1529.783f, 28.2238f };
	uParam0[7]->f_10[1] = { 97.5322f, -1531.58f, 28.3374f };
	*uParam0[8][0] = { 370.2508f, -871.9623f, 28.2916f };
	*uParam0[8][1] = { 364.377f, -872.4929f, 28.2916f };
	uParam0[8]->f_27 = 2;
	uParam0[8]->f_23 = { 370.0709f, -865.2366f, 28.2507f };
	uParam0[8]->f_26 = 271.3831f;
	uParam0[8]->f_10[0] = { 363.9474f, -865.3307f, 28.2621f };
	uParam0[8]->f_10[1] = { 361.2415f, -866.9158f, 28.1908f };
	*uParam0[9][0] = { 258.1324f, -2035.098f, 17.2524f };
	*uParam0[9][1] = { 263.1343f, -2026.365f, 17.7171f };
	uParam0[9]->f_27 = 2;
	uParam0[9]->f_23 = { 260.0068f, -2041.806f, 16.9454f };
	uParam0[9]->f_26 = 140.9065f;
	uParam0[9]->f_10[0] = { 264.5263f, -2036.198f, 17.2682f };
	uParam0[9]->f_10[1] = { 264.3815f, -2032.379f, 17.329f };
	*uParam0[10][0] = { 411.4076f, -1869.433f, 25.5691f };
	*uParam0[10][1] = { 416.1884f, -1862.589f, 26.0458f };
	uParam0[10]->f_27 = 2;
	uParam0[10]->f_23 = { 412.9648f, -1876.901f, 25.3104f };
	uParam0[10]->f_26 = 135.5291f;
	uParam0[10]->f_10[0] = { 418.299f, -1872.54f, 25.6552f };
	uParam0[10]->f_10[1] = { 419.0923f, -1869.039f, 25.6907f };
	*uParam0[11][0] = { 500.9577f, -1664.881f, 28.7134f };
	*uParam0[11][1] = { 501.1261f, -1668.809f, 28.7152f };
	uParam0[11]->f_27 = 2;
	uParam0[11]->f_23 = { 503.8388f, -1661.237f, 28.4841f };
	uParam0[11]->f_26 = 50.8842f;
	uParam0[11]->f_10[0] = { 507.0525f, -1670.254f, 28.7152f };
	uParam0[11]->f_10[1] = { 507.7841f, -1665.116f, 28.4902f };
	*uParam0[12][0] = { -208.9247f, -660.1125f, 32.629f };
	*uParam0[12][1] = { -204.0615f, -660.8978f, 32.7011f };
	*uParam0[12][2] = { -198.1905f, -664.2867f, 32.8159f };
	uParam0[12]->f_27 = 3;
	uParam0[12]->f_23 = { -213.0429f, -666.7334f, 32.6039f };
	uParam0[12]->f_26 = 70.1131f;
	uParam0[12]->f_10[0] = { -210.6179f, -667.8796f, 32.6494f };
	uParam0[12]->f_10[1] = { -204.9018f, -667.8836f, 32.6425f };
	*uParam0[13][0] = { -310.1606f, -869.7873f, 30.6891f };
	*uParam0[13][1] = { -315.0338f, -869.8134f, 30.6555f };
	*uParam0[13][2] = { -319.5981f, -868.6276f, 30.6449f };
	uParam0[13]->f_27 = 3;
	uParam0[13]->f_23 = { -309.987f, -864.1183f, 30.6228f };
	uParam0[13]->f_26 = 261.3995f;
	uParam0[13]->f_10[0] = { -316.0121f, -862.7733f, 30.6267f };
	uParam0[13]->f_10[1] = { -317.526f, -863.8655f, 30.5453f };
	*uParam0[14][0] = { 407.2907f, -1479.637f, 28.2895f };
	*uParam0[14][1] = { 404.6483f, -1483.57f, 28.2895f };
	uParam0[14]->f_27 = 2;
	uParam0[14]->f_23 = { 403.5326f, -1475.197f, 28.2951f };
	uParam0[14]->f_26 = 301.9695f;
	uParam0[14]->f_10[0] = { 399.232f, -1477.783f, 28.2928f };
	uParam0[14]->f_10[1] = { 401.2551f, -1479.737f, 28.1369f };
	*uParam0[15][0] = { -686.6597f, -851.2509f, 22.9054f };
	*uParam0[15][1] = { -696.9954f, -852.1266f, 22.6746f };
	uParam0[15]->f_27 = 2;
	uParam0[15]->f_23 = { -674.3848f, -844.9825f, 23.1517f };
	uParam0[15]->f_26 = 269.1391f;
	uParam0[15]->f_10[0] = { -692.3451f, -845.8392f, 22.7217f };
	uParam0[15]->f_10[1] = { -692.3451f, -845.8392f, 22.7217f };
}

void func_266(var uParam0)
{
	uParam0[0]->f_1 = { 123.999f, -1081.618f, 28.1919f };
	uParam0[0]->f_4 = 180.477f;
	uParam0[0]->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	uParam0[0]->f_9 = 253.9961f;
	(*uParam0)[0] = 0;
	uParam0[1]->f_1 = { 123.999f, -1081.618f, 28.1919f };
	uParam0[1]->f_4 = 180.477f;
	uParam0[1]->f_6 = { 97.7377f, -1072.493f, 28.2717f };
	uParam0[1]->f_9 = 253.9961f;
	(*uParam0)[1] = 0;
	uParam0[2]->f_1 = { -301.9741f, -898.8075f, 30.0813f };
	uParam0[2]->f_4 = 168.6079f;
	uParam0[2]->f_6 = { -301.0894f, -934.515f, 30.0813f };
	uParam0[2]->f_9 = 66.2119f;
	(*uParam0)[2] = 0;
	uParam0[3]->f_1 = { -359.0859f, -965.5469f, 30.0701f };
	uParam0[3]->f_4 = 145.3635f;
	(*uParam0)[3] = 2;
	uParam0[4]->f_1 = { 4.5819f, -1762.495f, 28.2918f };
	uParam0[4]->f_4 = 51.8577f;
	(*uParam0)[4] = 2;
	uParam0[5]->f_1 = { 260.5293f, -1872.327f, 25.8171f };
	uParam0[5]->f_4 = 55f;
	(*uParam0)[5] = 1;
	uParam0[5]->f_6 = { 209.1288f, -2149.055f, 13.3765f };
	uParam0[5]->f_5 = 1;
	uParam0[5]->f_13 = { 331.456f, -1789.7f, 26.817f };
	uParam0[5]->f_16 = { 190.235f, -1957.1f, 26.816f };
	uParam0[5]->f_19 = 7.2f;
	uParam0[6]->f_1 = { 967.3045f, -1873.789f, 30.1425f };
	uParam0[6]->f_4 = 41.1599f;
	(*uParam0)[6] = 2;
	uParam0[7]->f_1 = { -607.5065f, -1216.34f, 13.4082f };
	uParam0[7]->f_4 = 131.5235f;
	(*uParam0)[7] = 2;
	uParam0[8]->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	uParam0[8]->f_4 = 263.5155f;
	uParam0[8]->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	uParam0[8]->f_9 = 62.5486f;
	(*uParam0)[8] = 0;
	uParam0[9]->f_1 = { -136.0945f, -785.4554f, 31.4112f };
	uParam0[9]->f_4 = 276.5309f;
	(*uParam0)[9] = 2;
	uParam0[10]->f_1 = { -32.488f, -1354.867f, 28.1676f };
	uParam0[10]->f_4 = 90.8486f;
	(*uParam0)[10] = 2;
	uParam0[11]->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	uParam0[11]->f_4 = 142.2298f;
	(*uParam0)[11] = 1;
	uParam0[11]->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	uParam0[11]->f_5 = 0;
	uParam0[11]->f_13 = { -111.725f, -1538.781f, -29.292f };
	uParam0[11]->f_16 = { 41.484f, -1667.339f, 29.292f };
	uParam0[11]->f_19 = 7.8f;
	uParam0[12]->f_1 = { 220.6214f, -852.1f, 29.1084f };
	uParam0[12]->f_4 = 249.5924f;
	(*uParam0)[12] = 2;
	uParam0[13]->f_1 = { 337.0184f, -1156.93f, 28.2919f };
	uParam0[13]->f_4 = 270.3139f;
	(*uParam0)[13] = 2;
	uParam0[14]->f_1 = { 953.1846f, -2113.256f, 29.5516f };
	uParam0[14]->f_4 = 265.591f;
	(*uParam0)[14] = 2;
	uParam0[15]->f_1 = { -88.9769f, -2003.448f, 17.0168f };
	uParam0[15]->f_4 = 352.601f;
	(*uParam0)[15] = 2;
	uParam0[16]->f_1 = { 211.0682f, -791.7485f, 29.9f };
	uParam0[16]->f_4 = 68.5508f;
	(*uParam0)[16] = 2;
	uParam0[17]->f_1 = { -327.4179f, -1529.127f, 26.5696f };
	uParam0[17]->f_4 = 179.9431f;
	(*uParam0)[17] = 2;
	uParam0[18]->f_1 = { -596.5739f, -889.578f, 24.4759f };
	uParam0[18]->f_4 = 269.5022f;
	uParam0[18]->f_6 = { -584.4996f, -872.2784f, 24.8909f };
	uParam0[18]->f_9 = 83.1267f;
	(*uParam0)[18] = 0;
	uParam0[19]->f_1 = { 408.6235f, -989.5519f, 28.2665f };
	uParam0[19]->f_4 = 233.0824f;
	(*uParam0)[19] = 2;
	uParam0[20]->f_1 = { -33.8858f, -1602.918f, 28.2902f };
	uParam0[20]->f_4 = 142.2298f;
	(*uParam0)[20] = 1;
	uParam0[20]->f_6 = { 216.8692f, -1814.255f, 24.6812f };
	uParam0[20]->f_5 = 0;
	uParam0[20]->f_13 = { -111.725f, -1538.781f, -29.292f };
	uParam0[20]->f_16 = { 41.484f, -1667.339f, 29.292f };
	uParam0[20]->f_19 = 7.8f;
	uParam0[21]->f_1 = { 432.3639f, -619.0512f, 27.5112f };
	uParam0[21]->f_4 = 263.5155f;
	uParam0[21]->f_6 = { 435.9689f, -662.4229f, 27.8383f };
	uParam0[21]->f_9 = 62.5486f;
	(*uParam0)[21] = 0;
	uParam0[22]->f_1 = { -310.2984f, -686.4995f, 32.1219f };
	uParam0[22]->f_4 = 269.6159f;
	uParam0[22]->f_6 = { -373.468f, -672.849f, 30.4925f };
	uParam0[22]->f_9 = 274.2857f;
	(*uParam0)[22] = 0;
	uParam0[23]->f_1 = { -316.4254f, -895.1236f, 30.0701f };
	uParam0[23]->f_4 = 347.1421f;
	(*uParam0)[23] = 2;
	uParam0[24]->f_1 = { 53.578f, -1417.226f, 28.3517f };
	uParam0[24]->f_4 = 224.8985f;
	(*uParam0)[24] = 2;
	uParam0[25]->f_1 = { 401.6395f, -2054.658f, 20.575f };
	uParam0[25]->f_4 = 168.9083f;
	(*uParam0)[25] = 2;
	uParam0[26]->f_1 = { 146.2919f, -2051.071f, 17.3217f };
	uParam0[26]->f_4 = 265.1393f;
	(*uParam0)[26] = 1;
	uParam0[26]->f_6 = { 339.577f, -1779.002f, 28.1454f };
	uParam0[26]->f_5 = 0;
	uParam0[26]->f_13 = { 149.063f, -2005.992f, -18.327f };
	uParam0[26]->f_16 = { 144.98f, -2095.9f, 18.327f };
	uParam0[26]->f_19 = 8.5f;
	uParam0[27]->f_1 = { 363.1678f, -1749.957f, 28.2073f };
	uParam0[27]->f_4 = 229.6858f;
	(*uParam0)[27] = 1;
	uParam0[27]->f_6 = { 150.5184f, -2010.497f, 17.7098f };
	uParam0[27]->f_5 = 1;
	uParam0[27]->f_13 = { 428.271f, -1674.163f, -29.211f };
	uParam0[27]->f_16 = { 299.18f, -1826.923f, 29.211f };
	uParam0[27]->f_19 = 9f;
	uParam0[28]->f_1 = { 171.3444f, -1776.831f, 28.0622f };
	uParam0[28]->f_4 = 321.1031f;
	(*uParam0)[28] = 1;
	uParam0[28]->f_6 = { -92.782f, -1554.607f, 32.2626f };
	uParam0[28]->f_5 = 1;
	uParam0[28]->f_13 = { 94.446f, -1712.766f, -29.071f };
	uParam0[28]->f_16 = { 248.549f, -1840.251f, 29.211f };
	uParam0[28]->f_19 = 8f;
	uParam0[29]->f_1 = { 421.2757f, -1277.618f, 29.2671f };
	uParam0[29]->f_4 = 359.101f;
	uParam0[29]->f_6 = { 455.9831f, -1267.655f, 29.0609f };
	uParam0[29]->f_9 = 97.7539f;
	(*uParam0)[29] = 0;
	uParam0[30]->f_1 = { 211.0559f, -1371.688f, 29.5776f };
	uParam0[30]->f_4 = 52.932f;
	uParam0[30]->f_6 = { 209.6618f, -1406.521f, 28.2921f };
	uParam0[30]->f_9 = 263.4376f;
	(*uParam0)[30] = 0;
	uParam0[31]->f_1 = { -219.3074f, -1491.846f, 30.2593f };
	uParam0[31]->f_4 = 322.6262f;
	(*uParam0)[31] = 0;
	uParam0[31]->f_6 = { -177.2324f, -1506.01f, 31.6696f };
	uParam0[32]->f_1 = { 538.7713f, -1524.826f, 28.168f };
	uParam0[32]->f_4 = 50.4239f;
	(*uParam0)[32] = 1;
	uParam0[32]->f_6 = { 535.2374f, -1093.33f, 27.4652f };
	uParam0[32]->f_5 = 0;
	uParam0[32]->f_13 = { 557.229f, -1501.367f, -29.273f };
	uParam0[32]->f_16 = { 518.983f, -1547.597f, 29.273f };
	uParam0[32]->f_19 = 8.2f;
	uParam0[33]->f_1 = { 497.2474f, -1199.327f, 28.3046f };
	uParam0[33]->f_4 = 212.2787f;
	(*uParam0)[33] = 1;
	uParam0[33]->f_6 = { 516.6573f, -926.7039f, 14.6979f };
	uParam0[33]->f_5 = 0;
	uParam0[33]->f_13 = { 512.849f, -1198.747f, -29.311f };
	uParam0[33]->f_16 = { 483.086f, -1202.507f, 29.311f };
	uParam0[33]->f_19 = 8f;
	uParam0[34]->f_1 = { 576.4442f, -1705.259f, 28.0895f };
	uParam0[34]->f_4 = 43.2791f;
	(*uParam0)[34] = 4;
	uParam0[34]->f_20 = -1008861746;
	uParam0[34]->f_21 = 0;
	uParam0[34]->f_22 = 0;
	uParam0[34]->f_10 = { 585.9758f, -1707.779f, 28.2677f };
	uParam0[35]->f_1 = { 233.0704f, -1138.882f, 28.2302f };
	uParam0[35]->f_4 = 311.5479f;
	(*uParam0)[35] = 4;
	uParam0[35]->f_20 = -685276541;
	uParam0[35]->f_21 = 0;
	uParam0[35]->f_22 = 1;
	uParam0[36]->f_1 = { -100.5493f, -1724.973f, 28.3857f };
	uParam0[36]->f_4 = 81.5938f;
	(*uParam0)[36] = 4;
	uParam0[36]->f_20 = 886934177;
	uParam0[36]->f_21 = 1;
	uParam0[36]->f_22 = 2;
	uParam0[36]->f_10 = { -92.7179f, -1721.093f, 28.3288f };
	uParam0[37]->f_1 = { -114.5507f, -1318.912f, 28.1481f };
	uParam0[37]->f_4 = 157.6585f;
	(*uParam0)[37] = 4;
	uParam0[37]->f_20 = -1903012613;
	uParam0[37]->f_21 = 0;
	uParam0[37]->f_22 = 3;
	uParam0[37]->f_10 = { -111.4177f, -1293.568f, 28.2889f };
	uParam0[38]->f_1 = { 303.2563f, -1699.098f, 28.1861f };
	uParam0[38]->f_4 = 213.8354f;
	(*uParam0)[38] = 4;
	uParam0[38]->f_20 = -1883002148;
	uParam0[38]->f_21 = 0;
	uParam0[38]->f_22 = 4;
	uParam0[38]->f_10 = { 284.1822f, -1679.657f, 28.3083f };
	uParam0[39]->f_1 = { 784.1456f, -2046.703f, 28.1368f };
	uParam0[39]->f_4 = 12.6961f;
	(*uParam0)[39] = 4;
	uParam0[39]->f_20 = -344943009;
	uParam0[39]->f_21 = 1;
	uParam0[39]->f_22 = 5;
	uParam0[39]->f_10 = { 784.365f, -2070.999f, 28.3414f };
	uParam0[40]->f_1 = { 29.4785f, -980.7521f, 28.4051f };
	uParam0[40]->f_4 = 221.9553f;
	(*uParam0)[40] = 4;
	uParam0[40]->f_20 = -685276541;
	uParam0[40]->f_21 = 0;
	uParam0[40]->f_22 = 6;
	uParam0[40]->f_10 = { 10.3525f, -970.0844f, 28.4022f };
	uParam0[41]->f_1 = { 101.5021f, -1529.546f, 28.2147f };
	uParam0[41]->f_4 = 31.1362f;
	(*uParam0)[41] = 4;
	uParam0[41]->f_20 = -1883869285;
	uParam0[41]->f_21 = 1;
	uParam0[41]->f_22 = 7;
	uParam0[41]->f_10 = { 117.6439f, -1547.885f, 28.2914f };
	uParam0[42]->f_1 = { 360.6348f, -867.98f, 28.1345f };
	uParam0[42]->f_4 = 249.799f;
	(*uParam0)[42] = 4;
	uParam0[42]->f_20 = -304802106;
	uParam0[42]->f_21 = 0;
	uParam0[42]->f_22 = 8;
	uParam0[42]->f_10 = { 324.7404f, -864.9786f, 28.2923f };
	uParam0[43]->f_1 = { 261.1898f, -2035.051f, 17.2895f };
	uParam0[43]->f_4 = 339.6013f;
	(*uParam0)[43] = 4;
	uParam0[43]->f_20 = -1883869285;
	uParam0[43]->f_21 = 1;
	uParam0[43]->f_22 = 9;
	uParam0[43]->f_10 = { 279.2888f, -2017.846f, 18.4895f };
	uParam0[44]->f_1 = { 418.623f, -1867.903f, 25.6724f };
	uParam0[44]->f_4 = 103.9975f;
	(*uParam0)[44] = 4;
	uParam0[44]->f_20 = 886934177;
	uParam0[44]->f_21 = 0;
	uParam0[44]->f_22 = 10;
	uParam0[44]->f_10 = { 443.8106f, -1847.293f, 26.8106f };
	uParam0[45]->f_1 = { 507.4709f, -1668.593f, 28.6539f };
	uParam0[45]->f_4 = 78.9463f;
	(*uParam0)[45] = 4;
	uParam0[45]->f_20 = -1008861746;
	uParam0[45]->f_21 = 1;
	uParam0[45]->f_22 = 11;
	uParam0[45]->f_10 = { 525.0562f, -1678.781f, 28.4452f };
	uParam0[46]->f_1 = { -203.7249f, -667.237f, 32.6054f };
	uParam0[46]->f_4 = 34.4328f;
	(*uParam0)[46] = 4;
	uParam0[46]->f_20 = -1903012613;
	uParam0[46]->f_21 = 0;
	uParam0[46]->f_22 = 12;
	uParam0[46]->f_10 = { -179.7505f, -678.1224f, 33.1625f };
	uParam0[47]->f_1 = { -318.031f, -865.0022f, 30.482f };
	uParam0[47]->f_4 = 238.9396f;
	(*uParam0)[47] = 4;
	uParam0[47]->f_20 = -1883002148;
	uParam0[47]->f_21 = 0;
	uParam0[47]->f_22 = 13;
	uParam0[47]->f_10 = { -338.2523f, -859.7131f, 30.5587f };
	uParam0[48]->f_1 = { 401.2838f, -1480.87f, 28.3058f };
	uParam0[48]->f_4 = 281.6565f;
	(*uParam0)[48] = 4;
	uParam0[48]->f_20 = -344943009;
	uParam0[48]->f_21 = 2;
	uParam0[48]->f_22 = 14;
	uParam0[48]->f_10 = { 369.6188f, -1495.73f, 28.2385f };
	uParam0[49]->f_1 = { 2912.906f, 4410.625f, 47.9319f };
	uParam0[49]->f_4 = 51.9751f;
	(*uParam0)[49] = 4;
	uParam0[49]->f_20 = -1883002148;
	uParam0[49]->f_21 = 0;
	uParam0[49]->f_22 = 15;
	uParam0[49]->f_10 = { 2929.237f, 4389.601f, 49.1801f };
	uParam0[50]->f_1 = { 1684.671f, 4789.85f, 40.9384f };
	uParam0[50]->f_4 = 337.6293f;
	(*uParam0)[50] = 4;
	uParam0[50]->f_20 = -1008861746;
	uParam0[50]->f_21 = 1;
	uParam0[50]->f_22 = 16;
	uParam0[50]->f_10 = { 1677.444f, 4772.696f, 40.9936f };
	uParam0[51]->f_1 = { 217.386f, -2545.061f, 5.1932f };
	uParam0[51]->f_4 = 95.5124f;
	(*uParam0)[51] = 1;
	uParam0[51]->f_6 = { 150.731f, -2066.663f, 17.2342f };
	uParam0[51]->f_5 = 0;
	uParam0[51]->f_13 = { 217.8829f, -2593.548f, 4.174078f };
	uParam0[51]->f_16 = { 217.1816f, -2499.779f, 12.43667f };
	uParam0[51]->f_19 = 8f;
	uParam0[52]->f_1 = { -692.027f, -847.6826f, 22.6477f };
	uParam0[52]->f_4 = 245.055f;
	(*uParam0)[52] = 4;
	uParam0[52]->f_20 = -1008861746;
	uParam0[52]->f_21 = 0;
	uParam0[52]->f_22 = 15;
	uParam0[52]->f_10 = { -723.7541f, -844.7679f, 21.9551f };
}

void func_267()
{
	if (iLocal_3115 < 16)
	{
		HUD::CLEAR_PRINTS();
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		func_300(&Global_110289, 3);
		switch (iLocal_3084)
		{
			case 2:
				sVar0 = "TOW_FAIL_05";
				break;
			
			case 0:
				sVar0 = "TOW_FAIL_10";
				break;
			
			case 6:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 11:
				sVar0 = "TOW_FAIL_08";
				break;
			
			case 13:
				sVar0 = "TOW_FAIL_16";
				break;
			
			case 4:
				sVar0 = "TOW_FAIL_12";
				break;
			
			case 5:
				sVar0 = "TOW_FAIL_01";
				break;
			
			case 3:
				sVar0 = "TOW_FAIL_03";
				break;
			
			case 8:
				sVar0 = "TOW_FAIL_04";
				break;
			
			case 9:
				sVar0 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sVar0 = "TOW_FAIL_06";
				break;
			
			case 15:
				sVar0 = "TOW_FAIL_07";
				break;
			
			case 16:
				sVar0 = "TOW_FAIL_09";
				break;
			
			case 17:
				sVar0 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sVar0 = "TOW_FAIL_02";
				break;
			
			case 21:
				sVar0 = "TOW_FAIL_11";
				break;
			
			case 22:
				sVar0 = "TOW_FAIL_13";
				break;
			
			case 23:
				sVar0 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			sVar0 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_270(sVar0);
		}
		func_269();
		func_271(SCRIPT::GET_THIS_SCRIPT_NAME());
		while (!func_268())
		{
			SYSTEM::WAIT(0);
		}
		func_193();
	}
}

int func_268()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_269()
{
	Global_98779 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_26())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		MISC::SET_BIT(&(Global_98744.f_20), 25);
	}
}

void func_270(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_271(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_272(sParam0, 5, -1);
	}
}

int func_272(char* sParam0, int iParam1, int iParam2)
{
	func_297();
	func_296();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	func_292(1);
	func_290(1);
	func_287(0);
	func_286(1);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 9);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 6);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 20);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 21);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::IS_ENTITY_UPSIDEDOWN(uVar0))
				{
					MISC::SET_BIT(&(Global_98744.f_20), 5);
				}
			}
		}
	}
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	func_285(0);
	func_284(1);
	Global_98744.f_2 = Global_98781;
	if (func_283())
	{
		if (func_282())
		{
			if (Global_98781 >= func_279())
			{
				if (!MISC::IS_BIT_SET(Global_89532[iParam2].f_15, 16))
				{
					if (Global_111638.f_9080.f_330[iParam2].f_1 >= 2)
					{
						Global_92920 = 1;
					}
				}
			}
		}
		else if (Global_98744.f_11 == 6)
		{
			func_274(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_111638.f_18569[iParam2].f_4 >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_273(SCRIPT::GET_THIS_SCRIPT_NAME());
			if (iVar33 > -1)
			{
				if (Global_111638.f_24981.f_4[iVar33] >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
	}
	return 1;
}

int func_273(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", uParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

void func_274(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_275(uParam1, "Abigail1", func_277(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 1:
			func_275(uParam1, "Abigail2", func_277(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 2:
			func_275(uParam1, "Barry1", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 3:
			func_275(uParam1, "Barry2", func_277(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 4:
			func_275(uParam1, "Barry3", func_277(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 5:
			func_275(uParam1, "Barry3A", func_277(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 6:
			func_275(uParam1, "Barry3C", func_277(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 7:
			func_275(uParam1, "Barry4", func_277(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_276(iParam0), 0, 0);
			break;
		
		case 8:
			func_275(uParam1, "Dreyfuss1", func_277(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 9:
			func_275(uParam1, "Epsilon1", func_277(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 10:
			func_275(uParam1, "Epsilon2", func_277(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 11:
			func_275(uParam1, "Epsilon3", func_277(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 12:
			func_275(uParam1, "Epsilon4", func_277(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 13:
			func_275(uParam1, "Epsilon5", func_277(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 14:
			func_275(uParam1, "Epsilon6", func_277(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 15:
			func_275(uParam1, "Epsilon7", func_277(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 16:
			func_275(uParam1, "Epsilon8", func_277(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 17:
			func_275(uParam1, "Extreme1", func_277(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 18:
			func_275(uParam1, "Extreme2", func_277(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 19:
			func_275(uParam1, "Extreme3", func_277(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 20:
			func_275(uParam1, "Extreme4", func_277(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 21:
			func_275(uParam1, "Fanatic1", func_277(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 22:
			func_275(uParam1, "Fanatic2", func_277(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_276(iParam0), 1, 0);
			break;
		
		case 23:
			func_275(uParam1, "Fanatic3", func_277(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_276(iParam0), 0, 1);
			break;
		
		case 24:
			func_275(uParam1, "Hao1", func_277(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_276(iParam0), 0, 1);
			break;
		
		case 25:
			func_275(uParam1, "Hunting1", func_277(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 26:
			func_275(uParam1, "Hunting2", func_277(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 27:
			func_275(uParam1, "Josh1", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 28:
			func_275(uParam1, "Josh2", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 29:
			func_275(uParam1, "Josh3", func_277(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 30:
			func_275(uParam1, "Josh4", func_277(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 31:
			func_275(uParam1, "Maude1", func_277(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 32:
			func_275(uParam1, "Minute1", func_277(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 33:
			func_275(uParam1, "Minute2", func_277(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 34:
			func_275(uParam1, "Minute3", func_277(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 35:
			func_275(uParam1, "MrsPhilips1", func_277(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 36:
			func_275(uParam1, "MrsPhilips2", func_277(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 37:
			func_275(uParam1, "Nigel1", func_277(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 38:
			func_275(uParam1, "Nigel1A", func_277(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 39:
			func_275(uParam1, "Nigel1B", func_277(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 40:
			func_275(uParam1, "Nigel1C", func_277(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 41:
			func_275(uParam1, "Nigel1D", func_277(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_276(iParam0), 1, 1);
			break;
		
		case 42:
			func_275(uParam1, "Nigel2", func_277(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 43:
			func_275(uParam1, "Nigel3", func_277(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 1);
			break;
		
		case 44:
			func_275(uParam1, "Omega1", func_277(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 45:
			func_275(uParam1, "Omega2", func_277(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 46:
			func_275(uParam1, "Paparazzo1", func_277(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 47:
			func_275(uParam1, "Paparazzo2", func_277(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 48:
			func_275(uParam1, "Paparazzo3", func_277(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 49:
			func_275(uParam1, "Paparazzo3A", func_277(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 50:
			func_275(uParam1, "Paparazzo3B", func_277(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 51:
			func_275(uParam1, "Paparazzo4", func_277(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 52:
			func_275(uParam1, "Rampage1", func_277(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 54:
			func_275(uParam1, "Rampage3", func_277(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 55:
			func_275(uParam1, "Rampage4", func_277(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 56:
			func_275(uParam1, "Rampage5", func_277(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_276(iParam0), 0, 0);
			break;
		
		case 53:
			func_275(uParam1, "Rampage2", func_277(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_276(iParam0), 1, 0);
			break;
		
		case 57:
			func_275(uParam1, "TheLastOne", func_277(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 58:
			func_275(uParam1, "Tonya1", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 59:
			func_275(uParam1, "Tonya2", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 60:
			func_275(uParam1, "Tonya3", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 61:
			func_275(uParam1, "Tonya4", func_277(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		case 62:
			func_275(uParam1, "Tonya5", func_277(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_276(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_275(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_276(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_277(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_278(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_278(int iParam0)
{
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_279()
{
	iVar0 = func_280(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_280(var uParam0, bool bParam1)
{
	iVar0 = MISC::GET_HASH_KEY(uParam0);
	iVar1 = func_281(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_281(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_282()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return 1;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_273(&(Global_98744.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_284(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41980 = 1;
	}
	else
	{
		Global_41980 = 0;
	}
}

void func_285(int iParam0)
{
	HUD::DISPLAY_HUD(iParam0);
	HUD::DISPLAY_RADAR(iParam0);
}

void func_286(int iParam0)
{
	if (iParam0 == 1)
	{
		HUD::THEFEED_PAUSE();
		MISC::SET_BIT(&(Global_98744.f_20), 3);
	}
	else if (MISC::IS_BIT_SET(Global_98744.f_20, 3))
	{
		HUD::THEFEED_RESUME();
		MISC::CLEAR_BIT(&(Global_98744.f_20), 3);
	}
}

void func_287(int iParam0)
{
	if (iParam0 == 1)
	{
		if (MISC::IS_BIT_SET(Global_98744.f_20, 4))
		{
			func_289();
			MISC::CLEAR_BIT(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_288();
		MISC::SET_BIT(&(Global_98744.f_20), 4);
	}
}

void func_288()
{
	Global_22211.f_5 = 1;
}

void func_289()
{
	Global_22211.f_5 = 0;
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		func_291();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_162(0))
		{
			func_292(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_291()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_292(int iParam0)
{
	if (func_295())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_294())
		{
			func_293(1, 1);
		}
		else
		{
			func_293(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7357, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 30);
	}
	if (!func_23())
	{
		Global_19486.f_1 = 3;
	}
}

void func_293(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_162(0))
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

bool func_294()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_295()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_296()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_297()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_284(0);
	func_299();
	func_298();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_298()
{
	MISC::CLEAR_BIT(&(Global_98744.f_20), 22);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 8);
}

void func_299()
{
	if (Global_98744.f_16 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_98744.f_16));
		Global_98744.f_16 = 0;
	}
	if (Global_98744.f_17 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Global_98744.f_17));
		Global_98744.f_17 = 0;
	}
}

void func_300(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_301(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_302()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

