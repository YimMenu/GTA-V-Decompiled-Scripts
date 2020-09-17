void __EntryFunction__()
{
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_56 = { -1511.194f, 436.5252f, 109.7818f };
	Local_59 = { 968.0051f, -127.6078f, 73.3543f };
	Local_65 = { -1034.6f, 4918.6f, 205.9f };
	Local_70 = { 0.5f, 0.1f, 0.56f };
	sLocal_175 = "chassis";
	Local_353 = { 0f, -5f, 0f };
	Local_356 = { 1f, -1f, 0f };
	iLocal_369 = -1745203402;
	iLocal_370 = 2006142190;
	iLocal_371 = 1330042375;
	iLocal_372 = 1032073858;
	iLocal_373 = -96953009;
	StringCopy(&Local_378, "", 24);
	iLocal_384 = -1;
	sLocal_386 = "RANDOM@KIDNAP_GIRL";
	cLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	Local_52 = { ScriptParam_0.f_1[0] };
	fLocal_55 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_140);
				AI::TASK_WANDER_STANDARD(iLocal_140, 1193033728, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 17, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_140, 2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, 0);
				PED::SET_PED_KEEP_TASK(iLocal_140, 1);
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 1);
				AI::TASK_SMART_FLEE_COORD(iLocal_140, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 150f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_140, 1);
			}
		}
		func_255();
	}
	if (func_214(Local_52, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 0);
	func_210();
	iLocal_83 = 0;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_105)
		{
			func_209(1);
			iLocal_105 = 1;
		}
		if (!func_208())
		{
			if (func_207())
			{
				func_255();
			}
		}
		UNK1::_0x208784099002BC30("RE_SN", 0);
		func_206();
		func_205();
		func_203();
		if (!func_208())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_189())
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							iLocal_48 = 1;
						}
						else if (func_177())
						{
							func_255();
						}
						break;
					
					case 1:
						func_176();
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
						if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_140))
						{
							if (!UI::DOES_BLIP_EXIST(uLocal_123))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, 0, 1, 0))
								{
									if (UI::DOES_BLIP_EXIST(uLocal_120))
									{
										UI::REMOVE_BLIP(&uLocal_120);
									}
									if (!UI::DOES_BLIP_EXIST(uLocal_123))
									{
										UI::FLASH_MINIMAP_DISPLAY();
										uLocal_123 = func_175(iLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_155) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_141)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 40f, 40f, 20f, 0, 1, 0))
								{
									SYSTEM::SETTIMERB(0);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, 1);
								func_166(0);
							}
							else if (!iLocal_101)
							{
								if (func_165() == 2)
								{
									if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_52) < 40f && ENTITY::DOES_ENTITY_EXIST(iLocal_155)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_101 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_163();
							func_156();
						}
						break;
				}
			}
			else
			{
				func_255();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 150f, 150f, 50f, 0, 1, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						UNK1::_0xAF66DCEE6609B148();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_142))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_142, iLocal_155, 0))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140) && AI::GET_SCRIPT_TASK_STATUS(iLocal_142, 242628503) == 7)
								{
									AI::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									AI::OPEN_SEQUENCE_TASK(&uLocal_159);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, Local_62, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -859.6284f, 382.7891f, 86.4466f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -703.2946f, 287.229f, 82.6848f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -496.6651f, 246.5268f, 82.0747f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -166.6776f, 250.8786f, 92.4768f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 74.5106f, 236.4861f, 108.1344f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 278.7988f, 161.9029f, 103.446f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 425.6758f, 108.9366f, 99.4329f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 729.2792f, -19.616f, 81.9823f, 50f, 0, 0, 786469, 7f, 15f);
									AI::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, Local_59, 50f, 0, 0, 786469, 7f, 15f);
									AI::CLOSE_SEQUENCE_TASK(uLocal_159);
									AI::TASK_PERFORM_SEQUENCE(iLocal_142, uLocal_159);
									AI::CLEAR_SEQUENCE_TASK(&uLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_154();
							iLocal_50 = 1;
						}
						break;
					
					case 1:
						UNK1::_0xAF66DCEE6609B148();
						func_153();
						func_124();
						func_123(uLocal_123, iLocal_141, 150f, 1061158912, 0);
						if (((((func_122() || func_121()) || func_119()) || func_118()) || func_117()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_140);
							if (UI::DOES_BLIP_EXIST(uLocal_123))
							{
								if (UI::GET_BLIP_COLOUR(uLocal_123) != 1)
								{
									UI::SET_BLIP_AS_FRIENDLY(uLocal_123, 0);
									UI::SET_BLIP_COLOUR(uLocal_123, 1);
								}
							}
							func_154();
							func_115(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (iLocal_366 || iLocal_81)
						{
							if (UI::DOES_BLIP_EXIST(uLocal_123))
							{
								if (UI::GET_BLIP_COLOUR(uLocal_123) != 1)
								{
									UI::SET_BLIP_AS_FRIENDLY(uLocal_123, 0);
									UI::SET_BLIP_COLOUR(uLocal_123, 1);
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 25f, 25f, 5f, 0, 1, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_155) > 10f)
							{
								if (GAMEPLAY::GET_GAME_TIMER() > iLocal_109 + 5000)
								{
									iLocal_81 = 1;
								}
							}
							else
							{
								iLocal_109 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						break;
					
					case 2:
						UNK1::_0xAF66DCEE6609B148();
						if (!iLocal_83)
						{
							iLocal_83 = 1;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && ENTITY::DOES_ENTITY_EXIST(iLocal_140))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_140, iLocal_155))
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, 0);
									ENTITY::DETACH_ENTITY(iLocal_140, 1, 0);
								}
							}
						}
						if (bLocal_74)
						{
							if (iLocal_76)
							{
								func_114();
							}
							else
							{
								func_113();
							}
						}
						else
						{
							bLocal_77 = true;
						}
						func_163();
						func_110();
						if (bLocal_77)
						{
							if (bLocal_78)
							{
								func_110();
								iLocal_50 = 3;
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, 0);
							}
						}
						break;
					
					case 3:
						if (!UI::DOES_BLIP_EXIST(uLocal_122))
						{
							uLocal_122 = func_175(iLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
									{
										iLocal_163 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_163, 1, 1);
									}
								}
								if (func_109(1, 0, 1) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 2.5f, 2.5f, 2.5f, 0, 1, 1))
								{
									GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, 0);
									func_108();
									func_100(1, 1, 1, 0, 0, 0);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
									UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
									Local_392 = { -1.2232f, -4.3354f, 1.3385f };
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -8f, 1);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 0);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
										Local_392.f_3 = { -22.8598f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_155) - 60f) };
									}
									Local_392.f_6 = { -1.4334f, -4.6656f, 1.3733f };
									Local_392.f_9 = { -22.8598f, 0f, -106.3162f };
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_96(&Local_392, iLocal_155, 1);
									ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, 0, 0, 1);
									Local_110 = { 0f, 0f, 0f };
									Local_113 = { 0f, 0f, 0f };
									uLocal_108 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_113, 2);
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140))
									{
										ENTITY::DETACH_ENTITY(iLocal_140, 1, 0);
									}
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_108, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
									PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_108, Local_110, Local_113, 2);
									AI::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									AI::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_108, sLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
									PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_108, 0);
									PED::SET_PED_KEEP_TASK(iLocal_140, 1);
									uLocal_412 = CAM::CREATE_CAMERA(964613260, 1);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_412, uLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_386);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 1);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 2, 0, 0);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 3, 0, 0);
									Local_110 = { ENTITY::GET_ENTITY_COORDS(iLocal_155, 0) };
									Local_113.z = ENTITY::GET_ENTITY_HEADING(iLocal_155);
									Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -4.7f, 0f) };
									GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), 0, 0);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_155));
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
									if (func_92(iLocal_163))
									{
										func_91();
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
									{
										if (ENTITY::IS_ENTITY_DEAD(iLocal_141, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_141, 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 3f)
										{
											PED::DELETE_PED(&iLocal_141);
										}
										if (ENTITY::IS_ENTITY_DEAD(iLocal_143, 0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_143, 0), ENTITY::GET_ENTITY_COORDS(iLocal_143, 0)) < 3f)
										{
											PED::DELETE_PED(&iLocal_143);
										}
									}
									WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
									CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
									UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
									iLocal_385++;
								}
								break;
							
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
								{
									iLocal_385++;
								}
								break;
							
							case 2:
								if (func_165() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_165() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 3:
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_108))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_108) > 0.3746479f && !iLocal_116)
									{
										if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
										{
											GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
											AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
											iLocal_116 = 1;
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_108) > 0.4f)
									{
										iLocal_385++;
									}
								}
								break;
							
							case 5:
								AI::CLEAR_PED_TASKS(iLocal_140);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, 0);
								PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, 1);
								Local_171 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_386, "IG_1_ALT1_EXIT_VAN", Local_110, Local_113, 1f, 2) };
								GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Local_171, &(Local_171.f_2), 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_140, Local_171, 1, 0, 0, 1);
								Local_171 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_386, "IG_1_ALT1_EXIT_VAN", Local_110, Local_113, 1f, 2) };
								ENTITY::SET_ENTITY_HEADING(iLocal_140, Local_171.z);
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_108))
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_108, 1f);
								}
								PED::_0x2208438012482A1A(iLocal_140, 0, 0);
								WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 0);
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										ENTITY::STOP_ENTITY_ANIM(iLocal_155, "IG_1_ALT1_EXIT_VAN", sLocal_386, -8f);
									}
								}
								CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
								if (CAM::DOES_CAM_EXIST(uLocal_412))
								{
									CAM::DESTROY_CAM(uLocal_412, 0);
								}
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
								func_100(0, 1, 1, 0, 0, 0);
								PED::SET_PED_CAN_RAGDOLL(iLocal_140, 1);
								func_88(Local_56);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
							if ((func_86(1000) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_108)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_108) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_108) > 0.4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!UI::DOES_BLIP_EXIST(uLocal_122))
						{
							uLocal_122 = func_175(iLocal_140, 0, 0);
						}
						break;
					
					case 4:
						if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_142, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_142);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_143, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_143))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_141, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_141))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_155, 0)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_155);
							}
						}
						func_63();
						if (UI::DOES_BLIP_EXIST(uLocal_122))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 10f, 10f, 10f, 0, 1, 0))
							{
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									if (AI::GET_SCRIPT_TASK_STATUS(iLocal_140, 474215631) != 7)
									{
										AI::CLEAR_PED_TASKS(iLocal_140);
									}
									AI::TASK_CLEAR_LOOK_AT(iLocal_140);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_140, 0);
									UI::REMOVE_BLIP(&uLocal_122);
									if (UI::DOES_BLIP_EXIST(uLocal_120))
									{
										UI::REMOVE_BLIP(&uLocal_120);
									}
									func_58();
									uLocal_120 = func_57(Local_56, 1);
								}
							}
						}
						else if (UI::DOES_BLIP_EXIST(uLocal_120))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_56, Global_19, 1, 1, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && ENTITY::IS_ENTITY_UPRIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1119092736))
									{
										iLocal_50 = 6;
										func_56();
										UI::REMOVE_BLIP(&uLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_56();
									UI::REMOVE_BLIP(&uLocal_120);
								}
							}
							else
							{
								if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
								{
									func_56();
									UI::REMOVE_BLIP(&uLocal_120);
									if (!UI::DOES_BLIP_EXIST(uLocal_122))
									{
										uLocal_122 = func_54(iLocal_140, 0, 145);
									}
								}
								if (!iLocal_73 && !iLocal_75)
								{
									func_51();
									iLocal_69 = GAMEPLAY::GET_GAME_TIMER();
								}
								else if (!iLocal_75)
								{
									if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_69) > 5000)
									{
										iLocal_69 = (GAMEPLAY::GET_GAME_TIMER() - 5000);
									}
									func_48();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_47(iLocal_144[iVar4]) || func_47(iLocal_147[iVar4])) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_56) < 400f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_65) < 400f)
										{
											if (UI::DOES_BLIP_EXIST(uLocal_120))
											{
												UI::REMOVE_BLIP(&uLocal_120);
											}
											func_56();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_45();
											iLocal_75 = 0;
											if (!PED::IS_PED_INJURED(iLocal_144[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar4], 3);
											}
											if (!PED::IS_PED_INJURED(iLocal_147[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_163();
						if (func_44())
						{
							PED::DELETE_PED(&iLocal_140);
							func_13();
						}
						break;
					
					case 5:
						if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						func_163();
						func_12();
						func_48();
						if (!iLocal_367)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
								{
									iLocal_367 = 1;
									iLocal_119 = GAMEPLAY::GET_GAME_TIMER();
								}
							}
							else
							{
								iLocal_367 = 1;
							}
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_119) > 2000 && !func_90())
						{
							if (!iLocal_99)
							{
								if (func_11() && func_10() < 30f)
								{
									if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_144[0]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
										{
											AI::TASK_DRIVE_BY(iLocal_140, iLocal_144[0], 0, 0f, 0f, 0f, 50f, 90, 0, 1566631136);
										}
										iLocal_99 = 1;
									}
								}
							}
							else if (!iLocal_100)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
								{
									if (PED::IS_PED_DOING_DRIVEBY(iLocal_140))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							iVar6 = 0;
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar5]) && !PED::IS_PED_INJURED(iLocal_144[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar5], 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0) && PED::IS_PED_IN_VEHICLE(iLocal_144[iVar5], iLocal_156[iVar5], 0))
								{
									if (UI::DOES_BLIP_EXIST(uLocal_125[iVar5]))
									{
										UI::REMOVE_BLIP(&(uLocal_125[iVar5]));
									}
									iVar6 = 1;
								}
								if (!UI::DOES_BLIP_EXIST(uLocal_125[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_144[iVar5], 0))
								{
									uLocal_125[iVar5] = func_54(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (UI::DOES_BLIP_EXIST(uLocal_125[iVar5]))
							{
								UI::REMOVE_BLIP(&(uLocal_125[iVar5]));
							}
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar5]) && !PED::IS_PED_INJURED(iLocal_147[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar5], 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0) && PED::IS_PED_IN_VEHICLE(iLocal_147[iVar5], iLocal_156[iVar5], 0))
								{
									if (UI::DOES_BLIP_EXIST(uLocal_128[iVar5]))
									{
										UI::REMOVE_BLIP(&(uLocal_128[iVar5]));
									}
									iVar6 = 1;
								}
								if (!UI::DOES_BLIP_EXIST(uLocal_128[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_147[iVar5], 0))
								{
									uLocal_128[iVar5] = func_54(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (UI::DOES_BLIP_EXIST(uLocal_128[iVar5]))
							{
								UI::REMOVE_BLIP(&(uLocal_128[iVar5]));
							}
							func_7(iVar5, (iVar6 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], 0)));
							iVar5++;
						}
						if (func_6())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iLocal_85], 0))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_156[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_144[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_144[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_147[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_147[iLocal_85]));
								}
								if (UI::DOES_BLIP_EXIST(uLocal_125[iLocal_85]))
								{
									UI::REMOVE_BLIP(&(uLocal_125[iLocal_85]));
								}
								if (UI::DOES_BLIP_EXIST(uLocal_128[iLocal_85]))
								{
									UI::REMOVE_BLIP(&(uLocal_128[iLocal_85]));
								}
								if (UI::DOES_BLIP_EXIST(uLocal_131[iLocal_85]))
								{
									UI::REMOVE_BLIP(&(uLocal_131[iLocal_85]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
								iLocal_85++;
							}
							func_58();
							uLocal_120 = func_57(Local_56, 1);
							func_5(-1);
							iLocal_75 = 1;
							AI::CLEAR_PED_TASKS(iLocal_140);
							if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							}
							iLocal_50 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_13();
						}
						break;
				}
				if (UI::DOES_BLIP_EXIST(uLocal_120))
				{
					UI::_0x75A16C3DA34F1245(uLocal_120, iLocal_83);
				}
				if (UI::DOES_BLIP_EXIST(uLocal_121))
				{
					UI::_0x75A16C3DA34F1245(uLocal_121, iLocal_83);
				}
				if (UI::DOES_BLIP_EXIST(uLocal_122))
				{
					UI::_0x75A16C3DA34F1245(uLocal_122, iLocal_83);
				}
				if (UI::DOES_BLIP_EXIST(uLocal_123))
				{
					UI::_0x75A16C3DA34F1245(uLocal_123, iLocal_83);
				}
				if (UI::DOES_BLIP_EXIST(uLocal_124))
				{
					UI::_0x75A16C3DA34F1245(uLocal_124, iLocal_83);
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_155);
				}
				func_255();
			}
		}
		else
		{
			func_1();
			func_255();
		}
	}
}

void func_1()
{
	func_154();
	SYSTEM::WAIT(0);
}

int func_2()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_100(1, 1, 0, 0, 0, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					while (!func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_140))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_140);
					}
				}
				func_45();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 1280);
				while (!func_164(&uLocal_176, cLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
				{
					AI::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 0);
				}
				AI::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 30000, 2052, 2);
				AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			
			case 1:
				if (!func_90())
				{
					AI::OPEN_SEQUENCE_TASK(&uVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
					{
						AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, 0, 1193033728);
					AI::TASK_ACHIEVE_HEADING(0, 73.0132f, 0);
					AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
					AI::CLOSE_SEQUENCE_TASK(uVar0);
					AI::TASK_PERFORM_SEQUENCE(iLocal_140, uVar0);
					AI::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_437++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
					{
						SYSTEM::SETTIMERA(0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						func_100(0, 1, 0, 0, 0, 0);
						iLocal_437++;
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 1000)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_3(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 352, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_4(iParam0);
	if ((GAMEPLAY::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, iParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0x36D782F68B309BDA(iParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(iParam0))
			{
				unk_0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

void func_5(int iParam0)
{
	iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

int func_6()
{
	fVar0 = func_10();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_131[iParam0]))
		{
			uLocal_131[iParam0] = func_8(ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], 0), 0);
			UI::SET_BLIP_COLOUR(uLocal_131[iParam0], 1);
			UI::SET_BLIP_PRIORITY(uLocal_131[iParam0], 9);
		}
		else
		{
			Var0 = { UI::GET_BLIP_COORDS(uLocal_131[iParam0]) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], 0) };
			Var0.x = (Var0.x + ((Var3.x - Var0.x) / 25f));
			Var0.y = (Var0.y + ((Var3.y - Var0.y) / 25f));
			Var0.z = (Var0.z + ((Var3.z - Var0.z) / 25f));
			UI::SET_BLIP_COORDS(uLocal_131[iParam0], Var0);
		}
	}
	else if (UI::DOES_BLIP_EXIST(uLocal_131[iParam0]))
	{
		UI::REMOVE_BLIP(&(uLocal_131[iParam0]));
	}
}

var func_8(struct<3> Param0, int iParam3)
{
	uVar0 = UI::ADD_BLIP_FOR_COORD(Param0);
	UI::SET_BLIP_SCALE(uVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_9(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_10()
{
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]) && !PED::IS_PED_INJURED(iLocal_144[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], 0));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar0]) && !PED::IS_PED_INJURED(iLocal_147[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar0], 0))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], 0));
			}
		}
		iVar0++;
	}
	return fVar1;
}

int func_11()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && PED::IS_PED_IN_VEHICLE(iLocal_140, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			return 1;
		}
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0)) && !PED::IS_PED_RAGDOLL(iLocal_140))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_140, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 400f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12()
{
	Var0 = { -20f, -20f, -20f };
	Var3 = { 20f, 20f, 20f };
	if (!iLocal_367)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) + Var0 };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, 0) + Var3 };
		if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_147[0]))
			{
				AI::TASK_LOOK_AT_ENTITY(iLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			iLocal_367 = 1;
		}
	}
}

void func_13()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 317, 1);
	}
	func_18(-1, 0);
	func_17();
	func_14();
	func_255();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
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

bool func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

int func_17()
{
	return 1;
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_41(iParam0))
	{
		func_40(iParam0, iParam1);
		if (!func_39(51))
		{
			func_29("RE_REWARD", 1, 0, 4000, 10000, func_32(), 0, 138, 0);
			func_28(51);
		}
		if (func_27(iParam0))
		{
			Global_111638.f_24990.f_2 = 3;
		}
		if (func_26(iParam0, iParam1) != 322)
		{
			func_20(func_26(iParam0, iParam1), Local_44.x, Local_44.y);
		}
		Global_111626 = iParam1;
		if (Global_111624 == 0)
		{
			if (((Global_111627 == 1 || Global_111627 == 5) || Global_111627 == 11) || Global_111627 == 25)
			{
				func_19(2);
			}
			else if ((Global_111627 == 26 || Global_111627 == 8) || Global_111627 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_111624 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_24((891 + iParam0), 1, -1, 1);
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
		Global_111638.f_10189[iParam0].f_10 = uParam1;
		Global_111638.f_10189[iParam0].f_11 = uParam2;
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
		func_21();
	}
}

void func_21()
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
		func_23(13, SYSTEM::FLOOR(Global_111638.f_10189.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_76622)
		{
			if (func_22() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_15();
				}
			}
		}
	}
}

int func_22()
{
	return Global_30768;
}

int func_23(int iParam0, int iParam1)
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

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		iParam2 = func_25();
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_28(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_20405.f_150[iVar1]), iVar0);
	}
}

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_30(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_30(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (GAMEPLAY::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((GAMEPLAY::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_31();
	}
}

void func_31()
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

int func_32()
{
	func_33();
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

void func_33()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_36(PLAYER::PLAYER_PED_ID());
			if (func_35(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_35(Global_111638.f_2358.f_539.f_4321))
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

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
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
	if (func_35(iParam0))
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

int func_39(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_111638.f_24990.f_8[iParam0]), iParam1);
}

int func_41(int iParam0)
{
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_42()
{
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_43(Var0);
	return uVar16;
}

int func_43(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (GAMEPLAY::GET_HASH_KEY(&cParam0))
	{
		case -60745600:
			return 23;
			break;
		
		case 1149455824:
			return 0;
			break;
		
		case 1889800404:
			return 15;
			break;
		
		case 737712801:
			return 1;
			break;
		
		case 976199832:
			return 26;
			break;
		
		case 1531173018:
			return 29;
			break;
		
		case 1154171352:
			return 24;
			break;
		
		case -1325807529:
			return 2;
			break;
		
		case -2118978003:
			return 17;
			break;
		
		case -1363545320:
			return 11;
			break;
		
		case -129069433:
			return 16;
			break;
		
		case 1158398451:
			return 18;
			break;
		
		case -1669765523:
			return 12;
			break;
		
		case -1538568960:
			return 3;
			break;
		
		case -396020015:
			return 27;
			break;
		
		case 786118124:
			return 20;
			break;
		
		case -770891250:
			return 19;
			break;
		
		case 190582896:
			return 4;
			break;
		
		case -911763748:
			return 13;
			break;
		
		case -881321240:
			return 28;
			break;
		
		case 1337652317:
			return 7;
			break;
		
		case 1492712482:
			return 25;
			break;
		
		case -1612307213:
			return 10;
			break;
		
		case -201963189:
			return 22;
			break;
		
		case -1176354303:
			return 21;
			break;
		
		case 1735157309:
			return 9;
			break;
		
		case -1631807569:
			return 5;
			break;
		
		case 847041036:
			return 6;
			break;
		
		case -167923910:
			return 14;
			break;
		
		case 59976311:
			return 30;
			break;
		
		case 996703443:
			return 31;
			break;
		
		case -2088549946:
			return 32;
			break;
		
		case -1148693293:
			return 33;
			break;
	}
	return -1;
}

int func_44()
{
	if (Global_31006)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

void func_45()
{
	Global_19671 = 0;
	func_46();
}

void func_46()
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

int func_47(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 10000f)
		{
			iVar0 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iParam0, 0)) < 2500f)
		{
			iVar0 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1))
		{
			iVar0 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_140) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0), 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0), iParam0, 1))
				{
					iVar0 = 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) != PED::GET_VEHICLE_PED_IS_IN(iLocal_140, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0, 1))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_48()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		STREAMING::REQUEST_MODEL(186956100);
		if (STREAMING::HAS_MODEL_LOADED(186956100))
		{
			iLocal_415 = OBJECT::CREATE_OBJECT(186956100, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) + Vector(2f, 0f, 0f), 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_415, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_415, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_415, 1);
		}
	}
	GRAPHICS::DRAW_DEBUG_TEXT_2D("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar1], 0) && !PED::IS_PED_INJURED(iLocal_144[iVar1])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar1], 0) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
				if (SYSTEM::VDIST2(Var5, Local_416[0]) > 400f && SYSTEM::VDIST2(Var5, Local_416[1]) > 400f)
				{
					if (SYSTEM::VDIST2(Var5, Local_416[iVar1]) > 900f)
					{
						if (func_50(iLocal_156[iVar1], iVar0, iLocal_415, Var5, ENTITY::GET_ENTITY_ROTATION(iVar0, 2)))
						{
							Local_416[iVar1] = { Var5 };
							Local_416[iVar1].f_3 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							Local_416[iVar1].f_6 = SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_49(Local_416[iVar1]))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = GAMEPLAY::GET_GAME_TIMER();
					}
					else if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_434[iVar1]) > 1000 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_431[0]) > 2000) && (GAMEPLAY::GET_GAME_TIMER() - iLocal_431[1]) > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_416[iVar1], 3f) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar9], 0))
							{
								fVar8 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar9], 0), Local_416[iVar1]);
							}
							if ((((SYSTEM::VDIST2(Var2, Var5) > 625f && SYSTEM::VDIST2(Var2, Local_416[iVar1]) < SYSTEM::VDIST2(Var2, Var5)) && SYSTEM::VDIST2(Var5, Local_416[iVar1]) > 400f) && fVar8 > 5f) && func_50(iLocal_156[iVar1], iVar0, iLocal_415, Local_416[iVar1], Local_416[iVar1].f_3))
							{
								GAMEPLAY::CLEAR_AREA_OF_PEDS(Local_416[iVar1], 3f, 0);
								GAMEPLAY::CLEAR_AREA_OF_VEHICLES(Local_416[iVar1], 3f, 0, 0, 0, 0, 0, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_156[iVar1], Local_416[iVar1], 1, 0, 0, 1);
								ENTITY::SET_ENTITY_ROTATION(iLocal_156[iVar1], Local_416[iVar1].f_3, 2, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_156[iVar1], 1084227584);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar1], (Local_416[iVar1].f_6 + 5f));
								AI::TASK_VEHICLE_CHASE(iLocal_144[iVar1], PLAYER::PLAYER_PED_ID());
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_156[iVar1], 1, 1, 0);
								iLocal_431[iVar1] = GAMEPLAY::GET_GAME_TIMER();
								iLocal_68 = GAMEPLAY::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > GAMEPLAY::GET_GAME_TIMER())
	{
		UNK1::_0xAF66DCEE6609B148();
	}
}

int func_49(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.y == 0f) && Param0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
		GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var13, &uVar16);
		fVar19 = GAMEPLAY::ABSF((Var10.z - Var7.z));
		fVar20 = GAMEPLAY::ABSF((Var10.x - Var7.x));
		fVar21 = GAMEPLAY::ABSF((Var10.y - Var7.y));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - GAMEPLAY::ABSF(Var7.z));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - GAMEPLAY::ABSF(Var7.x));
		}
		Var24.z = (Var24.z + (Var13.z - Var7.z));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param6, 2, 1);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		uVar35 = WORLDPROBE::START_SHAPE_TEST_CAPSULE(Var4, Var1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (WORLDPROBE::GET_SHAPE_TEST_RESULT(uVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_51()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_56) < 1500f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_65) < 1500f)
			{
				if (func_52())
				{
					iLocal_73 = 1;
				}
			}
		}
	}
}

int func_52()
{
	iVar0 = 524852;
	iVar1 = 6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[1], 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_144[0]))
		{
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_144[0], -1273030092) == 1)
			{
				if (!AI::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[0]))
				{
					AI::TASK_DRIVE_BY(iLocal_144[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_144[1]))
		{
			if (AI::GET_SCRIPT_TASK_STATUS(iLocal_144[1], -1273030092) == 1)
			{
				if (!AI::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[1]))
				{
					AI::TASK_DRIVE_BY(iLocal_144[1], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_370);
		STREAMING::REQUEST_MODEL(iLocal_372);
		STREAMING::REQUEST_MODEL(iLocal_371);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_371))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
				if (VEHICLE::_0xA4822F1CF23F4810(&Var5, &Var2, &Var8, 0, 1127481344, 30f, 0, 1, 1))
				{
					if ((func_53(Var2) && !CAM::IS_SPHERE_VISIBLE(Var2, 5f)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							GAMEPLAY::CLEAR_AREA(Var2, 3f, 0, 0, 0, 0);
							Var2.x = (Var2.x + SYSTEM::TO_FLOAT(iVar11));
							iLocal_156[iVar11] = VEHICLE::CREATE_VEHICLE(iLocal_370, Var2, Var8.z, 1, 1, 0);
							iLocal_144[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_372, -1, 1, 1);
							iLocal_147[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_371, 0, 1, 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_147[iVar11], iLocal_374);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[iVar11], iLocal_374);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
								{
									AI::TASK_VEHICLE_CHASE(iLocal_144[iVar11], PLAYER::PLAYER_PED_ID());
								}
							}
							else
							{
								AI::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_144[iVar11], iLocal_156[iVar11], PLAYER::PLAYER_PED_ID(), iVar1, 50f, iVar0, 5f, 10f, 1);
							}
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_144[iVar11], 0);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_147[iVar11], 0);
							PED::SET_PED_KEEP_TASK(iLocal_144[iVar11], 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_144[iVar11], 2017895192, 999999, 1, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar11], (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 5f));
							iVar1 = 11;
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_147[iVar11], 2017895192, 999999, 1, 1);
							AI::TASK_DRIVE_BY(iLocal_147[iVar11], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, 0, -753768974);
							PED::SET_PED_KEEP_TASK(iLocal_147[iVar11], 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar11], 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar11], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_144[iVar11], 42, 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar11], 42, 1);
							PED::SET_PED_ACCURACY(iLocal_144[iVar11], 15);
							PED::SET_PED_ACCURACY(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_108();
					}
				}
			}
		}
	}
	return 0;
}

int func_53(struct<3> Param0)
{
	Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (GAMEPLAY::ABSF(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.x, Var3.y, Var0.x, Var0.y)) >= 90f)
	{
		return 1;
	}
	return 0;
}

var func_54(int iParam0, bool bParam1, int iParam2)
{
	uVar0 = func_55(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && UI::DOES_BLIP_EXIST(uVar0)) && UI::DOES_TEXT_LABEL_EXIST(&(Global_1798[iParam2].f_3)))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_1798[iParam2].f_3));
	}
	return uVar0;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = UI::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			UI::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		UI::SET_BLIP_SCALE(uVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_56()
{
	if (UI::DOES_BLIP_EXIST(uLocal_139))
	{
		UI::REMOVE_BLIP(&uLocal_139);
	}
}

var func_57(struct<3> Param0, int iParam3)
{
	return func_8(Param0, iParam3);
}

void func_58()
{
	if (func_165() == 2)
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_139))
		{
			func_61();
			uLocal_139 = func_57(Local_65, 0);
			UI::SET_BLIP_SPRITE(uLocal_139, 269);
			func_59();
		}
	}
}

void func_59()
{
	if (!func_60())
	{
		if (func_165() == 2)
		{
			Global_31005 = 1;
		}
	}
}

int func_60()
{
	if (Global_111638.f_24990.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (func_165() == 2)
	{
		if (!Global_31007)
		{
			func_62("CULT_BLIP_HELP", -1);
			Global_31007 = 1;
		}
	}
}

void func_62(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_63()
{
	if (!iLocal_87[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 400f)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_140, 0)) < 400f && (GAMEPLAY::GET_GAME_TIMER() - iLocal_104) > 30000)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!func_85(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_11())
		{
			iLocal_104 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_11())
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
			{
				fLocal_102 = (fLocal_102 + GAMEPLAY::GET_FRAME_TIME());
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 = (fLocal_102 - (GAMEPLAY::GET_FRAME_TIME() * 10f));
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID())))
			{
				fLocal_103 = (fLocal_103 + GAMEPLAY::GET_FRAME_TIME());
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 = (fLocal_103 - (GAMEPLAY::GET_FRAME_TIME() * 10f));
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 2:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 3:
						if (func_11())
						{
							if (func_83())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 4:
						if (!func_90())
						{
							func_5(1);
						}
						break;
				}
				break;
			
			case 1:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_165() == 2)
							{
								if (func_66("RESNA_B1T", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_11())
							{
								if (func_84("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B2", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (func_11())
							{
								if (func_84("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 5:
							if (!func_90())
							{
								func_5(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_84("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (func_66("RESNA_B4", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_11())
							{
								if (func_84("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								if (func_11())
								{
									if (func_84("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_66("RESNA_B6", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_11())
							{
								if (func_84("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_RUNOUT", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
					{
						AI::TASK_USE_MOBILE_PHONE(iLocal_140, 1, 1);
					}
				}
				else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
				{
					AI::TASK_USE_MOBILE_PHONE(iLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 10000)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, 0);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, 0);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, 0, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = { func_65() };
						if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					
					case 2:
						if (!func_90())
						{
							iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_388++;
						}
						break;
					
					case 3:
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 2000)
						{
							if (func_11() && !PED::_0xA3F3564A5B3646C0(iLocal_140))
							{
								if (func_84("RESNA_CELLR", 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, 1);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, 1);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, 1, 0);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 3:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 5:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 6:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 7:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 8:
						if (func_11())
						{
							if (func_165() == 2)
							{
								if (!func_90())
								{
									if (func_84("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_165() == 0)
							{
								if (func_66("RESNA_B3DM", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_66("RESNA_B3DF", func_11()))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 9:
						if (!func_90())
						{
							func_5(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_165() == 2 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_88(Local_56))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_66("RESNA_TREV", func_11()))
							{
								iLocal_388++;
								iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (func_88(Local_56))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (func_66("RESNA_CULT", func_11()))
							{
								iLocal_388++;
								iLocal_389 = GAMEPLAY::GET_GAME_TIMER();
							}
							break;
						
						case 4:
							if (func_88(Local_56) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Local_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						
						case 5:
							if (func_66("RESNA_NEAR", func_11()))
							{
								iLocal_388++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_90())
	{
		if (iLocal_376 && !iLocal_377)
		{
			Local_378 = { func_64() };
			func_45();
			iLocal_377 = 1;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
			{
				if (func_164(&uLocal_176, cLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar7 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar7) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar7)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_164(&uLocal_176, cLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_64()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (UI::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar7])))
			{
				return Global_19673[iVar7];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_19673[iVar8])))
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

struct<6> func_65()
{
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_21815);
		if (iVar6 > -1)
		{
			return Global_19673[iVar6];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_66(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_376)
		{
			if (func_164(&uLocal_176, cLocal_387, sParam0, 8, 0, 0, 0))
			{
				iLocal_376 = 1;
				iLocal_377 = 0;
			}
		}
		else if (iLocal_377)
		{
			if (func_67(&uLocal_176, cLocal_387, sParam0, &Local_378, 8, 0, 0))
			{
				iLocal_377 = 0;
			}
		}
		if ((iLocal_376 && !iLocal_377) && bParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_90())
				{
					iLocal_384 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
			else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_384) > 500)
			{
				iLocal_384 = -1;
				iLocal_376 = 0;
				iLocal_377 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_376 && !iLocal_377)
	{
		Local_378 = { func_64() };
		func_45();
		iLocal_377 = 1;
	}
	return 0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_68(sParam2, iParam4, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
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
					func_81();
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
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_79();
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
				func_78();
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
				if (func_77())
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
			if (func_76())
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
			func_75();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_74();
		func_69();
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
		func_81();
	}
	return 0;
}

void func_69()
{
	if (!func_70())
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

int func_70()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_73())
	{
		return 0;
	}
	if (func_71(PLAYER::PLAYER_ID()))
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

bool func_71(int iParam0)
{
	return func_72(iParam0, 20);
}

bool func_72(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_73()
{
	return -1;
}

void func_74()
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

void func_75()
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

int func_76()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
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

void func_78()
{
	if (func_34(14))
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
		Global_19486 = func_165();
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

void func_79()
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

bool func_80(int iParam0, int iParam1)
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

void func_81()
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

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_83()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_84(char* sParam0, char* sParam1)
{
	StringConCat(&Var0, sParam0, 24);
	if (func_165() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_165() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&Var0, sParam1, 24);
	}
	if (func_164(&uLocal_176, cLocal_387, &Var0, 8, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, 0))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_87())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_87()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_88(struct<3> Param0)
{
	if (func_165() == 2)
	{
		if (func_89() && !Global_31008)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_47 + 200f) || GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_31008 = 1;
				return 1;
			}
		}
	}
	return 0;
}

var func_89()
{
	return Global_31005;
}

int func_90()
{
	if (Global_20805 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -6f, 0f) };
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var0, 5f, 5f, 5f, 0, 1, 0))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iLocal_3, &Var3, &fVar6, &uVar7, 1, 1077936128, 0);
			ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), fVar6);
			ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var3, 1, 0, 0, 1);
		}
	}
}

int func_92(int iParam0)
{
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		iVar1 = iParam0;
		GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &Var2, &Var5);
		Var8 = { Var5 - Var2 };
		Var11[0] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-Var8.x / 2f), (Var8.y / 2f), 0f) };
		Var11[1] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (Var8.x / 2f), (Var8.y / 2f), 0f) };
		Var11[2] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (Var8.x / 2f), (-Var8.y / 2f), 0f) };
		Var11[3] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-Var8.x / 2f), (-Var8.y / 2f), 0f) };
		Var24[0] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -1f, -2.5f, 0f) };
		Var24[1] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 1f, -2.5f, 0f) };
		Var24[2] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0.75f, -5f, 0f) };
		Var24[3] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -0.75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < Var24.x)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == Var24.x)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < Var11.x)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == Var11.x)
				{
					iVar53 = 0;
				}
				if (func_93(Var24[iVar50], Var24[iVar52], Var11[iVar51], Var11[iVar53], &(Var37[iVar50])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

int func_93(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
{
	fVar0 = Param0.x;
	fVar1 = Param3;
	fVar2 = Param6;
	fVar3 = Param9;
	fVar4 = Param0.y;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_95(fVar0, fVar1) || fVar11 > func_94(fVar0, fVar1)) || fVar11 < func_95(fVar2, fVar3)) || fVar11 > func_94(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_95(fVar4, fVar5) || fVar12 > func_94(fVar4, fVar5)) || fVar12 < func_95(fVar6, fVar7)) || fVar12 > func_94(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.z;
	return 1;
}

float func_94(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_95(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_96(var uParam0, int iParam1, bool bParam2)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_15))
	{
		CAM::DESTROY_CAM(uParam0->f_15, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_14 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		CAM::SET_CAM_COORD(uParam0->f_14, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_14, iParam1, *uParam0, 1);
		}
		if (bParam2)
		{
			CAM::SET_CAM_ROT(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			Var0 = { func_99(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, uParam0->f_3), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0)) };
			Var3 = { func_97(Var0) };
			CAM::SET_CAM_ROT(uParam0->f_14, Var3, 2);
		}
		CAM::SET_CAM_FOV(uParam0->f_14, uParam0->f_12);
		CAM::SET_CAM_ACTIVE(uParam0->f_14, 1);
	}
}

Vector3 func_97(struct<3> Param0)
{
	Param0.z = func_98(Param0.z);
	Var0.z = GAMEPLAY::ATAN2(-Param0.x, Param0.y);
	Var0.x = GAMEPLAY::ASIN(Param0.z);
	Var0.y = 0f;
	return Var0;
}

float func_98(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_99(struct<3> Param0, struct<3> Param3)
{
	Var0 = { Param0 - Param3 };
	fVar6 = SYSTEM::SQRT((((Var0.x * Var0.x) + (Var0.y * Var0.y)) + (Var0.z * Var0.z)));
	Var3.x = (Var0.x / fVar6);
	Var3.y = (Var0.y / fVar6);
	Var3.z = (Var0.z / fVar6);
	return Var3;
}

void func_100(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_107(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_76())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_106(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_107(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_106(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !func_102(PLAYER::PLAYER_ID(), 0)) && !func_101()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_101()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_102(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_103(-1, 0) == 8;
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

int func_103(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_104(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
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

bool func_105()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_106(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_107(int iParam0)
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

void func_108()
{
	Global_19671 = 0;
	func_81();
}

int func_109(bool bParam0, bool bParam1, bool bParam2)
{
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_121))
		{
			UI::REMOVE_BLIP(&uLocal_121);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_123))
		{
			UI::REMOVE_BLIP(&uLocal_123);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_124))
		{
			UI::REMOVE_BLIP(&uLocal_124);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (GAMEPLAY::GET_GAME_TIMER() > iLocal_86 + 8000)
		{
			func_111(iLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_78 = true;
	}
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)
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

void func_113()
{
	Var1[0] = { 986.8661f, -113.7463f, 72.9153f };
	Var1[1] = { 964.0147f, -144.0337f, 73.4875f };
	Var1[2] = { 954.2817f, -137.429f, 73.4781f };
	Var1[3] = { 976.5977f, -149.0529f, 73.2404f };
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, 10f, 10f, 10f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uLocal_150[iVar0] = PED::CREATE_PED(22, iLocal_371, Var1[iVar0], 0f, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_150[iVar0], 2017895192, 999999, 1, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_150[iVar0], iLocal_374);
			AI::TASK_COMBAT_PED(uLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_CONFIG_FLAG(uLocal_150[iVar0], 42, 1);
			uLocal_134[iVar0] = func_175(uLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_76 = 1;
	}
}

void func_114()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PED::IS_PED_INJURED(uLocal_150[iVar0]))
		{
			if (UI::DOES_BLIP_EXIST(uLocal_134[iVar0]))
			{
				UI::REMOVE_BLIP(&(uLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_77 = true;
	}
}

void func_115(var uParam0, int iParam1, int iParam2)
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
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
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
		if (func_116(uParam0->f_3))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (func_116(sVar0))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

bool func_116(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_117()
{
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		return 1;
	}
	else if (PED::IS_PED_ON_FOOT(iLocal_142))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_155, Local_59, 10f, 10f, 10f, 0, 1, 0))
		{
			bLocal_74 = true;
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (iLocal_84 > 0)
		{
			func_120();
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 20f, 20f, 10f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = GAMEPLAY::GET_GAME_TIMER();
				}
				iLocal_84++;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_155);
				if (SYSTEM::TIMERA() > 10000)
				{
					if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100) > 49)
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_142))
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_84 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_155))
		{
			return 1;
		}
	}
	return 0;
}

void func_120()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_142, 0))
		{
			if (!AI::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_142))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, 324215364, 0) || (WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, 324215364, 0) && WEAPON::GET_PED_AMMO_BY_TYPE(iLocal_142, -1878508229) == 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, 324215364, 68, 1, 1);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, 324215364, 1);
				}
				AI::TASK_DRIVE_BY(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 1, -753768974);
			}
		}
	}
	if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_438) > 250)
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_141, 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 0)
			{
				AI::CLEAR_PED_TASKS(iLocal_141);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, 324215364, 68, 1, 1);
				AI::TASK_DRIVE_BY(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_143, 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 1) && AI::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 0)
		{
			AI::CLEAR_PED_TASKS(iLocal_143);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, 453432689, 68, 1, 1);
			AI::TASK_DRIVE_BY(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, 0, -753768974);
			PED::SET_PED_KEEP_TASK(iLocal_143, 1);
		}
	}
	if (!iLocal_366)
	{
		iLocal_366 = 1;
	}
}

int func_121()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_155) < 700f || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_155) < 700f)
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

int func_122()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_123(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	fVar2 = (fParam2 * fParam3);
	if (UI::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(uParam0, 1);
						UI::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(uParam0, 0);
						UI::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(uParam0, 1);
						UI::SET_BLIP_ALPHA(uParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(uParam0, 0);
						UI::SET_BLIP_ALPHA(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_124()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			func_125(&uLocal_341, iLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_115(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_115(&uLocal_341, 0, 0);
	}
}

void func_125(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_126(uParam0, uParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_126(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_127(uParam0, uParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_127(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
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
	if (func_116(iVar0))
	{
		func_152();
	}
	if (func_151(uParam1) && ENTITY::IS_ENTITY_VISIBLE(uParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(uParam1))
		{
			PED::_0x7D7A2E43E74E2EB8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::GET_PED_FLOOD_INVINCIBILITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
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
			if (func_146(uParam0, bParam7, bParam9, 0))
			{
				func_142(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(iVar0))
				{
					if ((GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_116(iVar0))
							{
								func_62(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_130(1);
								}
							}
						}
					}
				}
			}
			else if (func_131(iVar0))
			{
				if (GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_116(iVar0))
						{
							func_62(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_130(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!GAMEPLAY::IS_STRING_NULL(sParam5))
			{
				if (func_116(sParam5))
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
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_115(uParam0, iVar0, 1);
				}
			}
			if (!func_146(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_129(uParam0))
				{
					func_128(uParam0);
				}
			}
		}
	}
	else
	{
		func_115(uParam0, iVar0, 0);
	}
}

void func_128(var uParam0)
{
	if (func_151(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
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

int func_129(var uParam0)
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

int func_130(bool bParam0)
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

int func_131(char* sParam0)
{
	if (!func_132(1, 1, 0))
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0) && func_116(sParam0)) || func_116("CMN_HINT"))
		{
			UI::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_41431)
	{
		case 0:
		case 3:
			if (func_130(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_141(0))
	{
		return 0;
	}
	if (func_140())
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
	if ((func_139() || func_138(Global_4456448.f_232883)) || func_137())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_136(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(uVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(uVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_135(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686722)
	{
		return 0;
	}
	if (func_133(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_134(iParam0, 1, 1))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
		else if ((Global_1312877 && iParam0 == PLAYER::PLAYER_ID()) && func_134(iParam0, 1, 0))
		{
			return Global_2425662[iParam0].f_310.f_5 != -1;
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
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

int func_135(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
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

int func_136(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
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

var func_137()
{
	return Global_2450632.f_17;
}

bool func_138(int iParam0)
{
	return iParam0 == 51;
}

var func_139()
{
	return Global_2450632.f_16;
}

bool func_140()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_22350.f_5878 + 100;
}

int func_141(int iParam0)
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

void func_142(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	if (Global_1319117 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		func_115(uParam0, 0, 0);
	}
	if (func_145(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_143())
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
	AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_143()
{
	return func_144(PLAYER::PLAYER_ID());
}

int func_144(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == -1667301416)
	{
		return 1;
	}
	return 0;
}

bool func_145(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

int func_146(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_129(uParam0))
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
						if (!func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_150(bParam1, bParam2, bParam3))
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
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_149(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_150(bParam1, bParam2, bParam3))
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
						if (func_148(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_147(bParam1, bParam2, bParam3))
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
					else if (func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_129(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_152();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
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

void func_152()
{
	GAMEPLAY::SET_BIT(&Global_7357, 4);
}

void func_153()
{
	if (!PED::IS_PED_INJURED(iLocal_143) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_143, iLocal_155, 0))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 1);
			}
		}
	}
}

void func_154()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		AI::TASK_COMBAT_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_142, 1);
		func_164(&uLocal_176, cLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, 736523883, 68, 1, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_141, 736523883, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, 1);
		AI::TASK_COMBAT_PED(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_141, 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, 453432689, 68, 1, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, 453432689, 1);
		AI::TASK_COMBAT_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_143, 1);
	}
	func_155();
	AI::CLEAR_SEQUENCE_TASK(&uLocal_159);
	iLocal_50 = 2;
}

void func_155()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_123))
		{
			uLocal_123 = func_175(iLocal_142, 1, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_121))
			{
				uLocal_121 = func_175(iLocal_141, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, 0, 1, 0))
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_124))
			{
				uLocal_124 = func_175(iLocal_143, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
		}
	}
}

void func_156()
{
	bVar0 = false;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_142, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_140))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_162();
		if (iLocal_365)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_107))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_107) > 0.735f)
				{
					func_161();
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_107) > 0.4f)
				{
					func_160();
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_140))
			{
				AI::TASK_COWER(iLocal_140, -1);
			}
			if (iLocal_82)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 0);
			}
			UI::REMOVE_BLIP(&uLocal_120);
			if (!UI::DOES_BLIP_EXIST(uLocal_123))
			{
				uLocal_123 = func_175(iLocal_142, 1, 0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
			if (!func_208())
			{
				func_166(1);
			}
			func_158();
			func_154();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_142))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
				{
					AI::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_142, iLocal_155, PLAYER::PLAYER_PED_ID(), 8, 40f, 786469, -1f, -1f, 1);
				}
				else
				{
					AI::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_142, 1);
				}
			}
			func_157();
		}
	}
}

void func_157()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_106))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(uLocal_106);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_107))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(uLocal_107);
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 1);
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			AI::TASK_SMART_FLEE_PED(iLocal_140, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_140, 1);
		}
	}
	func_154();
	func_255();
}

void func_158()
{
	Global_19671 = 0;
	func_159();
}

void func_159()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_21816 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
	}
}

void func_160()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, 0, 0, 1);
		AI::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		AI::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_140, 1);
		if (!UI::DOES_BLIP_EXIST(uLocal_123))
		{
			uLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, 1);
		}
		iLocal_365 = 0;
	}
}

void func_161()
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 2);
		PED::SET_PED_INTO_VEHICLE(iLocal_141, iLocal_155, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, 1, 0, 0, 0, 2, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, 0, 0, 1);
		AI::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		AI::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_140, 1);
		if (!UI::DOES_BLIP_EXIST(uLocal_123))
		{
			uLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, 0);
		}
		UNK1::_0xAF66DCEE6609B148();
		iLocal_365 = 0;
	}
}

void func_162()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_118))
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			AI::CLEAR_PED_TASKS(iLocal_141);
		}
		if (!PED::IS_PED_INJURED(iLocal_143))
		{
			AI::CLEAR_PED_TASKS(iLocal_143);
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			AI::CLEAR_PED_TASKS(iLocal_140);
		}
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -4f, 1);
	}
}

void func_163()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_118))
			{
				func_162();
			}
			func_157();
		}
	}
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_68(sParam2, iParam3, 0);
}

int func_165()
{
	func_33();
	return Global_111638.f_2358.f_539.f_4321;
}

int func_166(int iParam0)
{
	if (func_169())
	{
		Global_111628 = 1;
		Global_111625 = GAMEPLAY::GET_GAME_TIMER();
		if (func_27(Global_111627))
		{
			func_167(0);
		}
		UI::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_27(Global_111627))
		{
			UI::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111638.f_24990.f_2 < 3)
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_2++;
					GAMEPLAY::SET_BIT(&Global_111634, 0);
				}
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Global_111634, 1))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_3++;
					GAMEPLAY::SET_BIT(&Global_111634, 1);
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_111634, 2))
			{
				if (!UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_111638.f_24990.f_4++;
					GAMEPLAY::SET_BIT(&Global_111634, 2);
				}
			}
			break;
	}
}

char* func_168(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_169()
{
	switch (func_170(&Global_30827, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_170(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96222.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_174(0))
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_22211.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_41431 = iParam2;
		Global_41393 = *uParam0;
		Global_41394 = iParam4;
		Global_41392 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41392 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41392)
			{
				if (Global_41398[iVar0] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41393 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_172(iParam2))
		{
			return 0;
		}
		if (Global_41392 == 8)
		{
			return 0;
		}
		Global_41395++;
		*uParam0 = Global_41395;
		Global_41398[Global_41392] = Global_41395;
		Global_41398[Global_41392].f_1 = iParam1;
		Global_41398[Global_41392].f_2 = iParam2;
		Global_41398[Global_41392].f_3 = 0;
		Global_41392++;
		if (iParam4 != 0)
		{
			func_171(uParam0, iParam4);
		}
	}
	return 2;
}

void func_171(var uParam0, int iParam1)
{
	if (Global_41392 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41392)
	{
		if (Global_41398[iVar0] == *uParam0)
		{
			Global_41398[iVar0].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_172(int iParam0)
{
	return func_173(iParam0, Global_41431);
}

int func_173(int iParam0, int iParam1)
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

int func_174(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_172(iParam0))
	{
		return 0;
	}
	return 1;
}

var func_175(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_54(iParam0, bParam1, 145);
}

void func_176()
{
	if (iLocal_361)
	{
	}
	else
	{
		iLocal_361 = 1;
	}
}

int func_177()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_184())
	{
		return 1;
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178(float fParam0, bool bParam1)
{
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_35(func_165()))
		{
			iVar36 = func_32();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 2) && !GAMEPLAY::IS_BIT_SET(Global_111638.f_18569[iVar32], 3))
				{
					func_179(iVar32, &Var0);
					fVar35 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 1:
			func_180(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 2:
			func_180(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 3:
			func_180(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 4:
			func_180(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 5:
			func_180(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 6:
			func_180(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 7:
			func_180(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_181(iParam0), 0, 0);
			break;
		
		case 8:
			func_180(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 9:
			func_180(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 10:
			func_180(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 11:
			func_180(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 12:
			func_180(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 13:
			func_180(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 14:
			func_180(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 15:
			func_180(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 16:
			func_180(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 17:
			func_180(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 18:
			func_180(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 19:
			func_180(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 20:
			func_180(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 21:
			func_180(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 22:
			func_180(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 23:
			func_180(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_181(iParam0), 0, 1);
			break;
		
		case 24:
			func_180(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_181(iParam0), 0, 1);
			break;
		
		case 25:
			func_180(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 26:
			func_180(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 27:
			func_180(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 28:
			func_180(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 29:
			func_180(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 30:
			func_180(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 31:
			func_180(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 32:
			func_180(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 33:
			func_180(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 34:
			func_180(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 35:
			func_180(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 36:
			func_180(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 37:
			func_180(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 38:
			func_180(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 39:
			func_180(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 40:
			func_180(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 41:
			func_180(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 42:
			func_180(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 43:
			func_180(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 44:
			func_180(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 45:
			func_180(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 46:
			func_180(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 47:
			func_180(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 48:
			func_180(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 49:
			func_180(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 50:
			func_180(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 51:
			func_180(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 52:
			func_180(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 54:
			func_180(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 55:
			func_180(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 56:
			func_180(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 53:
			func_180(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 57:
			func_180(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 58:
			func_180(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 59:
			func_180(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 60:
			func_180(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 61:
			func_180(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 62:
			func_180(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_180(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_181(int iParam0)
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

struct<2> func_182(int iParam0)
{
	StringCopy(&Var0, "", 8);
	cVar2 = { func_183(iParam0) };
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

struct<2> func_183(int iParam0)
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

int func_184()
{
	if (func_187() && !func_188())
	{
		return 1;
	}
	if (func_186() && func_185())
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return Global_111356 > 0;
}

int func_186()
{
	if (Global_95666 != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_188()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_189()
{
	func_195(39, 1);
	func_195(40, 1);
	func_195(41, 1);
	func_195(42, 1);
	func_195(43, 1);
	func_195(44, 1);
	fLocal_55 = 321f;
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_372, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_373, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_371, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_369, 1);
	STREAMING::REQUEST_MODEL(iLocal_373);
	STREAMING::REQUEST_MODEL(iLocal_371);
	STREAMING::REQUEST_MODEL(iLocal_372);
	STREAMING::REQUEST_MODEL(iLocal_369);
	STREAMING::REQUEST_ANIM_DICT(sLocal_386);
	STREAMING::REQUEST_MODEL(186956100);
	if (((((STREAMING::HAS_MODEL_LOADED(iLocal_373) && STREAMING::HAS_MODEL_LOADED(iLocal_371)) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && STREAMING::HAS_MODEL_LOADED(186956100)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_386))
	{
		func_194();
		func_193();
		func_192();
		func_191();
		DECISIONEVENT::ADD_SHOCKING_EVENT_AT_POSITION(111, Local_52, -1082130432);
		uLocal_162 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_59 - Vector(50f, 50f, 50f), Local_59 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		switch (func_165())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_190(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), sLocal_174, 0, 1);
		Local_165 = { -3057.362f, 441.8271f, 6.151212f };
		Local_168 = { -0.34992f, -0.199749f, -98.79861f };
		fLocal_359 = 116f;
		Local_56 = { -3053.721f, 440.9221f, 5.3566f };
		uLocal_164 = OBJECT::CREATE_OBJECT(186956100, ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(uLocal_164, ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2), 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164, 1);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164, 0, 0);
		return 1;
	}
	return 0;
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_191()
{
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_155, 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 3);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_142, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_141, iLocal_374);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 42, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 17, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 50, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 17, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 50, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 6, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 17, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 50, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, 1);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_143, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_142, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_141, 2);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_143, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_142, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_141, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, 453432689, 68, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, 2017895192, 68, 0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, 324215364, 68, 0, 1);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_143, 0);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_142, 0);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_141, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 115, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 115, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 115, 1);
	func_190(&uLocal_176, 2, iLocal_142, "LostKidnapper", 0, 1);
}

void func_192()
{
	iVar0 = 500;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_353), fLocal_55, 1, 1);
	}
	else
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Local_353), fLocal_55, 1, 1);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_140, "LostKidnapGirl");
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_140, 0);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, 0);
	ENTITY::SET_ENTITY_HEALTH(iLocal_140, iVar0, 0);
	PED::SET_PED_MAX_HEALTH(iLocal_140, iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, iLocal_375);
	func_190(&uLocal_176, 1, iLocal_140, "LostKidnapGirl", 0, 1);
}

void func_193()
{
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	if (Var0.x > Local_52.x)
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, -1116.946f, 560.8027f, 101.3588f, 116.0592f, 1, 1, 0);
		Local_62 = { -1247.233f, 515.3996f, 94.1352f };
	}
	else
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, Local_52, 305f, 1, 1, 0);
		Local_62 = { -852.9832f, 441.7806f, 86.0437f };
	}
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_155);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_155, 1, 1, 0);
	iLocal_142 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_155, 22, iLocal_372, -1, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 2, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, 2017895192, 68, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, 2017895192, 1);
	iLocal_143 = PED::CREATE_PED(22, iLocal_372, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_356), fLocal_55, 1, 1);
	iLocal_141 = PED::CREATE_PED(22, iLocal_371, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_356), fLocal_55, 1, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 1);
	iLocal_82 = 1;
	PED::SET_PED_SHOOT_RATE(iLocal_141, 25);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, -753768974);
	PED::SET_PED_SHOOT_RATE(iLocal_143, 35);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, 1566631136);
	PED::SET_PED_ACCURACY(iLocal_142, 12);
	PED::SET_PED_ACCURACY(iLocal_143, 10);
	PED::SET_PED_ACCURACY(iLocal_141, 15);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_155, 0, 0);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_155, 2f);
}

void func_194()
{
	PED::ADD_RELATIONSHIP_GROUP("re_snatched badGuys", &iLocal_374);
	PED::ADD_RELATIONSHIP_GROUP("re_snatched pedVictim", &iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_374, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_374, iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_375, 1862763509);
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_202(iParam0, 2, 1))
		{
			func_201(iParam0, 2, 1);
		}
	}
	else if (func_202(iParam0, 2, 1))
	{
		func_196(iParam0, 2, 1);
	}
}

void func_196(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			uVar0 = func_199(func_200(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&uVar0, iParam1);
			func_197(func_200(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_198(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_199(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_198(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9977;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 11511;
}

void func_201(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_98796.f_1357[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			uVar0 = func_199(func_200(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, iParam1);
			func_197(func_200(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_111638.f_668[iParam0]), iParam1);
	}
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_98796.f_1357[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_199(func_200(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_111638.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_203()
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_141) && ENTITY::DOES_ENTITY_EXIST(iLocal_143)) && ENTITY::DOES_ENTITY_EXIST(iLocal_140)) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		STREAMING::REQUEST_ANIM_DICT("random@kidnap_girl");
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_439)
			{
				case 0:
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_117))
						{
							Local_110 = { 0f, 0f, 0f };
							Local_113 = { 0f, 0f, 0f };
							uLocal_117 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_113, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_117, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_117, 1);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uLocal_117, Local_110, Local_113, 2);
							AI::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_117, sLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(iLocal_141, uLocal_117, sLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(iLocal_143, uLocal_117, sLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1148846080, 0);
							PED::SET_PED_CAN_RAGDOLL(iLocal_140, 1);
						}
						else
						{
							func_156();
							func_163();
							if (func_204())
							{
								func_157();
							}
						}
					}
					break;
				
				case 1:
					if ((!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_117))
						{
							AI::CLEAR_PED_TASKS(iLocal_141);
							AI::CLEAR_PED_TASKS(iLocal_140);
							AI::CLEAR_PED_TASKS(iLocal_143);
						}
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_118))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
							{
								Local_110 = { 0f, 0f, 0f };
								Local_113 = { ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2) };
								uLocal_118 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_155, 0), Local_113.x, Local_113.y, ENTITY::GET_ENTITY_HEADING(iLocal_155), 2);
								if (iLocal_82)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, 0);
									iLocal_82 = 0;
								}
								PED::SET_SYNCHRONIZED_SCENE_RATE(uLocal_118, fVar0);
								AI::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_118, sLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								AI::TASK_SYNCHRONIZED_SCENE(iLocal_141, uLocal_118, sLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								AI::TASK_SYNCHRONIZED_SCENE(iLocal_143, uLocal_118, sLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, uLocal_118, "DRAG_INTO_VAN_BURR", sLocal_386, 1000f, -4f, 1, 1148846080);
							}
						}
						else
						{
							if (!iLocal_80)
							{
								if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_118) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_155, 0)) < 30f) && !func_90()) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_118) > 0.1f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_118) < 0.4f)
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_HELP", 4, func_205(), 0, 0))
									{
										iLocal_80 = 1;
									}
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_118) > 0.502f)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, 1);
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_118) < 0.732f)
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_155))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_141, 0);
										PED::SET_PED_CAN_RAGDOLL(iLocal_143, 0);
										if (!PED::IS_PED_INJURED(iLocal_142) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
										{
											AI::TASK_VEHICLE_TEMP_ACTION(iLocal_142, iLocal_155, 30, 6000);
										}
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, 1);
										PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, 1);
										PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, 1);
										PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, 1);
									}
									if (ENTITY::IS_ENTITY_DEAD(iLocal_155, 0))
									{
										func_162();
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_140, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_143, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_141, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_142, 0, 0);
										}
										ENTITY::DETACH_ENTITY(iLocal_155, 1, 0);
									}
								}
								else
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_141, 1);
									PED::SET_PED_CAN_RAGDOLL(iLocal_143, 1);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, 0);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, 0);
									func_162();
									func_161();
									iLocal_439 = 3;
									SYSTEM::SETTIMERB(0);
								}
							}
							else
							{
								func_156();
								func_163();
								if (func_204())
								{
									func_157();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

int func_204()
{
	Var0 = { 10f, 10f, 3f };
	Var3 = { -10f, -10f, -3f };
	if (GAMEPLAY::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f), 15f, 1))
	{
		return 1;
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	if (((GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, -37975472, 1) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, -1813897027, 1)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, 741814745, 1)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, 1945616459, 1))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	Var1 = { 75f, 75f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), Var1, 0, 1, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_206()
{
}

int func_207()
{
	if (!func_172(5))
	{
		return 1;
	}
	if (func_184())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if ((Global_111627 == func_42() && GAMEPLAY::GET_RANDOM_EVENT_FLAG()) && Global_111628)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0)
{
	GAMEPLAY::CLEAR_AREA(Local_171, 15f, 1, 0, 0, 0);
	GAMEPLAY::CLEAR_AREA(-1133.993f, 558.3267f, 107.351f, 5f, 1, 0, 0, 0);
	if (bParam0)
	{
		uLocal_414 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), 0, 1, 1, 1);
		uLocal_413 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), 0, 1, 1, 1);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_414, 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_413, 0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !bParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !bParam0, 1);
}

void func_210()
{
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	GAMEPLAY::_0x65D2EBB47E1CEC21(0);
	GAMEPLAY::SET_RANDOM_EVENT_FLAG(1);
	Global_111624 = 0;
	func_212();
}

void func_212()
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

void func_213(int iParam0)
{
	Global_111627 = iParam0;
}

int func_214(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!Global_150217)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_42();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
			{
				return 0;
			}
		}
		if (!Global_111638.f_9080)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_184())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_111627 != -1)
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_178(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.z - Local_44.z) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_251(func_165()) == 4 || func_251(func_165()) == 5)
			{
				return 0;
			}
		}
		if (func_35(func_165()))
		{
			if (!func_250(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_111638.f_24990.f_43[iParam3]))
		{
			return 0;
		}
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_111629) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_248())
		{
			return 0;
		}
		if (GAMEPLAY::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (GAMEPLAY::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_172(5))
		{
			return 0;
		}
		if (func_238(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_30914)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_35(func_165()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_111638.f_2358.f_539.f_2300[iVar4] };
				iVar8 = Global_111638.f_2358.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_145(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_165() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_215(int iParam0)
{
	iVar0 = Global_111638.f_2358.f_539.f_2296[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_220(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_220(float fParam0, float fParam1, float fParam2)
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

int func_221(int iParam0, int iParam1)
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

int func_222(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_223(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_224(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_225(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_226(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_227(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)
{
	return iParam0 & 15;
}

int func_229(int iParam0, int iParam1)
{
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	func_236(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_235(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_234(&uVar0, TIME::GET_CLOCK_HOURS());
	func_233(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_232(&uVar0, TIME::GET_CLOCK_MONTH());
	func_231(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
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

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 1 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(int iParam0)
{
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_111638.f_24990.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_165();
				if (!func_35(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5) || Global_41978 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_80(8, -1)) || func_242()) || func_241()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_30770) || func_246()) || func_80(8, -1)) || func_244()) || func_243()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_247()) || func_244()) || Global_110685) || Global_30770) || func_246()) || Global_42596) || func_80(8, -1)) || func_243()) || func_241()) || func_242()) || Global_111638.f_7683.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_110685) || Global_30770) || func_246()) || func_80(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_240()
{
	return Global_98783.f_1;
}

int func_241()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
{
	if (Global_76882)
	{
		return 1;
	}
	else if (Global_61506 && !Global_61512)
	{
		return 1;
	}
	return 0;
}

bool func_244()
{
	return Global_98796.f_346 > 0;
}

bool func_245()
{
	return Global_98796.f_345 > 0;
}

var func_246()
{
	return Global_1312877;
}

int func_247()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_78();
	if (Global_8161[Global_19486][0].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_229(func_230(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = func_165();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
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
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_251(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 7;
	}
	return Global_111638.f_7683.f_919[iParam0];
}

bool func_252(int iParam0)
{
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = GAMEPLAY::IS_BIT_SET(Global_111638.f_24990, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = GAMEPLAY::IS_BIT_SET(Global_111638.f_24990.f_1, iVar0);
	}
	return bVar1;
}

int func_253()
{
	if (Global_30918)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
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

void func_255()
{
	SYSTEM::WAIT(0);
	func_268(0);
	if (Global_31009)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_267();
	func_115(&uLocal_341, 0, 0);
	if (func_208())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_162, 0);
	}
	else
	{
		func_266(&Global_30827);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !PED::IS_PED_INJURED(iLocal_140)) && PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_140);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, 0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
	}
	func_209(0);
	func_256(-1);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	AI::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_256(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_208())
	{
		func_259(iParam0);
		UI::SET_MISSION_NAME(0, 0);
		Global_111629 = GAMEPLAY::GET_GAME_TIMER();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_111627, 1), 64);
		if (func_41(Global_111627) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111626, 64);
		}
		STATS::_0x71862B1D855F32E1(&cVar0, Global_111624, (GAMEPLAY::GET_GAME_TIMER() - Global_111625), 0);
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_111634, 0) && Global_111638.f_24990.f_2 < 3)
	{
		GAMEPLAY::CLEAR_BIT(&Global_111634, 0);
	}
	func_266(&Global_30827);
	Global_111628 = 0;
	func_213(-1);
}

char* func_257(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_258(int iParam0)
{
	Global_41982 = (GAMEPLAY::GET_GAME_TIMER() + iParam0);
}

void func_259(int iParam0)
{
	func_260(iParam0, 0, func_265(iParam0));
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	uVar0 = func_230();
	func_263(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_262(iParam0, &uVar0);
	Var1 = { func_261(&uVar0) };
}

struct<16> func_261(var uParam0)
{
	StringCopy(&Var0, "", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_228(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_262(int iParam0, var uParam1)
{
	Global_111638.f_24990.f_43[iParam0] = *uParam1;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_264(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_265(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_266(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_267()
{
	Global_31005 = 0;
	Global_31006 = 0;
	Global_31008 = 0;
	Global_31009 = 0;
	Global_31010 = 0;
}

void func_268(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 53)
	{
		func_195(iVar0, bParam0);
		iVar0++;
	}
}

