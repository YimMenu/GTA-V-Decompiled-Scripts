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
	iLocal_52 = 1;
	Local_301 = { 0f, 0f, 0f };
	Local_304 = { 0f, 0f, 0f };
	iLocal_309 = 1;
	iLocal_335 = -1;
	sLocal_338 = "safe@michael@ig_3";
	Local_339 = { -804.374f, 176.864f, 73.015f };
	Local_342 = { -3.7f, 0f, 172.7f };
	fLocal_345 = 34f;
	Local_346 = { -806.6f, 173.4f, 72.9f };
	Local_349 = { 6f, 0f, -86.8f };
	fLocal_352 = 40f;
	Local_353 = { -802.4001f, 175.8452f, 73.3742f };
	Local_356 = { -2.0225f, 0f, 137.6933f };
	fLocal_359 = 50f;
	Local_360 = { 0.11f, 0f, 0f };
	Local_363 = { -0.025f, 0.13f, 0f };
	Local_366 = { -0.015f, 0.13f, 0f };
	Local_369 = { 0f, 90f, 0f };
	Local_375 = { -805.6204f, 172.3675f, 71.8347f };
	Local_378 = { 0f, 0f, 0f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_86();
	}
	if (((func_83(9) || (func_82() && !func_81())) || func_68(PLAYER::PLAYER_PED_ID())) || AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		func_86();
	}
	Local_372 = { ScriptParam_0.f_1[0] };
	Local_372 = { -803.642f, 173.2916f, 71.8347f };
	iLocal_55 = -693032058;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_61() == 0) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0) && func_60(4))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 3f)
			{
				switch (iLocal_307)
				{
					case 0:
						if (func_54())
						{
							iLocal_307 = 1;
						}
						break;
					
					case 1:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							func_1();
						}
						break;
					
					case 2:
						break;
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_372, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) > 6f)
			{
				func_86();
			}
		}
		else
		{
			func_86();
		}
	}
}

void func_1()
{
	Var0 = { 1.5f, 1.5f, 1.5f };
	fVar3 = 0f;
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		func_51();
	}
	switch (iLocal_308)
	{
		case 0:
			if (((func_46(Local_372, Var0) && func_45()) && !func_44()) && !func_43("FAM_WEAPDIS"))
			{
				if (PED::IS_PED_HEADING_TOWARDS_POSITION(PLAYER::PLAYER_PED_ID(), Local_375, 90f) || iLocal_317)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE");
					}
					func_42("TV_HLP0");
					iLocal_308 = 1;
				}
			}
			break;
		
		case 1:
			if (func_41(1, 0, 1))
			{
				if (func_46(Local_372, Var0) && func_45())
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if ((!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && PAD::IS_CONTROL_PRESSED(2, 51))
						{
							Global_30813 = 3;
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								iLocal_310 = 1;
							}
							if (iLocal_335 == -1)
							{
								iLocal_335 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-804.05f, 173.54f, 72.17f, 1.02f, 1f, 1f, func_40(-52.4f), 0, 7);
							}
							if (func_43("TV_HLP0"))
							{
								HUD::CLEAR_HELP(1);
							}
							MISC::CLEAR_AREA_OF_PROJECTILES(Local_375, 3f, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
							}
							iLocal_51 = 1;
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
							func_30(1, 1, 0, 0, 0, 0);
							PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("SOFA ACTIVITY");
							iLocal_328 = 1;
							iLocal_308 = 2;
						}
					}
				}
				else
				{
					if (func_43("TV_HLP0"))
					{
						HUD::CLEAR_HELP(1);
					}
					iLocal_317 = 0;
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "enter_michael", 1000f, -2f, 0, 0, 1148846080, 0);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_331, 0f);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_331, 0.163f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
			{
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
			}
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(func_28(), 5f, 0, 0, 0, 0, 0, 0);
			PLAYER::PLAYER_ATTACH_VIRTUAL_BOUND(-804.5928f, 173.1801f, 71.68436f, 0f, 0f, 0.590625f, 1f, 0.7f);
			PLAYER::SET_PLAYER_CLOTH_PACKAGE_INDEX(2);
			iLocal_308 = 3;
			break;
		
		case 3:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.8f)
			{
				uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
				if (!Global_30828[4].f_2)
				{
					func_25();
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "base_michael", 2f, -8f, 64, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
				}
				else
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("TV_MICHAELS_HOUSE");
					}
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "base_michael", 2f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "base_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
					}
				}
				iLocal_308 = 4;
			}
			break;
		
		case 4:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!func_22())
			{
				if (!Global_30828[4].f_2)
				{
					func_42("TV_HLP3");
					iLocal_308 = 5;
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.8f)
				{
					uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_enter_michael", 2f, -4f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_enter_remote", sLocal_338, 8f, -4f, 0, 1148846080);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
					}
					if (func_43("TV_HLP3"))
					{
						HUD::CLEAR_HELP(1);
					}
					GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
					func_42("TV_HLP4");
					iLocal_308 = 6;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 5:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PAD::_0x7F4724035FDCA1DD(2);
			if (!func_22())
			{
				func_20();
				if (!func_43("TV_HLP3"))
				{
					func_42("TV_HLP3");
				}
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_enter_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (!iLocal_318)
					{
						if (STATS::STAT_GET_INT(-1256798071, &iLocal_333, -1))
						{
							STATS::STAT_SET_INT(-1256798071, iLocal_333 + 1, 1);
							iLocal_318 = 1;
						}
					}
					iLocal_308 = 6;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 6:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.8f)
			{
				uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_base_michael", 2f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_base_remote", sLocal_338, 2f, -8f, 0, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
				iLocal_308 = 7;
			}
			else if (!Global_30828[4].f_2)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.5f)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						iLocal_310 = 2;
					}
					func_17(4, 0, 1, 0, 0);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
					{
						AUDIO::START_AUDIO_SCENE("TV_MICHAELS_HOUSE");
					}
					GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
					func_42("TV_HLP4");
				}
			}
			break;
		
		case 7:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PAD::_0x7F4724035FDCA1DD(2);
			GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			if (!func_22())
			{
				if (!func_43("TV_HLP4"))
				{
					func_42("TV_HLP4");
				}
				func_20();
				func_16(0, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_exit_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
					}
					iLocal_314 = 1;
					iLocal_308 = 9;
				}
				else if (func_15(0))
				{
					uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_idle_a_michael", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_idle_a_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
					}
					iLocal_315 = 1;
					iLocal_308 = 8;
				}
			}
			else
			{
				iLocal_308 = 11;
			}
			break;
		
		case 8:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PAD::_0x7F4724035FDCA1DD(2);
			GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
			{
				if (iLocal_315)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331);
					if (fVar3 > 0.3f)
					{
						if (GRAPHICS::GET_TV_CHANNEL() == 0)
						{
							GRAPHICS::SET_TV_CHANNEL(1);
						}
						else
						{
							GRAPHICS::SET_TV_CHANNEL(0);
						}
						iLocal_315 = 0;
					}
				}
			}
			else
			{
				uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_base_michael", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
				iLocal_308 = 7;
			}
			break;
		
		case 9:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
			{
				if (iLocal_314)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.5f)
					{
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							iLocal_310 = 3;
						}
						func_14(4);
						GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
						{
							AUDIO::STOP_AUDIO_SCENE("TV_MICHAELS_HOUSE");
						}
						if (func_43("TV_HLP4"))
						{
							HUD::CLEAR_HELP(1);
						}
						iLocal_314 = 0;
					}
				}
			}
			else
			{
				uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "base_michael", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
				iLocal_308 = 4;
			}
			break;
		
		case 10:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (Global_30828[4].f_2)
			{
				GRAPHICS::_0xD1C55B110E4DF534(PLAYER::PLAYER_PED_ID());
			}
			switch (iLocal_309)
			{
				case 0:
					if (func_43("TV_HLP4") || func_43("TV_HLP3"))
					{
						HUD::CLEAR_HELP(1);
					}
					uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_exit_remote", sLocal_338, 8f, -8f, 0, 1148846080);
					if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
					{
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
					}
					iLocal_309 = 1;
					break;
				
				case 1:
					if (func_43("TV_HLP4") || func_43("TV_HLP3"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331) || iLocal_311)
					{
						func_13();
						uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "cigar_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_12(), uLocal_331, "cigar_enter_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_10(), uLocal_331, "cigar_enter_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
						if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
						{
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
						}
						iLocal_311 = 0;
						iLocal_309 = 2;
					}
					break;
				
				case 2:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						func_9(0);
					}
					else
					{
						uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
						bLocal_316 = func_8();
						if (bLocal_316)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "cigar_idle_a_michael", 4f, -8f, 0, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_12(), uLocal_331, "cigar_idle_a_cigar", sLocal_338, 4f, -8f, 0, 1148846080);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_10(), uLocal_331, "cigar_idle_a_lighter", sLocal_338, 4f, -8f, 0, 1148846080);
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "cigar_idle_b_michael", 4f, -8f, 0, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_12(), uLocal_331, "cigar_idle_b_cigar", sLocal_338, 4f, -8f, 0, 1148846080);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_10(), uLocal_331, "cigar_idle_b_lighter", sLocal_338, 4f, -8f, 0, 1148846080);
						}
						if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
						{
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
						}
						func_13();
						iLocal_309 = 3;
					}
					break;
				
				case 3:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						if (bLocal_316)
						{
							func_9(1);
						}
						else
						{
							func_9(2);
						}
						fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331);
						if (fVar3 < 0.5f)
						{
							func_6();
						}
						if (iLocal_312)
						{
							if (!iLocal_313)
							{
								if (bLocal_316)
								{
									if (ENTITY::FIND_ANIM_EVENT_PHASE(func_5(), "cigar_idle_a_michael", func_4(), &fVar4, &fVar5))
									{
										if (fVar3 >= fVar4 && fVar3 <= fVar5)
										{
											iLocal_313 = 1;
										}
									}
								}
								else if (ENTITY::FIND_ANIM_EVENT_PHASE(func_5(), "cigar_idle_b_michael", func_4(), &fVar4, &fVar5))
								{
									if (fVar3 >= fVar4 && fVar3 <= fVar5)
									{
										iLocal_313 = 1;
									}
								}
							}
							else
							{
								uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "cigar_interrupt_michael", 8f, -8f, 0, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_12(), uLocal_331, "cigar_interrupt_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_10(), uLocal_331, "cigar_interrupt_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
								if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
								{
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
								}
								iLocal_312 = 0;
								iLocal_308 = 11;
							}
						}
					}
					else
					{
						uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "cigar_exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_12(), uLocal_331, "cigar_exit_cigar", sLocal_338, 8f, -8f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_10(), uLocal_331, "cigar_exit_lighter", sLocal_338, 8f, -8f, 0, 1148846080);
						if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
						{
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
						}
						func_13();
						if (Global_30828[4].f_2)
						{
							iLocal_309 = 4;
						}
						else
						{
							iLocal_309 = 5;
						}
					}
					break;
				
				case 4:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_enter_michael", 8f, -8f, 0, 0, 1148846080, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_enter_remote", sLocal_338, 8f, -8f, 0, 1148846080);
						if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
						{
							PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
						}
						iLocal_309 = 5;
					}
					else
					{
						func_9(3);
					}
					break;
				
				case 5:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						func_13();
						uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
						if (Global_30828[4].f_2)
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "tv_base_michael", 8f, -8f, 64, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "tv_base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
							func_42("TV_HLP4");
							iLocal_308 = 7;
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "base_michael", 4f, -8f, 64, 0, 1148846080, 0);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "base_remote", sLocal_338, 8f, -8f, 64, 1148846080);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_331, 1);
							func_42("TV_HLP3");
							iLocal_308 = 5;
						}
					}
					else
					{
						func_9(3);
					}
					break;
			}
			break;
		
		case 11:
			func_29();
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
			{
				if (func_3(uLocal_329) && func_3(uLocal_330))
				{
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_329) && !CAM::IS_CAM_INTERPOLATING(uLocal_330))
					{
						iLocal_308 = 12;
					}
				}
				else
				{
					iLocal_308 = 12;
				}
			}
			else
			{
				func_6();
				func_9(3);
				if (iLocal_312)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331);
					if (ENTITY::FIND_ANIM_EVENT_PHASE(func_5(), "exit_michael", "WalkInterruptible", &fVar6, &fVar7))
					{
						if (fVar3 >= fVar6 && fVar3 <= fVar7)
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_308 = 12;
						}
					}
				}
			}
			break;
		
		case 12:
			GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
			if (STATS::STAT_GET_INT(-1256798071, &iLocal_332, -1))
			{
				STATS::STAT_SET_INT(-1256798071, iLocal_332 + 1, 1);
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TV_MICHAELS_HOUSE");
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_51 = 0;
			iLocal_312 = 0;
			iLocal_313 = 0;
			iLocal_317 = 1;
			if (Global_30828[4].f_2)
			{
				func_2(4);
			}
			Global_30813 = 0;
			func_30(0, 1, 0, 0, 0, 0);
			iLocal_308 = 0;
			break;
	}
}

void func_2(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_5 = 0;
		if (Global_30828[iParam0].f_2 && Global_30828[iParam0].f_7 == 0)
		{
			Global_30828[iParam0].f_7 = 1;
		}
		Global_30828[iParam0].f_8 = 0;
	}
}

int func_3(var uParam0)
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(uParam0))
	{
		return 1;
	}
	return 0;
}

char* func_4()
{
	sVar0 = "ScriptEvent";
	return sVar0;
}

char* func_5()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "safe@franklin@ig_10";
			}
			else
			{
				sVar0 = "safe@michael@ig_4";
			}
			break;
		
		case -693032058:
			sVar0 = "safe@michael@ig_3";
			break;
		
		case -1620762220:
			sVar0 = "safe@franklin@ig_9";
			break;
		
		case -1630172026:
			sVar0 = "safe@franklin@ig_13";
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (!Global_76622)
			{
				if (bLocal_50)
				{
					sVar0 = "safe@trevor@ig_6";
				}
				else
				{
					sVar0 = "safe@michael@ig_1";
				}
			}
			else
			{
				sVar0 = "MP_SAFEHOUSEWHISKEY@";
			}
			break;
		
		case 948080762:
			sVar0 = "safe@trevor@ig_8";
			break;
		
		case 1022578470:
			sVar0 = "safe@trevor@ig_7";
			break;
		
		case 2057223314:
			if (bLocal_50)
			{
				sVar0 = "safe@trevor@ig_5";
			}
			else
			{
				sVar0 = "safe@michael@ig_5";
			}
			break;
		
		case 469594741:
			sVar0 = "safe@michael@ig_2";
			break;
		
		case -35679191:
			sVar0 = "safe@franklin@ig_11";
			break;
	}
	return sVar0;
}

void func_6()
{
	if (!iLocal_312)
	{
		func_7(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_312 = 1;
		}
	}
}

void func_7(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

int func_8()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_9(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!iLocal_321 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.27f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_sh_lighter_sparks", func_10(), 0f, 0f, 0.05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_321 = 1;
			}
			if (!iLocal_320 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.275f)
			{
				uLocal_337 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_lighter_flame", func_10(), 0f, 0f, 0.05f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_320 = 1;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_337) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.45f)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_337, 0);
			}
			if (!iLocal_319 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.346f)
			{
				uLocal_336 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_sh_cig_smoke", func_12(), Local_360, 0f, 0f, 0f, 1065353216, 0, 0, 0);
				iLocal_319 = 1;
			}
			if (!iLocal_322 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.5f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_363, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.5f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_366, Local_369, 31086, 1065353216, 0, 0, 0);
				iLocal_323 = 1;
			}
			if (!iLocal_324 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.95f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_363, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_324 = 1;
			}
			if (!iLocal_325 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.95f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_366, Local_369, 31086, 1065353216, 0, 0, 0);
				iLocal_325 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_322 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.01f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_363, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.01f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_366, Local_369, 31086, 1065353216, 0, 0, 0);
				iLocal_323 = 1;
			}
			break;
		
		case 2:
			if (!iLocal_322 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.01f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), Local_363, 0f, 0f, 0f, 31086, 1065353216, 0, 0, 0);
				iLocal_322 = 1;
			}
			if (!iLocal_323 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.01f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), Local_366, Local_369, 31086, 1065353216, 0, 0, 0);
				iLocal_323 = 1;
			}
			break;
		
		case 3:
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_336) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) > 0.35f)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_336, 0);
			}
			break;
	}
}

var func_10()
{
	switch (iLocal_55)
	{
		case -257549932:
		case -693032058:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -680040094, 0, 0, 1);
			break;
		
		case -1630172026:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 2f, -680040094, 0, 0, 1);
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, 488156118, 0, 0, 1);
			break;
		
		case -35679191:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, 21833643, 0, 0, 1);
			break;
		
		case 2057223314:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -1296774200, 0, 0, 1);
			break;
	}
	return uVar0;
}

Vector3 func_11()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				Var0 = { 9.95f, 528.9f, 173.6282f };
			}
			else
			{
				Var0 = { -807.5781f, 171.357f, 75.7407f };
			}
			break;
		
		case -693032058:
			Var0 = { -805.881f, 173.8548f, 71.8347f };
			break;
		
		case -1620762220:
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		
		case -1630172026:
			Var0 = { -10.6378f, -1441.314f, 30.1015f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				Var0 = { -1154.343f, -1522.6f, 9.6327f };
			}
			else
			{
				Var0 = { -800.4056f, 183.4856f, 71.6055f };
			}
			break;
		
		case 948080762:
			Var0 = { 1972.142f, 3813.243f, 32.4271f };
			break;
		
		case 1022578470:
			Var0 = { -1145.91f, -1514.944f, 9.6327f };
			break;
		
		case 2057223314:
			Var0 = { 1976.94f, 3821.242f, 33.3266f };
			break;
		
		case 469594741:
			Var0 = { -804.2254f, 184.3325f, 72.6042f };
			break;
		
		case -35679191:
			Var0 = { -8.8011f, 515.7225f, 173.6282f };
			break;
	}
	return Var0;
}

var func_12()
{
	switch (iLocal_55)
	{
		case -693032058:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -693032058, 0, 0, 1);
			break;
		
		case -1620762220:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 2.5f, -1620762220, 0, 0, 1);
			break;
		
		case 788975200:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, 788975200, 0, 0, 1);
			break;
		
		case -1533900808:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -1533900808, 0, 0, 1);
			break;
		
		case 1384562503:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, 1384562503, 0, 0, 1);
			break;
		
		case -1630172026:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -1630172026, 0, 0, 1);
			break;
		
		case 2057223314:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 3f, -1620762220, 0, 0, 1);
			break;
		
		case 469594741:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, 469594741, 0, 0, 1);
			break;
		
		case -35679191:
			uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 5f, -35679191, 0, 0, 1);
			break;
	}
	return uVar0;
}

void func_13()
{
	iLocal_320 = 0;
	iLocal_321 = 0;
	iLocal_319 = 0;
	iLocal_322 = 0;
	iLocal_323 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
}

void func_14(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_30828[iParam0].f_4 = 1;
	}
}

int func_15(int iParam0)
{
	iVar0 = 64;
	iVar1 = (PAD::GET_CONTROL_VALUE(2, 218) - 127);
	if (iParam0 || SYSTEM::TIMERA() > 300)
	{
		if (iVar1 > (0 + iVar0) || iVar1 < (0 - iVar0))
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	return 0;
}

void func_16(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_15(0))
		{
			if (!iLocal_36)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, 1);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_36 = 1;
			}
		}
		else if (iLocal_36)
		{
			iLocal_36 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 219) - 127);
		if (!iLocal_37)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = MISC::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_38 = MISC::GET_GAME_TIMER();
				iLocal_37 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_39 = 1;
			}
			else if (iLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", 0, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, 1);
					}
					iLocal_39 = 0;
				}
			}
		}
		if (iLocal_37)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_60(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_19(iParam0))
		{
			GRAPHICS::SET_TV_CHANNEL(-1);
			GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iParam1, func_18(iParam2), iParam4);
			GRAPHICS::SET_TV_CHANNEL(iParam1);
		}
	}
	StringCopy(&Global_30906, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
}

char* func_18(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_19(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_2)
		{
			return 1;
		}
	}
	return 0;
}

void func_20()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 224))
	{
		func_21(203, 1);
		if (STATS::STAT_GET_INT(-457571384, &iLocal_334, -1))
		{
			STATS::STAT_SET_INT(-457571384, iLocal_334 + 1, 1);
		}
		if (Global_30828[4].f_2)
		{
			iLocal_309 = 0;
		}
		else
		{
			iLocal_311 = 1;
			iLocal_309 = 1;
		}
		iLocal_308 = 10;
	}
}

void func_21(int iParam0, int iParam1)
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

int func_22()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 222))
	{
		if (func_43("TV_HLP4") || func_43("TV_HLP3"))
		{
			HUD::CLEAR_HELP(1);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		func_23();
		PLAYER::PLAYER_DETACH_VIRTUAL_BOUND();
		PLAYER::SET_PLAYER_CLOTH_PACKAGE_INDEX(0);
		iLocal_312 = 0;
		if (iLocal_328)
		{
			PAD::_RESET_INPUT_MAPPING_SCHEME();
			iLocal_328 = 0;
		}
		iLocal_310 = 5;
		return 1;
	}
	return 0;
}

void func_23()
{
	if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(func_28(), func_27(), 2);
	TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, sLocal_338, "exit_michael", 8f, -8f, 0, 0, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_24(), uLocal_331, "base_remote", sLocal_338, 1000f, -8f, 0, 1148846080);
	if (PED::IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331))
	{
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_331, 0);
	}
}

var func_24()
{
	uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(func_11(), 10f, 542291840, 0, 0, 1);
	return uVar0;
}

void func_25()
{
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, func_18(1), 0);
	if (func_26(22))
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_18(12), 0);
	}
	else
	{
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(1, func_18(2), 0);
	}
}

int func_26(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

Vector3 func_27()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
			{
				Var0 = { 0f, 0f, -68.75494f };
			}
			else
			{
				Var0 = { 0f, 0f, -179.9088f };
			}
			break;
		
		case -693032058:
			Var0 = { 0f, 0f, 21.1994f };
			break;
		
		case -1620762220:
			Var0 = { 0f, 0f, -128.34f };
			break;
		
		case -1630172026:
			Var0 = { 0f, 0f, 0.5729f };
			break;
		
		case 948080762:
			Var0 = { 0f, 0f, 2.8647f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				Var0 = { 0f, 0f, 34.9504f };
			}
			else
			{
				Var0 = { 0f, 0f, 21.1994f };
			}
			break;
		
		case 1022578470:
			Var0 = { 0f, 0f, 72.76564f };
			break;
		
		case 2057223314:
			Var0 = { 0f, 0f, -9.1673f };
			break;
		
		case 469594741:
			Var0 = { 0f, 0f, 21.1994f };
			break;
		
		case -35679191:
			Var0 = { 0f, 0f, -29.793f };
			break;
	}
	return Var0;
}

Vector3 func_28()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_55)
	{
		case -257549932:
			if (!bLocal_49)
			{
				Var0 = { -806.82f, 170.03f, 75.74f };
			}
			else
			{
				Var0 = { 10.22f, 527.73f, 174.11f };
			}
			break;
		
		case -693032058:
			Var0 = { -805.17f, 173.99f, 72.69f };
			break;
		
		case -1620762220:
			Var0 = { -9.66f, -1429.48f, 31.21f };
			break;
		
		case -1630172026:
			Var0 = { -10.07f, -1440.64f, 30.36f };
			break;
		
		case 948080762:
			Var0 = { 1972.852f, 3812.42f, 33.28f };
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				Var0 = { -1153.829f, -1523.314f, 10.56f };
			}
			else
			{
				Var0 = { -800.68f, 184.18f, 72.55f };
			}
			break;
		
		case 1022578470:
			Var0 = { -1146.284f, -1514.13f, 10.8468f };
			break;
		
		case 2057223314:
			Var0 = { 1976.75f, 3822.76f, 33.28f };
			break;
		
		case 469594741:
			Var0 = { -804.87f, 185.69f, 72.75f };
			break;
		
		case -35679191:
			Var0 = { -9.1f, 516.83f, 173.62f };
			break;
	}
	return Var0;
}

void func_29()
{
	Global_22211.f_6 = 1;
}

void func_30(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_39(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_38())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_37(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_39(0);
		HUD::THEFEED_RESUME();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_37(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_35(PLAYER::PLAYER_ID())) && !func_32(PLAYER::PLAYER_ID(), 0)) && !func_31()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_35(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_31()
{
	return MISC::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_32(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_34();
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

int func_34()
{
	return Global_1312745;
}

int func_35(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return 1;
	}
	if (func_36())
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

bool func_36()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_37(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_38()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_39(int iParam0)
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

float func_40(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

int func_41(bool bParam0, bool bParam1, bool bParam2)
{
	if (MISC::IS_MINIGAME_IN_PROGRESS())
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

void func_42(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_43(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_44()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_45()
{
	switch (iLocal_55)
	{
		case -693032058:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.17f, 173.98f, 72.69f, 0.1f, -693032058, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.17f, 173.98f, 72.69f, 0.1f, -693032058, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.13f, 173.86f, 72.68f, 0.1f, -680040094, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, -680040094, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-805.09f, 173.83f, 72.68f, 0.1f, 996113921, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-805.13f, 173.86f, 72.68f, 0.1f, 996113921, 0, 0, 1), 1);
						if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-804.45f, 172.78f, 72.33f, 0.1f, 542291840, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-804.45f, 172.78f, 72.33f, 0.1f, 542291840, 0, 0, 1), 1);
							return 1;
						}
					}
				}
			}
			break;
		
		case -1620762220:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				return 1;
			}
			break;
		
		case -35679191:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-8.9f, 517.01f, 174f, 1f, 21833643, 0))
			{
				return 1;
			}
			break;
		
		case -1630172026:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, -1630172026, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, -1630172026, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, -680040094, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, -680040094, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-10.3f, -1440.94f, 30.62f, 0.5f, 996113921, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-10.3f, -1440.94f, 30.62f, 0.5f, 996113921, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			break;
		
		case 788975200:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 788975200, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 788975200, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.57f, 0.5f, 788975200, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.57f, 0.5f, 788975200, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case -1533900808:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, -1533900808, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, -1533900808, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case 1384562503:
			if (bLocal_50)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 1384562503, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 1384562503, 0, 0, 1), 1);
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1153.82f, -1523.31f, 10.51f, 0.5f, 488156118, 0, 0, 1), 1);
						return 1;
					}
				}
			}
			else if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, -1533900808, 0, 0, 1), 1);
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-800.68f, 184.18f, 72.55f, 0.5f, 488156118, 0, 0, 1), 1);
					return 1;
				}
			}
			break;
		
		case 2057223314:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(1976.92f, 3821.21f, 33.32f, 0.5f, -1620762220, 0))
			{
				return 1;
			}
			break;
		
		case 469594741:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_56, 1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_50(0)) && !func_49())
				{
					if ((Global_95672 && Global_95673) || func_48())
					{
						return 0;
					}
					if (func_47(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_47(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
		{
			if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
			{
				if (MISC::ABSF((Param0.z - Param3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.x - Param3.x)) <= fParam6)
	{
		if (MISC::ABSF((Param0.y - Param3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_48()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_49()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar2, -1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!PED::IS_PED_INJURED(uVar2[iVar1]))
		{
			if (bLocal_50)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == 225514697)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == -1692214353)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

int func_50(int iParam0)
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

void func_51()
{
	switch (iLocal_310)
	{
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_329))
			{
				uLocal_329 = CAM::CREATE_CAMERA(26379945, 0);
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_330))
			{
				uLocal_330 = CAM::CREATE_CAMERA(26379945, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_329) && CAM::DOES_CAM_EXIST(uLocal_330))
			{
				CAM::SET_CAM_PARAMS(uLocal_329, Local_346, Local_349, fLocal_352, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_330, Local_339, Local_342, fLocal_345, 0, 1, 1, 2);
				if (Global_30828[4].f_2)
				{
					CAM::SET_CAM_ACTIVE(uLocal_329, 1);
					Local_378 = { Local_349 };
					CAM::SHAKE_CAM(uLocal_329, "HAND_SHAKE", (0.2f / 3f));
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uLocal_330, 1);
					Local_378 = { Local_342 };
					CAM::SHAKE_CAM(uLocal_330, "HAND_SHAKE", (0.2f / 3f));
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				iLocal_310 = 4;
			}
			break;
		
		case 2:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
			{
				AUDIO::START_AUDIO_SCENE("TV_MICHAELS_HOUSE");
			}
			if (CAM::DOES_CAM_EXIST(uLocal_330))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_330))
				{
					CAM::SET_CAM_ACTIVE(uLocal_329, 0);
				}
			}
			if (CAM::DOES_CAM_EXIST(uLocal_329))
			{
				if (!CAM::IS_CAM_ACTIVE(uLocal_329))
				{
					Local_378 = { Local_349 };
					CAM::SHAKE_CAM(uLocal_329, "HAND_SHAKE", (0.2f / 3f));
					CAM::SET_CAM_ACTIVE(uLocal_329, 1);
					iLocal_310 = 4;
				}
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_329))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_329))
				{
					CAM::SET_CAM_ACTIVE(uLocal_329, 0);
				}
			}
			if (CAM::DOES_CAM_EXIST(uLocal_330))
			{
				if (!CAM::IS_CAM_ACTIVE(uLocal_330))
				{
					Local_378 = { Local_342 };
					CAM::SHAKE_CAM(uLocal_330, "HAND_SHAKE", (0.2f / 3f));
					CAM::SET_CAM_ACTIVE(uLocal_330, 1);
					iLocal_310 = 4;
				}
			}
			break;
		
		case 4:
			if (Global_30828[4].f_2)
			{
				func_52(uLocal_329, Local_378);
			}
			else
			{
				func_52(uLocal_330, Local_378);
			}
			break;
		
		case 5:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TV_MICHAELS_HOUSE");
			}
			if (Global_30828[4].f_2)
			{
				Local_353 = { -806.2905f, 173.187f, 73.3211f };
				Local_356 = { -1.0904f, -0.0034f, -94.3685f };
				fLocal_359 = 50f;
				if (CAM::DOES_CAM_EXIST(uLocal_329))
				{
					CAM::SET_CAM_PARAMS(uLocal_329, Local_346, Local_349, fLocal_352, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_329, Local_353, Local_356, fLocal_359, 3000, 0, 0, 2);
				}
			}
			else
			{
				Local_353 = { -803.3088f, 175.5172f, 73.184f };
				Local_356 = { 2.48f, -0.0034f, 149.8074f };
				fLocal_359 = 50f;
				if (CAM::DOES_CAM_EXIST(uLocal_330))
				{
					CAM::SET_CAM_PARAMS(uLocal_330, Local_339, Local_342, fLocal_345, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_330, Local_353, Local_356, fLocal_359, 2000, 0, 0, 2);
				}
			}
			iLocal_310 = 0;
			break;
	}
}

void func_52(var uParam0, struct<3> Param1)
{
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		Var0 = { CAM::GET_CAM_ROT(uParam0, 2) };
		Var3 = { Param1 };
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			fVar9 = PAD::GET_CONTROL_NORMAL(2, 240);
			fVar10 = PAD::GET_CONTROL_NORMAL(2, 239);
			fVar11 = ((fVar9 - 0.5f) * (-6.5f * 2f));
			fVar12 = ((fVar10 - 0.5f) * (-12.5f * 2f));
			Var3.x = (Var3.x + fVar11);
			Var3.z = (Var3.z + fVar12);
			while (Var3.z < -180f)
			{
				Var3.z = (Var3.z + 360f);
			}
			while (Var3.z > 180f)
			{
				Var3.z = (Var3.z - 360f);
			}
			while (Var3.x < -180f)
			{
				Var3.x = (Var3.x + 360f);
			}
			while (Var3.x > 180f)
			{
				Var3.x = (Var3.x - 360f);
			}
			fVar13 = (Var3.z - Var0.z);
			fVar14 = func_53(fVar13, -180f, 180f);
			Var6 = { Var0 + Var3 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var6.z = (Var0.z + (fVar14 * 0.25f));
		}
		else
		{
			func_7(&uVar15, &uVar16, &iVar17, &iVar18, 0);
			if ((iVar17 < 32 && iVar17 > -32) && (iVar18 < 32 && iVar18 > -32))
			{
				if (iVar17 < 32 && iVar17 > -32)
				{
					iVar17 = 0;
				}
				else if (iVar17 < 0)
				{
					iVar17 = (iVar17 - 32);
				}
				else
				{
					iVar17 += 32;
				}
				if (iVar18 < 32 && iVar18 > -32)
				{
					iVar18 = 0;
				}
				else if (iVar18 < 0)
				{
					iVar18 = (iVar18 - 32);
				}
				else
				{
					iVar18 += 32;
				}
			}
			iVar17 = (iVar17 * -1);
			iVar18 = (iVar18 * -1);
			if (PAD::IS_LOOK_INVERTED())
			{
				iVar18 = (iVar18 * -1);
			}
			Var3.x = (Var3.x + (IntToFloat(iVar18) * 0.05f));
			Var3.z = (Var3.z + (IntToFloat(iVar17) * 0.1f));
			while (Var3.z < -180f)
			{
				Var3.z = (Var3.z + 360f);
			}
			while (Var3.z > 180f)
			{
				Var3.z = (Var3.z - 360f);
			}
			while (Var0.z < -180f)
			{
				Var0.z = (Var0.z + 360f);
			}
			while (Var0.z > 180f)
			{
				Var0.z = (Var0.z - 360f);
			}
			fVar19 = (Var3.z - Var0.z);
			fVar20 = func_53(fVar19, -180f, 180f);
			Var6 = { Var0 + Var3 - Var0 * Vector(0.25f, 0.25f, 0.25f) };
			Var6.z = (Var0.z + (fVar20 * 0.25f));
		}
		while (Var6.z < -180f)
		{
			Var6.z = (Var6.z + 360f);
		}
		while (Var6.z > 180f)
		{
			Var6.z = (Var6.z - 360f);
		}
		CAM::SET_CAM_ROT(uParam0, Var6, 2);
	}
}

float func_53(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fVar1 = SYSTEM::TO_FLOAT(SYSTEM::FLOOR(((fParam0 - fParam1) / fVar0)));
	return (fParam0 - (fVar1 * fVar0));
}

int func_54()
{
	if (((func_59() && func_58()) && func_57()) && func_55())
	{
		return 1;
	}
	return 0;
}

int func_55()
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(func_56(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_56()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "SAFEHOUSE_FRANKLIN_USE_BONG";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_USE_BONG";
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_50)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_BEER";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_BEER";
			}
			break;
		
		case -1620762220:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_BEER";
			break;
		
		case 948080762:
			sVar0 = "SAFEHOUSE_TREVOR_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SAFEHOUSE_TREVOR_RASBERRY";
			break;
		
		case 469594741:
			sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHEATGRASS";
			break;
		
		case -35679191:
			sVar0 = "SAFEHOUSE_FRANKLIN_DRINK_WINE";
			break;
		
		case -693032058:
			sVar0 = "SAFEHOUSE_MICHAEL_SIT_SOFA";
			break;
		
		case -1630172026:
			sVar0 = "SAFEHOUSE_FRANKLIN_SOFA";
			break;
	}
	return sVar0;
}

int func_57()
{
	iVar0 = func_24();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		iLocal_327 = 1;
		return 1;
	}
	return 0;
}

int func_59()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_338);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_338))
	{
		iLocal_326 = 1;
		return 1;
	}
	return 0;
}

int func_60(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_30828[iParam0].f_6)
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	func_62();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_62()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_66(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_65(PLAYER::PLAYER_PED_ID());
			if (func_64(iVar0) && (!func_63(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_64(Global_111638.f_2358.f_539.f_4321))
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

bool func_63(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_64(int iParam0)
{
	return iParam0 < 3;
}

int func_65(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_66(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_66(int iParam0)
{
	if (func_64(iParam0))
	{
		return func_67(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_67(int iParam0)
{
	return Global_1798[iParam0];
}

int func_68(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_76(iParam0, iVar2);
			if (func_72(iVar5, 14, iVar4, -1))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = func_69(iParam0, iVar3);
				if (func_72(iVar5, iVar3, iVar4, -1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
		if (iVar6 > 0)
		{
			iVar7 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, -1757550583, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, 66092876, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_71(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_70(iParam0, iVar1, iVar2, iParam1);
}

int func_70(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_71(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
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

int func_71(int iParam0)
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

int func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == 225514697)
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1692214353)
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == -1686040670)
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 1, 3);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_73(iParam0, iParam2, 1, 4);
					}
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_75(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_74(iParam0, func_71(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_71(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar38, &Var21);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_76556.f_13[iParam2] = Var21.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return 113;
			break;
		
		case -1692214353:
			return 175;
			break;
		
		case -1686040670:
			return 155;
			break;
	}
	switch (iParam0)
	{
		case 1885233650:
			return 327;
			break;
		
		case -1667301416:
			return 327;
			break;
	}
	return -99;
}

int func_76(int iParam0, int iParam1)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_80(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_77(iParam0, iVar0, iVar1, iParam1);
}

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_80(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILES::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_79(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_79(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_78(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_80(iParam3);
}

int func_78(int iParam0, int iParam1)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	switch (iVar0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_75(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var20);
		iVar38 = 0;
		iVar39 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_71(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!FILES::IS_CONTENT_ITEM_LOCKED(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_74(iParam0, func_71(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_80(int iParam0)
{
	switch (iParam0)
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
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_81()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_82()
{
	if (Global_95666 != -1)
	{
		return MISC::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_83(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_84(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_84(int iParam0)
{
	return func_85(iParam0, Global_41431);
}

int func_85(int iParam0, int iParam1)
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

void func_86()
{
	PLAYER::PLAYER_DETACH_VIRTUAL_BOUND();
	PLAYER::SET_PLAYER_CLOTH_PACKAGE_INDEX(0);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(func_24(), func_5(), "tv_base_remote", 2))
	{
		ENTITY::STOP_ENTITY_ANIM(func_24(), "tv_base_remote", func_5(), -1000f);
	}
	if (((((func_43(func_88()) || func_43("TV_HLP0")) || func_43("TV_HLP1")) || func_43("TV_HLP2")) || func_43("TV_HLP3")) || func_43("TV_HLP4"))
	{
		HUD::CLEAR_HELP(1);
	}
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MICHAEL_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_MICHAELS_HOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TV_MICHAELS_HOUSE");
	}
	if (iLocal_335 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_335);
	}
	if (iLocal_326)
	{
		STREAMING::REMOVE_ANIM_DICT(func_5());
	}
	if (iLocal_327)
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (CAM::DOES_CAM_EXIST(uLocal_329))
	{
		CAM::SET_CAM_ACTIVE(uLocal_329, 0);
		CAM::DESTROY_CAM(uLocal_329, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_330))
	{
		CAM::SET_CAM_ACTIVE(uLocal_330, 0);
		CAM::DESTROY_CAM(uLocal_330, 0);
	}
	func_87();
	if (iLocal_328)
	{
		PAD::_RESET_INPUT_MAPPING_SCHEME();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_87()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_41(1, 0, 1)) && iLocal_51)
		{
			func_30(0, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
}

char* func_88()
{
	switch (iLocal_55)
	{
		case -257549932:
			if (bLocal_49)
			{
				sVar0 = "SA_BONG2";
			}
			else
			{
				sVar0 = "SA_BONG";
			}
			break;
		
		case -693032058:
			sVar0 = "SA_CIGAR";
			break;
		
		case -1620762220:
			sVar0 = "SA_BEER";
			break;
		
		case -1630172026:
			sVar0 = "SA_SPLFF";
			break;
		
		case 788975200:
			sVar0 = "SA_WHSKY";
			break;
		
		case -1533900808:
			sVar0 = "SA_WHSKY";
			break;
		
		case 1384562503:
			sVar0 = "SA_WHSKY";
			break;
		
		case 948080762:
			sVar0 = "SA_GAS";
			break;
		
		case 1022578470:
			sVar0 = "SA_MRJAM";
			break;
		
		case 2057223314:
			sVar0 = "SA_BEER";
			break;
		
		case 469594741:
			sVar0 = "SA_WHEAT";
			break;
		
		case -35679191:
			sVar0 = "SA_WINE";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

