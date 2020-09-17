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
	Local_312 = { 1.3376f, 525.3682f, 174.5992f };
	sLocal_322 = "safe@franklin@ig_14";
	Local_323 = { 2.58f, 527.82f, 173.65f };
	Local_326 = { 0f, 0f, 13f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_56();
	}
	if (func_49() == 1)
	{
		bLocal_49 = true;
	}
	if ((func_46(9) || (func_45() && !func_44())) || AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		func_56();
	}
	Local_309 = { ScriptParam_0.f_1[0] };
	Local_309 = { 2.1801f, 526.4401f, 173.6278f };
	while (true)
	{
		SYSTEM::WAIT(0);
		if (((((bLocal_49 && !func_43()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_309, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1) < 3f)
			{
				switch (iLocal_307)
				{
					case 0:
						if (func_40())
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
		}
		else
		{
			func_56();
		}
	}
}

void func_1()
{
	Var0 = { 1.5f, 1.5f, 1.5f };
	fVar3 = 0f;
	switch (iLocal_308)
	{
		case 0:
			if ((func_35(Local_309, Var0) && !func_34()) && !func_33("FAM_WEAPDIS"))
			{
				if (PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), Local_312, 90f) || iLocal_317)
				{
					func_32("TV_HLP0");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
					{
						AUDIO::START_AUDIO_SCENE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
					}
					iLocal_308 = 1;
				}
			}
			break;
		
		case 1:
			if (func_31(1, 0, 1))
			{
				if (func_35(Local_309, Var0) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_309, 3f, 542291840, 0))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if ((!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && CONTROLS::IS_CONTROL_PRESSED(0, 51))
						{
							if (func_33("TV_HLP0"))
							{
								UI::CLEAR_HELP(1);
							}
							GRAPHICS::ENABLE_MOVIE_SUBTITLES(1);
							GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(Local_312, 3f, 0);
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
							func_21(1, 1, 1, 0, 0, 0);
							func_20();
							iLocal_308 = 2;
						}
					}
				}
				else
				{
					if (func_33("TV_HLP0"))
					{
						UI::CLEAR_HELP(1);
					}
					iLocal_317 = 0;
					iLocal_308 = 0;
				}
			}
			break;
		
		case 2:
			func_19();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
			if (Global_30828[1].f_2)
			{
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "enter_no_remote", 8f, -4f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "enter_no_remote_remote", sLocal_322, 8f, -4f, 0, 1148846080);
			}
			else
			{
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "enter", 8f, -4f, 0, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "enter_remote", sLocal_322, 8f, -4f, 0, 1148846080);
			}
			if (PED::_0x7F2F4F13AC5257EF(uLocal_319))
			{
				PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_319, 0);
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				uLocal_321 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				if (Global_30828[1].f_2)
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_321, uLocal_319, "enter_no_remote_cam", sLocal_322);
				}
				else
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_321, uLocal_319, "enter_cam", sLocal_322);
				}
				CAM::SHAKE_CAM(uLocal_321, "HAND_SHAKE", 0.2f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				CAM::SHAKE_CAM(uLocal_321, "HAND_SHAKE", 0.2f);
			}
			else
			{
				CAM::DESTROY_ALL_CAMS(0);
			}
			iLocal_308 = 3;
			break;
		
		case 3:
			func_19();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!Global_30828[1].f_2)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319) > 0.691f)
				{
					func_16();
					func_12(1, 0, 1, 0, 0);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319) > 0.9f)
			{
				uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "base", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "base_remote", sLocal_322, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_319, 1);
				func_32("TV_HLP7");
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_VINEWOOD"))
				{
					AUDIO::START_AUDIO_SCENE("TV_FRANKLINS_HOUSE_VINEWOOD");
				}
				iLocal_308 = 5;
			}
			break;
		
		case 5:
			func_19();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!func_8())
			{
				if (!func_33("TV_HLP3"))
				{
					func_32("TV_HLP7");
				}
				func_7(0, 1);
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
					AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "exit", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "exit_remote", sLocal_322, 8f, -8f, 0, 1148846080);
					if (func_6(uLocal_321))
					{
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_321, uLocal_319, "exit_cam", sLocal_322);
					}
					if (PED::_0x7F2F4F13AC5257EF(uLocal_319))
					{
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_319, 0);
					}
					iLocal_308 = 7;
				}
				else if (func_5(0))
				{
					uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
					AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "idle_a", 8f, -8f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "idle_a_remote", sLocal_322, 8f, -8f, 0, 1148846080);
					if (PED::_0x7F2F4F13AC5257EF(uLocal_319))
					{
						PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_319, 0);
					}
					iLocal_316 = 1;
					iLocal_308 = 6;
					CONTROLS::STOP_PAD_SHAKE(2);
					CONTROLS::_0xA0CEFCEA390AAB9B(2);
				}
			}
			else
			{
				iLocal_308 = 7;
			}
			break;
		
		case 6:
			func_19();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_319))
			{
				if (iLocal_316)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319);
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
						iLocal_316 = 0;
					}
				}
			}
			else
			{
				uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "base", 8f, -8f, 64, 0, 1148846080, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "base_remote", sLocal_322, 8f, -8f, 64, 1148846080);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_319, 1);
				iLocal_308 = 5;
			}
			break;
		
		case 7:
			func_19();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_VINEWOOD"))
			{
				AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_VINEWOOD");
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_319))
			{
				iLocal_308 = 8;
			}
			else
			{
				func_3();
				if (iLocal_315)
				{
					fVar3 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_319);
					if (ENTITY::FIND_ANIM_EVENT_PHASE(sLocal_322, "exit", "WalkInterruptible", &fVar4, &fVar5))
					{
						if (fVar3 >= fVar4 && fVar3 <= fVar5)
						{
							AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_308 = 8;
						}
					}
				}
			}
			break;
		
		case 8:
			if (STATS::STAT_GET_INT(-1019679016, &iLocal_320, -1))
			{
				STATS::STAT_SET_INT(-1019679016, iLocal_320 + 1, 1);
			}
			BRAIN::_0x6D6840CEE8845831("chop");
			if (func_6(uLocal_321))
			{
				CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_51 = 0;
			iLocal_315 = 0;
			iLocal_317 = 1;
			if (Global_30828[1].f_2)
			{
				func_2(1);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_VINEWOOD"))
			{
				AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_VINEWOOD");
			}
			Global_30813 = 0;
			func_21(0, 1, 1, 0, 0, 0);
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

void func_3()
{
	if (!iLocal_315)
	{
		func_4(&iVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((iVar0 < -64 || iVar0 > 64) || iVar1 < -64) || iVar1 > 64)
		{
			iLocal_315 = 1;
		}
	}
}

void func_4(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

int func_5(int iParam0)
{
	iVar0 = 64;
	iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 218) - 127);
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

int func_6(var uParam0)
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_7(bool bParam0, bool bParam1)
{
	iVar0 = 64;
	if (bParam0)
	{
		if (func_5(0))
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
		iVar1 = (CONTROLS::GET_CONTROL_VALUE(2, 219) - 127);
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
				iLocal_38 = GAMEPLAY::GET_GAME_TIMER();
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
				iLocal_38 = GAMEPLAY::GET_GAME_TIMER();
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
			if (iVar1 == 0 || GAMEPLAY::GET_GAME_TIMER() > iLocal_38 + 24)
			{
				iLocal_37 = 0;
			}
		}
	}
}

int func_8()
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 222))
	{
		if ((((((func_33(func_11()) || func_33("TV_HLP0")) || func_33("TV_HLP1")) || func_33("TV_HLP2")) || func_33("TV_HLP3")) || func_33("TV_HLP4")) || func_33("TV_HLP7"))
		{
			UI::CLEAR_HELP(1);
		}
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		func_10();
		func_9();
		iLocal_315 = 0;
		return 1;
	}
	return 0;
}

void func_9()
{
	if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
	uLocal_319 = PED::CREATE_SYNCHRONIZED_SCENE(Local_323, Local_326, 2);
	AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_319, sLocal_322, "exit", 8f, -8f, 0, 0, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(func_18(), uLocal_319, "exit_remote", sLocal_322, 8f, -8f, 0, 1148846080);
	if (func_6(uLocal_321))
	{
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_321, uLocal_319, "exit_cam", sLocal_322);
	}
	if (PED::_0x7F2F4F13AC5257EF(uLocal_319))
	{
		PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_319, 0);
	}
}

void func_10()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iLocal_329 == 1)
		{
			CONTROLS::_0x643ED62D5EA3BEBD();
			iLocal_329 = 0;
		}
	}
}

char* func_11()
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

void func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_15(iParam0))
		{
			return;
		}
		Global_30828[iParam0].f_5 = 1;
		Global_30828[iParam0] = iParam1;
		Global_30828[iParam0].f_1 = iParam2;
		Global_30828[iParam0].f_9 = iParam4;
		Global_30828[iParam0].f_7 = iParam3;
		if (func_14(iParam0))
		{
			GRAPHICS::SET_TV_CHANNEL(-1);
			GRAPHICS::_0xF7B38B8305F1FE8B(iParam1, func_13(iParam2), iParam4);
			GRAPHICS::SET_TV_CHANNEL(iParam1);
		}
	}
	StringCopy(&Global_30906, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
}

char* func_13(int iParam0)
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

int func_14(int iParam0)
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

int func_15(int iParam0)
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

void func_16()
{
	GRAPHICS::_0xF7B38B8305F1FE8B(0, func_13(1), 0);
	if (func_17(22))
	{
		GRAPHICS::_0xF7B38B8305F1FE8B(1, func_13(12), 0);
	}
	else
	{
		GRAPHICS::_0xF7B38B8305F1FE8B(1, func_13(2), 0);
	}
}

int func_17(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

var func_18()
{
	uVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_309, 3f, 542291840, 0, 0, 1);
	return uVar0;
}

void func_19()
{
	Global_22211.f_6 = 1;
}

void func_20()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (iLocal_329 == 0)
		{
			CONTROLS::_0x3D42B92563939375("SOFA ACTIVITY");
			iLocal_329 = 1;
		}
	}
}

void func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_30(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_29())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_30(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_26(PLAYER::PLAYER_ID())) && !func_23(PLAYER::PLAYER_ID(), 0)) && !func_22()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_26(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_22()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_23(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_24(-1, 0) == 8;
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

int func_24(int iParam0, bool bParam1)
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

int func_25()
{
	return Global_1312745;
}

int func_26(int iParam0)
{
	if (func_23(iParam0, 0))
	{
		return 1;
	}
	if (func_27())
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

bool func_27()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3)
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

int func_29()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
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

int func_31(bool bParam0, bool bParam1, bool bParam2)
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

void func_32(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_33(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_34()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_35(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_39(0)) && !func_38())
				{
					if ((Global_95672 && Global_95673) || func_37())
					{
						return 0;
					}
					if (func_36(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_36(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_37()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_38()
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
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_50 && !bLocal_49)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == -1692214353)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
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

int func_39(int iParam0)
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

int func_40()
{
	if (func_42() && func_41())
	{
		return 1;
	}
	return 0;
}

int func_41()
{
	iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_309, 10f, 542291840, 0, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_42()
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_322);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_322))
	{
		iLocal_318 = 1;
		return 1;
	}
	return 0;
}

int func_43()
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CHOICE_INT"))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return 1;
		}
	}
	return 0;
}

int func_44()
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

int func_45()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_46(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_47(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_47(int iParam0)
{
	return func_48(iParam0, Global_41431);
}

int func_48(int iParam0, int iParam1)
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

int func_49()
{
	func_50();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_50()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_54(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_53(PLAYER::PLAYER_PED_ID());
			if (func_52(iVar0) && (!func_51(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_52(Global_111638.f_2358.f_539.f_4321))
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

bool func_51(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_52(int iParam0)
{
	return iParam0 < 3;
}

int func_53(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_54(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_54(int iParam0)
{
	if (func_52(iParam0))
	{
		return func_55(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_55(int iParam0)
{
	return Global_1798[iParam0];
}

void func_56()
{
	if ((((((func_33(func_11()) || func_33("TV_HLP0")) || func_33("TV_HLP1")) || func_33("TV_HLP2")) || func_33("TV_HLP3")) || func_33("TV_HLP4")) || func_33("TV_HLP7"))
	{
		UI::CLEAR_HELP(1);
	}
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FRANKLIN_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TV_FRANKLINS_HOUSE_VINEWOOD"))
	{
		AUDIO::STOP_AUDIO_SCENE("TV_FRANKLINS_HOUSE_VINEWOOD");
	}
	if (iLocal_318)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_322);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_321))
	{
		CAM::SET_CAM_ACTIVE(uLocal_321, 0);
		CAM::DESTROY_CAM(uLocal_321, 0);
	}
	func_10();
	if (iLocal_51)
	{
		BRAIN::_0x6D6840CEE8845831("chop");
	}
	func_57();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_57()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_31(1, 0, 1)) && iLocal_51)
		{
			func_21(0, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
}

