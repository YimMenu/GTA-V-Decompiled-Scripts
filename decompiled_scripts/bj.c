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
	fLocal_64 = ((0.05f + 0.275f) - 0.01f);
	Local_138 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var16.f_12 = 12;
	uVar107 = 2;
	Var111.f_3 = 8;
	Var111.f_12 = 8;
	Var111.f_21 = 4;
	Var111.f_26.f_32 = 3;
	Var111.f_26.f_36 = 1;
	Var111.f_26.f_53 = 2;
	Var111.f_26.f_57 = 13;
	Var111.f_26.f_71 = 13;
	Var111.f_26.f_280 = 13;
	Var111.f_26.f_489 = 13;
	Var111.f_26.f_503 = 13;
	Var111.f_26.f_517 = 13;
	Var111.f_26.f_531 = 13;
	Var723.f_10.f_2 = 8;
	Var723.f_10.f_2.f_1.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar869 = -1;
	uVar919 = 16;
	iVar1084 = ScriptParam_0;
	iVar1096 = ScriptParam_0.f_3;
	cVar1113 = "BJ_FAIL";
	sVar1114 = "";
	Var1128 = { 5f, 5f, 10f };
	fVar1144 = 1f;
	fVar1148 = -1f;
	iVar1149 = -1;
	iVar1152 = -1;
	iVar1156 = Global_111638.f_18962;
	iVar1159 = 1;
	iVar1160 = -1;
	bVar1179 = false;
	bVar1184 = true;
	bVar1186 = false;
	bVar1187 = false;
	bVar1189 = true;
	bVar1190 = false;
	bVar1191 = false;
	bVar1192 = false;
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		uVar1094 = ScriptParam_0.f_1;
	}
	else
	{
		uVar1094 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	bVar1190 = WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -72657034, 0);
	bVar1191 = PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
	if (bVar1190)
	{
		PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar1165);
		PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar1166);
	}
	if (bVar1191)
	{
		PLAYER::GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar1167);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uVar1094))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1094, 1, 1);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_554(&Var16, &uVar1111, &iVar1084, &iVar1085, &iVar1087, &iVar1090, &iVar1094, &uVar919, &iVar1096, &iVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
	}
	if (iVar1156 < 0)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18962.f_1, iVar1156))
	{
		fVar1144 = 0.1f;
	}
	iVar868 = iVar1156;
	func_553(0);
	UI::CLEAR_HELP(1);
	GAMEPLAY::SET_MISSION_FLAG(1);
	func_552(23, 1);
	UI::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(1500f, 0, 21);
	func_526(&Var16, iVar868);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1096))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1096, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1084))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1084, 1, 1);
		if (func_525(&Var16) != 0 && ENTITY::GET_ENTITY_MODEL(iVar1084) == func_525(&Var16))
		{
			iVar1087 = iVar1084;
			iVar1084 = 0;
		}
	}
	while (true)
	{
		if (!bVar1184)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar1184 = false;
		}
		if ((iVar715 >= 6 && iVar715 <= 10) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			uVar870 = func_514();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
		}
		func_513();
		func_505(&uVar101);
		func_501(&Var111, iVar715);
		func_497(&Var111, iVar715, iVar868, bVar1172);
		switch (iVar715)
		{
			case 0:
				func_496();
				if (CAM::IS_SCREEN_FADING_OUT())
				{
					break;
				}
				func_490();
				func_489(1);
				func_485("AM_H_BASEJ", 1);
				UI::CLEAR_PRINTS();
				UI::CLEAR_HELP(1);
				if (iVar868 == 0)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, 0, 1);
					uVar1095 = VEHICLE::_0x54B0F614960F4A5F(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar868 == 5)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, 0, 1);
				}
				else if (iVar868 == 4)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					GAMEPLAY::CLEAR_AREA(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, 0);
				}
				else if (iVar868 == 8)
				{
					func_481(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					GAMEPLAY::CLEAR_AREA(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1084))
				{
					func_480(&uVar892);
				}
				if ((iVar868 == 6 || iVar868 == 12) || iVar868 == 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_2))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_2, 1, 1);
						OBJECT::DELETE_OBJECT(&(ScriptParam_0.f_2));
					}
					func_471(&uVar107, &Var16, iVar868, iVar868 == 6);
					bVar1181 = true;
				}
				iVar715 = 1;
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT() || (((iVar868 == 5 || iVar868 == 6) || iVar868 == 12) && !bVar1172))
				{
					if (!bVar1172)
					{
						if ((iVar868 != 5 && iVar868 != 6) && iVar868 != 12)
						{
							Var1122 = { func_470(iVar868) };
							Var1122 = { func_469(SYSTEM::COS(Var1122.z), SYSTEM::SIN(Var1122.z), GAMEPLAY::TAN(Var1122.x)) };
							if (func_468(iVar868))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_467(iVar868), Var1122, 4000f, 0);
							}
						}
						func_461(&Var16, iVar868, &uVar0, &uVar14, &iVar15, &uVar1111, &iVar1163);
					}
					else if (func_459(func_460(iVar868)))
					{
						Var1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var16))), SYSTEM::SIN((-97.4239f + func_458(&Var16)))) };
						Var1134 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1084, 1.12046f, -0.317773f, 1.3385f) };
						Var1137 = { func_457(Var1137, 8.909f) };
						if (func_468(iVar868))
						{
							STREAMING::NEW_LOAD_SCENE_START(Var1134 + Var1137, Var1137, 4000f, 0);
						}
					}
					else
					{
						Var1122 = { -10f, 0f, func_458(&Var16) };
						Var1122 = { func_469(SYSTEM::COS(Var1122.z), SYSTEM::SIN(Var1122.z), GAMEPLAY::TAN(Var1122.x)) };
						if (func_468(iVar868))
						{
							STREAMING::NEW_LOAD_SCENE_START(func_467(iVar868), Var1122, 4000f, 0);
						}
					}
					if (((bVar1172 || iVar868 == 4) || iVar868 == 8) || iVar868 == 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_467(iVar868), 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_458(&Var16));
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					}
					iVar715 = 2;
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_456(&uVar892) || func_455(&uVar892) > 0.05f))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					{
						CAM::DO_SCREEN_FADE_OUT(2500);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
				break;
			
			case 2:
				if (func_453(&uVar0, &uVar871, &uVar1111, iVar868, iVar1163, ((iVar868 != 5 && iVar868 != 6) && iVar868 != 12)))
				{
					func_452(&uVar871);
					func_429(&Var16, &uVar919, &iVar1151, &iVar1084, &iVar1085, &iVar1087, &uVar1086, &uVar1088, &iVar1096, &iVar1097, uVar14, iVar15, &uVar880, iVar868, &iVar1160);
					PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 1, 0);
					if (!bVar1172 && !bVar1181)
					{
						func_471(&uVar107, &Var16, iVar868, 0);
					}
					iVar715 = 3;
				}
				break;
			
			case 3:
				if (!func_456(&uVar871) && !bVar1172)
				{
					func_428(0, 0, 1);
					func_480(&uVar871);
				}
				else if ((func_456(&uVar871) && func_455(&uVar871) > 0.2f) || bVar1172)
				{
					if (func_459(func_460(iVar868)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar1172)
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						if (func_456(&uVar871))
						{
							func_452(&uVar871);
						}
						if (func_525(&Var16) != 0)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar1087, 0);
							func_480(&uVar889);
						}
						iVar715 = 4;
					}
					else
					{
						func_452(&uVar871);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(1000);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(func_427(&uVar107, 1), func_427(&uVar107, 0), 10000, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							CAM::DO_SCREEN_FADE_IN(800);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						if (func_459(func_460(iVar868)))
						{
							Var1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(&Var16))), SYSTEM::SIN((-97.4239f + func_458(&Var16)))) };
							Var1134 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1084, 1.12046f, -0.317773f, 1.3385f) };
							Var1137 = { func_457(Var1137, 8.909f) };
							if (func_468(iVar868))
							{
								STREAMING::NEW_LOAD_SCENE_START(Var1134 + Var1137, Var1137, 4000f, 0);
							}
						}
						else
						{
							Var1122 = { -10f, 0f, func_458(&Var16) };
							Var1122 = { func_469(SYSTEM::COS(Var1122.z), SYSTEM::SIN(Var1122.z), GAMEPLAY::TAN(Var1122.x)) };
							if (func_468(iVar868))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_467(iVar868), Var1122, 4000f, 0);
							}
						}
						if (!func_425(func_426(iVar868)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_426(iVar868), 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_424(func_426(iVar868), func_467(iVar868)));
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
							if (func_422() == 0)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
							}
							else if (func_422() == 1)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
							}
							else if (func_422() == 2)
							{
								PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
							}
							AI::OPEN_SEQUENCE_TASK(&uVar1108);
							if (func_421(iVar868) > 0)
							{
								AI::TASK_STAND_STILL(0, func_421(iVar868));
							}
							AI::TASK_GO_STRAIGHT_TO_COORD(0, func_467(iVar868), 1f, -1, func_458(&Var16), 1056964608);
							AI::CLOSE_SEQUENCE_TASK(uVar1108);
							AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1108);
							AI::CLEAR_SEQUENCE_TASK(&uVar1108);
						}
						if (!func_459(func_460(iVar868)))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar1090);
							}
							iVar1161 = 0;
							while (iVar1161 < iVar1090)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar1090[iVar1161]) && !ENTITY::IS_ENTITY_DEAD(iVar1090[iVar1161], 0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1090[iVar1161], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 2500f)
									{
										ENTITY::SET_ENTITY_LOD_DIST(iVar1090[iVar1161], 1000);
										VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar1090[iVar1161], 5f);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1090[iVar1161], 1, 1);
									}
								}
								iVar1161++;
							}
						}
						if (func_525(&Var16) != 0)
						{
							func_480(&uVar889);
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						}
						if (func_420(iVar868, iVar1163) > 0f)
						{
							func_480(&uVar907);
						}
						iVar715 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar1175 || bVar1176)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					UI::CLEAR_HELP(1);
					UI::CLEAR_PRINTS();
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iVar715 = 10;
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_412(0, 1, 1, 0, 0, 0);
					if (func_459(func_460(iVar868)))
					{
						func_411(&uVar107, &Var16, &Var1119, &Var1134, &Var1137, iVar1084, &uVar1140, &uVar1143);
						uVar1164 = AUDIO::GET_SOUND_ID();
						if (bVar1189)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(uVar1164, "Helicopter_Wind_Idle", iVar1084, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar1188)
						{
							AUDIO::_0x70B8EC8FC108A634(1, 300362576);
						}
					}
					else
					{
						if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
						{
							CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
						}
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
					PED::_0x6585D955A68452A5(PLAYER::PLAYER_PED_ID());
					PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
					PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
					UI::DISPLAY_RADAR(0);
					UI::DISPLAY_HUD(0);
					iVar715 = 5;
				}
				else
				{
					if (!bVar1183)
					{
						if (!func_456(&uVar913))
						{
							func_480(&uVar913);
						}
						else if (func_455(&uVar913) > 4f || (func_459(func_460(iVar868)) && func_455(&uVar913) > 0.5f))
						{
							func_395(&uVar919, "OJBJAUD", func_410(&Var16), 8, 0, 0, 0);
							bVar1183 = true;
						}
					}
					if (!CAM::IS_SCREEN_FADING_OUT() && !bVar1172)
					{
						if (func_373(&Var16, iVar868, &iVar1087, &uVar107, &uVar101, &uVar874, &uVar877, &uVar889, &uVar907, iVar1163, &bVar1173, &bVar1185, bVar1177))
						{
							UI::CLEAR_HELP(1);
							bVar1177 = false;
							if (func_372(&Var16))
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
							else
							{
								UI::DISPLAY_RADAR(0);
								UI::DISPLAY_HUD(0);
								iVar715 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_370();
				func_369();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (bVar1172 && bVar1182)
					{
						TIME::SET_CLOCK_TIME(func_368(uVar870), func_367(uVar870), func_366(uVar870));
					}
					SYSTEM::WAIT(2000);
					if (bVar1172)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
						func_365(&uVar910);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
						}
						while (func_455(&uVar910) < 1.1f)
						{
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
							}
						}
						func_452(&uVar910);
					}
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1085) && !ENTITY::IS_ENTITY_DEAD(iVar1085, 0))
				{
					uVar1105 = UI::ADD_BLIP_FOR_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1085, func_364(&Var16)));
					UI::SET_BLIP_COLOUR(uVar1105, 5);
					UI::_0x75A16C3DA34F1245(uVar1105, 1);
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_TGT");
				}
				else
				{
					uVar1105 = UI::ADD_BLIP_FOR_COORD(func_363(&Var16, 0));
					UI::SET_BLIP_COLOUR(uVar1105, 5);
					if (iVar1151 == 1)
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_TGT");
					}
					else
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_CHK");
					}
				}
				UI::SET_BLIP_SCALE(uVar1105, 1.2f);
				if (iVar1151 > 1)
				{
					uVar1106 = UI::ADD_BLIP_FOR_COORD(func_363(&Var16, 1));
					UI::SET_BLIP_COLOUR(uVar1106, 5);
					UI::_0x75A16C3DA34F1245(uVar1105, 1);
					UI::SET_BLIP_SCALE(uVar1106, 0.7f);
					if (iVar1151 == 2)
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar1106, "BJ_BLIP_TGT");
					}
					else
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar1106, "BJ_BLIP_CHK");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1085) && !ENTITY::IS_ENTITY_DEAD(iVar1085, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(iVar1085, 2000);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1097) && !PED::IS_PED_INJURED(iVar1097))
					{
						AI::CLEAR_PED_TASKS(iVar1097);
					}
					if (func_361(func_362(&Var16)))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&iVar1085);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar1085, func_363(&Var16, 0), 1, 0, 0, 1);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18962.f_1, (func_360(&Var16) - 125)))
				{
					PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER::PLAYER_ID(), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 256), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 256), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 256));
				}
				if (func_359(func_460(iVar868)))
				{
					func_358(1, 1, 1);
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_365(&uVar880);
					iVar715 = 6;
					func_357(88, 1);
				}
				else if (func_459(func_460(iVar868)))
				{
					func_358(0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					iVar715 = 7;
					func_357(88, 1);
				}
				else
				{
					func_358(1, 1, 1);
					AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
					iVar715 = 6;
					func_357(88, 1);
				}
				if (iVar868 == 5)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 1);
				}
				if (!bVar1173 && ENTITY::DOES_ENTITY_EXIST(iVar1087))
				{
					func_356(&iVar1087, 1);
					bVar1173 = true;
				}
				if (!func_372(&Var16))
				{
					if (func_459(func_460(iVar868)))
					{
						func_411(&uVar107, &Var16, &Var1119, &Var1134, &Var1137, iVar1084, &uVar1140, &uVar1143);
					}
					else
					{
						if ((func_355(&Var16) && !bVar1185) && !bVar1172)
						{
							CAM::_0xC819F3CBB62BF692(1, 0, 3, 0);
						}
						else if (iVar868 == 4 && !func_354())
						{
							CAM::SET_CAM_COORD(func_427(&uVar107, 0), -76.7226f, -829.9866f, 326.0427f);
							CAM::SET_CAM_ROT(func_427(&uVar107, 0), 0.8541f, 0f, -17.012f, 2);
							CAM::SET_CAM_FOV(func_427(&uVar107, 0), 53.883f);
							CAM::SET_CAM_ACTIVE(func_427(&uVar107, 0), 1);
						}
						else
						{
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (bVar1190)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), -72657034, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -1569615261, 1, 0, 1);
						}
						PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), uVar1165);
						if (bVar1191)
						{
							if (!PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID());
							}
							PED::SET_PED_RESERVE_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), uVar1167);
						}
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -1569615261, 1, 0, 1);
						PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535) % 8));
					}
				}
				STREAMING::REQUEST_ANIM_DICT("skydive@base");
				STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
				break;
			
			case 6:
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				else if ((bVar1176 || bVar1175) || func_353(&Var16, iVar868, &bVar1178))
				{
					UI::CLEAR_HELP(1);
					UI::CLEAR_PRINTS();
					iVar715 = 10;
				}
				else
				{
					if (iVar868 == 5)
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar1177)
					{
						Var1125 = { func_363(&Var16, (iVar1151 - 1)) };
						Var1125.z = (Var1125.z + 100f);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1125, 1, 0, 0, 1);
						bVar1177 = false;
					}
					if (!bVar1180)
					{
						if (iVar868 == 4)
						{
							if (((((CONTROLS::IS_CONTROL_PRESSED(0, 71) || CONTROLS::IS_CONTROL_PRESSED(0, 72)) || CONTROLS::IS_CONTROL_PRESSED(0, 1)) || CONTROLS::IS_CONTROL_PRESSED(0, 2)) || CONTROLS::IS_CONTROL_PRESSED(0, 75)) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								CAM::RENDER_SCRIPT_CAMS(0, 1, 1300, 1, 1, 0);
								bVar1180 = true;
							}
						}
					}
					func_352(&uVar880);
					func_342(&Var16, iVar1085, iVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
					func_341(&uVar1112);
					if (func_456(&uVar871))
					{
						if (func_455(&uVar871) > 10f)
						{
							func_337(&uVar883, &iVar1159);
						}
					}
					else
					{
						func_336(&uVar871, 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar1087) && !ENTITY::IS_ENTITY_DEAD(iVar1087, 0))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar1087) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1087, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 40000f)
						{
							iVar1193 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1087, -1, 0);
							if (!PED::IS_PED_INJURED(iVar1193))
							{
								PED::DELETE_PED(&iVar1193);
							}
							VEHICLE::DELETE_VEHICLE(&iVar1087);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(uVar1157, 0))
					{
						if (UI::IS_MESSAGE_BEING_DISPLAYED() || !func_456(&uVar916))
						{
							func_365(&uVar916);
						}
						else if (func_455(&uVar916) > 0.25f)
						{
							Var1115 = { func_335(iVar868) };
							func_334(&Var1115, 7500, 0);
							func_452(&uVar916);
							GAMEPLAY::SET_BIT(&iVar1157, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						func_333(&Var111, 1);
						iVar1089 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1089, 0) && ENTITY::IS_ENTITY_IN_AIR(iVar1089))
						{
							if (!GAMEPLAY::IS_BIT_SET(iVar1157, 1))
							{
								if (!func_456(&uVar895))
								{
									func_480(&uVar895);
								}
								else if (func_455(&uVar895) > 0.15f)
								{
									func_332("BJ_VEHHELP", -1);
									func_452(&uVar895);
									GAMEPLAY::SET_BIT(&iVar1157, 1);
								}
							}
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&iVar1157, 1);
							if (func_331("BJ_VEHHELP"))
							{
								UI::CLEAR_HELP(1);
							}
							if (func_456(&uVar895))
							{
								func_452(&uVar895);
							}
						}
					}
					else
					{
						func_333(&Var111, 0);
						GAMEPLAY::CLEAR_BIT(&iVar1157, 1);
						if (func_331("BJ_VEHHELP"))
						{
							UI::CLEAR_HELP(1);
						}
						if (func_456(&uVar895))
						{
							func_452(&uVar895);
						}
					}
					if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
					{
						if (iVar868 == 5)
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 0);
						}
						GRAPHICS::_0x6DDBF9DFFC4AC080(1);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						iVar715 = 9;
						func_452(&uVar871);
					}
				}
				break;
			
			case 7:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar1175 || bVar1176)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					UI::CLEAR_HELP(1);
					UI::CLEAR_PRINTS();
					if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iVar715 = 10;
				}
				else
				{
					func_352(&uVar880);
					func_342(&Var16, iVar1085, iVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
					func_341(&uVar1112);
					if (func_459(func_460(iVar868)) && !ENTITY::IS_ENTITY_DEAD(iVar1084, 0))
					{
						func_330(iVar1084, func_467(iVar868));
					}
					if (func_456(&uVar871))
					{
						if (func_455(&uVar871) > 10f)
						{
							func_337(&uVar883, &iVar1159);
						}
					}
					else
					{
						func_336(&uVar871, 0f);
					}
					if (func_326(&Var16, &uVar107, &uVar101, &uVar877, &Var1119, &uVar1131, Var1134, Var1137) || bVar1177)
					{
						func_452(&uVar871);
						UI::CLEAR_HELP(1);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar1084) && !ENTITY::IS_ENTITY_DEAD(iVar1084, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar1084, func_467(iVar868), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar1084, func_458(&Var16));
								ENTITY::FREEZE_ENTITY_POSITION(iVar1084, 1);
								iVar1160 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar1160, iVar1084, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1084, "Chassis"));
								AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar1160, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar1160, 0.6f);
								func_324(iVar1084, &uVar107, &uVar874);
								STREAMING::NEW_LOAD_SCENE_STOP();
							}
						}
						if (bVar1188)
						{
							AUDIO::_0x70B8EC8FC108A634(0, 300362576);
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(uVar1164, "Helicopter_Wind", iVar1084, "BASEJUMPS_SOUNDS", 0, 0);
						bVar1177 = false;
						iVar715 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_352(&uVar880);
				func_342(&Var16, iVar1085, iVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar1160))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar1160) > 0.92f)
					{
						AI::OPEN_SEQUENCE_TASK(&uVar1107);
						AI::TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
						AI::TASK_PARACHUTE(0, 1, 0);
						AI::CLOSE_SEQUENCE_TASK(uVar1107);
						AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar1107);
						AI::CLEAR_SEQUENCE_TASK(&uVar1107);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1084))
				{
					if (func_323(&uVar107, &uVar874, Var1134, Var1137, Var1119, &uVar1140, &uVar1143))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1084, 0);
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							UI::DISPLAY_RADAR(1);
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							GRAPHICS::_0x6DDBF9DFFC4AC080(1);
							iVar715 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (Global_22211.f_135)
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (Global_22211.f_135)
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				if (bVar1175 || bVar1176)
				{
					UI::CLEAR_HELP(1);
					UI::CLEAR_PRINTS();
					iVar715 = 10;
				}
				else if (func_322(&uVar101, 3, 1000) && !Global_22211.f_135)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					CAM::DO_SCREEN_FADE_OUT(800);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						func_342(&Var16, iVar1085, iVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
						SYSTEM::WAIT(0);
					}
					func_276(&Var16, &uVar1111, &Var111, &iVar1157, &iVar1097, &iVar1098, &iVar1094, &iVar1085, &uVar1086, &iVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &Var904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
					bVar1172 = true;
					iVar715 = 0;
				}
				else
				{
					func_273(&uVar901, &iVar1098);
					if (bVar1177)
					{
						Var1125 = { func_363(&Var16, (iVar1151 - 1)) };
						func_271(PLAYER::PLAYER_PED_ID(), Var1125);
						bVar1177 = false;
					}
					func_352(&uVar880);
					if (func_361(func_362(&Var16)))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iVar1085) && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_363(&Var16, 0), 0) <= 200f)
						{
							iVar1085 = VEHICLE::CREATE_MISSION_TRAIN(6, func_363(&Var16, 0), 1);
							if (!ENTITY::IS_ENTITY_DEAD(iVar1085, 0))
							{
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar1085, 7.5f);
							}
						}
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(iVar1085) && !ENTITY::IS_ENTITY_DEAD(iVar1085, 0)) && !func_425(func_363(&Var16, 0)))
					{
						PED::IS_PED_INJURED(iVar1097);
						if (func_270(PLAYER::PLAYER_PED_ID(), iVar1085, 0) <= 325f)
						{
							if (iVar868 == 5)
							{
								Var1194 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								Var1194 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (AI::GET_SCRIPT_TASK_STATUS(iVar1097, -1273030092) != 1)
							{
								if (iVar868 == 5)
								{
									AI::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1097, iVar1085, Var1194, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									AI::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1097, iVar1085, Var1194, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_265(&iVar1085);
							}
						}
					}
					iVar716 = func_342(&Var16, iVar1085, iVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 1, 1, fVar1144);
					if (iVar716 == 1 || iVar716 >= 2)
					{
						AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						if (iVar716 >= 2)
						{
							if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								UI::CLEAR_HELP(1);
							}
							if (UI::IS_MESSAGE_BEING_DISPLAYED())
							{
								UI::CLEAR_PRINTS();
							}
						}
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 0);
						if (iVar868 == 5)
						{
							AI::CLEAR_PED_TASKS(iVar1097);
							PED::SET_PED_CONFIG_FLAG(iVar1097, 296, 1);
						}
						iVar1197 = 0;
						while (iVar1197 < iVar1098)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar1098[iVar1197]) && !ENTITY::IS_ENTITY_DEAD(iVar1098[iVar1197], 0))
							{
								AI::CLEAR_PED_TASKS(iVar1098[iVar1197]);
								iVar1098[iVar1197] = 0;
							}
							iVar1197++;
						}
						iVar715 = 10;
					}
					func_264(&Var111, &Var16, iVar868, iVar1151);
				}
				break;
			
			case 10:
				if (iVar868 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar1097) && !ENTITY::IS_ENTITY_DEAD(iVar1097, 0))
				{
					if (AI::GET_SCRIPT_TASK_STATUS(iVar1097, -982327190) != 0 && AI::GET_SCRIPT_TASK_STATUS(iVar1097, -982327190) != 1)
					{
						AI::CLEAR_PED_TASKS(iVar1097);
						AI::TASK_STAND_STILL(iVar1097, -1);
					}
				}
				if ((!bVar1175 && !bVar1176) && !bVar1178)
				{
					if (!func_456(&uVar886))
					{
						if (!func_456(&uVar877))
						{
							func_480(&uVar877);
						}
						if (UI::DOES_BLIP_EXIST(uVar1105))
						{
							UI::REMOVE_BLIP(&uVar1105);
						}
						if (UI::DOES_BLIP_EXIST(uVar1106))
						{
							UI::REMOVE_BLIP(&uVar1106);
						}
						if (iVar1152 > -1)
						{
							GRAPHICS::DELETE_CHECKPOINT(uVar1109);
							GRAPHICS::DELETE_CHECKPOINT(uVar1110);
							iVar1152 = -1;
						}
						func_336(&uVar886, 0f);
					}
					if (!func_456(&Var904))
					{
						func_480(&Var904);
					}
					if (func_362(&Var16) == 0)
					{
						func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (((((ENTITY::DOES_ENTITY_EXIST(iVar1085) && !ENTITY::IS_ENTITY_DEAD(iVar1085, 0)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1085, Var1128, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_363(&Var16, iVar1150), Var1128, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							bVar1198 = false;
							if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) && (ENTITY::DOES_ENTITY_EXIST(iVar1085) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar1085)))
							{
								bVar1198 = true;
							}
							else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								bVar1198 = true;
							}
							if (bVar1198)
							{
								if (func_322(&uVar101, 3, 1000) && !Global_22211.f_135)
								{
									ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
									CAM::DO_SCREEN_FADE_OUT(800);
									while (CAM::IS_SCREEN_FADING_OUT())
									{
										func_342(&Var16, iVar1085, iVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
										SYSTEM::WAIT(0);
									}
									func_276(&Var16, &uVar1111, &Var111, &iVar1157, &iVar1097, &iVar1098, &iVar1094, &iVar1085, &uVar1086, &iVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &Var904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
									bVar1172 = true;
									iVar715 = 0;
								}
								break;
							}
						}
					}
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				if (((bVar1175 || bVar1176) || bVar1178) || (func_456(&uVar886) && func_455(&uVar886) > 0.25f))
				{
					if (func_456(&uVar886) && func_455(&uVar886) > 0.25f)
					{
						func_259(func_363(&Var16, iVar1150), iVar1085, iVar1097, &iVar716, &iVar1154, &fVar1148);
					}
					func_452(&uVar886);
					if (bVar1175 || iVar716 == 1)
					{
						uVar718 = func_258();
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar718))
						{
							SYSTEM::WAIT(0);
							if (func_362(&Var16) == 0)
							{
								func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
							}
							uVar718 = func_258();
						}
						if (iVar868 == 0)
						{
							if (!PED::IS_PED_INJURED(iVar1097))
							{
								func_395(&uVar919, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar715 = 11;
						if (!func_257(&Var111, 7))
						{
							iVar1158 = 125;
							GAMEPLAY::SET_BIT(&(Global_111638.f_18962.f_1), (func_360(&Var16) - iVar1158));
							func_256(func_360(&Var16), 1);
							iVar1168 = 1;
							bVar1169 = true;
							bVar1170 = true;
							iVar1162 = 0;
							while (iVar1162 < 13)
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_111638.f_18962.f_1, iVar1162))
								{
									if (func_459(func_460(iVar1162)))
									{
										bVar1170 = false;
									}
									else
									{
										bVar1169 = false;
									}
									iVar1168 = 0;
								}
								iVar1162++;
							}
							if (iVar1168 && !func_255(98))
							{
								func_254(98, 1);
							}
							if (bVar1169)
							{
								func_251(128, 0, 0);
							}
							if (bVar1170)
							{
								func_251(129, 0, 0);
							}
							func_214(&iVar1153, iVar1151, &iVar1154, &iVar1155, fVar1144);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 0);
							}
							func_213(&Var111, 7, 1);
							func_212(1, 0);
							func_480(&uVar898);
							func_211();
						}
					}
					else if ((bVar1176 || bVar1178) || iVar716 >= 2)
					{
						UI::CLEAR_HELP(1);
						UI::CLEAR_PRINTS();
						if (!bVar1178)
						{
							func_208();
						}
						if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							iVar1171 = 1;
						}
						if (PLAYER::IS_PLAYER_ONLINE())
						{
							func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 361, 0, 361, 0);
						}
						else
						{
							func_213(&Var111, 27, 1);
							func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
						}
						iVar715 = 12;
					}
					func_452(&uVar877);
				}
				break;
			
			case 11:
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (!bVar1175 && !bVar1176)
				{
					if (func_205() && !func_257(&Var111, 26))
					{
						func_194(iVar868);
						if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
						{
							func_206(&Var111, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
							func_213(&Var111, 26, 1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					bVar1187 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (func_362(&Var16) == 0)
				{
					func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
				}
				if (!bVar1192)
				{
					iVar717 = func_76(iVar868, &Var111, &uVar1111, &uVar101, iVar1153, iVar1151, iVar1154, &iVar1155, fVar1144, &bVar1179);
					bVar1192 = iVar717 == true;
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (iVar1156 == 0)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
					}
					else if (iVar1156 == 5)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
					}
					func_75(&Var16, &uVar1111, &iVar1084, &iVar1085, &iVar1087, &iVar1090, iVar1094, &uVar919, &iVar1096, &iVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_74() || func_455(&uVar898) >= 2f))
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 55, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 95, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 96, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 97, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 98, 1);
					CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
					if (func_456(&uVar877))
					{
						if ((iVar717 == 1 || func_455(&uVar877) >= 60f) || ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || (!bVar1187 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))))
						{
							if (!bVar1192)
							{
								func_73(&(Var111.f_26));
								bVar1192 = true;
							}
							if (func_47(&(Var111.f_26), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar1175 && !bVar1176)
								{
									if (func_205() && !func_257(&Var111, 26))
									{
										if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
										{
											func_213(&Var111, 26, 1);
										}
									}
								}
								func_44(&(Var111.f_26));
								func_452(&uVar898);
								if (iVar868 == 0)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
								}
								else if (iVar868 == 5)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
								}
								func_75(&Var16, &uVar1111, &iVar1084, &iVar1085, &iVar1087, &iVar1090, iVar1094, &uVar919, &iVar1096, &iVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
							}
						}
						else if (iVar717 == 0)
						{
							if (!bVar1175 && !bVar1176)
							{
								if (func_205() && !func_257(&Var111, 26))
								{
									if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
									{
										func_213(&Var111, 26, 1);
									}
								}
							}
							func_44(&(Var111.f_26));
							func_452(&uVar898);
							func_213(&Var111, 5, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
							CAM::DO_SCREEN_FADE_OUT(800);
							while (CAM::IS_SCREEN_FADING_OUT())
							{
								SYSTEM::WAIT(0);
								if (func_362(&Var16) == 0)
								{
									func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
								}
							}
							func_276(&Var16, &uVar1111, &Var111, &iVar1157, &iVar1097, &iVar1098, &iVar1094, &iVar1085, &uVar1086, &iVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &Var904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
							bVar1172 = true;
							iVar715 = 0;
							break;
						}
						else if (bVar1179)
						{
							if (func_455(&uVar877) > (60f - 5f))
							{
								func_42(&uVar877, (60f - 5f));
							}
						}
					}
					else
					{
						func_336(&uVar877, 0f);
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					bVar1187 = PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (iVar1155 > 0)
				{
					iVar1155 = 0;
				}
				if (!bVar1175 && !bVar1176)
				{
					if (func_205() && !func_257(&Var111, 26))
					{
						func_194(iVar868);
						if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
						{
							func_206(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
							func_213(&Var111, 26, 1);
						}
					}
				}
				if (!func_257(&Var111, 24))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						bVar1182 = true;
					}
					else
					{
						bVar1182 = false;
					}
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
					AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
					if (UI::DOES_BLIP_EXIST(uVar1105))
					{
						UI::REMOVE_BLIP(&uVar1105);
					}
					if (UI::DOES_BLIP_EXIST(uVar1106))
					{
						UI::REMOVE_BLIP(&uVar1106);
					}
					if (iVar868 == 0)
					{
						VEHICLE::_0xBC3CCA5844452B06(200f);
					}
					uVar718 = func_258();
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uVar718))
					{
						if (func_362(&Var16) == 0)
						{
							func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
						}
						SYSTEM::WAIT(0);
						uVar718 = func_258();
					}
					if (bVar1182)
					{
						func_41(&uVar862, 0);
					}
					else
					{
						func_40(&Var723, 1050253722, 1073741824);
					}
					func_213(&Var111, 24, 1);
				}
				if (!bVar1182 && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_213(&Var111, 24, 0);
					break;
				}
				if (func_362(&Var16) == 0)
				{
					func_263(func_363(&Var16, (iVar1151 - 1)), Var904);
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					switch (func_36(PLAYER::PLAYER_PED_ID()))
					{
						case 0:
							sVar1114 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar1114 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar1114 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar1178)
				{
					sVar1114 = "BJ_FAIL_02";
				}
				else
				{
					sVar1114 = "BJ_FAIL_01";
				}
				bVar1186 = false;
				CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
				if (bVar1182)
				{
					bVar1186 = func_16(&uVar862, &Var723, &uVar718, cVar1113, sVar1114, &bVar1172, 78);
				}
				else
				{
					bVar1186 = func_3(&uVar718, &Var723, cVar1113, sVar1114, &bVar1172, 79, 7, 1, 1097859072, 1);
				}
				if (bVar1186)
				{
					if (bVar1172)
					{
						if (!bVar1175 && !bVar1176)
						{
							if (func_205() && !func_257(&Var111, 26))
							{
								if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
								{
									func_213(&Var111, 26, 1);
								}
							}
						}
						func_276(&Var16, &uVar1111, &Var111, &iVar1157, &iVar1097, &iVar1098, &iVar1094, &iVar1085, &uVar1086, &iVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &Var904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
						iVar715 = 0;
					}
					else
					{
						if (!bVar1175 && !bVar1176)
						{
							if (func_205() && !func_257(&Var111, 26))
							{
								if (func_182(iVar868, iVar1154, fVar1148, iVar1155))
								{
									func_213(&Var111, 26, 1);
								}
							}
						}
						func_2(bVar1182, &Var16, &uVar1111, &iVar1084, &iVar1085, &iVar1087, &iVar1090, iVar1094, &uVar919, &iVar1096, &iVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
					}
					func_1(&uVar718);
				}
				iVar716 = 0;
				break;
		}
	}
}

void func_1(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &uParam7, uParam8, iParam9, iParam10, iParam11, uParam12, iParam13, uParam14, uParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_554(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &uParam7, uParam8, iParam9, iParam10, iParam11, uParam12, iParam13, uParam14, uParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
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
			if (func_15(iParam5, 4))
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
			func_14(sParam3);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam1->f_134);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam1->f_136 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				CONTROLS::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_13(&(uParam1->f_10), 0, 1, 1, 1);
			func_12(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_422())
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
			if (!func_456(&(uParam1->f_1)))
			{
				func_480(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_456(&(uParam1->f_4)))
				{
					func_480(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_15(iParam5, 32))
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
			func_11(uParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_455(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_5(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				UI::_SHOW_CURSOR_THIS_FRAME();
				if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_455(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						CONTROLS::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(uParam0, 0, 0);
			GAMEPLAY::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((GAMEPLAY::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || GAMEPLAY::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (GAMEPLAY::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_365(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_455(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(uParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || GAMEPLAY::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_10(uParam0))
	{
		return;
	}
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_2D_LAYER(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && CONTROLS::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fParam5);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(func_15(uParam0->f_1, 4096));
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
						iVar0 = uParam0->f_2[iVar6].f_3[iVar7];
						iVar1 = uParam0->f_2[iVar6].f_3[iVar7].f_1;
						bVar2 = GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6].f_12, iVar7))
						{
							sVar3 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = CONTROLS::_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6]))
					{
						func_14(uParam0->f_2[iVar6]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_15(uParam0->f_1, 4096))
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
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar8);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_456(&(uParam0->f_2)))
	{
		func_365(&(uParam0->f_2));
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
	if (func_455(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_452(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_35(&(uParam0->f_1));
			func_34();
			func_40(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_24() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(uParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(uParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_34();
				if (*bParam5)
				{
					GAMEPLAY::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
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
				func_20(0, 1);
				func_18(0, 1);
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

void func_17(bool bParam0)
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

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		GRAPHICS::_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		GAMEPLAY::SET_BIT(&iLocal_43, 1);
		func_19(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 1) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT("DeathFailOut");
			func_19(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
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

void func_20(int iParam0, int iParam1)
{
	switch (func_422())
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
			func_19(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iLocal_43, 0) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT(sVar0);
			func_19(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		GAMEPLAY::CLEAR_BIT(&iLocal_43, 0);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_24()
{
	if (!GAMEPLAY::IS_BIT_SET(iLocal_43, 0) && !GAMEPLAY::IS_BIT_SET(iLocal_43, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
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
			func_18(1, 0);
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
				func_19(0, 2, 1);
				func_412(1, 1, 1, 0, 0, 0);
				func_26(1);
				UI::SET_FRONTEND_ACTIVE(0);
				UI::SET_PAUSE_MENU_ACTIVE(0);
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (GAMEPLAY::GET_GAME_TIMER() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)
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

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_33();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_32(0))
		{
			func_27(0);
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

void func_27(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_30())
		{
			func_29(1, 1);
		}
		else
		{
			func_29(0, 0);
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
	if (!func_28())
	{
		Global_19486.f_1 = 3;
	}
}

int func_28()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_32(0))
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

bool func_30()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_31()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

int func_32(int iParam0)
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

void func_33()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_34()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_412(0, 1, 1, 0, 0, 0);
	func_26(1);
}

void func_35(var uParam0)
{
	if (!func_456(uParam0))
	{
		func_480(uParam0);
	}
	else
	{
		func_365(uParam0);
	}
}

int func_36(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_39(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1798[iParam0];
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

void func_40(var uParam0, int iParam1, int iParam2)
{
	if (func_456(&(uParam0->f_1)))
	{
		func_452(&(uParam0->f_1));
	}
	if (func_456(&(uParam0->f_4)))
	{
		func_452(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_41(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1);
}

void func_42(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_43(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_43(bool bParam0)
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

void func_44(var uParam0)
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
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_46(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_45(0);
}

void func_45(int iParam0)
{
	Global_76882 = iParam0;
	Global_76883 = iParam0;
}

bool func_46(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_47(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	if (GAMEPLAY::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = GAMEPLAY::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (AI::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
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
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 29, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_72(0);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			UI::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_41981 = 1;
	if (!uParam0->f_563)
	{
		switch (func_36(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessMichael", 1000, 0);
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
		uParam0->f_560 = (uParam0->f_560 + func_71(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_71(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_71((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_71(30f) - func_71(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_45(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_50(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_49(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_49(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
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
		uParam0->f_548 = func_49(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (CONTROLS::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_48(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_48(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
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
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				uParam0->f_559 = func_49((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_49((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_49((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_49((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
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
				func_45(0);
			}
			return !bVar0;
		}
	}
	func_45(0);
	return 1;
}

void func_48(var uParam0, bool bParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_9(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_14("ES_HELP");
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(215);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (bParam1)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
		func_9(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_14("ES_XPAND");
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(216);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

float func_49(float fParam0, float fParam1, float fParam2)
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

void func_50(var uParam0, float fParam1, bool bParam2)
{
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_70() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_69(&(uParam0->f_13));
				}
				else
				{
					func_14(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(150);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(100);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_56);
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(iParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(69);
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0.15f);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				uParam0->f_3 = 1;
			}
		}
		func_68();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_71((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
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
	fVar1 = (0.3f * func_70());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_67(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_67(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_70()) / 2.5f);
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
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 215);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 216);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
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
						func_64((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
				UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
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
				CONTROLS::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
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
				CONTROLS::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
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
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
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
	UI::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	UI::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	UI::SET_TEXT_WRAP(fVar9, fVar10);
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_71(6f));
	fVar1 = (fVar1 + (func_71(30f) - func_71((2f * 2f))));
	fVar11 = (fVar2 - func_71((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
		func_68();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_71((2f - 0.5f)) - 0.001388889f)), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_71((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			func_60(uParam0, iVar17, (fVar1 + func_71(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_71(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_71((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_71(2f));
					fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
					func_68();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_71((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_71((25f * 0.2f)));
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
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_71(2f));
			fVar12 = func_49((fVar11 / (0.6f * func_71(25f))), 0f, 1f);
			func_68();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_71((2f * 0.5f))), fVar6, func_63(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_71((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_70())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_49((fVar11 / (0.8f * func_71(25f))), 0f, 1f);
			UI::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_53(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_70()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_70()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_70()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_70()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UI::SET_TEXT_WRAP(fVar20, fVar21);
				UI::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				UI::SET_TEXT_JUSTIFICATION(0);
			}
			UI::SET_TEXT_SCALE(1f, 0.4f);
			func_52(&(uParam0->f_550), fVar20, (fVar1 + func_71((2f * 2f))), 0, 0, 0);
			UI::SET_TEXT_WRAP(fVar20, fVar21);
			UI::SET_TEXT_JUSTIFICATION(2);
			UI::SET_TEXT_SCALE(1f, 0.4f);
			UI::SET_TEXT_CENTRE(0);
			func_68();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UI::SET_TEXT_WRAP(fVar20, fVar22);
			UI::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 1:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 2:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_71((2f * 2f))), 0);
					break;
				
				case 5:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(uParam0->f_554, 1);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_71((2f * 2f))), 0);
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
						UI::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						UI::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						UI::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_51(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_71(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_71(30f) - 2f));
		}
	}
}

float func_51(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_52(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UI::SET_TEXT_CENTRE(iParam3);
	UI::SET_TEXT_FONT(iParam5);
	func_68();
	if (bParam4)
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_53(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	StringCopy(&cVar0, func_59(iParam0), 64);
	StringCopy(&cVar16, func_56(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_55())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_55())
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
		Var37.x = (Var37.x * (func_54(iParam0) / fVar34));
		Var37.y = (Var37.y * (func_54(iParam0) / fVar34));
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

float func_54(int iParam0)
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

int func_55()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_56(int iParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_7029[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_7029[iParam0])) == -1487683087)
		{
			Var19 = { func_58(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var19, &uVar3))
			{
				return func_57(&uVar3);
			}
		}
		else
		{
			return func_57(&(Global_22350.f_7029[iParam0]));
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

var func_57(var uParam0)
{
	return uParam0;
}

struct<13> func_58(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_59(int iParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_22350.f_6020[iParam0])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_22350.f_6020[iParam0])) == -1487683087)
		{
			Var16 = { func_58(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_57(&uVar0);
		}
		else
		{
			return func_57(&(Global_22350.f_6020[iParam0]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_60(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	UI::SET_TEXT_WRAP(fParam3, fParam4);
	UI::SET_TEXT_JUSTIFICATION(1);
	UI::SET_TEXT_SCALE(1f, func_62(14f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_68();
	if (uParam0->f_531[iParam1])
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1]));
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_53(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_56(7, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_53(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_56(5, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_53(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_56(6, 0), (fParam4 - 0.006f), ((fParam2 + func_71(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UI::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		UI::SET_TEXT_JUSTIFICATION(2);
	}
	UI::SET_TEXT_SCALE(1f, func_62(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_61(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1]), uParam0->f_57[iParam1]);
}

void func_61(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	iVar0 = 1;
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_68();
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
			UI::SET_TEXT_SCALE(1f, func_62(18f));
			UI::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				UI::_SET_TEXT_ENTRY_FOR_WIDTH("ESMINDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH((-1 * iParam0), 1);
				fVar1 = UI::_GET_TEXT_SCREEN_WIDTH(0);
			}
			else
			{
				UI::_SET_TEXT_ENTRY_FOR_WIDTH("ESDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam0, 1);
				fVar1 = UI::_GET_TEXT_SCREEN_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UI::SET_TEXT_SCALE(1f, func_62(14f));
			break;
	}
	UI::_SET_NOTIFACTION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			UI::SET_TEXT_SCALE(1f, func_62(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH((-1 * iParam0), 1);
			}
			else
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				UI::_ADD_TEXT_COMPONENT_SUBSTRING_CASH(iParam0, 1);
			}
			break;
		
		case 6:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 20:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UI::SET_TEXT_SCALE(1f, func_62(14f));
		}
		else
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_62(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_63(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_64(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_66(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_65(7, iVar0);
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

void func_65(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_66(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

float func_67(char* sParam0)
{
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(sParam0);
	return (UI::_GET_TEXT_SCREEN_WIDTH(1) / 2f);
}

void func_68()
{
	GRAPHICS::_SET_2D_LAYER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_SET_2D_LAYER(7);
	}
	GRAPHICS::_0xC6372ECD45D73BCD(0);
}

void func_69(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(uParam0);
}

float func_70()
{
	fVar0 = 1f;
	if (GAMEPLAY::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_71(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_72(int iParam0)
{
	if (func_31())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_32(0))
		{
			func_27(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_73(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

bool func_74()
{
	return Global_98783.f_1;
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, var uParam6, var uParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, var uParam13, var uParam14, int iParam15, var uParam16, bool bParam17)
{
	func_554(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &uParam6, uParam7, iParam8, iParam9, iParam10, uParam11, iParam12, uParam13, uParam14, iParam15, uParam16, bParam17);
}

int func_76(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_257(uParam1, 5))
	{
		UI::CLEAR_HELP(1);
		func_177(uParam1, func_181(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		func_213(uParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_257(uParam1, 6))
	{
		if (func_173(&(uParam1->f_26), 0, 0))
		{
			func_213(uParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_257(uParam1, 27) && PLAYER::IS_PLAYER_ONLINE())
	{
		if (!func_257(uParam1, 26))
		{
			func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 361, 0, 361, 0);
		}
		func_213(uParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				func_95(uParam2, iParam0);
				func_91(uParam1);
			}
			else if (func_78(&iLocal_581, 0))
			{
				iLocal_581 = 0;
				*iParam9 = 0;
				func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else
		{
			if (!func_257(uParam1, 10))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_213(uParam1, 10, 1);
			}
			func_47(&(uParam1->f_26), 0, 1065353216, 0, 1, 0);
			func_91(uParam1);
		}
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (!func_257(uParam1, 28) && func_77(&uLocal_144))
				{
					func_213(uParam1, 28, 1);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
			}
			if (func_322(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_206(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 361, 0);
			}
		}
		else if (func_322(uParam3, 5, 1000))
		{
			func_73(&(uParam1->f_26));
			return 1;
		}
		else if (func_322(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_322(uParam3, 8, 1000)) && (!PLAYER::IS_PLAYER_ONLINE() || func_257(uParam1, 26)))
		{
			*iParam9 = 1;
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (func_77(&uLocal_144))
				{
					func_213(uParam1, 28, 1);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 361, 0, 361, 0);
				}
				else
				{
					func_213(uParam1, 28, 0);
					func_206(uParam1, 0, 202, "HUD_INPUT53", 361, 0, 361, 0, 361, 0);
				}
			}
		}
	}
	return 2;
}

int func_77(var uParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, bool bParam1)
{
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < GAMEPLAY::GET_FRAME_COUNT() && Global_1840924.f_2 > 0)
	{
		func_90(&Global_1840924);
		func_90(&(Global_1840924.f_49));
		*uParam0 = 0;
		Global_1840924.f_2 = 0;
		func_89(0);
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
	if ((GAMEPLAY::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_87() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_0x8D11E61A4ABF49CC())
		{
			func_84(&(Global_1840924.f_3), func_86(&(Global_1840924.f_3)));
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 4))
			{
				GAMEPLAY::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_82(&(Global_1840924.f_3), 0);
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
			else if (!func_87())
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
				func_90(&(Global_1840924.f_49));
				func_90(&Global_1840924);
				*uParam0 = 0;
				Global_1840924.f_2 = 0;
				func_89(0);
				return 1;
			}
		}
	}
	else
	{
		func_84(&(Global_1840924.f_3), func_86(&(Global_1840924.f_3)));
		if ((func_81(&(Global_1840924.f_49)) && !func_79(&(Global_1840924.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			GAMEPLAY::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_82(&(Global_1840924.f_3), 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				GAMEPLAY::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_82(&(Global_1840924.f_3), 0);
			}
		}
		if (func_81(&Global_1840924))
		{
			if (!func_79(&Global_1840924, 4000, 1))
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
							func_90(&Global_1840924);
							*uParam0 = 0;
							Global_1840924.f_2 = 0;
							func_89(0);
							return 1;
						}
					}
				}
				else
				{
					func_90(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_89(0);
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
					func_90(&(Global_1840924.f_49));
					func_90(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_89(0);
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
						func_90(&(Global_1840924.f_49));
						func_90(&Global_1840924);
						*uParam0 = 0;
						Global_1840924.f_2 = 0;
						func_89(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_79(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_80(uParam0, bParam2, 0);
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

void func_80(var uParam0, bool bParam1, bool bParam2)
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

bool func_81(var uParam0)
{
	return uParam0->f_1;
}

void func_82(var uParam0, bool bParam1)
{
	func_83(uParam0);
	if (bParam1)
	{
		func_89(0);
	}
	uParam0->f_35 = 1;
}

void func_83(var uParam0)
{
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_85(uParam0);
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

void func_85(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_86(var uParam0)
{
	return uParam0->f_35;
}

int func_87()
{
	if (func_88())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_88()
{
	return Global_2461181;
}

void func_89(bool bParam0)
{
	UI::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		UI::_0xC65AB383CD91DF98();
	}
}

void func_90(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_91(var uParam0)
{
	if (!func_94(uParam0))
	{
		return;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
	if (CONTROLS::_0x6CD79468A1E595C6(2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (uParam0->f_3[iVar0] != 361)
			{
				uParam0->f_12[iVar0] = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, uParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_92(&(uParam0->f_1), 4);
	}
	if (!func_23(uParam0->f_1, 4))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(200f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_21[iVar2]))
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_12[iVar2 + 4]))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar1);
					func_9(uParam0->f_12[iVar2 + 4]);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(fVar1);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_2));
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(80f);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		func_21(&(uParam0->f_1), 4);
	}
}

void func_92(var uParam0, int iParam1)
{
	func_93(uParam0, iParam1);
}

void func_93(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_94(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_95(var uParam0, int iParam1)
{
	func_96(uParam0, &uLocal_144);
}

void func_96(var uParam0, var uParam1)
{
	func_172(&(Global_1840924.f_49), 1, 0);
	UI::HIDE_HELP_TEXT_THIS_FRAME();
	func_171();
	func_72(0);
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_169(1);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_168(1);
	func_167(1);
	if (!func_164())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_163();
		GAMEPLAY::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { func_58(PLAYER::PLAYER_ID()) };
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
				func_162(*uParam0, Global_1835392.f_2780);
				if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_161(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 4);
				func_158(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 5);
				func_158(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 6);
				func_158(*uParam0, &iVar6, iVar31, 1, 1);
				GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
				func_157(*uParam0);
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
				UI::CLEAR_HELP(1);
			}
			else
			{
				func_157(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_121(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_162(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_161(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
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
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_120(*uParam0, iVar6, iVar31, &Var51);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_90(&(Global_1835392.f_2823));
				}
				else if (func_79(&(Global_1835392.f_2823), 300, 0))
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
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_158(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_120(*uParam0, iVar6, iVar31, &Var57);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_90(&(Global_1835392.f_2823));
				}
				func_157(*uParam0);
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
					func_162(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_161(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_160(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_159(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 6))
					{
						func_119(&Global_1839723);
						func_115(uParam1, &Global_1839723);
						func_114(uParam1, &Global_1839723);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
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
									func_158(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_158(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_158(*uParam0, &iVar6, iVar31, 0, 0);
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
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_161(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_158(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_158(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_113(Global_1839723[iVar0].f_32))
							{
								if (func_161(uParam1->f_44))
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
										if (func_112(&(Global_1839723[iVar0].f_32), &Var32))
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
									if (func_161(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0] };
										if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_1839723[iVar0].f_84)) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1839723[iVar0].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0].f_84), 64);
										}
										func_111(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &cVar9, &(Global_1839723[iVar0].f_80));
										uParam1->f_246.f_6[iVar0] = iVar6;
										uParam1->f_246.f_6[iVar0].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0].f_2 = { Global_1839723[iVar0].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_111(*uParam0, iVar6, iVar31, Global_1839723[iVar0].f_59, &(Global_1839723[iVar0]), &(Global_1839723[iVar0].f_80));
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
												func_105(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], 0, Global_1839723[iVar0].f_58);
											}
											else
											{
												func_105(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_67[iVar1], Global_1839723[iVar0].f_74, Global_1839723[iVar0].f_58);
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
												func_102(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], 0);
											}
											else
											{
												func_102(Global_1835392.f_2780, iVar1, Global_1839723[iVar0].f_60[iVar1], Global_1839723[iVar0].f_74);
											}
										}
										iVar1++;
									}
									func_101();
									uVar2[(Global_1839723[iVar0].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0].f_59 > 2)
										{
											GAMEPLAY::SET_BIT(&iVar31, 2);
											GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[0].f_1), 2);
											func_100(*uParam0, (iVar6 - 1), iVar31);
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
						func_158(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 5);
						func_158(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 6);
						func_158(*uParam0, &iVar6, iVar31, 1, 0);
					}
					GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
					func_157(*uParam0);
					UI::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
							func_100(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
						}
					}
				}
				else
				{
					func_157(*uParam0);
					func_97(uParam0, uParam1);
				}
			}
		}
	}
}

void func_97(var uParam0, var uParam1)
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
		func_99(&uVar5, &iVar6, &uVar7, &uVar8, 0);
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
				func_90(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 188))
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
				func_90(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_98(uParam1, 187))
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
			func_90(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_98(uParam1, 204))
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
				func_100(*uParam0, uParam1->f_246.f_6[iVar1], uParam1->f_246.f_6[iVar1].f_1);
			}
			GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1].f_1), 3);
			func_100(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1], uParam1->f_246.f_6[uParam1->f_246.f_1].f_1);
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_113(uParam1->f_246.f_6[uParam1->f_246.f_1].f_2))
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

int func_98(var uParam0, int iParam1)
{
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_99(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_79(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_79(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_99(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_100(var uParam0, int iParam1, int iParam2)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT_STATE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_101()
{
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_102(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
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
						fParam44 = func_104(fParam44);
					}
					else
					{
						fParam44 = func_103(fParam44);
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

float func_103(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_104(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_105(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
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
			if (func_110(iParam44) != 0)
			{
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(func_107(func_110(iParam44), 0));
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
						iParam44 = SYSTEM::FLOOR(func_104(SYSTEM::TO_FLOAT(iParam44)));
					}
					else
					{
						iParam44 = SYSTEM::FLOOR(func_103(SYSTEM::TO_FLOAT(iParam44)));
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
				Var0 = { func_106(iParam44) };
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&Var0);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_106(int iParam0)
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

char* func_107(int iParam0, bool bParam1)
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
			if (func_109(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_108(&(Var0.f_31));
				}
				else
				{
					return func_108(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_108(var uParam0)
{
	return uParam0;
}

int func_109(int iParam0, var uParam1)
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

int func_110(int iParam0)
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

void func_111(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, char* sParam5)
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

int func_112(var uParam0, var uParam1)
{
	if (!func_113(*uParam0))
	{
		return 0;
	}
	if (!func_113(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_114(var uParam0, var uParam1)
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

void func_115(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5) && !GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_118(uParam1, iVar3, &uVar0, 0))
			{
				uParam1[iVar3]->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar1, 1))
			{
				uParam1[iVar3]->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_118(uParam1, iVar3, &uVar2, 2))
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
		func_116(uParam1);
	}
}

void func_116(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_58(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar16 = STATS::_0x58A651CD201D89AD(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_117(&Global_1839593);
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
					if (func_112(&(uParam0[iVar0]->f_32), &Var3))
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

void func_117(var uParam0)
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

int func_118(var uParam0, int iParam1, var uParam2, int iParam3)
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
				uParam0[iParam1]->f_32 = { func_58(PLAYER::PLAYER_ID()) };
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

void func_119(var uParam0)
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
	func_90(&(Global_1835392.f_2830));
}

void func_120(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	GAMEPLAY::SET_BIT(&iParam2, 7);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam3);
	GRAPHICS::_0xAE4E8157D9ECF087();
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

int func_121(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_81(&(Global_1835392.f_2827)))
		{
			func_80(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_79(&(Global_1835392.f_2827), 1000, 1))
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
		func_156(uParam0);
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
	if (!func_154(uParam0))
	{
		return 0;
	}
	if (!func_152(uParam0))
	{
		return 0;
	}
	if (!func_138(uParam0))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		func_119(&Global_1839723);
		func_115(uParam0, &Global_1839723);
		func_114(uParam0, &Global_1839723);
		GAMEPLAY::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!func_81(&(Global_1835392.f_2830)))
		{
			func_80(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_79(&(Global_1835392.f_2830), 30000, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_135(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_132(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_126(&Global_1839723))
		{
			func_122(&Global_1839723);
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
			func_122(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_122(var uParam0)
{
	iVar2 = func_125(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_124(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_117(&Global_1839593);
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
			if (func_113(uParam0[iVar0]->f_45))
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
	Global_1838577.f_87[iVar2] = { func_123(PLAYER::PLAYER_ID()) };
}

Vector3 func_123(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_124(int iParam0, int iParam1)
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

int func_125(int iParam0)
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

int func_126(var uParam0)
{
	switch (uParam0[0]->f_76)
	{
		case 0:
			func_130(uParam0);
			if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				uParam0[0]->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_113(uParam0[iVar0]->f_32))
				{
					if (!func_129(&(uParam0[iVar0]->f_32), &Global_1841022))
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
			if (func_127(&(uParam0[1]->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
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
					if (func_113(uParam0[iVar0]->f_32) && func_113(Global_1841022[iVar1]))
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

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
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
					func_128(&uVar0, uParam3[iVar35]);
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

void func_128(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

int func_129(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_113(*uParam1[iVar0]))
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

void func_130(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_131(&(Global_1841022[iVar0]));
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

void func_131(var uParam0)
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

int func_132(var uParam0)
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return 1;
	}
	else if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (!func_134(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_133(&(uParam0[iVar0]->f_78), &(uParam0[iVar0]->f_32), uParam0[iVar0]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_133(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_113(*uParam1))
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

int func_134(var uParam0)
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
				func_131(&(Global_1835392.f_3026[iVar1]));
				if (func_113(uParam0[iVar1]->f_32))
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
					if (func_113(uParam0[iVar1]->f_32))
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

int func_135(var uParam0)
{
	if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_137(&(uParam0[iVar0]->f_77), &(uParam0[iVar0]->f_16), &(uParam0[iVar0]->f_84), &(Global_1835392.f_2833), &(uParam0[iVar0]->f_79)))
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
			if (!func_136(&(uParam0[iVar0]->f_77), uParam0[iVar0]->f_16, &(uParam0[iVar0]->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_136(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
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
			if (func_113(Var0))
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

int func_137(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
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
			if (func_113(Var1[0]))
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

int func_138(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_58(PLAYER::PLAYER_ID()) };
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_151(), 0, 0, 0))
			{
				func_149(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_151())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361)))
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
								func_148(&Var0);
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
								if (func_151() && iVar109 == 0)
								{
									func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
									Global_1835392.f_2775[iVar113] = 0;
									Global_1835392.f_2704[iVar113]++;
								}
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_112(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
									Global_1835392[iVar113][Global_1835392.f_2704[iVar113]].f_59 = Var0.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
						if (!func_151())
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
						func_148(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_151() && iVar109 == iVar111)
								{
									if (!func_112(&(Global_1835392[iVar113][0].f_32), &Var116))
									{
										func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_112(&Var0, &Var116))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar111++;
						}
						STATS::_0x71B008056E5692D6();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[iVar113] == -1 && func_151())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_149(&Var98, &(uParam0->f_44));
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
								if (func_151() && (func_112(&Var0, &Var116) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[iVar113][0]), {Var0.f_13}, 16);
									Global_1835392[iVar113][0].f_32 = { Var0 };
									Global_1835392[iVar113][0].f_59 = Var0.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar106++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar113);
					Global_1835392.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835392.f_2775[iVar113] == -1 && func_151())
				{
					if (Global_1835392.f_2704[iVar113] >= 1)
					{
						func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
					}
					else
					{
						func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
					}
					Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
					Global_1835392.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_139(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_139(int iParam0, int iParam1)
{
	if ((func_151() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
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
		if (!func_151())
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

int func_140(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

void func_141(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_172(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_142()
{
	if (UI::IS_PAUSE_MENU_ACTIVE() && !func_164())
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	if (STATS::_0xA31FD15197B192BD() || Global_1835008)
	{
		func_144();
		return 1;
	}
	return 0;
}

void func_144()
{
	if (func_79(&(Global_1835008.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_90(&(Global_1835008.f_1));
	}
}

void func_145(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_90(&(Global_1835008.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_146(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	if (func_161(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_58(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_146(uParam0->f_44))
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

void func_148(var uParam0)
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

void func_149(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_150(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

int func_151()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_152(var uParam0)
{
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_58(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_151())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_153(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0], iVar112, 0, 100))
				{
					func_149(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
					{
						if (func_151())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar110, &Var0);
									if (func_161(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_112(&Var0, &(Global_1835013.f_361)))
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
									func_148(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_151() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								Global_1835392.f_2775[iVar113] = 0;
								Global_1835392.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_151() && (func_112(&Var0, &Var114) || func_112(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_113(Var0) && Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_112(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1][Global_1835392.f_2704[iVar113]]), {Var0.f_13}, 16);
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_32 = { Var0 };
								Global_1835392[1][Global_1835392.f_2704[iVar113]].f_59 = 1;
								if (func_146(uParam0->f_44))
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
								if (func_161(uParam0->f_44))
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
								func_148(&Var0);
								STATS::_0x71B008056E5692D6();
								func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar113] == -1 && func_151())
								{
									if (Global_1835392.f_2704[iVar113] >= 1)
									{
										func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
									}
									else
									{
										func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
									}
									Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
									Global_1835392.f_2704[iVar113]++;
								}
								return 0;
							}
							func_148(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_148(&Var0);
							STATS::_0x71B008056E5692D6();
							func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar113] == -1 && func_151())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_151())
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
								if (func_151() && iVar108 == iVar110)
								{
									if (!func_112(&(Global_1835392[iVar113][0].f_32), &Var114))
									{
										func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Var0.f_96);
										Global_1835392[1][Global_1835392.f_2704[1]].f_59 = iVar110 + 1;
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_151() && (func_112(&Var0, &Var114) || func_112(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_113(Var0) && !func_112(&Var0, &(Global_1835392[iVar113][0].f_32)))
									{
										if (func_112(&Var0, &Var114))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var0);
							iVar110++;
						}
						STATS::_0x71B008056E5692D6();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar113] == -1 && func_151())
						{
							if (Global_1835392.f_2704[iVar113] >= 1)
							{
								func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), Global_1835392[iVar113][(Global_1835392.f_2704[iVar113] - 1)].f_59 + 1);
							}
							else
							{
								func_147(uParam0, &(Global_1835392[iVar113][Global_1835392.f_2704[iVar113]]), 1);
							}
							Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
							Global_1835392.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_139(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_153(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

int func_154(var uParam0)
{
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_58(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835392.f_2775[iVar126] = -1;
			Global_1835392.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_155(uParam0->f_44))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_151(), 0, 0, 0))
			{
				func_149(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_151())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361)))
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
								func_148(&Var13);
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
								if (func_151() && iVar122 == 0)
								{
									func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
									Global_1835392.f_2775[iVar126] = 0;
									Global_1835392.f_2704[iVar126]++;
								}
								if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_112(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), {Var13.f_13}, 16);
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_32 = { Var13 };
									Global_1835392[iVar126][Global_1835392.f_2704[iVar126]].f_59 = Var13.f_96;
									if (func_146(uParam0->f_44))
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
									if (func_161(uParam0->f_44))
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
						if (!func_151())
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
						func_148(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
							if (Global_1835392.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_151() && iVar122 == iVar124)
								{
									if (!func_112(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Var13.f_96);
										Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
										Global_1835392.f_2704[iVar126]++;
									}
								}
								if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar126] < 11)
								{
									if (func_113(Var13) && !func_112(&(Global_1835392[iVar126][0].f_32), &Var13))
									{
										if (func_112(&Var13, &Var0))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var13);
							iVar124++;
						}
						STATS::_0x71B008056E5692D6();
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[iVar126] == -1 && func_151())
							{
								if (Global_1835392.f_2704[iVar126] >= 1)
								{
									func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
								}
								else
								{
									func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
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
						func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
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
			if (func_140(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_149(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar119, &Var13);
							if (func_151() && (func_112(&Var13, &Var0) || func_112(&Var13, &(Global_1835013.f_361))))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
										if (func_146(uParam0->f_44))
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
										if (func_161(uParam0->f_44))
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
							func_148(&Var13);
							iVar119++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar126);
					func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar126] == -1 && func_151())
			{
				if (Global_1835392.f_2704[iVar126] >= 1)
				{
					func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), Global_1835392[iVar126][(Global_1835392.f_2704[iVar126] - 1)].f_59 + 1);
				}
				else
				{
					func_147(uParam0, &(Global_1835392[iVar126][Global_1835392.f_2704[iVar126]]), 1);
				}
				Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
				Global_1835392.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_139(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_155(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
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

void func_156(var uParam0)
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
			func_124(Global_1835392.f_2826, -1);
		}
	}
}

void func_157(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_158(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
				Var53 = { func_58(PLAYER::PLAYER_ID()) };
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
							Var67 = { func_58(PLAYER::PLAYER_ID()) };
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

void func_159(var uParam0, char* sParam1, var uParam2, int iParam3)
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

void func_160(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
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

int func_161(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0, int iParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

var func_163()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

bool func_164()
{
	return func_165(PLAYER::PLAYER_ID());
}

int func_165(int iParam0)
{
	switch (func_166(iParam0))
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

int func_166(int iParam0)
{
	return Global_1590535[iParam0].f_196;
}

void func_167(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_168(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_171();
	}
	func_170(4, -1);
	func_170(6, -1);
	func_170(7, -1);
	func_170(3, -1);
	func_170(1, -1);
	func_170(2, -1);
	func_170(11, -1);
	func_170(13, -1);
	func_170(14, -1);
	func_170(16, -1);
}

void func_170(int iParam0, int iParam1)
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

void func_171()
{
	Global_2537071.f_4532 = 0;
}

void func_172(var uParam0, bool bParam1, bool bParam2)
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

int func_173(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_176(uParam0);
	func_175(uParam0);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
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
			func_174(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_48(uParam0, 1);
		}
		else
		{
			func_48(uParam0, 0);
		}
	}
	Global_76883 = 1;
	return 1;
}

void func_174(var uParam0)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
	func_9(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_14("ES_HELP_TU");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	func_9(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_14("ES_HELP_TD");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_9(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_14("ES_HELP_AB");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_175(var uParam0)
{
	fVar0 = 0f;
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, func_62(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UI::_SET_TEXT_ENTRY_FOR_WIDTH("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
		}
		else
		{
			UI::_SET_TEXT_ENTRY_FOR_WIDTH(&(uParam0->f_13));
			fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
		}
	}
	else
	{
		UI::_SET_TEXT_ENTRY_FOR_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
				
				case 2:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UI::_GET_TEXT_SCREEN_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_176(var uParam0)
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

void func_177(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	if (func_257(uParam0, 4))
	{
		return;
	}
	else
	{
		func_180(&(uParam0->f_26));
		func_179(&(uParam0->f_26), "BJ_SC_PASS", sParam1, 0);
		func_213(uParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_178(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_178(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_178(&(uParam0->f_26), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_178(&(uParam0->f_26), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_178(&(uParam0->f_26), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_178(&(uParam0->f_26), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_178(&(uParam0->f_26), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_179(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_180(var uParam0)
{
	func_176(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

char* func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_182(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_191(iParam0, iParam1, fParam2, iParam3);
		Global_1835013.f_2 = 1;
	}
	if (func_183(&uLocal_144))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_183(var uParam0)
{
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_161(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_58(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_190(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_149(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_189(uParam0->f_44, iVar188))
					{
						if (func_188(uParam0->f_44, 4, iVar188))
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
						if (!func_113(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_189(uParam0->f_44, iVar188))
								{
									if (func_188(uParam0->f_44, 4, iVar188))
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_187();
				if (Global_1835013.f_4)
				{
					if (func_186(uParam0->f_44))
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
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_185())
			{
				if (func_184())
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
			if (func_186(uParam0->f_44))
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
			if (func_150(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_149(&Var98, &(uParam0->f_44));
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
				func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_184()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 1);
}

var func_185()
{
	return Global_2458936.f_3;
}

int func_186(int iParam0)
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

void func_187()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_188(int iParam0, int iParam1, int iParam2)
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

int func_189(int iParam0, int iParam1)
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

int func_190(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_143() && !func_142())
			{
				func_141(*uParam2);
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

void func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	StringCopy(&(Var7[0]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0]), "BJUMP_13", 24);
			break;
	}
	if (func_193(274, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_192(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_192(274, 98, 1, 0f, 0);
		}
		else
		{
			func_192(274, 98, 0, 0f, 0);
		}
		func_192(274, 109, 1, 0f, 0);
		func_192(274, 8, iParam3, 0f, 0);
		func_192(274, 93, 0, fParam2, 0);
	}
}

void func_192(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
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
				else if (func_188(iParam0, 4, iVar1))
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

int func_193(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
				Var69 = { func_58(PLAYER::PLAYER_ID()) };
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

void func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&Var0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&Var0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&Var0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&Var0, "BJUMP_13", 24);
			break;
	}
	func_195(&uLocal_144, 85, &Var0, func_181(iParam0), iParam0, -1, 0, 0);
}

void func_195(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 > 0 && !func_204())
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
				if (iParam5 <= 0 || func_204())
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
			MemCopy(&(Global_1835392.f_2780.f_9), {func_203(iParam1)}, 16);
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
				if (func_202(Global_4456448.f_232883) || func_199(Global_4456448.f_232883))
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
				else if (func_198(Global_4456448.f_232883))
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
			MemCopy(&(uParam0->f_44.f_3.f_1[0].f_8), {func_197(iParam4)}, 8);
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
	Global_1835392.f_2826 = func_196(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_196(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_161(iParam8))
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

struct<6> func_197(int iParam0)
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

bool func_198(int iParam0)
{
	return iParam0 == 74;
}

var func_199(int iParam0)
{
	return (func_201(iParam0) || func_200(iParam0));
}

bool func_200(int iParam0)
{
	return iParam0 == 44;
}

bool func_201(int iParam0)
{
	return iParam0 == 45;
}

bool func_202(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_203(int iParam0)
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

int func_204()
{
	if (((((((((((Global_4456448.f_75705 == 1 || Global_4456448.f_75705 == 3) || Global_4456448.f_75705 == 5) || Global_4456448.f_75705 == 7) || Global_4456448.f_75705 == 19) || Global_4456448.f_75705 == 8) || Global_4456448.f_75705 == 9) || Global_4456448.f_75705 == 11) || Global_4456448.f_75705 == 13) || Global_4456448.f_75705 == 21) || Global_4456448.f_75705 == 23) || Global_4456448.f_75705 == 25)
	{
		return 1;
	}
	return 0;
}

bool func_205()
{
	return NETWORK::NETWORK_IS_SIGNED_ONLINE();
}

void func_206(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_3[0] = iParam2;
	uParam0->f_3[1] = iParam4;
	uParam0->f_3[2] = iParam6;
	uParam0->f_3[3] = iParam8;
	uParam0->f_3[4] = 361;
	uParam0->f_3[5] = 361;
	uParam0->f_3[6] = 361;
	uParam0->f_3[7] = 361;
	uParam0->f_12[0] = func_207(iParam2 != 361, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam2, true), "");
	uParam0->f_12[1] = func_207(iParam4 != 361, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam4, true), "");
	uParam0->f_12[2] = func_207(iParam6 != 361, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam6, true), "");
	uParam0->f_12[3] = func_207(iParam8 != 361, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam8, true), "");
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_21[0] = sParam3;
	uParam0->f_21[1] = sParam5;
	uParam0->f_21[2] = iParam7;
	uParam0->f_21[3] = iParam9;
	if (bParam1)
	{
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_21(&(uParam0->f_1), 1);
	}
}

char* func_207(bool bParam0, var uParam1, char* sParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return sParam2;
}

void func_208()
{
	func_209(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_MED", 24);
}

void func_209(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_210(iParam2), 1);
}

int func_210(int iParam0)
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

int func_211()
{
	if (func_46(0))
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

void func_212(int iParam0, int iParam1)
{
	Global_98783.f_7 = iParam0;
	Global_98783.f_8 = iParam1;
}

void func_213(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_603), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_603), iParam1);
	}
}

int func_214(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_215(func_422(), 1, *uParam3, 0, 0);
	return 1;
}

void func_215(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_250(iParam0) == 3)
	{
		return;
	}
	if (func_250(iParam0) == 4)
	{
		return;
	}
	func_216(func_250(iParam0), 1, iParam1, iParam2, 0);
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

int func_216(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_249();
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
					func_357(99, 1);
					func_248(-656546900, iParam3);
					break;
				
				case 1:
					func_248(-2098183071, iParam3);
					break;
				
				case 2:
					func_248(1578119842, iParam3);
					break;
			}
			func_232(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_227(5))
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
							func_248(-1190521599, iParam3);
							break;
						
						case 1:
							func_248(490143716, iParam3);
							break;
						
						case 2:
							func_248(121069433, iParam3);
							break;
					}
					if (func_227(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_248(219506691, iParam3);
							break;
						
						case 1:
							func_248(1871505786, iParam3);
							break;
						
						case 2:
							func_248(-2024399847, iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_248(27639974, iParam3);
							break;
						
						case 1:
							func_248(422258364, iParam3);
							break;
						
						case 2:
							func_248(316202960, iParam3);
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
							func_248(1806738963, iParam3);
							break;
						
						case 1:
							func_248(1576781520, iParam3);
							break;
						
						case 2:
							func_248(671882196, iParam3);
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
									func_248(408653638, iParam3);
									break;
								
								case 1:
									func_248(-424799277, iParam3);
									break;
								
								case 2:
									func_248(-558138038, iParam3);
									break;
							}
							break;
						
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_248(2038531975, iParam3);
									break;
								
								case 1:
									func_248(-572903575, iParam3);
									break;
								
								case 2:
									func_248(-953947924, iParam3);
									break;
							}
							if (func_227(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_248(-445823242, iParam3);
									break;
								
								case 1:
									func_248(-1386757215, iParam3);
									break;
								
								case 2:
									func_248(-727828275, iParam3);
									break;
							}
							break;
						
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_248(-1744069936, iParam3);
									break;
								
								case 1:
									func_248(799609312, iParam3);
									break;
								
								case 2:
									func_248(181688102, iParam3);
									break;
							}
							func_226(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_357(95, iParam3);
					break;
				
				case 1:
					func_357(97, iParam3);
					break;
				
				case 2:
					func_357(96, iParam3);
					break;
			}
			func_357(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_219(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_219(iVar1);
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
					func_248(-330339780, iParam3);
					break;
				
				case 1:
					func_248(1697564429, iParam3);
					break;
				
				case 2:
					func_248(1674823841, iParam3);
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
	func_218(iParam0);
	if (Global_41431 == 15)
	{
		func_217(0);
	}
	return 1;
}

void func_217(bool bParam0)
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

void func_218(int iParam0)
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

void func_219(int iParam0)
{
	if (iParam0 == 8)
	{
		func_225(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_225(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_225(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_225(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_222(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_222(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_222(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_222(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_222(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_222(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0))
		{
			bVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_221()].f_6174.f_10, iParam0))
	{
		bVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_20559.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_221()].f_6174.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UI::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_220(iParam0));
		UI::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_220(int iParam0)
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

int func_221()
{
	iVar0 = 0;
	return iVar0;
}

void func_222(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_223(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_223(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_224();
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

int func_224()
{
	return Global_1312745;
}

int func_225(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_224();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 28355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30227)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 30355)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_226(int iParam0)
{
	func_357(93, iParam0);
	func_357(29, iParam0);
	func_357(30, iParam0);
}

bool func_227(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_229(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_229(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_229(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_229(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_228(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_228(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_228(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_228(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_228(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_228(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_20559.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_221()].f_6174.f_10, iParam0);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0][func_223(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_224();
	}
	iVar1 = func_231(iParam0, iParam1);
	uVar2 = func_230(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_230(int iParam0)
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

int func_231(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_224();
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

int func_232(bool bParam0)
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
		func_247(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_233(27, 1);
	return 1;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_234(iParam0, iParam1);
}

int func_234(int iParam0, int iParam1)
{
	if (func_246(14) && !func_245(iParam0))
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
	if (func_244(&Global_4270065))
	{
		if (func_242(&Global_4270065, iParam0))
		{
			return 0;
		}
		if (func_235(&Global_4270065, iParam0))
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

int func_235(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return 0;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	func_238(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_236(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_236(var uParam0, int iParam1)
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_246(14) && !func_245(iParam1))
	{
		return 0;
	}
	if (func_242(uParam0, iParam1))
	{
		return 0;
	}
	if (func_241(uParam0) < 0f)
	{
		func_240(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_237(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_237(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_238(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_239(uParam0, iVar0);
		iVar0++;
	}
	func_240(uParam0, (Global_4270064 - 0.5f));
}

void func_239(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_240(var uParam0, float fParam1)
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

float func_241(var uParam0)
{
	return uParam0->f_80;
}

bool func_242(var uParam0, int iParam1)
{
	return func_243(uParam0, iParam1) != -1;
}

int func_243(var uParam0, int iParam1)
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

bool func_244(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_245(int iParam0)
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

bool func_246(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_247(int iParam0, int iParam1)
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

void func_248(int iParam0, int iParam1)
{
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_249()
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

int func_250(int iParam0)
{
	return Global_1798[iParam0].f_17;
}

void func_251(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_225((891 + iParam0), 1, -1, 1);
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
		func_252();
	}
}

void func_252()
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
		func_247(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_253() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_211();
				}
			}
		}
	}
}

int func_253()
{
	return Global_30768;
}

void func_254(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111638.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111638.f_9080.f_99.f_58[iParam0] = iParam1;
}

int func_255(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

void func_256(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_31146[iVar0].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31146[iVar0].f_11), 20);
	}
	if (Global_31143 == 1)
	{
		Global_31144 = 1;
	}
	Global_31143 = 1;
	GAMEPLAY::SET_BIT(&(Global_31146[iVar0].f_11), 20);
}

bool func_257(var uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_603, iParam1);
}

var func_258()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_259(struct<3> Param0, int iParam3, int iParam4, int iParam5, var uParam6, float fParam7)
{
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = 0;
	bVar2 = PED::IS_PED_INJURED(iVar0);
	if (bVar2)
	{
		*iParam5 = 2;
		return;
	}
	iVar3 = PED::GET_PED_PARACHUTE_STATE(iVar0);
	uVar4 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
	bVar5 = ENTITY::IS_ENTITY_IN_AIR(iVar0);
	bVar6 = PED::IS_PED_RAGDOLL(iVar0);
	bVar7 = ENTITY::DOES_ENTITY_EXIST(iParam3);
	bVar8 = (bVar7 && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iParam3));
	bVar9 = ((bVar7 && !PED::IS_PED_INJURED(iParam4)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam4));
	bVar10 = (bVar7 && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam3, &iVar1));
	bVar11 = ((bVar10 && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_425(Param0));
	if (bVar12)
	{
		Var13 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		Var16 = { Var13 - Param0 };
		fVar19 = SYSTEM::SQRT(((Var16.x * Var16.x) + (Var16.y * Var16.y)));
		*fParam7 = fVar19;
		if ((Var16.z < 5f && Var16.z > -2f) && fVar19 < 15f)
		{
			*uParam6 = func_262(SYSTEM::CEIL(((100f * (15f - fVar19)) / 15f)) + 4, 0, 100);
			*iParam5 = 1;
		}
		else
		{
			*iParam5 = 3;
		}
	}
	if (bVar7)
	{
		if (func_260(iParam3, iParam4))
		{
			*fParam7 = 0f;
			*uParam6 = 100;
			*iParam5 = 1;
		}
		else
		{
			*uParam6 = 0;
			*iParam5 = 3;
		}
	}
	if (bVar10)
	{
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam3, &iVar20);
		Var21 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
		Var24 = { ENTITY::GET_ENTITY_COORDS(iVar20, 1) };
	}
}

int func_260(int iParam0, int iParam1)
{
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (func_361(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			iVar8 = 0;
			iVar8 = 0;
			while (iVar8 < 6)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar8);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
					if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
			if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0)) || ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1)))
			{
				if (Var2.z < Var5.z)
				{
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
				{
					return 1;
				}
				else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0))
				{
					Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
					Var9.x = func_261((GAMEPLAY::ABSF(Var9.x) - 1.305f), 0f);
					if (Var9.y >= 0f)
					{
						Var9.y = func_261((Var9.y - 5.98f), 0f);
					}
					else
					{
						Var9.y = func_261((-Var9.y - 6.21f), 0f);
					}
					if (Var9.y == 0f && Var9.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_261(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_263(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	if (!func_456(&uParam3))
	{
		return;
	}
	fVar0 = func_455(&uParam3);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
}

void func_264(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = func_362(uParam1);
	if (func_459(func_460(iParam2)))
	{
		if (!func_257(uParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_334("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_361(iVar0))
				{
					func_334("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_334("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_334("BJ_MG_STOBJ", 7500, 1);
			}
			func_213(uParam0, 0, 1);
		}
	}
	if (func_331("BJ_FALLHLP") && Global_22211.f_135)
	{
		UI::CLEAR_HELP(1);
		func_213(uParam0, 1, 0);
	}
	if (!func_257(uParam0, 1) && !Global_22211.f_135)
	{
		UI::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
		UI::CLEAR_HELP(1);
		func_332("BJ_FALLHLP", -1);
		func_213(uParam0, 1, 1);
	}
	else if (!func_257(uParam0, 2))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
		{
			UI::CLEAR_HELP(1);
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				func_332("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_332("BJ_PARAHLP", 10000);
			}
			func_213(uParam0, 2, 1);
		}
	}
	else if (!func_257(uParam0, 3))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3)
		{
			UI::CLEAR_HELP(1);
			func_213(uParam0, 3, 1);
		}
	}
}

void func_265(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID())))
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID()), 0) };
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PLAYER::PLAYER_PED_ID(), 1) };
		}
		fVar21 = Var0.y;
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3.z = 0f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
		Var6.z = 0f;
		Var18 = { ENTITY::GET_ENTITY_VELOCITY(*iParam0) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(*iParam0, &Var9, &uVar15, &uVar15, &uVar15);
		Var9.z = 0f;
	}
	Var12 = { Var3 - Var6 };
	Var12.z = 0f;
	fVar23 = GAMEPLAY::ABSF(func_269(Var12, Var9));
	if (func_268(*iParam0))
	{
		fVar22 = func_49((fVar21 - (fVar23 / fVar21)), 2f, 3f);
	}
	else
	{
		fVar22 = func_49((fVar21 + (fVar23 / fVar21)), 3f, 10f);
	}
	uVar24 = func_49(func_266(Var18.y, fVar22, 0.5f), Var18.y, fVar21);
	Var18.y = func_266(Var18.y, fVar22, 0.5f);
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0)) && Var18.y > 2f) && Var18.y < VEHICLE::_0x53AF99BAA671CA47(*iParam0))
	{
		AI::SET_DRIVE_TASK_MAX_CRUISE_SPEED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, 0), uVar24);
	}
}

float func_266(float fParam0, float fParam1, float fParam2)
{
	fVar0 = ((1f - SYSTEM::COS(func_267((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_267(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_268(int iParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &Var12, &uVar6, &uVar6, &Var3);
	}
	Var9 = { Var0 - Var3 };
	Var9.z = 0f;
	Var12.z = 0f;
	fVar15 = func_269(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_269(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.y * Param3.y)) + (Param0.z * Param3.z));
}

float func_270(int iParam0, int iParam1, int iParam2)
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

Vector3 func_271(int iParam0, struct<3> Param1)
{
	Param1.z = (Param1.z + 0.15f);
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Param1, &uVar0, 0, 0))
	{
		Param1.z = uVar0;
	}
	if (func_272(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1, 1, 0, 0, 1);
	}
	return Param1;
}

bool func_272(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_273(var uParam0, var uParam1)
{
	if (!func_456(uParam0))
	{
		func_480(uParam0);
	}
	if (func_455(uParam0) < 1f)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar12 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar0, -1);
	iVar13 = 0;
	while (iVar13 < 6)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar13]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar13], 0)) && !PED::IS_PED_INJURED((*uParam1)[iVar13]))
		{
			if (func_275((*uParam1)[iVar13], &uVar0) == -1)
			{
				func_274(uParam1[iVar13]);
			}
			else
			{
				Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS((*uParam1)[iVar13], 1) };
				fVar11 = ((Var8.x * Var8.x) + (Var8.y * Var8.y));
				if (Var8.z * Var8.z) < (3f * fVar11)
				{
					func_274(uParam1[iVar13]);
				}
			}
		}
		iVar13++;
	}
	if (iVar12 > 0)
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if ((((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar13]) && !ENTITY::IS_ENTITY_DEAD(uVar0[iVar13], 0)) && !PED::IS_PED_INJURED(uVar0[iVar13])) && PED::IS_PED_HUMAN(uVar0[iVar13])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar13], 1))
			{
				if (func_275(uVar0[iVar13], uParam1) == -1)
				{
					Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(uVar0[iVar13], 1) };
					fVar11 = ((Var8.x * Var8.x) + (Var8.y * Var8.y));
					if (Var8.z * Var8.z) > (3f * fVar11)
					{
						bVar15 = false;
						iVar14 = 0;
						while (iVar14 < *uParam1)
						{
							if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar14]) || PED::IS_PED_INJURED((*uParam1)[iVar14]))
							{
								(*uParam1)[iVar14] = uVar0[iVar13];
								AI::OPEN_SEQUENCE_TASK(&uVar7);
								AI::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
								AI::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								AI::CLOSE_SEQUENCE_TASK(uVar7);
								AI::TASK_PERFORM_SEQUENCE(uVar0[iVar13], uVar7);
								AI::CLEAR_SEQUENCE_TASK(&uVar7);
								iVar14 = *uParam1;
								bVar15 = true;
							}
							iVar14++;
						}
						if (!bVar15)
						{
							return;
						}
					}
				}
			}
			iVar13++;
		}
	}
}

void func_274(var uParam0)
{
	AI::CLEAR_PED_TASKS(*uParam0);
	AI::TASK_PLAY_ANIM(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_275(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_276(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	VEHICLE::_0xE30524E1871F481D(*uParam36);
	func_370();
	func_369();
	func_490();
	func_44(&(uParam2->f_26));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_321(uParam2);
	if (func_456(uParam24))
	{
		func_452(uParam24);
	}
	if (func_456(uParam23))
	{
		func_452(uParam23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		if (func_361(func_362(uParam0)))
		{
			VEHICLE::DELETE_MISSION_TRAIN(iParam7);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam7, 0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::DELETE_PED(&iVar1);
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*iParam5)[iVar2], 0))
		{
			AI::CLEAR_PED_TASKS((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam8))
	{
		VEHICLE::DELETE_VEHICLE(uParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam9))
	{
		if (!func_320(*iParam9) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, -1, 0)))
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, -1, 0);
			PED::DELETE_PED(&iVar3);
		}
		VEHICLE::DELETE_VEHICLE(iParam9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam4);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam6) && iVar0 == *uParam6)
			{
				VEHICLE::SET_PLAYERS_LAST_VEHICLE(*uParam6);
				func_280(*uParam6, func_319(iParam20), func_318(iParam20), 24, 0);
				ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				ENTITY::SET_ENTITY_COORDS(iVar0, func_319(iParam20), 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				ENTITY::SET_ENTITY_HEADING(iVar0, func_318(iParam20));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
				}
				VEHICLE::DELETE_VEHICLE(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > -1)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam11);
		GRAPHICS::DELETE_CHECKPOINT(*uParam12);
		*iParam16 = -1;
	}
	if (UI::DOES_BLIP_EXIST(uParam13))
	{
		UI::REMOVE_BLIP(&uParam13);
	}
	if (UI::DOES_BLIP_EXIST(uParam14))
	{
		UI::REMOVE_BLIP(&uParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam10)[iVar4]) && !ENTITY::IS_ENTITY_DEAD((*iParam10)[iVar4], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*iParam10)[iVar4], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*iParam10)[iVar4], 0, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_279(uParam2);
	*uParam3 = 0;
	func_278();
	func_277();
	CAM::DO_SCREEN_FADE_OUT(800);
}

void func_277()
{
	Global_30912 = 1;
}

void func_278()
{
	Local_68.f_66 = -1;
	Local_68.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_68.f_9[iVar0].f_3 = -1f;
		Local_68.f_9[iVar0].f_4 = -1f;
		Local_68.f_9[iVar0].f_5 = 0;
		Local_68.f_9[iVar0].f_6 = 0;
		iVar0++;
	}
	Local_68.f_5 = 0;
	Local_68.f_5.f_1 = -1f;
	Local_68.f_5.f_2 = 0;
	Local_68 = 0;
	Local_68.f_1 = 0;
}

void func_279(var uParam0)
{
	uParam0->f_603 = 0;
}

void func_280(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_484[25], 0))
			{
				if (Global_75441.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == -713569950) || ENTITY::GET_ENTITY_MODEL(iParam0) == 1941029835)
			{
				return;
			}
		}
		func_317(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_312(iParam0, &Var0);
		if (func_311(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			uParam4 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != 241912366)
			{
				Global_76429 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_304(iParam5, &Var0, Param1, uParam4, func_310(iParam0));
		func_281(iParam5, iParam0, 0);
	}
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_301(&(Global_75441.f_555[0]), iParam0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 12) && !GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 10))
	{
		if (Global_75441.f_555[0].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_76348 != -1 && Global_76348 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_111638.f_32744.f_4801 = func_514();
			}
			if (iParam1 != Global_75441.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_300(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_282(iVar0, 145);
					}
				}
				Global_76347 = iParam1;
				Global_76348 = iParam0;
				Global_76349 = iParam2;
			}
		}
	}
}

void func_282(int iParam0, int iParam1)
{
	if (!func_283(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == 225514697)
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1692214353)
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == -1686040670)
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111638.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5038[iVar1][iVar2].f_66)
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5038[iVar1][iVar2].f_1)))
					{
						Global_111638.f_32744.f_5038[iVar1][iVar2].f_66 = 0;
						Global_111638.f_32744.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_111638.f_32744.f_5600[iVar1].f_66)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_111638.f_32744.f_5600[iVar1].f_1)))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_111638.f_32744.f_5600[iVar1].f_1)))
				{
					Global_111638.f_32744.f_5600[iVar1].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111638.f_32744.f_5590 = iParam1;
	Global_76346 = iParam0;
	Global_111638.f_32744.f_5588 = 1;
	func_312(iParam0, &(Global_111638.f_32744.f_5510));
}

int func_283(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_298(iParam0, 0, 0)) || func_298(iParam0, 1, 0)) || func_298(iParam0, 2, 0)) || func_310(iParam0) != 145) || func_297(iParam0)) || func_296(iParam0)) || func_295(iParam0)) || func_294(iParam0)) || !func_284(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_296(iParam0))
		{
		}
		if (func_296(iParam0))
		{
		}
		if (func_298(iParam0, 0, 0))
		{
		}
		if (func_298(iParam0, 1, 0))
		{
		}
		if (func_298(iParam0, 2, 0))
		{
		}
		if (func_310(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_284(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_285(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return 0;
			break;
	}
	return 1;
}

int func_285(int iParam0, bool bParam1)
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
		if (!func_293())
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
		if ((((!func_292() && !func_291()) && !func_290()) && !func_289()) && !func_293())
		{
			return 0;
		}
	}
	if ((iParam0 == 37348240 || iParam0 == 11251904) || iParam0 == 544021352)
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_290())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_288(iParam0))
		{
			return 0;
		}
	}
	if (!func_286(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0)
{
	if (!func_287())
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

int func_287()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_288(int iParam0)
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

int func_289()
{
	return 0;
}

int func_290()
{
	return 1;
}

int func_291()
{
	return 1;
}

int func_292()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_293()
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

int func_294(int iParam0)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == -810318068 && GAMEPLAY::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_285(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_295(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96105[iVar0]))
		{
			if (Global_96105[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96075[iVar0], 0))
			{
				if (Global_96075[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_96075[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_297(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[24]))
	{
		if (iParam0 == Global_75441.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75441.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_298(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_299(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || GAMEPLAY::IS_BIT_SET(Global_111638.f_7224[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_299(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_300(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75441.f_139[iParam0];
}

int func_301(var uParam0, int iParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 19);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 20);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
			iVar0 = 1;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 14);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 28);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 7);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 27);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 24);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = -1008861746;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 10);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 11);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 9);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = 1394036463;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 22);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_293())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_293())
			{
				uParam0->f_4 = -613725916;
			}
			else
			{
				uParam0->f_4 = -150975354;
			}
			uParam0->f_13 = 401;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 13);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 2);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = -1269889662;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
			uParam0->f_13 = 308;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 0);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 21);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 30);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 23);
			GAMEPLAY::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111638.f_32744.f_69[uParam0->f_14].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165) || uParam0->f_4 == 621481054) || uParam0->f_4 == -1214505995) || uParam0->f_4 == 1981688531) || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_311(Global_111638.f_32744.f_1864[uParam0->f_14], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_32744.f_1864[uParam0->f_14] };
		}
		if (Global_111638.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111638.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_311(Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[1][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[1][uParam0->f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_311(Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111638.f_2358.f_539.f_3588[0][uParam0->f_12] };
			uParam0->f_3 = Global_111638.f_2358.f_539.f_3609[0][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_302(int iParam0, int iParam1)
{
	if (func_39(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_303(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2)
{
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1008861746;
			if (Global_111638.f_9080.f_99.f_58[128] && !Global_111638.f_9080.f_99.f_58[131])
			{
				iVar0 = -1883869285;
			}
			switch (iVar0)
			{
				case -1008861746:
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case -1883869285:
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = -1435919434;
			switch (iVar0)
			{
				case -1435919434:
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111638.f_9080.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = 736902334;
			}
			else if (iParam2 == 2)
			{
				iVar0 = -2140431165;
			}
			else if (Global_111638.f_9080.f_99.f_58[118])
			{
				iVar0 = -2140431165;
			}
			else
			{
				iVar0 = 736902334;
			}
			switch (iVar0)
			{
				case -2140431165:
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case 736902334:
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_304(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_301(&(Global_75441.f_555[0]), iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 10))
		{
			func_309(iParam0);
			func_308(uParam1, &(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]));
			if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 11))
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { Param2 };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = uParam5;
			}
			else
			{
				Global_111638.f_32744.f_1864[Global_75441.f_555[0].f_14] = { 0f, 0f, 0f };
				Global_111638.f_32744.f_1934[Global_75441.f_555[0].f_14] = -1f;
			}
			Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] = iParam6 + 1;
			func_305(iParam0, 1);
		}
	}
}

void func_305(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_307(iParam0, 0))
		{
			func_306(iParam0, 1, 0);
			func_306(iParam0, 2, 0);
			func_306(iParam0, 3, 0);
			func_306(iParam0, 4, 0);
			func_306(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_306(iParam0, 0, 0);
	}
}

void func_306(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_307(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_111638.f_32744[iParam0], iParam1);
}

void func_308(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_309(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_301(&(Global_75441.f_555[0]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_75441.f_139[iParam0]));
			Global_75441.f_139[iParam0] = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 13))
		{
			func_305(iParam0, 0);
		}
	}
}

int func_310(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96075[iVar0]))
		{
			if (Global_96075[iVar0] == iParam0)
			{
				return Global_96085[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_311(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_312(int iParam0, var uParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_316(uParam1);
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
		if (uParam1->f_65 == -1 && !func_315(uParam1->f_66))
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
		func_314(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_313(iVar0 + 1));
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

int func_313(int iParam0)
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

int func_314(int iParam0, var uParam1, var uParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
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
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
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
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_315(int iParam0)
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

void func_316(var uParam0)
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

void func_317(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_309(iParam0);
	func_305(iParam0, 0);
}

float func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_319(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_320(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_321(var uParam0)
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_12[0] = 0;
	uParam0->f_12[1] = 0;
	uParam0->f_12[2] = 0;
	uParam0->f_12[3] = 0;
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_3[0] = 361;
	uParam0->f_3[1] = 361;
	uParam0->f_3[2] = 361;
	uParam0->f_3[3] = 361;
	uParam0->f_3[4] = 361;
	uParam0->f_3[5] = 361;
	uParam0->f_3[6] = 361;
	uParam0->f_3[7] = 361;
	uParam0->f_21[0] = 0;
	uParam0->f_21[1] = 0;
	uParam0->f_21[2] = 0;
	uParam0->f_21[3] = 0;
}

int func_322(var uParam0, int iParam1, int iParam2)
{
	if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_5 = GAMEPLAY::GET_GAME_TIMER();
	if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) > iParam2)
	{
		if (GAMEPLAY::IS_BIT_SET(uParam0->f_2, iParam1) && !GAMEPLAY::IS_BIT_SET(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

int func_323(var uParam0, var uParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, var uParam11, var uParam12)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (func_455(uParam1) >= 0f)
			{
				Param8.z = func_49(Param8.z, -8.909f, 8.909f);
				uParam11->f_2 = (uParam11->f_2 + Param8.z);
				Var0 = { func_457(Param5, Param8.z) };
				CAM::SET_CAM_PARAMS(func_427(uParam0, 0), Param2 + Var0, *uParam11, *uParam12, 300, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(func_427(uParam0, 1), func_427(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_455(uParam1) >= 0f)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(0, 1, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_455(uParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_324(int iParam0, var uParam1, var uParam2)
{
	uVar3 = func_427(uParam1, 0);
	uVar4 = func_427(uParam1, 1);
	CAM::SET_CAM_NEAR_CLIP(uVar4, func_325());
	Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, -0.3f, -7.7824f) };
	CAM::SET_CAM_COORD(uVar4, Var5);
	Var0 = { CAM::GET_CAM_ROT(uVar3, 2) };
	Var0.x = 0f;
	CAM::SET_CAM_ROT(uVar4, Var0, 2);
	CAM::SET_CAM_FOV(uVar4, CAM::GET_CAM_FOV(uVar3));
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_365(uParam2);
}

float func_325()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_326(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, struct<3> Param6, struct<3> Param9)
{
	uVar0 = func_427(uParam1, 0);
	Var1 = { func_329(uParam2) };
	if (CONTROLS::IS_LOOK_INVERTED())
	{
		Var1.y = (Var1.y * -1f);
	}
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((Var1.x * GAMEPLAY::GET_FRAME_TIME()) * 100f));
		*uParam5 = (*uParam5 + ((Var1.y * GAMEPLAY::GET_FRAME_TIME()) * 100f));
		if (GAMEPLAY::ABSF(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * GAMEPLAY::GET_FRAME_TIME()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (GAMEPLAY::ABSF(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * GAMEPLAY::GET_FRAME_TIME()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-Var1.x * 130f);
		*uParam5 = (Var1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * GAMEPLAY::GET_FRAME_TIME()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * GAMEPLAY::GET_FRAME_TIME()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	Var4 = { func_457(Param9, uParam4->f_2) };
	CAM::SET_CAM_COORD(uVar0, Param6 + Var4);
	CAM::SET_CAM_ROT(uVar0, (-33f + *uParam4), 0f, ((-88.515f + func_458(uParam0)) + uParam4->f_2), 2);
	CAM::SET_CAM_NEAR_CLIP(uVar0, func_325());
	if (!CAM::IS_SCREEN_FADED_IN() || !func_456(uParam3))
	{
		func_365(uParam3);
	}
	else
	{
		if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			func_328("BJ_VLOOKHLP");
		}
		if (func_456(uParam3) && func_455(uParam3) > 0.5f)
		{
			if (func_327(uParam2, 1))
			{
				func_452(uParam3);
				CAM::DETACH_CAM(uVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_327(var uParam0, int iParam1)
{
	return (GAMEPLAY::IS_BIT_SET(uParam0->f_2, iParam1) && !GAMEPLAY::IS_BIT_SET(uParam0->f_3, iParam1));
}

void func_328(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

Vector3 func_329(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_330(int iParam0, struct<3> Param1)
{
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()))));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, Param1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

bool func_331(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_332(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_333(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_213(uParam0, 20, 0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_213(uParam0, 20, 0);
	}
}

void func_334(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

struct<4> func_335(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_336(var uParam0, float fParam1)
{
	if (!func_456(uParam0))
	{
		func_42(uParam0, fParam1);
	}
}

void func_337(var uParam0, int iParam1)
{
	if (func_456(uParam0))
	{
		if (func_339(uParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_209(PLAYER::PLAYER_PED_ID(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_338())
	{
		func_336(uParam0, 0f);
	}
}

int func_338()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_339(var uParam0, float fParam1)
{
	if (func_340(uParam0, fParam1))
	{
		func_452(uParam0);
		return 1;
	}
	return 0;
}

int func_340(var uParam0, float fParam1)
{
	if (func_456(uParam0))
	{
		if (func_455(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_341(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != -1569615261) && *uParam0 != -1833087301) && *uParam0 != -72657034) && *uParam0 != 966099553)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -1569615261, -1, 0, 1);
		}
		CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 66, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 67, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 99, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 100, 1);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
}

int func_342(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	Var12 = { func_363(uParam0, *iParam6) };
	bVar37 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar3, &uVar6, &Var9);
	}
	if (bVar37)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			Var27 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, func_364(uParam0)) };
			fVar36 = (Var27.z - Var12.z);
			if (bParam20)
			{
				if (UI::DOES_BLIP_EXIST(*uParam11))
				{
					UI::SET_BLIP_COORDS(*uParam11, Var27);
				}
				else
				{
					*uParam11 = UI::ADD_BLIP_FOR_COORD(Var27);
					UI::SET_BLIP_COLOUR(*uParam11, 5);
					UI::SET_BLIP_SCALE(*uParam11, 1.2f);
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_TGT");
				}
			}
			Var30 = { func_363(uParam0, 0) };
			Var27.z = (Var30.z + fVar36);
			Var12 = { Var27 };
		}
		else if (func_362(uParam0) != 0)
		{
			Var27 = { func_363(uParam0, 0) };
			Var12 = { Var27 };
		}
		else
		{
			Var27 = { Var12 };
		}
		Var18 = { Var9 - Var12 };
		if (func_362(uParam0) == 0)
		{
			GRAPHICS::DRAW_MARKER(6, Var27, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_351(Var27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, Var27, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_351(Var27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, Var27, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(Var27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam7 != -1)
		{
			GRAPHICS::DELETE_CHECKPOINT(*uParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		UI::GET_HUD_COLOUR(134, &uVar39, &uVar40, &uVar41, &uVar42);
		Var18 = { Var9 - Var12 };
		Var15 = { func_363(uParam0, *iParam6 + 1) };
		GRAPHICS::DRAW_MARKER(6, Var12, func_469(Var18), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_351(Var12, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(*uParam4);
				*uParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					GRAPHICS::DELETE_CHECKPOINT(*uParam5);
					*uParam4 = 0;
				}
			}
			*uParam4 = GRAPHICS::CREATE_CHECKPOINT(17, Var12, Var15, 9f, uVar39, uVar40, uVar41, func_351(Var27, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*uParam5 = GRAPHICS::CREATE_CHECKPOINT(17, Var15, func_363(uParam0, *iParam6 + 2), (9f * 0.5f), uVar39, uVar40, uVar41, func_351(Var27, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			GRAPHICS::DRAW_MARKER(6, Var15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_351(Var15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, Var15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_351(Var15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, Var15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(Var15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::DRAW_MARKER(6, Var15, func_469(Var9 - Var15), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_351(Var15, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*uParam4 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam4, uVar39, uVar40, uVar41, func_351(Var12, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*uParam5 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam5, uVar39, uVar40, uVar41, func_351(Var15, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1) || (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2 && !CONTROLS::IS_CONTROL_PRESSED(0, 80)))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var12, &uVar43, &uVar44))
		{
			if (iLocal_582)
			{
				func_349(Var12, uParam15, uParam16, uParam17);
				if (func_456(&uLocal_584))
				{
					func_452(&uLocal_584);
				}
			}
			else if (func_456(&uLocal_584))
			{
				if (func_347(&uLocal_584) > 0.5f)
				{
					func_452(&uLocal_584);
					iLocal_582 = 1;
				}
			}
			else
			{
				func_480(&uLocal_584);
			}
		}
		else if (iLocal_582)
		{
			func_349(Var12, uParam15, uParam16, uParam17);
			if (func_456(&uLocal_584))
			{
				if (func_347(&uLocal_584) > 0.5f)
				{
					func_452(&uLocal_584);
					iLocal_582 = 0;
				}
			}
			else
			{
				func_480(&uLocal_584);
			}
		}
		else if (func_456(&uLocal_584))
		{
			func_452(&uLocal_584);
		}
	}
	else
	{
		iLocal_582 = 0;
	}
	if (func_346(iParam14, uParam18, &iParam1))
	{
		if (UI::DOES_BLIP_EXIST(*uParam11))
		{
			UI::REMOVE_BLIP(uParam11);
		}
		if (UI::DOES_BLIP_EXIST(*uParam12))
		{
			UI::REMOVE_BLIP(uParam12);
		}
		if (!bVar37)
		{
			return 2;
		}
		fVar34 = SYSTEM::SQRT(((Var18.x * Var18.x) + (Var18.y * Var18.y)));
		if (((Var18.z < 5f && Var18.z > -2f) && fVar34 < 15f) || func_260(iParam1, iParam2))
		{
			*uParam10 = func_262(SYSTEM::CEIL(((100f * (15f - fVar34)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_345())
	{
		if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		}
	}
	else if (!bVar37)
	{
		fVar33 = SYSTEM::VMAG2(Var18);
		if (fVar33 < (22f * 22f))
		{
			if (fVar33 < (10f * 10f))
			{
				bVar38 = true;
			}
			else if (func_269(Var0, -Var18 / FtoV(SYSTEM::SQRT(fVar33))) < 0.08f)
			{
				bVar38 = true;
			}
			if (bVar38)
			{
				*uParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				iLocal_583 = 0;
			}
			if (!bVar38 && !iLocal_583)
			{
				iLocal_583 = 1;
			}
		}
		else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 0 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
		{
			if (Var18.z < -22f)
			{
				func_344(iParam13, 0);
				bVar38 = true;
			}
		}
		else
		{
			Var24 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
			Var24.z = 0f;
			Var24 = { func_469(Var24) };
			Var21 = { -Var18.x, -Var18.y, 0f };
			Var21 = { func_469(Var21) };
			fVar35 = ((Var9.z - 32f) + (32f * func_343(Var24, Var21)));
			fVar34 = SYSTEM::SQRT(((Var18.x * Var18.x) + (Var18.y * Var18.y)));
			if ((Var9.z - fVar35) < fVar34)
			{
				fVar35 = (fVar35 - (0.05f * ((fVar35 - Var9.z) + fVar34)));
				if (fVar35 < (Var12.z - 22f))
				{
					func_344(iParam13, 0);
					bVar38 = true;
				}
			}
		}
		if (iLocal_583)
		{
			if (SYSTEM::VMAG2(Var18) >= (22f * 22f))
			{
				*uParam8++;
				func_344(iParam13, 1);
				func_215(func_422(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar38 = true;
				iLocal_583 = 0;
			}
		}
		if (bVar38)
		{
			*iParam6++;
			if (UI::DOES_BLIP_EXIST(*uParam11))
			{
				UI::REMOVE_BLIP(uParam11);
			}
			if (UI::DOES_BLIP_EXIST(*uParam12))
			{
				*uParam11 = *uParam12;
				*uParam12 = 0;
				UI::SET_BLIP_SCALE(*uParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_TGT");
				}
				else
				{
					UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!UI::DOES_BLIP_EXIST(*uParam12))
				{
					*uParam12 = UI::ADD_BLIP_FOR_COORD(func_363(uParam0, *iParam6 + 1));
					UI::SET_BLIP_COLOUR(*uParam12, 5);
					UI::SET_BLIP_SCALE(*uParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam12, "BJ_BLIP_TGT");
					}
					else
					{
						UI::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*uParam12 = 0;
			}
			AI::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), func_363(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_343(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

void func_344(var uParam0, bool bParam1)
{
	*uParam0 = AUDIO::GET_SOUND_ID();
	if (bParam1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_334("BJ_MISSED", 7500, 1);
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

int func_345()
{
	if (((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 50f) && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_346(var uParam0, var uParam1, int iParam2)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!*uParam1)
	{
		iVar1 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
		if (iVar1 != -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == 3 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == -1 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (((ENTITY::DOES_ENTITY_EXIST(*iParam2) && !PED::IS_PED_INJURED(iVar0)) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, *iParam2)));
}

float func_347(var uParam0)
{
	if (func_456(uParam0))
	{
		if (func_348(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_43(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

bool func_348(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

void func_349(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_350(Param0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam5 || (*uParam3 == 0f && *uParam4 == 0f)) || (GAMEPLAY::ABSF((fVar2 - *uParam3)) < 0.04f && GAMEPLAY::ABSF((fVar3 - *uParam4)) < 0.04f))
		{
			GRAPHICS::DRAW_SPRITE("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam5 = fVar4;
	}
	*uParam3 = fVar2;
	*uParam4 = fVar3;
}

void func_350(struct<3> Param0, var uParam3, var uParam4)
{
	if (!func_311(Param0, 0f, 0f, 0f, 0))
	{
		UI::_GET_SCREEN_COORD_FROM_WORLD_COORD(Param0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		Var2.x = (fVar0 - 0.5f);
	}
	else
	{
		Var2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		Var2.y = (fVar1 - 0.5f);
	}
	else
	{
		Var2.y = (0.5f - fVar1);
	}
	Var2.z = 0f;
	func_469(Var2);
	Var2.x = (Var2.x * 0.75f);
	Var2.y = (Var2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + Var2.x);
	}
	else
	{
		fVar0 = (0.5f - Var2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + Var2.y);
	}
	else
	{
		fVar1 = (0.5f - Var2.y);
	}
	*uParam3 = fVar0;
	*uParam4 = fVar1;
}

int func_351(struct<3> Param0, int iParam3, int iParam4)
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

void func_352(var uParam0)
{
	if (func_456(uParam0) && func_455(uParam0) > 7.5f)
	{
		func_452(uParam0);
	}
}

int func_353(var uParam0, int iParam1, var uParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		*uParam2 = 1;
		return 1;
	}
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			return 0;
		}
		else if (!GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(iVar0, 1), &fVar7, 0, 0))
		{
			return 0;
		}
		else if (Var1.z >= (fVar7 + 1.5f))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (!GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var1, &fVar7, 0, 0))
	{
		return 0;
	}
	else if (Var1.z >= (fVar7 + 1.5f))
	{
		return 0;
	}
	Var4 = { func_363(uParam0, 0) };
	if (Var1.z < (Var4.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (Var1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (Var1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (Var1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_467(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_354()
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_355(var uParam0)
{
	return uParam0->f_84;
}

void func_356(int iParam0, bool bParam1)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return;
	}
	Var2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
	fVar8 = VEHICLE::_0x53AF99BAA671CA47(*iParam0);
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, -1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
	AI::OPEN_SEQUENCE_TASK(&uVar0);
	if (!bParam1)
	{
		AI::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	AI::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, Var2 + Vector(5f, 5f, 5f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar8), 786469, 5f, 10f, 1);
	Var5 = { Vector(1000f, 1000f, 1000f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	Var5.z = 200f;
	AI::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, Var2 + Var5, 4, fVar8, 262144, 15f, 10f, 1);
	AI::CLOSE_SEQUENCE_TASK(uVar0);
	AI::CLEAR_PED_TASKS(iVar1);
	AI::TASK_PERFORM_SEQUENCE(iVar1, uVar0);
	AI::CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_357(int iParam0, int iParam1)
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

void func_358(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_412(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		UI::DISPLAY_RADAR(1);
		UI::DISPLAY_HUD(1);
	}
	func_552(23, 0);
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 1131912276:
		case -186537451:
		case 1127861609:
		case -1233807380:
		case -400295096:
		case -140902153:
		case 1672195559:
		case -2140431165:
		case -893578776:
		case -114291515:
		case -891462355:
		case -2128233223:
		case -48031959:
		case 448402357:
		case 301427732:
		case -634879114:
		case -909201658:
		case -34623805:
			return 1;
		
		default:
	}
	return 0;
}

int func_360(var uParam0)
{
	return *uParam0;
}

int func_361(int iParam0)
{
	switch (iParam0)
	{
		case 1030400667:
		case 868868440:
			return 1;
		
		default:
	}
	return 0;
}

int func_362(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_363(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_12[iParam1];
}

Vector3 func_364(var uParam0)
{
	return uParam0->f_6;
}

void func_365(var uParam0)
{
	func_42(uParam0, 0f);
}

int func_366(var uParam0)
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 20) & 63;
}

int func_367(var uParam0)
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 14) & 63;
}

int func_368(var uParam0)
{
	return SYSTEM::SHIFT_RIGHT(uParam0, 9) & 31;
}

void func_369()
{
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_370()
{
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_371(&(Global_1835013.f_73));
	func_371(&(Global_1835013.f_142));
	func_371(&(Global_1835013.f_211));
	func_371(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_131(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_371(var uParam0)
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

bool func_372(var uParam0)
{
	return uParam0->f_83;
}

int func_373(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (CAM::IS_CAM_INTERPOLATING(func_427(uParam3, 1)))
	{
		func_365(uParam5);
	}
	if (!*uParam10)
	{
		if (func_456(uParam7) && func_455(uParam7) >= func_394(uParam0))
		{
			func_356(iParam2, 0);
			func_452(uParam7);
			*uParam10 = 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, 0))
	{
		VEHICLE::SET_HELI_BLADES_SPEED(*iParam2, 0.7f);
	}
	if (func_456(uParam5) && func_455(uParam5) > 0.2f)
	{
		func_452(uParam5);
		func_452(uParam6);
		return 1;
	}
	if (!func_456(uParam6))
	{
		func_480(uParam6);
	}
	else if ((uParam12 && CAM::IS_SCREEN_FADED_IN()) || (func_455(uParam6) > 0.5f && func_327(uParam4, 2)))
	{
		*uParam11 = 1;
		func_452(uParam5);
		func_452(uParam6);
		return 1;
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (func_456(uParam8))
	{
		if (func_460(iParam1) != 0)
		{
			func_452(uParam8);
		}
		else if (func_455(uParam8) > func_420(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_452(uParam8);
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_374();
	}
	else
	{
		func_365(uParam6);
	}
	return 0;
}

void func_374()
{
	iVar6 = Global_111638.f_18962;
	func_375(Var0, 0, 0, 0, 0, iVar6);
}

void func_375(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_389(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_76878 = GAMEPLAY::GET_GAME_TIMER();
					Local_22 = { UI::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + GAMEPLAY::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_389(0, Param0))
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
				iVar12 = func_422();
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
				Var4 = { func_378(Global_76877, Global_76879, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(fVar6, fVar7, 0f, 0.01f);
				UI::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_377(&Var4) > fLocal_26)
					{
						if (UI::IS_HUD_COMPONENT_ACTIVE(15))
						{
							UI::SET_HUD_COMPONENT_POSITION(15, Local_22.x, (Local_22.y + fLocal_25));
							Global_76881 = 1;
						}
					}
				}
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
				if (Global_76880 == 1)
				{
					func_376();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_376();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_376()
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

float func_377(char* sParam0)
{
	UI::_SET_TEXT_ENTRY_FOR_WIDTH(uParam0);
	return UI::_GET_TEXT_SCREEN_WIDTH(1);
}

struct<2> func_378(int iParam0, int iParam1, int iParam2)
{
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_388(iParam0) };
			break;
		
		case 7:
			Var0 = { func_386(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_385(iParam2) };
					break;
				
				case 8:
					Var0 = { func_384(iParam2) };
					break;
				
				case 7:
					Var0 = { func_383(iParam2) };
					break;
				
				case 10:
					Var0 = { func_382(iParam2) };
					break;
				
				case 5:
					Var0 = { func_381(iParam2) };
					break;
				
				case 4:
					Var0 = { func_380(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_379(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_379(int iParam0)
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

struct<2> func_380(int iParam0)
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

struct<2> func_381(int iParam0)
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

struct<2> func_382(int iParam0)
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

struct<2> func_383(int iParam0)
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

struct<2> func_384(int iParam0)
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

struct<2> func_385(int iParam0)
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

struct<2> func_386(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_387(iParam0) };
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

struct<2> func_387(int iParam0)
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

struct<2> func_388(int iParam0)
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

int func_389(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_391(0) || Global_76891) || Global_76880 == 1) || !CAM::IS_SCREEN_FADED_IN())
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
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_32(0)) || func_390(1))
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

bool func_390(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_391(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_392(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_392(int iParam0)
{
	return func_393(iParam0, Global_41431);
}

int func_393(int iParam0, int iParam1)
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

float func_394(var uParam0)
{
	return uParam0->f_80;
}

int func_395(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_396(sParam2, iParam3, 0);
}

int func_396(char* sParam0, int iParam1, bool bParam2)
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
					func_408();
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
		if (func_407(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_406();
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
				func_405();
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
				if (func_404())
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
			if (func_28())
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
			func_403();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_402();
		func_397();
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
		func_408();
	}
	return 0;
}

void func_397()
{
	if (!func_398())
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

int func_398()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_401())
	{
		return 0;
	}
	if (func_399(PLAYER::PLAYER_ID()))
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

bool func_399(int iParam0)
{
	return func_400(iParam0, 20);
}

bool func_400(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_401()
{
	return -1;
}

void func_402()
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

void func_403()
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

int func_404()
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

void func_405()
{
	if (func_246(14))
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
		Global_19486 = func_422();
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

void func_406()
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

bool func_407(int iParam0, int iParam1)
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

void func_408()
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

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

var func_410(var uParam0)
{
	return uParam0->f_4;
}

void func_411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	uVar0 = func_427(uParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !ENTITY::IS_ENTITY_DEAD(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_458(uParam1))), SYSTEM::SIN((-97.4239f + func_458(uParam1)))) };
		*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		Var1 = { func_457(*uParam4, uParam2->f_2) };
		Var7 = { *uParam3 + Var1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_458(uParam1)) };
		*uParam7 = 26f;
		Var4 = { *uParam6 };
		Var4.z = (Var4.z + uParam2->f_2);
		CAM::SET_CAM_COORD(uVar0, Var7);
		CAM::SET_CAM_ROT(uVar0, Var4, 2);
		CAM::SET_CAM_FOV(uVar0, *uParam7);
		CAM::SET_CAM_NEAR_CLIP(uVar0, func_325());
	}
	CAM::SET_CAM_ACTIVE(uVar0, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_412(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_419(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_28())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_418(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_419(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_418(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_416(PLAYER::PLAYER_ID())) && !func_414(PLAYER::PLAYER_ID(), 0)) && !func_413()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_416(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_413()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_414(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_415(-1, 0) == 8;
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

int func_415(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_224();
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

int func_416(int iParam0)
{
	if (func_414(iParam0, 0))
	{
		return 1;
	}
	if (func_417())
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

bool func_417()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_418(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_419(int iParam0)
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

float func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_422()
{
	func_423();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_423()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_36(PLAYER::PLAYER_PED_ID());
			if (func_39(iVar0) && (!func_246(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_39(Global_111638.f_2358.f_539.f_4321))
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

var func_424(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_425(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_426(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_427(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_428(int iParam0, int iParam1, int iParam2)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_27(0);
	func_412(1, 1, iParam2, 0, 0, 0);
	UI::DISPLAY_RADAR(0);
	UI::DISPLAY_HUD(0);
	func_552(23, 1);
}

void func_429(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, var uParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14)
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(func_451(uParam0), func_450(uParam0), 0, 1);
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		if (!func_425(func_363(uParam0, iVar5)))
		{
			*uParam2 = iVar5 + 1;
		}
		else
		{
			iVar5 = 999999;
		}
		iVar5++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 0);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -72657034, 1, 0, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	if (iParam13 == 4)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 320f && Var2.z < 340f) && Var2.x > -103f) && Var2.x < -45f) && Var2.y > -850f) && Var2.y < -787f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, -109.33f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 689.4f && Var2.z < 701.8875f) && Var2.x > 404.6f) && Var2.x < 413.4f) && Var2.y > 5700.6f) && Var2.y < 5711.9f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 145.5732f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 294.5f && Var2.z < 298.9f) && Var2.x > -121.3f) && Var2.x < -116.5f) && Var2.y > -978.1f) && Var2.y < -973.2f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 341.9614f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 182.7f && Var2.z < 202.7f) && Var2.x > -1252.7f) && Var2.x < -1227.9f) && Var2.y > 4525.8f) && Var2.y < 4549.3f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 172.2123f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 230f && Var2.z < 244.5f) && Var2.x > -809.6f) && Var2.x < -747.7f) && Var2.y > 310.6f) && Var2.y < 346.6f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 0.8373f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) };
				if (((((Var2.z > 143.6f && Var2.z < 154.5f) && Var2.x > -777f) && Var2.x < -758.9f) && Var2.y > 4328.3f) && Var2.y < 4344f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 349.2306f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 0);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), -72657034, 1, 0, 0);
	}
	iVar0 = func_460(iParam13);
	if (iVar0 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0) || ENTITY::DOES_ENTITY_EXIST(*iParam3))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam3);
			ENTITY::SET_ENTITY_COORDS(*iParam3, func_467(iParam13), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam3, func_458(uParam0));
		}
		else
		{
			*iParam3 = VEHICLE::CREATE_VEHICLE(iVar0, func_467(iParam13), func_458(uParam0), 1, 1, 0);
		}
		if (func_459(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam8) || ENTITY::IS_ENTITY_DEAD(*iParam8, 0))
			{
				*iParam8 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam3, 26, uParam10, -1, 1, 1);
				PED::SET_PED_HELMET(*iParam8, 0);
				func_449(*iParam8, iParam13);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam8, 1);
			}
			CAM::_0xF4C8CF9E353AFECA("SKY_DIVING_SHAKE", 0.15f);
			func_447(uParam1, *iParam8, func_448(iParam13));
			func_444(uParam1, PLAYER::PLAYER_PED_ID(), func_446());
			VEHICLE::SET_HELI_BLADES_SPEED(*iParam3, 0.7f);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam3, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 0))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 2);
				}
				else if (func_443(PLAYER::PLAYER_PED_ID(), *iParam3) == 1)
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, 2);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0))
			{
				*iParam14 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam14, *iParam3, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*iParam3, "Chassis"));
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam14, 1);
			}
			func_480(uParam12);
		}
		else if (func_359(iVar0))
		{
			func_444(uParam1, PLAYER::PLAYER_PED_ID(), func_446());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam3, -1);
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0, 4096, -1);
			func_480(uParam12);
		}
	}
	else
	{
		func_444(uParam1, PLAYER::PLAYER_PED_ID(), func_446());
		if (func_372(uParam0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_467(iParam13), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_458(uParam0));
			AI::TASK_STAND_STILL(PLAYER::PLAYER_PED_ID(), -1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
			{
				iVar6 = -1;
				while (iVar6 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam3) - 1))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam3, iVar6, 0))
					{
						iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam3, iVar6, 0);
						PED::DELETE_PED(&iVar7);
					}
					iVar6++;
				}
				VEHICLE::DELETE_VEHICLE(iParam3);
			}
		}
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 1);
	if (func_525(uParam0) != 0)
	{
		func_439(uParam0, iParam5, iParam13);
	}
	if (func_438(uParam0) != 0)
	{
		func_435(uParam0, uParam7);
	}
	iVar0 = func_362(uParam0);
	if (func_361(iVar0))
	{
		VEHICLE::DELETE_ALL_TRAINS();
		VEHICLE::SET_RANDOM_TRAINS(0);
	}
	else if (iVar0 != 0)
	{
		GAMEPLAY::CLEAR_AREA(func_363(uParam0, 0), 100f, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam4) && ENTITY::IS_ENTITY_DEAD(*uParam4, 0))
		{
			VEHICLE::DELETE_VEHICLE(uParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
		{
			*iParam4 = VEHICLE::CREATE_VEHICLE(iVar0, func_363(uParam0, 0), func_434(uParam0), 1, 1, 0);
			if (func_433(func_362(uParam0)))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 11);
			}
			else if (func_432(func_362(uParam0)))
			{
				VEHICLE::SET_VEHICLE_EXTRA(*iParam4, 1, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 6);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam4, 2);
				VEHICLE::_0xBC3CCA5844452B06(200f);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam4, 1000);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam4, 1, 1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam4);
			ENTITY::SET_ENTITY_COORDS(*iParam4, func_363(uParam0, 0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam4, func_434(uParam0));
		}
		if (func_433(func_362(uParam0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam6) && ENTITY::IS_ENTITY_DEAD(*uParam6, 0))
			{
				VEHICLE::DELETE_VEHICLE(uParam6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam6))
			{
				*iParam6 = VEHICLE::CREATE_VEHICLE(-1352468814, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam4, 0f, -10f, 0f), func_434(uParam0), 1, 1, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam6, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam6, 2000);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
			{
				VEHICLE::SET_VEHICLE_FIXED(*iParam6);
			}
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(*iParam4))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*iParam4, *iParam6, 1065353216);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam9) && ENTITY::IS_ENTITY_DEAD(*uParam9, 0))
		{
			PED::DELETE_PED(uParam9);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam9))
		{
			*uParam9 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam4, 26, iParam11, -1, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam9, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam9, 1);
			func_431(*uParam9, iParam13);
			if (iParam13 == 0)
			{
				func_430(uParam1, 2, *uParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_HEALTH(*uParam9, ENTITY::GET_ENTITY_MAX_HEALTH(*uParam9), 0);
			PED::RESET_PED_VISIBLE_DAMAGE(*uParam9);
			AI::CLEAR_PED_TASKS(*uParam9);
			if (!PED::IS_PED_IN_VEHICLE(*uParam9, *iParam4, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam4, -1, 0) != *uParam9)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*uParam9, 1))
				{
					PED::_0xF9ACF4A08098EA25(*uParam9, 1);
				}
				PED::SET_PED_INTO_VEHICLE(*uParam9, *iParam4, -1);
			}
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam9, 1, 1);
	}
	if (func_422() == 0)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
	}
	else if (func_422() == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
	}
	else if (func_422() == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
	}
}

void func_430(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_431(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, 0);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::CLEAR_PED_PROP(iParam0, 1);
			break;
		
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 2, 0);
			break;
	}
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case -1030275036:
		case -616331036:
		case 1033245328:
		case 861409633:
		case -1043459709:
		case 400514754:
		case -282946103:
		case 290013743:
		case -488123221:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 1518533038:
		case 850991848:
		case 569305213:
		case 1917016601:
		case 2053223216:
		case -2137348917:
		case 2112052861:
			return 1;
		
		default:
	}
	return 0;
}

var func_434(var uParam0)
{
	return uParam0->f_77;
}

void func_435(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = VEHICLE::CREATE_VEHICLE(func_438(uParam0), func_437(uParam0), func_436(uParam0), 1, 1, 0);
	}
	else if (ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		VEHICLE::DELETE_VEHICLE(uParam1);
		*iParam1 = VEHICLE::CREATE_VEHICLE(func_438(uParam0), func_437(uParam0), func_436(uParam0), 1, 1, 0);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(*iParam1);
	}
}

var func_436(var uParam0)
{
	return uParam0->f_79;
}

Vector3 func_437(var uParam0)
{
	return uParam0->f_9;
}

int func_438(var uParam0)
{
	return uParam0->f_3;
}

void func_439(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!func_320(*uParam1) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0)))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_442(iParam2);
	if (iVar0 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_525(uParam0), func_441(uParam0), func_440(uParam0), 1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_441(uParam0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_440(uParam0));
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, iVar0, -1, 1, 1);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		func_449(iVar1, iParam2);
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_525(uParam0), func_441(uParam0), func_440(uParam0), 1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_441(uParam0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_440(uParam0));
		}
		ENTITY::FREEZE_ENTITY_POSITION(iVar2, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, -1422914553, -1, 1, 1);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		PED::SET_PED_PROP_INDEX(iVar1, 0, 2, 0, 0);
		PED::SET_PED_PROP_INDEX(iVar1, 1, 0, 0, 0);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, 1, 1, 0);
	VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 0.7f);
	AI::CLEAR_PED_TASKS(iVar1);
	AI::TASK_STAND_STILL(iVar1, -1);
	*uParam1 = iVar2;
}

var func_440(var uParam0)
{
	return uParam0->f_78;
}

Vector3 func_441(var uParam0)
{
	return uParam0->f_70;
}

int func_442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1422914553;
		
		case 1:
			return -1422914553;
		
		case 2:
			return -1422914553;
		
		case 3:
			return -1422914553;
		
		case 7:
			return 2097407511;
		
		case 9:
			return -1422914553;
		
		case 10:
			return -1422914553;
		
		case 11:
			return 330231874;
		
		default:
	}
	return 0;
}

int func_443(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_444(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = func_445();
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_445()
{
	if (func_422() == 1)
	{
		return 2;
	}
	if (func_422() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_446()
{
	iVar0 = func_36(PLAYER::PLAYER_PED_ID());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_447(var uParam0, int iParam1, char* sParam2)
{
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_430(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_430(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_448(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_449(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, 0);
			break;
		
		case 11:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 1, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, 0);
			break;
	}
}

Vector3 func_450(var uParam0)
{
	return uParam0->f_67;
}

Vector3 func_451(var uParam0)
{
	return uParam0->f_64;
}

void func_452(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_453(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_459(func_460(iParam3)))
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_467(iParam3));
	}
	if (func_456(uParam1))
	{
		if (func_455(uParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_336(uParam1, 0f);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 0;
		}
	}
	if (func_459(func_460(iParam3)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_420(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar0))
		{
			return 0;
		}
	}
	if (func_454(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam2))
		{
			if (UI::HAS_ADDITIONAL_TEXT_LOADED(2))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("basejumping"))
				{
					if (((STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@") && STREAMING::HAS_ANIM_DICT_LOADED("skydive@freefall")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@chute")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@"))
					{
						if (PED::CAN_CREATE_RANDOM_PED(0))
						{
							if (!bParam5 || CAM::IS_SCREEN_FADED_OUT())
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

int func_454(var uParam0)
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

float func_455(var uParam0)
{
	if (func_456(uParam0))
	{
		if (func_348(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_43(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_456(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

Vector3 func_457(struct<3> Param0, float fParam3)
{
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.y * fVar3));
	Var0.y = ((Param0.x * fVar3) + (Param0.y * fVar4));
	Var0.z = Param0.z;
	return Var0;
}

float func_458(var uParam0)
{
	return uParam0->f_76;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 837858166:
		case 788747387:
		case 745926877:
		case -50547061:
		case 1621617168:
		case 744705981:
		case -1660661558:
		case 353883353:
		case 1044954915:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return -1660661558;
			break;
		
		case 4:
			return -114291515;
			break;
	}
	return 0;
}

void func_461(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_26(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			PED::ADD_SCENARIO_BLOCKING_AREA(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_466(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GAMEPLAY::CLEAR_AREA(func_467(iParam1), 5000f, 1, 0, 0, 0);
	}
	UI::REQUEST_ADDITIONAL_TEXT("BJUMP", 2);
	iVar0 = func_460(iParam1);
	if (iVar0 != 0)
	{
		if (func_459(iVar0))
		{
			STREAMING::REQUEST_ANIM_DICT("veh@helicopter@rps@base");
			*uParam3 = func_442(iParam1);
			func_464(uParam2, *uParam3);
		}
		func_464(uParam2, iVar0);
	}
	if (func_525(uParam0) != 0)
	{
		func_464(uParam2, func_525(uParam0));
		if (func_442(iParam1) != 0)
		{
			func_464(uParam2, func_442(iParam1));
		}
		else
		{
			func_464(uParam2, -1422914553);
		}
	}
	iVar1 = func_362(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_463(iParam1);
		func_464(uParam2, *uParam4);
		func_464(uParam2, iVar1);
		func_464(uParam2, -1352468814);
	}
	if (func_361(iVar1))
	{
		func_464(uParam2, 1030400667);
		func_464(uParam2, 184361638);
		func_464(uParam2, 642617954);
		func_464(uParam2, 920453016);
		func_464(uParam2, 240201337);
		func_464(uParam2, 586013744);
		func_464(uParam2, 868868440);
	}
	if (func_438(uParam0) != 0)
	{
		func_464(uParam2, func_438(uParam0));
	}
	*uParam5 = func_163();
	func_462(uParam2);
	STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@");
	STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("basejumping", 0);
	if (func_420(iParam1, 0) > 0f)
	{
		*uParam6 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (*uParam6)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_460(iParam1) == 0)
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_467(iParam1));
	}
}

void func_462(var uParam0)
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

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -771835772;
		
		case 5:
			return 1498487404;
		
		case 7:
			return -771835772;
		
		default:
	}
	return 0;
}

int func_464(var uParam0, int iParam1)
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
	iVar1 = func_465(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_465(var uParam0)
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

void func_466(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_30926, iParam0);
	StringCopy(&(Global_30927[iParam0]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_30982[iParam0] = iParam1;
}

Vector3 func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_468(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_467(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_467(iParam0), 0, 0, 0, 1);
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_467(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_469(struct<3> Param0)
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

Vector3 func_470(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_471(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	Var0 = { func_479(uParam1) };
	Var3 = { func_478(uParam1) };
	uVar6 = func_477(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_427(uParam0, 0)))
	{
		func_476(uParam0, 0, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var3, 1115815936, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_427(uParam0, 0), Var0);
		CAM::SET_CAM_ROT(func_427(uParam0, 0), Var3, 2);
	}
	CAM::SET_CAM_FOV(func_427(uParam0, 0), uVar6);
	CAM::SET_CAM_ACTIVE(func_427(uParam0, 0), 1);
	if (bParam3)
	{
		Var7 = { Var0 };
		Var7.z = (Var7.z + 8f);
		CAM::SET_CAM_PARAMS(func_427(uParam0, 0), Var7, Var3, fVar6, func_475(iParam2), 1, 1, 2);
	}
	Var0 = { func_474(uParam1) };
	Var3 = { func_473(uParam1) };
	fVar6 = func_472(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_427(uParam0, 1)))
	{
		func_476(uParam0, 1, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var3, 1115815936, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_427(uParam0, 1), Var0);
		CAM::SET_CAM_ROT(func_427(uParam0, 1), Var3, 2);
	}
	CAM::SET_CAM_FOV(func_427(uParam0, 1), fVar6);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(func_427(uParam0, 1), func_427(uParam0, 0), func_475(iParam2), 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	CAM::_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
	UI::DISPLAY_RADAR(0);
	UI::DISPLAY_HUD(0);
}

var func_472(var uParam0)
{
	return uParam0->f_82;
}

Vector3 func_473(var uParam0)
{
	return uParam0->f_58;
}

Vector3 func_474(var uParam0)
{
	return uParam0->f_55;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_476(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !CAM::DOES_CAM_EXIST(uParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = uParam2;
}

var func_477(var uParam0)
{
	return uParam0->f_81;
}

Vector3 func_478(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_479(var uParam0)
{
	return uParam0->f_49;
}

void func_480(var uParam0)
{
	if (!func_456(uParam0))
	{
		func_365(uParam0);
	}
}

void func_481(struct<3> Param0, float fParam3, int iParam4)
{
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_301(&(Global_75441.f_555[0]), iVar0))
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_75441.f_555[0], iParam4) <= fParam3)
			{
				func_482(iVar0);
			}
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_301(&(Global_75441.f_555[0]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_75441.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_75441.f_139[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_75441.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_75441.f_139[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_75441.f_139[iParam0]));
			}
		}
		Global_75441[iParam0] = 1;
		if (GAMEPLAY::IS_BIT_SET(Global_75441.f_555[0].f_9, 13))
		{
			if (((((iParam0 == 24 && func_307(iParam0, 0)) && Global_76350.f_66 == 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] != 0) && Global_111638.f_32744.f_1958[Global_75441.f_555[0].f_14] > 3) && (!func_483(0, Global_75441.f_555[0].f_12) || !func_483(1, Global_75441.f_555[0].f_12)))
			{
				func_308(&(Global_111638.f_32744.f_69[Global_75441.f_555[0].f_14]), &Global_76350);
				Global_76428 = Global_111638.f_32744.f_5591;
			}
			func_305(iParam0, 0);
		}
	}
}

int func_483(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_484(&(Global_111638.f_32744.f_5038[iVar0])))
	{
		return 0;
	}
	return func_285(Global_111638.f_32744.f_5038[iVar0][iParam0].f_66, 0);
}

int func_484(var uParam0)
{
	return *uParam0;
}

void func_485(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_331(sParam0) && !UI::IS_HELP_MESSAGE_FADING_OUT())
		{
			UI::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_111638.f_20405.f_145 - 2))
			{
				func_488(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_487((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_486();
			return;
		}
		iVar0++;
	}
}

void func_486()
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
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_111638.f_20405[iVar0].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0].f_12;
			}
		}
		iVar0++;
	}
}

void func_487(int iParam0)
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

void func_488(int iParam0, int iParam1)
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

void func_489(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(1);
		GAMEPLAY::SET_FADE_OUT_AFTER_DEATH(0);
		func_17(1);
		Global_94002 = 1;
	}
	else
	{
		GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(0);
		GAMEPLAY::SET_FADE_OUT_AFTER_DEATH(1);
		func_17(0);
		Global_94002 = 0;
	}
}

void func_490()
{
	func_491(&uLocal_144, 0);
}

void func_491(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_145(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_495(uParam0);
		func_494(uParam0);
		func_119(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_492();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_90(&(Global_1840924.f_49));
	}
	Global_2537071.f_3967 = 0;
}

void func_492()
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
	func_493(&(Global_1835392.f_2780));
	func_90(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_90(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_90(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_493(var uParam0)
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

void func_494(var uParam0)
{
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_90(&(uParam0->f_246.f_3));
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

void func_495(var uParam0)
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

void func_496()
{
	Global_22211.f_5 = 1;
}

void func_497(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_499(func_500(iParam2, 19), "", &(uParam0->f_603), 19))
				{
				}
			}
		}
		if (!func_257(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_499(func_500(iParam2, 20), func_500(iParam2, 19), &(uParam0->f_603), 20))
				{
				}
			}
		}
		else if (!func_257(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_499(func_500(iParam2, 21), func_500(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_499(func_500(iParam2, 21), func_500(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
		}
		else if (!func_257(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_499(func_500(iParam2, 22), func_500(iParam2, 21), &(uParam0->f_603), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 23))
		{
			func_498(func_500(iParam2, 22), &(uParam0->f_603), 23);
		}
		else if (!func_257(uParam0, 23) && !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			AUDIO::STOP_AUDIO_SCENES();
		}
	}
}

void func_498(char* sParam0, var uParam1, int iParam2)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam1, iParam2))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
		GAMEPLAY::SET_BIT(uParam1, iParam2);
	}
}

int func_499(char* sParam0, char* sParam1, var uParam2, int iParam3)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
		{
			AUDIO::STOP_AUDIO_SCENE(sParam1);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam3))
	{
		if (AUDIO::START_AUDIO_SCENE(sParam0))
		{
			GAMEPLAY::SET_BIT(uParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_500(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_459(func_460(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_359(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_501(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_257(uParam0, 15))
		{
			if (iParam1 >= 4 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_503(func_504(11), &(uParam0->f_603), 11))
				{
					func_502(func_504(15), &(uParam0->f_603), 15);
				}
			}
		}
		else if (!func_257(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_503(func_504(12), &(uParam0->f_603), 12))
				{
					func_502(func_504(16), &(uParam0->f_603), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_503(func_504(12), &(uParam0->f_603), 12))
				{
					func_502(func_504(16), &(uParam0->f_603), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_257(uParam0, 17))
		{
			if (func_503(func_504(13), &(uParam0->f_603), 13))
			{
				func_502(func_504(17), &(uParam0->f_603), 17);
			}
		}
	}
}

int func_502(char* sParam0, var uParam1, int iParam2)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
			{
				GAMEPLAY::SET_BIT(uParam1, iParam2);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_503(char* sParam0, var uParam1, int iParam2)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			GAMEPLAY::SET_BIT(uParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_504(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_505(var uParam0)
{
	CONTROLS::_DISABLE_INPUT_GROUP(0);
	CONTROLS::_DISABLE_INPUT_GROUP(2);
	func_512(&uVar3, &uVar4, &uVar5, &uVar6, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), CONTROLS::_IS_INPUT_DISABLED(2));
	Var0 = (SYSTEM::TO_FLOAT(uVar5) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(uVar6) / -128f);
	func_509(uParam0, Var0, Var0.f_1);
	func_508(uParam0);
	if (CONTROLS::IS_CONTROL_PRESSED(2, 224))
	{
		func_507(uParam0, 0, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 22) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 22))
	{
		func_507(uParam0, 1, 1);
	}
	if (func_506())
	{
		func_507(uParam0, 2, 1);
	}
	if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 22))
	{
		func_507(uParam0, 3, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 216))
	{
		func_507(uParam0, 4, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 215) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 200))
	{
		func_507(uParam0, 5, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
	{
		func_507(uParam0, 6, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 202))
	{
		func_507(uParam0, 7, 1);
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 211))
	{
		func_507(uParam0, 8, 1);
	}
}

int func_506()
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

void func_507(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_2), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_2), iParam1);
	}
}

void func_508(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	func_511(uParam0, uParam1);
	func_510(uParam0, uParam2);
}

void func_510(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_511(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_512(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = CONTROLS::GET_CONTROL_NORMAL(0, 218);
			fVar1 = CONTROLS::GET_CONTROL_NORMAL(0, 219);
			fVar2 = CONTROLS::GET_CONTROL_NORMAL(0, 220);
			fVar3 = CONTROLS::GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = CONTROLS::_0x5B84D09CEC5209C5(0, 218);
		fVar1 = CONTROLS::_0x5B84D09CEC5209C5(0, 219);
		fVar2 = CONTROLS::_0x5B84D09CEC5209C5(0, 220);
		fVar3 = CONTROLS::_0x5B84D09CEC5209C5(0, 221);
	}
	else
	{
		fVar0 = CONTROLS::_0x4F8A26A890FD62FB(0, 218);
		fVar1 = CONTROLS::_0x4F8A26A890FD62FB(0, 219);
		fVar2 = CONTROLS::_0x4F8A26A890FD62FB(0, 220);
		fVar3 = CONTROLS::_0x4F8A26A890FD62FB(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_513()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 85, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 12, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 13, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 14, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 15, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 16, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 17, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 50, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 53, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 54, 1);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

var func_514()
{
	func_524(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_523(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_522(&uVar0, TIME::GET_CLOCK_HOURS());
	func_517(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_516(&uVar0, TIME::GET_CLOCK_MONTH());
	func_515(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_515(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_517(var uParam0, int iParam1)
{
	iVar0 = func_521(*uParam0);
	iVar1 = func_519(*uParam0);
	if (iParam1 < 1 || iParam1 > func_518(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_518(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_519(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_520(GAMEPLAY::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_520(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_521(var uParam0)
{
	return uParam0 & 15;
}

void func_522(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_523(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_524(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_525(var uParam0)
{
	return uParam0->f_2;
}

void func_526(var uParam0, int iParam1)
{
	iVar0 = func_36(PLAYER::PLAYER_PED_ID());
	switch (iParam1)
	{
		case 0:
			func_551(uParam0, 125);
			func_550(uParam0, 400514754);
			func_549(uParam0, 41.0737f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_540(uParam0, 317.8872f);
			func_539(uParam0, 0f, -2f, 0f);
			func_538(uParam0, "BJ_01P");
			func_536(uParam0, func_537(0));
			func_535(uParam0, func_470(0));
			func_534(uParam0, 53.4142f);
			func_533(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_532(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_531(uParam0, 39.6124f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_551(uParam0, 126);
			func_550(uParam0, 0);
			func_549(uParam0, 10.5f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_541(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_541(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_541(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_02P");
			func_536(uParam0, func_537(1));
			func_535(uParam0, func_470(1));
			func_534(uParam0, 52.5984f);
			func_533(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_532(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_531(uParam0, 41.3305f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_551(uParam0, 127);
			func_550(uParam0, 0);
			func_549(uParam0, 289.2623f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_541(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_541(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_541(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_541(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_03P");
			func_536(uParam0, func_537(2));
			func_535(uParam0, func_470(2));
			func_534(uParam0, 31.9702f);
			func_533(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_532(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_531(uParam0, 50.8804f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_551(uParam0, 128);
			func_550(uParam0, 0);
			func_549(uParam0, 60.1427f);
			func_548(uParam0, 744705981);
			func_547(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_546(uParam0, 119.8889f);
			func_545(uParam0, 5f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_541(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_541(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_541(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_541(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_04F");
			}
			else
			{
				func_538(uParam0, "BJ_04T");
			}
			func_536(uParam0, func_537(3));
			func_535(uParam0, func_470(3));
			func_534(uParam0, 44.3626f);
			func_533(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_532(uParam0, -5.0705f, 0f, 20.8267f);
			func_531(uParam0, 43.8549f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_551(uParam0, 129);
			func_550(uParam0, 0);
			func_549(uParam0, 1.8891f);
			func_548(uParam0, 1044954915);
			func_547(uParam0, -75.3f, -823.9f, 329.2f);
			func_546(uParam0, 150f);
			func_545(uParam0, 4f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_05F");
			}
			else
			{
				func_538(uParam0, "BJ_05T");
			}
			func_536(uParam0, func_537(4));
			func_535(uParam0, func_470(4));
			func_534(uParam0, 26.7726f);
			func_533(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_532(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_531(uParam0, 30.0131f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_551(uParam0, 130);
			func_550(uParam0, 1518533038);
			func_549(uParam0, 358.9586f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_540(uParam0, -18.6f);
			func_539(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_06F");
			}
			else
			{
				func_538(uParam0, "BJ_06T");
			}
			func_536(uParam0, func_537(5));
			func_535(uParam0, func_470(5));
			func_534(uParam0, 55.7667f);
			func_533(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_532(uParam0, -7.6574f, 0f, 0.8528f);
			func_531(uParam0, 60f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_551(uParam0, 131);
			func_550(uParam0, 0);
			func_549(uParam0, 164.6178f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, -2128233223);
			func_543(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_542(uParam0, 87.84f);
			func_541(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_541(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_541(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_07F");
			}
			else
			{
				func_538(uParam0, "BJ_07T");
			}
			func_536(uParam0, func_537(6));
			func_535(uParam0, func_470(6));
			func_534(uParam0, 47.1789f);
			func_533(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_532(uParam0, -13.6409f, 0f, 172.0553f);
			func_531(uParam0, 47.1789f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_551(uParam0, 132);
			func_550(uParam0, 1030400667);
			func_549(uParam0, 112.6f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_540(uParam0, 10.8894f);
			func_539(uParam0, 0f, -20f, 4f);
			func_538(uParam0, "BJ_08P");
			func_536(uParam0, func_537(7));
			func_535(uParam0, func_470(7));
			func_534(uParam0, 24.3623f);
			func_533(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_532(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_531(uParam0, 37.0424f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_551(uParam0, 133);
			func_550(uParam0, 0);
			func_549(uParam0, 104.207f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_09F");
			}
			else
			{
				func_538(uParam0, "BJ_09T");
			}
			func_536(uParam0, func_537(8));
			func_535(uParam0, func_470(8));
			func_534(uParam0, 50f);
			func_533(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_532(uParam0, -19.7458f, 0f, 116.6405f);
			func_531(uParam0, 55.2882f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_551(uParam0, 134);
			func_550(uParam0, 0);
			func_549(uParam0, 329.4791f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, -2128233223);
			func_543(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_542(uParam0, -89.36f);
			func_541(uParam0, 0, -1200f, 3616f, 964f);
			func_541(uParam0, 1, -1240f, 3307f, 854f);
			func_541(uParam0, 2, -1552f, 3456f, 655f);
			func_541(uParam0, 3, -1616f, 3808f, 505f);
			func_541(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_541(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_541(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_541(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_10P");
			func_536(uParam0, func_537(9));
			func_535(uParam0, func_470(9));
			func_534(uParam0, 31.7648f);
			func_533(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_532(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_531(uParam0, 39.6786f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_551(uParam0, 135);
			func_550(uParam0, 0);
			func_549(uParam0, 0f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 0);
			func_543(uParam0, 0f, 0f, 0f);
			func_542(uParam0, 0f);
			func_541(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_541(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_541(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_541(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_541(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_541(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_541(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_541(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_541(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_541(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_11P");
			func_536(uParam0, func_537(10));
			func_535(uParam0, func_470(10));
			func_534(uParam0, 27.2187f);
			func_533(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_532(uParam0, -54.7868f, 0f, -90.128f);
			func_531(uParam0, 35.5634f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_551(uParam0, 136);
			func_550(uParam0, 0);
			func_549(uParam0, 24.92f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 788045382);
			func_543(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_542(uParam0, 130.39f);
			func_541(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_541(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_541(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_541(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_541(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_541(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_541(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_541(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_541(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_541(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_541(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, "BJ_12P");
			func_536(uParam0, func_537(11));
			func_535(uParam0, func_470(11));
			func_534(uParam0, 18.9374f);
			func_533(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_532(uParam0, -54.5827f, 0f, -2.0463f);
			func_531(uParam0, 56.4495f);
			func_530(uParam0, 0);
			func_529(uParam0, 0);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_551(uParam0, 137);
			func_550(uParam0, 0);
			func_549(uParam0, 359.2885f);
			func_548(uParam0, 0);
			func_547(uParam0, 0f, 0f, 0f);
			func_546(uParam0, 0f);
			func_545(uParam0, 0f);
			func_544(uParam0, 788045382);
			func_543(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_542(uParam0, 104.35f);
			func_541(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_541(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_540(uParam0, 0f);
			func_539(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_538(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_538(uParam0, "BJ_13F");
			}
			else
			{
				func_538(uParam0, "BJ_13T");
			}
			func_536(uParam0, func_537(12));
			func_535(uParam0, func_470(12));
			func_534(uParam0, 48.3921f);
			func_533(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_532(uParam0, -18.0357f, 0f, 6.0212f);
			func_531(uParam0, 48.3921f);
			func_530(uParam0, 0);
			func_529(uParam0, 1);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_527(var uParam0, struct<3> Param1)
{
	uParam0->f_67 = { Param1 };
}

void func_528(var uParam0, struct<3> Param1)
{
	uParam0->f_64 = { Param1 };
}

void func_529(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

void func_530(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_531(var uParam0, float fParam1)
{
	uParam0->f_82 = fParam1;
}

void func_532(var uParam0, struct<3> Param1)
{
	uParam0->f_58 = { Param1 };
}

void func_533(var uParam0, struct<3> Param1)
{
	uParam0->f_55 = { Param1 };
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_81 = fParam1;
}

void func_535(var uParam0, struct<3> Param1)
{
	uParam0->f_52 = { Param1 };
}

void func_536(var uParam0, struct<3> Param1)
{
	uParam0->f_49 = { Param1 };
}

Vector3 func_537(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_538(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_539(var uParam0, struct<3> Param1)
{
	uParam0->f_6 = { Param1 };
}

void func_540(var uParam0, float fParam1)
{
	uParam0->f_77 = fParam1;
}

void func_541(var uParam0, int iParam1, struct<3> Param2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_12[iParam1] = { Param2 };
}

void func_542(var uParam0, float fParam1)
{
	uParam0->f_79 = fParam1;
}

void func_543(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_545(var uParam0, float fParam1)
{
	uParam0->f_80 = fParam1;
}

void func_546(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_547(var uParam0, struct<3> Param1)
{
	uParam0->f_70 = { Param1 };
}

void func_548(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_549(var uParam0, float fParam1)
{
	uParam0->f_76 = fParam1;
}

void func_550(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552(int iParam0, bool bParam1)
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

void func_553(int iParam0)
{
	func_376();
	Global_76877 = iParam0;
	Global_76876 = 0;
	Global_76879 = 3;
}

void func_554(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, var uParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, var uParam13, var uParam14, int iParam15, var uParam16, bool bParam17)
{
	func_370();
	func_369();
	func_490();
	func_560(uParam1);
	func_552(23, 0);
	func_559(*uParam1);
	VEHICLE::_0xE30524E1871F481D(*uParam16);
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
	AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_SKYDIVE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENES();
	uParam11 = uParam11;
	Global_94001 = 0;
	Global_94002 = 0;
	Global_94003 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	GAMEPLAY::SET_FADE_OUT_AFTER_DEATH(1);
	GAMEPLAY::_DISABLE_AUTOMATIC_RESPAWN(0);
	GAMEPLAY::IGNORE_NEXT_RESTART(0);
	while (CAM::IS_SCREEN_FADING_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	if (UI::DOES_BLIP_EXIST(uParam13))
	{
		UI::REMOVE_BLIP(&uParam13);
	}
	if (UI::DOES_BLIP_EXIST(uParam14))
	{
		UI::REMOVE_BLIP(&uParam14);
	}
	func_376();
	func_26(0);
	PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER::PLAYER_ID(), 0);
	func_558(1, 1);
	if (func_425(func_451(uParam0)))
	{
	}
	else
	{
		VEHICLE::_0x0A436B8643716D14();
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	func_556(uParam7);
	func_277();
	UI::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	GRAPHICS::_0x6DDBF9DFFC4AC080(0);
	func_212(0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (iParam15 == 5)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 146, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		if (!bParam17)
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), -72657034);
		}
		PED::SET_PED_LOD_MULTIPLIER(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam10)[iVar1]) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[iVar1], 0))
		{
			AI::CLEAR_PED_TASKS((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam6) && *uParam6 != PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(*uParam6, 0))
	{
		VEHICLE::SET_PLAYERS_LAST_VEHICLE(*uParam6);
		func_280(*uParam6, func_319(iParam15), func_318(iParam15), 24, 0);
	}
	if (!PED::IS_PED_INJURED(*uParam8))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam8))
		{
			PED::DELETE_PED(uParam8);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam8);
		}
	}
	if (!PED::IS_PED_INJURED(*uParam9))
	{
		AI::CLEAR_PED_TASKS(*uParam9);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam9, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (func_459(func_460(iParam15)))
		{
			if ((!ENTITY::IS_ENTITY_DEAD(*uParam2, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam2, 0))
			{
				PED::_0xF9ACF4A08098EA25(PLAYER::PLAYER_PED_ID(), 1);
			}
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*uParam2))
			{
				VEHICLE::DELETE_VEHICLE(uParam2);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		if (func_361(func_362(uParam0)))
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uParam3, 0);
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4) && !ENTITY::IS_ENTITY_DEAD(*uParam4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam4, -1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		VEHICLE::DELETE_VEHICLE(uParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*uParam5)[iVar2], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*uParam5)[iVar2], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam5)[iVar2], 0, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	UI::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	UI::DISPLAY_RADAR(1);
	UI::DISPLAY_HUD(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	func_555();
	SCRIPT::SET_NO_LOADING_SCREEN(0);
	Global_111638.f_18962 = -1;
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_555()
{
	Global_22211.f_5 = 0;
}

void func_556(var uParam0)
{
	func_557(uParam0, 0);
	func_557(uParam0, 1);
	func_557(uParam0, 2);
}

void func_557(var uParam0, int iParam1)
{
	if (uParam0[iParam1]->f_7 == 1)
	{
		uParam0[iParam1]->f_7 = 0;
	}
}

void func_558(int iParam0, bool bParam1)
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

void func_559(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_560(var uParam0)
{
	func_559(*uParam0);
}

