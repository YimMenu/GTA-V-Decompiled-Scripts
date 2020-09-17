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
	iLocal_37 = 1;
	Local_286 = { 0f, 0f, 0f };
	Local_289 = { 0f, 0f, 0f };
	fLocal_310 = 1f;
	fLocal_311 = 0f;
	fLocal_312 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_101();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uScriptParam_0))
	{
		iLocal_41 = iScriptParam_0;
		iLocal_40 = ENTITY::GET_ENTITY_MODEL(iLocal_41);
	}
	if (!func_76())
	{
		func_101();
	}
	STREAMING::REQUEST_ANIM_DICT(func_75());
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!func_73())
		{
			func_101();
		}
		switch (iLocal_292)
		{
			case 0:
				if (func_72() && func_70())
				{
					iLocal_292 = 1;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_4();
					func_3();
					func_1();
				}
				break;
			
			case 2:
				break;
		}
	}
}

void func_1()
{
	fVar0 = 0f;
	fVar1 = 1f;
	fVar2 = 0f;
	if (iLocal_306)
	{
		if (!iLocal_308)
		{
			iLocal_309 = GAMEPLAY::GET_GAME_TIMER() + 50;
			iLocal_308 = 1;
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_309)
		{
			if (fLocal_310 < fVar1)
			{
				fLocal_310 = (fLocal_310 + 0.003f);
				if (fLocal_310 > 1f)
				{
					fLocal_310 = 1f;
					iLocal_313 = 1;
				}
				GAMEPLAY::SET_TIME_SCALE(fLocal_310);
			}
			if (fLocal_311 > fVar0)
			{
				fLocal_311 = (fLocal_311 - 0.02f);
				if (fLocal_311 < 0f)
				{
					fLocal_311 = 0f;
					iLocal_314 = 1;
				}
				if (func_2(uLocal_296))
				{
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_296, fLocal_311);
				}
			}
			if (fLocal_312 > fVar2)
			{
				fLocal_312 = (fLocal_312 - 0.004f);
				if (fLocal_312 < 0f)
				{
					fLocal_312 = 0f;
					iLocal_315 = 1;
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(fLocal_312);
			}
			iLocal_308 = 0;
			if ((iLocal_313 && iLocal_314) && iLocal_315)
			{
				iLocal_306 = 0;
			}
		}
	}
}

int func_2(var uParam0)
{
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 && CAM::DOES_CAM_EXIST(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_3()
{
	fVar0 = 5f;
	fVar1 = -0.5f;
	fVar2 = 1f;
	if (bLocal_307)
	{
		if (!iLocal_308)
		{
			iLocal_309 = GAMEPLAY::GET_GAME_TIMER() + 50;
			iLocal_308 = 1;
		}
		else if (GAMEPLAY::GET_GAME_TIMER() > iLocal_309)
		{
			if (fLocal_310 > fVar1)
			{
				fLocal_310 = (fLocal_310 - 0.004f);
				GAMEPLAY::SET_TIME_SCALE(fLocal_310);
			}
			if (fLocal_311 < fVar0)
			{
				fLocal_311 = (fLocal_311 + 0.075f);
				if (func_2(uLocal_296))
				{
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_296, fLocal_311);
				}
			}
			if (fLocal_312 < fVar2)
			{
				fLocal_312 = (fLocal_312 + 0.004f);
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(fLocal_312);
			}
			iLocal_308 = 0;
		}
	}
}

void func_4()
{
	Var0 = { func_69() };
	Var3 = { 1.2f, 1.2f, 1.2f };
	switch (iLocal_293)
	{
		case 0:
			if ((func_64(Var0, Var3) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= (func_63() - 90f)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= (func_63() + 90f))
			{
				func_62();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
				}
				func_60(func_61());
				iLocal_293 = 1;
			}
			break;
		
		case 1:
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (func_59(1, 0, 1))
			{
				if ((((func_64(Var0, Var3) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) >= (func_63() - 90f)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) <= (func_63() + 90f)) && Var6.z > 33f) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
				{
					if ((!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && CONTROLS::IS_CONTROL_PRESSED(2, 51))
					{
						if (func_58(func_61()))
						{
							UI::CLEAR_HELP(1);
						}
						GAMEPLAY::CLEAR_AREA_OF_PROJECTILES(Var0, 3f, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
						if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
						}
						iLocal_36 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, 0);
						}
						func_49(1, 1, 1, 0, 0, 0);
						iLocal_294 = 1;
						iLocal_293 = 2;
					}
				}
				else
				{
					if (func_58(func_61()))
					{
						UI::CLEAR_HELP(1);
					}
					iLocal_293 = 0;
				}
			}
			break;
		
		case 2:
			func_48();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			uLocal_297 = PED::CREATE_SYNCHRONIZED_SCENE(func_47(), func_46(), 2);
			AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_297, func_75(), func_45(0), 1000f, -8f, 0, 0, 1148846080, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_41, uLocal_297, func_44(0), func_75(), 1000f, -8f, 0, 1148846080);
			if (!PED::_0x7F2F4F13AC5257EF(uLocal_297))
			{
				PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_297, 1);
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				uLocal_296 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_296, uLocal_297, func_41(0), func_75());
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				CAM::DESTROY_ALL_CAMS(0);
			}
			iLocal_293 = 3;
			break;
		
		case 3:
			func_48();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_297) > 0.95f)
			{
				iLocal_293 = 4;
			}
			else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_297) > 0.35f)
			{
				if (!iLocal_295)
				{
					ENTITY::SET_ENTITY_MOTION_BLUR(PLAYER::PLAYER_PED_ID(), 1);
					GRAPHICS::SET_TIMECYCLE_MODIFIER("DRUG_gas_huffin");
					GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0f);
					bLocal_307 = true;
					iLocal_295 = 1;
				}
			}
			break;
		
		case 4:
			func_40(2500, 1);
			func_48();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				bLocal_307 = false;
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_297))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_297, 1f);
				}
				if (CAM::DOES_CAM_EXIST(uLocal_296))
				{
					CAM::DESTROY_CAM(uLocal_296, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				iLocal_298 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
				switch (iLocal_298)
				{
					case 0:
						Local_302 = { 1546.069f, 3821.222f, 29.9139f };
						fLocal_305 = 235.002f;
						break;
					
					case 1:
						Local_302 = { 2515.749f, 3783.202f, 52.0043f };
						fLocal_305 = 0f;
						break;
					
					case 2:
						Local_302 = { 1902.893f, 4921.095f, 47f };
						fLocal_305 = 69.8293f;
						break;
					
					case 3:
						Local_302 = { -194.0443f, 3638.538f, 63.4521f };
						fLocal_305 = 156.1723f;
						break;
					
					case 4:
						Local_302 = { 560.8397f, 2738.103f, 41.2029f };
						fLocal_305 = 91.5686f;
						break;
					
					case 5:
						Local_302 = { -455.5521f, 1598.692f, 358.1478f };
						fLocal_305 = 270f;
						break;
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_302, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_305);
				TIME::ADD_TO_CLOCK_TIME(6, 0, 0);
				func_33(SYSTEM::TO_FLOAT(6));
				func_32(Local_302, 10f, 13);
				iLocal_293 = 5;
			}
			break;
		
		case 5:
			func_48();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_297))
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("drug_wobbly");
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
				fLocal_312 = 1f;
				if (func_31())
				{
					sLocal_300 = "ig_8_wake_up_front_player";
					sLocal_301 = "ig_8_wake_up_front_cam";
				}
				else
				{
					sLocal_300 = "ig_8_wake_up_right_player";
					sLocal_301 = "ig_8_wake_up_right_cam";
				}
				Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				switch (iLocal_298)
				{
					case 0:
						Var9.z = (Var9.z - 0.2f);
						break;
					
					case 1:
						Var9.z = (Var9.z - 0.15f);
						break;
					
					case 2:
						Var9.z = (Var9.z - 0.05f);
						break;
					
					case 3:
						Var9.z = (Var9.z - 0.15f);
						break;
					
					case 4:
						Var9.z = (Var9.z - 0.15f);
						break;
					
					case 5:
						Var9.z = (Var9.z - 0.1f);
						break;
				}
				uLocal_297 = PED::CREATE_SYNCHRONIZED_SCENE(Var9.x, Var9.y, Var9.z, 0f, 0f, fLocal_305, 2);
				AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_297, func_75(), sLocal_300, 1000f, -4f, 0, 0, 1148846080, 0);
				if (PED::_0x7F2F4F13AC5257EF(uLocal_297))
				{
					PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_297, 0);
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					uLocal_296 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_296, uLocal_297, sLocal_301, func_75());
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::DESTROY_ALL_CAMS(0);
				}
			}
			else
			{
				iLocal_306 = 1;
				func_30(800, 1);
				func_5();
				iLocal_293 = 6;
			}
			break;
		
		case 6:
			func_48();
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_297))
			{
				if (func_2(uLocal_296))
				{
					CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
				}
				AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
				iLocal_36 = 0;
				iLocal_293 = 8;
			}
			break;
		
		case 8:
			if ((iLocal_313 && iLocal_314) && iLocal_315)
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_41, 1);
				}
				if (STATS::STAT_GET_INT(-12798421, &iLocal_299, -1))
				{
					STATS::STAT_SET_INT(-12798421, iLocal_299 + 1, 1);
				}
				iLocal_295 = 0;
				func_49(0, 1, 1, 0, 0, 0);
				iLocal_294 = 0;
				iLocal_293 = 0;
			}
			break;
	}
}

void func_5()
{
	if (func_24() == 0)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
		func_23(&uLocal_108, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		{
			AUDIO::START_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
		}
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "M_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "M_WD2", 4, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "M_WD3", 4, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "M_WD4", 4, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "M_WD5", 4, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "M_WD6", 4, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "M_WD7", 4, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "M_WD8", 4, 0, 0, 0);
				break;
			
			case 8:
				func_6(&uLocal_108, "WEEDAUD", "M_WD9", 4, 0, 0, 0);
				break;
			
			case 9:
				func_6(&uLocal_108, "WEEDAUD", "M_WD10", 4, 0, 0, 0);
				break;
		}
	}
	else if (func_24() == 1)
	{
		GRAPHICS::ENABLE_MOVIE_SUBTITLES(0);
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 11);
		func_23(&uLocal_108, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "F_WD1", 3, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "F_WD2", 3, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "F_WD3", 3, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "F_WD4", 3, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "F_WD5", 3, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "F_WD6", 3, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "F_WD7", 3, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "F_WD8", 3, 0, 0, 0);
				break;
			
			case 8:
				func_6(&uLocal_108, "WEEDAUD", "F_WD9", 3, 0, 0, 0);
				break;
			
			case 9:
				func_6(&uLocal_108, "WEEDAUD", "F_WD10", 3, 0, 0, 0);
				break;
			
			case 10:
				func_6(&uLocal_108, "WEEDAUD", "F_WD11", 3, 0, 0, 0);
				break;
		}
	}
	else
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
		func_23(&uLocal_108, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		switch (iVar0)
		{
			case 0:
				func_6(&uLocal_108, "WEEDAUD", "T_WD1", 4, 0, 0, 0);
				break;
			
			case 1:
				func_6(&uLocal_108, "WEEDAUD", "T_WD3", 4, 0, 0, 0);
				break;
			
			case 2:
				func_6(&uLocal_108, "WEEDAUD", "T_WD4", 4, 0, 0, 0);
				break;
			
			case 3:
				func_6(&uLocal_108, "WEEDAUD", "T_WD5", 4, 0, 0, 0);
				break;
			
			case 4:
				func_6(&uLocal_108, "WEEDAUD", "T_WD6", 4, 0, 0, 0);
				break;
			
			case 5:
				func_6(&uLocal_108, "WEEDAUD", "T_WD8", 4, 0, 0, 0);
				break;
			
			case 6:
				func_6(&uLocal_108, "WEEDAUD", "T_WD9", 4, 0, 0, 0);
				break;
			
			case 7:
				func_6(&uLocal_108, "WEEDAUD", "T_WD10", 4, 0, 0, 0);
				break;
			}
	}
}

int func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_22(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)
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
					func_21();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_19();
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
				func_17();
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
				if (func_16())
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
			if (func_15())
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
			func_14();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_13();
		func_8();
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
		func_21();
	}
	return 0;
}

void func_8()
{
	if (!func_9())
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

int func_9()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_12())
	{
		return 0;
	}
	if (func_10(PLAYER::PLAYER_ID()))
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

bool func_10(int iParam0)
{
	return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_12()
{
	return -1;
}

void func_13()
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

void func_14()
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

int func_15()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_16()
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

void func_17()
{
	if (func_18(14))
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
		Global_19486 = func_24();
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

bool func_18(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_19()
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

bool func_20(int iParam0, int iParam1)
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

void func_21()
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

void func_22(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_23(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_24()
{
	func_25();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_25()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_28(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_27(PLAYER::PLAYER_PED_ID());
			if (func_26(iVar0) && (!func_18(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_26(Global_111638.f_2358.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return iParam0 < 3;
}

int func_27(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_28(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_28(int iParam0)
{
	if (func_26(iParam0))
	{
		return func_29(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_29(int iParam0)
{
	return Global_1798[iParam0];
}

void func_30(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (bParam1)
	{
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			SYSTEM::WAIT(0);
		}
	}
}

int func_31()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_32(struct<3> Param0, float fParam3, int iParam4)
{
	uVar0 = STREAMING::FORMAT_FOCUS_HEADING(Param0, fParam3, iParam4, 127);
	if (STREAMING::_0x07C313F94746702C(uVar0))
	{
		iVar1 = GAMEPLAY::GET_GAME_TIMER() + 20000;
		while (!STREAMING::_0x7D41E9D2D17C5B2D(uVar0) && GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
			SYSTEM::WAIT(0);
		}
		if (GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
		}
		STREAMING::_0x1EE7D8DF4425F053(uVar0);
	}
}

void func_33(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_39(&(Global_111638.f_18098.f_175[iVar0].f_5)))
		{
			func_34(&(Global_111638.f_18098.f_175[iVar0].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_39(&(Global_111638.f_18098.f_362[iVar1])))
		{
			func_34(&(Global_111638.f_18098.f_362[iVar1]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_34(var uParam0, float fParam1)
{
	if (func_39(uParam0))
	{
		func_35(uParam0, (func_37(uParam0) + fParam1));
	}
}

void func_35(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_36(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

float func_37(var uParam0)
{
	if (func_39(uParam0))
	{
		if (func_38(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_38(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_39(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_40(int iParam0, bool bParam1)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

char* func_41(int iParam0)
{
	sVar0 = "";
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_cam";
			}
			else
			{
				sVar0 = "short_cam";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_cam";
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_cam";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_cam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_cam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_cam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_cam";
					break;
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_cam";
			break;
		
		case -35679191:
			sVar0 = func_42();
			break;
	}
	return sVar0;
}

char* func_42()
{
	func_43();
	sVar0 = "";
	Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	fVar4 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[0], 1);
	fVar5 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var1, Local_273[1], 1);
	if (fVar4 < fVar5)
	{
		sVar0 = "drinking_wine_cam2";
		Local_286 = { -8.9f, 515.6f, 175.4f };
		Local_289 = { -17.1f, 0.5f, 6.5f };
	}
	else
	{
		sVar0 = "drinking_wine_cam3";
		Local_286 = { -10.1f, 516f, 175.3f };
		Local_289 = { -13.5f, 0.5f, -56f };
	}
	return sVar0;
}

void func_43()
{
	Local_273[0] = { -10.1749f, 517.8317f, 175.192f };
	Local_273[1] = { -7.694f, 516.4619f, 175.2034f };
	Local_273[2] = { -8.0344f, 518.4184f, 175.1866f };
	Local_273[3] = { -9.7451f, 515.6803f, 175.1711f };
}

char* func_44(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_bong";
			}
			else
			{
				sVar0 = "bong_short";
			}
			break;
		
		case -1620762220:
			sVar0 = "enter_bottle";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno_raspjam";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat_raspjam";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu_raspjam";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea_raspjam";
					break;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				sVar0 = "enter_shotglass";
			}
			else
			{
				sVar0 = "enter_glass";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_rag";
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter_beer";
			}
			else
			{
				sVar0 = "enter_bottle";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_glass";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine_glass";
			break;
	}
	return sVar0;
}

char* func_45(int iParam0)
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				sVar0 = "bong_FRA";
			}
			else
			{
				sVar0 = "michael_short";
			}
			break;
		
		case -693032058:
			sVar0 = "cigar_enter_michael";
			break;
		
		case -1620762220:
			sVar0 = "enter";
			break;
		
		case 788975200:
		case -1533900808:
			if (bLocal_35)
			{
				sVar0 = "enter_trevor";
			}
			else
			{
				sVar0 = "enter";
			}
			break;
		
		case 948080762:
			sVar0 = "ig_8_huff_gas_player";
			break;
		
		case 1022578470:
			switch (iParam0)
			{
				case 0:
					sVar0 = "ig_7_howcouldisayno";
					break;
				
				case 1:
					sVar0 = "ig_7_ifuwanttodothat";
					break;
				
				case 2:
					sVar0 = "ig_7_lookatu";
					break;
				
				case 3:
					sVar0 = "ig_7_smelllikeasea";
					break;
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
				sVar0 = "enter";
			}
			else
			{
				sVar0 = "enter_michael";
			}
			break;
		
		case 469594741:
			sVar0 = "ig_2_wheatgrassdrink_michael";
			break;
		
		case -35679191:
			sVar0 = "drinking_wine";
			break;
	}
	return sVar0;
}

Vector3 func_46()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
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
			if (bLocal_35)
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

Vector3 func_47()
{
	Var0 = { 0f, 0f, 0f };
	switch (iLocal_40)
	{
		case -257549932:
			if (!bLocal_34)
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
			if (bLocal_35)
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

void func_48()
{
	Global_22211.f_6 = 1;
}

void func_49(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_57(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_19486.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_15())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_56(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_57(0);
		UI::_0xE1CD1E48E025E661();
		Global_61518 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_56(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_54(PLAYER::PLAYER_ID())) && !func_51(PLAYER::PLAYER_ID(), 0)) && !func_50()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_54(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_76620 = 0;
	}
}

bool func_50()
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[PLAYER::PLAYER_ID()].f_39.f_18, 14);
}

bool func_51(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_52(-1, 0) == 8;
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

int func_52(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_53();
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

int func_53()
{
	return Global_1312745;
}

int func_54(int iParam0)
{
	if (func_51(iParam0, 0))
	{
		return 1;
	}
	if (func_55())
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

bool func_55()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_56(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_57(int iParam0)
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

bool func_58(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
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

void func_60(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

char* func_61()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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

void func_62()
{
	switch (iLocal_40)
	{
		case -693032058:
			break;
		
		case -257549932:
			break;
		
		case -1620762220:
			break;
		
		case 788975200:
			break;
		
		case -1533900808:
			break;
		
		case 1384562503:
			break;
		
		case 948080762:
			break;
		
		case 1022578470:
			break;
		
		case 2057223314:
			if (bLocal_35)
			{
			}
			break;
		
		case 469594741:
			break;
		
		case -35679191:
			break;
	}
}

float func_63()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
			{
				fVar0 = -100f;
			}
			else
			{
				fVar0 = 192.2462f;
			}
			break;
		
		case -693032058:
			fVar0 = 299.353f;
			break;
		
		case -1620762220:
			fVar0 = 273.2771f;
			break;
		
		case -1630172026:
			fVar0 = 256.8294f;
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (bLocal_35)
			{
				fVar0 = 213.5805f;
			}
			else
			{
				fVar0 = 15.7529f;
			}
			break;
		
		case 948080762:
			fVar0 = 206.0063f;
			break;
		
		case 1022578470:
			fVar0 = 355.0925f;
			break;
		
		case 2057223314:
			fVar0 = 332.7139f;
			break;
		
		case 469594741:
			fVar0 = 118.65f;
			break;
		
		case -35679191:
			fVar0 = 331.4005f;
			break;
	}
	return fVar0;
}

int func_64(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!FIRE::IS_EXPLOSION_IN_SPHERE(-1, Param0, 2f))
			{
				if ((((CAM::IS_GAMEPLAY_CAM_RENDERING() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !func_68(0)) && !func_67())
				{
					if ((Global_95672 && Global_95673) || func_66())
					{
						return 0;
					}
					if (func_65(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0, fParam3, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

int func_66()
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	return 1;
}

int func_67()
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
			if (bLocal_35)
			{
				if (ENTITY::GET_ENTITY_MODEL(uVar2[iVar1]) == 225514697)
				{
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uVar2[iVar1], 1), 1) < 3f)
					{
						return 1;
					}
				}
			}
			if (!bLocal_35 && !bLocal_34)
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

int func_68(int iParam0)
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

Vector3 func_69()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
			if (bLocal_35)
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

int func_70()
{
	if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK(func_71(), 0, -1))
	{
		return 1;
	}
	return 0;
}

char* func_71()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
			if (bLocal_35)
			{
				sVar0 = "SAFEHOUSE_TREVOR_DRINK_WHISKEY";
			}
			else
			{
				sVar0 = "SAFEHOUSE_MICHAEL_DRINK_WHISKEY";
			}
			break;
		
		case 2057223314:
			if (bLocal_35)
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

int func_72()
{
	uVar0 = func_75();
	STREAMING::REQUEST_ANIM_DICT(uVar0);
	while (!STREAMING::HAS_ANIM_DICT_LOADED(uVar0))
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_73()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (!iLocal_294)
	{
		if (!func_74())
		{
			return 0;
		}
		if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_41))
		{
			return 0;
		}
	}
	return 1;
}

int func_74()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_41, 1) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_41, 0) && Var0.z > 33f)
		{
			return 1;
		}
	}
	return 0;
}

char* func_75()
{
	switch (iLocal_40)
	{
		case -257549932:
			if (bLocal_34)
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
				if (bLocal_35)
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
			if (bLocal_35)
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

int func_76()
{
	if (func_98(9))
	{
		return 0;
	}
	if (func_97() && !func_96())
	{
		return 0;
	}
	if (!func_91())
	{
		return 0;
	}
	if (!func_74())
	{
		return 0;
	}
	if (!func_90(0))
	{
		return 0;
	}
	if (Global_93750[10] == 105)
	{
		return 0;
	}
	if (func_77(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return 1;
}

int func_77(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_85(iParam0, iVar2);
			if (func_81(iVar5, 14, iVar4, -1))
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
				iVar4 = func_78(iParam0, iVar3);
				if (func_81(iVar5, iVar3, iVar4, -1))
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
			iVar7 = DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar6, PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			if (!DLC1::_0x341DE7ED1D2A1BFD(iVar7, -1757550583, 0) && !DLC1::_0x341DE7ED1D2A1BFD(iVar7, 66092876, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
{
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_80(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_79(iParam0, iVar1, iVar2, iParam1);
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_80(iParam3);
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

int func_80(int iParam0)
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

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)
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
						iParam3 = func_82(iParam0, iParam2, 1, 3);
					}
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
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
						iParam3 = func_82(iParam0, iParam2, 1, 4);
					}
					if (DLC1::_0x341DE7ED1D2A1BFD(iParam3, -1757550583, 0) || DLC1::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
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

int func_82(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_84(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var0))
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
		DLC1::INIT_SHOP_PED_COMPONENT(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_83(iParam0, func_80(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar41 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_80(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar38, &Var21);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var21))
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

int func_83(int iParam0, int iParam1)
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

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_89(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_86(iParam0, iVar0, iVar1, iParam1);
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 == -1)
	{
		return func_89(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = DLC1::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == 1885233650)
		{
			return func_88(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == -1667301416)
		{
			return func_88(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_87(iParam0, iParam3));
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
	return func_89(iParam3);
}

int func_87(int iParam0, int iParam1)
{
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var0);
		iVar18 = 0;
		iVar19 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar17, &Var0);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_84(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var20);
		iVar38 = 0;
		iVar39 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 7, -1, 0, -1, func_80(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar37, &Var20);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_83(iParam0, func_80(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_89(int iParam0)
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

int func_90(int iParam0)
{
	if (Global_76622)
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (iLocal_40 == 948080762)
		{
			if (func_65(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 469594741)
		{
			if (func_65(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (iLocal_40 == 1022578470)
		{
			if (func_65(ENTITY::GET_ENTITY_COORDS(iLocal_41, 0), func_69(), 5f, 0))
			{
				return 1;
			}
		}
		else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91()
{
	switch (iLocal_40)
	{
		case -693032058:
			if (func_24() == 0)
			{
				return 1;
			}
			break;
		
		case -257549932:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 1;
			}
			if (func_24() == 1)
			{
				bLocal_34 = true;
				return 1;
			}
			if (func_24() == 0)
			{
				if (!iLocal_33)
				{
					iLocal_33 = 1;
				}
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-645501366) > 0)
				{
					return 0;
				}
				if (func_95())
				{
					return 0;
				}
				if (((((Global_93750[0] == 5 || Global_93750[0] == 21) || Global_93750[0] == 20) || Global_93750[0] == 16) || Global_93750[0] == 18) || Global_93750[0] == 9)
				{
					return 0;
				}
				if (((((Global_93750[0] == 6 || Global_93750[0] == 7) || Global_93750[0] == 11) || Global_93750[0] == 17) || Global_93750[0] == 140) || Global_93750[0] == 141)
				{
					return 1;
				}
				return 1;
			}
			break;
		
		case -1620762220:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 1)
			{
				if (!iLocal_32)
				{
					iLocal_32 = 1;
				}
				return 1;
			}
			break;
		
		case -1630172026:
			if (func_24() == 1)
			{
				return 1;
			}
			break;
		
		case 788975200:
		case -1533900808:
		case 1384562503:
			if (Global_76622)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_24() == 0)
			{
				iLocal_31 = 1;
				return 1;
			}
			if (func_24() == 2 && func_94(20))
			{
				if (!iLocal_30)
				{
					iLocal_30 = 1;
				}
				iLocal_31 = 1;
				bLocal_35 = true;
				return 1;
			}
			break;
		
		case 948080762:
			if (func_24() == 2 || Global_76622)
			{
				return 1;
			}
			break;
		
		case 1022578470:
			if (Global_111638.f_7256.f_227[145] == 1)
			{
				if (func_24() == 2)
				{
					if (((((Global_93750[13] != 127 && Global_93750[13] != 135) && Global_93766 != 127) && Global_93766 != 135) && !func_93()) && !func_95())
					{
						return 1;
					}
				}
			}
			break;
		
		case 2057223314:
			iLocal_31 = 1;
			if ((Global_38796[78] != 1 && Global_93750[9] != 117) && Global_93750[11] != 117)
			{
				if (func_24() == 2)
				{
					bLocal_35 = true;
					return 1;
				}
				if ((func_24() == 0 && func_92(130)) && !func_92(131))
				{
					return 1;
				}
			}
			break;
		
		case 469594741:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 0)
			{
				if (Global_93750[0] != 17 && Global_93750[2] != 73)
				{
					return 1;
				}
			}
			break;
		
		case -35679191:
			if (Global_76622)
			{
				return 1;
			}
			if (func_24() == 1)
			{
				bLocal_34 = true;
				iLocal_32 = 1;
				if (!iLocal_31)
				{
					iLocal_31 = 1;
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_99.f_58[iParam0];
}

int func_93()
{
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111638.f_9080.f_330[iParam0];
}

int func_95()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_96222.f_44 == 1;
	}
	return 0;
}

int func_96()
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

int func_97()
{
	if (Global_95666 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_89532[Global_95666].f_15, 20);
	}
	return 0;
}

int func_98(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_99(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_99(int iParam0)
{
	return func_100(iParam0, Global_41431);
}

int func_100(int iParam0, int iParam1)
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

void func_101()
{
	if (func_58(func_61()))
	{
		UI::CLEAR_HELP(1);
	}
	GAMEPLAY::SET_TIME_SCALE(1f);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_SAFEHOUSE_ACTIVITIES_SCENE");
	}
	STREAMING::REMOVE_ANIM_DICT(func_75());
	if (CAM::DOES_CAM_EXIST(uLocal_296))
	{
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uLocal_296, 0f);
		CAM::DESTROY_CAM(uLocal_296, 0);
	}
	func_102();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_102()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_59(1, 0, 1)) && iLocal_36)
		{
			func_49(0, 1, 1, 0, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
}

