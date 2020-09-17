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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_45 = { 1691.228f, 3251.785f, 44.2574f };
	Local_48 = { 2.5652f, 0f, -4.1481f };
	Local_517 = { 500f, 500f, 500f };
	iLocal_520 = -1;
	iLocal_529 = 1;
	fLocal_537 = 0.008f;
	fLocal_538 = 0.013f;
	fLocal_558 = ((0.05f + 0.275f) - 0.01f);
	fLocal_2074 = -1f;
	iLocal_2075 = 1;
	fLocal_2248 = 0.2f;
	fLocal_2249 = 0.2f;
	fLocal_2262 = 0f;
	cLocal_2275 = "SPR_UI_FAILD";
	sLocal_2276 = "SPR_UI_FRETRY";
	sLocal_2304 = "CHECKPOINT_NORMAL";
	sLocal_2305 = "CHECKPOINT_MISSED";
	sLocal_2306 = "CHECKPOINT_PERFECT";
	Local_2307 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2310 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2407 = true;
	bLocal_2408 = true;
	bLocal_2410 = true;
	Local_5280 = { -1497.708f, -3449.576f, 7.3477f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_599();
	}
	GAMEPLAY::SET_MISSION_FLAG(1);
	Local_2321.f_1 = 0;
	Local_2321.f_5 = 0;
	Local_2321.f_6 = 0;
	while (true)
	{
		func_598();
		switch (Local_2321.f_1)
		{
			case 0:
				if (!func_587())
				{
					Local_2321.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2321.f_1 = 2;
				}
				break;
			
			case 2:
				func_599();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51.f_1, 0))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Local_51.f_1 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		Local_51.f_1 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_51.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, -2122757008, 0);
	}
	if (Local_2412.f_2861 != 0)
	{
		Local_2412.f_2862 = (Local_2412.f_2862 - 25);
		if (Local_2412.f_2862 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_2412.f_2861);
			Local_2412.f_2861 = 0;
			bLocal_2277 = false;
		}
		else
		{
			if (bLocal_2277)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			func_584(func_585(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_2412.f_2861, uVar0, uVar1, uVar2, func_583(SYSTEM::CEIL((1.5f * IntToFloat(Local_2412.f_2862))), 255));
			GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(Local_2412.f_2861, uVar0, uVar1, uVar2, Local_2412.f_2862);
		}
	}
	func_582();
	AI::SET_EXCLUSIVE_SCENARIO_GROUP("AMMUNATION");
	CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (Local_2321.f_6 == 4)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51.f_1, 0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_51.f_1))
			{
				FIRE::STOP_ENTITY_FIRE(Local_51.f_1);
			}
		}
	}
	switch (Local_2321.f_6)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Local_2321 = -1;
			Local_51.f_10 = 0;
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			else
			{
				Local_2321.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2321.f_6 = 18;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_51.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_51.f_1, 1);
				Local_2412.f_2859 = 0;
				Local_2321.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2412)
			{
			}
			else if ((CAM::DOES_CAM_EXIST(uLocal_2046) && CAM::IS_CAM_ACTIVE(uLocal_2046)) && CAM::IS_SCREEN_FADED_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2412.f_2858))
				{
					CAM::DESTROY_CAM(Local_2412.f_2858, 0);
				}
				GRAPHICS::_STOP_SCREEN_EFFECT("MinigameTransitionOut");
				GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionIn", 0, 1);
				Local_2412.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionOut", 0, 0);
				CAM::SET_CAM_COORD(uLocal_2046, Local_45.x, Local_45.y, (Local_45.z + 1000f));
				CAM::SET_CAM_ROT(uLocal_2046, 90f, Local_48.y, Local_48.z, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2412.f_2858, uLocal_2046, 500, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				func_581(500);
				if (CAM::DOES_CAM_EXIST(Local_2412.f_2858))
				{
					CAM::DESTROY_CAM(Local_2412.f_2858, 0);
				}
				Local_2412.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_45, Local_48, 34.9705f, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			func_580(&uLocal_2297);
			func_579(1);
			STREAMING::CLEAR_FOCUS();
			Local_2321.f_6 = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(Local_51.f_1, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_51.f_1, 1, 0, 0);
			}
			if (GAMEPLAY::IS_PC_VERSION())
			{
				CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			UI::DISPLAY_RADAR(0);
			Local_2412.f_2 = Local_2412;
			if (Local_2412)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2412.f_358[0].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2412.f_358[0].f_9, 4);
				}
				iLocal_1990 = 0;
				Local_2412 = 0;
				func_548();
				Local_2321.f_6 = 8;
			}
			else if (Local_2412.f_2859)
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if ((Local_2412.f_2859 && CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						AUDIO::PLAY_SOUND(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2412.f_2859 = 0;
						Local_2412.f_2860 = 1;
						func_547(&(Local_51.f_119));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2412.f_2860 && func_546(&uLocal_1550))
					{
						Local_2412.f_2860 = 1;
						func_544(Local_2412.f_2860);
					}
					func_481(&(Local_51.f_118), Global_110668, &(Local_51.f_24[Global_110668]));
				}
				else if (func_471(&iLocal_1987, 0))
				{
					Local_2412.f_2859 = 0;
					iLocal_1987 = 0;
					func_547(&(Local_51.f_119));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_432(&Local_2412, 0) && !iLocal_527) && !bLocal_526)
				{
					func_547(&(Local_51.f_119));
				}
				if (iLocal_530 && PLAYER::IS_PLAYER_ONLINE())
				{
					func_547(&(Local_51.f_119));
					iLocal_530 = 0;
				}
				if ((((!Local_2412.f_2859 && !iLocal_527) && !bLocal_526) && (iLocal_529 || !PLAYER::IS_PLAYER_ONLINE())) && (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 211) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 211)))
				{
					Local_2412.f_2859 = 1;
					AUDIO::PLAY_SOUND(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					func_431(&uLocal_1550);
					Local_2412.f_2860 = func_546(&uLocal_1550);
					func_544(Local_2412.f_2860);
					SYSTEM::SETTIMERA(0);
				}
				if (func_372(&uLocal_5275, &(Local_2412.f_1)))
				{
					iLocal_1990 = 0;
					if (Local_51.f_10 != -1)
					{
						func_364();
						func_548();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_51.f_1, Local_2307, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_1, 0))
							{
								func_363(&uLocal_5277);
								Local_2321.f_6 = 8;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(Local_51.f_1, 0))
						{
							Local_2321.f_6 = 8;
						}
					}
					else
					{
						Local_2321.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51.f_1, 0))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				Local_2321.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2412.f_358[0].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2412.f_358[0].f_9, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2307, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Local_2310, 2, 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1084227584);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2412.f_358[0].f_9))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_START(Local_2307, ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_2321.f_6 = 18;
					}
				}
				else
				{
					Local_2321.f_6 = 18;
				}
			}
			break;
		
		case 8:
			UNK1::_0xAF66DCEE6609B148();
			if (Local_51.f_10 == 0)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_51.f_1);
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_51.f_1, 1, 1, 0);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51.f_1, -1);
				VEHICLE::SET_VEHICLE_FIXED(Local_51.f_1);
				func_359();
				uLocal_2046 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				CAM::SET_CAM_ACTIVE(Local_2412.f_2858, 0);
				Local_2321.f_6 = 9;
			}
			else if (func_358(1000))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				VEHICLE::SET_VEHICLE_FIXED(Local_51.f_1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_51.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_359();
					Local_2321.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((CAM::IS_CAM_ACTIVE(uLocal_2046) && CAM::IS_CAM_INTERPOLATING(uLocal_2046)) || (CAM::IS_CAM_ACTIVE(Local_2412.f_2858) && CAM::IS_CAM_INTERPOLATING(Local_2412.f_2858))))
			{
				CAM::_0xC819F3CBB62BF692(1, 0, 3, 0);
				func_359();
				Local_2321.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2412.f_25 = 0;
			Local_2321.f_6 = 11;
			break;
		
		case 11:
			if (!func_344(&Local_2412))
			{
				func_579(1);
				if (Local_2412.f_2)
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_51.f_10 == 0)
				{
					func_343("SPR_TAXI_GATE", 10000, 1);
					if (!func_362(iLocal_2288, 16))
					{
						func_335(&Local_2412, 0, 1);
						func_334(&iLocal_2288, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					UI::DISPLAY_HUD(1);
					UI::DISPLAY_RADAR(1);
					Local_2321.f_6 = 13;
				}
				else
				{
					Local_2321.f_6 = 13;
				}
				Local_2412.f_2 = 0;
			}
			break;
		
		case 13:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2412.f_358[0].f_9, 0);
				func_359();
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				if (Local_51.f_10 == 0)
				{
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
				else
				{
					func_333(&Local_2412);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (func_581(500))
					{
						Local_2412.f_26 = 0;
						Local_2321.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2321 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2412))
			{
				return 1;
			}
			iLocal_1990 = 3;
			func_23();
			func_13();
			if (!Local_2412)
			{
				func_10(&(Local_2412.f_6));
				func_9(&(Local_2412.f_358[0]), Local_51.f_3, Local_51.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2412.f_358[0].f_9))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2412.f_358[0].f_9, 1084227584);
				}
				if (STREAMING::NEW_LOAD_SCENE_START(Local_45, func_8(Local_48), 4500f, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && func_5(&(Local_2412.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::_SET_FOCUS_AREA(Local_45, func_8(Local_48));
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
				else if (func_2(&(Local_2412.f_6), 20f))
				{
					func_4(&(Local_2412.f_6));
					Local_2321.f_6 = 15;
				}
			}
			else
			{
				Local_2321.f_6 = 3;
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			Local_2412.f_2859 = 0;
			Local_2321.f_6 = 3;
			break;
		
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			func_432(&Local_2412, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_581(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		if (func_5(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_4(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_5(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_6(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
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
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_7(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

Vector3 func_8(struct<3> Param0)
{
	return (-SYSTEM::SIN(Param0.z) * SYSTEM::COS(Param0.x)), (SYSTEM::COS(Param0.z) * SYSTEM::COS(Param0.x)), SYSTEM::SIN(Param0.x);
}

void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)
{
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam4);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam5);
}

void func_10(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_363(uParam0);
	}
	else
	{
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	func_12(uParam0, 0f);
}

void func_12(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_6(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_13()
{
	if (Global_111638.f_19038.f_12[4].f_4 == 1)
	{
		if (Global_111638.f_19038.f_6[4] > 0f)
		{
			if (Global_111638.f_19038.f_6[4] <= func_22(4))
			{
				func_14(125, 0, 0);
			}
		}
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_20((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0].f_6 == 11 || Global_111638.f_10189[iParam0].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0].f_5 = 1;
		Global_111638.f_10189[iParam0].f_10 = iParam1;
		Global_111638.f_10189[iParam0].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_15();
	}
}

void func_15()
{
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_0x11FF1C80276097ED(-2122623864, Global_111361, 0);
					GAMEPLAY::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	STATS::STAT_SET_INT(-1055525200, Global_111374, 1);
	STATS::STAT_SET_INT(-419750212, Global_111357, 1);
	STATS::STAT_SET_INT(1331385274, Global_111375, 1);
	STATS::STAT_SET_INT(542355616, Global_111358, 1);
	STATS::STAT_SET_INT(1561233577, Global_111376, 1);
	STATS::STAT_SET_INT(558499468, Global_111359, 1);
	STATS::STAT_SET_INT(-852659719, Global_111377, 1);
	STATS::STAT_SET_INT(-20401960, Global_111360, 1);
	STATS::STAT_SET_INT(-2122623864, iVar9, 1);
	STATS::STAT_SET_INT(-215705366, Global_111364, 1);
	STATS::STAT_SET_INT(-131898641, (Global_111380 + Global_111379), 1);
	STATS::STAT_SET_INT(-2086369560, (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	STATS::STAT_SET_FLOAT(1215094015, Global_111638.f_10189.f_3853, 1);
	STATS::STAT_SET_INT(1813094653, Global_111381, 1);
	STATS::STAT_SET_INT(-1205712980, Global_111382, 1);
	STATS::STAT_SET_INT(480408826, Global_111383, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_111638.f_10189.f_3853))
	{
		func_19(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_18() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_16();
				}
			}
		}
	}
}

int func_16()
{
	if (func_17(0))
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

bool func_17(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_18()
{
	return Global_30768;
}

int func_19(int iParam0, int iParam1)
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

int func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_21();
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

int func_21()
{
	return Global_1312745;
}

float func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()
{
	iLocal_2313 = 0;
	iLocal_2314 = 0;
	iLocal_2315 = 0;
	iLocal_2316 = 0;
	iLocal_2317 = 0;
	iLocal_2318 = 0;
	iLocal_2319 = 0;
	iLocal_2320 = 0;
}

int func_24(var uParam0)
{
	switch (uParam0->f_26)
	{
		case 0:
			func_360(&iLocal_2288, 4);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_332(uParam0);
			uParam0->f_17 = func_331();
			if (Local_51.f_10 == 0)
			{
				if (!func_362(iLocal_2288, 16))
				{
					func_335(uParam0, 0, 1);
					func_335(uParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			else
			{
				func_333(uParam0);
				if (!func_362(iLocal_2288, 16))
				{
					func_335(uParam0, 0, 1);
					func_335(uParam0, 1, 0);
					func_334(&iLocal_2288, 16);
				}
			}
			func_4(&(uParam0->f_14));
			iLocal_2302 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (Local_51.f_10 == 0)
			{
				if (func_362(iLocal_2288, 16))
				{
					func_360(&iLocal_2288, 16);
				}
				func_329(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_333(uParam0);
				if (!func_304(&(uParam0->f_14)))
				{
					if (!CAM::_0x3044240D2E0FA842())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
					}
					if (func_362(iLocal_2288, 16))
					{
						func_360(&iLocal_2288, 16);
					}
					UI::DISPLAY_HUD(1);
					func_329(uParam0);
					if (Local_51.f_10 == 0 && (Global_111638.f_19038.f_6[0] > Local_51.f_112[0] || Global_111638.f_19038.f_6[0] == 0f))
					{
						func_303("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!func_362(iLocal_2288, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_264(uParam0);
				func_263(&(Local_51.f_119), 0, 0, 1, 1);
				func_262(&(Local_51.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				func_261(&(Local_51.f_119), 1);
				func_334(&iLocal_2288, 1);
			}
			if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_HELP(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				UI::CLEAR_PRINTS();
			}
			if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_HELP(1);
			}
			if (func_260("SPR_RETR_FAIL", 0, 0))
			{
				UI::CLEAR_PRINTS();
			}
			SYSTEM::SETTIMERA(0);
			func_258();
			func_257(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0, 0);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_256(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_254();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0].f_9) && CAM::DOES_CAM_EXIST(uLocal_2047))
				{
					CAM::GET_CAM_ROT(uLocal_2047, 2);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0].f_9, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0].f_9, 1);
					func_253();
				}
			}
			if (!func_239(uParam0, bLocal_2407, bLocal_2408))
			{
				func_253();
				func_238(0);
				UI::CLEAR_HELP(1);
				if (func_362(iLocal_2288, 1))
				{
					func_360(&iLocal_2288, 1);
				}
				func_237(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				iLocal_2411 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				func_4(&uLocal_2278);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_358[0].f_9, Local_2307, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_358[0].f_9, Local_2310, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0].f_9, 1, 0);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_358[0].f_9, 1084227584);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0].f_9, 0);
			}
			iLocal_2406 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_2297, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!func_362(iLocal_2288, 16))
			{
				func_335(uParam0, 0, 1);
				func_335(uParam0, 1, 0);
				func_334(&iLocal_2288, 16);
				func_257(1);
				func_236(uParam0->f_27[uParam0->f_358[0].f_11]);
			}
			if (uParam0->f_1)
			{
				func_202(uParam0);
				func_200(uParam0);
			}
			else
			{
				func_197(&uLocal_2263, 0);
				func_253();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			}
			if (!func_41(uParam0, Local_51))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
				func_28(uParam0);
				func_4(&(uParam0->f_14));
				uParam0->f_26 = 2;
				func_4(&(uParam0->f_22));
			}
			break;
		
		case 8:
			CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
			func_27(&(uParam0->f_17));
			func_253();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(uLocal_2071, iVar0))
		{
			func_360(&uLocal_2071, iVar0);
		}
		if (func_362(uLocal_2072, iVar0))
		{
			func_360(&uLocal_2072, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2059[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_2059[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2065[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_2065[iVar0]));
		}
		iVar0++;
	}
	func_26(&iLocal_2053);
	iVar0 = 0;
	while (iVar0 < iLocal_2053)
	{
		iLocal_2053[iVar0] = 0;
		iVar0++;
	}
}

void func_26(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_27(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_28(var uParam0)
{
	if (!func_7(&(uParam0->f_3)))
	{
		func_40(&(uParam0->f_3));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0].f_9, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	func_39(uParam0);
	if (Local_51 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0]));
		if (iVar0 != 0)
		{
			func_29(&(uParam0->f_358[iVar0]));
		}
		iVar0++;
	}
}

void func_29(var uParam0)
{
}

void func_30(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		if (Local_51 != 0)
		{
			func_31();
		}
	}
}

void func_31()
{
}

void func_32(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar0].f_8, 0))
		{
			if (uParam0->f_358[iVar0].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_51.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0].f_12)
				{
					func_36(Local_51.f_10, uParam0->f_358[iVar0].f_12);
				}
				fVar2 = func_35(Local_51.f_10);
				func_34(Local_51.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0].f_13)
				{
					func_33(Local_51.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)
{
	Global_111638.f_19038.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)
{
	Local_51.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)
{
	uVar0 = Global_111638.f_19038.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)
{
	Global_111638.f_19038[iParam0] = uParam1;
}

int func_37(int iParam0)
{
	iVar0 = 0;
	iVar0 = Global_111638.f_19038[iParam0];
	return iVar0;
}

void func_38(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0].f_13 > uParam0->f_358[iVar1].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0].f_13 = (uParam0->f_358[0].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0].f_11)) * GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_40(var uParam0)
{
	if (func_3(uParam0))
	{
		if (!func_7(uParam0))
		{
			uParam0->f_2 = (func_6(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
			GAMEPLAY::SET_BIT(uParam0, 2);
		}
	}
}

int func_41(var uParam0, int iParam1)
{
	if (Local_51.f_10 == 0)
	{
		if (uParam0->f_358[0].f_11 == 0)
		{
			func_11(&(uParam0->f_3));
			if (func_362(iLocal_2289, 131072))
			{
				VEHICLE::RESET_VEHICLE_STUCK_TIMER(uParam0->f_358[0].f_9, 4);
				func_360(&iLocal_2289, 131072);
			}
		}
		else if (uParam0->f_358[0].f_11 == 1 && !func_362(iLocal_2289, 131072))
		{
			func_303("SPR_INFO_BON", 10000);
			func_334(&iLocal_2289, 131072);
			if (func_362(iLocal_2289, 262144))
			{
				func_360(&iLocal_2289, 262144);
			}
		}
		else if (uParam0->f_358[0].f_11 == 4 && !func_362(iLocal_2289, 262144))
		{
			func_303("SPR_INFO_RESET", 10000);
			func_334(&iLocal_2289, 262144);
		}
	}
	if (func_3(&(uParam0->f_3)))
	{
		fVar0 = func_5(&(uParam0->f_3));
	}
	func_179(uParam0->f_358[0].f_11, uParam0->f_1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar23 = true;
			}
			iVar22 = uParam0->f_358[iVar1].f_11;
			if (uParam0->f_358[iVar1].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1)] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar22] };
			}
			if (iVar22 < (uParam0->f_12 - 1))
			{
				Var12 = { uParam0->f_27[iVar22 + 1] };
			}
			else
			{
				Var12 = { Var2 };
			}
			if (iVar22 != uParam0->f_12)
			{
				uParam0->f_358[iVar1].f_13 = (fVar0 - uParam0->f_358[iVar1].f_15);
				if (uParam0->f_358[iVar1].f_13 < 0f)
				{
					uParam0->f_358[iVar1].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1]), bVar23))
			{
				if ((bVar23 && uParam0->f_1) && (Local_51.f_10 != 0 || uParam0->f_358[0].f_11 > 0))
				{
					if (!func_3(&uLocal_2399))
					{
						func_363(&uLocal_2399);
					}
					if (func_5(&uLocal_2402) >= 6.5f)
					{
						if (!CONTROLS::IS_CONTROL_PRESSED(2, 222))
						{
							func_11(&uLocal_2399);
						}
						else if (func_5(&uLocal_2399) >= 1.5f)
						{
							uParam0->f_1 = 0;
							func_360(&iLocal_2289, 32768);
							uParam0->f_358[0].f_23 = 6;
						}
					}
					else if (CONTROLS::IS_CONTROL_PRESSED(2, 222))
					{
						if (func_5(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2289, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2289, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(uParam0->f_358[iVar1].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_51 == 0 && func_3(&uLocal_2284))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1].f_14 != 0f)
						{
							func_363(&(uParam0->f_14));
						}
						if (func_362(iLocal_2288, 8))
						{
							func_335(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_335(uParam0, iVar22 + 1, 0);
							}
							func_360(&iLocal_2288, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var12, uParam0->f_358[iVar1].f_8);
						func_90(&Var2, &Var12);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1]), bVar23, uParam0->f_11);
						}
						bLocal_2277 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1].f_11++;
						iVar22 = uParam0->f_358[iVar1].f_11;
						if (iVar22 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1)] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar22] };
						}
						if (bVar23)
						{
							func_78(uParam0, (iVar22 - 1));
							if (iVar22 == uParam0->f_12)
							{
								iVar24 = 0;
								if (func_3(&(uParam0->f_3)))
								{
									if (!func_7(&(uParam0->f_3)))
									{
										func_40(&(uParam0->f_3));
									}
									if (uParam0->f_358[0].f_13 > 0f)
									{
										if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
										{
											iVar24 = 1;
										}
										else if (uParam0->f_358[0].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
										{
											iVar24 = 2;
										}
										else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1].f_11 = (uParam0->f_358[iVar1].f_11 - 1);
									UI::CLEAR_PRINTS();
									sLocal_2276 = "SPR_TIME_FAIL";
									uParam0->f_358[0].f_23 = 0;
								}
							}
							else
							{
								func_335(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_335(uParam0, iVar22 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1].f_14 == 0f)
							{
								if (func_3(&(uParam0->f_14)))
								{
									func_4(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar22 == SYSTEM::ROUND((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1].f_14 = 0f;
										func_11(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1].f_11 >= uParam0->f_12)
						{
							if (Local_51 != 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1].f_8, 0))
								{
									func_29(&(uParam0->f_358[iVar1]));
								}
							}
						}
						else
						{
							if (Local_51 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, uParam0->f_27[uParam0->f_358[iVar1].f_11], uParam0->f_27[uParam0->f_358[iVar1].f_11].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_51.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2410)
									{
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1].f_8, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1].f_9, 0))
										{
											if (AI::GET_SCRIPT_TASK_STATUS(uParam0->f_358[iVar1].f_8, -235832601) == 1)
											{
											}
											else
											{
												AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, &cVar25, 262144, 0, 8, -1, VEHICLE::_0x53AF99BAA671CA47(uParam0->f_358[iVar1].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1].f_8, uParam0->f_358[iVar1].f_9, uParam0->f_27[uParam0->f_358[iVar1].f_11], uParam0->f_27[uParam0->f_358[iVar1].f_11].f_7, iVar1);
									}
								}
							}
							if (Local_51 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &uLocal_2409);
		func_64(uParam0, &uLocal_2409);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0].f_23 != 0)
		{
			if (Local_51.f_10 == 0)
			{
				if (uParam0->f_358[0].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)
{
	if (UI::IS_RADAR_HIDDEN())
	{
		UI::DISPLAY_RADAR(1);
	}
	if (!func_3(&uLocal_2078))
	{
		iLocal_2076 = 0;
		iLocal_2077 = 0;
		func_363(&uLocal_2078);
	}
	if (SYSTEM::CEIL((uParam0->f_358[0].f_15 * 1000f)) != iLocal_2077)
	{
		iLocal_2076 = (SYSTEM::CEIL((uParam0->f_358[0].f_15 * 1000f)) - iLocal_2077);
		iLocal_2077 = SYSTEM::CEIL((uParam0->f_358[0].f_15 * 1000f));
		func_11(&uLocal_2078);
	}
	iVar0 = (SYSTEM::FLOOR((func_5(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_358[0].f_15 * 1000f)));
	iVar1 = 0;
	if (func_5(&uLocal_2078) <= 2f)
	{
		if (uParam0->f_358[0].f_11 > 0)
		{
			iVar1 = -iLocal_2076;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_111638.f_19038.f_6[Local_51.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_51.f_106[Local_51.f_10] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_51.f_106[Local_51.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_51.f_112[Local_51.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_51.f_112[Local_51.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	func_55();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)
{
	if (fParam29 > -1f)
	{
		func_51(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_49(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_47(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(7, iVar0);
		Global_1378678.f_4562[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = iParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = uParam4;
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

void func_45(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_46(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_47(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(5, iVar0);
		Global_1378678.f_3630[iVar0] = iParam0;
		Global_1378678.f_3630.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[iVar0]), sParam2, 64);
		Global_1378678.f_3630.f_194[iVar0] = uParam3;
		Global_1378678.f_3630.f_183[iVar0] = uParam4;
		Global_1378678.f_3630.f_216[iVar0] = iParam5;
		Global_1378678.f_3630.f_227[iVar0] = iParam6;
		Global_1378678.f_3630.f_270[iVar0] = iParam7;
		Global_1378678.f_3630.f_281[iVar0] = iParam8;
		Global_1378678.f_3630.f_292[iVar0] = iParam9;
		Global_1378678.f_3630.f_303[iVar0] = iParam10;
	}
}

void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(3, iVar0);
		Global_1378678.f_2764[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_2764.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_2764.f_183[iVar0] = uParam3;
		Global_1378678.f_2764.f_172[iVar0] = uParam2;
		Global_1378678.f_2764.f_205[iVar0] = iParam4;
		Global_1378678.f_2764.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_2764.f_259[iVar0]), sParam6, 64);
		Global_1378678.f_2764.f_420[iVar0] = iParam7;
		Global_1378678.f_2764.f_453[iVar0] = iParam8;
		Global_1378678.f_2764.f_431[iVar0] = iParam9;
		Global_1378678.f_2764.f_442[iVar0] = iParam10;
		Global_1378678.f_2764.f_464[iVar0] = iParam11;
		Global_1378678.f_2764.f_475[iVar0] = iParam12;
		Global_1378678.f_2764.f_486[iVar0] = iParam13;
		Global_1378678.f_2764.f_497[iVar0] = iParam14;
	}
}

void func_49(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0] = fParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
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

int func_50(char[4] cParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(cParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(cParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_46(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_45(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = uParam3;
		Global_1378678.f_3944.f_172[iVar0] = uParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_53())
		{
			Global_1378678.f_1130 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_52())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_52()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_53()
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

int func_54()
{
	return iLocal_2075;
}

void func_55()
{
	Global_1378678.f_1130 = 1;
}

void func_56(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()
{
	if (Local_51 == 0)
	{
		UI::SET_MINIMAP_COMPONENT(0, 0, -1);
		UI::SET_MINIMAP_COMPONENT(1, 0, -1);
		UI::SET_MINIMAP_COMPONENT(2, 0, -1);
		UI::SET_MINIMAP_COMPONENT(3, 0, -1);
	}
}

void func_58(var uParam0)
{
	if (func_5(&(uParam0->f_3)) > 15f)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0].f_9) < 5f)
		{
			if (!func_3(&uLocal_2281))
			{
				func_10(&uLocal_2281);
			}
			else if (func_5(&uLocal_2281) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2289, 8192);
				if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
				{
					if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
					{
						UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
					}
				}
				if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
					{
						UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
					}
				}
				func_11(&uLocal_2281);
				func_11(&uLocal_2278);
				uParam0->f_1 = 0;
				UI::CLEAR_PRINTS();
				sLocal_2276 = "SPR_RETR_IDLE";
				uParam0->f_358[0].f_23 = 0;
			}
			else if (func_5(&uLocal_2281) > 30f)
			{
				if (!func_362(iLocal_2288, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2288, 32, 0);
				}
			}
		}
		else if (func_3(&uLocal_2281))
		{
			func_360(&iLocal_2288, 32);
			func_11(&uLocal_2281);
		}
	}
	else if (func_3(&uLocal_2281))
	{
		func_360(&iLocal_2288, 32);
		func_11(&uLocal_2281);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_62(*iParam3, iParam4))
	{
		return;
	}
	func_61(sParam0, iParam1, iParam2);
	func_60(iParam3, iParam4);
}

void func_60(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_61(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_62(var uParam0, var uParam1)
{
	return (uParam0 && uParam1) != 0;
}

void func_63()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_64(var uParam0, var uParam1)
{
	if (uParam0->f_1)
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0) || ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0].f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_11(&uLocal_2278);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::REMOVE_BLIP(uParam1);
			}
			if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
			{
				if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
				{
					UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
				}
			}
			if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
				{
					UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			UI::CLEAR_PRINTS();
			sLocal_2276 = "SPR_RETR_DES";
			uParam0->f_358[0].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (Local_51 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				UI::CLEAR_PRINTS();
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (UI::DOES_BLIP_EXIST(*uParam1))
				{
					UI::REMOVE_BLIP(uParam1);
					if (uParam0->f_358[0].f_11 <= (uParam0->f_12 - 1))
					{
						if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11].f_5))
						{
							UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11].f_5, 0);
						}
					}
					if (uParam0->f_358[0].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (UI::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5))
						{
							UI::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0].f_11 + 1].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				UI::CLEAR_PRINTS();
				sLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam0->f_358[0].f_23 = 7;
			}
		}
	}
}

void func_66(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1);
}

void func_67(var uParam0)
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)
{
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_358[0].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_51 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0].f_9, 0))
				{
					bLocal_2287 = true;
				}
			}
			if (bLocal_2287)
			{
				if (uParam0->f_27[uParam0->f_358[0].f_11].f_7 == 6 || uParam0->f_27[uParam0->f_358[0].f_11].f_7 == 10)
				{
					if (!UI::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
					}
				}
			}
		}
		else
		{
			if (UI::IS_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_PRINTS();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
	if (Local_51 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (UI::IS_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_PRINTS();
			}
			if (func_71())
			{
				func_69();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2289, 2);
		}
	}
}

void func_69()
{
	Global_19671 = 0;
	func_70();
}

void func_70()
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

int func_71()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_72(var uParam0)
{
	Var0 = { uParam0->f_27[uParam0->f_358[0].f_11] };
	if (uParam0->f_358[0].f_11 > 0)
	{
		Var3 = { uParam0->f_27[(uParam0->f_358[0].f_11 - 1)] };
	}
	else
	{
		Var3 = { 0f, 0f, 0f };
	}
	fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
	fVar7 = fVar6;
	if (uParam0->f_358[0].f_11 == 0)
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	else
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	Var8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0].f_8, 1) };
	if (func_73(Var3, 0f, 0f, 0f, 1056964608, 0))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { GAMEPLAY::_0x21C235BC64831E5A(Var8, Var3, Var0, 1) };
	}
	fVar14 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_51 == 1)
	{
		if (GAMEPLAY::ABSF((Var11.z - Var8.z)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		func_11(&uLocal_2278);
		uParam0->f_1 = 0;
		UI::CLEAR_PRINTS();
		func_256(1);
		uParam0->f_358[0].f_23 = 0;
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
		sLocal_2276 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			func_303("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2289, 4);
		}
	}
	else
	{
		UI::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (func_362(iLocal_2289, 4))
		{
			func_360(&iLocal_2289, 4);
		}
	}
}

int func_73(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (GAMEPLAY::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (GAMEPLAY::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (GAMEPLAY::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_74()
{
	if (iLocal_1992 == 1)
	{
		if (func_3(&uLocal_2022))
		{
			if (func_5(&uLocal_2022) <= 2.5f)
			{
				iLocal_2073 = "GATEMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1992 = 0;
			}
		}
	}
	if (iLocal_1993 == 1)
	{
		if (func_3(&uLocal_2028))
		{
			if (func_5(&uLocal_2028) <= 2.5f)
			{
				iLocal_2073 = "GATEINNER";
				fLocal_2074 = 1f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1993 = 0;
			}
		}
	}
	if (iLocal_1994 == 1)
	{
		if (func_3(&uLocal_2025))
		{
			if (func_5(&uLocal_2025) <= 2.5f)
			{
				iLocal_2073 = "GATEOUTTER";
				fLocal_2074 = 0f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1994 = 0;
			}
		}
	}
	if (iLocal_1995 == 1)
	{
		if (func_3(&uLocal_2037))
		{
			if (func_5(&uLocal_2037) <= 2.5f)
			{
				iLocal_2073 = "GATEKNIFEINNER";
				fLocal_2074 = 2.5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1995 = 0;
			}
		}
	}
	if (iLocal_1996 == 1)
	{
		if (func_3(&uLocal_2040))
		{
			if (func_5(&uLocal_2040) <= 2.5f)
			{
				iLocal_2073 = "GATEINVERTEDIN";
				fLocal_2074 = 3f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1996 = 0;
			}
		}
	}
	if (iLocal_1997 == 1)
	{
		if (func_3(&uLocal_2031))
		{
			if (func_5(&uLocal_2031) <= 2.5f)
			{
				iLocal_2073 = "GATEKNIFEOUTTER";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1997 = 0;
			}
		}
	}
	if (iLocal_1998 == 1)
	{
		if (func_3(&uLocal_2034))
		{
			if (func_5(&uLocal_2034) <= 2.5f)
			{
				iLocal_2073 = "GATEINVERTEDOUT";
				fLocal_2074 = 2f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1998 = 0;
			}
		}
	}
	if (iLocal_1999 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFELEFT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_1999 = 0;
			}
		}
	}
	if (iLocal_2000 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFELEFTHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2000 = 0;
			}
		}
	}
	if (iLocal_2001 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFELEFTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2001 = 0;
			}
		}
	}
	if (iLocal_2002 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHT";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2002 = 0;
			}
		}
	}
	if (iLocal_2003 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHTHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2003 = 0;
			}
		}
	}
	if (iLocal_2004 == 1)
	{
		if (func_3(&uLocal_2010))
		{
			if (func_5(&uLocal_2010) <= 2.5f)
			{
				iLocal_2073 = "STUNTKNIFERIGHTMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2004 = 0;
			}
		}
	}
	if (iLocal_2005 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				iLocal_2073 = "STUNTINVERTED";
				fLocal_2074 = 4f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2005 = 0;
			}
		}
	}
	if (iLocal_2006 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				iLocal_2073 = "STUNTINVERTEDHIT";
				fLocal_2074 = 1.5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2006 = 0;
			}
		}
	}
	if (iLocal_2007 == 1)
	{
		if (func_3(&uLocal_2013))
		{
			if (func_5(&uLocal_2013) <= 2.5f)
			{
				iLocal_2073 = "STUNTINVERTEDMISS";
				fLocal_2074 = 5f;
				iLocal_2075 = 1;
			}
			else
			{
				iLocal_2073 = 0;
				fLocal_2074 = -1f;
				iLocal_2075 = 1;
				iLocal_2007 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1].f_8, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1].f_9, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9, 0))
			{
				fVar0 = VEHICLE::_0x53AF99BAA671CA47(uParam0->f_358[iParam1].f_9);
				if (uParam0->f_358[0].f_11 == uParam0->f_358[iParam1].f_11)
				{
				}
				else if (uParam0->f_358[iParam1].f_11 > uParam0->f_358[0].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_358[iParam1].f_9, -1, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[iParam1].f_8, uParam0->f_358[iParam1].f_9, -1);
						AI::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_358[iParam1].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (Local_51 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2, 0))
			{
				AI::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::_0x53AF99BAA671CA47(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_51 == 2)
		{
			uParam6 = uParam6;
			func_77(uParam0, Param3, iParam7);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam4)
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam4 = uParam4;
}

void func_78(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1]));
	func_81(&(uParam0->f_27[iParam1].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1]));
		func_79(&(uParam0->f_27[iParam1 + 1]));
	}
}

void func_79(var uParam0)
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_2277)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		func_584(func_585(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		GRAPHICS::_SET_CHECKPOINT_ICON_RGBA(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)
{
	func_83(&(uParam0->f_5));
}

void func_83(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
	}
}

int func_84(int iParam0)
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (Local_51 == 0)
		{
			if (func_3(&uLocal_2022))
			{
				func_89(&uLocal_2022, 3f);
			}
			if (func_3(&uLocal_2016))
			{
				func_89(&uLocal_2016, 3f);
			}
			if (func_3(&uLocal_2010))
			{
				func_89(&uLocal_2010, 3f);
			}
			if (func_3(&uLocal_2019))
			{
				func_89(&uLocal_2019, 3f);
			}
			if (func_3(&uLocal_2013))
			{
				func_89(&uLocal_2013, 3f);
			}
			if (func_3(&uLocal_2025))
			{
				func_89(&uLocal_2025, 3f);
			}
			if (func_3(&uLocal_2028))
			{
				func_89(&uLocal_2028, 3f);
			}
			if (func_3(&uLocal_2031))
			{
				func_89(&uLocal_2031, 3f);
			}
			if (func_3(&uLocal_2034))
			{
				func_89(&uLocal_2034, 3f);
			}
			if (func_3(&uLocal_2037))
			{
				func_89(&uLocal_2037, 3f);
			}
			if (func_3(&uLocal_2040))
			{
				func_89(&uLocal_2040, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1992 = 1;
					func_11(&uLocal_2022);
					break;
				
				case 1:
					iLocal_1993 = 1;
					func_11(&uLocal_2028);
					break;
				
				case 2:
					iLocal_1994 = 1;
					func_11(&uLocal_2025);
					break;
				
				case 3:
					iLocal_1995 = 1;
					func_11(&uLocal_2037);
					break;
				
				case 4:
					iLocal_1996 = 1;
					func_11(&uLocal_2040);
					break;
				
				case 5:
					iLocal_1997 = 1;
					func_11(&uLocal_2031);
					break;
				
				case 6:
					iLocal_1998 = 1;
					func_11(&uLocal_2034);
					break;
				
				case 8:
					iLocal_1999 = 1;
					func_11(&uLocal_2010);
					break;
				
				case 9:
					iLocal_2000 = 1;
					func_11(&uLocal_2019);
					break;
				
				case 10:
					iLocal_2001 = 1;
					func_11(&uLocal_2022);
					break;
				
				case 11:
					iLocal_2002 = 1;
					func_11(&uLocal_2010);
					break;
				
				case 12:
					iLocal_2003 = 1;
					func_11(&uLocal_2019);
					break;
				
				case 13:
					iLocal_2004 = 1;
					func_11(&uLocal_2022);
					break;
				
				case 14:
					iLocal_2005 = 1;
					func_11(&uLocal_2013);
					break;
				
				case 15:
					iLocal_2006 = 1;
					func_11(&uLocal_2019);
					break;
				
				case 16:
					iLocal_2007 = 1;
					func_11(&uLocal_2022);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_89(var uParam0, float fParam1)
{
	if (func_3(uParam0))
	{
		func_12(uParam0, (func_5(uParam0) + fParam1));
	}
}

void func_90(var uParam0, var uParam1)
{
	if (uParam0->f_6 != 0)
	{
		iVar4 = func_92();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		func_584(func_585(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_6, uVar0, uVar1, uVar2, func_91(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = func_92();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		func_584(func_585(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_6, uVar0, uVar1, uVar2, func_91(*uParam1, 25, 200));
	}
}

int func_91(struct<3> Param0, int iParam3, int iParam4)
{
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - SYSTEM::CEIL((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

int func_92()
{
	return 12;
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_51 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!func_362(iLocal_2320, 262144))
						{
							func_98("Gate_PK", &iLocal_2319);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 262144);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 524288))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 524288);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 1048576))
						{
							func_98("Con_PK", &iLocal_2319);
							func_334(&iLocal_2320, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2319);
							return iVar12;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!func_362(iLocal_2320, 32768))
							{
								func_98("Gate_PI", &iLocal_2318);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 32768);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 65536))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 65536);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 131072))
							{
								func_98("Con_PI", &iLocal_2318);
								func_334(&iLocal_2320, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2318);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!func_362(iLocal_2320, 4096))
						{
							func_98("Get_Perf", &iLocal_2315);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 4096);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 8192))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 8192);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16384))
						{
							func_98("Con_Perf", &iLocal_2315);
							func_334(&iLocal_2320, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2315);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!func_362(iLocal_2320, 64))
						{
							func_98("Gate_Kni", &iLocal_2317);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 64);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 128))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 128);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 256))
						{
							func_98("Con_Kni", &iLocal_2317);
							func_334(&iLocal_2320, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2317);
							return iVar12;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.z <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!func_362(iLocal_2320, 512))
							{
								func_98("Gate_Inv", &iLocal_2316);
								iLocal_2320 = 0;
								func_334(&iLocal_2320, 512);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 1024))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 1024);
								return iVar12;
							}
							else if (!func_362(iLocal_2320, 2048))
							{
								func_98("Con_Inv", &iLocal_2316);
								func_334(&iLocal_2320, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2316);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!func_362(iLocal_2320, 8))
						{
							func_98("Gate_Hit", &iLocal_2314);
							iLocal_2320 = 0;
							func_334(&iLocal_2320, 8);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 16))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 16);
							return iVar12;
						}
						else if (!func_362(iLocal_2320, 32))
						{
							func_98("Con_Hit", &iLocal_2314);
							func_334(&iLocal_2320, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2314);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (uParam1->f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (uParam1->f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!func_362(iLocal_2320, 1))
					{
						func_98("Gate_Miss", &iLocal_2313);
						iLocal_2320 = 0;
						func_334(&iLocal_2320, 1);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 2))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 2);
						return iVar12;
					}
					else if (!func_362(iLocal_2320, 4))
					{
						func_98("Con_Miss", &iLocal_2313);
						func_334(&iLocal_2320, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2313);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (uParam1->f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (uParam1->f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!func_362(iLocal_2320, 1))
				{
					func_98("Gate_Miss", &iLocal_2313);
					iLocal_2320 = 0;
					func_334(&iLocal_2320, 1);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 2))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 2);
					return iVar12;
				}
				else if (!func_362(iLocal_2320, 4))
				{
					func_98("Con_Miss", &iLocal_2313);
					func_334(&iLocal_2320, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2313);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)
{
	if (!func_73(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (ENTITY::IS_ENTITY_AT_COORD(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { func_96(*uParam1 - *uParam0) };
			if ((func_95(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Var1) - func_95(*uParam0, Var1)) > 15f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2305, "HUD_MINI_GAME_SOUNDSET", 1);
				return 1;
			}
		}
	}
	return 0;
}

float func_95(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

Vector3 func_96(struct<3> Param0)
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

bool func_97(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (GAMEPLAY::ABSF(Var6.z) > 0.342f)
	{
		return 0;
	}
	return Var3.z < 0f;
}

void func_98(char* sParam0, var uParam1)
{
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!func_362(*uParam1, 1))
	{
		if (!iLocal_1991)
		{
			iLocal_1991 = 1;
			func_334(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1991 = 0;
			if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &cVar0))
			{
				func_61("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (func_362(*uParam1, 1))
	{
		if (!func_362(*uParam1, 2))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 2))
	{
		if (!func_362(*uParam1, 4))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 4))
	{
		if (!func_362(*uParam1, 8))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (func_362(*uParam1, 8))
	{
		if (!func_362(*uParam1, 16))
		{
			if (!iLocal_1991)
			{
				iLocal_1991 = 1;
				func_334(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1991 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					func_61("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (GAMEPLAY::ABSF(Var6.z) > 0.342f)
	{
		return 0;
	}
	return Var3.z > 0f;
}

int func_100(var uParam0, int iParam1)
{
	Var0 = { *uParam0 };
	ENTITY::GET_ENTITY_MATRIX(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = GAMEPLAY::ABSF(func_95(Var15, Var12));
	fVar19 = GAMEPLAY::ABSF(func_95(Var15, Var9));
	fVar20 = GAMEPLAY::ABSF(func_95(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_197(&uLocal_2263, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_197(&uLocal_2263, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				func_197(&uLocal_2263, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1].f_8, 0) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8, 0))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1].f_11)
				{
					fVar191 = func_102(Var2.f_8, uParam0->f_27[Var2.f_11], 1);
					fVar192 = func_102(uParam0->f_358[iVar1].f_8, uParam0->f_27[uParam0->f_358[iVar1].f_11], 1);
					if (fVar191 < fVar192)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1].f_12 = iVar0;
}

float func_102(int iParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_62(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		func_303(sParam0, -1);
	}
	else
	{
		func_104(sParam0);
	}
	func_60(iParam1, iParam2);
}

void func_104(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_105(var uParam0, var uParam1, bool bParam2)
{
	switch (uParam1->f_23)
	{
		case 0:
			func_178(uParam0);
			func_253();
			func_263(&(Local_51.f_119), 0, 0, 1, 1);
			func_262(&(Local_51.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(Local_51.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			func_256(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_172(&(Local_51.f_321), &(Local_51.f_327), &(uParam0->f_17), cLocal_2275, sLocal_2276, uParam0, 78))
			{
				iLocal_2406 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0].f_9, 4);
				}
				if (func_260("SPR_HELP_DAMG", 0, 0))
				{
					UI::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				func_66(&(Local_51.f_321), 1);
				if (*uParam0)
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					if (func_260("SPR_RETR_DES", 0, 0))
					{
						UI::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					func_256(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_164(0, 0);
					func_163(0, 0);
					func_162();
					func_89(&uLocal_2278, 10f);
					func_256(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_154(&(Local_51.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (func_260("SPR_RETR_DES", 0, 0))
				{
					UI::CLEAR_THIS_PRINT("SPR_RETR_DES");
				}
				func_256(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				func_164(0, 0);
				func_163(0, 0);
				func_162();
				iLocal_2411 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				func_89(&uLocal_2278, 10f);
				func_256(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11] };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					func_263(&(Local_51.f_119), 0, 0, 1, 1);
					func_262(&(Local_51.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					func_262(&(Local_51.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (func_5(&uLocal_2278) <= 10f)
			{
				if (bParam2)
				{
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
					func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						*uParam0 = 1;
						iLocal_2411 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2411, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						*uParam0 = 0;
						func_89(&uLocal_2278, 10f);
						iLocal_2411 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2411, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				UI::CLEAR_PRINTS();
				sLocal_2276 = "SPR_RETR_DES";
				func_66(&(Local_51.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (func_358(500))
			{
				UI::CLEAR_PRINTS();
				UI::CLEAR_HELP(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (func_3(&(uParam0->f_3)))
			{
				func_4(&(uParam0->f_3));
			}
			if (func_135())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_178(uParam0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0].f_9))
					{
						ENTITY::SET_ENTITY_VELOCITY(uParam0->f_358[0].f_9, 0f, 0f, 0f);
						ENTITY::SET_ENTITY_HEALTH(uParam0->f_358[0].f_9, ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_358[0].f_9), 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_133(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						if (Local_51 == 0)
						{
							PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0].f_8 == uParam1->f_8)
				{
					func_131(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0) && uParam0->f_358[0].f_11 != -1)
				{
					func_130(uParam0->f_27[uParam0->f_358[0].f_11 + 1], uParam0->f_358[0].f_9, uParam0->f_27[uParam0->f_358[0].f_11], uParam0->f_358[0].f_11 == 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				func_11(&uLocal_2402);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_164(0, 0);
			func_163(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_51.f_3, Local_51.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				uParam0->f_1 = 1;
				func_11(&uLocal_2402);
				func_108(&(uParam0->f_358[iVar0]), 60f, 0);
				if (func_581(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0].f_9, 0))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[0].f_8, uParam0->f_358[0].f_9, -1);
					}
					if (bParam2 && Local_51 == 0)
					{
						func_88(&(uParam0->f_358[0]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (uParam0->f_358[0].f_11 < uParam0->f_12)
				{
					if (func_3(&uLocal_2402))
					{
						if (func_107(&uLocal_2402) >= 3f)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					else
					{
						func_10(&uLocal_2402);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, 0))
				{
					if (func_106(uParam1))
					{
						func_11(&uLocal_2278);
						sLocal_2276 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_178(uParam0);
			func_4(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)
{
	if (uParam0->f_22 != 0)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == -2122757008)
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 3f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_9))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_9) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 10000))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

float func_107(var uParam0)
{
	if (func_3(uParam0))
	{
		if (func_7(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_6(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_108(var uParam0, float fParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_22))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_9, 2) };
			func_109(uParam0->f_9, fParam1, bParam2, Var0.x, 0);
		}
	}
}

void func_109(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) < fParam1)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fParam1);
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	bVar3 = false;
	if (bParam2)
	{
		fVar4 = (GAMEPLAY::GET_FRAME_TIME() * 45f);
		if (Var0.x < -fVar4)
		{
			bVar3 = true;
			Var0.x = (Var0.x + fVar4);
		}
		else if (Var0.x < fParam3)
		{
			bVar3 = true;
			Var0.x = fParam3;
		}
		else if (Var0.x > fVar4)
		{
			bVar3 = true;
			Var0.x = (Var0.x - fVar4);
		}
		else if (Var0.x > fParam3)
		{
			bVar3 = true;
			Var0.x = fParam3;
		}
		if (Var0.y < -fVar4)
		{
			bVar3 = true;
			Var0.y = (Var0.y + fVar4);
		}
		else if (Var0.y < fParam4)
		{
			bVar3 = true;
			Var0.y = fParam4;
		}
		else if (Var0.y > fVar4)
		{
			bVar3 = true;
			Var0.y = (Var0.y - fVar4);
		}
		else if (Var0.y > fParam4)
		{
			bVar3 = true;
			Var0.y = fParam4;
		}
	}
	else
	{
		if (Var0.x != fParam3)
		{
			bVar3 = true;
			Var0.x = fParam3;
		}
		if (Var0.y != fParam4)
		{
			bVar3 = true;
			Var0.y = fParam4;
		}
	}
	if (bVar3)
	{
		ENTITY::SET_ENTITY_ROTATION(iParam0, Var0, 2, 1);
	}
}

int func_110(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 1084227584);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = VEHICLE::CREATE_VEHICLE(-2122757008, uParam0->f_16, uParam0->f_19, 1, 1, 0);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, 1);
		func_111(uParam0->f_9, &(Local_51.f_243), 0, 1);
	}
	AUDIO::_0xC15907D667F7CFB2(uParam0->f_9, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, 0);
		Local_51.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_111(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (!func_122(iParam0))
		{
			if (GAMEPLAY::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			iVar0 = 1;
			if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar0 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			iVar1 = 1;
			if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar1 + 1)))
			{
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar2)))
				{
				}
				else
				{
					GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar3)))
				{
				}
				else
				{
					GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar4)))
					{
					}
					else
					{
						GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == 433954513)
		{
			unk_0x1087BC8EC540DAEB(iParam0, 0);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				unk_0x1087BC8EC540DAEB(iParam0, 1);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((GAMEPLAY::IS_BIT_SET(uParam1->f_77, 15) || func_120(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_119())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !GAMEPLAY::IS_BIT_SET(uParam1->f_77, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, GAMEPLAY::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_117(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_117(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_112(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, func_121(iVar5 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(iParam0) == -777172681) || ENTITY::GET_ENTITY_MODEL(iParam0) == -1232836011)
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, 0);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && unk_0xE43701C36CAFF1A4(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, -2118308144)) && !((((Global_4456448.f_75705 == 6 || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 18) || Global_4456448.f_75705 == 19) && Global_4456448.f_2 == 20))
		{
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_112(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*iParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_116(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_115(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_115(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_114(iParam0);
	if (func_113(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
	}
	return 1;
}

int func_113(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = GAMEPLAY::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GAMEPLAY::GET_HASH_KEY("MNU_CAGE") || iVar2 == GAMEPLAY::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_114(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_115(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -1797613329:
				switch (iParam1)
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
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case -2039755226:
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_116(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return 1;
			break;
		
		case 223258115:
			if (!Global_262145.f_14219)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1797613329:
			if (!Global_262145.f_14220)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -899509638:
			if (!Global_262145.f_14218)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -1126264336:
			if (!Global_262145.f_14221)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1119641113:
			if (!Global_262145.f_14223)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -2039755226:
			if (!Global_262145.f_14222)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -2022483795:
			if (Global_262145.f_18669)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1790834270:
			if (Global_262145.f_18671)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -757735410:
			if (Global_262145.f_18675)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 196747873:
			if (Global_262145.f_18672)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1093792632:
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -482719877:
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1074745671:
			if (Global_262145.f_18682)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20625)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20626)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1717532765:
		case 1107404867:
		case -913589546:
			return 1;
			break;
	}
	return 0;
}

void func_117(int iParam0, var uParam1)
{
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		iVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(iParam0) == -1804415708)
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

var func_119()
{
	return DLC2::IS_DLC_PRESENT(-1691188696);
}

int func_120(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return GAMEPLAY::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_122(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_128(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_124(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (func_123(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_124(int iParam0)
{
	if (func_127(iParam0) == 233)
	{
		return func_125(iParam0);
	}
	return -1;
}

int func_125(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_181;
	}
	return -1;
}

int func_126(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)
{
	if (func_126(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_128(int iParam0, int iParam1)
{
	if (func_129(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_129(int iParam0, bool bParam1, bool bParam2)
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

void func_130(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam3, 0))
	{
		if (bParam7 && Local_51.f_10 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(iParam3, 1) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var12);
		GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var12, &fVar11, 0, 0);
		Var5 = { ENTITY::GET_ENTITY_COORDS(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var8.x, Var8.y);
		fVar1 = (GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var8.x, Var8.z) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - GAMEPLAY::ABSF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - GAMEPLAY::ABSF(fVar1));
		}
		if (GAMEPLAY::ABSF((Var12.z - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.z = (fVar11 + 25f);
			ENTITY::SET_ENTITY_COORDS(iParam3, Var12, 1, 0, 0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam3, 1);
		Var2 = { ENTITY::GET_ENTITY_ROTATION(iParam3, 2) };
		Var2.x = fVar1;
		Var2.z = uVar0;
		ENTITY::SET_ENTITY_ROTATION(iParam3, Var2, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iParam3, 0);
		STREAMING::NEW_LOAD_SCENE_START(Var12, ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3), 500f, 0);
	}
}

void func_131(var uParam0, int iParam1, bool bParam2)
{
	func_132(uParam0, iParam1, (uParam0->f_358[iParam1].f_11 - 1), bParam2);
}

void func_132(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1].f_8, 0))
	{
		return;
	}
	if (uParam0->f_358[iParam1].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1].f_9, 0))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1] - uParam0->f_27[iParam2] };
	uVar3 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.y);
	fVar4 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 0f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_358[iParam1].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1]), uParam0->f_27[iParam2], uVar3, fVar4);
}

int func_133(var uParam0, bool bParam1)
{
	if (!func_110(uParam0, bParam1) || !func_134(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_134(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_135()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 0) && !GAMEPLAY::IS_BIT_SET(iLocal_43, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_164(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		UI::CLEAR_PRINTS();
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 1))
		{
			func_163(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = GAMEPLAY::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_153(0, 2, 1);
				func_145(1, 1, 1, 0, 0, 0);
				func_137(1);
				UI::SET_FRONTEND_ACTIVE(0);
				UI::SET_PAUSE_MENU_ACTIVE(0);
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_164(0, 0);
				func_136(0);
			}
			else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_136(int iParam0)
{
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 3))
			{
				GAMEPLAY::SET_GAME_PAUSED(1);
				GAMEPLAY::SET_BIT(&iLocal_43, 3);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iLocal_43, 3))
		{
			GAMEPLAY::SET_GAME_PAUSED(0);
			GAMEPLAY::CLEAR_BIT(&iLocal_43, 3);
		}
	}
}

void func_137(bool bParam0)
{
	if (bParam0)
	{
		func_144();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_143(0))
		{
			func_138(0);
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

void func_138(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_141())
		{
			func_140(1, 1);
		}
		else
		{
			func_140(0, 0);
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
	if (!func_139())
	{
		Global_19486.f_1 = 3;
	}
}

int func_139()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_140(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_143(0))
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

bool func_141()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_142()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

int func_143(int iParam0)
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

void func_144()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_145(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_152(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_139())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_151(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_152(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_151(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !func_147(PLAYER::PLAYER_ID(), 0)) && !func_146()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_149(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_146()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_147(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_148(-1, 0) == 8;
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

int func_148(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_21();
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

int func_149(int iParam0)
{
	if (func_147(iParam0, 0))
	{
		return 1;
	}
	if (func_150())
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

bool func_150()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_151(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_152(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_7356, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_153(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&iLocal_43, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				GAMEPLAY::SET_TIME_SCALE(0.2f);
			}
			else
			{
				GAMEPLAY::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				GAMEPLAY::SET_TIME_SCALE(1f);
			}
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 2);
	}
}

void func_154(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || GAMEPLAY::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_161(uParam0))
	{
		return;
	}
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_2D_LAYER(iParam2);
	if (!func_160(uParam0->f_1, 256) || (func_160(uParam0->f_1, 8192) && CONTROLS::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(iParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(iParam5);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(func_160(uParam0->f_1, 4096));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						uVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						uVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							uVar3 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = CONTROLS::_0x80C2FD58D720C801(uVar0, uVar1, bVar2);
						}
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_159(sVar3);
						}
						iVar7++;
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_158(uParam0->f_2[iVar6]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_160(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
							}
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar6++;
		}
		fVar8 = func_157(bParam4, func_157(func_160(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar8);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_156(&(uParam0->f_1), 256);
		func_155(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_155(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_156(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_157(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_158(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_159(var uParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

bool func_160(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_161(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_156(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_162()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_145(0, 1, 1, 0, 0, 0);
	func_137(1);
}

void func_163(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_164(0, 0);
		GRAPHICS::_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		GAMEPLAY::SET_BIT(&iLocal_43, 1);
		func_153(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 1) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT("DeathFailOut");
			func_153(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 1);
	}
}

void func_164(int iParam0, int iParam1)
{
	switch (func_165())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 0) || iParam1)
		{
			GRAPHICS::_START_SCREEN_EFFECT(sVar0, 0, 0);
			GAMEPLAY::SET_BIT(&iLocal_43, 0);
			func_153(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 0) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT(sVar0);
			func_153(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 0);
	}
}

int func_165()
{
	func_166();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_166()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_170(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_169(PLAYER::PLAYER_PED_ID());
			if (func_168(iVar0) && (!func_167(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_168(Global_111638.f_2358.f_539.f_4321))
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

bool func_167(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_168(int iParam0)
{
	return iParam0 < 3;
}

int func_169(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_170(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_170(int iParam0)
{
	if (func_168(iParam0))
	{
		return func_171(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_171(int iParam0)
{
	return Global_1798[iParam0];
}

int func_172(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_10(&(uParam0->f_1));
			func_162();
			func_177(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_135() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_362(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_334(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_362(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_334(&(uParam0->f_4), 2);
				}
				func_174(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_174(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_164(0, 1);
				func_163(0, 1);
				func_162();
				if (*uParam5)
				{
					GAMEPLAY::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_173(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_164(0, 1);
				func_163(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

void func_173(bool bParam0)
{
	if ((Global_41431 == 9 || Global_41431 == 10) || Global_41431 == 5)
	{
		Global_110287 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110287 = 0;
	}
}

int func_174(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				UNK1::_0xEB2D525B57F42B40();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			GAMEPLAY::SET_TIME_SCALE(0.2f);
			if (func_160(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
			UI::_SET_NOTIFACTION_COLOR_NEXT(6);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			func_158(sParam3);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			if (!func_160(iParam5, 1))
			{
				CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_263(&(uParam1->f_10), 0, 1, 1, 1);
			func_262(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_262(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_160(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_160(iParam5, 8))
			{
				switch (func_165())
				{
					case 0:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_3(&(uParam1->f_1)))
			{
				func_363(&(uParam1->f_1));
			}
			if (func_160(iParam5, 2))
			{
				if (!func_3(&(uParam1->f_4)))
				{
					func_363(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_160(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::_SET_2D_LAYER(iParam6);
			func_176(uParam0, 0, 0);
			if (!func_160(iParam5, 16) && (func_5(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_154(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				UI::_SHOW_CURSOR_THIS_FRAME();
				if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_160(iParam5, 2))
			{
				if (func_5(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_160(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_175(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_176(uParam0, 0, 0);
			GAMEPLAY::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((GAMEPLAY::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || GAMEPLAY::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (GAMEPLAY::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_160(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_11(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_5(&(uParam1->f_4)) <= 0.1f)
			{
				func_176(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_175(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

int func_176(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_5(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_4(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_177(var uParam0, float fParam1, float fParam2)
{
	if (func_3(&(uParam0->f_1)))
	{
		func_4(&(uParam0->f_1));
	}
	if (func_3(&(uParam0->f_4)))
	{
		func_4(&(uParam0->f_4));
	}
	func_175(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_178(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_179(int iParam0, bool bParam1)
{
	switch (iLocal_1990)
	{
		case 0:
			func_25();
			func_196();
			func_192();
			iLocal_1990 = 1;
			break;
		
		case 1:
			if (func_191())
			{
				iLocal_1990 = 2;
			}
			break;
		
		case 2:
			func_180(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1990 = 0;
			}
			break;
	}
}

void func_180(int iParam0)
{
	switch (Local_51.f_10)
	{
		case 3:
			func_190(iParam0);
			func_189(iParam0);
			break;
		
		case 0:
			func_188(iParam0);
			func_187(iParam0);
			break;
		
		case 1:
			func_186(iParam0);
			func_184(iParam0);
			break;
		
		case 2:
			func_183(iParam0);
			func_182(iParam0);
			break;
		
		case 4:
			func_181(iParam0);
			break;
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 5)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_182(int iParam0)
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]) && !func_362(uLocal_2071, 1))
		{
			uLocal_2059[0] = VEHICLE::CREATE_VEHICLE(1518533038, -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			uLocal_2059[1] = VEHICLE::CREATE_VEHICLE(-730904777, -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1, 0);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uLocal_2059[0], uLocal_2059[1], 1065353216);
			uLocal_2065[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2059[0], 4, 349680864, -1, 1, 1);
			func_334(&uLocal_2071, 1);
		}
		if (AI::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_2065[0], 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(uLocal_2065[0], -235832601) == 1)
				{
				}
				else
				{
					AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_2065[0], uLocal_2059[0], "SPR_Fluff_01", 786469, 0, 8, -1, VEHICLE::_0x53AF99BAA671CA47(uLocal_2059[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_183(int iParam0)
{
	if (iParam0 == 4)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]))
		{
			if (!func_362(uLocal_2071, 1))
			{
				if (func_185(&iLocal_2053))
				{
					uLocal_2059[0] = VEHICLE::CREATE_VEHICLE(788045382, -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1, 0);
					func_334(&uLocal_2071, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2065[0]))
			{
				if (!func_362(uLocal_2071, 2))
				{
					uLocal_2065[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2059[0], 4, 1694362237, -1, 1, 1);
					func_334(&uLocal_2071, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2065[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_2065[0], 0))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2059[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(uLocal_2065[0], -1817882002) == 1)
					{
					}
					else
					{
						AI::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2065[0], uLocal_2059[0], -2530.873f, 608.701f, 238.9111f, VEHICLE::_0x53AF99BAA671CA47(uLocal_2059[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[1]))
		{
			if (!func_362(uLocal_2072, 1))
			{
				if (func_185(&iLocal_2053))
				{
					uLocal_2059[1] = VEHICLE::CREATE_VEHICLE(788045382, -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1, 0);
					func_334(&uLocal_2072, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2059[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2065[1]))
			{
				if (!func_362(uLocal_2072, 2))
				{
					uLocal_2065[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2059[1], 4, 1694362237, -1, 1, 1);
					func_334(&uLocal_2072, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[1]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2065[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[1], 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_2065[1], 0))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2059[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(uLocal_2065[1], -1817882002) == 1)
					{
					}
					else
					{
						AI::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2065[1], uLocal_2059[1], -2527.712f, 609.6833f, 239.2568f, VEHICLE::_0x53AF99BAA671CA47(uLocal_2059[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_185(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_186(int iParam0)
{
	if (iParam0 == 9)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_187(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]) && !func_362(uLocal_2071, 1))
		{
			uLocal_2059[0] = VEHICLE::CREATE_VEHICLE(861409633, -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1, 0);
			uLocal_2065[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2059[0], 4, 349680864, -1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_2065[0], 0))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2059[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(uLocal_2065[0], -1273030092) == 1)
					{
					}
					else
					{
						AI::TASK_VEHICLE_MISSION_COORS_TARGET(uLocal_2065[0], uLocal_2059[0], -1552.281f, 2641.609f, -0.8283f, 4, VEHICLE::_0x53AF99BAA671CA47(uLocal_2059[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_334(&uLocal_2071, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (func_362(uLocal_2071, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2065[0], 0))
			{
				PED::DELETE_PED(&(uLocal_2065[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_2059[0]));
			}
		}
	}
}

void func_188(int iParam0)
{
	if (iParam0 == 7)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

void func_189(int iParam0)
{
	if (!func_362(uLocal_2071, 1))
	{
		if (iParam0 < 3)
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(-943.8105f, -3173.692f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2059[0]))
				{
					uLocal_2059[0] = VEHICLE::CREATE_VEHICLE(1058115860, -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1, 0);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_2059[0], 1084227584);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_2059[0], 1, 1, 0);
					if (Local_51 == 0)
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(uLocal_2059[0]);
					}
					uLocal_2065[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2059[0], 4, -245247470, -1, 1, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_2059[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2059[0]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2059[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2059[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_2065[0], 0))
						{
							if (!AI::GET_SCRIPT_TASK_STATUS(uLocal_2065[0], -1817882002) == 1)
							{
								AI::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2065[0], uLocal_2059[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, 1058115860, 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2059[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_2059[0]);
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_2059[0]));
				func_334(&uLocal_2071, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_2059[0], 0))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(uLocal_2059[0], 1));
	}
}

void func_190(int iParam0)
{
	if (iParam0 == 6)
	{
		if (!func_362(uLocal_2081, 1))
		{
			func_334(&uLocal_2081, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!func_362(uLocal_2081, 2))
		{
			func_334(&uLocal_2081, 2);
		}
	}
}

int func_191()
{
	switch (Local_51.f_10)
	{
		case 3:
			if (func_185(&iLocal_2053) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_185(&iLocal_2053))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_185(&iLocal_2053))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_185(&iLocal_2053) && AI::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_192()
{
	switch (Local_51.f_10)
	{
		case 3:
			func_194(&iLocal_2053, 1058115860);
			func_194(&iLocal_2053, -245247470);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "SPRStuntAF");
			break;
		
		case 0:
			func_194(&iLocal_2053, 861409633);
			func_194(&iLocal_2053, 349680864);
			break;
		
		case 1:
			func_194(&iLocal_2053, 788045382);
			func_194(&iLocal_2053, 1694362237);
			break;
		
		case 2:
			func_194(&iLocal_2053, 1518533038);
			func_194(&iLocal_2053, -730904777);
			func_194(&iLocal_2053, 349680864);
			AI::REQUEST_WAYPOINT_RECORDING("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_193(&iLocal_2053);
}

void func_193(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_194(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_195(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

int func_195(var uParam0)
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

void func_196()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_362(uLocal_2081, iVar0))
		{
			func_360(&uLocal_2081, iVar0);
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	func_198(uParam0, iParam1, 0);
}

void func_198(var uParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2537071.f_4591, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (GAMEPLAY::IS_STRING_NULL(sVar0))
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
	if (!GAMEPLAY::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_199(uParam0->f_3))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (func_199(sVar0))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

bool func_199(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_200(var uParam0)
{
	if (uParam0->f_358[0].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_27[(uParam0->f_12 - 2)], func_201());
		if (!STREAMING::_0x07C313F94746702C(uLocal_2303))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_201()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2303 = STREAMING::_0x1F3F018BC3AFA77C(func_201(), uParam0->f_27[(uParam0->f_12 - 1)] - func_201(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_201()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_253();
		}
	}
}

Vector3 func_201()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_202(var uParam0)
{
	if (func_235())
	{
		if (!Local_2290)
		{
			Local_2290 = 1;
			Local_2290.f_1 = 1;
		}
		else
		{
			Local_2290.f_1 = 0;
		}
	}
	else if (func_234())
	{
		if (!Local_2290.f_1 || func_233() >= 1f)
		{
			if (Local_2290)
			{
				Local_2290 = 0;
			}
		}
	}
	if (func_234())
	{
		func_232();
	}
	else
	{
		func_231();
	}
	if (Local_2290)
	{
		if (!func_230(Local_2290.f_2) && !func_228(Local_2290.f_2))
		{
			func_204(&uLocal_2263, Local_2290.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_2290.f_6))
			{
				CAM::DESTROY_CAM(Local_2290.f_6, 0);
			}
			if (func_228(Local_2290.f_2))
			{
				Local_2290.f_2 = { func_203(uParam0) };
			}
			func_197(&uLocal_2263, 0);
			Local_2290 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_2290.f_6))
	{
		CAM::DESTROY_CAM(Local_2290.f_6, 0);
	}
	else
	{
		if (func_228(Local_2290.f_2))
		{
			Local_2290.f_2 = { func_203(uParam0) };
		}
		func_197(&uLocal_2263, 0);
		Local_2290 = 0;
	}
}

Vector3 func_203(var uParam0)
{
	if (uParam0->f_358[0].f_11 < (Local_51.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0].f_11 + 1];
	}
	return 0f, 0f, 0f;
}

void func_204(var uParam0, struct<3> Param1)
{
	func_205(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_205(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_198(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_206(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_206(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (GAMEPLAY::IS_STRING_NULL(iVar0))
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
	if (func_199(iVar0))
	{
		func_227();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_222(uParam0, bParam6, bParam8, 0))
		{
			func_221(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_211(iVar0))
			{
				if ((GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!func_199(iVar0))
						{
							func_303(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_210(1);
							}
						}
					}
				}
			}
		}
		else if (func_211(iVar0))
		{
			if (GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!func_199(iVar0))
					{
						func_303(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_210(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!GAMEPLAY::IS_STRING_NULL(iVar0))
		{
			if (func_199(iVar0) && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				UI::CLEAR_HELP(1);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					func_198(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_198(uParam0, iVar0, 1);
			}
		}
		if (!func_222(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_209(uParam0))
			{
				func_207(uParam0);
			}
		}
	}
}

void func_207(var uParam0)
{
	if (func_208(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_208(int iParam0)
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

int func_209(var uParam0)
{
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GAMEPLAY::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_210(bool bParam0)
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

int func_211(char* sParam0)
{
	if (!func_212(1, 1, 0))
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0) && func_199(sParam0)) || func_199("CMN_HINT"))
		{
			UI::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_210(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_210(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_210(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_212(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_143(0))
	{
		return 0;
	}
	if (func_220())
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(1779901043) > 0)
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
	if ((func_219() || func_218(Global_4456448.f_232883)) || func_217())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_216(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_215(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_213(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_213(int iParam0)
{
	if (iParam0 != func_214())
	{
		if (func_129(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_129(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_214()
{
	return -1;
}

int func_215(int iParam0, int iParam1)
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

int func_216(int iParam0, int iParam1)
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

var func_217()
{
	return Global_2450632.f_17;
}

bool func_218(int iParam0)
{
	return iParam0 == 51;
}

var func_219()
{
	return Global_2450632.f_16;
}

bool func_220()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_221(var uParam0, struct<3> Param1, int iParam4)
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
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
	AI::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_222(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
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
					if (func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_226(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_209(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_226(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_225(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
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
					if (!func_226(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_225(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_225(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_226(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_224(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_223(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_224(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_209(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_212(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_227();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_223(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_225(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_226(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_212(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_227()
{
	GAMEPLAY::SET_BIT(&Global_7357, 4);
}

int func_228(struct<3> Param0)
{
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, func_229(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}

Vector3 func_229(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_230(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	Local_2290.f_5 = 0f;
}

void func_232()
{
	Local_2290.f_5 = (Local_2290.f_5 + GAMEPLAY::GET_FRAME_TIME());
}

float func_233()
{
	return Local_2290.f_5;
}

bool func_234()
{
	return CONTROLS::IS_CONTROL_JUST_RELEASED(0, 80);
}

bool func_235()
{
	return CONTROLS::IS_CONTROL_PRESSED(0, 80);
}

void func_236(struct<3> Param0)
{
	func_197(&uLocal_2263, 0);
	Local_2290.f_2 = { Param0 };
}

void func_237(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_238(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

int func_239(var uParam0, bool bParam1, bool bParam2)
{
	CONTROLS::STOP_PAD_SHAKE(0);
	switch (iLocal_1989)
	{
		case 0:
			iLocal_529 = 0;
			Local_2255 = { func_201() };
			Local_2258 = { func_252() };
			fLocal_2261 = func_251();
			UI::DISPLAY_RADAR(0);
			UI::CLEAR_HELP(1);
			UI::CLEAR_PRINTS();
			iLocal_1989 = 1;
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_165() == 0)
				{
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 0, 0);
				}
				else if (func_165() == 1)
				{
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 0, 0);
				}
				else if (func_165() == 2)
				{
					GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 0, 0);
				}
				uLocal_2047 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2255, Local_2258, fLocal_2261, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					CAM::SHAKE_CAM(uLocal_2047, "HAND_SHAKE", 0.07f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0].f_9))
				{
					AI::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0].f_9, Local_2255.x, Local_2255.y, (Local_2255.z + 15f), 4, ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0].f_9), 262144, 10f, 10f, 1);
				}
				CAM::POINT_CAM_AT_COORD(uLocal_2047, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				iLocal_1989 = 2;
			}
			break;
		
		case 2:
			CAM::STOP_CAM_POINTING(uLocal_2047);
			func_250(uLocal_2047);
			func_10(&uLocal_2043);
			iLocal_1989 = 3;
			break;
		
		case 3:
			if (func_249(&uLocal_2043, fLocal_2262))
			{
				func_10(&uLocal_2043);
				func_250(uLocal_2047);
				iLocal_1989 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0].f_9) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0].f_9))
				{
					Local_2252 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0].f_9, 1) };
					func_10(&uLocal_2043);
				}
				func_246(uLocal_2047, Local_2252);
			}
			if (func_107(&uLocal_2043) >= 1f)
			{
				iLocal_1989 = 5;
			}
			break;
		
		case 5:
			func_11(&uLocal_2043);
			if (CAM::DOES_CAM_EXIST(uLocal_2046))
			{
				CAM::DESTROY_CAM(uLocal_2046, 0);
			}
			GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionIn", 0, 1);
			CAM::STOP_CAM_SHAKING(uLocal_2047, 0);
			Local_2255 = { CAM::GET_CAM_COORD(uLocal_2047) };
			Local_2258 = { CAM::GET_CAM_ROT(uLocal_2047, 2) };
			uLocal_2046 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2255.x, Local_2255.y, (Local_2255.z + 1000f), 90f, Local_2258.y, Local_2258.z, fLocal_2261, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2046, uLocal_2047, 500, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1989 = 6;
			break;
		
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_2046) && !CAM::IS_CAM_INTERPOLATING(uLocal_2047))
			{
				if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					func_245(1);
				}
				iLocal_1989 = 7;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			func_243(uParam0);
			func_66(&(Local_51.f_321), 1);
			func_11(&uLocal_2043);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0))
			{
				sLocal_2247 = AUDIO::GET_PLAYER_RADIO_STATION_NAME();
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0].f_9, 0);
			}
			iLocal_1989 = 8;
			break;
		
		case 8:
			if (func_242(uParam0))
			{
				iLocal_1989 = 9;
			}
			break;
		
		case 9:
			GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionOut", 0, 0);
			func_241(&uLocal_2048);
			func_237(1, 0);
			func_240(uParam0);
			func_16();
			func_237(0, 0);
			iLocal_1989 = 0;
			return 0;
			break;
	}
	func_432(uParam0, 0);
	return 1;
}

int func_240(var uParam0)
{
	if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY(&(Local_51.f_24[Local_51.f_10]));
		return UI::_0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0].f_13 <= (((Local_51.f_106[Local_51.f_10] - Local_51.f_112[Local_51.f_10]) / 2f) + Local_51.f_112[Local_51.f_10]))
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY(&(Local_51.f_24[Local_51.f_10]));
		return UI::_0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY(&(Local_51.f_24[Local_51.f_10]));
		return UI::_0xAA295B6F28BD587D("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_241(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	*uParam0 = 0;
}

int func_242(var uParam0)
{
	fVar0 = 0f;
	if (!func_3(&(uParam0->f_17.f_2)))
	{
		func_11(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = func_5(&(uParam0->f_17.f_2));
	}
	if (!iLocal_2008)
	{
		if (fVar0 > 1f)
		{
			iLocal_2008 = 1;
		}
	}
	if (!iLocal_2009)
	{
		if (fVar0 > 4.25f)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_17, "TRANSITION_OUT");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.5f);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			iLocal_2009 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		func_4(&(uParam0->f_17.f_2));
		iLocal_2008 = 0;
		iLocal_2009 = 0;
		return 1;
	}
	return 0;
}

void func_243(var uParam0)
{
	sVar0 = func_244(2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_17, "RESET_MOVIE");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_17, sVar0);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("SPR_UI_PASS");
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(Local_51.f_24[Local_51.f_10]));
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(100f);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	uParam0->f_17.f_1 = 5000;
	func_4(&(uParam0->f_17.f_2));
	iLocal_2008 = 0;
	iLocal_2009 = 0;
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_245(bool bParam0)
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_165())
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

void func_246(var uParam0, struct<3> Param1)
{
	if (!CAM::DOES_CAM_EXIST(uParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(uParam0) };
	Var7 = { func_8(Var1.x, Var1.y, (Var1.z + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { func_96(Var10) };
	fVar13 = GAMEPLAY::ATAN2((Param1.z - Var4.z), GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param1, Var4, 0));
	fVar14 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param1.x - Var4.x), (Param1.y - Var4.y));
	fVar14 = func_248(fVar14, -180f, 180f);
	fVar0 = func_95(func_8(fVar13, Var1.y, Var1.z), Var7);
	fVar15 = (fVar13 - Var1.x);
	if (fVar15 > 270f)
	{
		fVar15 = (fVar15 - 360f);
	}
	else if (fVar15 < -270f)
	{
		fVar15 = (fVar15 + 360f);
	}
	fVar13 = (Var1.x + fVar15);
	if ((bLocal_2251 && fVar13 > Var1.x) || (!bLocal_2251 && fVar13 < Var1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2248 = (fLocal_2248 * 0.9f);
		Var1.x = func_247(Var1.x, fVar13, fLocal_2248);
	}
	fVar16 = (fVar14 - Var1.z);
	if (fVar16 > 270f)
	{
		fVar16 = (fVar16 - 360f);
	}
	else if (fVar16 < -270f)
	{
		fVar16 = (fVar16 + 360f);
	}
	fVar14 = (Var1.z + fVar16);
	if ((bLocal_2250 && (Var1.z - fVar14) < 0f) || (!bLocal_2250 && (Var1.z - fVar14) > 0f))
	{
		if (!bLocal_2250 && (Var1.z - fVar14) > 0f)
		{
		}
		else if (bLocal_2250 && (Var1.z - fVar14) < 0f)
		{
		}
		fLocal_2249 = (fLocal_2249 * 0.9f);
		Var1.z = func_247(Var1.z, fVar14, fLocal_2249);
	}
	CAM::SET_CAM_ROT(uParam0, Var1, 2);
}

float func_247(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_248(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_249(var uParam0, float fParam1)
{
	if (func_2(uParam0, fParam1))
	{
		func_4(uParam0);
		return 1;
	}
	return 0;
}

void func_250(var uParam0)
{
	ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var12 = { CAM::GET_CAM_COORD(uParam0) };
	Var6 = { func_8((Var15.x + 90f), Var15.y, Var15.z) };
	Var9 = { func_8(Var15.x, Var15.y, (Var15.z + 90f)) };
	fLocal_2248 = 0.2f;
	fLocal_2249 = 0.5f;
	Var21 = { CAM::GET_CAM_COORD(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(func_95(Var21, Var0)) * Var0 };
	if (Var24.z > Var12.z)
	{
		bLocal_2251 = true;
	}
	else
	{
		bLocal_2251 = false;
	}
	fVar27 = func_95(Var24, Var6);
	fVar28 = func_95(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2250 = true;
	}
	else
	{
		bLocal_2250 = false;
	}
}

float func_251()
{
	switch (Local_51.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_252()
{
	switch (Local_51.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_253()
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::_0x07C313F94746702C(uLocal_2303))
	{
		STREAMING::_0x1EE7D8DF4425F053(uLocal_2303);
	}
}

void func_254()
{
	UNK1::_0xEB2D525B57F42B40();
	func_255();
}

void func_255()
{
	Global_22211.f_134 = 1;
}

void func_256(int iParam0)
{
	if (Global_41431 == 9 || Global_41431 == 10)
	{
		Global_110288 = iParam0;
	}
	else
	{
		Global_110288 = 0;
	}
}

void func_257(bool bParam0)
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_258()
{
	func_259();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_259()
{
	Local_2290 = 0;
	Local_2290.f_1 = 0;
	Local_2290.f_2 = { 0f, 0f, 0f };
	Local_2290.f_6 = 0;
	Local_2290.f_5 = 0f;
}

bool func_260(char* sParam0, int iParam1, char* sParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_261(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 16);
	}
	else
	{
		func_155(&(uParam0->f_1), 16);
	}
}

int func_262(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1] = sParam1;
		uParam0->f_2[iVar1].f_1 = iVar0;
		uParam0->f_2[iVar1].f_2 = iParam6;
		uParam0->f_2[iVar1].f_12 = 0;
		uParam0->f_2[iVar1].f_13 = 0;
		uParam0->f_2[iVar1].f_14 = 0;
		uParam0->f_2[iVar1].f_3[0] = iParam2;
		uParam0->f_2[iVar1].f_3[0].f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_156(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_156(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_156(&(uParam0->f_1), 8192);
	}
}

void func_264(var uParam0)
{
	func_265(uParam0);
	SYSTEM::SETTIMERA(0);
	func_237(1, 0);
	func_16();
}

void func_265(var uParam0)
{
	func_302(&(uParam0->f_1871));
	func_280(&(uParam0->f_1871.f_741));
	func_266(&(uParam0->f_1871));
}

void func_266(var uParam0)
{
	func_279(&(uParam0->f_316[0]), 254f, 74f, 1);
	func_279(&(uParam0->f_316[1]), (257f + func_278(0.0047f, 1280, 1)), 127f, 1);
	func_279(&(uParam0->f_316[2]), (257f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[3]), (257f + func_278(0.0047f, 1280, 1)), 324f, 1);
	func_279(&(uParam0->f_316[4]), (257f + func_278(0.0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[5]), (257f + func_278(0.0047f, 1280, 1)), 378f, 1);
	func_279(&(uParam0->f_316[6]), (257f + func_278(0.0047f, 1280, 1)), 405f, 1);
	func_279(&(uParam0->f_316[11]), 257f, 297f, 1);
	func_279(&(uParam0->f_316[12]), 257f, 324f, 1);
	func_279(&(uParam0->f_316[13]), 257f, 351f, 1);
	func_279(&(uParam0->f_316[14]), 257f, 378f, 1);
	func_279(&(uParam0->f_316[15]), 257f, 405f, 1);
	func_279(&(uParam0->f_316[18]), 298f, 567f, 1);
	func_279(&(uParam0->f_316[17]), 384f, 567f, 1);
	func_279(&(uParam0->f_316[16]), 470f, 567f, 1);
	func_275(uParam0[0], 208f, 55f, 864f, 570f, 1);
	func_274(uParam0[0], 0, 0, 0, 255);
	func_275(uParam0[2], 384f, 224f, 256f, 256f, 0);
	func_274(uParam0[2], 255, 255, 255, 255);
	func_275(uParam0[3], 495f, 306f, 32f, 32f, 0);
	func_274(uParam0[3], 255, 255, 255, 255);
	func_275(uParam0[6], 258.5f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[6], 255, 255, 255, 255);
	func_275(uParam0[5], 344f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[5], 255, 255, 255, 255);
	func_275(uParam0[4], 429.5f, 482.5f, 80f, 80f, 1);
	func_274(uParam0[4], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[1]), 257f, 119f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[1]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0]), 257f, 124f, 254f, 25f, 1);
	func_268(&(uParam0->f_420[0]), 255, 255, 255, 255);
	func_269(&(uParam0->f_420[2]), 257f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[2]), 117, 1);
	func_269(&(uParam0->f_420[3]), 257f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[3]), 117, 1);
	func_269(&(uParam0->f_420[4]), 257f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[4]), 117, 1);
	func_269(&(uParam0->f_420[5]), 257f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[5]), 117, 1);
	func_269(&(uParam0->f_420[6]), 257f, 375f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[6]), 117, 1);
	func_269(&(uParam0->f_420[7]), 257f, 402f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[7]), 117, 1);
	func_269(&(uParam0->f_420[8]), 257f, 429f, 254f, 52f, 1);
	func_267(&(uParam0->f_420[8]), 117, 1);
	func_269(&(uParam0->f_420[11]), 257f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[11]), 117, 1);
	func_269(&(uParam0->f_420[12]), 342f, 483f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[12]), 117, 1);
	func_269(&(uParam0->f_420[13]), 428f, 483f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[13]), 117, 1);
	func_269(&(uParam0->f_420[14]), 428f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[14]), 107, 1);
	func_269(&(uParam0->f_420[15]), 342f, 564f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[15]), 108, 1);
	func_269(&(uParam0->f_420[16]), 257f, 564f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[16]), 109, 1);
	uParam0->f_986 = 1;
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	UI::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
	if (bParam2)
	{
		uParam0->f_7 = uVar3;
	}
}

void func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = iParam1;
	uParam0->f_5 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_7 = iParam4;
}

void func_269(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_273(uParam0, fParam3, fParam4);
	func_270(uParam0, fParam1, fParam2, bParam5);
}

void func_270(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

float func_271(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	return (fParam0 / IntToFloat(iParam1));
}

float func_272(float fParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	return (fParam0 / IntToFloat(iParam1));
}

void func_273(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 1280);
	uParam0->f_3 = func_271(fParam2, 720);
}

void func_274(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_275(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)
{
	func_277(fParam0, fParam3, fParam4);
	func_276(fParam0, fParam1, fParam2, bParam5);
}

void func_276(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (bParam3)
	{
		*uParam0 = (*uParam0 + (uParam0->f_2 / 2f));
		uParam0->f_1 = (uParam0->f_1 + (uParam0->f_3 / 2f));
	}
}

void func_277(var uParam0, float fParam1, float fParam2)
{
	uParam0->f_2 = func_272(fParam1, 1280);
	uParam0->f_3 = func_271(fParam2, 720);
}

float func_278(float fParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iParam1, &uVar0);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_279(var uParam0, float fParam1, float fParam2, bool bParam3)
{
	*uParam0 = func_272(fParam1, 1280);
	uParam0->f_1 = func_271(fParam2, 720);
	if (!bParam3)
	{
	}
}

void func_280(var uParam0)
{
	func_301(uParam0, 0);
	func_300(&(uParam0->f_11), 0);
	func_299(&(uParam0->f_66), 0);
	func_298(&(uParam0->f_77), 0);
	func_297(&(uParam0->f_33), 0);
	func_296(&(uParam0->f_44), 0);
	func_295(&(uParam0->f_55), 0);
	func_294(&(uParam0->f_143), 0);
	func_293(&(uParam0->f_22), 0);
	func_292(&(uParam0->f_154), 0);
	func_291(&(uParam0->f_88), 0, 0);
	func_290(&(uParam0->f_99), 0, 5);
	func_289(&(uParam0->f_110), 0);
	func_288(&(uParam0->f_121), 0);
	func_287(&(uParam0->f_132), 0);
	func_286(&(uParam0->f_165), 0);
	func_285(&(uParam0->f_176), 0);
	func_284(&(uParam0->f_187), 0);
	func_283(&(uParam0->f_198), 0);
	func_282(&(uParam0->f_209), 0);
	func_281(&(uParam0->f_220), 0);
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.45f;
	uParam0->f_2 = 0.45f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 29;
}

void func_282(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.275f;
	uParam0->f_2 = 0.275f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 28;
}

void func_283(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.3375f;
	uParam0->f_2 = 0.3375f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 27;
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.35f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 26;
}

void func_285(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.325f;
	uParam0->f_2 = 0.325f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 25;
}

void func_286(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.6f;
	uParam0->f_2 = 0.6f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 24;
}

void func_287(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.315f + 0.183f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 15;
}

void func_288(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.5f + 0.004f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 13;
}

void func_289(var uParam0, int iParam1)
{
	*uParam0 = 5;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((0.628f - 0.18f) - 0.058f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 12;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = (0.889f - 0.01f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 10;
}

void func_291(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = ((((((0.469f + 0.096f) - 0.017f) + 0.022f) - 0.062f) - 0.001f) - 0.013f);
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 9;
}

void func_292(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.288f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 23;
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.383f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 2;
}

void func_294(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.368f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 22;
}

void func_295(var uParam0, int iParam1)
{
	*uParam0 = 4;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.485f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 5;
}

void func_296(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.35f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 4;
}

void func_297(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.409f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 3;
}

void func_298(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.655f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 8;
}

void func_299(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.332f;
	uParam0->f_2 = 0.628f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 7;
}

void func_300(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.346f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 1;
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_1 = 0.202f;
	uParam0->f_2 = 0.781f;
	uParam0->f_3 = 255;
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = iParam1;
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
	uParam0->f_10 = 0;
}

void func_302(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		uParam0[iVar0]->f_1 = 0f;
		uParam0[iVar0]->f_2 = 0f;
		uParam0[iVar0]->f_3 = 0f;
		uParam0[iVar0]->f_4 = 0;
		uParam0[iVar0]->f_5 = 0;
		uParam0[iVar0]->f_6 = 0;
		uParam0[iVar0]->f_7 = 0;
		uParam0[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_303(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_304(var uParam0)
{
	func_309();
	switch (iLocal_2302)
	{
		case 0:
			func_10(uParam0);
			func_308(&uLocal_2297, 3);
			iLocal_2302 = 1;
			break;
		
		case 1:
			if (func_2(uParam0, 1f))
			{
				func_305(&uLocal_2297, 1, 0, 1, 3, 1, 0, 0);
				iLocal_2302 = 2;
			}
			break;
		
		case 2:
			if (func_305(&uLocal_2297, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_305(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (bParam7)
	{
		func_307(&(uParam0->f_2), 1);
	}
	if (!func_3(&(uParam0->f_2)))
	{
		func_11(&(uParam0->f_2));
	}
	GRAPHICS::_SET_2D_LAYER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (func_3(&(uParam0->f_2)))
		{
			if (func_7(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (func_6(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					func_4(&(uParam0->f_2));
					if (func_362(uParam0->f_1, 1))
					{
						func_334(&(uParam0->f_1), 8);
						UI::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
						func_158("CNTDWN_GO");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar5);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar6);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						return 1;
					}
					func_11(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(func_5(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!func_362(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !func_362(uParam0->f_1, 1))
		{
			func_334(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !func_362(uParam0->f_1, 2))
		{
			func_334(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_362(uParam0->f_1, 4))
		{
			func_334(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			func_308(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !func_362(uParam0->f_1, 16))
		{
			if (GAMEPLAY::ABSF((func_5(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_334(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar9 >= 0 && !func_362(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			func_334(&(uParam0->f_1), 8);
			UI::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
			func_158("CNTDWN_GO");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar11);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar12);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar13);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && func_306()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			func_4(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

int func_306()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 18) || CONTROLS::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_307(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(uParam0, 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0, 4);
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 4))
	{
	}
}

void func_308(var uParam0, int iParam1)
{
	UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MESSAGE");
	UI::_SET_NOTIFACTION_COLOR_NEXT(-1);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
	UI::ADD_TEXT_COMPONENT_INTEGER(GAMEPLAY::ABSI(iParam1));
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_309()
{
	iVar6 = Global_110668;
	func_310(Var0, 0, 0, 0, 0, iVar6);
}

void func_310(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_324(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_76878 = GAMEPLAY::GET_GAME_TIMER();
					Local_30 = { UI::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + GAMEPLAY::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!func_324(0, Param0))
			{
				Global_76878 = (GAMEPLAY::GET_GAME_TIMER() - 9000);
			}
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (GAMEPLAY::GET_GAME_TIMER() - Global_76878);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_76876)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::_SET_SCREEN_DRAW_POSITION(82, 66);
				UI::SET_TEXT_FONT(1);
				UI::SET_TEXT_JUSTIFICATION(2);
				iVar12 = func_165();
				if (Global_76879 == 1 && Global_76877 == 62)
				{
					iVar12 = Global_111638.f_2358.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						UI::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						UI::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						UI::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				UI::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				UI::SET_TEXT_DROP_SHADOW();
				Var4 = { func_313(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(fVar6, fVar7, 0f, 0.01f);
				UI::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_34 = 0.14f;
				}
				else
				{
					fLocal_34 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_312(&Var4) > fLocal_34)
					{
						if (UI::IS_HUD_COMPONENT_ACTIVE(15))
						{
							UI::SET_HUD_COMPONENT_POSITION(15, Local_30.x, (Local_30.y + fLocal_33));
							Global_76881 = 1;
						}
					}
				}
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
				if (Global_76880 == 1)
				{
					func_311();
					fLocal_29 = 0f;
				}
			}
			else
			{
				func_311();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_311()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

float func_312(var uParam0)
{
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(uParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

struct<2> func_313(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_323(iParam0) };
			break;
		
		case 7:
			Var0 = { func_321(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_320(iParam2) };
					break;
				
				case 8:
					Var0 = { func_319(iParam2) };
					break;
				
				case 7:
					Var0 = { func_318(iParam2) };
					break;
				
				case 10:
					Var0 = { func_317(iParam2) };
					break;
				
				case 5:
					Var0 = { func_316(iParam2) };
					break;
				
				case 4:
					Var0 = { func_315(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_314(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_315(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_316(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_317(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_318(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_319(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_320(int iParam0)
{
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_321(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_322(iParam0) };
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_322(int iParam0)
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

struct<2> func_323(int iParam0)
{
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_324(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_326(0) || Global_76891) || Global_76880 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_76876)
	{
		case 0:
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&uParam1, "NONE") || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_76876 = 3;
			}
			else
			{
				Global_76876 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_76876 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_76876 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_76876 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_76876 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_76876 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_143(0)) || func_325(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_325(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_326(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_327(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_327(int iParam0)
{
	return func_328(iParam0, Global_41431);
}

int func_328(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_329(var uParam0)
{
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_51.f_10 + 1, 16);
	func_11(&(uParam0->f_3));
	uParam0->f_358[0].f_15 = 0f;
	iLocal_2077 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (Local_51 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
	}
	uParam0->f_1 = 1;
	func_11(&uLocal_2402);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_330(&(uParam0->f_358[iVar4]));
		if (Local_51 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, uParam0->f_27[uParam0->f_358[iVar4].f_11], uParam0->f_27[uParam0->f_358[iVar4].f_11].f_7, iVar4);
			}
		}
		else if (bLocal_2410)
		{
			if (iVar4 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar4].f_8, 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar4].f_9, 0))
				{
					if (iVar4 == 1 && Local_51.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					AI::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, &cVar0, 262144, 0, 8, -1, VEHICLE::_0x53AF99BAA671CA47(uParam0->f_358[iVar4].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4].f_8, uParam0->f_358[iVar4].f_9, uParam0->f_27[uParam0->f_358[iVar4].f_11], uParam0->f_27[uParam0->f_358[iVar4].f_11].f_7, iVar4);
		}
		iVar4++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0].f_9, 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0].f_9, 1);
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sLocal_2247))
		{
			AUDIO::SET_RADIO_TO_STATION_NAME(sLocal_2247);
			AUDIO::SET_VEH_RADIO_STATION(uParam0->f_358[0].f_9, sLocal_2247);
		}
	}
}

void func_330(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1, 0);
		}
	}
}

var func_331()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_332(var uParam0)
{
	uParam0->f_12 = uParam0->f_12;
}

void func_333(var uParam0)
{
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0]), 60f, 1);
		iVar0++;
	}
}

void func_334(int iParam0, int iParam1)
{
	func_60(iParam0, iParam1);
}

int func_335(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1.2f;
	if (!bParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_341(&(uParam0->f_27[iParam1]), iVar3, fVar4, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { uParam0->f_27[iParam1] };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!func_73(uParam0->f_27[iParam1], uParam0->f_27[iParam1 + 1], 1056964608, 0))
			{
				Var5 = { uParam0->f_27[iParam1 + 1] };
			}
		}
		if (Local_51 == 1)
		{
			if (Local_51.f_10 == 1)
			{
				if (func_362(uParam0->f_27[8].f_9, 4))
				{
					func_360(&(uParam0->f_27[8].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1)] };
		}
		if (!func_336(Var8, &(uParam0->f_27[iParam1]), Var5, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2] };
			}
			if (!func_336(uParam0->f_27[iParam1], &(uParam0->f_27[iParam1 + 1]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_336(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)
{
	if (!func_337(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_337(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)
{
	Param0 = { Param0 };
	func_80(&(uParam3->f_6));
	if (uParam3->f_7 == 2)
	{
		uVar0 = func_339(uParam3->f_7, Param0, *uParam3, Param4);
		func_584(func_585(func_92()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, func_91(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			func_584(func_585(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_338(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			func_584(func_585(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_338(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, func_91(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_338(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, func_91(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 37;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 38;
			}
			else if (iParam1 == 3)
			{
				return 39;
			}
			else if (iParam1 == 1)
			{
				return 40;
			}
			break;
		
		case 4:
			return 16;
			break;
		
		case 5:
			return 27;
			break;
		
		case 6:
			return 32;
			break;
		
		case 7:
			return 22;
			break;
		
		case 8:
			return 26;
			break;
		
		case 9:
			return 31;
			break;
		
		case 10:
			return 36;
			break;
	}
	return 6;
}

int func_339(int iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7)
{
	fVar7 = 180f;
	fVar8 = 140f;
	fVar9 = 80f;
	if (iParam0 == 0)
	{
		iVar10 = 6;
		iVar11 = 7;
		iVar12 = 8;
	}
	else if (iParam0 == 2)
	{
		iVar10 = 12;
		iVar11 = 13;
		iVar12 = 14;
	}
	else if (iParam0 == 5)
	{
		iVar10 = 27;
		iVar11 = 28;
		iVar12 = 29;
	}
	else if (iParam0 == 6)
	{
		iVar10 = 32;
		iVar11 = 33;
		iVar12 = 34;
	}
	else if (iParam0 == 7)
	{
		iVar10 = 22;
		iVar11 = 23;
		iVar12 = 24;
	}
	if (!func_340(Param1, 0f, 0f, 0f, 0))
	{
		Var0 = { Param1 - Param4 };
		Var3 = { Param7 - Param4 };
		fVar6 = GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.y, Var3.x, Var3.y);
		if (fVar6 > 180f)
		{
			fVar6 = (360f - fVar6);
		}
		if (fVar6 < fVar9)
		{
			return iVar12;
		}
		else if (fVar6 < fVar8)
		{
			return iVar11;
		}
		else if (fVar6 < fVar7)
		{
			return iVar10;
		}
	}
	return iVar10;
}

bool func_340(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_341(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	if (!func_342(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_342(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
	func_83(uParam0);
	*uParam0 = UI::ADD_BLIP_FOR_COORD(Param1);
	if (!UI::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		UI::SET_BLIP_SPRITE(*uParam0, iParam4);
	}
	UI::SET_BLIP_SCALE(*uParam0, uParam5);
	UI::SET_BLIP_DISPLAY(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		UI::SET_BLIP_COLOUR(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		UI::SET_BLIP_COLOUR(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPFIN");
		UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPKNF");
		}
		else
		{
			UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPDEF");
		}
		UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	return 1;
}

void func_343(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_344(var uParam0)
{
	switch (uParam0->f_25)
	{
		case 0:
			func_137(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			Local_51.f_118 = func_357();
			switch (Local_51)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
				
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", 0);
					break;
				
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_352(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_347(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_51.f_118))
					{
						switch (Local_51)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_51.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_345(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_51.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0].f_9, 1);
				}
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_358[0].f_16);
					STREAMING::NEW_LOAD_SCENE_START(uParam0->f_358[0].f_16, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_358[0].f_9), 5000f, 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0].f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0].f_9, 0);
					}
					func_333(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_345(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_346(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_346(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_133(&(uParam0->f_358[iParam1]), 1);
	}
	return func_133(&(uParam0->f_358[iParam1]), 0);
}

int func_347(var uParam0)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_348(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_348(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_349(&(uParam0->f_358[iParam1]));
}

int func_349(var uParam0)
{
	if (!func_351(uParam0) || !func_350(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_350(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

bool func_351(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_352(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_353(uParam0, iVar0);
		iVar0++;
	}
}

void func_353(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_354(&(uParam0->f_358[iParam1]));
}

void func_354(var uParam0)
{
	func_356(uParam0);
	func_355(uParam0);
}

void func_355(var uParam0)
{
	if (uParam0->f_22 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_22);
}

void func_356(var uParam0)
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}

var func_357()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

int func_358(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_OUT(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

void func_359()
{
	if (CAM::DOES_CAM_EXIST(uLocal_2046))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_2046))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE(uLocal_2046, 0);
		}
		CAM::DESTROY_CAM(uLocal_2046, 0);
	}
}

void func_360(int iParam0, int iParam1)
{
	func_361(iParam0, iParam1);
}

void func_361(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_362(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_363(var uParam0)
{
	if (!func_3(uParam0))
	{
		func_11(uParam0);
	}
}

void func_364()
{
	func_365(&uLocal_1550, 0);
}

void func_365(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_431(uParam0);
		func_370(uParam0);
		func_369(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_367();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_366(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_366(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_367()
{
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0][iVar1] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_368(&(Global_1835392.f_2780));
	func_366(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_366(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_366(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_368(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_369(var uParam0)
{
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13], "", 64);
		StringCopy(&(uParam0[iVar13]->f_16), "", 64);
		uParam0[iVar13]->f_32 = { Var0 };
		uParam0[iVar13]->f_45 = { Var0 };
		uParam0[iVar13]->f_58 = 0;
		uParam0[iVar13]->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			uParam0[iVar13]->f_60[iVar14] = 0f;
			uParam0[iVar13]->f_67[iVar14] = 0;
			iVar14++;
		}
		uParam0[iVar13]->f_75 = 0;
		uParam0[iVar13]->f_74 = 0;
		uParam0[iVar13]->f_76 = 0;
		uParam0[iVar13]->f_77 = 0;
		uParam0[iVar13]->f_78 = 0;
		uParam0[iVar13]->f_79 = 0;
		StringCopy(&(uParam0[iVar13]->f_80), "", 16);
		iVar13++;
	}
	func_366(&(Global_1835392.f_2830));
}

void func_370(var uParam0)
{
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_366(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0] = -1;
		uParam0->f_246.f_6[iVar0].f_1 = 0;
		uParam0->f_246.f_6[iVar0].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_366(&(Global_1835008.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_372(var uParam0, var uParam1)
{
	if (!func_423())
	{
		return 0;
	}
	if (func_417(&bLocal_525, uParam0))
	{
		if (iLocal_527 || bLocal_526)
		{
			UI::_SET_WARNING_MESSAGE_2("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1, 0);
			if (!*uParam1)
			{
				if (iLocal_527)
				{
					if (func_3(&uLocal_522))
					{
						if (func_249(&uLocal_522, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_527 = 0;
							bLocal_526 = !bLocal_526;
						}
					}
					else
					{
						func_11(&uLocal_522);
					}
				}
				else
				{
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_377();
		}
		return 0;
	}
	if (bLocal_525)
	{
		func_376();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
		}
	}
	else
	{
		Local_51.f_10 = -1;
	}
	func_373();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	return 1;
}

void func_373()
{
	UI::CLEAR_HELP(1);
	UI::CLEAR_ADDITIONAL_TEXT(3, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("MinigameTransitionIn"))
	{
		GRAPHICS::_STOP_SCREEN_EFFECT("MinigameTransitionIn");
	}
	GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionOut", 0, 0);
	iLocal_521 = 0;
	GAMEPLAY::SET_GAME_PAUSED(0);
	func_137(0);
	func_374();
}

void func_374()
{
	Global_19671 = 0;
	func_375();
}

void func_375()
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

void func_376()
{
	switch (Global_110668)
	{
		case 0:
			Local_51.f_10 = 0;
			break;
		
		case 1:
			Local_51.f_10 = 1;
			break;
		
		case 2:
			Local_51.f_10 = 2;
			break;
		
		case 3:
			Local_51.f_10 = 3;
			break;
		
		case 4:
			Local_51.f_10 = 4;
			break;
	}
}

void func_377()
{
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_378(&uLocal_563);
}

void func_378(var uParam0)
{
	if (!bLocal_562)
	{
		if (!GAMEPLAY::IS_PC_VERSION())
		{
			UI::SET_WIDESCREEN_FORMAT(1);
		}
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_409("Shared", "BGGradient_32x1024", uParam0[0], 0, 0, 1, 0);
	func_404(uParam0->f_420[0], 0, 0);
	func_404(uParam0->f_420[1], 0, 0);
	func_404(uParam0->f_420[2], 0, 0);
	func_404(uParam0->f_420[3], 0, 0);
	func_404(uParam0->f_420[4], 0, 0);
	func_404(uParam0->f_420[5], 0, 0);
	func_404(uParam0->f_420[6], 0, 0);
	func_404(uParam0->f_420[7], 0, 0);
	func_404(uParam0->f_420[8], 0, 0);
	func_404(uParam0->f_420[6], 0, 0);
	GRAPHICS::_SET_2D_LAYER(1);
	func_403(&(uParam0->f_741.f_165));
	func_402(&(uParam0->f_316[0]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	GRAPHICS::_SET_2D_LAYER(4);
	func_400(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[0]), 0f, 0f);
	func_397(&(uParam0->f_316[1]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[1]), 0f, 0f);
	func_397(&(uParam0->f_316[2]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_399(&(uParam0->f_741.f_176), &(uParam0->f_420[5]), 0f, 0f);
	func_397(&(uParam0->f_316[3]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	func_396(&(uParam0->f_741.f_176));
	func_403(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_404(uParam0->f_420[16], 0, 0);
	func_404(uParam0->f_420[17], 0, 0);
	func_404(uParam0->f_420[18], 0, 0);
	func_404(uParam0->f_420[19], 0, 0);
	func_404(uParam0->f_420[20], 0, 0);
	func_404(uParam0->f_420[21], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2] };
			if (Global_111638.f_19038.f_6[iVar0] > 0f)
			{
				iLocal_531[iVar0] = SYSTEM::CEIL(Global_111638.f_19038.f_6[iVar0]);
			}
			else
			{
				iLocal_531[iVar0] = -1;
			}
			if (iVar0 == Global_110668)
			{
				func_267(&(uParam0->f_420[iVar1]), 1, 1);
				func_404(uParam0->f_420[iVar1], 0, 0);
				func_400(&(uParam0->f_741.f_198));
				switch (Global_111638.f_19038.f_12[iVar0].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3], 1);
				if (bVar4)
				{
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_403(&(uParam0->f_741.f_198));
				}
				func_403(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && iLocal_531[iVar0] > 1)
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && IntToFloat(iLocal_531[iVar0]) > Local_51.f_106[iVar0])
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && IntToFloat(iLocal_531[iVar0]) > (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[9], 0, 0, 5, 0);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_531[iVar0]) > Local_51.f_112[iVar0] || iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[iVar3], 1);
					func_394(uParam0[9], 1);
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[16]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_402(&(uParam0->f_316[5]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_409("SPRRaces", "Empty_128", uParam0[9], 0, 0, 5, 0);
					func_392(uParam0[iVar3]);
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[13], 1);
				}
				else
				{
					uParam0[13]->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]) && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[12], 1);
				}
				else
				{
					uParam0[12]->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0] && !iLocal_531[iVar0] == -1)
				{
					func_394(uParam0[11], 1);
				}
				else
				{
					uParam0[11]->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_409("SPRRaces", "FlightStunt_Bronze_128", uParam0[11], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Silver_128", uParam0[12], 0, 0, 5, 0);
				func_409("SPRRaces", "FlightStunt_Gold_128", uParam0[13], 0, 0, 5, 0);
				func_403(&(uParam0->f_741.f_198));
				if (Global_111638.f_19038.f_6[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_387(&(uParam0->f_316[9]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Global_111638.f_19038.f_6[Global_110668] * 1000f)), 6, "", 0, 1);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[17]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_402(&(uParam0->f_316[9]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
				}
				func_402(&(uParam0->f_316[6]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_51.f_18[Global_110668] > 0f)
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_387(&(uParam0->f_316[7]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Local_51.f_18[Global_110668] * 1000f)), 6, "", 0, 1);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
				else
				{
					func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[18]), 0.0047f, 0.0055f);
					UI::SET_TEXT_RIGHT_JUSTIFY(1);
					func_397(&(uParam0->f_316[7]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					UI::SET_TEXT_RIGHT_JUSTIFY(0);
					func_396(&(uParam0->f_741.f_198));
					func_403(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				func_386(&(uParam0->f_420[iVar1]));
				func_267(&(uParam0->f_420[iVar1]), 117, 1);
				func_404(uParam0->f_420[iVar1], 0, 0);
				func_394(uParam0[iVar3], 1);
				switch (Global_111638.f_19038.f_12[iVar0].f_4)
				{
					case 0:
						func_394(uParam0[iVar3], 1);
						func_403(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							func_403(&(uParam0->f_741.f_198));
							if (Global_111638.f_19038.f_6[iVar0] <= 0f)
							{
								func_275(&Var5, 269f, 0f, 32f, 32f, 0);
								func_274(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2].f_1 + fLocal_538);
								Var14 = (Var5 + fLocal_537);
								if (!bLocal_562)
								{
									func_395(&Var5, 0);
								}
								func_394(&Var5, 1);
								func_409("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_562)
								{
									func_393(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_110668)
				{
					func_400(&(uParam0->f_741.f_198));
				}
				func_396(&(uParam0->f_741.f_198));
				func_402(&Var14, &(uParam0->f_741.f_198), &(Local_51.f_24[iVar0]), 0);
				func_403(&(uParam0->f_741.f_198));
				func_394(uParam0[iVar3], 1);
			}
			if (Global_111638.f_19038.f_12[iVar0].f_4 == 0)
			{
				func_409("Shared", "Locked_Icon_32", uParam0[iVar3], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_531[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_106[iVar0] && IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_385(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= (((Local_51.f_112[iVar0] - Local_51.f_106[iVar0]) / 2f) + Local_51.f_106[iVar0]))
				{
					func_384(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_531[iVar0]) <= Local_51.f_112[iVar0])
				{
					func_382(uParam0[iVar3]);
					func_409("Shared", "MedalDot_32", uParam0[iVar3], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (func_381(0))
	{
		STATS::STAT_GET_INT(2024531174, &iVar16, -1);
	}
	else if (func_381(1))
	{
		STATS::STAT_GET_INT(-376705475, &iVar16, -1);
	}
	else if (func_381(2))
	{
		STATS::STAT_GET_INT(2010093328, &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[15]), 0.0047f, 0.0055f);
		UI::SET_TEXT_LEADING(1);
		Var17 = { uParam0->f_316[22] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_562)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			func_393(&Var17, &Var19);
		}
		if (bLocal_562)
		{
			func_379(&(uParam0->f_420[14]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_379(&(uParam0->f_420[14]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_404(uParam0->f_420[14], 0, 0);
		func_409("Shared", "Info_Icon_32", uParam0[iVar3], 0, 0, 5, 0);
		func_402(&(uParam0->f_316[22]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		func_396(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_110668 + 1, 16);
	func_394(uParam0[7], 1);
	func_409("SPRRaces", &Var30, uParam0[7], 0, 0, 5, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[25]), 0.0047f, 0.0055f);
	UI::SET_TEXT_LEADING(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_110668 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_562)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		func_393(&Var38, &Var40);
	}
	if (bLocal_562)
	{
		func_379(&(uParam0->f_420[25]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_379(&(uParam0->f_420[25]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_404(uParam0->f_420[25], 0, 0);
	func_402(&(uParam0->f_316[16]), &(uParam0->f_741.f_198), &cVar34, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
	func_402(&(uParam0->f_316[4]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_402(&(uParam0->f_316[8]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	func_400(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[22], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[22]), 0, 0);
	func_387(&(uParam0->f_316[13]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_51.f_112[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[23], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[23]), 0, 0);
	func_387(&(uParam0->f_316[14]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((((Local_51.f_112[Global_110668] - Local_51.f_106[Global_110668]) / 2f) + Local_51.f_106[Global_110668])) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_404(uParam0->f_420[24], 0, 0);
	func_399(&(uParam0->f_741.f_198), &(uParam0->f_420[24]), 0, 0);
	func_387(&(uParam0->f_316[15]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_51.f_106[Global_110668]) * 1000, 6, "", 1, 0);
	func_396(&(uParam0->f_741.f_198));
	func_403(&(uParam0->f_741.f_198));
}

float func_379(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)
{
	func_380(uParam3, 0);
	UI::_SET_TEXT_GXT_ENTRY(sParam1);
	iVar0 = UI::_GET_TEXT_SCREEN_LINE_COUNT(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!GRAPHICS::GET_IS_WIDESCREEN())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = func_271(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = func_271(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}

void func_380(var uParam0, bool bParam1)
{
	UI::SET_TEXT_FONT(*uParam0);
	if (!uParam0->f_8 == 0f || !uParam0->f_9 == 0f)
	{
		UI::SET_TEXT_WRAP(uParam0->f_8, uParam0->f_9);
	}
	UI::SET_TEXT_SCALE(uParam0->f_1, uParam0->f_2);
	UI::SET_TEXT_COLOUR(uParam0->f_3, uParam0->f_4, uParam0->f_5, uParam0->f_6);
	switch (uParam0->f_7)
	{
		case 0:
			break;
		
		case 1:
			UI::SET_TEXT_OUTLINE();
			UI::SET_TEXT_DROP_SHADOW();
			break;
		
		case 3:
			UI::SET_TEXT_DROP_SHADOW();
			break;
		
		case 2:
			UI::SET_TEXT_OUTLINE();
			break;
	}
	if (bParam1)
	{
		GRAPHICS::_SET_2D_LAYER(4);
	}
}

bool func_381(int iParam0)
{
	func_166();
	return iParam0 == Global_111638.f_2358.f_539.f_4321;
}

void func_382(var uParam0)
{
	func_383(uParam0, 107);
}

void func_383(var uParam0, int iParam1)
{
	UI::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_4 = uVar0;
	uParam0->f_5 = uVar1;
	uParam0->f_6 = uVar2;
}

void func_384(var uParam0)
{
	func_383(uParam0, 108);
}

void func_385(var uParam0)
{
	func_383(uParam0, 109);
}

void func_386(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 128;
}

void func_387(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (func_390())
	{
		func_380(uParam1, 0);
		UI::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		UI::SET_TEXT_CENTRE(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		UI::END_TEXT_COMMAND_DISPLAY_TEXT(func_389(*uParam0), func_388(uParam0->f_1), 0);
	}
}

float func_388(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_389(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_390()
{
	if (func_391())
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

bool func_391()
{
	return Global_1312440;
}

void func_392(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 255;
}

void func_393(float fParam0, var uParam1)
{
	*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_8 = (((uParam1->f_8 - 0.5f) * 1.33f) + 0.5f);
	uParam1->f_9 = (((uParam1->f_9 - 0.5f) * 1.33f) + 0.5f);
}

void func_394(float fParam0, int iParam1)
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}

void func_395(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		*fParam0 = (((*fParam0 - 0.5f) * 1.33f) + 0.5f);
	}
	fParam0->f_2 = (fParam0->f_2 * 1.33f);
}

void func_396(var uParam0)
{
	uParam0->f_8 = 0f;
	uParam0->f_9 = 0f;
}

void func_397(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (func_390())
		{
			func_380(uParam1, 0);
			UI::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			UI::SET_TEXT_CENTRE(iParam3);
			func_398(func_389(*uParam0), func_388(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_398(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam2);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam3);
}

void func_399(var uParam0, var uParam1, float fParam2, float fParam3)
{
	uParam0->f_8 = (*uParam1 - (uParam1->f_2 / 2f));
	uParam0->f_9 = (*uParam1 + (uParam1->f_2 / 2f));
	uParam0->f_8 = (uParam0->f_8 + fParam2);
	uParam0->f_9 = (uParam0->f_9 - fParam3);
}

void func_400(var uParam0)
{
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_401(uParam0, 2);
}

void func_401(var uParam0, int iParam1)
{
	UI::GET_HUD_COLOUR(iParam1, &uVar0, &uVar1, &uVar2, &uVar3);
	uParam0->f_3 = uVar0;
	uParam0->f_4 = uVar1;
	uParam0->f_5 = uVar2;
}

void func_402(float fParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		GRAPHICS::_SET_2D_LAYER(1);
	}
	func_397(fParam0, uParam1, sParam2, 0, 0);
}

void func_403(var uParam0)
{
	func_401(uParam0, 1);
}

void func_404(struct<8> Param0, int iParam8, int iParam9)
{
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			func_408(&Var0);
			break;
		
		case 1:
			func_407(&Var0);
			break;
		
		case 3:
			func_406(&Var0);
			break;
		
		case 4:
			func_405(&Var0);
			break;
	}
	if (func_390())
	{
		if (iParam9 == 1)
		{
			GRAPHICS::DRAW_RECT(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}

void func_405(var uParam0)
{
	uParam0->f_4 = 200;
	uParam0->f_5 = 20;
	uParam0->f_6 = 20;
	uParam0->f_7 = 204;
}

void func_406(var uParam0)
{
	uParam0->f_4 = 255;
	uParam0->f_5 = 255;
	uParam0->f_6 = 255;
	uParam0->f_7 = 255;
}

void func_407(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_408(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 150;
}

void func_409(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			func_416(&Var0);
			break;
		
		case 1:
			func_415(&Var0);
			break;
		
		case 5:
			func_414(&Var0);
			break;
		
		case 6:
			func_413(&Var0);
			break;
		
		case 7:
			func_412(&Var0);
			break;
		
		case 8:
			func_411(&Var0);
			break;
		
		case 9:
			func_410(&Var0);
			break;
	}
	if (func_390())
	{
		GRAPHICS::_SET_2D_LAYER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_389(Var0), func_388(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::_SET_2D_LAYER(4);
	}
}

void func_410(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_411(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_412(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_413(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_414(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_415(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_416(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

int func_417(var uParam0, var uParam1)
{
	if (iLocal_527 == 1)
	{
		return 1;
	}
	if (iLocal_528)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_526)
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			iLocal_520 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_520, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_527 = 1;
			iLocal_528 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_520 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_520, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			UI::CLEAR_HELP(1);
			func_547(&(Local_51.f_119));
			iLocal_527 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || CONTROLS::IS_CONTROL_JUST_RELEASED(2, 238))
	{
		iLocal_520 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_520, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		func_262(&(Local_51.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		func_4(&uLocal_522);
		iLocal_527 = 1;
		UI::CLEAR_HELP(1);
		return 1;
	}
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION() && bLocal_526 == 0)
	{
		if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
		{
			Global_4268497 = func_421(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			func_420(0, Global_110668, 1);
			if (func_419())
			{
				if (Global_4268497 == Global_110668)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_520 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_110668 = Global_4268497;
					func_547(&(Local_51.f_119));
				}
			}
		}
	}
	if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_111638.f_19038.f_12[Global_110668].f_4 == 0)
		{
			iLocal_520 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_520, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_520 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_520, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((CONTROLS::IS_CONTROL_JUST_RELEASED(2, 188) || func_418(0, uParam1)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		iVar1 = (Global_110668 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_520 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar1;
		func_547(&(Local_51.f_119));
	}
	if ((CONTROLS::IS_CONTROL_JUST_RELEASED(2, 187) || func_418(1, uParam1)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		iVar2 = Global_110668 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_520 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_520, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_110668 = iVar2;
		func_547(&(Local_51.f_119));
	}
	return 1;
}

bool func_418(int iParam0, var uParam1)
{
	bVar0 = false;
	iVar1 = CONTROLS::GET_CONTROL_VALUE(2, 195);
	iVar2 = CONTROLS::GET_CONTROL_VALUE(2, 196);
	if (GAMEPLAY::ABSI(iVar1) < 28 && GAMEPLAY::ABSI(iVar2) < 28)
	{
		*uParam1 = 1;
		uParam1->f_1 = 0;
		return 0;
	}
	if (GAMEPLAY::GET_GAME_TIMER() < uParam1->f_1 + 250)
	{
		*uParam1 = 0;
		return 0;
	}
	else
	{
		*uParam1 = 1;
	}
	if (!*uParam1)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			bVar0 = iVar2 < 100;
			break;
		
		case 1:
			bVar0 = iVar2 > 156;
			break;
		
		case 2:
			bVar0 = iVar1 < 100;
			break;
		
		case 3:
			bVar0 = iVar1 > 156;
			break;
	}
	if (bVar0)
	{
		uParam1->f_1 = GAMEPLAY::GET_GAME_TIMER();
		*uParam1 = 0;
	}
	return bVar0;
}

int func_419()
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

int func_420(int iParam0, var uParam1, bool bParam2)
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

int func_421(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7, bool bParam8)
{
	iVar7 = -1;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return -1;
	}
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	UI::_SHOW_CURSOR_THIS_FRAME();
	if (bParam8)
	{
		if (!GRAPHICS::GET_IS_WIDESCREEN())
		{
			fParam0 = (((fParam0 - 0.5f) * 1.33f) + 0.5f);
			fParam2 = (fParam2 * 1.33f);
		}
	}
	if (bParam7)
	{
		GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		fVar5 = fParam0;
		fVar6 = fParam1;
		GRAPHICS::_0x6DD8F5AA635EB4B2(fParam0, fParam1, &fParam0, &fParam1);
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
	}
	fVar0 = (fParam0 + fParam2);
	fVar1 = (fParam1 + (fParam3 * IntToFloat(iParam5)));
	fVar2 = CONTROLS::GET_CONTROL_NORMAL(2, 239);
	fVar3 = CONTROLS::GET_CONTROL_NORMAL(2, 240);
	if (((fVar2 >= fParam0 && fVar2 <= fVar0) && fVar3 >= fParam1) && fVar3 <= fVar1)
	{
		fVar4 = (fVar3 - fParam1);
		iVar7 = SYSTEM::FLOOR((fVar4 / fParam3));
		if (bParam7)
		{
			GRAPHICS::_SET_SCREEN_DRAW_POSITION(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
			func_422(fVar5, (fVar6 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			func_422(fParam0, (fParam1 + (IntToFloat(iVar7) * fParam3)), fParam2, fParam4, 255, 255, 255, iParam6);
		}
		return iVar7;
	}
	return -1;
}

void func_422(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, uParam7, 0);
}

int func_423()
{
	switch (iLocal_521)
	{
		case 0:
			UI::CLEAR_HELP(1);
			UI::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			iLocal_521 = 1;
			break;
		
		case 1:
			if (UI::HAS_THIS_ADDITIONAL_TEXT_LOADED("SP_SPR", 3))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
					{
						iLocal_521 = 2;
					}
				}
			}
			break;
		
		case 2:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_51.f_119));
			Local_51.f_119 = 0;
			func_547(&(Local_51.f_119));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			}
			func_137(1);
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_51.f_1, 4);
			func_374();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_51.f_11)
			{
				iLocal_531[iVar0] = -1;
				iVar0++;
			}
			func_427(&uLocal_563);
			func_424();
			GRAPHICS::_START_SCREEN_EFFECT("MinigameTransitionIn", 0, 1);
			iLocal_521 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_424()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_111638.f_19038.f_12[iVar0] = { func_426(iVar0) };
		MemCopy(&(Local_51.f_24[iVar0]), {Global_111638.f_19038.f_12[iVar0]}, 8);
		Local_51.f_106[iVar0] = func_425(iVar0);
		Local_51.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_111638.f_19038.f_6[iVar0] > Local_51.f_112[iVar0] || Global_111638.f_19038.f_6[iVar0] <= 0f)
			{
				Global_111638.f_19038.f_12[iVar0 + 1].f_4 = 0;
			}
			else
			{
				Global_111638.f_19038.f_12[iVar0 + 1].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_111638.f_19038.f_12[0].f_4 = 1;
}

float func_425(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_426(int iParam0)
{
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_427(var uParam0)
{
	func_430();
	bLocal_562 = GRAPHICS::GET_IS_WIDESCREEN();
	func_302(uParam0);
	func_280(&(uParam0->f_741));
	func_428(uParam0);
}

void func_428(var uParam0)
{
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	func_279(&(uParam0->f_316[0]), 262f, (71f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[1]), (257f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[2]), (513f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[3]), (769f + 127f), (125f - func_429(0.00417f, 720, 1)), 1);
	func_279(&(uParam0->f_316[17]), (257f + func_278(0.0047f, 1280, 1)), 162f, 1);
	func_279(&(uParam0->f_316[18]), (257f + func_278(0.0047f, 1280, 1)), 189f, 1);
	func_279(&(uParam0->f_316[19]), (257f + func_278(0.0047f, 1280, 1)), 216f, 1);
	func_279(&(uParam0->f_316[20]), (257f + func_278(0.0047f, 1280, 1)), 243f, 1);
	func_279(&(uParam0->f_316[21]), (257f + func_278(0.0047f, 1280, 1)), 270f, 1);
	func_279(&(uParam0->f_316[22]), (257f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[16]), (513f + func_278(0.0047f, 1280, 1)), (299f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[4]), (769f + func_278(0.0047f, 1280, 1)), 297f, 1);
	func_279(&(uParam0->f_316[5]), 769f, 297f, 1);
	func_279(&(uParam0->f_316[8]), (769f + func_278(0.0047f, 1280, 1)), 351f, 1);
	func_279(&(uParam0->f_316[9]), 324f, 351f, 1);
	func_279(&(uParam0->f_316[6]), (769f + func_278(0.0047f, 1280, 1)), (324f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[7]), 324f, (324f - func_429(0.00278f, 720, 1)), 1);
	func_279(&(uParam0->f_316[15]), 810f, 459f, 1);
	func_279(&(uParam0->f_316[14]), 896f, 459f, 1);
	func_279(&(uParam0->f_316[13]), 982f, 459f, 1);
	func_275(uParam0[0], 257f, 55f, 766f, 105f, 1);
	UI::GET_HUD_COLOUR(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_274(uParam0[0], uVar1, uVar2, uVar3, uVar4);
	func_275(uParam0[1], 496f, 171f, 32f, 32f, 0);
	func_274(uParam0[1], 255, 255, 255, 255);
	func_275(uParam0[2], 496f, 198f, 32f, 32f, 0);
	func_274(uParam0[2], 255, 255, 255, 255);
	func_275(uParam0[3], 496f, 225f, 32f, 32f, 0);
	func_274(uParam0[3], 255, 255, 255, 255);
	func_275(uParam0[4], 496f, 252f, 32f, 32f, 0);
	func_274(uParam0[4], 255, 255, 255, 255);
	func_275(uParam0[5], 496f, 279f, 32f, 32f, 0);
	func_274(uParam0[5], 255, 255, 255, 255);
	func_275(uParam0[6], (486f + func_278(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_274(uParam0[6], 255, 255, 255, 255);
	func_275(uParam0[7], 640f, 224f, 256f, 256f, 0);
	func_274(uParam0[7], 255, 255, 255, 255);
	func_275(uParam0[9], 896f, 223f, 128f, 128f, 0);
	func_274(uParam0[9], 255, 255, 255, 255);
	func_275(uParam0[13], 770.5f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[13], 255, 255, 255, 255);
	func_275(uParam0[12], 856f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[12], 255, 255, 255, 255);
	func_275(uParam0[11], 941.5f, 374.5f, 80f, 80f, 1);
	func_274(uParam0[11], 255, 255, 255, 255);
	func_269(&(uParam0->f_420[3]), 257f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[3]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[4]), 513f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[4]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[5]), 769f, 114f, 254f, 5f, 1);
	func_268(&(uParam0->f_420[5]), 70, 70, 130, 255);
	func_269(&(uParam0->f_420[0]), 257f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[0]), 1, 1);
	func_269(&(uParam0->f_420[1]), 513f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[1]), 1, 1);
	func_269(&(uParam0->f_420[2]), 769f, 119f, 254f, 26f, 1);
	func_267(&(uParam0->f_420[2]), 1, 1);
	func_269(&(uParam0->f_420[7]), 513f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[7]), 117, 1);
	func_269(&(uParam0->f_420[8]), 769f, 159f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[8]), 117, 1);
	func_269(&(uParam0->f_420[9]), 257f, 159f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[9]), 117, 1);
	func_269(&(uParam0->f_420[10]), 257f, 186f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[10]), 117, 1);
	func_269(&(uParam0->f_420[11]), 257f, 213f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[11]), 117, 1);
	func_269(&(uParam0->f_420[12]), 257f, 240f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[12]), 117, 1);
	func_269(&(uParam0->f_420[13]), 257f, 267f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[13]), 117, 1);
	func_269(&(uParam0->f_420[26]), 257f, 294f, 254f, 2f, 1);
	func_267(&(uParam0->f_420[26]), 1, 1);
	func_269(&(uParam0->f_420[14]), 257f, 294f, 254f, 75f, 1);
	func_267(&(uParam0->f_420[14]), 117, 1);
	func_269(&(uParam0->f_420[15]), 257f, 294f, (254f - 32f), 75f, 1);
	func_267(&(uParam0->f_420[15]), 1, 1);
	func_269(&(uParam0->f_420[25]), 513f, 294f, 254f, 133f, 1);
	func_267(&(uParam0->f_420[25]), 117, 1);
	func_269(&(uParam0->f_420[16]), 769f, 294f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[16]), 117, 1);
	func_269(&(uParam0->f_420[17]), 769f, 321f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[17]), 117, 1);
	func_269(&(uParam0->f_420[18]), 769f, 348f, 254f, 25f, 1);
	func_267(&(uParam0->f_420[18]), 117, 1);
	func_269(&(uParam0->f_420[21]), 769f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[21]), 117, 1);
	func_269(&(uParam0->f_420[20]), 854f, 375f, 84f, 84f, 1);
	func_267(&(uParam0->f_420[20]), 117, 1);
	func_269(&(uParam0->f_420[19]), 940f, 375f, 83f, 84f, 1);
	func_267(&(uParam0->f_420[19]), 117, 1);
	func_269(&(uParam0->f_420[22]), 769f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[22]), 109, 1);
	func_269(&(uParam0->f_420[23]), 854f, 456f, 84f, 25f, 1);
	func_267(&(uParam0->f_420[23]), 108, 1);
	func_269(&(uParam0->f_420[24]), 940f, 456f, 83f, 25f, 1);
	func_267(&(uParam0->f_420[24]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5] = ((((*uParam0)[iVar5] - 0.5f) * 1.33f) + 0.5f);
			uParam0[iVar5]->f_2 = (uParam0[iVar5]->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5] = (((uParam0->f_316[iVar5] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5] = (((uParam0->f_420[iVar5] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5].f_2 = (uParam0->f_420[iVar5].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

float func_429(float fParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar0, &iParam1);
	}
	fVar1 = (fParam0 * IntToFloat(iParam1));
	if (bParam2)
	{
		return SYSTEM::TO_FLOAT(SYSTEM::ROUND(fVar1));
	}
	return fVar1;
}

void func_430()
{
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_431(var uParam0)
{
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0].f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_113[0].f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
}

int func_432(var uParam0, bool bParam1)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_529)
		{
			iVar0 = 0;
			if (uParam0->f_358[0].f_13 > 0f)
			{
				if (uParam0->f_358[0].f_13 <= Local_51.f_106[Local_51.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0].f_13 <= (((Local_51.f_112[Local_51.f_10] - Local_51.f_106[Local_51.f_10]) / 2f) + Local_51.f_106[Local_51.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0].f_13 <= Local_51.f_112[Local_51.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_460(Local_51.f_10, &(Local_51.f_65[Local_51.f_10]));
			if (bParam1)
			{
				func_457(Local_51.f_10, uParam0->f_358[0].f_13, iVar0);
				iLocal_529 = 1;
				return 1;
			}
			else if (func_433(Local_51.f_10, uParam0->f_358[0].f_13, iVar0))
			{
				iLocal_529 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_529 = 1;
	}
	return 0;
}

int func_433(int iParam0, float fParam1, int iParam2)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_457(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (func_434(&uLocal_1550))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_434(var uParam0)
{
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_456(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_455(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_454(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_453(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_452(uParam0->f_44, iVar188))
					{
						if (func_451(uParam0->f_44, 4, iVar188))
						{
							GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_450(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_452(uParam0->f_44, iVar188))
								{
									if (func_451(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = STATS::_0x88578F6EC36B4A3A(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = STATS::_0x38491439B6BA7F7D(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_449();
				if (Global_1835013.f_4)
				{
					if (func_448(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			STATS::_0xC38DC1E90D22547C(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_447())
			{
				if (func_446())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_448(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				STATS::_0xC38DC1E90D22547C(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

int func_435(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (bParam5)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_436(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_437(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

void func_437(var uParam0, bool bParam1, bool bParam2)
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

int func_438()
{
	if (UI::IS_PAUSE_MENU_ACTIVE() && !func_439())
	{
		return 1;
	}
	return 0;
}

bool func_439()
{
	return func_440(PLAYER::PLAYER_ID());
}

int func_440(int iParam0)
{
	switch (func_441(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 41:
		case 36:
		case 39:
		case 42:
			return 0;
		
		default:
	}
	return 1;
}

int func_441(int iParam0)
{
	return Global_1590535[iParam0].f_196;
}

int func_442()
{
	if (STATS::_0xA31FD15197B192BD() || Global_1835008)
	{
		func_443();
		return 1;
	}
	return 0;
}

void func_443()
{
	if (func_444(&(Global_1835008.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_366(&(Global_1835008.f_1));
	}
}

int func_444(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_445(uParam0, bParam2, 0);
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

void func_445(var uParam0, bool bParam1, bool bParam2)
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

bool func_446()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 1);
}

var func_447()
{
	return Global_2458936.f_3;
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_449()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

bool func_450(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

int func_451(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_452(int iParam0, int iParam1)
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_454(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

struct<13> func_455(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_456(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_457(int iParam0, float fParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var22[0]), "GameType", 32);
	StringCopy(&(Var22[1]), "Location", 32);
	StringCopy(&(Var22[2]), "Type", 32);
	StringCopy(&(Var3[0]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2]), "StuntPlaneRace", 24);
	if (func_459(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			func_458(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			func_458(817, 131, 0, 0f, 0);
		}
		func_458(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		func_458(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		func_458(817, 149, 0, 0f, 0);
		func_458(817, 148, 0, 0f, 0);
		func_458(817, 109, 1, 0f, 0);
		func_458(817, 157, iVar0, 0f, 0);
		func_458(817, 158, iVar1, 0f, 0);
		func_458(817, 86, iVar2, 0f, 0);
	}
}

void func_458(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	if (!bParam4)
	{
		STATS::_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_451(iParam0, 4, iVar1))
				{
					GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_459(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_0x1353F87E89946207())) && NETWORK::_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				Var69 = { func_455(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68] = { *uParam2[iVar68] };
			MemCopy(&(Var0.f_2.f_1[iVar68].f_8), {*uParam1[iVar68]}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2458936.f_3)
			{
				STATS::_0xC980E62E33DF1D5C(&Var0, &(Global_1662155.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_0x1353F87E89946207())
	{
	}
	if (!NETWORK::_0x422D396F80A96547())
	{
	}
	return 0;
}

void func_460(int iParam0, char[4] cParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	func_461(&uLocal_1550, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_461(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_470())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				if (iParam5 > 0 && !func_470())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_470())
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Type", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_469(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			uParam0->f_44.f_3.f_1[1].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_227 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_468(Global_4456448.f_232883) || func_465(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_464(Global_4456448.f_232883))
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "Location", 32);
			uParam0->f_44.f_3.f_1[0].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			uParam0->f_44.f_3.f_1[1].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0].f_8), {func_463(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835392.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar16]))
		{
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835392.f_2826 = func_462(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_462(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_456(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

struct<6> func_463(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_464(int iParam0)
{
	return iParam0 == 74;
}

var func_465(int iParam0)
{
	return (func_467(iParam0) || func_466(iParam0));
}

bool func_466(int iParam0)
{
	return iParam0 == 44;
}

bool func_467(int iParam0)
{
	return iParam0 == 45;
}

bool func_468(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_469(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_470()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return 1;
	}
	return 0;
}

int func_471(var uParam0, bool bParam1)
{
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < GAMEPLAY::GET_FRAME_COUNT() && Global_1840924.f_2 > 0)
	{
		func_366(&Global_1840924);
		func_366(&(Global_1840924.f_49));
		*uParam0 = 0;
		Global_1840924.f_2 = 0;
		func_480(0);
	}
	Global_1840924.f_2 = GAMEPLAY::GET_FRAME_COUNT();
	iVar1 = -1;
	if (GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((GAMEPLAY::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_478() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 4))
			{
				GAMEPLAY::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_478())
			{
				UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
			{
				if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
				{
					GAMEPLAY::SET_BIT(uParam0, 0);
				}
			}
			else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_366(&(Global_1840924.f_49));
				func_366(&Global_1840924);
				*uParam0 = 0;
				Global_1840924.f_2 = 0;
				func_480(0);
				return 1;
			}
		}
	}
	else
	{
		func_475(&(Global_1840924.f_3), func_477(&(Global_1840924.f_3)));
		if ((func_472(&(Global_1840924.f_49)) && !func_444(&(Global_1840924.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			GAMEPLAY::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_473(&(Global_1840924.f_3), 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				GAMEPLAY::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_473(&(Global_1840924.f_3), 0);
			}
		}
		if (func_472(&Global_1840924))
		{
			if (!func_444(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
						{
							if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
							{
								GAMEPLAY::SET_BIT(uParam0, 0);
							}
						}
						else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_366(&Global_1840924);
							*uParam0 = 0;
							Global_1840924.f_2 = 0;
							func_480(0);
							return 1;
						}
					}
				}
				else
				{
					func_366(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return 1;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(*uParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
				{
					if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
					{
						GAMEPLAY::SET_BIT(uParam0, 0);
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_366(&(Global_1840924.f_49));
					func_366(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_480(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::_SET_WARNING_MESSAGE_2("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
					{
						if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
						{
							GAMEPLAY::SET_BIT(uParam0, 0);
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_366(&(Global_1840924.f_49));
						func_366(&Global_1840924);
						*uParam0 = 0;
						Global_1840924.f_2 = 0;
						func_480(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_472(var uParam0)
{
	return uParam0->f_1;
}

void func_473(var uParam0, bool bParam1)
{
	func_474(uParam0);
	if (bParam1)
	{
		func_480(0);
	}
	uParam0->f_35 = 1;
}

void func_474(var uParam0)
{
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_475(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_476(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		else
		{
			UI::_SET_LOADING_PROMPT_TEXT_ENTRY(&(uParam0->f_1));
			UI::_SHOW_LOADING_PROMPT(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_476(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_477(var uParam0)
{
	return uParam0->f_35;
}

int func_478()
{
	if (func_479())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_479()
{
	return Global_2461181;
}

void func_480(bool bParam0)
{
	UI::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		UI::_0xC65AB383CD91DF98();
	}
}

void func_481(var uParam0, int iParam1, char[4] cParam2)
{
	func_154(&(Local_51.f_119), 1128792064, 1, 0, 1, 1065353216);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_460(iParam1, cParam2);
	func_482(uParam0, &uLocal_1550);
}

void func_482(var uParam0, var uParam1)
{
	func_437(&(Global_1840924.f_49), 1, 0);
	UI::HIDE_HELP_TEXT_THIS_FRAME();
	func_543();
	func_542(0);
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_540(1);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_539(1);
	func_538(1);
	if (!func_439())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_357();
		GAMEPLAY::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { func_455(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1835392.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1835392.f_2829 != 2)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())
			{
				if (Global_1835392.f_2829 != 3)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1835392.f_2829 != 4)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				func_537(*uParam0, Global_1835392.f_2780);
				if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_456(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 4);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 5);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 6);
				func_534(*uParam0, &iVar6, iVar31, 1, 1);
				GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
				func_533(*uParam0);
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
				UI::CLEAR_HELP(1);
			}
			else
			{
				func_533(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_505(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_537(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					GAMEPLAY::SET_BIT(&(uParam1->f_42), 0);
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&Var51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_504(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_366(&(Global_1835392.f_2823));
				}
				else if (func_444(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&Var57, "SC_LB_DL", 24);
					StringIntConCat(&Var57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_534(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_504(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_366(&(Global_1835392.f_2823));
				}
				func_533(*uParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_537(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_456(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_536(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_535(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 6))
					{
						func_369(&Global_1839723);
						func_500(uParam1, &Global_1839723);
						func_499(uParam1, &Global_1839723);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 4);
									func_534(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_534(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_534(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 6);
									if (!NETWORK::_0x67A5589628E0CFF6())
									{
										bVar63 = true;
									}
									else if (!NETWORK::_0xBA9775570DB788CF())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_456(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_534(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_534(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_450(Global_1839723[iVar0].f_32))
							{
								if (func_456(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar45);
									if (!Global_1839723[iVar0].f_74 && GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_498(&(Global_1839723[iVar0].f_32), &Var32))
										{
											GAMEPLAY::SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												GAMEPLAY::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (func_456(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0] };
										if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_1839723[iVar0].f_84)) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1839723[iVar0].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0].f_84), 64);
										}
										func_497(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &cVar9, &(Global_1839723[iVar0].f_80));
										uParam1->f_246.f_6[iVar0] = iVar6;
										uParam1->f_246.f_6[iVar0].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0].f_2 = { Global_1839723[iVar0].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_497(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &(Global_1839723[iVar0]), &(Global_1839723[iVar0].f_80));
										uParam1->f_246.f_6[iVar0] = iVar6;
										uParam1->f_246.f_6[iVar0].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0].f_2 = { Global_1839723[iVar0].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2770, iVar1))
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_491(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], 0, Global_1839723[iVar0].f_58);
											}
											else
											{
												func_491(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], Global_1839723[iVar0].f_74, Global_1839723[iVar0].f_58);
											}
										}
										else
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_488(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], 0);
											}
											else
											{
												func_488(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], Global_1839723[iVar0].f_74);
											}
										}
										iVar1++;
									}
									func_487();
									uVar2[(Global_1839723[iVar0].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0].f_59 > 2)
										{
											GAMEPLAY::SET_BIT(&iVar31, 2);
											GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[0].f_1), 2);
											func_486(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 4);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 5);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 6);
						func_534(*uParam0, &iVar6, iVar31, 1, 0);
					}
					GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
					func_533(*uParam0);
					UI::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
							func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
						}
					}
				}
				else
				{
					func_533(*uParam0);
					func_483(uParam0, uParam1);
				}
			}
		}
	}
}

void func_483(var uParam0, var uParam1)
{
	iVar1 = uParam1->f_246.f_1;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		UI::_SHOW_CURSOR_THIS_FRAME();
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 239);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 240);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 237);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 238);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			CONTROLS::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			CONTROLS::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (UI::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					CONTROLS::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_485(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 0))
		{
			if ((CONTROLS::IS_CONTROL_PRESSED(2, 188) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				GAMEPLAY::SET_BIT(&(uParam1->f_246), 0);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 188))
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 1))
		{
			if ((CONTROLS::IS_CONTROL_PRESSED(2, 187) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				GAMEPLAY::SET_BIT(&(uParam1->f_246), 1);
				func_366(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_484(uParam1, 187))
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 3))
	{
		if ((CONTROLS::IS_CONTROL_PRESSED(2, 204) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_246), 3);
			func_366(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_484(uParam1, 204))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1].f_1), 3);
				func_486(*uParam0, uParam1->f_246.f_6[iVar1], uParam1->f_246.f_6[iVar1].f_1);
			}
			GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
			func_486(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_450(uParam1->f_246.f_6[uParam1->f_246.f_1].f_2))
		{
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 2))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(2, 217) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						GAMEPLAY::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_2));
					}
				}
			}
			else if (!CONTROLS::IS_CONTROL_PRESSED(2, 217))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_484(var uParam0, int iParam1)
{
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_485(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_444(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_444(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_485(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_486(var uParam0, int iParam1, int iParam2)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT_STATE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_487()
{
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_488(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam44));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!GAMEPLAY::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_490(fParam44);
					}
					else
					{
						fParam44 = func_489(fParam44);
					}
				}
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 0:
			break;
	}
}

float func_489(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_490(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_491(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(-iParam44);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SCLB_VEH_CUST");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
				else
				{
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 8:
			if (func_496(iParam44) != 0)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(func_493(func_496(iParam44), 0));
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!GAMEPLAY::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = SYSTEM::FLOOR(func_490(SYSTEM::TO_FLOAT(iParam44)));
					}
					else
					{
						iParam44 = SYSTEM::FLOOR(func_489(SYSTEM::TO_FLOAT(iParam44)));
					}
				}
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			else
			{
				Var0 = { func_492(iParam44) };
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&Var0);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_492(int iParam0)
{
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_493(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case -1569615261:
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case 453432689:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case 1593441988:
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case 584646201:
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case 736523883:
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case 324215364:
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case -1074790547:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case -2084633992:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case -1357824103:
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case -1660422300:
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case 2144741730:
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case 487013001:
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case 2017895192:
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case -494615257:
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case 205991906:
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case 856002082:
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case 100416529:
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case -1568386805:
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case -1312131151:
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case 1119849093:
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case -1813897027:
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case -37975472:
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case 741814745:
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case 615608432:
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case 911657153:
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case 883325847:
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case -1833087301:
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case 1945616459:
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case -123497569:
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case -268631733:
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case 966099553:
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case -72657034:
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case -1474608608:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case -165357558:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case -1372674932:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case -1716189206:
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case 1737195953:
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case 1317494643:
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case -1786099057:
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case -2067956739:
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case 1141786504:
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case 133987706:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -1553120962:
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case -270015777:
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case -1654528753:
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case -1716589765:
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case -102323637:
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case 1627465347:
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case -1076751822:
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case 137902532:
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case -1834847097:
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case 1198879012:
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case -771403250:
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case -1063057011:
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case -1466123874:
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case 2138347493:
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case -952879014:
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case 984333226:
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case -1420407917:
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case 1672152130:
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case -102973651:
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case 1834241177:
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case 171789620:
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case -656458692:
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case -598887786:
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case 2132975508:
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case -581044007:
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case -619010992:
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case -1951375401:
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case -275439685:
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case 1649403952:
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case -538741184:
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case -1045183535:
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case -853065399:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case -1121678507:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case -1169823560:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case -1810795771:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case 148160082:
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case -1075685676:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case -608341376:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case -86904375:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case -1768145561:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case -2009644972:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case -879347409:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case -2066285827:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case -1746263880:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case -1355376991:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case -1238556825:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case -1853920116:
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case 727643628:
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		default:
			if (func_495(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_494(&(Var0.f_31));
				}
				else
				{
					return func_494(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_494(var uParam0)
{
	return uParam0;
}

int func_495(int iParam0, var uParam1)
{
	iVar1 = DLC1::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (DLC1::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_496(int iParam0)
{
	if (iParam0 == 600)
	{
		return 1834241177;
	}
	else if (iParam0 == 500)
	{
		return 1119849093;
	}
	else if (iParam0 == 400)
	{
		return -1660422300;
	}
	else if (iParam0 == 401)
	{
		return 2144741730;
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return -1074790547;
	}
	else if (iParam0 == 301)
	{
		return -2084633992;
	}
	else if (iParam0 == 302)
	{
		return -1357824103;
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return 487013001;
	}
	else if (iParam0 == 201)
	{
		return 2017895192;
	}
	else if (iParam0 == 202)
	{
		return -494615257;
	}
	else if (iParam0 == 203)
	{
		return -1654528753;
	}
	else if (iParam0 == 100)
	{
		return 324215364;
	}
	else if (iParam0 == 101)
	{
		return 736523883;
	}
	else if (iParam0 == 102)
	{
		return -270015777;
	}
	else if (iParam0 == 0)
	{
		return 453432689;
	}
	else if (iParam0 == 1)
	{
		return 1593441988;
	}
	else if (iParam0 == 2)
	{
		return 584646201;
	}
	else if (iParam0 == 3)
	{
		return -1716589765;
	}
	return 0;
}

void func_497(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char[4] cParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("NUMBER");
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	else
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("SC_LB_EMPTY");
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	GRAPHICS::_0xE83A3E3557A56640(cParam4);
	GRAPHICS::_0xE83A3E3557A56640(uParam5);
}

int func_498(var uParam0, var uParam1)
{
	if (!func_450(*uParam0))
	{
		return 0;
	}
	if (!func_450(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

void func_499(var uParam0, var uParam1)
{
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5) && !GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (uParam1[iVar0]->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if (uParam1[iVar1]->f_75 != 0)
					{
						if (uParam1[iVar1]->f_75 < uParam1[iVar0]->f_75)
						{
							uVar77 = uParam1[iVar1]->f_75;
							uParam1[iVar1]->f_75 = uParam1[iVar0]->f_75;
							uParam1[iVar0]->f_75 = uVar77;
							Var2 = { *uParam1[iVar1] };
							*uParam1[iVar1] = { *uParam1[iVar0] };
							*uParam1[iVar0] = { Var2 };
						}
						else if (uParam1[iVar1]->f_75 == uParam1[iVar0]->f_75)
						{
							if (uParam1[iVar1]->f_59 != -1)
							{
								if (uParam1[iVar1]->f_59 < uParam1[iVar0]->f_59 || uParam1[iVar0]->f_59 == -1)
								{
									uVar77 = uParam1[iVar1]->f_75;
									uParam1[iVar1]->f_75 = uParam1[iVar0]->f_75;
									uParam1[iVar0]->f_75 = uVar77;
									Var2 = { *uParam1[iVar1] };
									*uParam1[iVar1] = { *uParam1[iVar0] };
									*uParam1[iVar0] = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_500(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5) && !GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_503(uParam1, iVar3, &uVar0, 0))
			{
				uParam1[iVar3]->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar1, 1))
			{
				uParam1[iVar3]->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_503(uParam1, iVar3, &uVar2, 2))
			{
				uParam1[iVar3]->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_501(uParam1);
	}
}

void func_501(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_455(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar16 = STATS::_0x58A651CD201D89AD(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_502(&Global_1839593);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1835392.f_2826, iVar0, &Global_1839593);
				*uParam0[iVar0] = { Global_1839593.f_1 };
				uParam0[iVar0]->f_16 = { Global_1839593.f_17 };
				uParam0[iVar0]->f_32 = { Global_1839593.f_33 };
				uParam0[iVar0]->f_45 = { Global_1839593.f_46 };
				uParam0[iVar0]->f_58 = Global_1839593.f_59;
				uParam0[iVar0]->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				uParam0[iVar0]->f_75 = iVar2;
				if (uParam0[iVar0]->f_59 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 0))
					{
						uParam0[iVar0]->f_74 = 1;
					}
					else
					{
						uParam0[iVar0]->f_74 = 0;
					}
					if (func_498(&(uParam0[iVar0]->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_63, iVar1))
					{
						uParam0[iVar0]->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						uParam0[iVar0]->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_502(var uParam0)
{
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_503(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3][0].f_59 > 0)
		{
			*uParam0[iParam1] = { Global_1835392[iParam3][0] };
			Global_1839536[iParam3] = { Global_1835392[iParam3][0] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3][0].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3][0].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*uParam0[iParam1] = { Global_1835392[iParam3][Global_1835392.f_2775[iParam3]] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				uParam0[iParam1]->f_32 = { func_455(PLAYER::PLAYER_ID()) };
				uParam0[iParam1]->f_59 = -1;
				uParam0[iParam1]->f_67[0] = -1;
				uParam0[iParam1]->f_67[1] = -1;
				uParam0[iParam1]->f_67[2] = -1;
				uParam0[iParam1]->f_67[3] = -1;
				uParam0[iParam1]->f_60[0] = -1f;
				uParam0[iParam1]->f_60[1] = -1f;
				uParam0[iParam1]->f_60[2] = -1f;
				uParam0[iParam1]->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] - iVar0)].f_59 > 0)
			{
				*uParam0[iParam1] = { Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] - iVar0)] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] + iVar0)].f_59 > 1)
			{
				*uParam0[iParam1] = { Global_1835392[iParam3][(Global_1835392.f_2775[iParam3] + iVar0)] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_504(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	GAMEPLAY::SET_BIT(&iParam2, 7);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam3);
	GRAPHICS::_0xAE4E8157D9ECF087();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_505(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_472(&(Global_1835392.f_2827)))
		{
			func_445(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_444(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1835392.f_2832 != 0)
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 4))
	{
		func_532(uParam0);
		GAMEPLAY::SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_530(uParam0))
	{
		return 0;
	}
	if (!func_528(uParam0))
	{
		return 0;
	}
	if (!func_521(uParam0))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		func_369(&Global_1839723);
		func_500(uParam0, &Global_1839723);
		func_499(uParam0, &Global_1839723);
		GAMEPLAY::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!func_472(&(Global_1835392.f_2830)))
		{
			func_445(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_444(&(Global_1835392.f_2830), 30000, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_518(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_515(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_509(&Global_1839723))
		{
			func_506(&Global_1839723);
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
			func_506(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_506(var uParam0)
{
	iVar2 = func_508(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_507(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_502(&Global_1839593);
		if (uParam0[iVar0]->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *uParam0[iVar0] };
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0[iVar0]->f_16), ""))
			{
				Global_1839593.f_17 = { *uParam0[iVar0] };
			}
			else
			{
				Global_1839593.f_17 = { uParam0[iVar0]->f_16 };
			}
			Global_1839593.f_33 = { uParam0[iVar0]->f_32 };
			if (func_450(uParam0[iVar0]->f_45))
			{
				Global_1839593.f_46 = { uParam0[iVar0]->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { uParam0[iVar0]->f_32 };
			}
			Global_1839593.f_59 = uParam0[iVar0]->f_58;
			Global_1839593.f_60 = uParam0[iVar0]->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if (uParam0[iVar0]->f_74)
			{
				GAMEPLAY::SET_BIT(&(Global_1839593.f_61), 0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1839593.f_61), 0);
			}
			GAMEPLAY::SET_BIT(&(Global_1839593.f_61), uParam0[iVar0]->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = uParam0[iVar0]->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = uParam0[iVar0]->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2] = { func_229(PLAYER::PLAYER_ID()) };
}

void func_507(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_508(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_509(var uParam0)
{
	switch (uParam0[0]->f_76)
	{
		case 0:
			func_513(uParam0);
			if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				uParam0[0]->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_450(uParam0[iVar0]->f_32))
				{
					if (!func_512(&(uParam0[iVar0]->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206] = { uParam0[iVar0]->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				uParam0[0]->f_76 = 1;
			}
			else
			{
				uParam0[0]->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_510(&(uParam0[1]->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				uParam0[0]->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_450(uParam0[iVar0]->f_32) && func_450(Global_1841022[iVar1]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0[iVar0]->f_32), &(Global_1841022[iVar1])))
						{
							uParam0[iVar0]->f_80 = { Global_1841022.f_157[iVar1] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			uParam0[0]->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_510(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar35], &uVar0))
				{
					func_511(&uVar0, uParam3[iVar35]);
				}
				iVar35++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_511(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

int func_512(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_450(*uParam1[iVar0]))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_513(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_514(&(Global_1841022[iVar0]));
		StringCopy(&(Global_1841022.f_157[iVar0]), "", 16);
		iVar0++;
	}
	if (uParam0[0]->f_76 > 0)
	{
		uParam0[0]->f_76 = 0;
		uParam0[1]->f_76 = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1841022.f_206 = 0;
}

void func_514(var uParam0)
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

int func_515(var uParam0)
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return 1;
	}
	else if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (!func_517(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_516(&(uParam0[iVar0]->f_78), &(uParam0[iVar0]->f_32), uParam0[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_516(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_450(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (GAMEPLAY::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (GAMEPLAY::IS_PS3_VERSION())
						{
						}
						else if (GAMEPLAY::IS_ORBIS_VERSION())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_517(var uParam0)
{
	if (!GAMEPLAY::IS_DURANGO_VERSION() && !GAMEPLAY::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (uParam0[0]->f_78 == 2)
	{
		return 1;
	}
	switch (uParam0[0]->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1]), "", 64);
				func_514(&(Global_1835392.f_3026[iVar1]));
				if (func_450(uParam0[iVar1]->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183] = { uParam0[iVar1]->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				uParam0[0]->f_79 = NETWORK::_0xD66C9E72B3CC4982(&(Global_1835392.f_3026), Global_1835392.f_3183);
				uParam0[0]->f_78 = 1;
			}
			else
			{
				uParam0[0]->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197(uParam0[0]->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_450(uParam0[iVar1]->f_32))
					{
						*uParam0[iVar1] = { Global_1835392.f_2833[iVar2] };
						iVar2++;
					}
					iVar1++;
				}
				uParam0[0]->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				uParam0[0]->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			uParam0[0]->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_518(var uParam0)
{
	if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_520(&(uParam0[iVar0]->f_77), &(uParam0[iVar0]->f_16), &(uParam0[iVar0]->f_84), &(Global_1835392.f_2833), &(uParam0[iVar0]->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_519(&(uParam0[iVar0]->f_77), uParam0[iVar0]->f_16, &(uParam0[iVar0]->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_519(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_450(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (GAMEPLAY::IS_PS3_VERSION())
						{
						}
						else if (GAMEPLAY::IS_ORBIS_VERSION())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_520(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	if (!GAMEPLAY::IS_DURANGO_VERSION() && !GAMEPLAY::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0], "", 64);
			if (func_450(Var1[0]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *uParam3[0] };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_521(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_455(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835392.f_2775[iVar113] = -1;
			Global_1835392.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var116))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_527(), 0, 0, 0))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_527())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_526(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_527() && iVar109 == 0)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
									Global_1835392.f_2775[iVar113] = 0;
									Global_1835392.f_2704[iVar113]++;
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						if (!func_527())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_526(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar109 == iVar111)
								{
									if (!func_498(&(Global_1835392[iVar113][0].f_32), &Var116))
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_498(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[iVar113] < 0)
											{
												Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
										Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar108 = STATS::_0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar111++;
						}
						STATS::_0x71B008056E5692D6();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[iVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						STATS::_0x71B008056E5692D6();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_453(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[iVar113][0].f_59 > 1 || Global_1835392[iVar113][0].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_527() && (func_498(&Var0, &Var116) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[iVar113][0]), {Var0.f_13}, 16);
									Global_1835392[iVar113][0].f_32 = { Var0 };
									Global_1835392[iVar113][0].f_59 = Var0.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][0].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][0].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][0].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][0].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][0].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][0].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
									if (func_524(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_526(&Var0);
							iVar106++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar113);
					Global_1835392.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835392.f_2775[iVar113] == -1 && func_527())
				{
					if (Global_1835392.f_2704[iVar113] >= 1)
					{
						func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
					}
					else
					{
						func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
					}
					Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
					Global_1835392.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_522(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_522(int iParam0, int iParam1)
{
	if ((func_527() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0][Global_1835392.f_2775[iParam0]].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0][iVar0].f_59 >= Global_1835392[iParam0][Global_1835392.f_2775[iParam0]].f_59)
					{
						if (Global_1835392[iParam0][iVar0].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0][iVar0].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_527())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_523(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_524(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_525(var uParam0, char* sParam1, int iParam2)
{
	if (func_456(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_455(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_524(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_526(var uParam0)
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

int func_527()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_528(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_455(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_527())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_529(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0], iVar112, 0, 100))
				{
					func_453(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
					{
						if (func_527())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar110, &Var0);
									if (func_456(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_498(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_526(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_527() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								Global_1835392.f_2775[iVar113] = 0;
								Global_1835392.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_450(Var0) && Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_498(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_59 = 1;
								if (func_524(uParam0->f_44))
								{
									iVar111 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_58 = 1;
									}
									else
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_58 = 0;
									}
								}
								if (func_456(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1][Global_1835392.f_2704[iVar113]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
								}
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1][Global_1835392.f_2704[iVar113]].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_526(&Var0);
								STATS::_0x71B008056E5692D6();
								func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar113] == -1 && func_527())
								{
									if (Global_1835392.f_2704[iVar113] >= 1)
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
									}
									else
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
									}
									Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
									Global_1835392.f_2704[iVar113]++;
								}
								return 0;
							}
							func_526(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_526(&Var0);
							STATS::_0x71B008056E5692D6();
							func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar113] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_527())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar110, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_527() && iVar108 == iVar110)
								{
									if (!func_498(&(Global_1835392[iVar113][0].f_32), &Var114))
									{
										func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392[1][Global_1835392.f_2704[1]].f_59 = iVar110 + 1;
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_527() && (func_498(&Var0, &Var114) || func_498(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_450(Var0) && !func_498(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_498(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1][Global_1835392.f_2704[1]]), {Var0.f_13}, 16);
										Global_1835392[1][Global_1835392.f_2704[1]].f_32 = { Var0 };
										Global_1835392[1][Global_1835392.f_2704[1]].f_59 = iVar110 + 1;
										Global_1835392[1][Global_1835392.f_2704[1]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar111 = STATS::_0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_58 = 1;
											}
											else
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1][Global_1835392.f_2704[1]].f_16), {Var0.f_19.f_1[1].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1][Global_1835392.f_2704[1]].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_526(&Var0);
							iVar110++;
						}
						STATS::_0x71B008056E5692D6();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar113] == -1 && func_527())
						{
							if (Global_1835392.f_2704[iVar113] >= 1)
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
							}
							else
							{
								func_525(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
							}
							Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
							Global_1835392.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_522(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_529(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_442() && !func_438())
			{
				func_436(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_530(var uParam0)
{
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_455(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835392.f_2775[iVar126] = -1;
			Global_1835392.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_531(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_435(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_527(), 0, 0, 0))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_527())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_526(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar126] < 11)
							{
								if (func_527() && iVar122 == 0)
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
									Global_1835392.f_2775[iVar126] = 0;
									Global_1835392.f_2704[iVar126]++;
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_498(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
									if (func_524(uParam0->f_44))
									{
										iVar121 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
										}
									}
									if (func_456(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
									}
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar119] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar119] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						if (!func_527())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_526(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
							if (Global_1835392.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_527() && iVar122 == iVar124)
								{
									if (!func_498(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
										Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
										Global_1835392.f_2704[iVar126]++;
									}
								}
								if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar126] < 11)
								{
									if (func_450(Var13) && !func_498(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										if (func_498(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[iVar126] < 0)
											{
												Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
										if (func_524(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar119] = STATS::_0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar119] = STATS::_0x38491439B6BA7F7D(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[iVar126]++;
									}
								}
							}
							func_526(&Var13);
							iVar124++;
						}
						STATS::_0x71B008056E5692D6();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[iVar126] == -1 && func_527())
							{
								if (Global_1835392.f_2704[iVar126] >= 1)
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
								}
								else
								{
									func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
								}
								Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
								Global_1835392.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						STATS::_0x71B008056E5692D6();
						func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_523(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_453(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar119, &Var13);
							if (func_527() && (func_498(&Var13, &Var0) || func_498(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[iVar126][0].f_59 > 1 || Global_1835392[iVar126][0].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[iVar126][0]), {Var13.f_13}, 16);
										Global_1835392[iVar126][0].f_32 = { Var13 };
										Global_1835392[iVar126][0].f_59 = Var13.f_96;
										if (func_524(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][0].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][0].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][0].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										Global_1835392[iVar126][0].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126][iVar119].f_67[iVar120] = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126][iVar119].f_60[iVar120] = STATS::_0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar126]++;
											}
										}
										else if (Global_1835392.f_2704[iVar126] == 1 && Global_1835392.f_2775[iVar126] == -1)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
									else if (Global_1835392.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
										if (func_524(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_58 = 0;
											}
										}
										if (func_456(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_16), {Var13.f_19.f_1[1].f_8}, 16);
										}
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
										Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_67[iVar120] = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_60[iVar120] = STATS::_0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
								}
							}
							func_526(&Var13);
							iVar119++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar126);
					func_371(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar126] == -1 && func_527())
			{
				if (Global_1835392.f_2704[iVar126] >= 1)
				{
					func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
				}
				else
				{
					func_525(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
				}
				Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
				Global_1835392.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_522(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_531(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0]), &(Param0.f_3.f_1[iVar0])) || !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0].f_8), &(Param0.f_3.f_1[iVar0].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_532(var uParam0)
{
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_42), 5);
			func_507(Global_1835392.f_2826, -1);
		}
	}
}

void func_533(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_534(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	sVar0 = "";
	if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
		{
			if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_455(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var53))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var53);
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	if (bVar52)
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sVar0);
		UI::_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	else
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		GAMEPLAY::SET_BIT(&iVar66, 7);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar66);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sVar0);
		GRAPHICS::_0xAE4E8157D9ECF087();
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::_0x67A5589628E0CFF6())
			{
				if (NETWORK::_0xBA9775570DB788CF())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
					{
						if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_455(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var67))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var67);
								if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		GAMEPLAY::SET_BIT(&iVar80, 7);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(*iParam1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar80);
		if (bVar52)
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sVar0);
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
			GRAPHICS::_0xAE4E8157D9ECF087();
		}
		else
		{
			GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sVar0);
			GRAPHICS::_0xAE4E8157D9ECF087();
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		*iParam1++;
	}
}

void func_535(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_TITLE");
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam1);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam2[iVar0]);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
		iVar0++;
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_536(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam1);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				UI::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				UI::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_537(var uParam0, int iParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_538(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_539(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_540(bool bParam0)
{
	if (bParam0)
	{
		func_543();
	}
	func_541(4, -1);
	func_541(6, -1);
	func_541(7, -1);
	func_541(3, -1);
	func_541(1, -1);
	func_541(2, -1);
	func_541(11, -1);
	func_541(13, -1);
	func_541(14, -1);
	func_541(16, -1);
}

void func_541(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1377170.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377170.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_542(int iParam0)
{
	if (func_142())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_143(0))
		{
			func_138(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_543()
{
	Global_2537071.f_4532 = 0;
}

void func_544(bool bParam0)
{
	if (bParam0)
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_262(&(Local_51.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
	else
	{
		func_263(&(Local_51.f_119), 0, 0, 1, 1);
		func_262(&(Local_51.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		func_545(&(Local_51.f_119), 1);
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_156(&(uParam0->f_1), 1024);
	}
	else
	{
		func_155(&(uParam0->f_1), 1024);
	}
}

int func_546(var uParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_547(var uParam0)
{
	if (Global_110668 != 0 && Global_111638.f_19038.f_12[Global_110668].f_4 == 0)
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	else
	{
		func_263(uParam0, 0, 0, 1, 1);
		func_262(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		func_262(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_529)
		{
			func_262(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_530 = 0;
		}
		else
		{
			iLocal_530 = 0;
		}
	}
	func_545(&(Local_51.f_119), 1);
}

void func_548()
{
	func_577();
	func_430();
	func_576(&(Local_2412.f_358[0].f_24), 0, 0, "PilotDispatch", 0, 1);
	func_576(&uLocal_2082, 0, 0, "PilotDispatch", 0, 1);
	func_565(&Local_2412);
	func_549(&Local_2412, Local_51.f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2412.f_358[0].f_9))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2412.f_358[0].f_9, 4);
	}
}

void func_549(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_564(&Local_2412);
			break;
		
		case 1:
			func_563(&Local_2412);
			break;
		
		case 2:
			func_562(&Local_2412);
			func_561(&(Local_2412.f_27[2]), 1);
			func_561(&(Local_2412.f_27[3]), 1);
			break;
		
		case 3:
			func_560(&Local_2412);
			break;
		
		case 4:
			func_550(&Local_2412);
			break;
	}
}

void func_550(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 32;
	func_559(&(uParam0->f_27[0]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_559(&(uParam0->f_27[7]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_559(&(uParam0->f_27[13]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_559(&(uParam0->f_27[19]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_559(&(uParam0->f_27[20]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_559(&(uParam0->f_27[21]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_559(&(uParam0->f_27[22]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_559(&(uParam0->f_27[23]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_559(&(uParam0->f_27[24]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_559(&(uParam0->f_27[25]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_559(&(uParam0->f_27[26]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_559(&(uParam0->f_27[27]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_559(&(uParam0->f_27[28]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_559(&(uParam0->f_27[29]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_559(&(uParam0->f_27[30]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_559(&(uParam0->f_27[31]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}

void func_552(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_16 = { Param1 };
	uParam0->f_19 = fParam4;
}

void func_553(var uParam0, int iParam1, var uParam2)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_554(uParam2, &(Local_51.f_243));
}

void func_554(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		func_556(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_118(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 12);
		}
		func_555(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_121(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_555(var uParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*uParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_556(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_557(char* sParam0, char* sParam1)
{
	StringCopy(sParam0, sParam1, 32);
}

void func_558(var uParam0)
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_559(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_560(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 28;
	func_559(&(uParam0->f_27[0]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_559(&(uParam0->f_27[5]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_559(&(uParam0->f_27[7]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_559(&(uParam0->f_27[12]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_559(&(uParam0->f_27[15]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_559(&(uParam0->f_27[18]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_559(&(uParam0->f_27[19]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_559(&(uParam0->f_27[20]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[21]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_559(&(uParam0->f_27[22]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[23]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_559(&(uParam0->f_27[24]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_559(&(uParam0->f_27[25]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[26]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_559(&(uParam0->f_27[27]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_561(var uParam0, int iParam1)
{
	func_334(&(uParam0->f_9), iParam1);
}

void func_562(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 21;
	func_559(&(uParam0->f_27[0]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_559(&(uParam0->f_27[4]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_559(&(uParam0->f_27[6]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_559(&(uParam0->f_27[7]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_559(&(uParam0->f_27[9]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_559(&(uParam0->f_27[13]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_559(&(uParam0->f_27[14]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_559(&(uParam0->f_27[16]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_559(&(uParam0->f_27[19]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_559(&(uParam0->f_27[20]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_563(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 19;
	func_559(&(uParam0->f_27[0]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_559(&(uParam0->f_27[3]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_559(&(uParam0->f_27[4]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_559(&(uParam0->f_27[7]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_559(&(uParam0->f_27[11]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_559(&(uParam0->f_27[12]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_559(&(uParam0->f_27[14]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_559(&(uParam0->f_27[15]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_559(&(uParam0->f_27[18]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_564(var uParam0)
{
	func_565(uParam0);
	uParam0->f_12 = 18;
	func_559(&(uParam0->f_27[0]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_559(&(uParam0->f_27[1]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[2]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_559(&(uParam0->f_27[3]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_559(&(uParam0->f_27[4]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[5]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_559(&(uParam0->f_27[6]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_559(&(uParam0->f_27[7]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_559(&(uParam0->f_27[8]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_559(&(uParam0->f_27[9]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_559(&(uParam0->f_27[10]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_559(&(uParam0->f_27[11]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_559(&(uParam0->f_27[12]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_559(&(uParam0->f_27[13]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_559(&(uParam0->f_27[14]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_559(&(uParam0->f_27[15]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_559(&(uParam0->f_27[16]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_559(&(uParam0->f_27[17]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_558(&(uParam0->f_358[0]));
	func_557(&(uParam0->f_358[0]), "Player");
	func_553(&(uParam0->f_358[0]), PLAYER::PLAYER_PED_ID(), Local_51.f_1);
	func_552(&(uParam0->f_358[0]), Local_2307, 154.8464f);
	func_551(&(uParam0->f_358[0]), 0, -1692214353, -2122757008);
}

void func_565(var uParam0)
{
	func_4(&(uParam0->f_3));
	if (Local_51.f_10 != -1)
	{
		fVar0 = func_35(Local_51.f_10);
		if (fVar0 <= 0f || fVar0 > Local_51.f_12[Local_51.f_10])
		{
			fVar0 = Local_51.f_12[Local_51.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_573(uParam0);
	uParam0->f_12 = 0;
	func_566(uParam0);
	uParam0->f_13 = 0;
}

void func_566(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_567(uParam0, iVar0);
		iVar0++;
	}
}

void func_567(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_569(&(uParam0->f_358[iParam1]));
	func_568(&(uParam0->f_358[iParam1]));
}

void func_568(char* sParam0)
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_51.f_3 };
	sParam0->f_19 = Local_51.f_6;
	sParam0->f_20 = Local_51.f_7;
	sParam0->f_21 = Local_51.f_8;
	sParam0->f_22 = Local_51.f_9;
}

void func_569(var uParam0)
{
	func_572(uParam0);
	func_571(uParam0);
	func_570(uParam0);
}

void func_570(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_51.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8, 0) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9, 0)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					AI::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_571(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_572(var uParam0)
{
	func_83(&(uParam0->f_10));
}

void func_573(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_574(uParam0, iVar0);
		iVar0++;
	}
}

void func_574(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1]));
	func_79(&(uParam0->f_27[iParam1]));
	func_575(&(uParam0->f_27[iParam1]));
}

void func_575(var uParam0)
{
	*uParam0 = { Local_51.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_576(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_577()
{
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_578(&(Global_1835013.f_73));
	func_578(&(Global_1835013.f_142));
	func_578(&(Global_1835013.f_211));
	func_578(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_514(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_578(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_579(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(1);
		GAMEPLAY::SET_FADE_OUT_AFTER_DEATH(0);
		func_173(1);
		Global_94002 = 1;
	}
	else
	{
		GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(0);
		GAMEPLAY::SET_FADE_OUT_AFTER_DEATH(1);
		func_173(0);
		Global_94002 = 0;
	}
}

void func_580(var uParam0)
{
	*uParam0 = unk_0x67D02A194A2FC2BD("COUNTDOWN");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", 0, -1);
}

int func_581(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	return 0;
}

void func_582()
{
	if (!iLocal_2406)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSP_START");
							iLocal_2406 = 1;
						}
					}
				}
			}
		}
	}
}

int func_583(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_584(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 24, 31);
	*uParam2 = GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 16, 23);
	*uParam3 = GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 8, 15);
	*uParam4 = GAMEPLAY::GET_BITS_IN_RANGE(uParam0, 0, 7);
}

var func_585(int iParam0)
{
	UI::GET_HUD_COLOUR(iParam0, &uVar0, &uVar1, &uVar2, &uVar3);
	return func_586(uVar0, uVar1, uVar2, uVar3);
}

var func_586(var uParam0, var uParam1, var uParam2, var uParam3)
{
	GAMEPLAY::SET_BITS_IN_RANGE(&uVar0, 24, 31, uParam0);
	GAMEPLAY::SET_BITS_IN_RANGE(&uVar0, 16, 23, uParam1);
	GAMEPLAY::SET_BITS_IN_RANGE(&uVar0, 8, 15, uParam2);
	GAMEPLAY::SET_BITS_IN_RANGE(&uVar0, 0, 7, uParam3);
	return uVar0;
}

int func_587()
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	func_597(23, 1);
	func_596(10);
	switch (Local_2321.f_5)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			GAMEPLAY::_SET_WEATHER_TYPE_OVER_TIME("EXTRASUNNY", 10f);
			func_595();
			func_594(2, 0);
			func_594(1, 0);
			func_594(3, 0);
			func_594(4, 0);
			func_594(5, 0);
			func_594(6, 0);
			func_594(7, 0);
			GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Local_5280, 600f, 0, 0, 0, 0, 0, 0);
			func_588(&Local_2412, Local_51.f_10);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_2321.f_5 = 2;
			}
			else
			{
				Local_2321.f_5 = 1;
			}
			break;
		
		case 1:
			if (func_358(1000))
			{
				Local_2321.f_5 = 2;
			}
			break;
		
		case 2:
			UI::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
			while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", 0, -1);
			Local_2321.f_5 = 3;
			break;
		
		case 3:
			if (UI::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				Local_2321.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2321.f_5 = 5;
			func_11(&(Local_2321.f_2));
			break;
		
		case 5:
			if (func_2(&(Local_2321.f_2), 0.5f))
			{
				Local_2321.f_5 = 6;
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_2321.f_5 = 9;
			}
			else
			{
				Local_2321.f_5 = 7;
				func_11(&(Local_2321.f_2));
			}
			break;
		
		case 7:
			if (func_2(&(Local_2321.f_2), 0.5f))
			{
				Local_2321.f_5 = 8;
			}
			break;
		
		case 8:
			if (func_581(5000))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				Local_2321.f_5 = 9;
			}
			break;
		
		case 9:
			func_4(&(Local_2321.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_588(var uParam0, int iParam1)
{
	Local_51 = 0;
	Local_51.f_1 = 0;
	Local_51.f_2 = 2;
	Local_51.f_3 = { Local_2307 };
	Local_51.f_6 = 154.8464f;
	Local_51.f_7 = 4;
	Local_51.f_8 = -1736970383;
	Local_51.f_9 = -2122757008;
	StringCopy(&(Local_51.f_24[0]), "AIRPORT", 32);
	Local_51.f_12[0] = 165f;
	StringCopy(&(Local_51.f_24[1]), "BRIDGEBINGE", 32);
	Local_51.f_12[1] = 80f;
	StringCopy(&(Local_51.f_24[2]), "VINEWOOD", 32);
	Local_51.f_12[2] = 165f;
	StringCopy(&(Local_51.f_24[3]), "BRIDGEWORK", 32);
	Local_51.f_12[3] = 165f;
	StringCopy(&(Local_51.f_24[4]), "ALTITUDE", 32);
	Local_51.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			func_593(&Local_2412);
			break;
		
		case 1:
			func_592(&Local_2412);
			break;
		
		case 2:
			func_591(&Local_2412);
			break;
		
		case 3:
			func_590(&Local_2412);
			break;
		
		case 4:
			func_589(&Local_2412);
			break;
	}
}

void func_589(var uParam0)
{
}

void func_590(var uParam0)
{
}

void func_591(var uParam0)
{
}

void func_592(var uParam0)
{
}

void func_593(var uParam0)
{
}

void func_594(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_30926, iParam0);
	StringCopy(&(Global_30927[iParam0]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_30982[iParam0] = iParam1;
}

void func_595()
{
	Global_22211.f_5 = 1;
}

void func_596(int iParam0)
{
	func_311();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_597(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_31015, iParam0);
	}
}

void func_598()
{
}

void func_599()
{
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_364();
	func_430();
	func_577();
	func_597(23, 0);
	func_579(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::CLEAR_FOCUS();
	func_311();
	func_238(0);
	func_256(0);
	GAMEPLAY::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MGTR_COMPLETE");
	AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_607(2, 0);
	func_607(1, 0);
	func_607(3, 0);
	func_607(4, 0);
	func_607(5, 0);
	func_607(6, 0);
	func_607(7, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_605(&(Local_51.f_118));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	UI::CLEAR_ADDITIONAL_TEXT(3, 1);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PilotSchool");
	func_603(&Local_2412, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SPRTaxi");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SPRTaxi");
	UI::CLEAR_HELP(1);
	UI::CLEAR_PRINTS();
	func_602();
	UI::DISPLAY_HUD(1);
	UI::DISPLAY_RADAR(1);
	func_253();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_600();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_600()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95677[iVar0] && !Global_95677[iVar0].f_1)
		{
			if (Global_95677[iVar0].f_3 == 0)
			{
				if ((Global_95677[iVar0].f_5 != 88 && Global_95677[iVar0].f_5 != 89) && Global_95677[iVar0].f_5 != 92)
				{
					func_601(Global_95677[iVar0].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_601(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0] = 1;
		}
	}
	else
	{
		Global_92729[iParam0] = 0;
	}
}

void func_602()
{
	Global_22211.f_5 = 0;
}

void func_603(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_565(uParam0);
	}
	else
	{
		func_604(uParam0);
	}
	func_137(0);
	func_27(&(uParam0->f_17));
	UI::CLEAR_HELP(1);
	UI::CLEAR_PRINTS();
	if (iLocal_2405)
	{
		func_61("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2405 = 0;
	}
}

void func_604(var uParam0)
{
}

void func_605(var uParam0)
{
	func_606(*uParam0);
}

void func_606(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_607(int iParam0, bool bParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_30926, iParam0))
	{
		if (!bParam1)
		{
			GAMEPLAY::CLEAR_BIT(&Global_30926, iParam0);
			StringCopy(&(Global_30927[iParam0]), "NULL", 24);
			Global_30982[iParam0] = bParam1;
		}
	}
}

