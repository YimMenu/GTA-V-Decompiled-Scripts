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
	iLocal_18 = 3;
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
	iLocal_48 = 1;
	iLocal_55 = 1;
	iLocal_77 = 1;
	fLocal_1198 = 120f;
	fLocal_1199 = 0f;
	fLocal_1201 = 1f;
	fLocal_1202 = 0f;
	fLocal_1203 = 1f;
	fLocal_1204 = 30f;
	fLocal_1206 = 1f;
	fLocal_1207 = 5f;
	fLocal_1208 = 1f;
	fLocal_1209 = 1f;
	fLocal_1210 = 100f;
	fLocal_1211 = 100f;
	fLocal_1212 = 0f;
	fLocal_1213 = 7000f;
	fLocal_1214 = 0f;
	fLocal_1215 = 0f;
	fLocal_1216 = 0.3f;
	fLocal_1217 = 0.5f;
	fLocal_1218 = 50f;
	iLocal_1804 = -1;
	iLocal_1812 = -1;
	iLocal_1813 = -1;
	Local_3027 = { 500f, 500f, 500f };
	Local_3355 = { 0f, 0f, 0.18f };
	iLocal_3377 = 1877891248;
	iLocal_3378 = 886894755;
	Local_3489 = { 1670.683f, 4839.668f, 41.0695f };
	Local_3492 = { 0.612f, -30.7126f, 6.6732f };
	Local_3495 = { 0.6626f, -27.7333f, 6.3245f };
	Local_3561 = { 50f, 50f, 50f };
	Local_3564 = { 150f, 150f, 150f };
	Local_3567 = { 1f, 1f, 1f };
	Local_3601 = { 6.5f, 6.5f, 6.5f };
	iLocal_3633 = 1962660298;
	iLocal_3634 = 920306374;
	bLocal_6010 = true;
	bLocal_6011 = true;
	bLocal_6013 = true;
	bLocal_6025 = true;
	iLocal_6028 = 1;
	Local_6091 = { 3f, -10f, 1.5f };
	Local_6094 = { 0f, 0f, 0f };
	Local_6103 = { 2134.759f, 4789.899f, 39.9702f };
	Local_6106 = { 2149.737f, 4798.472f, 40.1071f };
	fLocal_6110 = 24.9014f;
	fLocal_6113 = 100f;
	fLocal_6114 = -1f;
	fLocal_6117 = 55.4847f;
	func_372("Traffick Ground Start");
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("OJDG_STOP");
		func_372("FORCE CLEANUP HAS OCCURRED: setting us up for a replay!!!");
		func_371();
		if (!func_370())
		{
			func_368(&Global_110289, 2);
			func_345(SCRIPT::GET_THIS_SCRIPT_NAME());
		}
		func_343();
	}
	if (!ScriptParam_0.f_1)
	{
		func_338(Global_111638.f_19978.f_1, &ScriptParam_0);
		func_337(&Local_4356, ScriptParam_0.f_2);
		func_332(ScriptParam_0, 1);
		func_372("LAUNCHING VIA PROGRESSION");
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_6135 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
	else
	{
		func_337(&Local_4356, ScriptParam_0.f_2);
		func_372("LAUNCHING VIA DEBUG SCRIPT");
		func_332(ScriptParam_0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
	{
		func_329();
	}
	Local_4259 = { ScriptParam_0 };
	func_327();
	MISC::CLEAR_AREA_OF_VEHICLES(2149.328f, 4805.958f, 40.2094f, 100f, 0, 1, 0, 0, 0, 0);
	MISC::CLEAR_AREA(2158.593f, 4787.735f, 40.0958f, 5f, 1, 0, 0, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	uLocal_6150 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(45.9679f, 4507.976f, 2784.227f) - Vector(10f, 10f, 10f), Vector(45.9679f, 4507.976f, 2784.227f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_6151 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(49.1813f, 4198.859f, 2890.96f) - Vector(10f, 10f, 10f), Vector(49.1813f, 4198.859f, 2890.96f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	uLocal_6150 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(40.0605f, 4760.453f, 2030.663f) - Vector(800f, 800f, 800f), Vector(40.0605f, 4760.453f, 2030.663f) + Vector(800f, 800f, 800f), 0, 1, 1, 1);
	uLocal_6153 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_4356[0].f_107 - Vector(50f, 50f, 50f), Local_4356[0].f_107 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	func_325(1);
	func_324();
	Local_4255.f_3 = 0;
	if (bLocal_6014)
	{
		iLocal_4253 = 84090;
		func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO IN SMUGGLERS MODE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(2164.038f, 4825.627f, 35.61375f, 1899.278f, 4697.752f, 49.08641f, 100f, 0, 0, 1);
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1757.215f, 4570.54f, 30.47729f, 1385.558f, 4495.364f, 62.74048f, 100f, 0, 0, 1);
	}
	if (ScriptParam_0.f_55 == 1f)
	{
		bLocal_6043 = true;
	}
	func_320(&bLocal_6025, &bLocal_6011, &bLocal_6013, &bLocal_6010, &uLocal_6009, &bLocal_6014, &uLocal_6017, &uLocal_6012, &uLocal_6018, &bLocal_6019);
	HUD::DISPLAY_RADAR(1);
	Local_5506.f_36 = 1;
	if (Global_111638.f_19978.f_1 >= 5)
	{
		if (func_319())
		{
			iLocal_6059 = 1;
		}
		else
		{
			iLocal_6059 = 0;
		}
	}
	if (Global_111638.f_19978.f_1 == 4)
	{
		iLocal_6059 = 1;
	}
	Local_4255.f_3 = 0;
	if (func_318())
	{
		Global_98744.f_12[0]++;
		iLocal_6122 = func_317();
		if (iLocal_6122 == 0)
		{
			func_316(Local_6106, fLocal_6117, 1, 0);
		}
	}
	else
	{
		Global_98744.f_12[0] = 0;
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("PRISON_TOWERS", 1);
	Local_3492 = { Local_3492 };
	Local_3495 = { Local_3495 };
	func_312("MG_TRAF_AVAIL", 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((((uLocal_6003 || bLocal_6022) || bLocal_6004) || bLocal_6007) || Local_5695.f_49)
		{
			bLocal_6005 = true;
		}
		else
		{
			bLocal_6005 = false;
		}
		if (bLocal_6025 && iLocal_6026)
		{
			func_311(&uLocal_6118, &(Local_4356.f_1102), &(Local_4356.f_1103), &uLocal_6034, &bLocal_6038, &uLocal_6035, "ARMS_GR08", &uLocal_5830);
		}
		if (iLocal_3648 > 3 && iLocal_3648 < 14)
		{
			if (bLocal_6006)
			{
				func_308(&iLocal_6135, &uLocal_6141, &uLocal_6136, &uLocal_6142, &Local_6078, &iLocal_6119, &bLocal_6023, &bLocal_6005, &bLocal_6008, &uLocal_6009, &iLocal_6028, 0, 1, 1, 1);
			}
		}
		if (!bLocal_6006)
		{
			if (func_307(&iLocal_6135))
			{
				if (!iLocal_6068)
				{
					HUD::CLEAR_HELP(1);
					func_306("DTRFKGR_HELP_17", -1);
					iLocal_6068 = 1;
				}
			}
		}
		func_302(&uLocal_3382, 7f, 1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			HUD::SET_MINIMAP_COMPONENT(2, 0, -1);
			if (func_48())
			{
				func_343();
			}
		}
		if (((iLocal_3648 > 6 && !bLocal_6007) && !bLocal_6004) && !bLocal_6050)
		{
			func_47(&iLocal_6135, &bLocal_6022, &uLocal_6136, &uLocal_6142, &Local_6078, &cLocal_5995, &fLocal_6114, &iLocal_6119, &uLocal_6141, &bLocal_6023, 1, 0, 1, 1);
		}
		func_44();
		if (iLocal_3648 > 2)
		{
			if (func_6())
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	HUD::CLEAR_PRINTS();
	AUDIO::STOP_SCRIPTED_CONVERSATION(1);
	AUDIO::TRIGGER_MUSIC_EVENT("OJDG_STOP");
	func_368(&Global_110289, 2);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		switch (iLocal_3643)
		{
			case 6:
				sVar0 = "SAN_FAIL1";
				break;
			
			case 7:
				sVar0 = "DTRSHRD_FAIL_09";
				break;
			
			case 8:
				sVar0 = "DTRSHRD_FAIL_11";
				break;
			
			case 3:
				sVar0 = "DTRSHRD_FAIL_02";
				break;
			
			case 4:
				sVar0 = "DTRSHRD_FAIL_14";
				break;
			
			case 10:
				sVar0 = "DTRSHRD_FAIL_03";
				break;
			
			case 11:
				sVar0 = "DTRSHRD_FAIL_15";
				break;
			
			case 12:
				sVar0 = "DTRSHRD_FAIL_15";
				break;
			
			case 5:
				sVar0 = "DTRSHRD_FAIL_05";
				break;
			
			case 14:
				sVar0 = "DTRSHRD_FAIL_06";
				break;
			
			case 16:
				sVar0 = "DTRSHRD_FAIL_07";
				break;
			
			case 9:
				sVar0 = "DTRSHRD_FAIL_08";
				break;
			
			case 17:
				sVar0 = "DTRSHRD_FAIL_01";
				break;
			
			case 0:
				break;
			
			case 15:
				sVar0 = "DTRSHRD_FAIL_16";
				break;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_4(Local_6103, fLocal_6110);
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_3(sVar0);
	}
	func_371();
	func_345(SCRIPT::GET_THIS_SCRIPT_NAME());
	while (!func_2())
	{
		SYSTEM::WAIT(0);
	}
	func_343();
}

int func_2()
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

void func_3(char* sParam0)
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

void func_4(struct<3> Param0, float fParam3)
{
	if (func_5(Global_76862, 0f, 0f, 0f, 0))
	{
		Global_76862 = { Param0 };
		Global_76865 = fParam3;
	}
}

bool func_5(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_6()
{
	if (func_36())
	{
		iLocal_3643 = 14;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_9) && !ENTITY::IS_ENTITY_DEAD(uLocal_5543.f_9, 0))
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(uLocal_5543.f_9, 1), 0.5f, 1, 1))
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uLocal_5543.f_9, 1), 26, 1056964608, 1, 0, 1065353216, 0);
			OBJECT::DELETE_OBJECT(&(uLocal_5543.f_9));
			iLocal_3643 = 15;
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_5574.f_5) && !ENTITY::IS_ENTITY_DEAD(Local_5574.f_5, 0))
	{
		if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_5574.f_5, 1), 0.5f, 1, 1))
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_5574.f_5, 1), 26, 1056964608, 1, 0, 1065353216, 0);
			OBJECT::DELETE_OBJECT(&(Local_5574.f_5));
			iLocal_3643 = 15;
			return 1;
		}
	}
	if (func_35())
	{
		iLocal_3643 = 14;
		return 1;
	}
	if (bLocal_6051)
	{
		iLocal_3643 = 4;
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) || !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!bLocal_6005 && !bLocal_6022) && !bLocal_6008)
		{
			if (bLocal_6023)
			{
				if (func_33("DTRSHRD_03", iLocal_6135, iLocal_6119))
				{
					iLocal_3643 = 3;
					return 1;
				}
			}
		}
	}
	if (uLocal_5543.f_14)
	{
		if (bLocal_6038)
		{
			if (bLocal_6022)
			{
				iLocal_3643 = 11;
				return 1;
			}
			else
			{
				iLocal_3643 = 10;
				return 1;
			}
		}
	}
	if (bLocal_6061)
	{
		iLocal_3643 = 12;
		return 1;
	}
	if (bLocal_6013)
	{
		if (fLocal_6113 <= 0f)
		{
			if (bLocal_6019)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_5695.f_2))
				{
					FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_5695.f_2, 1), 3, 1056964608, 1, 0, 1065353216, 0);
					iLocal_3643 = 17;
				}
			}
			else
			{
				VEHICLE::EXPLODE_VEHICLE(iLocal_6135, 1, 0);
				iLocal_3643 = 7;
			}
			return 1;
		}
	}
	if (!bLocal_6014 && !bLocal_6019)
	{
		if (func_32())
		{
			iLocal_3643 = 8;
			return 1;
		}
	}
	if (bLocal_6014)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5574[0]) && !ENTITY::IS_ENTITY_DEAD(Local_5574[0], 0))
		{
			if (Local_5574.f_20[0])
			{
				if (ENTITY::IS_ENTITY_IN_WATER(Local_5574[0]))
				{
					iLocal_3643 = 7;
					return 1;
				}
			}
		}
		if (Local_5574.f_27)
		{
			iLocal_3643 = 16;
			return 1;
		}
		if (Local_5574.f_22)
		{
			FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_5560, 1), 26, 1056964608, 1, 0, 1065353216, 0);
			OBJECT::DELETE_OBJECT(&Local_5560);
			iLocal_3643 = 17;
			return 1;
		}
		if (Local_5574.f_41)
		{
			iLocal_3643 = 14;
			return 1;
		}
	}
	if (bLocal_6019)
	{
		if (Local_5695.f_48)
		{
			iLocal_3643 = 16;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_3648 < 14)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6135, 0))
			{
				func_372("myVehicle IS NOT DRIVEABLE, FAILED MISSION");
				iLocal_3643 = 7;
				return 1;
			}
		}
	}
	bVar0 = true;
	if ((((bLocal_6022 || bLocal_6004) || (bLocal_6007 && !bLocal_6006)) || bLocal_6019) || bLocal_6005)
	{
		fLocal_3361 = func_31(&Local_6078);
		bVar0 = false;
	}
	if (bVar0)
	{
		if (func_7(&Local_6078, &uLocal_5830))
		{
			iLocal_3643 = 14;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_6135, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_6135, 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_6135, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_6135, 3, 30000))
		{
			func_372("FAILING - VEHICLE HAS BECOME UNDRIVEABLE/STUCK");
			iLocal_3643 = 9;
			return 1;
		}
	}
	return 0;
}

int func_7(var uParam0, var uParam1)
{
	if (!func_5(Local_3358, *uParam0[0], 0))
	{
		iLocal_3368 = 0;
		func_372("SETTING bGrabbedDistance TO FALSE");
	}
	if (!func_5(*uParam0[0], 0f, 0f, 0f, 0))
	{
		fLocal_3361 = func_31(uParam0);
		if (!iLocal_3368)
		{
			fLocal_3362 = (fLocal_3361 + SYSTEM::TO_FLOAT(800));
			fLocal_3363 = (fLocal_3361 + 300f);
			Local_3358 = { *uParam0[0] };
			iLocal_3368 = 1;
		}
	}
	if (fLocal_3361 > fLocal_3363)
	{
		if (!iLocal_3372)
		{
			func_8(uParam1, "ARMSAUD", "ARMS_AB_WRN", 9, 0, 0, 0);
			iLocal_3372 = 1;
		}
	}
	if (fLocal_3361 > fLocal_3362)
	{
		func_372("RETURNING TRUE ON ABANDON DISTANCE - NORMAL");
		return 1;
	}
	return 0;
}

bool func_8(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_9(sParam2, iParam3, 0);
}

int func_9(char* sParam0, int iParam1, bool bParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_27();
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
				func_19();
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
				if (func_18())
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
			if (func_17())
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
			func_16();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_15();
		func_10();
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
		func_29();
	}
	return 0;
}

void func_10()
{
	if (!func_11())
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

int func_11()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_14())
	{
		return 0;
	}
	if (func_12(PLAYER::PLAYER_ID()))
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

bool func_12(int iParam0)
{
	return func_13(iParam0, 20);
}

bool func_13(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_14()
{
	return -1;
}

void func_15()
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

void func_16()
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

int func_17()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
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

void func_19()
{
	if (func_26(14))
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
		Global_19486 = func_20();
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

int func_20()
{
	func_21();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_21()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_24(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_23(PLAYER::PLAYER_PED_ID());
			if (func_22(iVar0) && (!func_26(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_22(Global_111638.f_2358.f_539.f_4321))
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

bool func_22(int iParam0)
{
	return iParam0 < 3;
}

int func_23(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_24(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_24(int iParam0)
{
	if (func_22(iParam0))
	{
		return func_25(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_25(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_26(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

float func_31(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	fLocal_3361 = SYSTEM::VDIST(Var0, *uParam0[0]);
	return fLocal_3361;
}

int func_32()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Local_4356[0][iVar0].f_2 && Local_4356[0][iVar0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543[iVar0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_5543[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_5543[iVar0], 0))
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

int func_33(char* sParam0, int iParam1, int iParam2)
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	switch (iLocal_3365)
	{
		case 0:
			if (SYSTEM::VDIST2(Var0, Var3) > 625f)
			{
				if (!iLocal_3371)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_34(sParam0, 7500, 1);
						iLocal_3371 = 1;
						iLocal_3365 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
			{
				if ((MISC::GET_GAME_TIMER() - iParam2) > 20000)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_34(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

bool func_35()
{
	return Global_98796.f_345 > 0;
}

int func_36()
{
	if (!bLocal_6006)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (uLocal_5543.f_14)
		{
			if (!func_43(&uLocal_6184))
			{
				func_40(&uLocal_6184);
			}
			else if (SYSTEM::VDIST2(Var0, Local_4356[0].f_107) > 10000f)
			{
				if (func_37(&uLocal_6184) > 60f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_37(var uParam0)
{
	if (func_43(uParam0))
	{
		if (func_39(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_38(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_38(bool bParam0)
{
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
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
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_39(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_40(var uParam0)
{
	if (!func_43(uParam0))
	{
		func_41(uParam0);
	}
}

void func_41(var uParam0)
{
	func_42(uParam0, 0f);
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_38(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_43(var uParam0)
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_44()
{
	if (!iLocal_6074)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (!func_46())
				{
					func_45(&uLocal_5830, 2, 0, "TREVOR", 0, 1);
					func_8(&uLocal_5830, "ARMSAUD", "ARMS_WANTED", 9, 0, 0, 0);
					iLocal_6074 = 1;
				}
			}
		}
	}
}

void func_45(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_46()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, float fParam6, var uParam7, var uParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	if (!*uParam1)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			func_34("DTRSHRD_01", 7500, 1);
			if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
			{
				HUD::SET_BLIP_ROUTE((*uParam3)[0], 0);
			}
			iVar3 = 0;
			while (iVar3 < *uParam3)
			{
				if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar3]))
				{
					HUD::REMOVE_BLIP(uParam3[iVar3]);
				}
				iVar3++;
			}
			if (HUD::DOES_BLIP_EXIST(*uParam8))
			{
				HUD::REMOVE_BLIP(uParam8);
				func_372("REMOVING myVehicleBlip VIA UPDATE_LAW");
			}
			*uParam1 = 1;
		}
	}
	else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) && *uParam1)
	{
		HUD::CLEAR_PRINTS();
		*uParam1 = 0;
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1) };
		*fParam6 = SYSTEM::VDIST(*uParam4[0], Var0);
		if (bParam13)
		{
			func_34(sParam5, 7500, 1);
		}
		if (!*bParam9)
		{
			iVar3 = 0;
			while (iVar3 < *uParam3)
			{
				if (!func_5(*uParam4[iVar3], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					(*uParam3)[iVar3] = HUD::ADD_BLIP_FOR_COORD(*uParam4[iVar3]);
					if (bParam11)
					{
						HUD::SET_BLIP_COLOUR((*uParam3)[iVar3], 1);
					}
				}
				iVar3++;
			}
			if (!bLocal_3369 && iParam12)
			{
				iVar3 = 0;
				while (iVar3 < *uParam2)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar3]) && !ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar3], 0))
					{
						(*uParam3)[iVar3] = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar3]);
						func_372("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar3++;
				}
			}
		}
		if (*bParam9)
		{
			if (!HUD::DOES_BLIP_EXIST(*uParam8))
			{
				*uParam8 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
				HUD::SET_BLIP_COLOUR(*uParam8, 3);
				func_372("ADDING IN BLIP FOR myVehicle VIA UPDATE_LAW");
				func_34("DTRSHRD_03", 7500, 1);
			}
		}
		*uParam7 = MISC::GET_GAME_TIMER();
		func_372("RESETING outOfVehicleTime VIA UPDATE_LAW");
		iLocal_3368 = 0;
		if (bParam10)
		{
			if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
			{
			}
		}
	}
}

int func_48()
{
	switch (iLocal_3648)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_301();
				if (!func_43(&uLocal_6169))
				{
					func_40(&uLocal_6169);
				}
				iLocal_3648 = 1;
			}
			else
			{
				iLocal_3648 = 2;
			}
			break;
		
		case 1:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			func_298(iLocal_6135, -1, 1);
			iLocal_3648 = 2;
			break;
		
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				MISC::CLEAR_AREA_OF_VEHICLES(2149.328f, 4805.958f, 40.2094f, 100f, 0, 1, 0, 0, 0, 0);
				CAM::DO_SCREEN_FADE_IN(500);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (!iLocal_6024 && !ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
			{
				func_34("DTRFKGR_01", 7500, 1);
				StringCopy(&cLocal_5995, "DTRFKGR_01", 32);
				iLocal_6135 = VEHICLE::CREATE_VEHICLE(Local_4356.f_1109[0], Local_4356.f_1096, Local_4356.f_1099, 1, 1, 0);
				uLocal_6141 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_6135);
				HUD::SET_BLIP_COLOUR(uLocal_6141, 3);
				iLocal_6024 = 1;
			}
			if (func_296())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_6135 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6135, 1, 1);
						VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_6135, 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_6135, 0);
						AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_6135, 0);
						VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_6135, 1);
						ENTITY::SET_ENTITY_HEALTH(iLocal_6135, 2000, 0);
						VEHICLE::SET_VEHICLE_STRONG(iLocal_6135, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_6135, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_6135, 1);
						func_295();
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
				}
				HUD::REMOVE_BLIP(&uLocal_6141);
				Local_6078[0] = { Local_4356[0].f_107 };
				PED::ADD_RELATIONSHIP_GROUP("policeChasers", &iLocal_5693);
				PED::ADD_RELATIONSHIP_GROUP("carChaserEnemies", &(Local_5648.f_36));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 1862763509, iLocal_5693);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_5693, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, Local_5648.f_36);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_5648.f_36, 1862763509);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, Local_5648.f_36);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_5648.f_36, -1533126372);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_5693, Local_5648.f_36);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_5648.f_36, iLocal_5693);
				func_372("SETTING RELATIONSHIP GROUPS");
				func_45(&uLocal_5830, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				if (!func_43(&uLocal_6160))
				{
					func_40(&uLocal_6160);
				}
				func_294();
				func_293();
				SYSTEM::SETTIMERA(0);
				iLocal_6041 = 0;
				Local_4255.f_3 = 0;
				if (func_292() == 0)
				{
					uLocal_3354 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_drug_traffic_flare_L", Local_4356[0].f_107, 0f, 0f, 0f, 0.5f, 0, 0, 0, 0);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uLocal_3354, 1f, 0.84f, 0f, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_START");
					func_291(&(Local_4356[0].f_107), 0);
					iLocal_3607 = OBJECT::CREATE_OBJECT(445804908, Local_4356[0].f_107, 1, 1, 0);
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_START");
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					func_372("GIVING BACK PLAYER CONTROL");
				}
				iLocal_3648 = 6;
			}
			break;
		
		case 6:
			if (!bLocal_6023)
			{
				if (Global_111638.f_19978.f_1 == 0)
				{
					fLocal_6115 = 15000f;
				}
				else if (Global_111638.f_19978.f_1 == 1)
				{
					fLocal_6115 = 9000f;
					fLocal_6116 = 7500f;
				}
				else if (Global_111638.f_19978.f_1 == 2)
				{
					fLocal_6115 = 6000f;
				}
				else if (Global_111638.f_19978.f_1 == 3)
				{
					fLocal_6115 = 6000f;
					fLocal_6116 = 9500f;
				}
				else if (Global_111638.f_19978.f_1 == 4)
				{
					fLocal_6115 = 7000f;
				}
				else
				{
					fLocal_6115 = 5000f;
					fLocal_6116 = 5000f;
				}
				if (IntToFloat(SYSTEM::TIMERA()) > fLocal_6116)
				{
					bLocal_3576 = true;
				}
				if (!iLocal_6075)
				{
					if (IntToFloat(SYSTEM::TIMERA()) > fLocal_6115)
					{
						uLocal_6142[0] = HUD::ADD_BLIP_FOR_COORD(Local_4356[0].f_107);
						if (HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6142[0], "DTRFKGR_BLIP02");
						}
						Local_6078[0] = { Local_4356[0].f_107 };
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
						{
							AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_6135, 1);
						}
						iLocal_6075 = 1;
					}
				}
				if (IntToFloat(SYSTEM::TIMERA()) > fLocal_6115)
				{
					if (!iLocal_6040)
					{
						if (bLocal_6025)
						{
							iLocal_6026 = 1;
						}
						func_288();
						iLocal_6040 = 1;
					}
				}
			}
			func_283();
			func_280();
			if (func_292() == 0)
			{
				func_279();
				func_277();
				func_276();
				func_275();
				if (!bLocal_6036 && !bLocal_6037)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, 50f, 50f, 50f, 0, 1, 0) && func_274(&iLocal_6135))
					{
						if (fLocal_3364 < Local_4356.f_1104)
						{
							bLocal_6036 = true;
							if (!func_46())
							{
								func_8(&uLocal_5830, "ARMSAUD", "ARMS_GR09", 9, 1, 0, 0);
							}
						}
						else if (fLocal_3364 < Local_4356.f_1103 && fLocal_3364 > Local_4356.f_1104)
						{
							bLocal_6037 = true;
							if (!func_46())
							{
								func_8(&uLocal_5830, "ARMSAUD", "ARMS_GR09", 9, 1, 0, 0);
							}
							bLocal_6050 = true;
						}
						else
						{
							bLocal_6058 = true;
						}
					}
				}
				if (uLocal_5543.f_14)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, 35f, 35f, 35f, 0, 1, 0) && func_274(&iLocal_6135))
					{
						iLocal_6026 = 0;
						if (!func_43(&uLocal_6178))
						{
							func_40(&uLocal_6178);
							func_306("DTRFKGR_HELP_05", -1);
						}
						else if (func_37(&uLocal_6178) > 20f)
						{
							bLocal_6062 = true;
							bLocal_6036 = true;
						}
					}
				}
				if (bLocal_6036)
				{
					func_263(&Local_4356, &uLocal_3639, &uLocal_6126, &uLocal_6003, &Local_5506, &bLocal_6010, &Local_6078, &bLocal_6022, &iLocal_6135, &iLocal_6119, &bLocal_6050, &uLocal_5830, &bLocal_6006, &bLocal_6023, &cLocal_5995, &uLocal_6142);
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, Local_3567, 0, 1, 0) || func_262()) || (!ENTITY::IS_ENTITY_DEAD(uLocal_5543.f_9, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_5543.f_9, 1), Local_3567, 0, 1, 0)))
				{
					if ((uLocal_5543.f_14 && func_274(&iLocal_6135)) || (uLocal_5543.f_14 && func_261()))
					{
						func_260();
						func_259(&uLocal_3501, 0, 0);
						if (bLocal_6058)
						{
							if (!func_43(&uLocal_6175))
							{
								func_40(&uLocal_6175);
							}
							AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_SAFE_PACKAGE");
						}
						func_41(&uLocal_6172);
						func_372("GO TO STAGE_DESTINATION VIA PICKUP UPDATE");
						iLocal_3648 = 13;
					}
				}
			}
			if (bLocal_6014 && bLocal_3576)
			{
				func_257(&Local_4356, &Local_5574, &bLocal_6015);
				if (bLocal_6015)
				{
					func_206(&Local_4356, &Local_5574, &uLocal_3641, &Local_6078, &uLocal_6142, &cLocal_5995, &bLocal_6006, &bLocal_6007, &uLocal_3642, &iLocal_6135, iLocal_4253, &Local_4255, &uLocal_6148, &Local_5560, &uLocal_3645, &uLocal_5830, uLocal_4254, &uLocal_6020, &bLocal_6023, &bLocal_6022, &uLocal_3646, &iLocal_6119);
				}
				if (Local_5574.f_26)
				{
					func_372("EARLY BREAK");
					bLocal_6007 = false;
					iLocal_6041 = 0;
					iLocal_3648 = 13;
					break;
				}
			}
			break;
		
		case 13:
			func_205();
			if (Global_111638.f_19978.f_1 == 0)
			{
				func_279();
			}
			else if (bLocal_6027)
			{
				if (func_43(&uLocal_6187))
				{
					if (func_37(&uLocal_6187) > 5f)
					{
						func_279();
					}
				}
			}
			func_204();
			func_202();
			func_201();
			if (!bLocal_6005 && !bLocal_6004)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0))
					{
						func_198(&uLocal_3501, Local_4356.f_218[0].f_110, 0, 0, 1, 1, 1);
					}
					else
					{
						func_259(&uLocal_3501, 0, 0);
					}
				}
				else
				{
					func_259(&uLocal_3501, 0, 0);
				}
			}
			if (bLocal_6037 || bLocal_6036)
			{
				if (!iLocal_6052)
				{
					if (func_263(&Local_4356, &uLocal_3639, &uLocal_6126, &uLocal_6003, &Local_5506, &bLocal_6010, &Local_6078, &bLocal_6022, &iLocal_6135, &iLocal_6119, &bLocal_6050, &uLocal_5830, &bLocal_6006, &bLocal_6023, &cLocal_5995, &uLocal_6142))
					{
						if (bLocal_6023)
						{
							func_34("DTRSHRD_03", 7500, 1);
							StringCopy(&cLocal_5995, "DTRSHRD_03", 32);
							Local_6078[0] = { Local_4356.f_218[0].f_110 };
							if (!HUD::DOES_BLIP_EXIST(uLocal_6141))
							{
								uLocal_6141 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_6135);
								HUD::SET_BLIP_COLOUR(uLocal_6141, 3);
							}
						}
						SYSTEM::SETTIMERA(0);
						func_372("***********************STARTING CAR CHASE TIMER VIA AMBUSH - 01***********************");
						bLocal_6011 = true;
						bLocal_6063 = true;
						iLocal_6052 = 1;
					}
				}
			}
			else if (Global_111638.f_19978.f_1 > 0)
			{
				if (!bLocal_6011)
				{
					SYSTEM::SETTIMERA(0);
					func_372("***********************STARTING CAR CHASE TIMER VIA AMBUSH - 02***********************");
					bLocal_6011 = true;
					bLocal_6063 = true;
				}
			}
			if (!iLocal_6055)
			{
				if (iLocal_6054 && !bLocal_6036)
				{
					if (func_292() == 0)
					{
						if (!bLocal_6023)
						{
							if (!func_46())
							{
								func_34("DTRFKGR_03a", 7500, 1);
								iLocal_6055 = 1;
							}
						}
					}
				}
			}
			if (bLocal_6014 && bLocal_6015)
			{
				if (func_206(&Local_4356, &Local_5574, &uLocal_3641, &Local_6078, &uLocal_6142, &cLocal_5995, &bLocal_6006, &bLocal_6007, &uLocal_3642, &iLocal_6135, iLocal_4253, &Local_4255, &uLocal_6148, &Local_5560, &uLocal_3645, &uLocal_5830, uLocal_4254, &uLocal_6020, &bLocal_6023, &bLocal_6022, &uLocal_3646, &iLocal_6119))
				{
					bLocal_6007 = false;
					func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO IN SMUGGLERS MODE AGAIN!!!");
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					SYSTEM::SETTIMERB(0);
					func_372("***********************STARTING CAR CHASE TIMER VIA SMUGGLERS***********************");
					bLocal_6011 = true;
					bLocal_6064 = true;
					bLocal_6014 = false;
				}
			}
			if (func_197())
			{
				if (func_153(&uLocal_3638, &uLocal_6166, &uLocal_6142, &Local_4356, &Local_5648, &cLocal_5995, &Local_6078, &bLocal_6027, &bLocal_6004, bLocal_6005, &bLocal_6022, &bLocal_6023, &uLocal_6141, &uLocal_6012, &uLocal_6190, &uLocal_6191, &uLocal_6020, &uLocal_5830, &iLocal_6119, &iLocal_6135, &iLocal_6059))
				{
					if (!func_43(&uLocal_6187))
					{
						func_40(&uLocal_6187);
						func_41(&uLocal_6172);
						iLocal_6049 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
					{
						if (!bLocal_6023)
						{
							uLocal_6142[0] = HUD::ADD_BLIP_FOR_COORD(Local_6078[0]);
							if (HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6142[0], "DTRFKGR_BLIP07");
							}
							func_34("DTRFKGR_03a", 7500, 1);
							StringCopy(&cLocal_5995, "DTRFKGR_03a", 32);
						}
					}
					else if (bLocal_6023)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_6142[0]));
						}
					}
				}
			}
			func_152(&uLocal_5830, &iLocal_6059, &iLocal_6135, bLocal_6027);
			bLocal_6016 = true;
			if (bLocal_6005)
			{
				bLocal_6016 = false;
			}
			if (bLocal_6005 || bLocal_6022)
			{
				iLocal_6065 = 0;
			}
			else
			{
				iLocal_6065 = 1;
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_6135, Local_4356.f_218[0].f_110, 5f, 5f, 2f, iLocal_6065, 1, 0) || (!func_274(&iLocal_6135) && !func_151(iLocal_6135)))
			{
				bLocal_6016 = false;
			}
			else if (!bLocal_6005)
			{
				bLocal_6016 = true;
			}
			if (bLocal_6016)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("OJDG_COMPLETE");
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_6135, 5f, 2, 0);
				func_150(&Local_5560);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0);
				}
				fLocal_6111 = func_37(&uLocal_6160);
				fLocal_6111 = (fLocal_6111 * 1000f);
				if (Global_111638.f_19978.f_1 >= 20)
				{
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME1", "", SYSTEM::FLOOR(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
				}
				else
				{
					sLocal_6125 = func_146();
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME1", "", SYSTEM::FLOOR(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
					func_148(&(Local_3649.f_26), 6, "DTRSHRD_WEAP", sLocal_6125, 0, 0, 0, 0);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("OJDG_COMPLETE");
				func_372("GOING TO STATE - STAGE_ENDING_CUTSCENE_RUN");
				iLocal_3648 = 15;
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_6135, Local_4356.f_218[0].f_110, 5f, 5f, 2f, iLocal_6065, 1, 0))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (!iLocal_6072)
						{
							func_34("DTRSHRD_01", 7500, -1);
							iLocal_6072 = 1;
						}
					}
					else if (bLocal_6005 && !iLocal_6073)
					{
						func_34("DTRSHRD_06", 7500, -1);
						iLocal_6073 = 1;
					}
				}
			}
			break;
		
		case 15:
			if (HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_6142[0]));
			}
			if (!iLocal_6039)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("TREVOR_SMALL_01");
				iLocal_6039 = 1;
			}
			if (func_142(&(Local_3649.f_26), 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				func_141(&uLocal_6193, 1, 0, 0, 1);
				func_140(&uLocal_6193, "DTRSHRD_CONT", 2, 215, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				func_139();
				func_372("GOING TO STATE - STAGE_ENDING_CUTSCENE");
				iLocal_3648 = 14;
			}
			break;
		
		case 14:
			if (SYSTEM::TIMERA() > 7000 && !iLocal_6076)
			{
				func_133(&uLocal_6193, 1128792064, 1, 0, 1, 1065353216);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					iLocal_6076 = 1;
				}
			}
			bLocal_6077 = func_100(&(Local_3649.f_26), 0, 1065353216, 0, 0, 0);
			if (iLocal_6076 || SYSTEM::TIMERA() > 12000)
			{
				func_99(&(Local_3649.f_26));
				if (bLocal_6077)
				{
					func_97(&(Local_3649.f_26));
					func_50();
					iLocal_6046 = 1;
					func_49();
					func_372("GOING TO STATE - STAGE_DRIVE_OFF");
					iLocal_3648 = 19;
				}
			}
			break;
		
		case 19:
			func_97(&(Local_3649.f_26));
			func_372("INSIDE STATE - STAGE_DRIVE_OFF");
			return 1;
			break;
	}
	return 0;
}

void func_49()
{
	iVar0 = 0;
	while (iVar0 < Local_5560.f_1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_5560.f_1[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_5560.f_1[iVar0]));
			func_372("DELETING CUTSCENE CARGO");
		}
		iVar0++;
	}
}

void func_50()
{
	if (!iLocal_6067)
	{
		Local_4259 = Local_4259;
		switch (Global_111638.f_19978.f_1)
		{
			case 0:
				func_94(158, 0, 0);
				break;
			
			case 1:
				func_94(159, 0, 0);
				break;
			
			case 2:
				func_94(160, 0, 0);
				break;
			
			case 3:
				func_94(161, 0, 0);
				break;
			
			case 4:
				func_94(162, 0, 0);
				break;
		}
		if (Global_111638.f_19978.f_1 < 5)
		{
			Global_111638.f_19978.f_1++;
		}
		else if (Global_111638.f_19978.f_1 >= 5)
		{
			Global_111638.f_19978.f_1 = 5;
			Global_111638.f_19978.f_4++;
		}
		iVar1 = (Global_111638.f_19978.f_2 + Global_111638.f_19978.f_1);
		STATS::STAT_GET_INT(1720023068, &iVar0, -1);
		if (iVar0 < iVar1)
		{
			STATS::STAT_SET_INT(1720023068, iVar1, 1);
			func_93(16, iVar1);
		}
		if (Global_111638.f_19978.f_2 >= 5 && Global_111638.f_19978.f_1 >= 5)
		{
			func_80(16, 1);
		}
		if (!iLocal_6033)
		{
			if (bLocal_6021)
			{
				fLocal_6111 = func_37(&uLocal_6160);
				if (bLocal_6043)
				{
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME", "", SYSTEM::FLOOR(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
				}
				else
				{
					sLocal_6125 = func_146();
					func_149(&(Local_3649.f_26), "DTRSHRD_MPASS", "DTRSHRD_GRT", 0);
					func_148(&(Local_3649.f_26), 9, "DTRSHRD_TIME", "", SYSTEM::FLOOR(fLocal_6111), 0, 0, 0);
					func_148(&(Local_3649.f_26), 3, "DTRSHRD_MONEY", "", 5000, 0, 0, 0);
					func_148(&(Local_3649.f_26), 6, "DTRSHRD_WEAP", sLocal_6125, 0, 0, 0, 0);
				}
				iLocal_3648 = 14;
				iLocal_6033 = 1;
			}
		}
		func_55(2, 5000);
		func_54(1, 0);
		func_51();
		iLocal_6067 = 1;
	}
}

void func_51()
{
	func_52();
}

int func_52()
{
	if (func_53(0))
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

bool func_53(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_76870, 0);
}

void func_54(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_55(int iParam0, int iParam1)
{
	func_57(Global_111638.f_24899[iParam0], func_79(iParam0), iParam1, 0, 0);
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
	STATS::STAT_GET_INT(func_56(iParam0, 1), &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(func_56(iParam0, 1), iVar0, 1);
}

int func_56(int iParam0, int iParam1)
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

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_78(iParam0) == 3)
	{
		return;
	}
	if (func_78(iParam0) == 4)
	{
		return;
	}
	func_58(func_78(iParam0), 1, iParam1, iParam2, 0);
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

int func_58(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_77();
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
					func_76(99, 1);
					func_75(-656546900, iParam3);
					break;
				
				case 1:
					func_75(-2098183071, iParam3);
					break;
				
				case 2:
					func_75(1578119842, iParam3);
					break;
			}
			func_74(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_69(5))
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
							func_75(-1190521599, iParam3);
							break;
						
						case 1:
							func_75(490143716, iParam3);
							break;
						
						case 2:
							func_75(121069433, iParam3);
							break;
					}
					if (func_69(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_75(219506691, iParam3);
							break;
						
						case 1:
							func_75(1871505786, iParam3);
							break;
						
						case 2:
							func_75(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_75(27639974, iParam3);
							break;
						
						case 1:
							func_75(422258364, iParam3);
							break;
						
						case 2:
							func_75(316202960, iParam3);
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
							func_75(1806738963, iParam3);
							break;
						
						case 1:
							func_75(1576781520, iParam3);
							break;
						
						case 2:
							func_75(671882196, iParam3);
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
									func_75(408653638, iParam3);
									break;
								
								case 1:
									func_75(-424799277, iParam3);
									break;
								
								case 2:
									func_75(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_75(2038531975, iParam3);
									break;
								
								case 1:
									func_75(-572903575, iParam3);
									break;
								
								case 2:
									func_75(-953947924, iParam3);
									break;
							}
							if (func_69(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_75(-445823242, iParam3);
									break;
								
								case 1:
									func_75(-1386757215, iParam3);
									break;
								
								case 2:
									func_75(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_75(-1744069936, iParam3);
									break;
								
								case 1:
									func_75(799609312, iParam3);
									break;
								
								case 2:
									func_75(181688102, iParam3);
									break;
							}
							func_68(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_76(95, iParam3);
					break;
				
				case 1:
					func_76(97, iParam3);
					break;
				
				case 2:
					func_76(96, iParam3);
					break;
			}
			func_76(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_61(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_61(iVar1);
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
					func_75(-330339780, iParam3);
					break;
				
				case 1:
					func_75(1697564429, iParam3);
					break;
				
				case 2:
					func_75(1674823841, iParam3);
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
	func_60(iParam0);
	if (Global_41431 == 15)
	{
		func_59(0);
	}
	return 1;
}

void func_59(bool bParam0)
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

void func_60(int iParam0)
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

void func_61(int iParam0)
{
	if (iParam0 == 8)
	{
		func_67(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_67(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_67(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_67(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_64(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_64(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_64(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_64(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_64(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_64(8274, 0, -1, 1, 0);
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
	else if (MISC::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_63()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_63()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_62(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_62(int iParam0)
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

int func_63()
{
	iVar0 = 0;
	return iVar0;
}

void func_64(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_65(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_65(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_66();
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

int func_66()
{
	return Global_1312745;
}

int func_67(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_66();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		uVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		uVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		uVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		uVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_68(int iParam0)
{
	func_76(93, iParam0);
	func_76(29, iParam0);
	func_76(30, iParam0);
}

bool func_69(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_71(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_71(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_71(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_71(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar1 = func_70(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar3 = func_70(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar5 = func_70(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar7 = func_70(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar9 = func_70(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar11 = func_70(8274, -1, 0);
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
	return MISC::IS_BIT_SET(Global_2097152[func_63()].f_6174.f_10, iParam0);
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_65(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_71(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_66();
	}
	iVar1 = func_73(iParam0, iParam1);
	uVar2 = func_72(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_72(int iParam0)
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

int func_73(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_66();
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

int func_74(bool bParam0)
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
		func_93(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_80(27, 1);
	return 1;
}

void func_75(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_76(int iParam0, int iParam1)
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

void func_77()
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

int func_78(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

int func_79(int iParam0)
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

int func_80(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_81(iParam0, iParam1);
}

int func_81(int iParam0, int iParam1)
{
	if (func_26(14) && !func_92(iParam0))
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
	if (func_91(&Global_4270065))
	{
		if (func_89(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_82(&Global_4270065, iParam0))
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

int func_82(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	func_85(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_83(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_83(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_26(14) && !func_92(iParam1))
	{
		return 0;
	}
	if (func_89(uParam0, iParam1))
	{
		return 0;
	}
	if (func_88(uParam0) < 0f)
	{
		func_87(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_84(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_85(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_86(uParam0, iVar0);
		iVar0++;
	}
	func_87(uParam0, (Global_4270064 - 0.5f));
}

void func_86(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_87(var uParam0, float fParam1)
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

float func_88(var uParam0)
{
	return uParam0->f_80;
}

bool func_89(var uParam0, int iParam1)
{
	return func_90(uParam0, iParam1) != -1;
}

int func_90(var uParam0, int iParam1)
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

bool func_91(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_92(int iParam0)
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

int func_93(int iParam0, int iParam1)
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

void func_94(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_67((891 + iParam0), 1, -1, 1);
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
			STATS::_UPDATE_STAT_INT(-2044299740, 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(86701099, 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(-375571184, 50, 0);
		}
	}
	if (bVar0)
	{
		func_95();
	}
}

void func_95()
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
			if (!MISC::IS_BIT_SET(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					STATS::_UPDATE_STAT_INT(-2122623864, Global_111361, 0);
					MISC::SET_BIT(&(Global_111638.f_10189.f_3856), 14);
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
		func_93(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_96() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_52();
				}
			}
		}
	}
}

int func_96()
{
	return Global_30768;
}

void func_97(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_53(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_98(0);
}

void func_98(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

void func_99(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

int func_100(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (MISC::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_127(0);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_23(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_126(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_126(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_126((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_126(30f) - func_126(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_98(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_105(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_104(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_104(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_104(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_101(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_101(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_104((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_104((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_104((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_104((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_98(0);
			}
			return !bVar0;
		}
	}
	func_98(0);
	return 1;
}

void func_101(var uParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_103(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_102("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_103(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_102("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_102(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_103(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

float func_104(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_105(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_125() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_102(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_124(&(uParam0->f_13));
				}
				else
				{
					func_102(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_123();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_126((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_125());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_122(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_122(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_125()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_119((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_126(6f));
	fVar1 = (fVar1 + (func_126(30f) - func_126((2f * 2f))));
	fVar11 = (fVar2 - func_126((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_104((fVar11 / (0.6f * func_126(25f))), 0f, 1f);
		func_123();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_126((2f - 0.5f)) - 0.001388889f)), fVar6, func_118(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_126((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_126((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_104((fVar11 / (0.8f * func_126(25f))), 0f, 1f);
			func_115(uParam0, iVar17, (fVar1 + func_126(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_126(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_126((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_125())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_126(2f));
					fVar12 = func_104((fVar11 / (0.6f * func_126(25f))), 0f, 1f);
					func_123();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_126((2f * 0.5f))), fVar6, func_118(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_126((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_126((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_126((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_126(2f));
			fVar12 = func_104((fVar11 / (0.6f * func_126(25f))), 0f, 1f);
			func_123();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_126((2f * 0.5f))), fVar6, func_118(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_126((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_125())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_104((fVar11 / (0.8f * func_126(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_108(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_125()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_125()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_125()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_125()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_107(&(uParam0->f_550), fVar20, (fVar1 + func_126((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_123();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_126((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_106(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_126(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_126(30f) - 2f));
		}
	}
}

float func_106(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_107(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_123();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_108(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_114(iParam0), 64);
	StringCopy(&cVar16, func_111(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_110())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_110())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-892862129) > 0)
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
		Var37.x = (Var37.x * (func_109(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_109(iParam0) / fVar34));
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_22350.f_7029[29])) == -1487683087)
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

float func_109(int iParam0)
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

int func_110()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_111(int iParam0, bool bParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_113(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_112(&uVar3);
			}
		}
		else
		{
			return func_112(&(Global_22350.f_7029[iParam0]));
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

var func_112(var uParam0)
{
	return uParam0;
}

struct<13> func_113(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_114(int iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (MISC::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_113(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_112(&uVar0);
		}
		else
		{
			return func_112(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_115(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_117(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_123();
	if (uParam0->f_531[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_108(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_111(7, 0), (fParam4 - 0.006f), ((fParam2 + func_126(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_108(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_111(5, 0), (fParam4 - 0.006f), ((fParam2 + func_126(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_108(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_111(6, 0), (fParam4 - 0.006f), ((fParam2 + func_126(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_117(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	func_116(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_116(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_123();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_117(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_117(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_117(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_117(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_117(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_118(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_119(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_121(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_120(7, iVar0);
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

void func_120(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_121(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

float func_122(char* sParam0)
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_123()
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_124(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

float func_125()
{
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_126(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_127(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_131(0))
		{
			func_128(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_128(int iParam0)
{
	if (func_132())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_130())
		{
			func_129(1, 1);
		}
		else
		{
			func_129(0, 0);
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
	if (!func_17())
	{
		Global_19486.f_1 = 3;
	}
}

void func_129(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_131(0))
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

bool func_130()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

int func_131(int iParam0)
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

bool func_132()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_133(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_138(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_137(uParam0->f_1, 256) || (func_137(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_137(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
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
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6].f_14)
					{
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_103(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_102(uParam0->f_2[iVar6]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_137(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6].f_3[0].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_136(bParam4, func_136(func_137(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_135(&(uParam0->f_1), 256);
		func_134(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_135(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_136(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_137(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_138(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_135(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_139()
{
	Global_19671 = 0;
	func_29();
}

int func_140(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			MISC::SET_BIT(&(uParam0->f_2[iVar1].f_13), 0);
		}
		uParam0->f_2[iVar1].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_141(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_135(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_135(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_135(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_135(&(uParam0->f_1), 8192);
	}
}

int func_142(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_145(uParam0);
	func_144(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_143(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_101(uParam0, 1);
		}
		else
		{
			func_101(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_143(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_103(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_102("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_103(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_102("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_103(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_102("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_144(var uParam0)
{
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_117(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_13));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_145(var uParam0)
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

char* func_146()
{
	if (Global_111638.f_19978.f_1 == 0)
	{
		sLocal_6125 = "DTRSHRD_WEAP01";
		func_147(453432689, 100);
	}
	else if (Global_111638.f_19978.f_1 == 1)
	{
		sLocal_6125 = "DTRSHRD_WEAP02";
		func_147(324215364, 100);
	}
	else if (Global_111638.f_19978.f_1 == 2)
	{
		sLocal_6125 = "DTRSHRD_WEAP03";
		func_147(-1813897027, 5);
	}
	else if (Global_111638.f_19978.f_1 == 3)
	{
		sLocal_6125 = "DTRSHRD_WEAP04";
		func_147(487013001, 40);
	}
	else if (Global_111638.f_19978.f_1 == 4)
	{
		sLocal_6125 = "DTRSHRD_WEAP05";
		func_147(-1074790547, 5);
	}
	else if (Global_111638.f_19978.f_1 == 5)
	{
		switch (Global_111638.f_19978.f_4)
		{
			case 0:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 1:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 2:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 3:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 4:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			
			case 5:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 6:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 7:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 8:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 9:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			
			case 10:
				sLocal_6125 = "DTRSHRD_WEAP01";
				func_147(453432689, 100);
				break;
			
			case 11:
				sLocal_6125 = "DTRSHRD_WEAP02";
				func_147(324215364, 100);
				break;
			
			case 12:
				sLocal_6125 = "DTRSHRD_WEAP03";
				func_147(-1813897027, 5);
				break;
			
			case 13:
				sLocal_6125 = "DTRSHRD_WEAP04";
				func_147(487013001, 40);
				break;
			
			case 14:
				sLocal_6125 = "DTRSHRD_WEAP05";
				func_147(-1074790547, 5);
				break;
			}
	}
	return sLocal_6125;
}

void func_147(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0);
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, (iParam1 + iVar0), 0);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iParam0, 0, 0, 1);
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iParam0);
			if (iVar0 < iParam1)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, 0);
			}
		}
	}
}

void func_148(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_149(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_150(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

int func_151(int iParam0)
{
	if ((((ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, 0), 5f) > 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, 615608432, 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(5f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(iParam0, 0) + Vector(5f, 5f, 5f), 615608432, 0))
	{
		return 1;
	}
	return 0;
}

void func_152(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!iLocal_3526)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam2, 0))
					{
						if (*iParam1 && iLocal_3524)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							if (func_8(uParam0, "ARMSAUD", "ARMS_LOSTH", 9, 0, 0, 0))
							{
								iLocal_3526 = 1;
							}
						}
						else if (bLocal_3527)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
							if (iVar0 == 0)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 1)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 4)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 5)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
						}
						else if (bLocal_3528)
						{
							func_45(uParam0, 3, 0, "OSCAR", 0, 1);
							iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
							if (iVar0 == 0)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL01", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 1)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL02", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 2)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL03", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 3)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL04", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 4)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL05", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
							else if (iVar0 == 5)
							{
								if (func_8(uParam0, "ARMSAUD", "ARMS_KILL06", 9, 0, 0, 0))
								{
									iLocal_3526 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, var uParam6, bool bParam7, bool bParam8, bool bParam9, var uParam10, bool bParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, int iParam20)
{
	if (*bParam8)
	{
		iVar0 = 0;
		while (iVar0 < uParam4->f_18)
		{
			if (!HUD::DOES_BLIP_EXIST(uParam4->f_18[iVar0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
				{
					uParam4->f_18[iVar0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam4)[iVar0]);
					HUD::SET_BLIP_COLOUR(uParam4->f_18[iVar0], 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam4->f_18[iVar0], "DTRFKGR_BLIP04");
				}
			}
			iVar0++;
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*iParam20)
			{
				STREAMING::REQUEST_MODEL(788747387);
				func_372("REQUESTING BUZZARD");
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam3->f_1109[0]);
				func_372("REQUESTING CAR CHASERS");
			}
			if (*uParam13)
			{
				*uParam14 = 2046537925;
				*uParam15 = 368603149;
			}
			else if (*iParam20)
			{
				*uParam14 = 788747387;
				if (bLocal_3373)
				{
					*uParam15 = 1466037421;
				}
				else if (bLocal_3374)
				{
					*uParam15 = 62440720;
				}
				else if (bLocal_3375)
				{
					*uParam15 = 1822107721;
				}
			}
			else
			{
				*uParam14 = uParam3->f_1109[0];
				if (bLocal_3373)
				{
					*uParam15 = 1466037421;
				}
				else if (bLocal_3374)
				{
					*uParam15 = 62440720;
				}
				else if (bLocal_3375)
				{
					*uParam15 = 1822107721;
				}
			}
			STREAMING::REQUEST_MODEL(*uParam15);
			iVar0 = 0;
			while (iVar0 < uParam3->f_1105)
			{
				if (iLocal_3514[iVar0])
				{
					iLocal_3514[iVar0] = 0;
				}
				iVar0++;
			}
			if (*iParam20)
			{
				if (STREAMING::HAS_MODEL_LOADED(788747387) && STREAMING::HAS_MODEL_LOADED(*uParam15))
				{
					*uParam0 = 1;
				}
			}
			else if (STREAMING::HAS_MODEL_LOADED(*uParam14) && STREAMING::HAS_MODEL_LOADED(*uParam15))
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!bParam9)
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var4, &Var1, 1, 1077936128, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var1, 1) < 5f)
					{
						func_372("PLAYER IS IN DEFINED AREA FOR CAR CHASE");
						func_41(uParam1);
						func_372("SETTING RELATIONSHIP GROUPS");
						*uParam0 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_189(uParam3, uParam1, uParam4, uParam2, bParam8, uParam13, uParam14, uParam15, iParam20);
			if (*bParam8)
			{
				if (!func_43(&(uParam4->f_37)))
				{
					func_40(&(uParam4->f_37));
				}
				*uParam16 = 1;
				func_372("SETTING bOkayToRunTrap = TRUE VIA CAR CAR CHASE");
				*uParam6[0] = { 0f, 0f, 0f };
				if (!*uParam13)
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					func_372("SETTING WANTED MULTIPLIER TO 0.0 VIA CAR CHASE");
				}
				func_372("GOING TO STATE - CAR_CHASE_CHASE");
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (!bLocal_3553)
			{
				if (*uParam13)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3538[0], 0))
					{
						Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_3538[0], 1) };
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_3538[0], 0))
					{
						if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_3538[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_3538[0])) && SYSTEM::VDIST(Var4, Var7) < 100f)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
							bLocal_3553 = true;
						}
					}
				}
			}
			func_188(uParam17);
			func_189(uParam3, uParam1, uParam4, uParam2, bParam8, uParam13, uParam14, uParam15, iParam20);
			func_187(uParam17);
			if (func_155(uParam3, uParam4, uParam10, uParam13, iParam20))
			{
				func_372("GOING TO CAR_CHASE_FINAL");
				*uParam0 = 4;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < uParam4->f_27)
			{
				if (HUD::DOES_BLIP_EXIST(uParam4->f_27[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam4->f_27[iVar0]));
					func_372("REMOVING BLIP badGuyBlips");
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam4->f_18)
			{
				if (HUD::DOES_BLIP_EXIST(uParam4->f_18[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam4->f_18[iVar0]));
					func_372("REMOVING blipCarChasers");
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[0]))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED((*uParam4)[0]))
				{
					VEHICLE::DELETE_VEHICLE(uParam4[0]);
					PED::DELETE_PED(&(uParam4->f_9[0]));
					PED::DELETE_PED(&(uParam4->f_9[1]));
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam4[0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam4->f_9[0]));
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam4->f_9[1]));
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(330661258);
			if (!*uParam10 && !*bParam11)
			{
				if (!HUD::DOES_BLIP_EXIST((*uParam2)[0]))
				{
					(*uParam2)[0] = HUD::ADD_BLIP_FOR_COORD(uParam3->f_218[0].f_110);
					if (HUD::DOES_BLIP_EXIST((*uParam2)[0]))
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam2)[0], "DTRFKGR_BLIP07");
					}
					func_154("DTRFKGR_03a", 3500, 1);
				}
			}
			else if (*bParam11)
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam12))
				{
					*uParam12 = HUD::ADD_BLIP_FOR_ENTITY(*iParam19);
					HUD::SET_BLIP_COLOUR(*uParam12, 3);
					func_34("DTRSHRD_03", 3500, 1);
					StringCopy(sParam5, "DTRSHRD_03", 32);
				}
			}
			*uParam6[0] = { uParam3->f_218[0].f_110 };
			AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_MORE_DEAD");
			iLocal_3368 = 0;
			*uParam18 = MISC::GET_GAME_TIMER();
			func_372("COMPLETED CAR CHASE");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			func_372("SETTING WANTED MULTIPLIER TO 1.0 VIA CAR CHASE");
			*uParam0 = 5;
			*bParam7 = 1;
			*bParam8 = 0;
			return 1;
			break;
		
		case 5:
			break;
	}
	return 0;
}

void func_154(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 0);
}

int func_155(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
	{
		func_160(&uLocal_3501, (*uParam1)[0], 0, 0, 1, 1, 1);
	}
	else
	{
		func_259(&uLocal_3501, 0, 0);
	}
	if (func_157(uParam0, uParam1, uParam2, uParam3, uParam4) || func_156(uParam0, uParam1, uParam3))
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0, var uParam1, var uParam2)
{
	if (func_43(&uLocal_3554))
	{
		if ((func_37(&uLocal_3554) > 30f && !bLocal_3553) || (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), uParam0->f_218[0].f_110) < 100f && !bLocal_3553))
		{
			func_372("TIME UP ON STAGED POLICE CHASE");
			return 1;
		}
	}
	if (*uParam2)
	{
		if (bLocal_3553 && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar0], 0))
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_1108)
					{
						iVar2 = (iVar0 * uParam0->f_1108);
						if (!PED::IS_PED_INJURED(uParam1->f_9[(iVar1 + iVar2)]))
						{
							TASK::CLEAR_PED_TASKS(uParam1->f_9[(iVar1 + iVar2)]);
							TASK::TASK_VEHICLE_DRIVE_WANDER(uParam1->f_9[(iVar1 + iVar2)], (*uParam1)[iVar0], 20f, 786599);
							func_372("TASKING CAR TO WANDER VIA POLICE CHASE");
						}
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_9[(iVar1 + iVar2)]))
						{
							PED::DELETE_PED(&(uParam1->f_9[(iVar1 + iVar2)]));
							func_372("DELETING PEDS IN POLICE CAR CHASE");
						}
						iVar1++;
					}
					if (!ENTITY::IS_ENTITY_ON_SCREEN((*uParam1)[iVar0]))
					{
						VEHICLE::DELETE_VEHICLE(uParam1[iVar0]);
						func_372("DELETING CARS IN POLICE CAR CHASE");
					}
				}
				iVar0++;
			}
			return 1;
		}
	}
	return 0;
}

int func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bVar5 = true;
	bVar6 = true;
	bVar7 = true;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1105)
	{
		if (iLocal_3514[iVar1])
		{
			iVar0 = (iVar0 + (iVar1 * uParam0->f_1107));
			iVar0 = 0;
			while (iVar0 < uParam0->f_1107)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						if (*uParam4)
						{
							if (func_159(PLAYER::PLAYER_PED_ID(), (*uParam1)[iVar0], 1) < 90f || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), (*uParam1)[iVar0], 1)))
							{
								bLocal_3525 = true;
							}
							if (bLocal_3525)
							{
								if (!func_43(&uLocal_3535))
								{
									func_40(&uLocal_3535);
								}
								else if (func_37(&uLocal_3535) > (fLocal_3546 - 15f))
								{
									if (!bLocal_3530)
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											iVar8 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
										}
										else
										{
											iVar8 = 0;
										}
										TASK::TASK_HELI_MISSION(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar2], -1, 0), (*uParam1)[iVar2], iVar8, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 100f, -1f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 100, 50, -1082130432, 0);
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, uParam1->f_36);
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam1->f_36, 1862763509);
										func_372("bTaskedToWander = TRUE");
										bLocal_3530 = true;
									}
									if (bLocal_3530)
									{
										if (func_37(&uLocal_3535) > fLocal_3546)
										{
											iLocal_3524 = 1;
										}
									}
								}
							}
						}
						if (func_159(PLAYER::PLAYER_PED_ID(), (*uParam1)[iVar0], 1) < 500f)
						{
							bVar5 = false;
						}
						if (func_158(uParam0, uParam1))
						{
							uParam1->f_43 = 1;
						}
						if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam1->f_18[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_18[iVar0]));
							}
							if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], 0, 0), 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], 0, 0), 355471868) != 1)
								{
									TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], 0, 0), (*uParam1)[0], 0);
								}
							}
						}
						else if (*uParam4)
						{
							if (!bLocal_3530)
							{
								if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), 780511057) != 1)
									{
										TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uParam1->f_18[iVar0]))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_18[iVar0]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						if (ENTITY::IS_ENTITY_UPSIDEDOWN((*uParam1)[iVar0]))
						{
							if (!bLocal_3519)
							{
								bLocal_3519 = true;
								iLocal_3531 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							bLocal_3519 = false;
							iLocal_3531 = 0;
						}
						if (bLocal_3519)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_3531) > 12000)
							{
								func_372("EXPLODING VEHICLE");
								VEHICLE::EXPLODE_VEHICLE((*uParam1)[iVar0], 1, 0);
							}
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < (uParam0->f_1108 * uParam0->f_1107))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_9[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9[iVar0], 0))
					{
						bVar6 = false;
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_27[iVar0]))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_9[iVar0], 0))
							{
								uParam1->f_27[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_9[iVar0]);
								HUD::SET_BLIP_COLOUR(uParam1->f_27[iVar0], 1);
							}
						}
						if (func_159(PLAYER::PLAYER_PED_ID(), uParam1->f_9[iVar0], 1) < 500f)
						{
							bVar5 = false;
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1107)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						bVar7 = false;
					}
				}
				iVar0++;
			}
			if (!*uParam3)
			{
				if (((((bVar5 || bVar7) || *uParam2) || bVar6) || uParam1->f_43) || (*uParam4 && iLocal_3524))
				{
					bLocal_3513 = true;
					if (uParam1->f_43)
					{
						func_372("SECOND CHECK: carChaserArgs.bVehicleStuck = TRUE");
					}
					if (bVar5)
					{
						func_372("bPedsOutOfRange IS TRUE");
						bLocal_3527 = true;
						func_372("bCarChasersLost = TRUE");
					}
					if (bVar7)
					{
						func_372("bCarsDead IS TRUE");
						bLocal_3528 = true;
						func_372("bChasersDead = TRUE");
					}
					if (bVar6)
					{
						func_372("bPedsDead IS TRUE");
						bLocal_3528 = true;
						func_372("bChasersDead = TRUE");
					}
					if (*uParam2)
					{
						func_372("bWanted IS TRUE");
					}
				}
				else
				{
					bLocal_3513 = false;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_3513)
	{
		func_372("bWavesDone IS TRUE");
		if (((bVar5 || *uParam2) || uParam1->f_43) || (*uParam4 && iLocal_3524))
		{
			iVar2 = 0;
			while (iVar2 < *uParam1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar2], 0))
				{
					iVar3 = 0;
					while (iVar3 < uParam0->f_1108)
					{
						iVar4 = (iVar2 * uParam0->f_1108);
						if (!PED::IS_PED_INJURED(uParam1->f_9[(iVar3 + iVar4)]))
						{
							if (*uParam4)
							{
							}
							else
							{
								TASK::TASK_VEHICLE_DRIVE_WANDER(uParam1->f_9[(iVar3 + iVar4)], (*uParam1)[iVar2], 20f, 786599);
								func_372("TASKING VEHICLES TO WANDER");
							}
						}
						iVar3++;
					}
				}
				iVar2++;
			}
		}
		return 1;
	}
	return 0;
}

int func_158(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1107)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
			{
				if (func_159(PLAYER::PLAYER_PED_ID(), (*uParam1)[iVar0], 1) > 150f)
				{
					fVar1 = ENTITY::GET_ENTITY_SPEED((*uParam1)[iVar0]);
					if (fVar1 < 5f)
					{
						if (!func_43(&(uParam1->f_40)))
						{
							func_40(&(uParam1->f_40));
						}
						else
						{
							uParam1->f_44 = func_37(&(uParam1->f_40));
							if (uParam1->f_44 > 10f)
							{
								return 1;
							}
						}
					}
					else
					{
						uParam1->f_44 = 0f;
					}
				}
				else
				{
					uParam1->f_44 = 0f;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

float func_159(int iParam0, int iParam1, int iParam2)
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

void func_160(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_161(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_161(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_259(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_162(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_162(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_186(iVar0))
	{
		func_185();
	}
	if (func_184(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_179(uParam0, bParam7, bParam9, 0))
			{
				func_176(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_166(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_186(iVar0))
							{
								func_306(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_165(1);
								}
							}
						}
					}
				}
			}
			else if (func_166(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_186(iVar0))
						{
							func_306(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_186(sParam5))
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
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_259(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			if (!func_179(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
				{
					func_163(uParam0);
				}
			}
		}
	}
	else
	{
		func_259(uParam0, iVar0, 0);
	}
}

void func_163(var uParam0)
{
	if (func_184(PLAYER::PLAYER_PED_ID()))
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

int func_164(var uParam0)
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

int func_165(bool bParam0)
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

int func_166(char* sParam0)
{
	if (!func_167(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_186(sParam0)) || func_186("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_165(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_165(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_167(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_131(0))
	{
		return 0;
	}
	if (func_175())
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
	if ((func_174() || func_173(Global_4456448.f_232883)) || func_172())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_171(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_170(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_168(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_169(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_169(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_169(int iParam0, bool bParam1, bool bParam2)
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

int func_170(int iParam0, int iParam1)
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

int func_171(int iParam0, int iParam1)
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

var func_172()
{
	return Global_2450632.f_17;
}

bool func_173(int iParam0)
{
	return iParam0 == 51;
}

var func_174()
{
	return Global_2450632.f_16;
}

bool func_175()
{
	return MISC::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

void func_176(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_259(uParam0, 0, 0);
	}
	if (func_5(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_177())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_177()
{
	return func_178(PLAYER::PLAYER_ID());
}

int func_178(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

int func_179(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_183(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_164(uParam0))
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
						if (!func_183(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_182(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_183(bParam1, bParam2, bParam3))
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
					if (!func_183(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_182(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_182(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_183(bParam1, bParam2, bParam3))
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
						if (func_181(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_180(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_180(bParam1, bParam2, bParam3))
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
					else if (func_181(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_164(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_167(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_185();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_180(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_181(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_182(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_183(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_167(bParam0, bParam1, bParam2))
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

int func_184(int iParam0)
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

void func_185()
{
	MISC::SET_BIT(&Global_7357, 4);
}

bool func_186(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_187(var uParam0)
{
	if (!iLocal_3529)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_46())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_45(uParam0, 2, 0, "TREVOR", 0, 1);
					func_8(uParam0, "ARMSAUD", "ARMS_CCT", 9, 0, 0, 0);
					iLocal_3529 = 1;
				}
			}
		}
	}
}

void func_188(var uParam0)
{
	if (!iLocal_3522)
	{
		func_45(uParam0, 3, 0, "OSCAR", 0, 1);
		func_8(uParam0, "ARMSAUD", "ARMS_CC", 9, 0, 0, 0);
		iLocal_3522 = 1;
	}
	if (iLocal_3522 && !iLocal_3523)
	{
		if (!func_46())
		{
			func_154("DTRSHRD_06", 7500, 1);
			iLocal_3523 = 1;
		}
	}
}

void func_189(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	Var30 = { -5f, -35f, 0f };
	if (*uParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_3538[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_3538[1]))
		{
			return;
		}
	}
	iVar3 = 0;
	while (iVar3 < uParam0->f_1105)
	{
		if (!iLocal_3514[iVar3])
		{
			if (!func_43(uParam1))
			{
				func_372("SETTING bProcede 01");
				bVar42 = true;
			}
			else if (func_37(uParam1) > 10f)
			{
				func_372("SETTING bProcede 02");
				bVar42 = true;
			}
			if (bVar42)
			{
				func_372("INSIDE bProcede");
				iVar0 = 0;
				while (iVar0 < uParam0->f_1107)
				{
					iVar0 = (iVar0 + (iVar3 * uParam0->f_1107));
					func_372("CAR CHASERS PER WAVE 01");
					if (iVar3 == 0 && func_194(uParam5, &iVar0, &Var5, &uVar33))
					{
						if (uParam0->f_1107 > 1)
						{
							if (iVar0 > 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[0], 0))
									{
										Var5[iVar0] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam2)[0], Var30) };
									}
									else
									{
										Var5[iVar0] = { Var5[iVar0] };
									}
								}
							}
						}
						func_372("GOT BACKWARD POINT");
						if (!func_5(Var5[iVar0], 0f, 0f, 0f, 0))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(Var5[iVar0], 10f, 0, 0, 0, 0, 0, 0);
							if (!*uParam5)
							{
								if (*uParam8)
								{
									(*uParam2)[iVar0] = VEHICLE::CREATE_VEHICLE(788747387, Var5[iVar0], Var5[iVar0].f_1, (Var5[iVar0].f_2 + 100f), uVar33[iVar0], 1, 1, 0);
									fLocal_3546 = 65f;
								}
								else
								{
									(*uParam2)[iVar0] = VEHICLE::CREATE_VEHICLE(*uParam6, Var5[iVar0], uVar33[iVar0], 1, 1, 0);
								}
								if (*uParam8)
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON((*uParam2)[iVar0], 1, 1, 0);
									ENTITY::SET_ENTITY_PROOFS((*uParam2)[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
									VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED((*uParam2)[iVar0], 1);
									if (func_193())
									{
										VEHICLE::SET_VEHICLE_SEARCHLIGHT((*uParam2)[iVar0], 1, 1);
									}
								}
								else
								{
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY((*uParam2)[iVar0], 1084227584);
									VEHICLE::SET_VEHICLE_ENGINE_ON((*uParam2)[iVar0], 1, 1, 0);
									ENTITY::SET_ENTITY_PROOFS((*uParam2)[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
									VEHICLE::MODIFY_VEHICLE_TOP_SPEED((*uParam2)[iVar0], 100f);
									VEHICLE::ROLL_DOWN_WINDOWS((*uParam2)[iVar0]);
								}
							}
							else
							{
								Local_3547 = { (Var5[iVar0] - 3f), (Var5[iVar0].f_1 - 3f), Var5[iVar0].f_2 };
								Local_3550 = { (Var5[iVar0] + 3f), (Var5[iVar0].f_1 + 3f), Var5[iVar0].f_2 };
								fLocal_3544 = (uVar33[iVar0] - 45f);
								fLocal_3545 = (uVar33[iVar0] + 45f);
								MISC::CLEAR_AREA_OF_VEHICLES(Var5[iVar0], 50f, 0, 0, 0, 0, 0, 0);
								iLocal_3538[0] = VEHICLE::CREATE_VEHICLE(*uParam6, Local_3547, fLocal_3544, 1, 1, 0);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3538[0], 1084227584);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3538[0], 1, 0, 0);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3538[0], 0, 0, 0);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3538[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									uLocal_3541[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3538[0], 6, uParam0->f_1148, -1, 1, 1);
									WEAPON::GIVE_WEAPON_TO_PED(uLocal_3541[0], 453432689, 100, 1, 1);
									TASK::OPEN_SEQUENCE_TASK(&uVar4);
									TASK::TASK_LEAVE_VEHICLE(0, iLocal_3538[0], 256);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uVar4);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_3541[0], uVar4);
									TASK::CLEAR_SEQUENCE_TASK(&uVar4);
									PED::SET_PED_COMBAT_MOVEMENT(uLocal_3541[0], 1);
								}
								iLocal_3538[1] = VEHICLE::CREATE_VEHICLE(*uParam6, Local_3550, fLocal_3545, 1, 1, 0);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3538[1], 1084227584);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3538[1], 1, 0, 0);
								VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_3538[1], 0, 0, 0);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3538[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									uLocal_3541[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3538[1], 6, uParam0->f_1148, -1, 1, 1);
									WEAPON::GIVE_WEAPON_TO_PED(uLocal_3541[1], 453432689, 100, 1, 1);
									TASK::OPEN_SEQUENCE_TASK(&uVar4);
									TASK::TASK_LEAVE_VEHICLE(0, iLocal_3538[1], 256);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(uVar4);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_3541[1], uVar4);
									TASK::CLEAR_SEQUENCE_TASK(&uVar4);
									PED::SET_PED_COMBAT_MOVEMENT(uLocal_3541[1], 1);
								}
								func_372("CREATING EXTRA COPS");
								if (!func_43(&uLocal_3554))
								{
									func_40(&uLocal_3554);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3538[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_3538[1]))
								{
									*uParam4 = 1;
								}
							}
							func_372("CREATING VEHICLE(s) - WAVE ONE");
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam2)[iVar0], 0))
						{
							VEHICLE::MODIFY_VEHICLE_TOP_SPEED((*uParam2)[iVar0], 50f);
							func_372("VEHICLE IS DRIVABLE");
							iVar1 = 0;
							while (iVar1 < uParam0->f_1108)
							{
								func_372("CREATING PEDS IN CAR - WAVE ONE");
								iVar2 = (iVar0 * uParam0->f_1108);
								if (*uParam8)
								{
									if ((iVar1 + iVar2) == 0)
									{
										uParam2->f_9[(iVar1 + iVar2)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam2)[iVar0], 22, *uParam7, -1, 1, 1);
									}
									else if ((iVar1 + iVar2) == 1)
									{
										uParam2->f_9[(iVar1 + iVar2)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam2)[iVar0], 22, *uParam7, 1, 1, 1);
									}
								}
								else
								{
									uParam2->f_9[(iVar1 + iVar2)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam2)[iVar0], 22, *uParam7, uParam0->f_1127[iVar1], 1, 1);
								}
								if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_9[(iVar1 + iVar2)], 0))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam7);
									PED::SET_PED_COMBAT_ABILITY(uParam2->f_9[(iVar1 + iVar2)], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam2->f_9[(iVar1 + iVar2)], 3, 0);
									PED::SET_PED_CONFIG_FLAG(uParam2->f_9[(iVar1 + iVar2)], 42, 1);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam2->f_9[(iVar1 + iVar2)], uParam2->f_36);
									PED::SET_PED_ACCURACY(uParam2->f_9[(iVar1 + iVar2)], 35);
									if (*uParam8)
									{
										WEAPON::GIVE_WEAPON_TO_PED(uParam2->f_9[(iVar1 + iVar2)], -1074790547, -1, 1, 1);
									}
									else
									{
										WEAPON::GIVE_WEAPON_TO_PED(uParam2->f_9[(iVar1 + iVar2)], 324215364, -1, 1, 1);
									}
									PED::SET_PED_KEEP_TASK(uParam2->f_9[(iVar1 + iVar2)], 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_9[(iVar1 + iVar2)], 1);
									TASK::TASK_COMBAT_PED(uParam2->f_9[(iVar1 + iVar2)], PLAYER::PLAYER_PED_ID(), 0, 16);
									if (!VEHICLE::IS_VEHICLE_SEAT_FREE((*uParam2)[iVar0], -1, 0))
									{
										iVar43 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam2)[iVar0], -1, 0);
										iVar44 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam2)[iVar0], 1, 0);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar43, 7, 0);
										if (*uParam8)
										{
											TASK::TASK_HELI_MISSION(iVar43, (*uParam2)[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 6, 100f, -1f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 50, 25, -1082130432, 0);
											if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
											{
												PED::SET_PED_ACCURACY(iVar43, 5);
												VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar43, PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
												func_372("CALLING SET_VEHICLE_SHOOT_AT_TARGET");
											}
											if (ENTITY::DOES_ENTITY_EXIST(iVar44) && !ENTITY::IS_ENTITY_DEAD(iVar44, 0))
											{
												TASK::TASK_COMBAT_PED(iVar44, PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_ACCURACY(iVar43, 35);
												func_372("TASKING PASSENGER TO COMBAT");
											}
										}
										else
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar43, 7, 1);
											TASK::TASK_COMBAT_PED(iVar43, PLAYER::PLAYER_PED_ID(), 0, 16);
											func_372("TASKING DRIVER - ESCORT LEFT");
										}
									}
								}
								iVar1++;
							}
							if (!*uParam5)
							{
								uParam2->f_18[iVar0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0]);
								HUD::SET_BLIP_COLOUR(uParam2->f_18[iVar0], 1);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam2->f_18[iVar0], "DTRFKGR_BLIP04");
							}
							*uParam4 = 1;
							iLocal_3514[iVar3] = 1;
							AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_MORE_ENEMIES");
							if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[1]))
							{
							}
							func_372("bIsChaseActive AND bWaveActive = TRUE");
							if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
							{
								HUD::REMOVE_BLIP(uParam3[0]);
							}
							bVar42 = false;
							if (!func_43(uParam1))
							{
								func_40(uParam1);
								func_372("STARTING TIMER");
							}
							else
							{
								func_41(uParam1);
								func_372("RESTARTING TIMER");
							}
						}
					}
					else if (iVar3 == 1 && func_191(&(Var5[iVar0]), &(uVar33[iVar0]), 1128792064))
					{
						func_372("GOT FORWARD POINT");
						if (!func_5(Var5[iVar0], 0f, 0f, 0f, 0))
						{
							MISC::CLEAR_AREA_OF_VEHICLES(Var5[iVar0], 10f, 0, 0, 0, 0, 0, 0);
							(*uParam2)[iVar0] = VEHICLE::CREATE_VEHICLE(uParam0->f_1109[iVar0], Var5[iVar0], uVar33[iVar0], 1, 1, 0);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY((*uParam2)[iVar0], 1084227584);
							VEHICLE::SET_VEHICLE_ENGINE_ON((*uParam2)[iVar0], 1, 1, 0);
							ENTITY::SET_ENTITY_PROOFS((*uParam2)[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
							VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED((*uParam2)[iVar0], 1);
							func_372("CREATING VEHICLE(s) - WAVE TWO");
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam2)[iVar0], 0))
						{
							func_372("VEHICLE IS DRIVABLE");
							iVar1 = 0;
							while (iVar1 < uParam0->f_1108)
							{
								func_372("CREATING PEDS IN CAR - WAVE TWO");
								iVar2 = (iVar0 * uParam0->f_1108);
								uParam2->f_9[(iVar1 + iVar2)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam2)[iVar0], 22, uParam0->f_1118[iVar1], uParam0->f_1127[iVar1], 1, 1);
								if (!ENTITY::IS_ENTITY_DEAD(uParam2->f_9[(iVar1 + iVar2)], 0))
								{
									func_190(uParam2->f_9[(iVar1 + iVar2)], uParam2->f_36, 1);
									func_372("TASKING GUYS TO COMBAT");
								}
								iVar1++;
							}
							uParam2->f_18[iVar0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0]);
							HUD::SET_BLIP_COLOUR(uParam2->f_18[iVar0], 1);
							*uParam4 = 1;
							iLocal_3514[iVar3] = 1;
							func_372("bIsChaseActive AND bWaveActive = TRUE");
							bVar42 = false;
							if (!func_43(uParam1))
							{
								func_40(uParam1);
								func_372("STARTING TIMER");
							}
							else
							{
								func_41(uParam1);
								func_372("RESTARTING TIMER");
							}
						}
					}
					iVar0++;
				}
			}
		}
		iVar3++;
	}
}

void func_190(int iParam0, var uParam1, int iParam2)
{
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, 736523883, -1, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 42, iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
	TASK::TASK_COMBAT_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
	func_372("TASKING GUYS TO COMBAT");
}

int func_191(var uParam0, var uParam1, int iParam2)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar3, 0f, iParam2, 0f), 1, &Var4, &fVar7, &uVar14, 0, 1077936128, 0);
	Var8 = { -SYSTEM::SIN(fVar3), SYSTEM::COS(fVar3), 0f };
	Var11 = { Var4 - Var0 };
	if (SYSTEM::COS(MISC::ABSF((fVar7 - fVar3))) <= -0.98f)
	{
		fVar7 = (fVar7 + 180f);
	}
	bVar15 = true;
	if (SYSTEM::COS(MISC::ABSF((fVar7 - fVar3))) <= 0.867f)
	{
		func_372("ORIENTATION BETWEEN HEADINGS ARE TOO GREAT, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (MISC::ABSF((Var4.z - Var0.z)) > 3f)
	{
		func_372("GET_FORWARD_POINT: Z VALUE IS TOO HIGH, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_5(Var4, 0f, 0f, 0f, 0))
	{
		func_372("GET_FORWARD_POINT: VECTOR IS ZERO, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_192(Var8, Var11) <= 0f)
	{
		bVar15 = false;
	}
	if (bVar15)
	{
		*uParam0 = { Var4 };
		*uParam1 = fVar7;
		func_372("GET_FORWARD_POINT: GOT A VALID POINT!!!");
		return 1;
	}
	return 0;
}

float func_192(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

int func_193()
{
	if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		return 1;
	}
	return 0;
}

int func_194(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (*uParam0)
	{
		func_191(uParam2[*iParam1], uParam3[*iParam1], 1128792064);
		func_372("CHECKING FOR FORWARD POINT");
	}
	else
	{
		func_196(uParam2[*iParam1], uParam3[*iParam1], -1027080192);
		func_372("CHECKING FOR BACKWARD POINT");
	}
	if (!func_195(*uParam2[*iParam1]))
	{
		return 1;
	}
	return 0;
}

int func_195(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_196(var uParam0, var uParam1, float fParam2)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, fParam2, 0f), 1, &Var4, &fVar7, &uVar14, 0, 1077936128, 0);
	Var8 = { -SYSTEM::SIN(fVar3), SYSTEM::COS(fVar3), 0f };
	Var11 = { Var4 - Var0 };
	if (SYSTEM::COS(MISC::ABSF((fVar7 - fVar3))) <= -0.98f)
	{
		fVar7 = (fVar7 + 180f);
	}
	bVar15 = true;
	if (SYSTEM::COS(MISC::ABSF((fVar7 - fVar3))) <= 0.867f)
	{
		func_372("ORIENTATION BETWEEN HEADINGS ARE TOO GREAT, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (MISC::ABSF((Var4.z - Var0.z)) > 3f)
	{
		func_372("Z VALUE IS TOO HIGH, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (func_5(Var4, 0f, 0f, 0f, 0))
	{
		func_372("VECTOR IS ZERO, RETURNING FALSE!!!");
		bVar15 = false;
	}
	if (CAM::IS_SPHERE_VISIBLE(Var4, 5f))
	{
		func_372("NODE VECTOR IS VISIBLE, RETURNING FALSE");
	}
	if (func_192(Var8, Var11) >= 0f)
	{
		bVar15 = false;
	}
	if (bVar15)
	{
		*uParam0 = { Var4 };
		*uParam1 = fVar7;
		func_372("GOT A VALID POINT!!!");
		return 1;
	}
	return 0;
}

int func_197()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!bLocal_6004)
	{
		if (SYSTEM::VDIST2(Var0, Local_4356.f_218[0].f_110) < 40000f)
		{
			return 0;
		}
	}
	if (bLocal_6011)
	{
		if (bLocal_6063)
		{
			if (SYSTEM::TIMERA() > 15000)
			{
				return 1;
			}
		}
		else if (bLocal_6064)
		{
			if (SYSTEM::TIMERB() > 15000)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_259(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_199(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_199(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
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
	if (func_186(iVar0))
	{
		func_185();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_179(uParam0, bParam6, bParam8, 0))
		{
			func_200(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_166(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!func_186(iVar0))
						{
							func_306(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_165(1);
							}
						}
					}
				}
			}
		}
		else if (func_166(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!func_186(iVar0))
					{
						func_306(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_165(1);
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
			if (func_186(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					func_259(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_259(uParam0, iVar0, 1);
			}
		}
		if (!func_179(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_164(uParam0))
			{
				func_163(uParam0);
			}
		}
	}
}

void func_200(var uParam0, struct<3> Param1, int iParam4)
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

void func_201()
{
	if (bLocal_6036 || bLocal_6037)
	{
		if (bLocal_3376)
		{
			if (!iLocal_6070)
			{
				func_34("DTRFKGR_04", 7500, -1);
				iLocal_6070 = 1;
			}
		}
	}
	else if (bLocal_6058)
	{
		if (!iLocal_6071)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
					{
						uLocal_6142[0] = HUD::ADD_BLIP_FOR_COORD(Local_4356.f_218[0].f_110);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_6142[0], "DTRFKGR_BLIP07");
					}
					func_34("DTRFKGR_03a", 7500, 1);
					StringCopy(&cLocal_5995, "DTRFKGR_03a", 32);
					Local_6078[0] = { Local_4356.f_218[0].f_110 };
					iLocal_6071 = 1;
				}
				else
				{
					iLocal_6071 = 1;
					iLocal_6054 = 1;
				}
			}
		}
	}
}

void func_202()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_203(PLAYER::PLAYER_PED_ID(), Local_6103, 1) < 200f)
		{
			return;
		}
	}
	if (!iLocal_6066)
	{
		if (bLocal_6006 && !bLocal_6005)
		{
			if (!func_43(&uLocal_6181))
			{
				func_40(&uLocal_6181);
			}
			else if (func_37(&uLocal_6181) > 180f)
			{
				if (func_8(&uLocal_5830, "ARMSAUD", "OSCAR_HURRY", 9, 0, 0, 0))
				{
					iLocal_6066 = 1;
				}
			}
		}
	}
}

float func_203(int iParam0, struct<3> Param1, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam4);
}

void func_204()
{
	if (!iLocal_6060)
	{
		if (!bLocal_6062 && !bLocal_6037)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0))
				{
					if (func_43(&uLocal_6175))
					{
						if (func_37(&uLocal_6175) > 7.5f)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (func_8(&uLocal_5830, "ARMSAUD", "ARMS_GOOD", 9, 0, 0, 0))
								{
									iLocal_6060 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_205()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_6) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_5543.f_6, 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5543.f_6))
		{
			if (uLocal_5543.f_14)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_3500);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_5543.f_6));
			}
		}
	}
}

int func_206(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, bool bParam18, var uParam19, var uParam20, var uParam21)
{
	uParam16 = uParam16;
	func_256(uParam1, bParam18, uParam19, bParam6);
	if (uParam1->f_36)
	{
		if (uParam1->f_23)
		{
			if (!*bParam18)
			{
				func_34("DTRFKGR_09", 3000, 1);
				uParam1->f_36 = 0;
			}
		}
	}
	func_255(uParam1, uParam2, bParam18, uParam19);
	func_245(uParam0, uParam1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.05f);
	switch (*uParam2)
	{
		case 0:
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar5], 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
					{
						iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], -1, 0);
						iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar3, 0);
					}
					if (uParam0[0]->f_66[iVar5].f_18)
					{
						ENTITY::SET_ENTITY_COORDS((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_5, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_11, uParam0[0]->f_66[iVar5].f_12, uParam0[0]->f_66[iVar5].f_13, uParam0[0]->f_66[iVar5].f_14);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS((*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_2, uParam0[0]->f_66[iVar5].f_3, 1, 1000, 786603);
						func_372("STARTING PLAYBACK ON SMUGGLERS VEHICLE");
					}
					else if (uParam0[0]->f_66[iVar5].f_19)
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar2, (*uParam1)[iVar5], uParam0[0]->f_66[iVar5].f_4, 786469, 0, 16, -1, -1f, 0, 1073741824);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, (*uParam1)[iVar5], *uParam3[0], 40f, 1, uParam0->f_1138[iVar5], 786469, 2f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						if (!PED::IS_PED_INJURED(uParam1->f_7[iVar5]))
						{
							TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[iVar5], uVar0);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					}
				}
				iVar5++;
			}
			*uParam3[0] = { uParam0[0]->f_107 };
			uLocal_3354 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_drug_traffic_flare_L", *uParam3[0], 0f, 0f, 0f, 1f, 0, 0, 0, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(uLocal_3354, 1f, 0.84f, 0f, 0);
			func_291(uParam3[0], 0);
			if (Global_111638.f_19978.f_1 == 3)
			{
				Local_3601 = { 3.5f, 3.5f, 3.5f };
			}
			else
			{
				Local_3601 = { 6.5f, 6.5f, 6.5f };
			}
			uParam1->f_33 = 1;
			func_372("INSIDE STATE - SMUGGLERS_STATE_TO_PICKUP");
			*uParam2 = 1;
			break;
		
		case 1:
			if (func_244(uParam0, uParam1, uParam15))
			{
				uParam1->f_29 = 1;
				if (!iLocal_3580)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_FIRST_ENEMIES_DEAD");
					func_259(&uLocal_3501, 0, 0);
					iLocal_3580 = 1;
				}
			}
			if (uParam0[0]->f_66[iVar5].f_19)
			{
				func_243(uParam0, uParam1, iParam9, uParam3[0], 1);
			}
			else if (uParam1->f_33)
			{
				func_239(uParam0, uParam1, uParam3[0]);
			}
			if (!iLocal_3578)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), *uParam3[0], 100f, 100f, 100f, 0, 1, 0))
				{
					func_238(uParam0);
					iLocal_3578 = 1;
				}
			}
			func_237(uParam1, uParam15);
			func_236(uParam0, uParam1, uParam14, uParam4);
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (bLocal_3576 && !iLocal_3577)
				{
					if (!HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar5]))
					{
						uParam1->f_12[iVar5] = HUD::ADD_BLIP_FOR_ENTITY((*uParam1)[iVar5]);
						HUD::SET_BLIP_COLOUR(uParam1->f_12[iVar5], 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_12[iVar5], "DTRFKGR_BLIP03");
						func_372("ADDING IN SMUGGLERS BLIPS NEW");
						iLocal_3577 = 1;
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar5], 0) || uParam1->f_29)
				{
					if (ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], *uParam3[0], 50f, 50f, 50f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], -1, 0);
							if (iVar4 != PLAYER::PLAYER_PED_ID())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, 0))
								{
									TASK::SET_DRIVE_TASK_DRIVING_STYLE(iVar4, 262144);
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
					{
						iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], -1, 0);
						if (iVar4 != PLAYER::PLAYER_PED_ID())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, 0))
							{
								TASK::SET_DRIVE_TASK_DRIVING_STYLE(iVar4, 786469);
							}
						}
					}
					if ((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], *uParam3[0], Local_3601, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), *uParam3[0], Local_3567, 0, 1, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), (*uParam1)[iVar5], 0))
					{
						func_372("SETTING smugArgs.bPickupAIFirst TO TRUE");
						uParam1->f_23 = 1;
						AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_PACKAGE_STOLEN");
						func_234(uParam13, uParam0, (*uParam1)[iVar5], 0);
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
						{
							OBJECT::DELETE_OBJECT(&(uParam1->f_5));
							func_372("DELETING smugArgs.oArmsPackage");
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3607))
						{
							OBJECT::DELETE_OBJECT(&iLocal_3607);
							func_372("DELETING oFlareProp VIA SMUGGLERS AI FIRST");
						}
						*iParam7 = 1;
						if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
						{
							HUD::REMOVE_BLIP(uParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA AI FIRST");
						}
						if (*bParam18)
						{
							uParam1->f_36 = 1;
						}
						else
						{
							func_34("DTRFKGR_09", 3000, 1);
						}
						uParam1->f_20[iVar5] = 1;
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
						{
							uParam1->f_11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], -1, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(uParam1->f_11, 0)))
						{
							uParam1->f_3 = PED::GET_VEHICLE_PED_IS_IN(uParam1->f_11, 0);
						}
						*uParam3[0] = { 0f, 0f, 0f };
						if (uParam1->f_20[0])
						{
							func_372("smugArgs.bCarHasDrugs[0] IS TRUE");
						}
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						func_372("SETTING MAX WANTED LEVEL BACK TO ZERO");
						func_233(uLocal_3354);
						iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar5], -1, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4, 0))
						{
							TASK::SET_DRIVE_TASK_DRIVING_STYLE(iVar4, 786469);
						}
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_COMPLETE VIA AI GETTING TO PICKUP FIRST.");
						*uParam2 = 2;
					}
					if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), *uParam3[0], Local_3567, 0, 1, 0) && !ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], *uParam3[0], Local_3567, 0, 1, 0)) || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uParam1->f_5, 1), Local_3567, 0, 1, 0))) || func_232(uParam1, iParam9))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (func_274(iParam9))
							{
								func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE");
								uParam1->f_24 = 1;
								func_231(uParam0, uParam1, uParam13, iParam9, uParam4, iVar5, bParam6);
								func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST, IN VEHICLE.");
								*uParam2 = 3;
							}
						}
						else
						{
							func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE");
							uParam1->f_24 = 1;
							func_231(uParam0, uParam1, uParam13, iParam9, uParam4, iVar5, bParam6);
							func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST, ON FOOT.");
							*uParam2 = 3;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), *uParam3[0], Local_3567, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], *uParam3[0], Local_3567, 0, 1, 0))
					{
						func_372("SETTING smugArgs.bPickupTie TO TRUE");
						uParam1->f_25 = 1;
						AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_TREV_FIRST");
						func_230(uParam0, uParam1, &iVar5);
						func_234(uParam13, uParam0, *iParam9, 1);
						uParam1->f_20[0] = 0;
						func_229(*bParam6, iParam9);
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
						{
							OBJECT::DELETE_OBJECT(&(uParam1->f_5));
							func_372("DELETING smugArgs.oArmsPackage");
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_3607))
						{
							OBJECT::DELETE_OBJECT(&iLocal_3607);
							func_372("DELETING oFlareProp VIA SMUGGLERS TIE");
						}
						if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
						{
							HUD::REMOVE_BLIP(uParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA TIE");
						}
						*bParam6 = 1;
						func_233(uLocal_3354);
						if (Global_111638.f_19978.f_1 == 1)
						{
							HUD::CLEAR_GPS_CUSTOM_ROUTE();
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == func_24(2))
							{
								func_45(uParam15, 2, 0, "TREVOR", 0, 1);
								func_8(uParam15, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0);
								if (!func_43(&(uParam1->f_68)))
								{
									func_40(&(uParam1->f_68));
								}
							}
						}
						func_228(uParam1);
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA TIE.");
						*uParam2 = 3;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar5]))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_12[iVar5]));
						func_372("REMOVING BLIPS BECAUSE THE SMUGGLER VEHICLE IS UNDRIVEABLE");
					}
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
					{
						if (uParam0[0]->f_66[iVar5].f_19)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar5]))
							{
								TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE((*uParam1)[iVar5]);
								VEHICLE::EXPLODE_VEHICLE((*uParam1)[iVar5], 1, 0);
								func_372("STOPPING PLAYBACK RECORDING DUE TO VEHICLE BEING UNDRIVEABLE 01");
							}
						}
						else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar5]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE((*uParam1)[iVar5]);
							VEHICLE::EXPLODE_VEHICLE((*uParam1)[iVar5], 1, 0);
							func_372("STOPPING PLAYBACK RECORDING DUE TO VEHICLE BEING UNDRIVEABLE 02");
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), *uParam3[0], Global_19, 0, 1, 0))
					{
						func_372("SETTING smugArgs.bPickupPlayerFirst TO TRUE DUE TO SMUGGLER VEHICLE BEING UNDRIVEABLE");
						uParam1->f_24 = 1;
						AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_PACKAGE_OBTAINED");
						if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
						{
							HUD::REMOVE_BLIP(uParam4[0]);
							func_372("REMOVING myLocationBlip[0] VIA PLAYER FIRST DUE TO SMUGGLERS VEHICLE BEING UNDRIVEABLE");
						}
						*bParam6 = 1;
						func_233(uLocal_3354);
						if (Global_111638.f_19978.f_1 == 1)
						{
							HUD::CLEAR_GPS_CUSTOM_ROUTE();
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == func_24(2))
							{
								func_45(uParam15, 2, 0, "TREVOR", 0, 1);
								func_8(uParam15, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0);
								if (!func_43(&(uParam1->f_68)))
								{
									func_40(&(uParam1->f_68));
								}
							}
						}
						func_372("GOING TO SMUGGLERS_STATE_PICKUP_CUTSCENE VIA PLAYER GETTING TO PICKUP FIRST - SMUGGLERS BEING UNDRIVEABLE.");
						*uParam2 = 3;
					}
				}
				iVar5++;
			}
			break;
		
		case 3:
			iVar5 = 0;
			while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[iVar5], 0) && !PED::IS_PED_INJURED(uParam1->f_7[iVar5]))
				{
					if (func_159(PLAYER::PLAYER_PED_ID(), uParam1->f_7[iVar5], 1) > 300f)
					{
						uParam1->f_34 = 1;
						iLocal_3587 = 1;
						if (!iLocal_3588)
						{
							iVar9 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
							if (iVar9 == 0)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 1)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 2)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 3)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 4)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
							else if (iVar9 == 5)
							{
								if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
								{
									iLocal_3588 = 1;
								}
							}
						}
					}
				}
				iVar5++;
			}
			if (uParam1->f_34 || uParam1->f_29)
			{
				if (uParam1->f_34)
				{
					func_372("SMUGGLERS ARE TOO FAR AFTER PICKUP - BLIPPING AIRFIELD");
				}
				else if (uParam1->f_29)
				{
					func_372("SMUGGLERS ARE DEAD PRIOR TO PICKUP - BLIPPING AIRFIELD");
				}
			}
			else
			{
				if (!func_43(&(uParam1->f_62)))
				{
					func_40(&(uParam1->f_62));
					func_372("STARTING smugArgs.tTrapStartTimer");
				}
				*uParam17 = 1;
				*uParam3[0] = { 0f, 0f, 0f };
				*iParam7 = 1;
			}
			uParam11->f_3 = 0;
			func_229(*bParam6, iParam9);
			func_372("INSIDE STATE - SMUGGLERS_STATE_PICKUP_CUTSCENE");
			*uParam2 = 2;
			break;
		
		case 2:
			if (!uParam1->f_29 && !uParam1->f_34)
			{
				iVar5 = 0;
				while (iVar5 < uParam0->f_1136)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar5], 0))
					{
						if (uParam1->f_23)
						{
							func_372("bPickupAIFirst IS TRUE - ATTEMPTING TO RE-TASK");
							*uParam2 = 4;
						}
						else if (uParam1->f_24 || uParam1->f_25)
						{
							iVar6 = 0;
							while (iVar6 < uParam0->f_1137)
							{
								iVar7 = (iVar5 * uParam0->f_1137);
								if (!PED::IS_PED_INJURED(uParam1->f_7[(iVar6 + iVar7)]))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7[(iVar6 + iVar7)], 1);
									PED::SET_PED_COMBAT_ABILITY(uParam1->f_7[(iVar6 + iVar7)], 1);
									PED::SET_PED_COMBAT_RANGE(uParam1->f_7[(iVar6 + iVar7)], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 2, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 50, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 69, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 70, 1);
									PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_7[(iVar6 + iVar7)], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 1, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar6 + iVar7)], 3, 0);
									PED::SET_PED_CONFIG_FLAG(uParam1->f_7[(iVar6 + iVar7)], 214, 1);
									TASK::TASK_COMBAT_PED(uParam1->f_7[(iVar6 + iVar7)], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
								iVar6++;
							}
							func_372("bPickupPlayerFirst IS TRUE - ATTEMPTING TO RE-TASK");
							func_372("GOING TO STATE - SMUGGLERS_STATE_TO_DROPOFF");
							*uParam2 = 4;
							break;
						}
					}
					iVar5++;
				}
			}
			else
			{
				func_372("smugArgs.bGoToDestination = TRUE BECAUSE smugArgs.bSmugglerPedsDeadPriorToPickup IS TRUE");
				uParam1->f_26 = 1;
				func_372("smugArgs.bSmugglerPedsDeadPriorToPickup IS TRUE, GOING TO STATE - SMUGGLERS_STATE_COMPLETE");
				*uParam2 = 10;
			}
			break;
		
		case 4:
			if (uParam1->f_23)
			{
				func_227(uParam0, uParam1, uParam20);
				if (!iLocal_3581)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						iVar8 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
						if (iVar8 == 0)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 1)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT2", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 2)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT3", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 3)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT4", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 4)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT5", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
						else if (iVar8 == 5)
						{
							if (func_8(uParam15, "ARMSAUD", "ARMS_EN_GOT6", 9, 0, 0, 0))
							{
								iLocal_3581 = 1;
							}
						}
					}
				}
			}
			if (uParam1->f_24)
			{
				func_226(uParam0, uParam1, iParam9, uParam4, sParam5, uParam3, uParam15);
			}
			if (uParam1->f_24 || uParam1->f_25)
			{
				iVar5 = 0;
				while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[iVar5], 0) && !PED::IS_PED_INJURED(uParam1->f_7[iVar5]))
					{
						if (func_159(PLAYER::PLAYER_PED_ID(), uParam1->f_7[iVar5], 1) > 300f)
						{
							if (!iLocal_3580)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_FIRST_ENEMIES_DEAD");
								iLocal_3580 = 1;
							}
							iLocal_3587 = 1;
							if (!iLocal_3588)
							{
								iVar9 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
								if (iVar9 == 0)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP02", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 1)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP03", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 2)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP04", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 3)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP05", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 4)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP06", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
								else if (iVar9 == 5)
								{
									if (func_8(uParam15, "ARMSAUD", "ARMS_GRTP07", 9, 0, 0, 0))
									{
										iLocal_3588 = 1;
									}
								}
							}
							func_225(uParam0, uParam1);
							func_372("PLAYER GOT THE DRUGS FIRST AND THE SMUGGLERS ARE TOO FAR AWAY");
							*uParam2 = 10;
							break;
						}
					}
					iVar5++;
				}
			}
			if (!uParam1->f_30)
			{
				if (uParam1->f_23 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_306("DTRFKGR_HELP_04", -1);
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
					{
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED((*uParam1)[0], 1f);
					}
					uParam1->f_30 = 1;
				}
			}
			if (uParam1->f_23 && !uParam1->f_28)
			{
				func_223(uParam1, &(uParam0->f_218[1].f_107), uParam15);
			}
			if (uParam0[0]->f_66[0].f_19)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[0]))
					{
						func_243(uParam0, uParam1, iParam9, &(uParam0->f_218[1].f_107), 0);
					}
				}
			}
			else if (uParam1->f_33)
			{
				func_239(uParam0, uParam1, &(uParam0->f_218[1].f_107));
			}
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5]) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar5], 0))
				{
					if ((((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, 0, 1, 0) && uParam1->f_20[iVar5]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_218[1].f_107, Local_3564, 0, 1, 0)) && !uParam1->f_35) || (((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, 0, 1, 0) && uParam1->f_20[iVar5]) && ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iVar5])) && !uParam1->f_35))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_2, 0);
						if (!ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_2))
						{
							if (!PED::IS_PED_INJURED(uParam1->f_10) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, 0))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_ENTER_VEHICLE(0, uParam1->f_2, 20000, -1, 1073741824, 1, 0);
								TASK::TASK_HELI_MISSION(0, uParam1->f_2, 0, 0, uParam0->f_218[1].f_164, uParam0->f_218[1].f_164.f_1, (uParam0->f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
								TASK::TASK_HELI_MISSION(0, uParam1->f_2, 0, 0, (uParam0->f_218[1].f_164 + 500f), (uParam0->f_218[1].f_164.f_1 + 500f), (uParam0->f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								if (!PED::IS_PED_INJURED(uParam1->f_10))
								{
									TASK::TASK_PERFORM_SEQUENCE(uParam1->f_10, uVar0);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
							{
								VEHICLE::DELETE_VEHICLE(&(uParam1->f_2));
							}
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_10))
							{
								PED::DELETE_PED(&(uParam1->f_10));
							}
						}
						if (!ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_3))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_3, 0) && !PED::IS_PED_INJURED(uParam1->f_11))
							{
								PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(uParam1->f_3, 1), &Var10, 1, 1077936128, 0);
								ENTITY::SET_ENTITY_COORDS(uParam1->f_3, Var10, 1, 0, 0, 1);
							}
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_3))
							{
								VEHICLE::DELETE_VEHICLE(&(uParam1->f_3));
							}
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[0]))
							{
								PED::DELETE_PED(&(uParam1->f_7[0]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[1]))
							{
								PED::DELETE_PED(&(uParam1->f_7[1]));
							}
						}
						uParam1->f_27 = 1;
						func_372("smugArgs.bSmugglerReachedDest = TRUE VIA PLAYER BEING TOO FAR AWAY TO TRIGGER CUTSCENE");
						*uParam2 = 10;
						break;
					}
					if (((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], uParam0->f_218[1].f_107, 12f, 12f, 3f, 0, 1, 0) && uParam1->f_20[iVar5]) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_218[1].f_107, Local_3561, 0, 1, 0)) && !uParam1->f_35)
					{
						func_372("SMUGGLER REACHED OBJECTIVE");
						if (uParam0[0]->f_66[iVar5].f_19)
						{
							if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT((*uParam1)[iVar5], 5f, 2, 0);
							}
						}
						func_230(uParam0, uParam1, &iVar5);
						if ((!PED::IS_PED_INJURED(uParam1->f_11) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_2, 0)) && !PED::IS_PED_INJURED(uParam1->f_10))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_LEAVE_VEHICLE(0, uParam1->f_3, 256);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							if (!PED::IS_PED_INJURED(uParam1->f_11))
							{
								TASK::TASK_PERFORM_SEQUENCE(uParam1->f_11, uVar0);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
						if (!uParam1->f_35)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam9, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_218[1].f_107, 15f, 15f, 15f, 0, 1, 0))
								{
									PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), (uParam0->f_218[1].f_107 + 20f), (uParam0->f_218[1].f_107.f_1 + 20f), uParam0->f_218[1].f_107.f_2);
								}
							}
							*uParam2 = 9;
							break;
						}
					}
					else if (((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], uParam0->f_218[1].f_107, Global_19, 0, 1, 0) && uParam1->f_20[iVar5]) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_218[1].f_107, Local_3561, 0, 1, 0)) || ((((ENTITY::IS_ENTITY_AT_COORD((*uParam1)[iVar5], uParam0->f_218[1].f_107, Global_19, 0, 1, 0) && uParam1->f_20[iVar5]) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0->f_218[1].f_107, Local_3561, 0, 1, 0)) && uParam1->f_35) && !uParam1->f_28))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED((*uParam1)[0], 1);
						if (!PED::IS_PED_INJURED(uParam1->f_7[0]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_7[0], 1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 256);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							if (!PED::IS_PED_INJURED(uParam1->f_7[0]))
							{
								TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[0], uVar0);
								func_372("GIVING TASK TO SMUGGLER PED 0");
								PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_7[0], 1);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
						if (!PED::IS_PED_INJURED(uParam1->f_7[1]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7[1], 1);
							PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_7[1], 1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 256);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							if (!PED::IS_PED_INJURED(uParam1->f_7[1]))
							{
								TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[1], uVar0);
								func_372("GIVING TASK TO SMUGGLER PED 1");
								PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_7[1], 1);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
						if (!PED::IS_PED_INJURED(uParam1->f_10))
						{
							TASK::TASK_COMBAT_PED(uParam1->f_10, PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_10, 1);
						}
						func_34("DTRFKGR_KILL", 7500, 1);
						if (HUD::DOES_BLIP_EXIST(uParam1->f_12[0]))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_12[0]));
							func_372("REMOVING BLIP ON CAR BECAUSE GUYS SHOULD BE OUTSIDE OF CAR NOW");
						}
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_14[0]))
						{
							uParam1->f_14[0] = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_7[0]);
							func_372("ADDING BLIP TO smugArgs.smugglersPeds[0]");
							HUD::SET_BLIP_SCALE(uParam1->f_14[0], 0.5f);
						}
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_14[1]))
						{
							uParam1->f_14[1] = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_7[1]);
							func_372("ADDING BLIP TO smugArgs.smugglersPeds[1]");
							HUD::SET_BLIP_SCALE(uParam1->f_14[1], 0.5f);
						}
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_18))
						{
							uParam1->f_18 = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_10);
							func_372("ADDING BLIP TO smugArgs.smugglersHeliPed");
							HUD::SET_BLIP_SCALE(uParam1->f_18, 0.5f);
						}
						uParam1->f_39 = 1;
						*uParam2 = 6;
						break;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar5]))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_12[iVar5]));
						func_372("REMOVING BLIPS BECAUSE THE CAR IS DEAD");
					}
					if (!uParam1->f_43[0] && !uParam1->f_43[1])
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[0], 0))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[0], uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[1], 0))
						{
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
							TASK::OPEN_SEQUENCE_TASK(&uVar1);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uVar1);
							TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[1], uVar1);
							TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						}
						uParam1->f_43[0] = 1;
						uParam1->f_43[1] = 1;
					}
					func_230(uParam0, uParam1, &iVar5);
					if (uParam1->f_24)
					{
						VEHICLE::EXPLODE_VEHICLE((*uParam1)[0], 1, 0);
						uParam1->f_26 = 1;
						func_372("SETTING smugArgs.bGoToDestination = TRUE BECAUSE THE PLAYER GOT THE PACKAGE AND THE SMUGGLERS VEHICLE DIED");
						func_372("GOING TO STATE SMUGGLERS_STATE_COMPLETE");
						*uParam2 = 10;
						break;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0))
					{
						if (ENTITY::IS_ENTITY_UPSIDEDOWN((*uParam1)[iVar5]))
						{
							if (!bLocal_3573)
							{
								bLocal_3573 = true;
								iLocal_3589 = MISC::GET_GAME_TIMER();
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[0], 0))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_7[0], 0))
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[0], uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[1], 0))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(uParam1->f_7[1], 0))
									{
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
										TASK::OPEN_SEQUENCE_TASK(&uVar1);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(uVar1);
										TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[1], uVar1);
										TASK::CLEAR_SEQUENCE_TASK(&uVar1);
									}
								}
							}
						}
						else
						{
							bLocal_3573 = false;
							iLocal_3589 = 0;
						}
						if (bLocal_3573)
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_3589) > 12000)
							{
								func_372("EXPLODING SMUGGLER VEHICLE");
								VEHICLE::EXPLODE_VEHICLE((*uParam1)[iVar5], 1, 0);
							}
						}
					}
				}
				iVar5++;
			}
			if (func_222(uParam0, uParam1, uParam8, sParam5, iParam9, uParam11, uParam13, bParam18, bParam6))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_1ST_SET_DEAD");
				uParam11->f_3 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam9, 0))
					{
						if (uParam1->f_23)
						{
							HUD::CLEAR_PRINTS();
							func_34("DTRFKGR_03", 7500, 1);
							StringCopy(sParam5, "DTRFKGR_03", 32);
							*iParam7 = 0;
							if (!HUD::DOES_BLIP_EXIST((*uParam4)[0]))
							{
								(*uParam4)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
								if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam4)[0], "DTRFKGR_BLIP07");
								}
								*uParam3[0] = { uParam0->f_218[0].f_110 };
							}
							else
							{
								func_372("myLocationBlip[0] DOES EXIST");
							}
						}
						*bParam6 = 1;
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 5;
					}
				}
			}
			if (func_244(uParam0, uParam1, uParam15))
			{
				if (!iLocal_3580)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_FIRST_ENEMIES_DEAD");
					iLocal_3580 = 1;
				}
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam9, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_3608))
					{
						HUD::REMOVE_BLIP(&uLocal_3608);
					}
					if (uParam1->f_23)
					{
						HUD::CLEAR_PRINTS();
						func_34("DTRFKGR_03", 7500, 1);
						StringCopy(sParam5, "DTRFKGR_03", 32);
						*iParam7 = 0;
						if (!HUD::DOES_BLIP_EXIST((*uParam4)[0]))
						{
							(*uParam4)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
							if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam4)[0], "DTRFKGR_BLIP07");
							}
							*uParam3[0] = { uParam0->f_218[0].f_110 };
						}
						else
						{
							func_372("myLocationBlip[0] DOES EXIST");
						}
					}
					*bParam6 = 1;
					*uParam2 = 10;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					}
					if (SYSTEM::VDIST2(Var13, uParam1->f_47) > 122500f)
					{
						uParam1->f_41 = 1;
					}
				}
			}
			break;
		
		case 6:
			if (HUD::DOES_BLIP_EXIST(uParam1->f_12[0]))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_12[0]));
				func_372("REMOVING BLIP ON CAR BECAUSE GUYS SHOULD BE OUTSIDE OF CAR NOW");
			}
			if (PED::IS_PED_INJURED(uParam1->f_7[0]))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_14[0]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[0]));
				}
			}
			if (PED::IS_PED_INJURED(uParam1->f_7[1]))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_14[1]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[1]));
				}
			}
			if (PED::IS_PED_INJURED(uParam1->f_10))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_18))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_18));
				}
			}
			if ((PED::IS_PED_INJURED(uParam1->f_10) && PED::IS_PED_INJURED(uParam1->f_7[0])) && PED::IS_PED_INJURED(uParam1->f_7[1]))
			{
				SYSTEM::SETTIMERA(0);
				func_372("ALL GUYS ARE KILLED, MOVE ON TO STATE - SMUGGLERS_STATE_DROPOFF_FIGHT_A");
				*uParam2 = 7;
			}
			break;
		
		case 7:
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!HUD::DOES_BLIP_EXIST(uParam1->f_17))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_OPEN((*uParam1)[0], 5, 0, 0);
					}
					uParam1->f_17 = HUD::ADD_BLIP_FOR_ENTITY((*uParam1)[iVar5]);
					func_372("ADDING BLIP TO PICK UP THE PACKAGE");
					HUD::SET_BLIP_COLOUR(uParam1->f_17, 2);
					func_34("DTRFKGR_06", 7500, 1);
					StringCopy(sParam5, "DTRFKGR_06", 32);
				}
				if (func_221((*uParam1)[iVar5], 1069547520))
				{
					func_220(uParam1, iVar5);
					func_372("BUFFER TIME IS UP, MOVE ON TO CUTSCENE");
					*uParam2 = 8;
				}
				else if (func_219((*uParam1)[iVar5]))
				{
					func_220(uParam1, iVar5);
					func_372("BUFFER TIME IS UP, MOVE ON TO CUTSCENE");
					*uParam2 = 8;
				}
			}
			break;
		
		case 8:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam1->f_47, 5f, 5f, 4f, 0, 1, 0))
			{
				if (func_43(&(uParam1->f_71)))
				{
					if (func_37(&(uParam1->f_71)) > 2f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam9, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam1->f_17))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_17));
								func_150(uParam13);
								func_234(uParam13, uParam0, *iParam9, 1);
								uParam1->f_20[0] = 0;
							}
							*bParam6 = 1;
							if (!ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam9, 9);
							}
						}
					}
				}
				else if (!func_43(&(uParam1->f_71)))
				{
					func_40(&(uParam1->f_71));
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					Var13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				if (SYSTEM::VDIST2(Var13, uParam1->f_47) > 122500f)
				{
					uParam1->f_41 = 1;
				}
				else if (SYSTEM::VDIST2(Var13, uParam1->f_47) > 10000f)
				{
					if (!iLocal_3585)
					{
						func_34("DTRFKGR_06a", 7500, 1);
						iLocal_3585 = 1;
					}
				}
			}
			if (*bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam9, 0))
					{
						*iParam7 = 0;
						uParam11->f_3 = 0;
						func_34("DTRFKGR_03", 7500, 1);
						StringCopy(sParam5, "DTRFKGR_03", 32);
						(*uParam4)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
						if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam4)[0], "DTRFKGR_BLIP07");
						}
						*uParam3[0] = { uParam0->f_218[0].f_110 };
						*uParam2 = 10;
					}
				}
			}
			break;
		
		case 9:
			if (func_207(&(uParam11->f_3), uParam11, uParam0->f_218[1].f_146, uParam0->f_218[1].f_149, uParam12, "", iParam10, 0, 0, 0, 35f, 3000, 3000, 0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				*uParam2 = 10;
			}
			break;
		
		case 10:
			iVar5 = 0;
			while (iVar5 < uParam1->f_14)
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_14[iVar5]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[iVar5]));
					func_372("REMOVING BLIP blipSmugglersPeds");
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < uParam1->f_12)
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar5]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_12[iVar5]));
					func_372("REMOVING blipSmugglersCars");
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[iVar5]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_7[iVar5]))
					{
						PED::DELETE_PED(&(uParam1->f_7[iVar5]));
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_7[iVar5]));
					}
				}
				iVar5++;
			}
			iVar5 = 0;
			while (iVar5 < uParam0->f_1136)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[iVar5]))
					{
						VEHICLE::DELETE_VEHICLE(uParam1[iVar5]);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1[iVar5]);
					}
				}
				iVar5++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_2));
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1140);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-644710429);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_10))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_10));
			}
			func_259(&uLocal_3501, 0, 0);
			if (!func_46())
			{
				if (!HUD::DOES_BLIP_EXIST((*uParam4)[0]))
				{
					func_34("DTRFKGR_03", 7500, 1);
					StringCopy(sParam5, "DTRFKGR_03", 32);
					(*uParam4)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
					if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam4)[0], "DTRFKGR_BLIP07");
					}
					*uParam3[0] = { uParam0->f_218[0].f_110 };
				}
				else
				{
					func_372("myLocationBlip[0] DOES EXIST");
					StringCopy(sParam5, "DTRFKGR_03", 32);
					*uParam3[0] = { uParam0->f_218[0].f_110 };
				}
				*iParam7 = 0;
				*uParam21 = MISC::GET_GAME_TIMER();
				func_372("smugArgs.bGoToDestination = TRUE IN STATE SMUGGLERS_STATE_COMPLETE");
				uParam1->f_26 = 1;
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				func_372("SETTING MAX WANTED LEVEL BACK TO SIX");
				func_372("RETURNING TRUE ON UPDATE_SMUGGLERS_MODE");
				return 1;
			}
			break;
	}
	return 0;
}

int func_207(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, var uParam8, char* sParam9, var uParam10, bool bParam11, bool bParam12, int iParam13, float fParam14, int iParam15, int iParam16, bool bParam17)
{
	if (bParam11)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			func_218(0, 0, 1);
			*uParam8 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Param2, Param5, fParam14, 1, 2);
			if (bParam12)
			{
				if (SYSTEM::VDIST(CAM::GET_GAMEPLAY_CAM_COORD(), Param2) > 150f)
				{
					iParam15 += 3000;
				}
				else if (SYSTEM::VDIST(CAM::GET_GAMEPLAY_CAM_COORD(), Param2) > 75f)
				{
					iParam15 += 2000;
				}
				if (bParam17)
				{
					CAM::RENDER_SCRIPT_CAMS(1, 1, iParam15, 1, 0, 0);
				}
			}
			else if (bParam17)
			{
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			CAM::SET_CAM_ACTIVE(*uParam8, 1);
			if (!MISC::IS_STRING_NULL(sParam9))
			{
				HUD::CLEAR_PRINTS();
				func_306(sParam9, -1);
			}
			func_41(uParam1);
			*uParam0 = 2;
			break;
		
		case 2:
			Call_Loc(uParam10);
			if (StackVal)
			{
				*uParam0 = 3;
			}
			break;
		
		case 3:
			CAM::RENDER_SCRIPT_CAMS(0, iParam13, iParam16, 1, 0, 0);
			CAM::DESTROY_CAM(*uParam8, 0);
			func_208(1, 1, 1);
			return 1;
			break;
	}
	return 0;
}

void func_208(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_210(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_209(23, 0);
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_31015, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_31015, iParam0);
	}
}

void func_210(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_217(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_17())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_216(1, iParam3, uParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_217(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_216(0, iParam3, uParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_214(PLAYER::PLAYER_ID())) && !func_212(PLAYER::PLAYER_ID(), 0)) && !func_211()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_214(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_211()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_212(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_213(-1, 0) == 8;
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

int func_213(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_66();
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

int func_214(int iParam0)
{
	if (func_212(iParam0, 0))
	{
		return 1;
	}
	if (func_215())
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

bool func_215()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_216(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_217(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7356, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7356, 13);
	}
}

void func_218(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_128(0);
	func_210(1, 1, iParam2, 0, 0, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_209(23, 1);
}

int func_219(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_220(var uParam0, int iParam1)
{
	Var1 = { 0f, -5f, 0f };
	uParam0->f_47 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iParam1], 1) };
	uParam0->f_50 = ENTITY::GET_ENTITY_HEADING((*uParam0)[iParam1]);
	uParam0->f_51 = { ENTITY::GET_ENTITY_ROTATION((*uParam0)[iParam1], 2) };
	Var4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_47, uParam0->f_50, Var1) };
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 1, &(uParam0->f_54), &(uParam0->f_61), &uVar0, 1, 1077936128, 0);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 3, &(uParam0->f_57), &(uParam0->f_60), &uVar0, 1, 1077936128, 0);
	uParam0->f_60 = uParam0->f_60;
	if (SYSTEM::VDIST(uParam0->f_54, uParam0->f_57) < 3f)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 4, &(uParam0->f_57), &(uParam0->f_60), &uVar0, 1, 1077936128, 0);
	}
	uVar0 = uVar0;
}

int func_221(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -1.5f && fVar0 < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_222(var uParam0, var uParam1, var uParam2, char* sParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8)
{
	bVar2 = true;
	switch (*uParam2)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < (uParam0->f_1137 * uParam0->f_1136))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[iVar0], 0))
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_10))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_10))
					{
						func_228(uParam1);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uParam1->f_14[0]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[0]));
				}
				if (HUD::DOES_BLIP_EXIST(uParam1->f_14[1]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[1]));
				}
				if (HUD::DOES_BLIP_EXIST(uParam1->f_12[0]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_12[0]));
				}
				VEHICLE::SET_VEHICLE_DOOR_OPEN((*uParam1)[0], 5, 0, 0);
				if (!*uParam7)
				{
					if (uParam1->f_23)
					{
						uParam1->f_28 = 1;
						*uParam2 = 1;
					}
					else
					{
						func_372("smugArgs.bPickupAIFirst IS FALSE: GOING TO STATE - SMUGGLERS_RETRIEVE_DRUGS_COMPLETE NEW");
						*uParam2 = 5;
					}
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < uParam0->f_1136)
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_12[iVar0]));
					func_372("REMOVING blipSmugglersCars 01");
				}
				func_230(uParam0, uParam1, &iVar0);
				iVar1 = 0;
				while (iVar1 < (uParam0->f_1137 * uParam0->f_1136))
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam1->f_7[iVar1], 0))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_17))
						{
							uParam1->f_17 = HUD::ADD_BLIP_FOR_ENTITY((*uParam1)[iVar0]);
							func_372("ADDING BLIP TO PICK UP THE PACKAGE");
							HUD::SET_BLIP_COLOUR(uParam1->f_17, 2);
							func_34("DTRFKGR_06", 7500, 1);
							StringCopy(sParam3, "DTRFKGR_06", 32);
						}
						if (func_221((*uParam1)[iVar0], 1069547520))
						{
							func_220(uParam1, iVar0);
							*uParam2 = 4;
						}
						else if (func_219((*uParam1)[iVar0]))
						{
							func_220(uParam1, iVar0);
							*uParam2 = 4;
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam1->f_47, 5f, 5f, 4f, 0, 1, 0))
			{
				if (func_43(&(uParam1->f_71)))
				{
					if (func_37(&(uParam1->f_71)) > 1f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam4, 0))
						{
							if (HUD::DOES_BLIP_EXIST(uParam1->f_17))
							{
								HUD::REMOVE_BLIP(&(uParam1->f_17));
							}
							func_150(uParam6);
							func_234(uParam6, uParam0, *iParam4, 1);
							uParam1->f_20[0] = 0;
							*uParam8 = 1;
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam4, 9);
							func_372("GOING TO STATE - SMUGGLERS_RETRIEVE_DRUGS_COMPLETE NEW");
							*uParam2 = 5;
						}
					}
				}
				else if (!func_43(&(uParam1->f_71)))
				{
					func_40(&(uParam1->f_71));
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				if (SYSTEM::VDIST2(Var3, uParam1->f_47) > 122500f)
				{
					uParam1->f_41 = 1;
				}
				else if (SYSTEM::VDIST2(Var3, uParam1->f_47) > 10000f)
				{
					if (!iLocal_3585)
					{
						func_34("DTRFKGR_06a", 7500, 1);
						iLocal_3585 = 1;
					}
				}
			}
			break;
		
		case 5:
			uParam5->f_3 = 0;
			func_372("SET_WANTED_LEVEL_MULTIPLIER TO 1.0 VIA SMUGGLERS MODE");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			if (HUD::DOES_BLIP_EXIST(uParam1->f_14[0]))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_14[0]));
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_14[1]))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_14[1]));
			}
			if (HUD::DOES_BLIP_EXIST(uParam1->f_12[0]))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_12[0]));
			}
			func_372("RETRIEVE DRUG CHECK COMPLETE - RETURNING TRUE");
			return 1;
			break;
	}
	return 0;
}

void func_223(var uParam0, var uParam1, var uParam2)
{
	if (uParam0->f_23)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam0)[0], 0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[0], 1) };
			fVar0 = SYSTEM::VDIST(Var1, *uParam1);
		}
		func_224(&fVar0, uParam2);
	}
}

void func_224(float fParam0, var uParam1)
{
	switch (iLocal_3590)
	{
		case 0:
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				if (*fParam0 < 1500f)
				{
					if (func_8(uParam1, "ARMSAUD", "ARMS_GR10", 9, 0, 0, 0))
					{
						iLocal_3590++;
					}
				}
			}
			break;
		
		case 1:
			if (*fParam0 < 250f)
			{
				if (func_8(uParam1, "ARMSAUD", "ARMS_GR11", 9, 0, 0, 0))
				{
					iLocal_3590++;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_225(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_1136)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar0], 0))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (!PED::IS_PED_INJURED(uParam1->f_7[(iVar1 + iVar2)]))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(uParam1->f_7[(iVar1 + iVar2)], 1);
					TASK::CLEAR_PED_TASKS(uParam1->f_7[(iVar1 + iVar2)]);
					TASK::TASK_VEHICLE_DRIVE_WANDER(uParam1->f_7[(iVar1 + iVar2)], (*uParam1)[iVar0], 30f, 786597);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam1->f_7[(iVar1 + iVar2)]));
					func_372("TASKING SMUGGLERS TO WANDER");
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, uParam1->f_46);
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uParam1->f_46, 1862763509);
}

void func_226(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, var uParam5, var uParam6)
{
	if (!uParam1->f_37)
	{
		if (func_43(&(uParam1->f_68)))
		{
			if (func_37(&(uParam1->f_68)) > 3f)
			{
				if (!func_46() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (uParam1->f_34 || uParam1->f_29)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam2, 0))
							{
								func_34("DTRFKGR_03", 7500, 1);
								StringCopy(sParam4, "DTRFKGR_03", 32);
								(*uParam3)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
								if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam3)[0], "DTRFKGR_BLIP07");
								}
								*uParam5[0] = { uParam0->f_218[0].f_110 };
							}
						}
					}
					else
					{
						func_34("DTRFKGR_04", 7500, 1);
						StringCopy(sParam4, "DTRFKGR_04", 32);
					}
					uParam1->f_37 = 1;
				}
			}
		}
	}
	if (!iLocal_3582)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_45(uParam6, 2, 0, "TREVOR", 0, 1);
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_8(uParam6, "ARMSAUD", "ARMS_PACK", 9, 0, 0, 0))
				{
					if (!func_43(&(uParam1->f_68)))
					{
						func_40(&(uParam1->f_68));
					}
					iLocal_3582 = 1;
				}
			}
		}
	}
}

void func_227(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam2)
	{
		case 0:
			STREAMING::REQUEST_MODEL(uParam0->f_1140);
			func_372("REQUESTING SMUGGLERS HELI");
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1140))
			{
				*uParam2 = 1;
			}
			break;
		
		case 1:
			uParam1->f_2 = VEHICLE::CREATE_VEHICLE(uParam0->f_1140, uParam0->f_218[1].f_164, uParam0->f_218[1].f_167, 1, 1, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_2, 1, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_2, 1);
			uParam1->f_10 = PED::CREATE_PED(22, uParam0->f_1101, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_2, 0f, 4f, 0f), 0f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(uParam1->f_10, 736523883, 1000, 1, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_10, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_10, 1);
			PED::SET_PED_KEEP_TASK(uParam1->f_10, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_2, 0, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam1->f_2, 1084227584);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam1->f_2, 3);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_10, uParam1->f_46);
			*uParam2 = 2;
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_10, 0))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_10, 1) };
			}
			else
			{
				uParam1->f_35 = 1;
				*uParam2 = 3;
				break;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_203(PLAYER::PLAYER_PED_ID(), Var0, 1) < 50f)
				{
					TASK::TASK_LOOK_AT_ENTITY(uParam1->f_10, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_COMBAT_PED(uParam1->f_10, PLAYER::PLAYER_PED_ID(), 0, 16);
					*uParam2 = 3;
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_228(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		VEHICLE::DELETE_VEHICLE(&(uParam0->f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_10))
	{
		PED::DELETE_PED(&(uParam0->f_10));
	}
}

void func_229(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam1, 9);
	}
}

void func_230(var uParam0, var uParam1, int iParam2)
{
	if (uParam0[0]->f_66[*iParam2].f_19)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[*iParam2], 0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[*iParam2]))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE((*uParam1)[*iParam2]);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[*iParam2], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[*iParam2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE((*uParam1)[*iParam2]);
			func_372("STOPPING PLAYBACK RECORDING");
		}
	}
}

void func_231(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, var uParam6)
{
	AUDIO::TRIGGER_MUSIC_EVENT("OJDG2_TREV_FIRST");
	HUD::CLEAR_THIS_PRINT("DTRFKGR_06");
	func_234(uParam2, uParam0, *iParam3, 1);
	func_229(*uParam6, iParam3);
	uParam1->f_20[0] = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
	{
		OBJECT::DELETE_OBJECT(&(uParam1->f_5));
		func_372("DELETING smugArgs.oArmsPackage");
	}
	func_230(uParam0, uParam1, &iParam5);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3607))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3607);
		func_372("DELETING oFlareProp VIA SMUGGLERS PLAYER FIRST");
	}
	if (HUD::DOES_BLIP_EXIST((*uParam4)[0]))
	{
		HUD::REMOVE_BLIP(uParam4[0]);
		func_372("REMOVING myLocationBlip[0] VIA PLAYER FIRST");
	}
	*uParam6 = 1;
	func_233(uLocal_3354);
	if (Global_111638.f_19978.f_1 == 1)
	{
		HUD::CLEAR_GPS_CUSTOM_ROUTE();
	}
	func_228(uParam1);
}

int func_232(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_5, *uParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_233(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam0, 0);
	}
}

void func_234(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam2);
	iVar0 = iVar0;
	func_235(iParam2, uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam1->f_1147, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1, 1, 0);
			ENTITY::SET_ENTITY_RECORDS_COLLISIONS(*uParam0, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam0, iParam2, 0, uParam0->f_8, uParam0->f_11, 0, 0, 0, 0, 2, 1);
	}
	if (bParam3)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP_WEAPON", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TRAFFIC_GROUND_ENEMY_PICK_UP_WEAPON_MASTER", iParam2, 0, 0, 0);
	}
}

void func_235(int iParam0, var uParam1)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case -2128233223:
			uParam1->f_8 = { 0f, -1.56f, 0.9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -599568815:
			uParam1->f_8 = { 0f, -1.56f, 0.9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case 914654722:
			uParam1->f_8 = { 0f, -1.56f, 0.4f };
			uParam1->f_11 = { 0f, 0f, 90f };
			break;
		
		case 1177543287:
			uParam1->f_8 = { 0f, -1.56f, 0.9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -16948145:
			uParam1->f_8 = { 0f, -1.56f, 0.9f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case 1770332643:
			uParam1->f_8 = { 0f, -1.56f, 0.59f };
			uParam1->f_11 = { 0f, 0f, 0f };
			break;
		
		case -1661854193:
			uParam1->f_8 = { 0.3f, 0.35f, 0.04f };
			uParam1->f_11 = { 0f, 0f, 90f };
			break;
		
		case -1207771834:
			uParam1->f_8 = { 0f, -2f, 0.5f };
			uParam1->f_11 = { 0f, 0f, 90f };
			func_372("USING REBEL OFFSETS");
			break;
	}
	func_372("GRABBED OFFSETS FOR VEHICLE MODEL");
}

int func_236(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam2)
	{
		case 0:
			if (uParam0[0]->f_66[1].f_18)
			{
				if (uParam0[0]->f_66[1] == 1)
				{
					STREAMING::REQUEST_MODEL(uParam0[0]->f_66[1].f_1);
					STREAMING::REQUEST_MODEL(iLocal_3377);
					STREAMING::REQUEST_MODEL(iLocal_3378);
					STREAMING::REQUEST_ANIM_DICT("p_cargo_chute_s");
					func_372("REQUESTING CARGO AND PARACHUTE AND ANIMATION");
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3);
				}
			}
			if (uParam0[0]->f_66[1].f_18)
			{
				if (uParam0[0]->f_66[1] == 1)
				{
					if ((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3) && STREAMING::HAS_MODEL_LOADED(uParam0[0]->f_66[1].f_1)) && STREAMING::HAS_MODEL_LOADED(iLocal_3378)) && STREAMING::HAS_MODEL_LOADED(iLocal_3377)) && STREAMING::HAS_ANIM_DICT_LOADED("p_cargo_chute_s"))
					{
						func_372("GOING TO STATE - SMUGGLER_PLANE_STATE_01");
						*uParam2 = 1;
					}
					else
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3))
						{
						}
						if (STREAMING::HAS_MODEL_LOADED(uParam0[0]->f_66[1].f_1))
						{
						}
						if (STREAMING::HAS_MODEL_LOADED(iLocal_3378))
						{
						}
						if (STREAMING::HAS_MODEL_LOADED(iLocal_3377))
						{
						}
						if (STREAMING::HAS_ANIM_DICT_LOADED("p_cargo_chute_s"))
						{
						}
					}
				}
			}
			break;
		
		case 1:
			uParam1->f_4 = VEHICLE::CREATE_VEHICLE(uParam0[0]->f_66[1].f_1, uParam0[0]->f_66[1].f_5, 0f, 1, 1, 0);
			iLocal_3609 = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_4, 22, uParam0->f_1101, -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_3609, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1101);
			ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam1->f_4, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam1->f_4, 1);
			ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_4, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_4, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(uParam1->f_4, 0);
			ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_4, 1000);
			VEHICLE::CONTROL_LANDING_GEAR(uParam1->f_4, 3);
			VEHICLE::OPEN_BOMB_BAY_DOORS(uParam1->f_4);
			uParam1->f_5 = OBJECT::CREATE_OBJECT(iLocal_3377, uParam0[0]->f_66[1].f_5, 1, 1, 0);
			ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam1->f_5, 1);
			ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_5, 1000);
			OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam1->f_5, 1);
			ENTITY::SET_ENTITY_VISIBLE(uParam1->f_5, 0, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_5, 0))
			{
				uParam1->f_6 = OBJECT::CREATE_OBJECT(iLocal_3378, uParam0[0]->f_66[1].f_5, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam1->f_6, uParam1->f_5, 0, Local_3355, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam1->f_6, 1);
				ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_6, 1000);
				OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam1->f_6, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam1->f_6, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_4, 0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam1->f_5, uParam1->f_4, 0, 0f, -1.64f, -0.48f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			func_372("INSIDE STATE - SMUGGLER_PLANE_STATE_01");
			*uParam2 = 2;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[0], 0))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD((*uParam1)[0], uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_4))
						{
							if (uParam0[0]->f_66[1] == 1)
							{
								ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_4, 0);
								ENTITY::SET_ENTITY_COORDS(uParam1->f_4, uParam0[0]->f_66[1].f_5, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_QUATERNION(uParam1->f_4, uParam0[0]->f_66[1].f_11, uParam0[0]->f_66[1].f_12, uParam0[0]->f_66[1].f_13, uParam0[0]->f_66[1].f_14);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam1->f_4, uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3, 1);
								VEHICLE::SET_PLAYBACK_SPEED(uParam1->f_4, 1.2f);
								func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
								AUDIO::START_AUDIO_SCENE("PLANE_FLY_OVER_SCENE");
								*uParam2 = 3;
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uParam0[0]->f_168, uParam0[0]->f_66[1].f_8, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_4))
						{
							if (uParam0[0]->f_66[1] == 1)
							{
								ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_4, 0);
								ENTITY::SET_ENTITY_COORDS(uParam1->f_4, uParam0[0]->f_66[1].f_5, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_QUATERNION(uParam1->f_4, uParam0[0]->f_66[1].f_11, uParam0[0]->f_66[1].f_12, uParam0[0]->f_66[1].f_13, uParam0[0]->f_66[1].f_14);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uParam1->f_4, uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3, 1);
								VEHICLE::SET_PLAYBACK_SPEED(uParam1->f_4, 1.2f);
								func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
								*uParam2 = 3;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_4))
				{
					fVar0 = VEHICLE::GET_POSITION_IN_RECORDING(uParam1->f_4);
					if (fVar0 > uParam0[0]->f_66[1].f_17)
					{
						func_372("DROPPING PACKAGE");
						ENTITY::DETACH_ENTITY(uParam1->f_5, 1, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_5, 1, 1);
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_19))
						{
							func_233(uLocal_3354);
							uParam1->f_19 = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_5);
							HUD::SET_BLIP_COLOUR(uParam1->f_19, 2);
							func_34("DTRFKGR_06", 7500, 1);
							if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
							{
								HUD::REMOVE_BLIP(uParam3[0]);
							}
						}
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_5, 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_6, 1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_6, 0))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam1->f_6, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, 0, 1, 0, 0, 0);
						}
						func_372("STARTING PLAYBACK ON SMUGGLERS PLANE");
						*uParam2 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_5, 1, 1);
				if (!ENTITY::IS_ENTITY_ATTACHED(uParam1->f_5))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam1->f_5))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_5, 1);
						uParam1->f_42 = 1;
						ENTITY::PLAY_ENTITY_ANIM(uParam1->f_6, "p_cargo_chute_s_crumple", "p_cargo_chute_s", 0.5f, 0, 1, 0, 0, 0);
						if (!func_43(&(uParam1->f_65)))
						{
							func_40(&(uParam1->f_65));
						}
						*uParam2 = 5;
					}
				}
			}
			break;
		
		case 5:
			if (!uParam1->f_40)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_5, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_5, 1, 0f, 0f, 0f, 0f, 0f, 0.2f, 0, 1, 1, 1, 0, 1);
					uParam1->f_40 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6))
			{
				if (func_43(&(uParam1->f_65)))
				{
					if (func_37(&(uParam1->f_65)) > 1f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
						{
							ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_5, 1);
						}
						OBJECT::DELETE_OBJECT(&(uParam1->f_6));
						*uParam2 = 6;
					}
				}
			}
			break;
		
		case 6:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(886894755);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-2071229766);
			STREAMING::REMOVE_ANIM_DICT("p_cargo_chute_s");
			VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0[0]->f_66[1].f_2, uParam0[0]->f_66[1].f_3);
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_4, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam1->f_4))
					{
						AUDIO::STOP_AUDIO_SCENE("PLANE_FLY_OVER_SCENE");
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam1->f_4));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-644710429);
						*uParam2 = 7;
					}
					else
					{
						fVar0 = VEHICLE::GET_POSITION_IN_RECORDING(uParam1->f_4);
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_4))
						{
							AUDIO::STOP_AUDIO_SCENE("PLANE_FLY_OVER_SCENE");
							PED::DELETE_PED(&iLocal_3609);
							VEHICLE::DELETE_VEHICLE(&(uParam1->f_4));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-644710429);
							*uParam2 = 7;
						}
					}
				}
			}
			break;
		
		case 7:
			break;
	}
	return 0;
}

void func_237(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[0], 0))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[0], 1) };
	}
	if (!iLocal_3586)
	{
		if (SYSTEM::VDIST2(Var0, Var3) < 1225f && ENTITY::IS_ENTITY_ON_SCREEN((*uParam0)[0]))
		{
			if (func_8(uParam1, "ARMSAUD", "ARMS_SIGHT", 9, 1, 0, 0))
			{
				iLocal_3586 = 1;
			}
		}
	}
}

void func_238(var uParam0)
{
	if (Global_111638.f_19978.f_1 != 1)
	{
		func_291(&(uParam0[0]->f_107), 0);
	}
	iLocal_3607 = OBJECT::CREATE_OBJECT(445804908, uParam0[0]->f_107, 1, 1, 0);
}

void func_239(var uParam0, var uParam1, var uParam2)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!func_43(&uLocal_3604))
	{
		func_40(&uLocal_3604);
	}
	if (func_37(&uLocal_3604) > 1f)
	{
		fLocal_3570 = SYSTEM::VDIST(Var1, *uParam2);
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar0]))
				{
					Var4[iVar0] = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar0], 1) };
					fLocal_3571 = SYSTEM::VDIST(Var4[iVar0], *uParam2);
					fLocal_3572 = SYSTEM::VDIST(Var4[iVar0], Var1);
					if (func_242(&iVar0, uParam1))
					{
						VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[iVar0], 0.65f);
						func_372("SETTING PLAYBACK SPEED = 0.65 DUE TO DAMAGE TO TIRES");
						uParam1->f_33 = 0;
						return;
					}
					if (fLocal_3572 < 10f)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN((*uParam1)[iVar0]))
						{
							uParam1->f_32 = 1;
						}
						else
						{
							uParam1->f_32 = 0;
						}
					}
					else
					{
						uParam1->f_32 = 0;
					}
					if (fLocal_3571 < 150f)
					{
						VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[iVar0], (uParam0[0]->f_66[0].f_15 + 0.5f));
						uParam1->f_31 = 1;
					}
					else
					{
						uParam1->f_31 = 0;
					}
					if (!uParam1->f_32 && !uParam1->f_31)
					{
						if (uParam1->f_23)
						{
							func_241(uParam0, uParam1, &iVar0);
						}
						else
						{
							func_240(uParam0, uParam1, &iVar0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_37(&uLocal_3604) >= 2f)
	{
		func_41(&uLocal_3604);
	}
}

void func_240(var uParam0, var uParam1, int iParam2)
{
	if (fLocal_3570 > fLocal_3571)
	{
		VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[*iParam2], uParam0[0]->f_66[0].f_15);
	}
	else if (fLocal_3571 > (fLocal_3570 + 50f) && !ENTITY::IS_ENTITY_ON_SCREEN((*uParam1)[*iParam2]))
	{
		VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 + 0.6f));
	}
	else
	{
		VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 + 0.4f));
	}
}

void func_241(var uParam0, var uParam1, int iParam2)
{
	if (fLocal_3570 > fLocal_3571)
	{
		if (!fLocal_3572 > 75f)
		{
			VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 * uParam0[0]->f_66[0].f_16));
		}
		else if (!ENTITY::IS_ENTITY_ON_SCREEN((*uParam1)[*iParam2]) || ENTITY::IS_ENTITY_OCCLUDED((*uParam1)[*iParam2]))
		{
			VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[*iParam2], (uParam0[0]->f_66[0].f_15 - 0.2f));
		}
	}
}

int func_242(int iParam0, var uParam1)
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST((*uParam1)[*iParam0], 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST((*uParam1)[*iParam0], 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST((*uParam1)[*iParam0], 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST((*uParam1)[*iParam0], 5, 0))
	{
		return 1;
	}
	return 0;
}

void func_243(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
	{
		iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], -1, 0);
	}
	iVar8 = iVar8;
	uParam0[0]->f_66[0].f_4 = uParam0[0]->f_66[0].f_4;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam2, 0))
			{
				uVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(*iParam2);
				uVar1 = uVar1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	fLocal_3570 = SYSTEM::VDIST(Var2, *uParam3);
	Var5 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[0], 1) };
	fLocal_3571 = SYSTEM::VDIST(Var5, *uParam3);
	fLocal_3572 = SYSTEM::VDIST(Var5, Var2);
	if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[0], 0))
	{
		uVar0 = ENTITY::GET_ENTITY_SPEED((*uParam1)[0]);
		uVar0 = uVar0;
	}
	if (!uParam1->f_23)
	{
		if (fLocal_3571 < 200f)
		{
			if (!PED::IS_PED_INJURED(uParam1->f_7[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam1->f_7[0], (*uParam1)[0], 0))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam1->f_7[0], 50f);
					uParam1->f_31 = 1;
				}
			}
		}
		else
		{
			uParam1->f_31 = 0;
		}
	}
	if (bParam4)
	{
		if (!uParam1->f_31)
		{
			if (fLocal_3570 > fLocal_3571)
			{
				if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[0], 0)) && !PED::IS_PED_INJURED(uParam1->f_7[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uParam1->f_7[0], (*uParam1)[0], 0))
					{
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam1->f_7[0], 30f);
					}
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[0], 0)) && !PED::IS_PED_INJURED(uParam1->f_7[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam1->f_7[0], (*uParam1)[0], 0))
				{
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam1->f_7[0], 50f);
				}
			}
		}
	}
	else if (fLocal_3570 > fLocal_3571)
	{
		if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[0], 0)) && !PED::IS_PED_INJURED(uParam1->f_7[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam1->f_7[0], (*uParam1)[0], 0))
			{
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam1->f_7[0], 25f);
			}
		}
	}
}

int func_244(var uParam0, var uParam1, var uParam2)
{
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1136)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iVar0], 0) && !VEHICLE::IS_VEHICLE_STUCK_TIMER_UP((*uParam1)[iVar0], 0, 3000))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[(iVar1 + iVar2)], 0))
				{
					bVar4 = false;
				}
				else if (HUD::DOES_BLIP_EXIST(uParam1->f_14[(iVar1 + iVar2)]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_14[(iVar1 + iVar2)]));
					func_372("REMOVING BLIPS ON SMUGGLER PEDS");
				}
				iVar1++;
			}
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0);
			}
			if (PED::IS_PED_INJURED(iVar5))
			{
				func_230(uParam0, uParam1, &iVar0);
				if (!bLocal_3575)
				{
					if (func_221((*uParam1)[iVar0], 1069547520))
					{
						iVar1 = 0;
						while (iVar1 < uParam0->f_1137)
						{
							iVar2 = (iVar0 * uParam0->f_1137);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7[1], 1);
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[(iVar1 + iVar2)]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
							{
								if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0)))
								{
									if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0) && !ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), 355471868) != 1)
										{
											TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), (*uParam1)[iVar0], 0);
											bLocal_3575 = true;
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
			}
			else if (bLocal_3575)
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0);
				if (iVar5 != PLAYER::PLAYER_PED_ID())
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar5, -235832601) != 1)
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar5, (*uParam1)[iVar0], uParam0[0]->f_66[iVar0].f_4, 262144, 0, 24, -1, -1f, 0, 1073741824);
					}
				}
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1137)
			{
				iVar2 = (iVar0 * uParam0->f_1137);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_12[0]))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_12[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(uParam1->f_14[(iVar1 + iVar2)]))
				{
					uParam1->f_14[(iVar1 + iVar2)] = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_7[(iVar1 + iVar2)]);
					HUD::SET_BLIP_SCALE(uParam1->f_14[(iVar1 + iVar2)], 0.7f);
					HUD::SET_BLIP_COLOUR(uParam1->f_14[(iVar1 + iVar2)], 1);
				}
				if (ENTITY::IS_ENTITY_DEAD(uParam1->f_7[(iVar1 + iVar2)], 0))
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_14[(iVar1 + iVar2)]))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_14[(iVar1 + iVar2)]));
						func_372("REMOVING BLIPS ON SMUGGLER PEDS");
					}
				}
				else
				{
					if (!uParam1->f_43[(iVar1 + iVar2)])
					{
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						TASK::OPEN_SEQUENCE_TASK(&uVar3);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(uVar3);
						TASK::TASK_PERFORM_SEQUENCE(uParam1->f_7[(iVar1 + iVar2)], uVar3);
						TASK::CLEAR_SEQUENCE_TASK(&uVar3);
						uParam1->f_43[(iVar1 + iVar2)] = 1;
					}
					bVar4 = false;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			if (HUD::DOES_BLIP_EXIST(uParam1->f_12[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_12[iVar0]));
				func_372("REMOVING blipSmugglersCars 02");
			}
			func_230(uParam0, uParam1, &iVar0);
			iVar0++;
		}
		iLocal_3583 = 1;
		iLocal_3583 = iLocal_3583;
		if (!iLocal_3587)
		{
			if (!iLocal_3584)
			{
				iVar6 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 6);
				if (iVar6 == 0)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL01", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 1)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL02", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 2)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL03", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 3)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL04", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 4)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL05", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
				else if (iVar6 == 5)
				{
					if (func_8(uParam2, "ARMSAUD", "ARMS_KILL06", 9, 1, 0, 0))
					{
						iLocal_3584 = 1;
					}
				}
			}
		}
		func_372("RETURING TRUE ON SMUGGLER_PED_DEAD_CHECK");
		return 1;
	}
	return 0;
}

int func_245(var uParam0, var uParam1)
{
	if (iLocal_3579)
	{
		return 0;
	}
	if ((((func_246(uParam1->f_7[0], (*uParam1)[0], &uLocal_3593, &uLocal_3600, 0, 1, 0, 1, 1) || func_246(uParam1->f_7[1], (*uParam1)[0], &uLocal_3593, &uLocal_3600, 0, 1, 0, 1, 1)) || uParam1->f_24) || uParam1->f_39) || uParam1->f_23)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1137)
		{
			iVar2 = (iVar0 * uParam0->f_1137);
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[(iVar1 + iVar2)], 0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_7[(iVar1 + iVar2)], uParam1->f_46);
				if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[0], 0))
				{
					iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[0], 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
				{
					TASK::TASK_COMBAT_PED(iVar3, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			iVar1++;
		}
		iLocal_3579 = 1;
		return 1;
	}
	return 0;
}

int func_246(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!func_254(*uParam2, 1))
		{
			if (func_253(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_254(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_254(*uParam2, 4))
		{
			if (func_251(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_254(*uParam2, 8))
		{
			if (func_250(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_254(*uParam2, 128);
		if (bParam4)
		{
			if (func_247(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_254(*uParam2, 16))
		{
			if (func_247(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_247(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam3)
	{
		if (!bLocal_3557)
		{
			iLocal_3558 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_3557 = true;
		}
		iLocal_3559 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_3560 = (iLocal_3558 - iLocal_3559);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_3560) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_3557)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_3560) > 100f)
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
	if (func_249(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_248(iParam0, 1) < 1.5f)
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

float func_248(int iParam0, int iParam1)
{
	return func_159(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

int func_249(int iParam0, int iParam1)
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

int func_250(int iParam0, int iParam1, var uParam2)
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

int func_251(int iParam0, int iParam1, var uParam2, bool bParam3)
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
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_252(iVar3))
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

int func_252(int iParam0)
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
						if (func_159(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
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

int func_253(int iParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_248(iParam0, 1) < uParam1->f_2)
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

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_255(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (bLocal_3576)
	{
		if (*uParam1 > 0 && *uParam1 < 6)
		{
			if (*uParam3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_12[0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_12[0]));
					func_372("REMOVING SMUGGLER'S BLIP DUE TO BEING WANTED");
				}
			}
			else if (!*uParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam0)[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_12[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7[0], 0) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_7[1], 0))
							{
								uParam0->f_12[0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam0)[0]);
								HUD::SET_BLIP_COLOUR(uParam0->f_12[0], 1);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_12[0], "DTRFKGR_BLIP03");
								func_372("ADDING BACK IN SMUGGLER'S BLIP DUE TO PLAYER LOSING WANTED LEVEL");
							}
						}
					}
				}
			}
		}
	}
}

void func_256(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (bLocal_3576)
	{
		if (*uParam3)
		{
			if (!*uParam2)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
				{
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_12[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7[0], 0) || !ENTITY::IS_ENTITY_DEAD(uParam0->f_7[1], 0))
						{
							if (PED::IS_PED_IN_VEHICLE(uParam0->f_7[0], (*uParam0)[0], 0) || PED::IS_PED_IN_VEHICLE(uParam0->f_7[1], (*uParam0)[0], 0))
							{
								uParam0->f_12[0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam0)[0]);
								HUD::SET_BLIP_COLOUR(uParam0->f_12[0], 1);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_12[0], "DTRFKGR_BLIP03");
							}
						}
					}
				}
			}
		}
	}
}

void func_257(var uParam0, var uParam1, var uParam2)
{
	if (!*uParam2)
	{
		PED::ADD_RELATIONSHIP_GROUP("SmugglerEnemies", &(uParam1->f_46));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, uParam1->f_46);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uParam1->f_46, 1862763509);
		func_372("SETTING SMUGGLERS RELATIONSHIP GROUPS");
		iVar0 = 0;
		while (iVar0 < uParam0->f_1136)
		{
			(*uParam1)[iVar0] = VEHICLE::CREATE_VEHICLE(uParam0->f_1138[iVar0], uParam0[0]->f_158[iVar0], uParam0[0]->f_162[iVar0], 1, 1, 0);
			func_258(uParam0, uParam1, iVar0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam1)[iVar0], 1, 1);
			VEHICLE::SET_VEHICLE_EXTRA((*uParam1)[iVar0], 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1138[iVar0]);
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED((*uParam1)[iVar0], 100f);
			iVar0++;
		}
		func_372("CREATING SMUGGLERS");
		*uParam2 = 1;
		func_372("SET_WANTED_LEVEL_MULTIPLIER TO ZERO VIA SMUGGLERS MODE");
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	}
}

void func_258(var uParam0, var uParam1, int iParam2)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam1)[iParam2], 0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY((*uParam1)[iParam2], 1084227584);
		VEHICLE::SET_VEHICLE_ENGINE_ON((*uParam1)[iParam2], 1, 1, 0);
		ENTITY::SET_ENTITY_PROOFS((*uParam1)[iParam2], 0, 0, 0, 0, 0, 0, 0, 0);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED((*uParam1)[iParam2], 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL((*uParam1)[iParam2], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL((*uParam1)[iParam2], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES((*uParam1)[iParam2], 1);
		iVar0 = 0;
		while (iVar0 < uParam0->f_1137)
		{
			iVar1 = (iParam2 * uParam0->f_1137);
			uParam1->f_7[(iVar0 + iVar1)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam1)[iParam2], 22, uParam0->f_1101, uParam0->f_1127[iVar0], 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7[(iVar0 + iVar1)], 0))
			{
				PED::SET_PED_ACCURACY(uParam1->f_7[(iVar0 + iVar1)], 15);
				PED::SET_PED_MAX_HEALTH(uParam1->f_7[(iVar0 + iVar1)], 100);
				PED::SET_PED_COMBAT_ABILITY(uParam1->f_7[(iVar0 + iVar1)], 1);
				PED::SET_PED_COMBAT_RANGE(uParam1->f_7[(iVar0 + iVar1)], 2);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam1->f_7[(iVar0 + iVar1)], 1);
				PED::SET_PED_KEEP_TASK(uParam1->f_7[(iVar0 + iVar1)], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_7[(iVar0 + iVar1)], 3, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_7[(iVar0 + iVar1)], 1);
				WEAPON::GIVE_WEAPON_TO_PED(uParam1->f_7[(iVar0 + iVar1)], 324215364, 1000, 1, 1);
				PED::SET_PED_DIES_IN_WATER(uParam1->f_7[(iVar0 + iVar1)], 1);
				PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(uParam1->f_7[(iVar0 + iVar1)], 1);
				PED::SET_PED_CONFIG_FLAG(uParam1->f_7[(iVar0 + iVar1)], 29, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1101);
			}
			iVar0++;
		}
	}
}

void func_259(var uParam0, int iParam1, int iParam2)
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
		if (func_186(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_186(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_260()
{
	func_8(&uLocal_5830, "ARMSAUD", "ARMS_PACK", 9, 1, 0, 0);
	iLocal_6026 = 0;
	HUD::CLEAR_THIS_PRINT("DTRFKGR_06");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3607))
	{
		OBJECT::DELETE_OBJECT(&iLocal_3607);
		func_372("DELETING oFlareProp");
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_6142[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_6142[0]));
		func_372("REMOVING myLocationBlip[0] VIA PLAYER REACHING PICKUP LOCATION");
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3354))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3354, 0);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_7))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_5543.f_7, 0);
			OBJECT::DELETE_OBJECT(&(uLocal_5543.f_7));
			func_372("DELETING planeDropArgs.oPackage");
		}
		iVar0++;
	}
	if (bLocal_6036)
	{
	}
	if (bLocal_6023)
	{
	}
	if (((bLocal_6036 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0))
	{
		Local_6078[0] = { 0f, 0f, 0f };
	}
	else
	{
		Local_6078[0] = { Local_4356.f_218[0].f_110 };
	}
	if (HUD::DOES_BLIP_EXIST(Local_5574.f_19))
	{
		HUD::REMOVE_BLIP(&(Local_5574.f_19));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_5543.f_10))
	{
		HUD::REMOVE_BLIP(&(uLocal_5543.f_10));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_8))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_5543.f_8));
	}
	func_234(&Local_5560, &Local_4356, iLocal_6135, 1);
	bLocal_6006 = true;
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6135, 9);
}

int func_261()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_5543.f_9))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_9) && !ENTITY::IS_ENTITY_DEAD(uLocal_5543.f_9, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_6135, uLocal_5543.f_9))
			{
				uLocal_5543.f_14 = 1;
				return 1;
			}
		}
	}
	return 0;
}

int func_263(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, var uParam6, var uParam7, int iParam8, var uParam9, int iParam10, var uParam11, bool bParam12, bool bParam13, char* sParam14, var uParam15)
{
	if (*uParam1 > 2 && *uParam1 < 6)
	{
		if (uParam4->f_29)
		{
			if (*uParam7)
			{
				*uParam6[0] = { 0f, 0f, 0f };
				iVar0 = 0;
				while (iVar0 < uParam0->f_1094)
				{
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					iVar0++;
				}
			}
			else if (*uParam3)
			{
				*uParam6[0] = { uParam0->f_218[0].f_110 };
			}
		}
	}
	if (*bParam13)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
			{
				iVar1 = 0;
				while (iVar1 < uParam0->f_1108)
				{
					iVar2 = (iVar0 * uParam0->f_1095);
					func_273(&(Local_3391[iVar2]));
					iVar1++;
				}
			}
			iVar0++;
		}
		if (uParam4->f_36)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_273(&(Local_3472[iVar0]));
				iVar0++;
			}
		}
	}
	switch (*uParam1)
	{
		case 0:
			if (bLocal_3373)
			{
				uParam0->f_1101 = 1466037421;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
			}
			else if (bLocal_3374)
			{
				uParam0->f_1101 = 62440720;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
			}
			else if (bLocal_3375)
			{
				uParam0->f_1101 = 1822107721;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
			}
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1101))
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			if (!uParam4->f_35)
			{
				PED::ADD_RELATIONSHIP_GROUP("ambushGroup", &(uParam4->f_22));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, uParam4->f_22);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uParam4->f_22, 1862763509);
				func_271(uParam0, uParam4, uParam2);
				AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_PACKAGE");
				func_372("SETTING MAX WANTERD LEVEL TO ZERO VIA CREATE AMBUSH");
				uParam4->f_35 = 1;
			}
			*uParam1 = 2;
			break;
		
		case 2:
			func_271(uParam0, uParam4, uParam2);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (!CAM::IS_SPHERE_VISIBLE(uParam0[0][iVar0]->f_5, 10f))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0], 0))
						{
							bVar4 = true;
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE((*uParam4)[iVar0], uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4, 1);
							VEHICLE::SET_PLAYBACK_SPEED((*uParam4)[iVar0], 1.5f);
						}
					}
				}
				iVar0++;
			}
			*uParam3 = 1;
			*iParam10 = 1;
			*uParam6[0] = { 0f, 0f, 0f };
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_372("SETTING WANTED LEVEL MULTIPLIER TO ZERO");
			if (bVar4)
			{
				func_372("REPLAY IS TRUE GOING TO STATE - AMBUSH_REPLAY");
				*uParam1 = 3;
			}
			break;
		
		case 3:
			func_269(uParam0, uParam4, uParam2, 1);
			func_271(uParam0, uParam4, uParam2);
			bVar4 = false;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE((*uParam4)[iVar0], 0))
					{
						iVar1 = 0;
						while (iVar1 < uParam0->f_1108)
						{
							iVar2 = (iVar0 * uParam0->f_1095);
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam4)[iVar0]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar6);
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
								{
									TASK::TASK_LEAVE_VEHICLE(0, (*uParam4)[iVar0], 256);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uVar6);
								if (!PED::IS_PED_INJURED((*uParam2)[(iVar1 + iVar2)]))
								{
									TASK::TASK_PERFORM_SEQUENCE((*uParam2)[(iVar1 + iVar2)], uVar6);
									func_268(uParam4, uParam11, bParam12);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar6);
							}
							else
							{
								bVar4 = true;
							}
							iVar1++;
						}
					}
				}
				iVar0++;
			}
			if (!bVar4)
			{
				if (!func_43(&(uParam4->f_23)))
				{
					func_40(&(uParam4->f_23));
				}
				func_372("bReplay IS FALSE GOING TO STATE - AMBUSH_CREATION_BUFFER");
				*uParam1 = 4;
			}
			break;
		
		case 4:
			func_269(uParam0, uParam4, uParam2, 1);
			func_268(uParam4, uParam11, bParam12);
			func_267(uParam0, uParam4, uParam2);
			func_271(uParam0, uParam4, uParam2);
			if (func_43(&(uParam4->f_23)))
			{
				if (func_37(&(uParam4->f_23)) > 5f)
				{
					if (uParam4->f_36)
					{
						func_266(uParam4, uParam0);
						func_372("bReplay IS FALSE GOING TO STATE - AMBUSH_FIGHT");
						*uParam1 = 5;
					}
				}
			}
			break;
		
		case 5:
			bVar3 = true;
			bVar5 = true;
			func_269(uParam0, uParam4, uParam2, 1);
			func_268(uParam4, uParam11, bParam12);
			func_267(uParam0, uParam4, uParam2);
			func_265(uParam0, uParam4);
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], 0))
				{
				}
				else
				{
					bVar3 = false;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], 0) && !PED::IS_PED_INJURED((*uParam2)[iVar0]))
				{
					fVar7 = func_264(PLAYER::PLAYER_PED_ID(), (*uParam2)[iVar0]);
					if (fVar7 < 300f)
					{
						bVar5 = false;
					}
					if (fVar7 > 150f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE((*uParam2)[iVar0], 0))
						{
							fVar11 = ENTITY::GET_ENTITY_SPEED((*uParam2)[iVar0]);
							if (fVar11 < 2f)
							{
								if (!func_43(&uLocal_3388))
								{
									func_40(&uLocal_3388);
								}
								if (func_37(&uLocal_3388) > 5f)
								{
									PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS((*uParam2)[iVar0], 1), &Var8, 1, 1077936128, 0);
									if (!func_195(Var8))
									{
										if (ENTITY::IS_ENTITY_OCCLUDED((*uParam2)[iVar0]))
										{
											PED::SET_PED_COORDS_KEEP_VEHICLE((*uParam2)[iVar0], Var8);
											func_41(&uLocal_3388);
										}
									}
								}
							}
						}
					}
				}
				iVar0++;
			}
			if (uParam4->f_36)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (ENTITY::IS_ENTITY_DEAD(uParam4->f_16[iVar0], 0))
					{
					}
					else
					{
						bVar3 = false;
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam4->f_16[iVar0], 0))
					{
						fVar7 = func_264(PLAYER::PLAYER_PED_ID(), uParam4->f_16[iVar0]);
						if (fVar7 < 300f)
						{
							bVar5 = false;
						}
					}
					iVar0++;
				}
			}
			if (bVar3 || bVar5)
			{
				if (bVar3)
				{
				}
				if (bVar5)
				{
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam4[iVar0]);
						func_372("SETTING AMBUSH VEHICLE AS NO LONGER NEEDED");
					}
					iVar0++;
				}
				*uParam3 = 0;
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				*uParam1 = 6;
				SYSTEM::SETTIMERA(0);
			}
			break;
		
		case 6:
			*bParam5 = 0;
			*iParam10 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
					{
						VEHICLE::DELETE_VEHICLE(uParam4[iVar0]);
					}
					VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < uParam0->f_1094)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED((*uParam2)[iVar0]))
					{
						PED::DELETE_PED(uParam2[iVar0]);
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam2[iVar0]);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam4->f_16[iVar0]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uParam4->f_16[iVar0]))
					{
						PED::DELETE_PED(&(uParam4->f_16[iVar0]));
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam4->f_16[iVar0]));
					}
				}
				iVar0++;
			}
			if (!*bParam13)
			{
				func_34("DTRFKGR_03a", 7500, 1);
				StringCopy(sParam14, "DTRFKGR_03a", 32);
				if (!HUD::DOES_BLIP_EXIST((*uParam15)[0]))
				{
					(*uParam15)[0] = HUD::ADD_BLIP_FOR_COORD(uParam0->f_218[0].f_110);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE((*uParam15)[0], "DTRFKGR_BLIP07");
				}
			}
			*uParam6[0] = { uParam0->f_218[0].f_110 };
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_1108)
					{
						iVar2 = (iVar0 * uParam0->f_1095);
						func_273(&(Local_3391[iVar2]));
						iVar1++;
					}
				}
				iVar0++;
			}
			if (uParam4->f_36)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_273(&(Local_3472[iVar0]));
					iVar0++;
				}
			}
			iLocal_3368 = 0;
			*uParam9 = MISC::GET_GAME_TIMER();
			AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_ENEMIES_DEAD");
			return 1;
			break;
	}
	return 0;
}

float func_264(int iParam0, int iParam1)
{
	return func_159(iParam0, iParam1, 1);
}

void func_265(var uParam0, var uParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = SYSTEM::VDIST2(Var1, uParam0[0]->f_107);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_16[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_16[iVar0], 0))
			{
				if (fVar4 > 5625f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_16[iVar0], 1, 1);
						if (iVar0 == 0)
						{
							if (!uParam1->f_8[iVar0])
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar5);
								if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_5[0], 0))
								{
									TASK::TASK_ENTER_VEHICLE(0, uParam1->f_5[0], 20000, -1, 1073741824, 1, 0);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uVar5);
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_16[iVar0], 0))
								{
									TASK::TASK_PERFORM_SEQUENCE(uParam1->f_16[iVar0], uVar5);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar5);
								uParam1->f_8[iVar0] = 1;
							}
						}
						else if (iVar0 == 1)
						{
							if (!uParam1->f_8[iVar0])
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar5);
								if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5[1]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_5[1], 0))
								{
									TASK::TASK_ENTER_VEHICLE(0, uParam1->f_5[1], 20000, -1, 1073741824, 1, 0);
								}
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uVar5);
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_16[iVar0], 0))
								{
									TASK::TASK_PERFORM_SEQUENCE(uParam1->f_16[iVar0], uVar5);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uVar5);
								uParam1->f_8[iVar0] = 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_266(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_195(uParam1[0]->f_176[iVar0]))
		{
			if (!CAM::IS_SPHERE_VISIBLE(uParam1[0][iVar0]->f_5, 10f))
			{
				if (!uParam0->f_19[iVar0])
				{
					uParam0->f_16[iVar0] = PED::CREATE_PED(22, uParam1->f_1101, uParam1[0]->f_176[iVar0], 0, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_16[iVar0], 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_16[iVar0], uParam0->f_22);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_16[iVar0], 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_16[iVar0], 50, 1);
					PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_16[iVar0], 2);
					PED::SET_PED_KEEP_TASK(uParam0->f_16[iVar0], 1);
					if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_16[iVar0], -494615257, -1, 1, 1);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_16[iVar0], -494615257, -1, 1, 1);
					}
					TASK::TASK_COMBAT_PED(uParam0->f_16[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
					uParam0->f_19[iVar0] = 1;
					SYSTEM::WAIT(1000);
				}
			}
		}
		iVar0++;
	}
}

void func_267(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1108)
			{
				iVar2 = (iVar0 * uParam0->f_1095);
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[(iVar1 + iVar2)]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
				{
					if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0)))
					{
						if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0) && !ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), 355471868) != 1)
							{
								TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], 0, 0), (*uParam1)[iVar0], 0);
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0), 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT((*uParam1)[iVar0], -1, 0), PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_268(var uParam0, var uParam1, var uParam2)
{
	if (!uParam0->f_34)
	{
		if (*uParam2)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_8(uParam1, "ARMSAUD", "ARMS_GR13C", 9, 0, 0, 0))
					{
						func_372("PLAYING CONVO - ARMS_GR13C");
						uParam0->f_34 = 1;
					}
				}
			}
		}
	}
}

void func_269(var uParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_1108)
			{
				iVar2 = (iVar0 * uParam0->f_1095);
				if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[(iVar1 + iVar2)]))
				{
					if (!PED::IS_PED_INJURED((*uParam2)[(iVar1 + iVar2)]) && func_248((*uParam2)[(iVar1 + iVar2)], 1) > 450f)
					{
						ENTITY::SET_ENTITY_HEALTH((*uParam2)[(iVar1 + iVar2)], 0, 0);
					}
					func_270((*uParam2)[(iVar1 + iVar2)], &(Local_3391[(iVar1 + iVar2)]), -1, 0, iParam3, 0, -1082130432, 0, -1, -1, 1);
					if (!bLocal_3376)
					{
						bLocal_3376 = true;
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (uParam1->f_36)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PED::IS_PED_INJURED(uParam1->f_16[iVar0]) && func_248(uParam1->f_16[iVar0], 1) > 450f)
			{
				ENTITY::SET_ENTITY_HEALTH(uParam1->f_16[iVar0], 0, 0);
			}
			func_270(uParam1->f_16[iVar0], &(Local_3472[iVar0]), -1, 0, iParam3, 0, -1082130432, 0, -1, -1, 1);
			iVar0++;
		}
	}
}

int func_270(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, uParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
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
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(iParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam7);
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

void func_271(var uParam0, var uParam1, var uParam2)
{
	if (!func_43(&(uParam1->f_26)))
	{
		func_40(&(uParam1->f_26));
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 0)
		{
			if (!CAM::IS_SPHERE_VISIBLE(uParam0[0][iVar0]->f_5, 10f))
			{
				if (!uParam1->f_11[iVar0])
				{
					if (func_37(&(uParam1->f_26)) > 1f)
					{
						(*uParam1)[iVar0] = VEHICLE::CREATE_VEHICLE(uParam0[0][iVar0]->f_1, uParam0[0][iVar0]->f_5, 0f, 1, 1, 0);
						ENTITY::SET_ENTITY_COORDS((*uParam1)[iVar0], uParam0[0][iVar0]->f_5, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_QUATERNION((*uParam1)[iVar0], uParam0[0][iVar0]->f_8, uParam0[0][iVar0]->f_9, uParam0[0][iVar0]->f_10, uParam0[0][iVar0]->f_11);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam1)[iVar0], 1, 1);
						ENTITY::SET_ENTITY_HEALTH((*uParam1)[iVar0], 2000, 0);
						VEHICLE::MODIFY_VEHICLE_TOP_SPEED((*uParam1)[iVar0], 30f);
						iVar1 = 0;
						while (iVar1 < uParam0->f_1108)
						{
							iVar2 = (iVar0 * uParam0->f_1095);
							(*uParam2)[(iVar1 + iVar2)] = PED::CREATE_PED_INSIDE_VEHICLE((*uParam1)[iVar0], 22, uParam0->f_1101, uParam0->f_1127[iVar1], 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_1101);
							func_272((*uParam2)[(iVar1 + iVar2)], uParam1->f_22, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam2)[(iVar1 + iVar2)], 1);
							PED::SET_PED_COMBAT_ATTRIBUTES((*uParam2)[(iVar1 + iVar2)], 69, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES((*uParam2)[(iVar1 + iVar2)], 70, 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam2)[(iVar1 + iVar2)], uParam1->f_22);
							PED::SET_PED_COMBAT_ATTRIBUTES((*uParam2)[(iVar1 + iVar2)], 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES((*uParam2)[(iVar1 + iVar2)], 3, 0);
							PED::SET_PED_CONFIG_FLAG((*uParam2)[(iVar1 + iVar2)], 214, 1);
							iVar1++;
						}
						func_41(&(uParam1->f_26));
						uParam1->f_11[iVar0] = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_272(int iParam0, var uParam1, int iParam2)
{
	PED::SET_PED_COMBAT_ABILITY(uParam0, 1);
	PED::SET_PED_COMBAT_RANGE(iParam0, 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, 1);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
	WEAPON::GIVE_WEAPON_TO_PED(iParam0, 324215364, -1, 1, 1);
	PED::SET_PED_ACCURACY(iParam0, 20);
	PED::SET_PED_KEEP_TASK(iParam0, iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
	PED::SET_PED_SEEING_RANGE(iParam0, 1000f);
}

void func_273(var uParam0)
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

int func_274(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != *iParam0)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_275()
{
	if (!iLocal_6044)
	{
		if (uLocal_5543.f_14)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_9) && !ENTITY::IS_ENTITY_OCCLUDED(uLocal_5543.f_9)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, 25f, 25f, 25f, 0, 1, 0))
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3354))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_3354, 0);
				}
				iLocal_6044 = 1;
			}
		}
	}
}

void func_276()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_5506.f_5[iVar0]))
		{
			if (!func_195(Local_4356[0].f_183[iVar0]))
			{
				Local_5506.f_5[iVar0] = VEHICLE::CREATE_VEHICLE(-1207771834, Local_4356[0].f_183[iVar0], 0f, 1, 1, 0);
			}
		}
		iVar0++;
	}
}

void func_277()
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, Local_4356[0].f_175, Local_4356[0].f_175, 250f, 1, 1, 0) || uLocal_6035)
	{
		func_278(&Local_4356, &uLocal_5543, &uLocal_3640, &uLocal_6142);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_6) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_5543.f_6, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_5543.f_6))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_5543.f_6, 1) };
			if (!func_195(Var0))
			{
				fVar7 = SYSTEM::VDIST2(Var0, Local_4356[0].f_107);
			}
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!func_195(Var3))
			{
				fVar6 = SYSTEM::VDIST2(Var3, Local_4356[0].f_107);
			}
			if (fVar6 < fVar7)
			{
				VEHICLE::SET_PLAYBACK_SPEED(uLocal_5543.f_6, 1.3f);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(uLocal_5543.f_6, 1f);
			}
		}
		else if (uLocal_5543.f_14)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_3500);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_5543.f_6));
		}
	}
}

void func_278(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar2 = 0;
	switch (*uParam2)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					STREAMING::REQUEST_MODEL(uParam0[0][iVar0]->f_1);
					VEHICLE::REQUEST_VEHICLE_RECORDING(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4);
				}
				iVar0++;
			}
			STREAMING::REQUEST_MODEL(iLocal_3377);
			STREAMING::REQUEST_MODEL(iLocal_3378);
			STREAMING::REQUEST_ANIM_DICT("p_cargo_chute_s");
			if (bLocal_3373)
			{
				uParam0->f_1101 = 1466037421;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
			}
			else if (bLocal_3374)
			{
				uParam0->f_1101 = 62440720;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
			}
			else if (bLocal_3375)
			{
				uParam0->f_1101 = 1822107721;
				STREAMING::REQUEST_MODEL(uParam0->f_1101);
				func_372("UPDATE PLANE DROP: REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4) && STREAMING::HAS_MODEL_LOADED(uParam0[0][iVar0]->f_1)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_1101))
					{
						iVar2 = 1;
					}
				}
				iVar0++;
			}
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_3377) && STREAMING::HAS_MODEL_LOADED(iLocal_3378)) && STREAMING::HAS_ANIM_DICT_LOADED("p_cargo_chute_s")) && iVar2)
			{
				func_372("GOING TO STATE - PLANE_DROP_CREATE");
				*uParam2 = 1;
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					(*uParam1)[iVar0] = VEHICLE::CREATE_VEHICLE(uParam0[0][iVar0]->f_1, uParam0[0][iVar0]->f_5, 0f, 1, 1, 0);
					uParam1->f_6 = (*uParam1)[iVar0];
					uLocal_3500 = PED::CREATE_PED_INSIDE_VEHICLE(uParam1->f_6, 22, uParam0->f_1101, -1, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uParam1->f_6, 1, 1, 0);
					ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_6, 1500);
					VEHICLE::CONTROL_LANDING_GEAR(uParam1->f_6, 3);
					VEHICLE::OPEN_BOMB_BAY_DOORS(uParam1->f_6);
					uParam1->f_7 = OBJECT::CREATE_OBJECT(iLocal_3377, uParam0[0][iVar0]->f_5, 1, 1, 0);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(uParam1->f_7, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_7, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_7, 1500);
					ENTITY::SET_ENTITY_VISIBLE(uParam1->f_7, 0, 0);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam1->f_7, 1);
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam1->f_7, (*uParam1)[iVar0], 0, 0f, -1.64f, -0.48f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_7, 0))
					{
						uParam1->f_8 = OBJECT::CREATE_OBJECT(iLocal_3378, uParam0[0][iVar0]->f_5, 1, 1, 0);
						OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam1->f_8, 1);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam1->f_8, uParam1->f_7, 0, Local_3355, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						ENTITY::SET_ENTITY_VISIBLE(uParam1->f_8, 0, 0);
					}
					ENTITY::SET_ENTITY_COORDS((*uParam1)[iVar0], uParam0[0][iVar0]->f_5, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_QUATERNION((*uParam1)[iVar0], uParam0[0][iVar0]->f_8, uParam0[0][iVar0]->f_9, uParam0[0][iVar0]->f_10, uParam0[0][iVar0]->f_11);
					func_372("INSIDE STATE - PLANE_DROP_CREATE");
					*uParam2 = 2;
				}
				iVar0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE((*uParam1)[iVar0], uParam0[0][iVar0]->f_3, uParam0[0][iVar0]->f_4, 1);
						VEHICLE::SET_PLAYBACK_SPEED((*uParam1)[iVar0], 1.1f);
						AUDIO::START_AUDIO_SCENE("PLANE_FLY_OVER_SCENE");
						uParam1->f_15 = 1;
						func_372("STARTING PLAYBACK");
						*uParam2 = 3;
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar0]))
						{
							fVar1 = VEHICLE::GET_POSITION_IN_RECORDING((*uParam1)[iVar0]);
							Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar0], 1) };
							Var3 = { Var3 };
							if (fVar1 > uParam0[0][iVar0]->f_12)
							{
								func_372("DROPPING PACKAGE");
								ENTITY::DETACH_ENTITY(uParam1->f_7, 1, 1);
								ENTITY::SET_ENTITY_VISIBLE(uParam1->f_7, 1, 0);
								ENTITY::SET_ENTITY_VISIBLE(uParam1->f_8, 1, 0);
								if (!HUD::DOES_BLIP_EXIST(uParam1->f_10))
								{
									func_233(uLocal_3354);
									uParam1->f_10 = HUD::ADD_BLIP_FOR_ENTITY(uParam1->f_7);
									HUD::SET_BLIP_COLOUR(uParam1->f_10, 2);
									if (HUD::DOES_BLIP_EXIST((*uParam3)[0]))
									{
										HUD::REMOVE_BLIP(uParam3[0]);
									}
									func_34("DTRFKGR_06", 7500, 1);
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_7, 1, 0f, 0f, 0f, 0f, 0f, 0.5f, 0, 1, 1, 1, 0, 1);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(uParam1->f_7, 1);
								if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, 0))
								{
									ENTITY::PLAY_ENTITY_ANIM(uParam1->f_8, "p_cargo_chute_s_deploy", "p_cargo_chute_s", 1f, 0, 1, 0, 0, 0);
								}
								ENTITY::SET_ENTITY_LOD_DIST(uParam1->f_6, 500);
								*uParam2 = 4;
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 4:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar0]))
					{
						fVar1 = VEHICLE::GET_POSITION_IN_RECORDING((*uParam1)[iVar0]);
					}
				}
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam1->f_7, 1, 1);
						if (!ENTITY::IS_ENTITY_ATTACHED(uParam1->f_7))
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam1->f_7))
							{
								uParam1->f_14 = 1;
								uParam1->f_9 = uParam1->f_7;
								ENTITY::DETACH_ENTITY(uParam1->f_8, 1, 1);
								ENTITY::PLAY_ENTITY_ANIM(uParam1->f_8, "p_cargo_chute_s_crumple", "p_cargo_chute_s", 0.5f, 0, 1, 0, 0f, 512);
								ENTITY::SET_ENTITY_COLLISION(uParam1->f_8, 0, 0);
								if (!func_43(&(uParam1->f_11)))
								{
									func_40(&(uParam1->f_11));
								}
								if (uParam1->f_14)
								{
									func_372("planeDropArgs.bCargoHasLanded = TRUE");
								}
								func_372("ENTITY HAS COLLIDED");
								*uParam2 = 5;
							}
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_8))
			{
				if (func_43(&(uParam1->f_11)))
				{
					if (func_37(&(uParam1->f_11)) > 1f)
					{
						iVar0 = 0;
						while (iVar0 < 5)
						{
							if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
									{
										ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_7, 1);
									}
								}
							}
							iVar0++;
						}
						OBJECT::DELETE_OBJECT(&(uParam1->f_8));
						*uParam2 = 6;
					}
				}
			}
			break;
		
		case 6:
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (uParam0[0][iVar0]->f_2 && (*uParam0[0])[iVar0] == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE((*uParam1)[iVar0]))
						{
							AUDIO::STOP_AUDIO_SCENE("PLANE_FLY_OVER_SCENE");
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_3500);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1[iVar0]);
							VEHICLE::DELETE_VEHICLE(uParam1[iVar0]);
							PED::DELETE_PED(&uLocal_3500);
							uParam1->f_15 = 0;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 7:
			break;
	}
}

void func_279()
{
	if (iLocal_6057)
	{
		if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_GOING_LOST");
			iLocal_6057 = 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (((((func_203(PLAYER::PLAYER_PED_ID(), Local_4356[0].f_107, 1) < 50f || func_203(PLAYER::PLAYER_PED_ID(), Local_4356.f_218[0].f_110, 1) < 50f) || func_203(PLAYER::PLAYER_PED_ID(), 2058.691f, 4761.476f, 40.2296f, 1) < 150f) || bLocal_6050) || bLocal_6004) || bLocal_6007)
		{
			func_41(&uLocal_6172);
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!func_195(Var0))
	{
		PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var3, 0, 1077936128, 0);
		if (!func_195(Var3))
		{
			uVar6 = SYSTEM::VDIST2(Var0, Var3);
			uVar6 = SYSTEM::SQRT(uVar6);
			if (SYSTEM::VDIST2(Var0, Var3) < 400f)
			{
				if (!func_43(&uLocal_6172))
				{
					func_40(&uLocal_6172);
					bLocal_6048 = true;
				}
				else
				{
					bLocal_6048 = true;
				}
			}
			else
			{
				bLocal_6048 = false;
				if (func_43(&uLocal_6172))
				{
					func_41(&uLocal_6172);
				}
			}
		}
	}
	if (bLocal_6048)
	{
		if (func_43(&uLocal_6172))
		{
			fVar7 = func_37(&uLocal_6172);
			fVar7 = fVar7;
			if (Local_4356[0].f_190 == 0f)
			{
				Local_4356[0].f_190 = 32f;
			}
			if (func_37(&uLocal_6172) > Local_4356[0].f_190)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				if (!iLocal_6057)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("OJDG1_GOING_WANTED");
					iLocal_6057 = 1;
				}
			}
			else if (func_37(&uLocal_6172) > (Local_4356[0].f_190 - 11f))
			{
				if (!iLocal_6049)
				{
					if (func_8(&uLocal_5830, "ARMSAUD", "ARMS_ROADS", 9, 0, 0, 0))
					{
						func_372("OSCAR - POLICE WARNING DIALOGUE");
						iLocal_6049 = 1;
					}
				}
			}
		}
	}
}

void func_280()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6135, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, 0))
		{
			if (func_292() == 0)
			{
				func_282();
			}
			else
			{
				func_281();
			}
		}
	}
}

void func_281()
{
	switch (iLocal_6123)
	{
		case 0:
			func_198(&uLocal_3501, Local_4356[0].f_107, 0, 0, 1, 1, 1);
			if ((ENTITY::DOES_ENTITY_EXIST(Local_5574.f_4) && !ENTITY::IS_ENTITY_DEAD(Local_5574.f_4, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_203(Local_5574.f_4, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 250f)
				{
					iLocal_6123 = 1;
				}
			}
			break;
		
		case 1:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6123 = 2;
			break;
		
		case 2:
			func_160(&uLocal_3501, Local_5574.f_5, 0, 0, 1, 1, 1);
			if (Local_5574.f_23)
			{
				iLocal_6123 = 3;
			}
			break;
		
		case 3:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6123 = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_5574[0], 0))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_5574[0], -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0))
				{
					func_160(&uLocal_3501, Local_5574[0], 0, 0, 1, 1, 1);
				}
				else
				{
					func_259(&uLocal_3501, 0, 0);
					iLocal_6123 = 7;
				}
			}
			break;
		
		case 7:
			func_198(&uLocal_3501, Local_4356.f_218[0].f_110, 0, 0, 1, 1, 1);
			break;
	}
}

void func_282()
{
	switch (iLocal_6124)
	{
		case 0:
			func_198(&uLocal_3501, Local_4356[0].f_107, 0, 0, 1, 1, 1);
			if ((ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_6) && !ENTITY::IS_ENTITY_DEAD(uLocal_5543.f_6, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_203(uLocal_5543.f_6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 250f)
				{
					iLocal_6124 = 1;
				}
			}
			break;
		
		case 1:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6124 = 2;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_6))
			{
				func_160(&uLocal_3501, uLocal_5543.f_6, 0, 0, 1, 1, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_5543.f_10))
			{
				iLocal_6124 = 3;
			}
			break;
		
		case 3:
			func_259(&uLocal_3501, 0, 0);
			iLocal_6124 = 4;
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_5543.f_7))
			{
				func_160(&uLocal_3501, uLocal_5543.f_7, 0, 0, 1, 1, 1);
			}
			break;
	}
}

void func_283()
{
	if (!func_274(&iLocal_6135))
	{
		if (func_46())
		{
			cLocal_6154 = { func_287() };
			func_285();
			iLocal_6069 = 1;
		}
	}
	else if (iLocal_6069)
	{
		if (func_284(&uLocal_5830, "ARMSAUD", &(Local_4356[0].f_129), &cLocal_6154, 8, 0, 0))
		{
			iLocal_6069 = 0;
		}
	}
}

bool func_284(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_9(sParam2, iParam4, 0);
}

void func_285()
{
	Global_19671 = 0;
	func_286();
}

void func_286()
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

struct<6> func_287()
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

void func_288()
{
	if (func_292() == 0)
	{
		func_289(Local_4356[0].f_113, "DTRFKGR_HELP_02");
		func_372("PRINTING OBJECTIVE - LEVEL 1");
	}
	else
	{
		func_289(Local_4356[0].f_113, "DTRFKGR_HELP_03");
		func_372("PRINTING OBJECTIVE - LEVEL 2");
	}
}

void func_289(struct<16> Param0, char[4] cParam16)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param0))
	{
		func_154("DTRFKGR_02", 7500, 1);
	}
	else
	{
		func_154(&Param0, 7500, 1);
	}
	MemCopy(&cLocal_5995, {Param0}, 8);
	func_290(&uLocal_3382, cParam16);
}

void func_290(var uParam0, char* sParam1)
{
	func_41(uParam0);
	StringCopy(&Local_3346, sParam1, 32);
}

int func_291(var uParam0, float fParam1)
{
	fVar0 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam0, &fVar0, 0, 0))
	{
		uParam0->f_2 = fVar0;
		uParam0->f_2 = (uParam0->f_2 + fParam1);
		return 1;
	}
	return 0;
}

int func_292()
{
	if (func_254(Global_111638.f_19978, 4))
	{
		iVar0 = 0;
	}
	else if (func_254(Global_111638.f_19978, 64))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_293()
{
	func_45(&uLocal_5830, 3, 0, "OSCAR", 0, 1);
	func_8(&uLocal_5830, "ARMSAUD", &(Local_4356[0].f_129), 9, 0, 0, 0);
}

void func_294()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 741814745, 0))
		{
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 741814745);
			if (iVar0 < 5)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), 741814745, 5, 0);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 741814745, 5, 0, 1);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 453432689, 0))
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 453432689);
			if (iVar1 < 100)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), 453432689, 100, 0);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 453432689, 100, 0, 1);
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), 324215364, 0))
		{
			iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 324215364);
			if (iVar2 < 100)
			{
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), 324215364, 100, 0);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), 324215364, 100, 0, 1);
		}
	}
}

void func_295()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

int func_296()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			return func_297(ENTITY::GET_ENTITY_MODEL(iVar0));
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_297(int iParam0)
{
	iVar1[0] = -2128233223;
	iVar1[1] = -599568815;
	iVar1[2] = 914654722;
	iVar1[3] = 1177543287;
	iVar1[4] = -16948145;
	iVar1[5] = 1770332643;
	iVar1[6] = -909201658;
	iVar1[6] = -1661854193;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == iVar1[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_298(int iParam0, int iParam1, int iParam2)
{
	if (func_318() && func_300())
	{
		while (Global_98739 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_299(0);
	}
}

void func_299(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_98744.f_20), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_98744.f_20), 13);
	}
}

bool func_300()
{
	return MISC::IS_BIT_SET(Global_98744.f_20, 13);
}

void func_301()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
	{
		iLocal_6135 = VEHICLE::CREATE_VEHICLE(-1661854193, Local_6106, fLocal_6117, 1, 1, 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_6135, 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1661854193);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
		{
			if (VEHICLE::DOES_EXTRA_EXIST(iLocal_6135, 1))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_6135, 1, 1);
			}
			if (VEHICLE::DOES_EXTRA_EXIST(iLocal_6135, 2))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_6135, 2, 0);
			}
			if (VEHICLE::DOES_EXTRA_EXIST(iLocal_6135, 3))
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_6135, 3, 0);
			}
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_6135, 0, 0);
		}
	}
}

void func_302(var uParam0, float fParam1, bool bParam2)
{
	if (func_303(uParam0, fParam1))
	{
		if (bParam2)
		{
			func_306(&Local_3346, -1);
		}
		else
		{
			func_34(&Local_3346, 7500, 1);
		}
	}
}

int func_303(var uParam0, float fParam1)
{
	if (func_305(uParam0, fParam1))
	{
		func_304(uParam0);
		return 1;
	}
	return 0;
}

void func_304(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_305(var uParam0, float fParam1)
{
	if (func_43(uParam0))
	{
		if (func_37(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_306(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_307(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != *uParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_308(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (*uParam9)
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iVar1 = func_310(uParam4, Var2, 0);
	}
	if ((*uParam8 || (!ENTITY::IS_ENTITY_DEAD(*uParam0, 0) && ENTITY::IS_ENTITY_IN_AIR(*uParam0))) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0))
	{
		if (HUD::DOES_BLIP_EXIST(*uParam1) && func_274(uParam0))
		{
			HUD::REMOVE_BLIP(uParam1);
		}
		*uParam6 = !func_274(uParam0);
		return;
	}
	if (!*uParam6)
	{
		if (!func_274(uParam0))
		{
			func_309(&uLocal_3382);
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(1);
				func_372("CLEARING HELP VIA UPDATE_MISSION_CAR");
			}
			HUD::CLEAR_PRINTS();
			*uParam5 = MISC::GET_GAME_TIMER();
			if (bParam12)
			{
				if (*iParam10)
				{
					if (*uParam9)
					{
						func_34("DTRSHRD_03", 7500, 1);
						*iParam10 = 0;
					}
					else
					{
						func_34("DTRSHRD_03", 7500, 1);
						*iParam10 = 0;
					}
				}
				*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
				HUD::SET_BLIP_COLOUR(*uParam1, 3);
			}
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]))
				{
					HUD::REMOVE_BLIP(uParam3[iVar0]);
					func_372("REMOVING myLocationBlip");
				}
				iVar0++;
			}
			func_372("bOutOfVehicle IS TRUE");
			*uParam6 = 1;
		}
	}
	else if (func_274(uParam0))
	{
		HUD::REMOVE_BLIP(uParam1);
		HUD::CLEAR_PRINTS();
		if (bParam13)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (!HUD::DOES_BLIP_EXIST((*uParam3)[iVar0]) && !func_5(*uParam4[iVar0], 0f, 0f, 0f, 0))
				{
					bLocal_3369 = true;
					if (!*uParam9 && iParam14)
					{
						(*uParam3)[iVar0] = HUD::ADD_BLIP_FOR_COORD(*uParam4[iVar0]);
						func_372("ADDING BACK IN myLocationBlip");
					}
					if (*uParam9)
					{
						func_372("bPlaneMission IS TRUE");
						(*uParam3)[iVar0] = HUD::ADD_BLIP_FOR_COORD(*uParam4[iVar0]);
						if (bParam11)
						{
							HUD::SET_BLIP_COLOUR((*uParam3)[iVar0], 1);
						}
						if (iVar0 == iVar1)
						{
							HUD::SET_BLIP_SCALE((*uParam3)[iVar0], 1f);
						}
						else
						{
							HUD::SET_BLIP_SCALE((*uParam3)[iVar0], 0.75f);
						}
					}
				}
				iVar0++;
			}
			if (!bLocal_3369 && bParam13)
			{
				iVar0 = 0;
				while (iVar0 < *uParam2)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0]) && !ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0], 0))
					{
						(*uParam3)[iVar0] = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0]);
						func_372("ADDING IN BLIPS FOR ENTITIES");
					}
					iVar0++;
				}
			}
		}
		*uParam5 = 0;
		func_372("bOutOfVehicle IS FALSE");
		*uParam6 = 0;
	}
}

void func_309(var uParam0)
{
	func_304(uParam0);
	StringCopy(&Local_3346, "", 32);
}

int func_310(var uParam0, struct<3> Param1, float fParam4)
{
	iVar1 = 0;
	fVar2 = 1E+09f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_195(*uParam0[iVar0]))
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

void func_311(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, char* sParam6, var uParam7)
{
	if (!*uParam3)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		*uParam3 = 1;
	}
	iVar0 = (MISC::GET_GAME_TIMER() - *uParam0);
	if (IntToFloat(iVar0) > *uParam1)
	{
		*uParam4 = 1;
	}
	if (*uParam2 == -1f)
	{
		*uParam2 = 30000f;
	}
	fLocal_3364 = (*uParam1 - SYSTEM::TO_FLOAT(iVar0));
	fLocal_3364 = fLocal_3364;
	if (!*uParam5)
	{
		if (IntToFloat((SYSTEM::ROUND(*uParam1) - iVar0)) <= *uParam2)
		{
			func_8(uParam7, "ARMSAUD", sParam6, 9, 0, 0, 0);
			func_372("GIVING PLAYER TIME WARNING");
			*uParam5 = 1;
		}
	}
	iVar1 = (SYSTEM::ROUND(*uParam1) - iVar0);
	if (iVar1 <= 11000 && iVar1 >= 5000)
	{
		if (func_43(&uLocal_3385))
		{
			if (func_37(&uLocal_3385) > 1f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_41(&uLocal_3385);
			}
		}
		else
		{
			func_40(&uLocal_3385);
		}
	}
	else if (iVar1 <= 5000 && iVar1 > 0)
	{
		if (func_43(&uLocal_3385))
		{
			if (func_37(&uLocal_3385) > 0.5f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_41(&uLocal_3385);
			}
		}
		else
		{
			func_40(&uLocal_3385);
		}
	}
	func_119(iVar1, "DTRFKGR_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_312(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_186(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_315(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_314((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_313();
			return;
		}
		iVar0++;
	}
}

void func_313()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

void func_314(int iParam0)
{
	StringCopy(&(Global_111638.f_20405[iParam0]), "", 16);
	StringCopy(&(Global_111638.f_20405[iParam0].f_4), "", 16);
	Global_111638.f_20405[iParam0].f_8 = 0;
	Global_111638.f_20405[iParam0].f_9 = 0;
	Global_111638.f_20405[iParam0].f_11 = 0;
	Global_111638.f_20405[iParam0].f_10 = -1;
	Global_111638.f_20405[iParam0].f_12 = 0;
	Global_111638.f_20405[iParam0].f_13 = 0;
	Global_111638.f_20405[iParam0].f_14 = 0;
	Global_111638.f_20405[iParam0].f_15 = 0;
}

void func_315(int iParam0, int iParam1)
{
	Global_111638.f_20405[iParam0] = { Global_111638.f_20405[iParam1] };
	Global_111638.f_20405[iParam0].f_4 = { Global_111638.f_20405[iParam1].f_4 };
	Global_111638.f_20405[iParam0].f_8 = Global_111638.f_20405[iParam1].f_8;
	Global_111638.f_20405[iParam0].f_10 = Global_111638.f_20405[iParam1].f_10;
	Global_111638.f_20405[iParam0].f_9 = Global_111638.f_20405[iParam1].f_9;
	Global_111638.f_20405[iParam0].f_11 = Global_111638.f_20405[iParam1].f_11;
	Global_111638.f_20405[iParam0].f_12 = Global_111638.f_20405[iParam1].f_12;
	Global_111638.f_20405[iParam0].f_13 = Global_111638.f_20405[iParam1].f_13;
	Global_111638.f_20405[iParam0].f_14 = Global_111638.f_20405[iParam1].f_14;
	Global_111638.f_20405[iParam0].f_15 = Global_111638.f_20405[iParam1].f_15;
}

void func_316(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_318())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_98744.f_20), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_98740 = { Param0 };
		Global_98743 = fParam3;
		Global_98739 = 1;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 14);
		}
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_98744.f_20), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_98744.f_20), 24);
		}
		func_299(1);
	}
}

int func_317()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

int func_318()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4, bool bParam5, var uParam6, var uParam7, var uParam8, bool bParam9)
{
	if (*iParam0)
	{
		func_372("bDoTimed IS TRUE");
	}
	if (*iParam1)
	{
		func_372("bDoChase IS TRUE");
	}
	if (*iParam2)
	{
		func_372("bDoFragile IS TRUE");
	}
	if (*bParam3)
	{
		func_372("bDoAmbush IS TRUE");
	}
	if (*uParam4)
	{
		func_372("bDoPlane IS TRUE");
	}
	if (*bParam5)
	{
		func_372("bDoSmugglers IS TRUE");
	}
	if (*uParam6)
	{
		func_372("bDoFlareCutscene IS TRUE");
	}
	if (*uParam7)
	{
		func_372("bDoPoliceChase IS TRUE");
	}
	if (*uParam8)
	{
		func_372("bDoContactCutscene IS TRUE");
	}
	if (*bParam9)
	{
		func_372("bDoHijack IS TRUE");
	}
}

int func_321()
{
	if (!iLocal_6041)
	{
		bLocal_6031 = true;
		iLocal_6120 = MISC::GET_GAME_TIMER();
		iLocal_6041 = 1;
	}
	if (!iLocal_6029)
	{
		func_322();
	}
	if (!func_43(&Local_4255))
	{
		func_40(&Local_4255);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_6135, 0))
	{
		if (func_305(&Local_4255, 12f))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, -1);
			func_372("TRIGGERING FAIL SAFE");
			func_372("FAIL SAFE - smugArgs.bSmugglerReachedDest = TRUE");
			Local_5574.f_27 = 1;
			return 1;
		}
	}
	switch (iLocal_3636)
	{
		case 0:
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			CAM::POINT_CAM_AT_ENTITY(uLocal_6148, Local_5574[0], 0f, 0f, 0f, 1);
			if (!PED::IS_PED_INJURED(Local_5574.f_10) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_2, 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_5574.f_10, Local_5574.f_2, -1);
			}
			iLocal_3636 = 1;
			break;
		
		case 1:
			if (func_305(&Local_4255, 1f))
			{
				CAM::SET_CAM_COORD(uLocal_6148, Local_4356.f_218[1].f_152);
				CAM::SET_CAM_ROT(uLocal_6148, Local_4356.f_218[1].f_155, 2);
				CAM::SET_CAM_FOV(uLocal_6148, 35f);
				CAM::SHAKE_CAM(uLocal_6148, "ROAD_VIBRATION_SHAKE", 2f);
				CAM::POINT_CAM_AT_ENTITY(uLocal_6148, Local_5574.f_2, 0f, 0f, 0f, 1);
				iLocal_3636 = 2;
			}
			break;
		
		case 2:
			if (func_305(&Local_4255, 2f))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_5574.f_2, 0);
				if (!PED::IS_PED_INJURED(Local_5574.f_10) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_2, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_HELI_MISSION(0, Local_5574.f_2, 0, 0, Local_4356.f_218[1].f_164, Local_4356.f_218[1].f_164.f_1, (Local_4356.f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
					TASK::TASK_HELI_MISSION(0, Local_5574.f_2, 0, 0, (Local_4356.f_218[1].f_164 + 500f), (Local_4356.f_218[1].f_164.f_1 + 500f), (Local_4356.f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					if (!PED::IS_PED_INJURED(Local_5574.f_10))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_5574.f_10, uVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_3636 = 3;
				}
			}
			break;
		
		case 3:
			if (func_305(&Local_4255, 5f))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_3, 0) && !PED::IS_PED_INJURED(Local_5574.f_11))
				{
					PED::SET_PED_INTO_VEHICLE(Local_5574.f_11, Local_5574.f_3, -1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_3, 0) && !PED::IS_PED_INJURED(Local_5574.f_11))
				{
					PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(Local_5574.f_3, 1), &Var1, 1, 1077936128, 0);
					ENTITY::SET_ENTITY_COORDS(Local_5574.f_3, Var1, 1, 0, 0, 1);
					iLocal_3636 = 4;
				}
			}
			break;
		
		case 4:
			if (func_305(&Local_4255, 7f))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_3, 0) && !PED::IS_PED_INJURED(Local_5574.f_11))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_5574.f_11, Local_5574.f_3, 20f, 786597);
				}
				func_372("smugArgs.bSmugglerReachedDest = TRUE");
				Local_5574.f_27 = 1;
				func_372("RETURNING TRUE ON SMUGGLERS_ENDING_CUTSCENE");
				return 1;
			}
			break;
		
		case 5:
			CAM::DESTROY_CAM(uLocal_6148, 0);
			CAM::DESTROY_CAM(uLocal_6149, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_6135, -1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_3, 0) && !PED::IS_PED_INJURED(Local_5574.f_11))
			{
				PED::SET_PED_INTO_VEHICLE(Local_5574.f_11, Local_5574.f_3, -1);
				TASK::TASK_VEHICLE_DRIVE_WANDER(Local_5574.f_11, Local_5574.f_3, 20f, 786597);
			}
			ENTITY::FREEZE_ENTITY_POSITION(Local_5574.f_2, 0);
			if (!PED::IS_PED_INJURED(Local_5574.f_10) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_5574.f_2, 0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_HELI_MISSION(0, Local_5574.f_2, 0, 0, Local_4356.f_218[1].f_164, Local_4356.f_218[1].f_164.f_1, (Local_4356.f_218[1].f_164.f_2 + 50f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
				TASK::TASK_HELI_MISSION(0, Local_5574.f_2, 0, 0, (Local_4356.f_218[1].f_164 + 500f), (Local_4356.f_218[1].f_164.f_1 + 500f), (Local_4356.f_218[1].f_164.f_2 + 10f), 4, 40f, -1f, 0f, 60, 30, -1082130432, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				if (!PED::IS_PED_INJURED(Local_5574.f_10))
				{
					TASK::TASK_PERFORM_SEQUENCE(Local_5574.f_10, uVar0);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
			func_372("INSIDE STATE - SMUGGLERS_ENDING_SKIP_01");
			iLocal_3636 = 6;
			break;
		
		case 6:
			CAM::DO_SCREEN_FADE_IN(1000);
			while (!CAM::IS_SCREEN_FADED_IN())
			{
				SYSTEM::WAIT(0);
			}
			func_372("smugArgs.bSmugglerReachedDest = TRUE VIA SKIP");
			Local_5574.f_27 = 1;
			iLocal_6029 = 0;
			func_372("RETURNING TRUE IN STATE- SMUGGLERS_ENDING_SKIP_02 ");
			return 1;
			break;
	}
	return 0;
}

void func_322()
{
	if (func_323() && MISC::GET_GAME_TIMER() >= iLocal_6120 + 1000)
	{
		func_372("SKIPPED CUTSCENE");
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		HUD::CLEAR_PRINTS();
		func_128(0);
		func_139();
		iLocal_6029 = 1;
		if (bLocal_6032)
		{
			iLocal_3644 = 4;
		}
		if (bLocal_6030)
		{
			iLocal_3637 = 4;
		}
		if (bLocal_6031)
		{
			iLocal_3636 = 5;
		}
	}
}

int func_323()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_324()
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

void func_325(bool bParam0)
{
	if (bParam0)
	{
		func_326();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			MISC::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_131(0))
		{
			func_128(0);
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

void func_326()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_327()
{
	if (Local_4356[0].f_145 == 0)
	{
		bLocal_3373 = true;
		bLocal_3374 = false;
		bLocal_3375 = false;
	}
	else if (Local_4356[0].f_145 == 1)
	{
		bLocal_3373 = false;
		bLocal_3374 = true;
		bLocal_3375 = false;
	}
	else if (Local_4356[0].f_145 == 2)
	{
		bLocal_3373 = false;
		bLocal_3374 = false;
		bLocal_3375 = true;
	}
	func_328();
	iLocal_6121 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	STREAMING::REQUEST_MODEL(Local_4356.f_1147);
	func_372("REQUESTING LOADED CARGO");
	STREAMING::REQUEST_MODEL(-1207771834);
	func_372("REQUESTING REBEL");
	STREAMING::REQUEST_MODEL(-1661854193);
	func_372("REQUESTING DUNE");
	if (!bLocal_6019)
	{
		STREAMING::REQUEST_MODEL(445804908);
		func_372("REQUESTING - Prop_Flare_01b");
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (func_292() == 1)
	{
		if (bLocal_3373)
		{
			Local_4356.f_1101 = 1466037421;
			STREAMING::REQUEST_MODEL(Local_4356.f_1101);
			func_372("REQUESTING MEXICAN BAD GUY - G_M_M_MEXBOSS_01");
		}
		else if (bLocal_3374)
		{
			Local_4356.f_1101 = 62440720;
			STREAMING::REQUEST_MODEL(Local_4356.f_1101);
			func_372("REQUESTING MARABUNTA BAD GUY - G_M_Y_SalvaGoon_03");
		}
		else if (bLocal_3375)
		{
			Local_4356.f_1101 = 1822107721;
			STREAMING::REQUEST_MODEL(Local_4356.f_1101);
			func_372("REQUESTING HILLBILLY BAD GUY - A_M_M_HillBilly_01");
		}
	}
	HUD::REQUEST_ADDITIONAL_TEXT("DTRFKGR", 2);
	HUD::REQUEST_ADDITIONAL_TEXT("DTRSHRD", 3);
	if (bLocal_6014)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1136)
		{
			STREAMING::REQUEST_MODEL(Local_4356.f_1138[iVar0]);
			func_372("REQUESTING SMUGGLERS VEHICLES");
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (Local_4356[0].f_66[iVar0] == 0)
			{
				if (Local_4356[0].f_66[iVar0].f_18)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4356[0].f_66[iVar0].f_2, Local_4356[0].f_66[iVar0].f_3);
					func_372("REQUESTING VEHICLE RECORDING FOR SMUGGLERS");
					func_372("CarRecInfo:");
					func_372(Local_4356[0].f_66[iVar0].f_3);
				}
				else if (Local_4356[0].f_66[iVar0].f_19)
				{
					TASK::REQUEST_WAYPOINT_RECORDING(Local_4356[0].f_66[iVar0].f_4);
				}
			}
			iVar0++;
		}
	}
	if (bLocal_6010)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 0)
				{
					STREAMING::REQUEST_MODEL(Local_4356[0][iVar0].f_1);
					func_372("REQUESTING CAR RECORDING VEHICLE");
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 1)
				{
					STREAMING::REQUEST_MODEL(Local_4356[0][iVar0].f_1);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4);
				}
			}
			iVar0++;
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		SYSTEM::WAIT(0);
		func_372("WAITING ON TEXT SLOTS");
	}
	while (!STREAMING::HAS_MODEL_LOADED(445804908))
	{
		SYSTEM::WAIT(0);
		func_372("WAITING ON Prop_Flare_01b");
	}
	while (!STREAMING::HAS_MODEL_LOADED(-1207771834) || !STREAMING::HAS_MODEL_LOADED(-1661854193))
	{
		SYSTEM::WAIT(0);
		func_372("WAITING ON REBEL AND DUNE");
	}
	if (bLocal_6014)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (Local_4356[0].f_66[iVar0] == 0)
			{
				if (Local_4356[0].f_66[iVar0].f_18)
				{
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_4356[0].f_66[iVar0].f_2, Local_4356[0].f_66[iVar0].f_3))
					{
						func_372("DRUG TRAFFICKING GROUND: trying to load Smugglers recordings");
						SYSTEM::WAIT(0);
					}
				}
				else if (Local_4356[0].f_66[iVar0].f_19)
				{
					while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_4356[0].f_66[iVar0].f_4))
					{
						func_372("DRUG TRAFFICKING GROUND: trying to load Smugglers WAYPOINT recordings");
						SYSTEM::WAIT(0);
					}
				}
			}
			iVar0++;
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !STREAMING::HAS_MODEL_LOADED(Local_4356.f_1147))
	{
		func_372("DRUG TRAFFICKING GROUND:  trying to load string table, and cargo model");
		SYSTEM::WAIT(0);
	}
	bLocal_6042 = true;
	if (bLocal_6010)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_4356[0][iVar0].f_2)
			{
				if (Local_4356[0][iVar0] == 0)
				{
					while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_4356[0][iVar0].f_3, Local_4356[0][iVar0].f_4) || !STREAMING::HAS_MODEL_LOADED(Local_4356[0][iVar0].f_1))
					{
						func_372("DRUG TRAFFICKING GROUND:  trying to load ambush models");
						SYSTEM::WAIT(0);
					}
				}
			}
			iVar0++;
		}
	}
	while (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
		func_372("WAITING ON PARTICLE EFFECTS");
	}
	if (!bLocal_6042)
	{
		func_372("Waiting for vehicle recording to be loaded");
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(1770332643, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(-1661854193, 1);
}

void func_328()
{
	if (bLocal_3373)
	{
	}
	if (bLocal_3374)
	{
	}
	if (bLocal_3375)
	{
	}
}

void func_329()
{
	while (!func_331(800))
	{
		SYSTEM::WAIT(0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	STREAMING::LOAD_SCENE(Local_4356.f_1090);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_4356.f_1090);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_4356.f_1093);
	}
	SYSTEM::WAIT(500);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	while (!func_330(800))
	{
		SYSTEM::WAIT(0);
	}
}

int func_330(int iParam0)
{
	CAM::DO_SCREEN_FADE_IN(iParam0);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_331(int iParam0)
{
	CAM::DO_SCREEN_FADE_OUT(iParam0);
	while (!CAM::IS_SCREEN_FADED_OUT())
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

void func_332(struct<97> Param0, bool bParam97)
{
	func_335(&(Local_4356[0]), Param0.f_8[0]);
	if (bParam97)
	{
		func_335(&(Local_4356.f_218[0]), Param0.f_13[0]);
		func_335(&(Local_4356.f_218[1]), Param0.f_13[1]);
	}
	Local_4356.f_1102 = Param0.f_55;
	Local_4356.f_1103 = Param0.f_56;
	Local_4356.f_1104 = Param0.f_57;
	if (Param0.f_6 > 0)
	{
		Local_4356.f_1106 = Param0.f_6;
		Local_4356.f_1108 = Param0.f_7;
		func_372("OVERRIDING CAR CHASER DATA");
	}
	if (Param0.f_76[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1108)
		{
			Local_4356.f_1118[iVar0] = Param0.f_76[iVar0];
			func_372("REPLACING PED MODELS");
			iVar0++;
		}
	}
	if (Param0.f_85[0] != 0)
	{
		iVar0 = 0;
		while (iVar0 < Local_4356.f_1106)
		{
			Local_4356.f_1109[iVar0] = Param0.f_85[iVar0];
			func_372("REPLACING VEHICLE MODELS");
			iVar0++;
		}
	}
	func_334(&Local_4356, &bLocal_6013, &bLocal_6025, &bLocal_6010, &bLocal_6011, &uLocal_6009, &bLocal_6014, &uLocal_6017, &uLocal_6012, &uLocal_6018, &bLocal_6019, Param0);
	func_333(&Local_4356, Param0);
}

void func_333(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97)
{
	switch (Param1.f_3)
	{
		case 0:
			uParam0->f_1105 = 1;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 8;
			break;
		
		case 1:
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 4;
			break;
		
		case 2:
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1094 = 4;
			break;
		
		default:
			break;
	}
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, struct<51> Param11, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107)
{
	*iParam2 = Param11.f_38;
	*iParam4 = Param11.f_39;
	*iParam3 = Param11.f_43;
	*iParam1 = Param11.f_42;
	*uParam5 = Param11.f_44;
	*uParam6 = Param11.f_47;
	*uParam7 = Param11.f_48;
	*uParam8 = Param11.f_40;
	*uParam9 = Param11.f_49;
	*uParam10 = Param11.f_50;
	if (!uParam0->f_1089)
	{
		*iParam3 = 0;
	}
	if (!uParam0->f_1088)
	{
		*iParam4 = 0;
	}
	if (!uParam0->f_1087)
	{
		*uParam5 = 0;
	}
	if (*uParam6)
	{
		*iParam3 = 0;
		*iParam2 = 0;
		*iParam4 = 0;
		*uParam8 = 0;
	}
}

int func_335(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "TrailerParkGround";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 28.7612f, 3711.16f, 39.2174f };
			uParam0[0]->f_8 = 0.0079f;
			uParam0[0]->f_9 = 0.0104f;
			uParam0[0]->f_10 = -0.2702f;
			uParam0[0]->f_11 = 0.9627f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "TrailerParkGround";
			uParam0[1]->f_3 = 104;
			uParam0[1]->f_5 = { 99.5151f, 3714.765f, 39.2737f };
			uParam0[1]->f_8 = 0.0145f;
			uParam0[1]->f_9 = 0.0599f;
			uParam0[1]->f_10 = 0.1116f;
			uParam0[1]->f_11 = 0.9918f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "TrailerParkAir";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 30.8342f, 3948.345f, 83.5679f };
			uParam0[2]->f_8 = -0.0132f;
			uParam0[2]->f_9 = -0.0055f;
			uParam0[2]->f_10 = 0.9998f;
			uParam0[2]->f_11 = -0.0155f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 176.5f;
			uParam0->f_107 = { 53.8249f, 3733.345f, 38.6775f };
			uParam0->f_110 = { 51.8722f, 3725.228f, 38.6335f };
			uParam0->f_146 = { 49.8334f, 3726.378f, 39.1895f };
			uParam0->f_149 = { 12.3204f, 0.0111f, 37.467f };
			uParam0->f_152 = { 55.9215f, 3731.235f, 39.2212f };
			uParam0->f_155 = { 12.3204f, 0.0111f, 37.467f };
			uParam0->f_158[0] = { 985.975f, 2152.608f, 47.8136f };
			uParam0->f_162[0] = 35.722f;
			break;
		
		case 2:
			uParam0->f_107 = { 2368.344f, 2530.202f, 45.6681f };
			uParam0->f_110 = { 2368.344f, 2530.202f, 45.6681f };
			break;
		
		case 0:
			uParam0->f_107 = { 2533.549f, 2612.932f, 36.9446f };
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "BeerBarAmbush";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2591.062f, 2527.585f, 30.1715f };
			uParam0[0]->f_8 = 0.0635f;
			uParam0[0]->f_9 = -0.0044f;
			uParam0[0]->f_10 = 0.1434f;
			uParam0[0]->f_11 = 0.9876f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "BeerBarAmbush";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2465.658f, 2542.458f, 43.359f };
			uParam0[1]->f_8 = 0.0739f;
			uParam0[1]->f_9 = -0.0406f;
			uParam0[1]->f_10 = -0.331f;
			uParam0[1]->f_11 = 0.9398f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "beerBar";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 2254.213f, 2837.056f, 69.6294f };
			uParam0[2]->f_8 = -0.0099f;
			uParam0[2]->f_9 = 0.0039f;
			uParam0[2]->f_10 = 0.8687f;
			uParam0[2]->f_11 = -0.4952f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 759f;
			uParam0->f_110 = { 2537.016f, 2591.764f, 35.6751f };
			uParam0->f_146 = { 2556.196f, 2626.224f, 42.7265f };
			uParam0->f_149 = { -4.2563f, -0.2061f, 162.6607f };
			break;
		
		case 3:
			uParam0->f_107 = { 274.1707f, 2608.064f, 43.6995f };
			uParam0->f_110 = { 274.1707f, 2608.064f, 43.6995f };
			break;
		
		case 4:
			uParam0->f_107 = { 817.3708f, 2197.861f, 51.0174f };
			uParam0->f_110 = { 817.3708f, 2197.861f, 51.0174f };
			break;
		
		case 5:
			uParam0->f_107 = { -1445.62f, 1636.364f, 95.4142f };
			break;
		
		case 6:
			uParam0->f_107 = { -1847.165f, 4512.604f, 19.7672f };
			break;
		
		case 7:
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "rugged";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { -1456.614f, 4504.205f, 112.8639f };
			uParam0[0]->f_8 = 0.0388f;
			uParam0[0]->f_9 = -0.0834f;
			uParam0[0]->f_10 = 0.9008f;
			uParam0[0]->f_11 = -0.4245f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 310f;
			uParam0->f_110 = { -1185.653f, 4305.072f, 75.2981f };
			uParam0->f_107 = { -1185.653f, 4305.072f, 75.2981f };
			uParam0->f_146 = { -1178.054f, 4306.765f, 84.5263f };
			uParam0->f_149 = { -4.4212f, 0f, 121.8599f };
			uParam0->f_152 = { -1177.572f, 4307.064f, 77.1852f };
			uParam0->f_155 = { -4.4212f, 0f, 121.8599f };
			break;
		
		case 8:
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "GraineryParkingLot";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2829.455f, 4634.991f, 81.9373f };
			uParam0[0]->f_8 = 0.0323f;
			uParam0[0]->f_9 = 0.0133f;
			uParam0[0]->f_10 = 0.9882f;
			uParam0[0]->f_11 = -0.1494f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 234f;
			uParam0->f_107 = { 2911.251f, 4375.026f, 49.4025f };
			uParam0->f_110 = { 2910.965f, 4371.043f, 49.3964f };
			uParam0->f_146 = { 2901.554f, 4384.259f, 50.4232f };
			uParam0->f_149 = { 21.8867f, 0f, 156.2361f };
			uParam0->f_152 = { 2911.589f, 4379.841f, 50.4232f };
			uParam0->f_155 = { 18.0566f, 0f, 156.2361f };
			break;
		
		case 9:
			uParam0->f_107 = { 1237.725f, 1851.812f, 78.6409f };
			uParam0->f_110 = { 1237.725f, 1851.812f, 78.6409f };
			uParam0->f_146 = { 1244.26f, 1838.896f, 90.8553f };
			uParam0->f_149 = { -5.075f, 0f, 0.2706f };
			break;
		
		case 10:
			uParam0->f_107 = { 2670.764f, 3541.25f, 50.7144f };
			uParam0->f_110 = { 2670.764f, 3541.25f, 50.7144f };
			break;
		
		case 11:
			uParam0->f_107 = { 2477.002f, 4988.37f, 45.2699f };
			uParam0->f_110 = { 2477.002f, 4988.37f, 45.2699f };
			break;
		
		case 12:
			uParam0->f_107 = { 1949.3f, 4637.11f, 39.5446f };
			uParam0->f_110 = { 1949.3f, 4637.11f, 39.5446f };
			break;
		
		case 13:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "PlaneGraveyardGround";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2442.766f, 3105.672f, 47.085f };
			uParam0[0]->f_8 = -0.015f;
			uParam0[0]->f_9 = 0.0685f;
			uParam0[0]->f_10 = 0.6052f;
			uParam0[0]->f_11 = 0.793f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "PlaneGraveyardGround";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2305.884f, 3053.964f, 45.6252f };
			uParam0[1]->f_8 = 0.0386f;
			uParam0[1]->f_9 = 0.0166f;
			uParam0[1]->f_10 = -0.2598f;
			uParam0[1]->f_11 = 0.9647f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "PlaneGraveyardGround";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2416.517f, 3173.679f, 48.2513f };
			uParam0[2]->f_8 = 0.0018f;
			uParam0[2]->f_9 = 0.0105f;
			uParam0[2]->f_10 = 0.8773f;
			uParam0[2]->f_11 = 0.4797f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "PlaneGraveyardGround";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2306.697f, 3186.073f, 46.2549f };
			uParam0[3]->f_8 = 0.0211f;
			uParam0[3]->f_9 = 0.0036f;
			uParam0[3]->f_10 = 0.9995f;
			uParam0[3]->f_11 = -0.0235f;
			uParam0[3]->f_1 = func_336();
			(*uParam0)[4] = 1;
			uParam0[4]->f_2 = 1;
			uParam0[4]->f_4 = "WreckedAirfield";
			uParam0[4]->f_3 = 101;
			uParam0[4]->f_5 = { 2659.062f, 3921.625f, 96.9736f };
			uParam0[4]->f_8 = -0.2848f;
			uParam0[4]->f_9 = 0.0749f;
			uParam0[4]->f_10 = 0.9529f;
			uParam0[4]->f_11 = 0.0727f;
			uParam0[4]->f_1 = -644710429;
			uParam0[4]->f_12 = 755f;
			uParam0->f_107 = { 2340.508f, 3094.924f, 47.0909f };
			uParam0->f_110 = { 2340.508f, 3094.924f, 47.0909f };
			uParam0->f_175 = 225f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_15", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE108", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_146 = { 2350.198f, 3107.476f, 54.1539f };
			uParam0->f_149 = { 11.3665f, 0f, 143.9136f };
			uParam0->f_152 = { 2349.461f, 3106.464f, 47.925f };
			uParam0->f_155 = { 11.3665f, 0f, 143.9136f };
			break;
		
		case 14:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "DirtCuldesac";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 359.8208f, 2933.403f, 40.198f };
			uParam0[0]->f_8 = 0.0444f;
			uParam0[0]->f_9 = 0.0183f;
			uParam0[0]->f_10 = -0.4302f;
			uParam0[0]->f_11 = 0.9015f;
			uParam0[0]->f_1 = -16948145;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "DirtCuldesac";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 342.1675f, 3008.602f, 39.3665f };
			uParam0[1]->f_8 = 0.0187f;
			uParam0[1]->f_9 = -0.0117f;
			uParam0[1]->f_10 = 0.7739f;
			uParam0[1]->f_11 = -0.6329f;
			uParam0[1]->f_1 = -16948145;
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "DirtCuldesacAir";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 580.981f, 2946.836f, 66.196f };
			uParam0[2]->f_8 = -0.1316f;
			uParam0[2]->f_9 = 0.0963f;
			uParam0[2]->f_10 = 0.6449f;
			uParam0[2]->f_11 = 0.7466f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 154f;
			uParam0->f_107 = { 409.2248f, 2991.86f, 39.4351f };
			uParam0->f_110 = { 406.0919f, 2994.982f, 39.3263f };
			uParam0->f_146 = { 413.8964f, 2984.869f, 40.6165f };
			uParam0->f_149 = { -0.3626f, 0f, -40.2616f };
			uParam0->f_152 = { 407.7802f, 2988.285f, 40.2685f };
			uParam0->f_155 = { -1.686f, 0f, -31.8646f };
			break;
		
		case 15:
			uParam0->f_107 = { 1755.071f, 4239.898f, 17.2274f };
			(*uParam0)[0] = 1;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "WaterDrop";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { -3393.088f, 3841.75f, 59.0627f };
			uParam0[0]->f_8 = 0.1246f;
			uParam0[0]->f_9 = 0.0559f;
			uParam0[0]->f_10 = 0.8677f;
			uParam0[0]->f_11 = -0.478f;
			uParam0[0]->f_1 = -644710429;
			uParam0[0]->f_12 = 759f;
			uParam0->f_110 = { 1755.071f, 4239.898f, 17.2274f };
			uParam0->f_146 = { 1756.284f, 4219.054f, 34.128f };
			uParam0->f_149 = { 0.6506f, 0f, 34.3944f };
			return 1;
			break;
		
		case 16:
			uParam0->f_107 = { 2107.129f, 4794.275f, 39.8284f };
			break;
		
		case 17:
			uParam0->f_107 = { 733.6285f, 4129.934f, 23.8211f };
			uParam0->f_110 = { 725.9564f, 4215.808f, 49.7332f };
			break;
		
		case 18:
			uParam0->f_107 = { 715.0595f, 4175.037f, 39.7089f };
			uParam0->f_110 = { 715.0595f, 4175.037f, 39.7089f };
			break;
		
		case 19:
			uParam0->f_107 = { 1487.163f, 3807.31f, 27.8818f };
			break;
		
		case 20:
			uParam0->f_66[0].f_18 = 1;
			uParam0->f_66[0].f_3 = "BoatDepotFarms";
			uParam0->f_66[0].f_2 = 102;
			uParam0->f_66[0].f_5 = { 1656.163f, 4828.593f, 41.4706f };
			uParam0->f_66[0].f_11 = -0.0164f;
			uParam0->f_66[0].f_12 = -0.0289f;
			uParam0->f_66[0].f_13 = -0.6341f;
			uParam0->f_66[0].f_14 = 0.7726f;
			uParam0->f_66[0].f_15 = 0.7f;
			uParam0->f_66[0].f_16 = 1.75f;
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 859.8226f, 4281.005f, 95.4879f };
			uParam0->f_66[1].f_11 = -0.0822f;
			uParam0->f_66[1].f_12 = -0.0467f;
			uParam0->f_66[1].f_13 = -0.6692f;
			uParam0->f_66[1].f_14 = 0.737f;
			uParam0->f_66[1].f_8 = { 100f, 100f, 10f };
			uParam0->f_107 = { 1362.055f, 4337.47f, 38.3688f };
			uParam0->f_110 = { 1362.055f, 4337.47f, 38.3688f };
			uParam0->f_168 = { 1545.547f, 4561.838f, 49.817f };
			uParam0->f_158[0] = { 1658.039f, 4828.536f, 40.9956f };
			uParam0->f_162[0] = 275.6415f;
			break;
		
		case 21:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "BDFWaypoint";
			uParam0->f_66[0].f_5 = { 1653.995f, 4826.355f, 41.0051f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 102;
			uParam0->f_66[1].f_5 = { 1327.669f, 3345.082f, 99.6745f };
			uParam0->f_66[1].f_11 = 0.0279f;
			uParam0->f_66[1].f_12 = 0.0197f;
			uParam0->f_66[1].f_13 = 0.3136f;
			uParam0->f_66[1].f_14 = 0.9489f;
			uParam0->f_66[1].f_8 = { 50f, 50f, 10f };
			uParam0->f_66[1].f_17 = 990f;
			uParam0->f_107 = { 717.6153f, 4176.429f, 39.719f };
			uParam0->f_110 = { 717.6153f, 4176.429f, 39.719f };
			uParam0->f_168 = { 831.2018f, 4407.939f, 51.2971f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_8", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT1", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 1658.039f, 4828.536f, 40.9956f };
			uParam0->f_162[0] = 275.6415f;
			uParam0->f_164 = { 777.5092f, 4227.933f, 50.2396f };
			uParam0->f_167 = 282.9541f;
			break;
		
		case 22:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "BoatDepotFarms";
			uParam0->f_66[0].f_5 = { 1656.163f, 4828.593f, 41.4706f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "BoatDepot";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 859.8226f, 4281.005f, 52.4879f };
			uParam0->f_66[1].f_11 = -0.0822f;
			uParam0->f_66[1].f_12 = -0.0467f;
			uParam0->f_66[1].f_13 = -0.6692f;
			uParam0->f_66[1].f_14 = 0.737f;
			uParam0->f_66[1].f_8 = { 150f, 150f, 10f };
			uParam0->f_66[1].f_17 = 455f;
			uParam0->f_168 = { 1352.04f, 4370.251f, 43.3564f };
			uParam0->f_107 = { 1352.04f, 4370.251f, 43.3564f };
			uParam0->f_110 = { 1352.04f, 4370.251f, 43.3564f };
			uParam0->f_158[0] = { 1658.039f, 4828.536f, 40.9956f };
			uParam0->f_162[0] = 275.6415f;
			uParam0->f_164 = { 1386.179f, 4347.256f, 42.0701f };
			uParam0->f_167 = 321.2393f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_2", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR03", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 1;
			break;
		
		case 23:
			uParam0->f_107 = { 3280.29f, 5159.418f, 17.9351f };
			uParam0->f_110 = { 3280.29f, 5159.418f, 17.9351f };
			uParam0->f_146 = { 3274.468f, 5158.095f, 19.1077f };
			uParam0->f_149 = { 0.2953f, 0f, -85.7135f };
			uParam0->f_152 = { 3286.704f, 5151.125f, 18.4534f };
			uParam0->f_155 = { 7.5371f, 0.0056f, -79.4105f };
			uParam0->f_164 = { 3292.449f, 5150.647f, 17.7515f };
			uParam0->f_167 = 302.2079f;
			uParam0->f_171 = { 3287.869f, 5163.059f, 17.4489f };
			uParam0->f_174 = 131.457f;
			break;
		
		case 24:
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "MegaMallWayPt";
			uParam0->f_66[0].f_5 = { 2869.192f, 4514.665f, 46.298f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "MegaMall";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 2426.653f, 3348.971f, 72.6849f };
			uParam0->f_66[1].f_11 = 0.0557f;
			uParam0->f_66[1].f_12 = -0.0115f;
			uParam0->f_66[1].f_13 = -0.4094f;
			uParam0->f_66[1].f_14 = 0.9106f;
			uParam0->f_168 = { 2669.848f, 3546.676f, 50.5799f };
			uParam0->f_66[1].f_8 = { 175f, 175f, 10f };
			uParam0->f_66[1].f_17 = 268f;
			uParam0->f_107 = { 2669.848f, 3546.676f, 50.5799f };
			uParam0->f_110 = { 2669.848f, 3546.676f, 50.5799f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_14", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_14", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2869.192f, 4514.665f, 46.298f };
			uParam0->f_162[0] = 174.1073f;
			break;
		
		case 25:
			uParam0->f_107 = { 2076.711f, 4782.254f, 40.0605f };
			uParam0->f_110 = { 2129.565f, 4802.727f, 40.0246f };
			break;
		
		case 26:
			uParam0->f_107 = { 2149.737f, 4798.472f, 40.1071f };
			uParam0->f_110 = { 2149.737f, 4798.472f, 40.1071f };
			break;
		
		case 27:
			uParam0->f_107 = { 532.8872f, 2670.861f, 41.3513f };
			uParam0->f_110 = { 532.8872f, 2670.861f, 41.3513f };
			uParam0->f_146 = { 535.0646f, 2669.309f, 42.8091f };
			uParam0->f_149 = { -3.1569f, -0.1465f, -11.3918f };
			uParam0->f_152 = { 525.2866f, 2665.837f, 42.9374f };
			uParam0->f_155 = { 4.9124f, -0.0076f, -96.9372f };
			uParam0->f_164 = { 532.8944f, 2658.28f, 41.65f };
			uParam0->f_167 = 329.0565f;
			uParam0->f_171 = { 521.9125f, 2666.101f, 41.4715f };
			uParam0->f_174 = 3.0063f;
			break;
		
		case 28:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "JackInn";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1892.367f, 3830.595f, 31.9409f };
			uParam0[0]->f_8 = 0.0109f;
			uParam0[0]->f_9 = -0.0022f;
			uParam0[0]->f_10 = -0.4457f;
			uParam0[0]->f_11 = 0.8951f;
			uParam0[0]->f_1 = 2046537925;
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "JackInn";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1964.541f, 3775.375f, 31.6535f };
			uParam0[1]->f_8 = 0.0124f;
			uParam0[1]->f_9 = 0.0048f;
			uParam0[1]->f_10 = 0.1899f;
			uParam0[1]->f_11 = 0.9817f;
			uParam0[1]->f_1 = 2046537925;
			uParam0->f_107 = { 1963.957f, 3838.843f, 31.2091f };
			uParam0->f_110 = { 1963.957f, 3838.843f, 31.2091f };
			uParam0->f_146 = { 1974.445f, 3839.454f, 35.3948f };
			uParam0->f_149 = { 12.1583f, -0.0096f, 166.4116f };
			uParam0->f_152 = { 1974.41f, 3836.866f, 31.9998f };
			uParam0->f_155 = { 16.4125f, 0f, 143.1034f };
			break;
		
		case 29:
			uParam0->f_107 = { 2683.982f, 4335.425f, 44.882f };
			uParam0->f_110 = { 2683.982f, 4335.425f, 44.882f };
			uParam0->f_158[0] = { 2857.758f, 4436.28f, 47.7903f };
			uParam0->f_162[0] = 96.8728f;
			uParam0->f_191 = { 2715.148f, 4386.868f, 46.7436f };
			uParam0->f_194 = 115.0899f;
			break;
		
		case 30:
			uParam0->f_107 = { 2038.985f, 3222.693f, 43.8001f };
			uParam0->f_110 = { 2038.985f, 3222.693f, 43.8001f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_10", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT2", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 2039.047f, 3220.283f, 43.7959f };
			uParam0->f_158[0] = { 2678.278f, 3963.51f, 43.4808f };
			uParam0->f_162[0] = 213.4533f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NewTrailerParkWayPt";
			uParam0->f_66[0].f_5 = { 2678.278f, 3963.51f, 43.4808f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "RecycleCenterPlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 1674.231f, 2611.925f, 113.5059f };
			uParam0->f_66[1].f_11 = -0.0331f;
			uParam0->f_66[1].f_12 = 0.0094f;
			uParam0->f_66[1].f_13 = -0.276f;
			uParam0->f_66[1].f_14 = 0.9606f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 665f;
			uParam0->f_168 = { 2038.576f, 3224.495f, 43.8766f };
			break;
		
		case 31:
			uParam0->f_107 = { 873.6542f, 2849.92f, 55.9454f };
			uParam0->f_110 = { 873.6542f, 2849.92f, 55.9454f };
			uParam0->f_146 = { 871.9132f, 2845.716f, 57.124f };
			uParam0->f_149 = { -0.9276f, 0f, 5.2516f };
			uParam0->f_152 = { 866.4645f, 2861.749f, 57.06f };
			uParam0->f_155 = { 5.3438f, 0.006f, -75.1635f };
			uParam0->f_164 = { 872.2538f, 2865.438f, 56.2123f };
			uParam0->f_167 = 152.2005f;
			uParam0->f_171 = { 878.3112f, 2841.126f, 55.8722f };
			uParam0->f_174 = 216.5979f;
			break;
		
		case 32:
			uParam0->f_107 = { 2463.564f, 3422.829f, 49.0819f };
			uParam0->f_110 = { 2463.564f, 3422.829f, 49.0819f };
			uParam0->f_168 = { 2473.774f, 3640.914f, 44.2181f };
			uParam0->f_146 = { 2438.779f, 3467.493f, 64.7144f };
			uParam0->f_149 = { 2.066f, 0f, -93.2163f };
			uParam0->f_152 = { 2439.326f, 3467.463f, 49.5392f };
			uParam0->f_155 = { 2.066f, 0f, -93.2163f };
			uParam0->f_164 = { 2408.07f, 3477.876f, 48.1443f };
			uParam0->f_167 = 221.7315f;
			uParam0->f_158[0] = { 2857.758f, 4436.28f, 47.7903f };
			uParam0->f_162[0] = 96.8728f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "SmugglersDropOff_01";
			uParam0->f_66[0].f_5 = { 2894.737f, 4450.115f, 47.7495f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "SmugglersPlane";
			uParam0->f_66[1].f_2 = 102;
			uParam0->f_66[1].f_5 = { 2376.498f, 3162.74f, 73.3197f };
			uParam0->f_66[1].f_11 = 0.0002f;
			uParam0->f_66[1].f_12 = 0.0434f;
			uParam0->f_66[1].f_13 = -0.0808f;
			uParam0->f_66[1].f_14 = 0.9958f;
			uParam0->f_66[1].f_8 = { 200f, 200f, 10f };
			uParam0->f_66[1].f_17 = 260f;
			break;
		
		case 33:
			uParam0->f_107 = { 526.8232f, 3123.025f, 39.5975f };
			uParam0->f_110 = { 526.8232f, 3123.025f, 39.5975f };
			uParam0->f_146 = { 527.374f, 3118.425f, 40.874f };
			uParam0->f_149 = { -3.6327f, 0f, -65.3691f };
			uParam0->f_152 = { 530.2779f, 3116.602f, 40.8915f };
			uParam0->f_155 = { 2.2863f, 0.0424f, 81.3362f };
			uParam0->f_164 = { 524.4958f, 3115.119f, 40f };
			uParam0->f_167 = 41.0465f;
			uParam0->f_171 = { 511.3625f, 3120.488f, 39.7792f };
			uParam0->f_174 = 248.7609f;
			break;
		
		case 34:
			uParam0->f_107 = { 972.52f, 4461.05f, 50.81f };
			uParam0->f_110 = { 972.52f, 4461.05f, 50.81f };
			uParam0->f_146 = { 975.6762f, 4455.78f, 56.5023f };
			uParam0->f_149 = { -4.9392f, 0f, -78.2685f };
			uParam0->f_152 = { 978.1075f, 4464.296f, 55.454f };
			uParam0->f_155 = { -23.0999f, 0f, 101.9763f };
			break;
		
		case 35:
			uParam0->f_107 = { 944.6802f, 3614.734f, 31.6225f };
			uParam0->f_110 = { 944.6802f, 3614.734f, 31.6225f };
			uParam0->f_191 = { 2921.194f, 3724.188f, 51.6753f };
			uParam0->f_194 = 344.2805f;
			break;
		
		case 36:
			uParam0->f_107 = { 2006.85f, 3069.641f, 46.05f };
			uParam0->f_110 = { 2006.85f, 3069.641f, 46.05f };
			break;
		
		case 37:
			uParam0->f_164 = { 1463.12f, 3099.275f, 39.7173f };
			uParam0->f_167 = 343.2928f;
			uParam0->f_107 = { 1178.197f, 3271.263f, 38.2326f };
			uParam0->f_110 = { 1178.197f, 3271.263f, 38.2326f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_12", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT3", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 1433.04f, 3146.104f, 40.0637f };
			uParam0->f_158[0] = { 2592.272f, 4648.56f, 33.1437f };
			uParam0->f_162[0] = 276.7005f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "OldBoatWayPt";
			uParam0->f_66[0].f_5 = { 2592.272f, 4648.56f, 33.1437f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE1_08_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 462.8008f, 3198.386f, 76.7479f };
			uParam0->f_66[1].f_11 = 0.0056f;
			uParam0->f_66[1].f_12 = 0.0335f;
			uParam0->f_66[1].f_13 = -0.7024f;
			uParam0->f_66[1].f_14 = 0.711f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 665f;
			uParam0->f_168 = { 1178.197f, 3271.263f, 38.2326f };
			break;
		
		case 38:
			uParam0->f_164 = { 1463.12f, 3099.275f, 40.2f };
			uParam0->f_167 = 343.2928f;
			uParam0->f_107 = { 1421.57f, 3139.941f, 39.9915f };
			uParam0->f_110 = { 1421.57f, 3139.941f, 39.9915f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_6", 64);
			StringCopy(&(uParam0->f_129), "ARMS_REPT0", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_168 = { 1433.04f, 3146.104f, 40.0637f };
			uParam0->f_158[0] = { 2533.499f, 4590.136f, 32.3838f };
			uParam0->f_162[0] = 137.0484f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "TrailersAndBoatWayPt";
			uParam0->f_66[0].f_5 = { 2533.499f, 4590.136f, 32.3838f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "SmugglersPlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 675.2627f, 2968.759f, 71.1935f };
			uParam0->f_66[1].f_11 = 0.0182f;
			uParam0->f_66[1].f_12 = 0.0018f;
			uParam0->f_66[1].f_13 = -0.6328f;
			uParam0->f_66[1].f_14 = 0.7741f;
			uParam0->f_66[1].f_8 = { 500f, 500f, 10f };
			uParam0->f_66[1].f_17 = 726f;
			uParam0->f_168 = { 1428.3f, 3143.96f, 40.387f };
			break;
		
		case 40:
			uParam0->f_107 = { 2920.068f, 4635.75f, 47.5452f };
			uParam0->f_110 = { 2920.068f, 4635.75f, 47.5452f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_4", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR04a", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 1;
			uParam0->f_168 = { 1433.04f, 3146.104f, 40.0637f };
			uParam0->f_158[0] = { 3265.948f, 5004.296f, 21.2842f };
			uParam0->f_162[0] = 71.4713f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "RailHouse01WayPt";
			uParam0->f_66[0].f_5 = { 3265.948f, 5004.296f, 21.2842f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "RailHousePlane";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 3056.89f, 4057.336f, 103.7062f };
			uParam0->f_66[1].f_11 = 0.0016f;
			uParam0->f_66[1].f_12 = -0.0023f;
			uParam0->f_66[1].f_13 = 0.134f;
			uParam0->f_66[1].f_14 = 0.991f;
			uParam0->f_66[1].f_8 = { 250f, 250f, 10f };
			uParam0->f_66[1].f_17 = 548f;
			uParam0->f_168 = { 2924.086f, 4638.246f, 47.5449f };
			break;
		
		case 42:
			uParam0->f_107 = { 269.134f, 3150.74f, 41.1195f };
			uParam0->f_110 = { 269.134f, 3150.74f, 41.1195f };
			uParam0->f_146 = { 283.6494f, 3136.644f, 42.3597f };
			uParam0->f_149 = { -3.8976f, 0f, 45.0614f };
			uParam0->f_152 = { 273.0124f, 3173.184f, 42.114f };
			uParam0->f_155 = { 11.1353f, -0.0101f, 123.4599f };
			uParam0->f_164 = { 268.3168f, 3168.125f, 41.7703f };
			uParam0->f_167 = 329.546f;
			uParam0->f_171 = { 282.4717f, 3140.178f, 40.788f };
			uParam0->f_174 = 93.0356f;
			break;
		
		case 41:
			uParam0->f_107 = { 279.3029f, 3184.389f, 41.1172f };
			uParam0->f_110 = { 279.3029f, 3184.389f, 41.1172f };
			break;
		
		case 43:
			uParam0->f_107 = { 1350.97f, 4064.97f, 30.15f };
			uParam0->f_110 = { 1350.97f, 4064.97f, 30.15f };
			break;
		
		case 44:
			uParam0->f_107 = { 533.2363f, 3972.098f, 30.9251f };
			uParam0->f_110 = { 533.2363f, 3972.098f, 30.9251f };
			break;
		
		case 45:
			uParam0->f_107 = { -429.903f, 4436.65f, 27.1854f };
			uParam0->f_110 = { -429.903f, 4436.65f, 27.1854f };
			break;
		
		case 46:
			uParam0->f_107 = { -1249.915f, 2557.707f, 16.3597f };
			uParam0->f_110 = { -1249.915f, 2557.707f, 16.3597f };
			uParam0->f_195[0] = { 2434.29f, 3982.002f, 35.7981f };
			uParam0->f_195[1] = { 1633.58f, 3486.548f, 35.6313f };
			uParam0->f_195[2] = { 936.2628f, 3538.19f, 33.0475f };
			uParam0->f_195[3] = { 225.5858f, 3007.948f, 41.4752f };
			uParam0->f_195[4] = { 77.104f, 2856.502f, 51.914f };
			uParam0->f_195[5] = { -374.427f, 2878.798f, 41.0882f };
			uParam0->f_195[6] = { -1441.497f, 2661.541f, 16.6505f };
			break;
		
		case 47:
			uParam0->f_107 = { 180.5068f, 6577.189f, 30.8447f };
			uParam0->f_110 = { 180.5068f, 6577.189f, 30.8447f };
			uParam0->f_195[0] = { 2945.647f, 3901.078f, 51.2096f };
			uParam0->f_195[1] = { 2725.51f, 4750.312f, 43.4419f };
			uParam0->f_195[2] = { 2446.74f, 5704.023f, 44.2439f };
			uParam0->f_195[3] = { 2158.837f, 6068.171f, 50.8745f };
			uParam0->f_195[4] = { 1929.864f, 6332.483f, 42.1894f };
			uParam0->f_195[5] = { 1119.306f, 6494.814f, 20.0857f };
			uParam0->f_195[6] = { 180.5068f, 6577.189f, 30.8447f };
			break;
		
		case 48:
			uParam0->f_107 = { 1559.322f, 2204.163f, 77.9422f };
			uParam0->f_110 = { 1559.322f, 2204.163f, 77.9422f };
			break;
		
		case 49:
			uParam0->f_107 = { 2711.447f, 4145.717f, 42.8083f };
			uParam0->f_110 = { 2711.447f, 4145.717f, 42.8083f };
			break;
		
		case 39:
			uParam0->f_107 = { 1436.967f, 3144.639f, 40.0988f };
			uParam0->f_110 = { 1436.967f, 3144.639f, 40.0988f };
			break;
		
		case 50:
			uParam0->f_107 = { 3284.101f, 5153.764f, 17.5866f };
			uParam0->f_110 = { 3284.101f, 5153.764f, 17.5866f };
			break;
		
		case 51:
			uParam0->f_107 = { 2953.748f, 2789.826f, 41.0514f };
			uParam0->f_110 = { 2953.748f, 2789.826f, 41.0514f };
			break;
		
		case 52:
			uParam0->f_107 = { 2211.155f, 5599.272f, 52.8715f };
			uParam0->f_110 = { 2211.155f, 5599.272f, 52.8715f };
			break;
		
		case 53:
			uParam0->f_107 = { 3811.882f, 4462.616f, 3.1544f };
			uParam0->f_110 = { 3811.882f, 4462.616f, 3.1544f };
			break;
		
		case 54:
			uParam0->f_107 = { 3927.053f, 4391.273f, 15.6169f };
			uParam0->f_110 = { 3927.053f, 4391.273f, 15.6169f };
			break;
		
		case 55:
			uParam0->f_107 = { 11.4536f, 6856.394f, 11.9117f };
			uParam0->f_110 = { 11.4536f, 6856.394f, 11.9117f };
			break;
		
		case 56:
			uParam0->f_107 = { -943.9194f, 6176.161f, 3.0489f };
			uParam0->f_110 = { -943.9194f, 6176.161f, 3.0489f };
			break;
		
		case 57:
			uParam0->f_107 = { -1150.046f, 4923.993f, 220.3399f };
			uParam0->f_110 = { -1150.046f, 4923.993f, 220.3399f };
			break;
		
		case 58:
			uParam0->f_107 = { -1632.056f, 4738.689f, 52.1812f };
			uParam0->f_110 = { -1632.056f, 4738.689f, 52.1812f };
			break;
		
		case 59:
			uParam0->f_107 = { 166.396f, 2281.323f, 92.21f };
			uParam0->f_110 = { 166.396f, 2281.323f, 92.21f };
			break;
		
		case 60:
			uParam0->f_107 = { -288.5126f, 2569.375f, 71.5438f };
			uParam0->f_110 = { -288.5126f, 2569.375f, 71.5438f };
			break;
		
		case 73:
			uParam0->f_107 = { -68.9043f, 1895.918f, 195.3272f };
			uParam0->f_110 = { -68.9043f, 1895.918f, 195.3272f };
			break;
		
		case 74:
			uParam0->f_107 = { 1885.539f, 432.242f, 163.2558f };
			uParam0->f_110 = { 1885.539f, 432.242f, 163.2558f };
			break;
		
		case 75:
			uParam0->f_107 = { -2130f, 4574.296f, 1.6719f };
			uParam0->f_110 = { -2130f, 4574.296f, 1.6719f };
			break;
		
		case 76:
			uParam0->f_107 = { -312.8494f, 3796.139f, 66.9603f };
			uParam0->f_110 = { -312.8494f, 3796.139f, 66.9603f };
			break;
		
		case 61:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_01";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2347.18f, 5510.768f, 51.2754f };
			uParam0[0]->f_8 = 0.0058f;
			uParam0[0]->f_9 = -0.02f;
			uParam0[0]->f_10 = 0.4672f;
			uParam0[0]->f_11 = 0.8839f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_01";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2366.147f, 5640.438f, 88.7714f };
			uParam0[1]->f_8 = 0.0794f;
			uParam0[1]->f_9 = -0.0272f;
			uParam0[1]->f_10 = 0.7464f;
			uParam0[1]->f_11 = 0.6602f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_01_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 3367.586f, 5277.988f, 130.1408f };
			uParam0[2]->f_8 = 0.0266f;
			uParam0[2]->f_9 = 0.084f;
			uParam0[2]->f_10 = 0.6817f;
			uParam0[2]->f_11 = 0.7263f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 1135f;
			uParam0->f_107 = { 2225.516f, 5582.665f, 52.8192f };
			uParam0->f_110 = { 2225.516f, 5582.665f, 52.8192f };
			uParam0->f_175 = 150f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_3", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE102", 64);
			uParam0->f_190 = 22f;
			uParam0->f_145 = 0;
			uParam0->f_176[0] = { 2216.771f, 5564.993f, 52.706f };
			uParam0->f_176[1] = { 2217.367f, 5595.737f, 53.0513f };
			uParam0->f_183[0] = { 2204.331f, 5565.987f, 52.8359f };
			uParam0->f_183[1] = { 2216.07f, 5601.528f, 53.275f };
			break;
		
		case 62:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_02";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 3689.647f, 4616.099f, 18.238f };
			uParam0[0]->f_8 = 0.0438f;
			uParam0[0]->f_9 = 0.0453f;
			uParam0[0]->f_10 = 0.9958f;
			uParam0[0]->f_11 = -0.0665f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 3767.36f, 4528.497f, 5.2465f };
			uParam0[1]->f_8 = 0.0233f;
			uParam0[1]->f_9 = 0.0886f;
			uParam0[1]->f_10 = 0.9359f;
			uParam0[1]->f_11 = 0.34f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_02";
			uParam0[1]->f_3 = 103;
			uParam0[1]->f_5 = { 3589.693f, 4594.061f, 26.9929f };
			uParam0[1]->f_8 = 0.1094f;
			uParam0[1]->f_9 = 0.1563f;
			uParam0[1]->f_10 = 0.9815f;
			uParam0[1]->f_11 = 0.0156f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_02_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 3933.134f, 3757.129f, 105.0956f };
			uParam0[2]->f_8 = 0.0209f;
			uParam0[2]->f_9 = 0.0207f;
			uParam0[2]->f_10 = 0.152f;
			uParam0[2]->f_11 = 0.9879f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 745f;
			uParam0->f_107 = { 3702.827f, 4511.593f, 20.1186f };
			uParam0->f_110 = { 3702.827f, 4511.593f, 20.1186f };
			uParam0->f_175 = 175f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_13", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE107", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			break;
		
		case 63:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_03";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2639.021f, 3208.713f, 53.3696f };
			uParam0[0]->f_8 = 0.076f;
			uParam0[0]->f_9 = 0.022f;
			uParam0[0]->f_10 = -0.0104f;
			uParam0[0]->f_11 = 0.9968f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_03";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2697.863f, 3346.009f, 56.7158f };
			uParam0[1]->f_8 = 0.0581f;
			uParam0[1]->f_9 = -0.0074f;
			uParam0[1]->f_10 = 0.9615f;
			uParam0[1]->f_11 = 0.2686f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_03";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2534.338f, 3230.476f, 51.7537f };
			uParam0[2]->f_8 = 0.0483f;
			uParam0[2]->f_9 = -0.0277f;
			uParam0[2]->f_10 = -0.4655f;
			uParam0[2]->f_11 = 0.8833f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_03_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 2343.503f, 2962.599f, 92.1772f };
			uParam0[3]->f_8 = 0.1689f;
			uParam0[3]->f_9 = 0.4059f;
			uParam0[3]->f_10 = -0.2324f;
			uParam0[3]->f_11 = 0.8676f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 391f;
			uParam0->f_107 = { 2623.645f, 3287.713f, 54.3001f };
			uParam0->f_110 = { 2623.645f, 3287.713f, 54.3001f };
			uParam0->f_175 = 160f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_11", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE106", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			break;
		
		case 64:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_04";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1687.741f, 2958.591f, 57.288f };
			uParam0[0]->f_8 = 0.0874f;
			uParam0[0]->f_9 = -0.0283f;
			uParam0[0]->f_10 = -0.48f;
			uParam0[0]->f_11 = 0.8724f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_04";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1735.854f, 3167.743f, 42.7488f };
			uParam0[1]->f_8 = 0.0047f;
			uParam0[1]->f_9 = 0.0033f;
			uParam0[1]->f_10 = 0.9995f;
			uParam0[1]->f_11 = 0.0313f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 1;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_04_PLANE";
			uParam0[2]->f_3 = 101;
			uParam0[2]->f_5 = { 873.8751f, 3879.556f, 272.0572f };
			uParam0[2]->f_8 = -0.0166f;
			uParam0[2]->f_9 = -0.1132f;
			uParam0[2]->f_10 = 0.9184f;
			uParam0[2]->f_11 = -0.3788f;
			uParam0[2]->f_1 = -644710429;
			uParam0[2]->f_12 = 1178f;
			uParam0->f_107 = { 1761.836f, 3050.562f, 60.8981f };
			uParam0->f_110 = { 1761.836f, 3050.562f, 60.8981f };
			uParam0->f_175 = 190f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_9", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE105", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 15f;
			uParam0->f_176[0] = { 1736.891f, 3019.613f, 61.4096f };
			uParam0->f_176[1] = { 1790.993f, 3030.57f, 59.2148f };
			uParam0->f_183[0] = { 1724.032f, 3014.934f, 61.2488f };
			uParam0->f_183[1] = { 1777.958f, 3023.668f, 61.738f };
			break;
		
		case 65:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_05";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1968.251f, 3563.292f, 37.8475f };
			uParam0[0]->f_8 = -0.0183f;
			uParam0[0]->f_9 = 0.0422f;
			uParam0[0]->f_10 = 0.9225f;
			uParam0[0]->f_11 = 0.3832f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_05";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1867.285f, 3437.477f, 39.7184f };
			uParam0[1]->f_8 = 0.0253f;
			uParam0[1]->f_9 = 0.0153f;
			uParam0[1]->f_10 = 0.714f;
			uParam0[1]->f_11 = -0.6995f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_05";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1890.261f, 3391.307f, 40.7963f };
			uParam0[2]->f_8 = 0.0134f;
			uParam0[2]->f_9 = 0.0213f;
			uParam0[2]->f_10 = -0.4276f;
			uParam0[2]->f_11 = 0.9036f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 0;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_05";
			uParam0[3]->f_3 = 104;
			uParam0[3]->f_5 = { 2067.032f, 3330.474f, 45.1739f };
			uParam0[3]->f_8 = 0.0121f;
			uParam0[3]->f_9 = 0.0396f;
			uParam0[3]->f_10 = 0.373f;
			uParam0[3]->f_11 = 0.9269f;
			uParam0[3]->f_1 = func_336();
			(*uParam0)[4] = 1;
			uParam0[4]->f_2 = 1;
			uParam0[4]->f_4 = "NEW_TYPE1_05_PLANE";
			uParam0[4]->f_3 = 101;
			uParam0[4]->f_5 = { 1730.793f, 4305.94f, 149.1613f };
			uParam0[4]->f_8 = 0.0174f;
			uParam0[4]->f_9 = -0.0833f;
			uParam0[4]->f_10 = 0.9814f;
			uParam0[4]->f_11 = -0.172f;
			uParam0[4]->f_1 = -644710429;
			uParam0[4]->f_12 = 853f;
			uParam0->f_107 = { 1956.443f, 3438.924f, 40.7919f };
			uParam0->f_110 = { 1956.443f, 3438.924f, 40.7919f };
			uParam0->f_175 = 150f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_5", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE103", 64);
			uParam0->f_190 = 32f;
			uParam0->f_145 = 2;
			uParam0->f_176[0] = { 1911.579f, 3434.243f, 44.428f };
			uParam0->f_176[1] = { 1958.7f, 3486.656f, 40.035f };
			uParam0->f_183[0] = { 1906.108f, 3434.05f, 43.1727f };
			uParam0->f_183[1] = { 1931.406f, 3503.653f, 40.4347f };
			break;
		
		case 66:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_06";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2747.765f, 2902.531f, 35.8669f };
			uParam0[0]->f_8 = -0.0031f;
			uParam0[0]->f_9 = -0.0001f;
			uParam0[0]->f_10 = 0.9773f;
			uParam0[0]->f_11 = -0.2119f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_06";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2625.508f, 2814.443f, 33.1277f };
			uParam0[1]->f_8 = 0.0499f;
			uParam0[1]->f_9 = -0.0287f;
			uParam0[1]->f_10 = -0.3652f;
			uParam0[1]->f_11 = 0.9292f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_06";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2694.796f, 2796.249f, 34.4047f };
			uParam0[2]->f_8 = 0.1772f;
			uParam0[2]->f_9 = -0.0431f;
			uParam0[2]->f_10 = -0.1088f;
			uParam0[2]->f_11 = 0.9772f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_06_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 1902.63f, 3026.488f, 286.5499f };
			uParam0[3]->f_8 = 0.0504f;
			uParam0[3]->f_9 = -0.1138f;
			uParam0[3]->f_10 = 0.8059f;
			uParam0[3]->f_11 = -0.5788f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 753f;
			uParam0->f_107 = { 2685.869f, 2844.306f, 38.8406f };
			uParam0->f_110 = { 2685.869f, 2844.306f, 38.8406f };
			uParam0->f_175 = 125f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_19", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE110", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			break;
		
		case 67:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_07";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2935.607f, 4592.214f, 48.7006f };
			uParam0[0]->f_8 = -0.0031f;
			uParam0[0]->f_9 = -0.013f;
			uParam0[0]->f_10 = 0.9318f;
			uParam0[0]->f_11 = 0.3628f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_07";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2941.709f, 4464.889f, 46.4858f };
			uParam0[1]->f_8 = 0.0103f;
			uParam0[1]->f_9 = 0.0254f;
			uParam0[1]->f_10 = 0.8549f;
			uParam0[1]->f_11 = 0.5181f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_07";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2774.921f, 4468.448f, 47.5966f };
			uParam0[2]->f_8 = 0.0053f;
			uParam0[2]->f_9 = -0.0205f;
			uParam0[2]->f_10 = -0.3996f;
			uParam0[2]->f_11 = 0.9164f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_07_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 3495.601f, 3895.246f, 284.7452f };
			uParam0[3]->f_8 = -0.0611f;
			uParam0[3]->f_9 = 0.0094f;
			uParam0[3]->f_10 = 0.4051f;
			uParam0[3]->f_11 = 0.9122f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 825f;
			uParam0->f_107 = { 2856.502f, 4485.064f, 47.3373f };
			uParam0->f_110 = { 2856.502f, 4485.064f, 47.3373f };
			uParam0->f_175 = 140f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_7", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE104", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_176[0] = { 2862.319f, 4465.292f, 47.4456f };
			uParam0->f_176[1] = { 2889.961f, 4494.598f, 46.9656f };
			uParam0->f_183[0] = { 2868.774f, 4467.256f, 47.3611f };
			uParam0->f_183[1] = { 2883.83f, 4484.409f, 47.3394f };
			break;
		
		case 68:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_08";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 1174.944f, 3191.438f, 38.8565f };
			uParam0[0]->f_8 = 0.0672f;
			uParam0[0]->f_9 = 0.0398f;
			uParam0[0]->f_10 = 0.0199f;
			uParam0[0]->f_11 = 0.9967f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_08";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 1117.591f, 3328.312f, 34.794f };
			uParam0[1]->f_8 = 0.0001f;
			uParam0[1]->f_9 = 0.0037f;
			uParam0[1]->f_10 = 0.9944f;
			uParam0[1]->f_11 = 0.1059f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_08";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 1357.359f, 3275.735f, 37.4399f };
			uParam0[2]->f_8 = -0.0329f;
			uParam0[2]->f_9 = 0.015f;
			uParam0[2]->f_10 = 0.6826f;
			uParam0[2]->f_11 = 0.7299f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_08_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 462.8008f, 3198.386f, 76.7479f };
			uParam0[3]->f_8 = 0.0056f;
			uParam0[3]->f_9 = 0.0335f;
			uParam0[3]->f_10 = -0.7024f;
			uParam0[3]->f_11 = 0.711f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 665f;
			uParam0->f_107 = { 1178.197f, 3271.263f, 38.2326f };
			uParam0->f_110 = { 1178.197f, 3271.263f, 38.2326f };
			uParam0->f_175 = 175f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_17", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYPE109", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			break;
		
		case 69:
			(*uParam0)[0] = 0;
			uParam0[0]->f_2 = 1;
			uParam0[0]->f_4 = "NEW_TYPE1_09";
			uParam0[0]->f_3 = 101;
			uParam0[0]->f_5 = { 2626.512f, 4173.169f, 42.5261f };
			uParam0[0]->f_8 = -0.025f;
			uParam0[0]->f_9 = -0.0094f;
			uParam0[0]->f_10 = -0.6106f;
			uParam0[0]->f_11 = 0.7915f;
			uParam0[0]->f_1 = func_336();
			(*uParam0)[1] = 0;
			uParam0[1]->f_2 = 1;
			uParam0[1]->f_4 = "NEW_TYPE1_09";
			uParam0[1]->f_3 = 102;
			uParam0[1]->f_5 = { 2749.975f, 4049.285f, 60f };
			uParam0[1]->f_8 = -0.0153f;
			uParam0[1]->f_9 = 0.0378f;
			uParam0[1]->f_10 = 0.3854f;
			uParam0[1]->f_11 = 0.9219f;
			uParam0[1]->f_1 = func_336();
			(*uParam0)[2] = 0;
			uParam0[2]->f_2 = 1;
			uParam0[2]->f_4 = "NEW_TYPE1_09";
			uParam0[2]->f_3 = 103;
			uParam0[2]->f_5 = { 2770.138f, 4202.668f, 46.3271f };
			uParam0[2]->f_8 = -0.0508f;
			uParam0[2]->f_9 = -0.0362f;
			uParam0[2]->f_10 = 0.8874f;
			uParam0[2]->f_11 = 0.4568f;
			uParam0[2]->f_1 = func_336();
			(*uParam0)[3] = 1;
			uParam0[3]->f_2 = 1;
			uParam0[3]->f_4 = "NEW_TYPE1_09_PLANE";
			uParam0[3]->f_3 = 101;
			uParam0[3]->f_5 = { 462.8008f, 3198.386f, 76.7479f };
			uParam0[3]->f_8 = 0.0056f;
			uParam0[3]->f_9 = 0.0335f;
			uParam0[3]->f_10 = -0.7024f;
			uParam0[3]->f_11 = 0.711f;
			uParam0[3]->f_1 = -644710429;
			uParam0[3]->f_12 = 860f;
			uParam0->f_107 = { 2709.13f, 4146.82f, 42.7539f };
			uParam0->f_110 = { 2709.13f, 4146.82f, 42.7539f };
			uParam0->f_175 = 350f;
			StringCopy(&(uParam0->f_113), "DTRFKGR_1", 64);
			StringCopy(&(uParam0->f_129), "ARMS_GR01", 64);
			uParam0->f_190 = 27f;
			uParam0->f_145 = 2;
			uParam0->f_176[0] = { 2702.321f, 4120.562f, 42.8035f };
			uParam0->f_176[1] = { 2719.254f, 4122.151f, 42.781f };
			uParam0->f_183[0] = { 2696.821f, 4123.544f, 42.7634f };
			uParam0->f_183[1] = { 2745.133f, 4144.972f, 43.1873f };
			break;
		
		case 70:
			uParam0->f_107 = { 1206.882f, 3599.093f, 33.0185f };
			uParam0->f_110 = { 1206.882f, 3599.093f, 33.0185f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_16", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_16", 64);
			uParam0->f_145 = 0;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2639.703f, 3993.148f, 41.6388f };
			uParam0->f_162[0] = 80.0101f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_01";
			uParam0->f_66[0].f_5 = { 2639.703f, 3993.148f, 41.6388f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_01_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 28.4625f, 3715.926f, 230.1408f };
			uParam0->f_66[1].f_11 = 0.0491f;
			uParam0->f_66[1].f_12 = -0.1637f;
			uParam0->f_66[1].f_13 = 0.7293f;
			uParam0->f_66[1].f_14 = -0.6625f;
			uParam0->f_66[1].f_8 = { 700f, 700f, 10f };
			uParam0->f_66[1].f_17 = 1135f;
			uParam0->f_168 = { 1206.882f, 3599.093f, 33.0185f };
			break;
		
		case 71:
			uParam0->f_107 = { 2181.767f, 3367.612f, 44.4324f };
			uParam0->f_110 = { 2181.767f, 3367.612f, 44.4324f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_18", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_18", 64);
			uParam0->f_145 = 2;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2849.454f, 3579.741f, 52.3279f };
			uParam0->f_162[0] = 155.842f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_02";
			uParam0->f_66[0].f_5 = { 2849.454f, 3579.741f, 52.3279f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_02_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 1693.565f, 3099.601f, 85.4015f };
			uParam0->f_66[1].f_11 = 0.0143f;
			uParam0->f_66[1].f_12 = 0.0283f;
			uParam0->f_66[1].f_13 = -0.4536f;
			uParam0->f_66[1].f_14 = 0.8906f;
			uParam0->f_66[1].f_8 = { 175f, 175f, 10f };
			uParam0->f_66[1].f_17 = 510f;
			uParam0->f_168 = { 2181.767f, 3367.612f, 44.4324f };
			break;
		
		case 72:
			uParam0->f_107 = { 1690.203f, 3166.528f, 44.8952f };
			uParam0->f_110 = { 1690.203f, 3166.528f, 44.8952f };
			StringCopy(&(uParam0->f_113), "DTRFKGR_20", 64);
			StringCopy(&(uParam0->f_129), "ARMS_TYP2_20", 64);
			uParam0->f_145 = 1;
			uParam0->f_190 = 32f;
			uParam0->f_158[0] = { 2820.657f, 3520.271f, 53.4036f };
			uParam0->f_162[0] = 159.6483f;
			uParam0->f_66[0].f_19 = 1;
			uParam0->f_66[0] = 0;
			uParam0->f_66[0].f_4 = "NEW_TYPE2_03";
			uParam0->f_66[0].f_5 = { 2673.688f, 3429.568f, 54.8667f };
			uParam0->f_66[1].f_18 = 1;
			uParam0->f_66[1] = 1;
			uParam0->f_66[1].f_1 = -644710429;
			uParam0->f_66[1].f_3 = "NEW_TYPE2_03_PLANE";
			uParam0->f_66[1].f_2 = 101;
			uParam0->f_66[1].f_5 = { 684.469f, 2863.946f, 141.8009f };
			uParam0->f_66[1].f_11 = -0.1047f;
			uParam0->f_66[1].f_12 = 0.017f;
			uParam0->f_66[1].f_13 = -0.6939f;
			uParam0->f_66[1].f_14 = 0.7122f;
			uParam0->f_66[1].f_8 = { 350f, 350f, 10f };
			uParam0->f_66[1].f_17 = 1010f;
			uParam0->f_168 = { 1690.203f, 3166.528f, 44.8952f };
			break;
	}
	return 1;
}

int func_336()
{
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar0)
	{
		case 0:
			return -16948145;
			break;
		
		case 1:
			return 1770332643;
			break;
		
		case 2:
			return -1207771834;
			break;
		
		default:
			return -16948145;
			break;
	}
	return -16948145;
}

int func_337(var uParam0, int iParam1)
{
	func_335(&(uParam0->f_218[0]), 25);
	switch (iParam1)
	{
		case 0:
			uParam0->f_1101 = -1736970383;
			func_335(uParam0[0], 1);
			func_335(&(uParam0->f_218[0]), 26);
			func_335(&(uParam0->f_218[1]), 27);
			uParam0->f_1087 = 1;
			uParam0->f_1089 = 1;
			uParam0->f_1088 = 1;
			uParam0->f_1090 = { 1758.999f, 3291.629f, 40.1563f };
			uParam0->f_1093 = 290.3184f;
			uParam0->f_1094 = 8;
			uParam0->f_1095 = 2;
			uParam0->f_1096 = { 1767.517f, 3291.979f, 40.2355f };
			uParam0->f_1099 = 259.6187f;
			uParam0->f_1100 = 1518533038;
			uParam0->f_1141 = -1579533167;
			uParam0->f_1142[0] = -114291515;
			uParam0->f_1142[1] = -114291515;
			uParam0->f_1142[2] = -114291515;
			uParam0->f_1142[3] = -114291515;
			uParam0->f_1148 = 368603149;
			uParam0->f_1102 = 120000f;
			uParam0->f_1105 = 1;
			uParam0->f_1107 = 1;
			uParam0->f_1106 = 2;
			uParam0->f_1108 = 2;
			uParam0->f_1127[0] = -1;
			uParam0->f_1127[1] = 0;
			uParam0->f_1127[2] = -1;
			uParam0->f_1127[3] = 0;
			uParam0->f_1127[4] = -1;
			uParam0->f_1127[5] = 0;
			uParam0->f_1127[6] = -1;
			uParam0->f_1127[7] = 0;
			uParam0->f_1109[0] = func_336();
			uParam0->f_1109[1] = func_336();
			uParam0->f_1109[2] = func_336();
			uParam0->f_1109[3] = func_336();
			uParam0->f_1118[0] = -1736970383;
			uParam0->f_1118[1] = -48477765;
			uParam0->f_1118[2] = -1736970383;
			uParam0->f_1118[3] = -48477765;
			uParam0->f_1136 = 1;
			uParam0->f_1137 = 2;
			uParam0->f_1138[0] = -1207771834;
			uParam0->f_1140 = 788747387;
			uParam0->f_1147 = 1877891248;
			uParam0->f_1149 = 1270590574;
			return 1;
			break;
		
		case 2:
			func_335(uParam0[0], 15);
			uParam0->f_1087 = 1;
			uParam0->f_1089 = 1;
			uParam0->f_1088 = 1;
			uParam0->f_1090 = { 1847.282f, 4550.047f, 28.8452f };
			uParam0->f_1093 = 185.4917f;
			uParam0->f_1094 = 4;
			uParam0->f_1096 = { 1847.282f, 4550.047f, 28.8452f };
			uParam0->f_1099 = 185.4917f;
			uParam0->f_1100 = 400514754;
			uParam0->f_1102 = 120000f;
			uParam0->f_1105 = 2;
			uParam0->f_1107 = 1;
			uParam0->f_1106 = 2;
			uParam0->f_1108 = 2;
			uParam0->f_1127[0] = -1;
			uParam0->f_1127[1] = 0;
			uParam0->f_1127[2] = 2;
			uParam0->f_1109[0] = 1033245328;
			uParam0->f_1109[1] = -1030275036;
			uParam0->f_1118[0] = -1736970383;
			uParam0->f_1118[1] = -48477765;
			uParam0->f_1118[2] = -48477765;
			uParam0->f_1136 = 2;
			uParam0->f_1137 = 1;
			uParam0->f_1138[0] = -1030275036;
			uParam0->f_1140 = 353883353;
			return 1;
			break;
	}
	return 0;
}

void func_338(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 158;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 69;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 90000f;
			uParam1->f_56 = 35000f;
			uParam1->f_57 = 22000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 1:
			*uParam1 = 159;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_47 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 22;
			uParam1->f_13[0] = 26;
			uParam1->f_13[1] = 23;
			uParam1->f_55 = 45000f;
			func_368(&(Global_111638.f_19978), 64);
			func_341(&(Global_111638.f_19978), 4);
			break;
		
		case 2:
			*uParam1 = 160;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 61;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 100000f;
			uParam1->f_56 = 35000f;
			uParam1->f_57 = 25000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 3:
			*uParam1 = 161;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_47 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 40;
			uParam1->f_13[0] = 26;
			uParam1->f_13[1] = 33;
			uParam1->f_55 = 45000f;
			func_368(&(Global_111638.f_19978), 64);
			func_341(&(Global_111638.f_19978), 4);
			break;
		
		case 4:
			*uParam1 = 162;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			uParam1->f_38 = 1;
			uParam1->f_39 = 0;
			uParam1->f_43 = 1;
			uParam1->f_4 = 1;
			uParam1->f_8[0] = 65;
			uParam1->f_13[0] = 26;
			uParam1->f_55 = 100000f;
			uParam1->f_56 = 30000f;
			uParam1->f_57 = 21000f;
			func_368(&(Global_111638.f_19978), 4);
			func_341(&(Global_111638.f_19978), 64);
			break;
		
		case 5:
			*uParam1 = 177;
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			if (func_254(Global_111638.f_19978, 4))
			{
				if (func_318())
				{
					uParam1->f_38 = 1;
					uParam1->f_39 = 0;
					uParam1->f_43 = 1;
					uParam1->f_47 = 0;
				}
				else
				{
					func_341(&(Global_111638.f_19978), 4);
					uParam1->f_47 = 1;
				}
			}
			else if (func_318())
			{
				uParam1->f_47 = 1;
			}
			else
			{
				uParam1->f_38 = 1;
				uParam1->f_39 = 0;
				uParam1->f_43 = 1;
				uParam1->f_47 = 0;
			}
			uParam1->f_4 = 1;
			if (uParam1->f_47)
			{
				func_368(&(Global_111638.f_19978), 64);
				Global_111638.f_19978.f_3 = func_340(uParam1);
				uParam1->f_55 = 45000f;
			}
			else
			{
				func_135(&(Global_111638.f_19978), 4);
				Global_111638.f_19978.f_3 = func_339(uParam1);
			}
			uParam1->f_13[0] = 26;
			break;
	}
}

int func_339(var uParam0)
{
	uParam0->f_13[0] = 25;
	iLocal_3054 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65000) % 7);
	if (func_318())
	{
		iLocal_3054 = Global_111638.f_19978.f_3;
	}
	else
	{
		while (iLocal_3054 == Global_111638.f_19978.f_3)
		{
			iLocal_3054 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65000) % 7);
		}
	}
	switch (iLocal_3054)
	{
		case 0:
			uParam0->f_8[0] = 67;
			uParam0->f_55 = 100000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 30000f;
			return 0;
			break;
		
		case 1:
			uParam0->f_8[0] = 64;
			uParam0->f_55 = 160000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 250000f;
			return 1;
			break;
		
		case 2:
			uParam0->f_8[0] = 63;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 32000f;
			uParam0->f_57 = 20000f;
			return 2;
			break;
		
		case 3:
			uParam0->f_8[0] = 62;
			uParam0->f_55 = 100000f;
			uParam0->f_56 = 32000f;
			uParam0->f_57 = 20000f;
			return 3;
			break;
		
		case 4:
			uParam0->f_8[0] = 13;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 30000f;
			uParam0->f_57 = 21000f;
			return 4;
			break;
		
		case 5:
			uParam0->f_8[0] = 68;
			uParam0->f_55 = 120000f;
			uParam0->f_56 = 35000f;
			uParam0->f_57 = 20000f;
			return 5;
			break;
		
		case 6:
			uParam0->f_8[0] = 66;
			uParam0->f_55 = 160000f;
			uParam0->f_56 = 45000f;
			uParam0->f_57 = 30000f;
			return 6;
			break;
	}
	return -1;
}

int func_340(var uParam0)
{
	uParam0->f_13[0] = 25;
	iLocal_3054 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65000) % 8);
	if (func_318())
	{
		iLocal_3054 = Global_111638.f_19978.f_3;
	}
	else
	{
		while (iLocal_3054 == Global_111638.f_19978.f_3)
		{
			iLocal_3054 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65000) % 8);
		}
	}
	switch (iLocal_3054)
	{
		case 0:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 38;
			uParam0->f_13[1] = 42;
			return 0;
			break;
		
		case 1:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 21;
			uParam0->f_13[1] = 23;
			return 1;
			break;
		
		case 2:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 30;
			uParam0->f_13[1] = 31;
			return 2;
			break;
		
		case 3:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 37;
			uParam0->f_13[1] = 33;
			return 3;
			break;
		
		case 4:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 24;
			uParam0->f_13[1] = 23;
			return 4;
			break;
		
		case 5:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 70;
			uParam0->f_13[1] = 31;
			return 5;
			break;
		
		case 6:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 71;
			uParam0->f_13[1] = 31;
			return 6;
			break;
		
		case 7:
			uParam0->f_47 = 1;
			uParam0->f_8[0] = 72;
			uParam0->f_13[1] = 42;
			return 7;
			break;
	}
	return -1;
}

void func_341(var uParam0, int iParam1)
{
	func_342(uParam0, iParam1);
}

void func_342(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_343()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135) && !ENTITY::IS_ENTITY_DEAD(iLocal_6135, 0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_6135, 1);
	}
	TASK::SET_SCENARIO_GROUP_ENABLED("PRISON_TOWERS", 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(Local_6103, 150f, 0);
	PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 0);
	func_259(&uLocal_3501, 0, 0);
	uVar0 = SYSTEM::FLOOR(fLocal_6111);
	func_344();
	STATS::PLAYSTATS_ODDJOB_DONE(uVar0, 16, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1651.576f, 4939.412f, 41.818f, 1721.456f, 4540.486f, 41.818f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(2499.3f, 3456.401f, -49.795f, 2424.3f, 3456.401f, 49.795f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1751.693f, 4562.989f, -57.869f, 769.406f, 4375.608f, 57.869f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(2164.038f, 4825.627f, 35.61375f, 1899.278f, 4697.752f, 49.08641f, 100f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1757.215f, 4570.54f, 30.47729f, 1385.558f, 4495.364f, 62.74048f, 100f, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	MISC::SET_TIME_SCALE(1f);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	if (!iLocal_6046)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_6135))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_6135, 1, 1);
			if (func_203(iLocal_6135, Local_6106, 1) < 50f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_6103, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_6110);
					VEHICLE::DELETE_VEHICLE(&iLocal_6135);
				}
			}
		}
	}
	if (iLocal_6046 == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		HUD::DISPLAY_RADAR(1);
	}
	func_325(0);
	VEHICLE::REMOVE_VEHICLE_RECORDING(101, "GroundTaxi");
	HUD::CLEAR_GPS_CUSTOM_ROUTE();
	VEHICLE::_REMOVE_SPEED_ZONE(Local_5695.f_102);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_6150, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_6151, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_6152, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_6153, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_344()
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

void func_345(char* sParam0)
{
	if (Global_98744 != 12)
	{
		func_346(sParam0, 5, -1);
	}
}

int func_346(char* sParam0, int iParam1, int iParam2)
{
	func_365();
	func_364();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	MISC::PAUSE_DEATH_ARREST_RESTART(1);
	MISC::SET_FADE_OUT_AFTER_ARREST(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(0);
	func_128(1);
	func_325(1);
	func_361(0);
	func_360(1);
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
	func_359(0);
	func_358(1);
	Global_98744.f_2 = Global_98781;
	if (func_357())
	{
		if (func_356())
		{
			if (Global_98781 >= func_353())
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
			func_348(iParam2, &Var1);
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
			iVar33 = func_347(SCRIPT::GET_THIS_SCRIPT_NAME());
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

int func_347(char* sParam0)
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

void func_348(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_349(uParam1, "Abigail1", func_351(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 1:
			func_349(uParam1, "Abigail2", func_351(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 2:
			func_349(uParam1, "Barry1", func_351(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 3:
			func_349(uParam1, "Barry2", func_351(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 4:
			func_349(uParam1, "Barry3", func_351(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 5:
			func_349(uParam1, "Barry3A", func_351(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 6:
			func_349(uParam1, "Barry3C", func_351(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 7:
			func_349(uParam1, "Barry4", func_351(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_350(iParam0), 0, 0);
			break;
		
		case 8:
			func_349(uParam1, "Dreyfuss1", func_351(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 9:
			func_349(uParam1, "Epsilon1", func_351(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 10:
			func_349(uParam1, "Epsilon2", func_351(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 11:
			func_349(uParam1, "Epsilon3", func_351(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 12:
			func_349(uParam1, "Epsilon4", func_351(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 13:
			func_349(uParam1, "Epsilon5", func_351(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 14:
			func_349(uParam1, "Epsilon6", func_351(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 15:
			func_349(uParam1, "Epsilon7", func_351(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 16:
			func_349(uParam1, "Epsilon8", func_351(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 17:
			func_349(uParam1, "Extreme1", func_351(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 18:
			func_349(uParam1, "Extreme2", func_351(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 19:
			func_349(uParam1, "Extreme3", func_351(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 20:
			func_349(uParam1, "Extreme4", func_351(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 21:
			func_349(uParam1, "Fanatic1", func_351(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_350(iParam0), 1, 0);
			break;
		
		case 22:
			func_349(uParam1, "Fanatic2", func_351(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_350(iParam0), 1, 0);
			break;
		
		case 23:
			func_349(uParam1, "Fanatic3", func_351(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_350(iParam0), 0, 1);
			break;
		
		case 24:
			func_349(uParam1, "Hao1", func_351(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_350(iParam0), 0, 1);
			break;
		
		case 25:
			func_349(uParam1, "Hunting1", func_351(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 26:
			func_349(uParam1, "Hunting2", func_351(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 27:
			func_349(uParam1, "Josh1", func_351(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 28:
			func_349(uParam1, "Josh2", func_351(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 29:
			func_349(uParam1, "Josh3", func_351(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 30:
			func_349(uParam1, "Josh4", func_351(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 31:
			func_349(uParam1, "Maude1", func_351(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 32:
			func_349(uParam1, "Minute1", func_351(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 33:
			func_349(uParam1, "Minute2", func_351(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 34:
			func_349(uParam1, "Minute3", func_351(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 35:
			func_349(uParam1, "MrsPhilips1", func_351(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 36:
			func_349(uParam1, "MrsPhilips2", func_351(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 37:
			func_349(uParam1, "Nigel1", func_351(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 38:
			func_349(uParam1, "Nigel1A", func_351(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 39:
			func_349(uParam1, "Nigel1B", func_351(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 40:
			func_349(uParam1, "Nigel1C", func_351(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 41:
			func_349(uParam1, "Nigel1D", func_351(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_350(iParam0), 1, 1);
			break;
		
		case 42:
			func_349(uParam1, "Nigel2", func_351(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 43:
			func_349(uParam1, "Nigel3", func_351(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 1);
			break;
		
		case 44:
			func_349(uParam1, "Omega1", func_351(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 45:
			func_349(uParam1, "Omega2", func_351(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 46:
			func_349(uParam1, "Paparazzo1", func_351(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 47:
			func_349(uParam1, "Paparazzo2", func_351(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 48:
			func_349(uParam1, "Paparazzo3", func_351(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 49:
			func_349(uParam1, "Paparazzo3A", func_351(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 50:
			func_349(uParam1, "Paparazzo3B", func_351(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 51:
			func_349(uParam1, "Paparazzo4", func_351(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 52:
			func_349(uParam1, "Rampage1", func_351(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 54:
			func_349(uParam1, "Rampage3", func_351(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 55:
			func_349(uParam1, "Rampage4", func_351(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 56:
			func_349(uParam1, "Rampage5", func_351(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_350(iParam0), 0, 0);
			break;
		
		case 53:
			func_349(uParam1, "Rampage2", func_351(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_350(iParam0), 1, 0);
			break;
		
		case 57:
			func_349(uParam1, "TheLastOne", func_351(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 58:
			func_349(uParam1, "Tonya1", func_351(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 59:
			func_349(uParam1, "Tonya2", func_351(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 60:
			func_349(uParam1, "Tonya3", func_351(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 61:
			func_349(uParam1, "Tonya4", func_351(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		case 62:
			func_349(uParam1, "Tonya5", func_351(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_350(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_349(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_350(int iParam0)
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

struct<2> func_351(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_352(iParam0) };
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

struct<2> func_352(int iParam0)
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

int func_353()
{
	iVar0 = func_354(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_354(var uParam0, bool bParam1)
{
	iVar0 = MISC::GET_HASH_KEY(uParam0);
	iVar1 = func_355(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_355(int iParam0, bool bParam1)
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

int func_356()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_357()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return 1;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_347(&(Global_98744.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_358(int iParam0)
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

void func_359(int iParam0)
{
	HUD::DISPLAY_HUD(iParam0);
	HUD::DISPLAY_RADAR(iParam0);
}

void func_360(int iParam0)
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

void func_361(int iParam0)
{
	if (iParam0 == 1)
	{
		if (MISC::IS_BIT_SET(Global_98744.f_20, 4))
		{
			func_363();
			MISC::CLEAR_BIT(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_362();
		MISC::SET_BIT(&(Global_98744.f_20), 4);
	}
}

void func_362()
{
	Global_22211.f_5 = 1;
}

void func_363()
{
	Global_22211.f_5 = 0;
}

void func_364()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

void func_365()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	MISC::CLEAR_BIT(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_358(0);
	func_367();
	func_366();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_366()
{
	MISC::CLEAR_BIT(&(Global_98744.f_20), 22);
	MISC::CLEAR_BIT(&(Global_98744.f_20), 8);
}

void func_367()
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

void func_368(var uParam0, int iParam1)
{
	func_369(uParam0, iParam1);
}

void func_369(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_370()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_371()
{
	Global_98779 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_76854))
		{
			switch (func_20())
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
			switch (func_20())
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

void func_372(char* sParam0)
{
}

