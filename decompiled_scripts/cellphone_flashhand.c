#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	struct<2> Local_94 = { 0, 0 } ;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<3> Local_119 = { 0, 0, 0 } ;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<13> Var16;
	int iVar29;
	float fVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	int iVar35;
	
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
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_37 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_63 = ((0.05f + 0.275f) - 0.01f);
	fLocal_65 = 0.73f;
	fLocal_66 = 0.55f;
	fLocal_67 = 0.73f;
	fLocal_68 = 0.45f;
	fLocal_69 = 0f;
	fLocal_70 = 0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_19861 = 145;
	MISC::CLEAR_BIT(&Global_7552, 8);
	MISC::CLEAR_BIT(&Global_7551, 14);
	MISC::CLEAR_BIT(&Global_4271024, 3);
	MISC::CLEAR_BIT(&Global_7552, 10);
	MISC::CLEAR_BIT(&Global_7551, 17);
	MISC::CLEAR_BIT(&Global_7551, 9);
	MISC::CLEAR_BIT(&Global_7551, 26);
	MISC::CLEAR_BIT(&Global_7551, 23);
	MISC::CLEAR_BIT(&Global_7552, 24);
	MISC::CLEAR_BIT(&Global_7552, 25);
	MISC::CLEAR_BIT(&Global_7552, 27);
	MISC::CLEAR_BIT(&Global_7552, 26);
	MISC::CLEAR_BIT(&Global_7551, 30);
	Global_2550685 = 0;
	iLocal_122 = 0;
	GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
	Global_19647 = 0;
	iLocal_74 = 0;
	Global_19625 = 0;
	Global_19665 = 0;
	Global_19666 = 0;
	func_117();
	Global_19612 = { Global_19644 };
	Global_19685 = 4;
	Global_19686 = 0;
	Global_8156 = 1;
	Global_19661 = Global_19685;
	if (Global_19663 == 0)
	{
		Global_19664 = 0;
		if (Global_76833)
		{
			Global_19662 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_88 = 1;
			if (iLocal_88 == 1)
			{
			}
		}
		else if (Global_19624)
		{
			Global_19669 = 1;
			Global_19662 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_19662 = unk_0x67D02A194A2FC2BD(&(Global_111858.f_14047[Global_19681 /*20*/]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662) && Global_19664 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_19664 = 1;
			}
			if (MISC::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_19664 = 1;
					}
				}
			}
			if (Global_19680 == 1)
			{
				func_116();
			}
		}
		if (Global_19664 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
			{
				func_115(Global_19662, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19662);
			Global_19622 = 0;
			Global_19663 = 0;
			Global_19862 = 0;
			if (Global_111858.f_14047.f_84 == 1)
			{
				Global_111858.f_14047.f_84 = 0;
				HUD::CLEAR_FLOATING_HELP(0, true);
			}
			Global_19625 = 1;
			Global_19681.f_1 = 3;
			func_114();
			Global_19669 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			MISC::CLEAR_BIT(&Global_7551, 9);
			MISC::CLEAR_BIT(&Global_7551, 27);
			MISC::CLEAR_BIT(&Global_7551, 30);
			MISC::CLEAR_BIT(&Global_7552, 5);
			MISC::CLEAR_BIT(&Global_7552, 21);
			MISC::CLEAR_BIT(&Global_7553, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_19864 = 0;
			Global_22065 = 0;
			Global_22064 = 0;
			Global_21018 = 0;
			func_112();
			func_110();
			Global_4271303 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_19605 = 0.1f;
		Global_19606 = 0.38f;
		Global_19607 = 0.195f;
		Global_19608 = 0.05f;
		if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_PC_VERSION())
		{
			HUD::GET_HUD_COLOUR(18, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(9, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
		}
		else
		{
			HUD::GET_HUD_COLOUR(9, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(126, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			HUD::GET_HUD_COLOUR(6, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19662, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
		}
		if (Global_19664 == 0)
		{
		}
		func_108();
		if (Global_76833)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
		}
		Global_19663 = 1;
	}
	Global_7554 = 99;
	func_107();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_100 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (HUD::IS_RADAR_HIDDEN())
	{
		Global_22019 = 1;
	}
	else
	{
		Global_22019 = 0;
	}
	func_109(Global_19662, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_19623 = 1;
	if (Global_76833)
	{
		Global_19866 = 0;
		Global_4271300 = func_104(2029, -1, 0);
		if (Global_4271300 < 1 || Global_4271300 > 7)
		{
			Global_4271300 = 1;
		}
		func_109(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_4271300), -1082130432, -1082130432, -1082130432, -1082130432);
		func_103();
		Global_4271301 = func_104(2028, -1, 0);
		if (Global_4271301 == 0)
		{
			Var16 = { func_102(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0) == 0)
			{
			}
			if (Global_4271304 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0)) && Global_4271304 == 0)
			{
				if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_2000");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					func_109(Global_19662, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_109(Global_19662, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_109(Global_19662, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4271301), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_19624)
		{
			Global_19866 = 0;
		}
		else if (Global_111858.f_14047.f_88 == 1 || Global_111858.f_14047.f_89 == 1)
		{
			Global_19866 = 0;
		}
		else
		{
			Global_19866 = 0;
		}
		func_109(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8355 == 0)
		{
			func_109(Global_19662, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_103();
	}
	iLocal_89 = func_101();
	if (Global_19624 == 0)
	{
		func_89();
	}
	Global_19659 = 0;
	Global_19865 = 0;
	MISC::CLEAR_BIT(&Global_7551, 9);
	Global_2462473 = 0;
	if (func_85(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2462473 = 1;
	}
	func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_83();
	func_82();
	func_81(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_19670, true);
	SYSTEM::SETTIMERB(0);
	while (Global_19681.f_1 < 6 && Global_19664 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_19664 = 1;
		}
		if (Global_19681.f_1 < 4)
		{
			Global_19664 = 1;
		}
	}
	if (Global_19681.f_1 == 5 || Global_19681.f_1 == 6)
	{
		if (func_80(14))
		{
			func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
		{
			func_109(Global_19662, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_109(Global_19662, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_19669)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19669)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19866 == 0)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
		}
		else if (Global_76833)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
		}
		else
		{
			if (Global_19865 == 1)
			{
				if (Global_19669)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			MISC::SET_BIT(&Global_7551, 17);
		}
		func_78();
	}
	Global_19667 = 1;
	func_77();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_106 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_101 = MISC::GET_GAME_TIMER();
	}
	if (Global_19862 == 1)
	{
		if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
		{
			if (Global_111858.f_14047.f_84 == 0)
			{
				Global_111858.f_14047.f_84 = 1;
				if (Global_19626 == 0)
				{
					fVar30 = 0.75f;
					fVar31 = 0.8f;
				}
				else
				{
					fVar30 = 0.65f;
					fVar31 = 0.77f;
				}
				if (fVar30 == fVar31)
				{
				}
				func_76("CELL_7052", 10000);
			}
		}
	}
	if (Global_76833 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER() + 375;
	}
	if (func_75())
	{
		iLocal_80 = 1;
	}
	else
	{
		iLocal_80 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_81 = 1;
			if (func_75())
			{
				func_74();
			}
		}
		else
		{
			iLocal_81 = 0;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (Global_76833 == 0)
		{
			iLocal_103 = MISC::GET_GAME_TIMER();
			iLocal_105 = 0;
		}
	}
	MISC::CLEAR_BIT(&Global_7553, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (MISC::IS_BIT_SET(Global_4271024, 24))
		{
			if (!Global_19865)
			{
				if (Global_19681.f_1 == 6 || Global_19681.f_1 > 6)
				{
					MISC::CLEAR_BIT(&Global_4271024, 24);
					func_83();
					func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_81(1);
					if (Global_19681.f_1 == 6)
					{
						func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_73())
		{
			PAD::DISABLE_CONTROL_ACTION(0, 114, true);
		}
		if (Global_76833 == 0)
		{
			if (iLocal_76)
			{
				if (Global_19681.f_1 == 6 || Global_19681.f_1 == 7)
				{
					iLocal_76 = 0;
				}
			}
			if (Global_19681.f_1 > 4)
			{
				if ((MISC::IS_BIT_SET(Global_7551, 14) && Global_4271303 == 0) && Global_19621 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (func_72())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_19627[Global_19626 /*3*/].f_1 != Local_77.f_1)
							{
								func_70();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_19634[Global_19626 /*3*/].f_1 != Local_77.f_1)
							{
								if (!func_73())
								{
								}
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
								{
									func_68();
								}
							}
						}
						if (iLocal_81 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_81 = 1;
								func_68();
								func_74();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_81 = 0;
							func_70();
							if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
							{
								if (Global_21005 != 2)
								{
									func_67();
								}
							}
						}
						if (iLocal_80 == 0)
						{
							if (func_75())
							{
								iLocal_80 = 1;
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_74();
								}
								func_70();
							}
						}
						else
						{
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
								{
									PAD::DISABLE_CONTROL_ACTION(0, 26, true);
								}
							}
							if (func_75() == 0)
							{
								iLocal_80 = 0;
								func_68();
							}
						}
					}
				}
			}
		}
		if (Global_2462473 == 1)
		{
			if (!func_85(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (Global_19681.f_1 > 3)
					{
						Global_19666 = 1;
						func_66();
						func_63(0);
						Global_2462473 = 0;
					}
				}
			}
		}
		if (Global_19867 == 0)
		{
			if ((Global_41631 != 15 || Global_7556 == 1) || func_62(0))
			{
				if (!Global_19865)
				{
					if (Global_19681.f_1 == 6)
					{
						Global_7557 = 42;
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83();
						func_82();
						func_81(1);
						func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19867 = 1;
			}
		}
		else if ((Global_41631 == 15 && func_62(0) == 0) && Global_7556 == 0)
		{
			if (!Global_19865)
			{
				if (Global_19681.f_1 == 6)
				{
					Global_7557 = 255;
					func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83();
					func_82();
					func_81(1);
					func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19867 = 0;
		}
		if (Global_19868 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7552, 3))
			{
				if (!Global_19865)
				{
					if (Global_19681.f_1 == 6)
					{
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83();
						func_82();
						func_81(1);
						func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19868 = 1;
			}
		}
		else if (!MISC::IS_BIT_SET(Global_7552, 3))
		{
			if (!Global_19865)
			{
				if (Global_19681.f_1 == 6)
				{
					func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83();
					func_82();
					func_81(1);
					func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19868 = 0;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_19609.f_1 != Global_19627[Global_19626 /*3*/].f_1 || func_75())
			{
				if (Global_19681.f_1 > 3)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) == 0)
					{
						if (Global_76833)
						{
							if (Global_19681.f_1 == 9)
							{
								if (Global_21058 == 1 || MISC::IS_BIT_SET(Global_7552, 23))
								{
									PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
								}
							}
							else
							{
								PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
							}
						}
						else
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
						}
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
						if (MISC::IS_BIT_SET(Global_7551, 17))
						{
							PAD::SET_INPUT_EXCLUSIVE(0, Global_19652);
						}
					}
					if (!func_61() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appsecurohack")) == 0)
					{
						PAD::SET_INPUT_EXCLUSIVE(0, Global_19653);
					}
				}
			}
			if (Global_19609.f_1 == Global_19627[Global_19626 /*3*/].f_1)
			{
			}
		}
		if (!PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_74030)
			{
				if (!func_73())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, 180);
					PAD::SET_INPUT_EXCLUSIVE(0, 181);
					PAD::ENABLE_CONTROL_ACTION(0, 180, true);
					PAD::ENABLE_CONTROL_ACTION(0, 181, true);
				}
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19655);
				if (!func_61())
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_19656);
				}
				if (Global_19681.f_1 > 4)
				{
					PAD::SET_INPUT_EXCLUSIVE(0, Global_19658);
				}
			}
		}
		if (func_60(2, Global_19649, 0))
		{
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_75 == 1)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, Global_19650))
			{
				Global_7555 = 1;
				iLocal_75 = 0;
			}
			if (!Global_19681.f_1 > 3)
			{
				iLocal_75 = 0;
			}
		}
		if (iLocal_98)
		{
			if (PAD::IS_CONTROL_PRESSED(2, Global_19649))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_19681.f_1 = 3;
					func_58();
				}
			}
			else
			{
				iLocal_98 = 0;
			}
		}
		Global_8159 = MISC::GET_GAME_TIMER();
		if (Global_19668)
		{
			func_77();
			Global_19667 = 1;
			Global_19668 = 0;
		}
		if (Global_19864 == 0)
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_51();
			func_50();
			HUD::SET_TEXT_RENDER_ID(iLocal_86);
			if (Global_19667 == 1)
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				if (Global_19624)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19662, Global_19601, Global_19602, Global_19603, Global_19604, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19662, Global_19601, Global_19602, Global_19603, Global_19604, 255, 255, 255, 255, 0);
				}
				func_107();
			}
			if (Global_19621 == 1)
			{
				if (Global_19681.f_1 > 3)
				{
					func_49();
				}
			}
			else if (Global_19681.f_1 > 3)
			{
				if (Global_4271303 == 1)
				{
					func_48();
				}
				if (MISC::IS_BIT_SET(Global_7552, 25))
				{
					if (Global_76833 == 1)
					{
						func_47();
					}
				}
				else if (!MISC::IS_BIT_SET(Global_7552, 24))
				{
					if (MISC::IS_BIT_SET(Global_7552, 26))
					{
						if (func_60(2, Global_19648, 0))
						{
							MISC::SET_BIT(&Global_7552, 25);
							MISC::CLEAR_BIT(&Global_7552, 26);
							MISC::CLEAR_BIT(&Global_7553, 2);
						}
					}
				}
				else if (Global_76833 == 1)
				{
					func_46();
				}
			}
		}
		if (iLocal_74)
		{
			if (Global_19681.f_1 == 6)
			{
				func_44();
			}
		}
		else if (!MISC::IS_BIT_SET(Global_7551, 23))
		{
			if (Global_19681.f_1 == 5 || Global_19681.f_1 == 6)
			{
				if (Global_19864 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) < 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
					{
						if (Global_19624 == 0)
						{
							if (MISC::IS_BIT_SET(Global_7551, 14))
							{
								if (!Global_76833)
								{
									if (iLocal_75 == 0)
									{
										if (!func_80(14))
										{
											func_43();
										}
										else if (Global_2462473)
										{
											func_42();
										}
									}
								}
								else if (MISC::IS_BIT_SET(Global_7553, 9))
								{
									func_41();
								}
								else
								{
									func_24();
								}
							}
						}
						if (MISC::IS_BIT_SET(Global_7551, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_22064 == 0)
						{
							if (!MISC::IS_BIT_SET(Global_4271024, 3))
							{
								if (Global_76833)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_76833)
							{
								func_21();
							}
							if (!MISC::IS_BIT_SET(Global_4271024, 3))
							{
								if (Global_22064 == 1)
								{
									if (MISC::IS_BIT_SET(Global_4271024, 1))
									{
										if (MISC::IS_BIT_SET(Global_7551, 14))
										{
											if (Global_76833)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_22065 = 0;
											}
											Global_22064 = 0;
											MISC::CLEAR_BIT(&Global_4271024, 1);
										}
									}
									else if (MISC::IS_BIT_SET(Global_7551, 14))
									{
										func_22(7, 0, 1, 0);
										Global_22064 = 0;
									}
								}
								else
								{
									if (Global_22064 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_22064 = 0;
									}
									if (Global_22064 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_22064 = 0;
									}
									if (Global_22064 == 4)
									{
										func_22(23, 0, 1, 0);
										Global_22064 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_7558[Global_19684 /*15*/].f_5)))
		{
			if (Global_19684 == 0)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[Global_19684 /*15*/].f_9) == 0)
				{
					Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[Global_19684 /*15*/].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_19684 == 23)
				{
					if (MISC::IS_BIT_SET(Global_4271024, 4) == 0 && Global_1573931 == 0)
					{
					}
				}
				if (Global_19684 == 2 || iVar32 == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[Global_19684 /*15*/].f_9) == 0)
					{
						Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[Global_19684 /*15*/].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[Global_19684 /*15*/].f_9) == 0)
				{
					Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[Global_19684 /*15*/].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7558[Global_19684 /*15*/].f_5));
			Global_7554 = 99;
			MISC::CLEAR_BIT(&Global_7551, 23);
		}
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 200, true);
			}
		}
		if (Global_19681.f_1 == 1)
		{
			func_9();
		}
		if (Global_19681.f_1 == 0)
		{
			func_9();
		}
		if (Global_19681.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_21018)
			{
				if (Global_19681.f_1 == 9)
				{
					if (Global_76833)
					{
						if (!MISC::IS_BIT_SET(Global_7552, 31))
						{
							if (!MISC::IS_BIT_SET(Global_7552, 27))
							{
								if (func_8())
								{
									if (!MISC::IS_BIT_SET(Global_7551, 9))
									{
										if (func_60(2, Global_19653, 0))
										{
											if (!MISC::IS_PC_VERSION())
											{
												if (!Global_19680 == 1)
												{
													if (Global_19681.f_1 > 6)
													{
														MISC::SET_BIT(&Global_7552, 24);
														MISC::SET_BIT(&Global_7552, 27);
														MISC::CLEAR_BIT(&Global_7552, 26);
														MISC::CLEAR_BIT(&Global_7552, 25);
														MISC::SET_BIT(&(Global_2540612.f_1792), 17);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (Global_19664 == 1)
			{
				Global_19666 = 1;
				func_63(0);
			}
			if (Global_19665 == 1)
			{
				Global_19666 = 1;
				func_63(0);
			}
			if (Global_76833)
			{
				if (!MISC::IS_BIT_SET(Global_7553, 0))
				{
					if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2547287.f_1 == 1)
						{
						}
						else
						{
							func_66();
							func_63(0);
						}
					}
				}
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						MISC::SET_BIT(&Global_7552, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (MISC::IS_BIT_SET(Global_4456448.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1655233))
						{
							func_5(1, 1);
							MISC::SET_BIT(&Global_7551, 14);
						}
						else
						{
							Global_19666 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				if (func_80(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
					{
						iLocal_123 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_123 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael1")) > 0) || Global_77094 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_USINGNIGHTVISION()) || iLocal_123)
				{
					if (!Global_19624)
					{
						MISC::SET_BIT(&Global_7552, 4);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (Global_76833 == 0)
					{
						if (iLocal_105 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									iLocal_103 = MISC::GET_GAME_TIMER();
									iLocal_105 = 1;
								}
							}
						}
						else
						{
							iLocal_104 = MISC::GET_GAME_TIMER();
							iLocal_107 = (iLocal_104 - iLocal_103);
							if (iLocal_107 < 4000)
							{
								MISC::SET_BIT(&Global_7552, 4);
							}
							else
							{
								iLocal_105 = 0;
							}
						}
					}
				}
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_76833)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
						if (iLocal_113 != joaat("weapon_unarmed") && Global_19681.f_1 < 7)
						{
							MISC::SET_BIT(&Global_7552, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_114 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("submersible") || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("submersible2"))
					{
						iLocal_117 = 1;
					}
					else
					{
						iLocal_117 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("chernobog")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("khanjali")) || iLocal_117) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114, false) == 0)
					{
						MISC::SET_BIT(&Global_7552, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("valkyrie") || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("insurgent")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("technical")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trash")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trash2")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("limo2")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("insurgent3")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("halftrack")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("dune3")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trailersmall2")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("technical2")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("boxville5")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("mogul")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("bombushka")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("tula")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("chernobog"))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_114);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("insurgent") || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("limo2"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trash") || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trash2"))
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("technical2"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("boxville5"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("insurgent3"))
								{
									if (iVar33 == 3)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("halftrack"))
								{
									if (iVar33 == 1)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("dune3"))
								{
									if (iVar33 == 0)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("trailersmall2"))
								{
									if (iVar33 == -1)
									{
										MISC::SET_BIT(&Global_7552, 4);
									}
								}
								if (VEHICLE::IS_TURRET_SEAT(iLocal_114, iVar33))
								{
									MISC::SET_BIT(&Global_7552, 4);
								}
							}
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_76833 == 0)
						{
							if (Global_19681.f_1 == 6 || Global_19681.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iLocal_114))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_114)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_114))) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == joaat("submersible2"))
								{
									bVar34 = false;
								}
								if (bVar34)
								{
									func_63(0);
								}
							}
						}
					}
				}
				else
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_76833 == 0)
						{
							if (Global_19681.f_1 == 6 || Global_19681.f_1 == 7)
							{
								func_63(0);
							}
						}
					}
					iLocal_117 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BIT_SET(Global_4456448.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1655233))
					{
						func_5(1, 1);
					}
					else
					{
						Global_19666 = 1;
						func_66();
						func_63(0);
					}
				}
				if (Global_76833 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_19666 = 1;
							func_66();
							func_63(0);
						}
					}
					if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_19666 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				else if (func_73())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							Global_19666 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_73())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
							if ((iLocal_113 == joaat("weapon_sniperrifle") || iLocal_113 == joaat("weapon_heavysniper")) || iLocal_113 == joaat("weapon_remotesniper"))
							{
								bLocal_112 = true;
							}
							else
							{
								bLocal_112 = false;
							}
							if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
							{
								if (bLocal_112)
								{
									Global_19666 = 1;
									func_66();
									func_63(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_19666 = 1;
					func_66();
					func_63(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_19666 = 1;
					func_66();
					func_63(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
				{
					Global_19666 = 1;
					func_66();
					func_63(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_76833 == 0)
					{
						Global_19666 = 1;
						func_66();
						func_63(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_76833 && Global_2547287.f_1) && Global_2547287.f_37) && Global_19681.f_1 == 9)
				{
					iVar35 = 1;
					if (!MISC::IS_BIT_SET(Global_7552, 24))
					{
						if (MISC::IS_BIT_SET(Global_7552, 26))
						{
							MISC::SET_BIT(&Global_7552, 25);
							MISC::CLEAR_BIT(&Global_7552, 26);
							MISC::CLEAR_BIT(&Global_7553, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_19666 = 1;
					func_66();
					func_63(0);
				}
			}
		}
		if (Global_19659 == 1)
		{
			func_1();
		}
		if (Global_19680 == 2)
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
				PAD::DISABLE_CONTROL_ACTION(0, 24, true);
				PAD::DISABLE_CONTROL_ACTION(0, 257, true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!PAD::IS_CONTROL_PRESSED(2, Global_19650) && !PAD::IS_CONTROL_PRESSED(2, Global_19649))
	{
		Global_19659 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, false) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, false) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, false) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, false) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, false) == iParam0)
			{
				return 4;
			}
		}
	}
	return -2;
}

int func_3(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_4(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_6(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19618);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
		}
	}
}

int func_6(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return MISC::IS_BIT_SET(Global_1689733, 5);
}

bool func_8()
{
	return Global_2547287.f_1;
}

void func_9()
{
	float fVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22064 = 0;
	Global_22065 = 0;
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_19647 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_72())
		{
			iLocal_18 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(true);
		Global_19647 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_111858.f_14047.f_84 == 1)
	{
		Global_111858.f_14047.f_84 = 0;
		HUD::CLEAR_FLOATING_HELP(0, true);
	}
	fVar0 = 350f;
	if (MISC::IS_BIT_SET(Global_7551, 30) || MISC::IS_BIT_SET(Global_7553, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_19641 };
	if (Global_19666 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((MISC::IS_BIT_SET(Global_7552, 26) || MISC::IS_BIT_SET(Global_7551, 30)) || MISC::IS_BIT_SET(Global_7553, 2))
	{
		Local_119 = { Global_19627[Global_19626 /*3*/] };
	}
	else
	{
		Local_119 = { Global_19634[Global_19626 /*3*/] };
	}
	fVar4 = func_15(Local_119, Global_19627[Global_19626 /*3*/], Global_19641, Var1, fVar0, 0);
	if (!iLocal_87 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_87 = 1;
	}
	if (iLocal_87 && (MISC::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
		if (Global_19681.f_1 == 3)
		{
		}
		if (Global_19681.f_1 == 1)
		{
		}
		if (Global_19681.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(false);
		Global_19622 = 0;
		Global_19663 = 0;
		Global_19862 = 0;
		if (Global_111858.f_14047.f_84 == 1)
		{
			Global_111858.f_14047.f_84 = 0;
			HUD::CLEAR_FLOATING_HELP(0, true);
		}
		Global_19625 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_22019 == 0)
		{
		}
		Global_19864 = 0;
		if (func_12(0))
		{
			func_11();
		}
		MISC::CLEAR_BIT(&Global_7552, 8);
		MISC::CLEAR_BIT(&Global_7551, 14);
		MISC::CLEAR_BIT(&Global_7551, 9);
		MISC::CLEAR_BIT(&Global_7551, 27);
		MISC::CLEAR_BIT(&Global_7551, 30);
		MISC::CLEAR_BIT(&Global_7552, 5);
		MISC::CLEAR_BIT(&Global_7552, 19);
		MISC::CLEAR_BIT(&Global_7552, 21);
		MISC::CLEAR_BIT(&Global_7552, 24);
		MISC::CLEAR_BIT(&Global_7552, 25);
		MISC::CLEAR_BIT(&Global_7552, 27);
		MISC::CLEAR_BIT(&Global_7552, 26);
		MISC::CLEAR_BIT(&Global_7553, 2);
		Global_2550685 = 0;
		iLocal_122 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[2 /*15*/].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_19679))
			{
				SYSTEM::WAIT(0);
				PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
				{
					HUD::SET_TEXT_RENDER_ID(iLocal_86);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19662, Global_19601, Global_19602, Global_19603, Global_19604, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_19679);
				}
			}
		}
		Global_19669 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
		{
			func_115(Global_19662, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19662);
		Global_19647 = 0;
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (Global_2547287.f_1)
			{
				if (Global_76833)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19670, true);
				}
			}
		}
		func_112();
		func_110();
		Global_21018 = 0;
		Global_4271303 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22016 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21005 = 6;
		return;
	}
}

void func_11()
{
	if (Global_8356[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8356[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_8356[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_8356[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	MISC::CLEAR_BIT(&Global_7551, 25);
	MISC::SET_BIT(&Global_7552, 11);
}

int func_12(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_13(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_13(int iParam0)
{
	return func_14(iParam0, Global_41631);
}

int func_14(int iParam0, int iParam1)
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

float func_15(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, bool bParam13)
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (Global_4271303 == 0)
	{
		if (MISC::IS_BIT_SET(Global_7551, 14) && Global_19681.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19634[Global_19626 /*3*/].f_1 == Var0.f_1)
			{
				Global_4271303 = 1;
			}
		}
	}
	if (func_72() && Global_4271303 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = MISC::GET_GAME_TIMER();
	}
	fVar3 = func_17((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
	if (fVar3 < 1f)
	{
		fVar4 = fVar3;
		if (bParam13)
		{
			fVar4 = (fVar4 - 1f);
			fVar5 = 0.670158f;
			fVar4 = (((fVar4 * fVar4) * (((fVar5 + 1f) * fVar4) + fVar5)) + 1f);
		}
		else
		{
			fVar4 = SYSTEM::SIN((fVar3 * 90f));
		}
		Global_19609 = { func_16(Param0, Param3, fVar4) };
		Global_19612 = { func_16(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19609 = { Param3 };
		Global_19612 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19609);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19612, 0);
	return fVar3;
}

Vector3 func_16(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return Param0 + Param3 - Param0 * Vector(fParam6, fParam6, fParam6);
}

float func_17(float fParam0, float fParam1, float fParam2)
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

void func_18()
{
	if (Global_19659 == 0)
	{
		if (func_60(2, Global_19653, 0))
		{
			if (Global_76833 == 0)
			{
				if (Global_19866)
				{
					if (Global_19865 == 0)
					{
						Global_19865 = 1;
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(2);
						func_19();
						func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19686), -1082130432, -1082130432, -1082130432);
						Global_19661 = Global_19686;
					}
					else
					{
						Global_19865 = 0;
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(1);
						func_19();
						func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
						Global_19661 = Global_19685;
					}
				}
			}
		}
	}
}

void func_19()
{
	if (Global_19866 == 0)
	{
		func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7551, 17);
	}
	else if (Global_76833)
	{
		func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7551, 17);
	}
	else
	{
		if (Global_19865 == 1)
		{
			if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_19669)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		MISC::SET_BIT(&Global_7551, 17);
	}
}

void func_20()
{
	if (MISC::IS_BIT_SET(Global_7552, 10) || iLocal_122 == 1)
	{
		Global_8158 = MISC::GET_GAME_TIMER();
		Global_8157 = 0;
		Global_19659 = 1;
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "GET_CURRENT_SELECTION");
		iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		iLocal_74 = 1;
	}
	else if (Global_19659 == 0)
	{
		if (func_60(2, Global_19650, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_8158 = MISC::GET_GAME_TIMER();
				Global_8157 = 0;
				Global_19659 = 1;
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "GET_CURRENT_SELECTION");
				iLocal_73 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
				iLocal_74 = 1;
			}
		}
	}
}

void func_21()
{
	if (Global_19659 == 0)
	{
		if (func_60(2, Global_19648, 1))
		{
			if (func_104(2091, -1, 0) == 1)
			{
				if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 0)
				{
					if (!MISC::IS_BIT_SET(Global_7552, 3))
					{
						if (!Global_19624)
						{
							if (!MISC::IS_BIT_SET(Global_4271024, 3))
							{
								if (!MISC::IS_BIT_SET(Global_7551, 14))
								{
									Global_19659 = 1;
									MISC::SET_BIT(&Global_4271024, 3);
									func_22(3, 0, 1, 0);
									Global_22064 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_117();
	if (Global_76833 == 0)
	{
		if (func_80(14))
		{
			if (Global_22064 == 2 || Global_22064 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_19681.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_6(0) == 1)
		{
			return 0;
		}
	}
	if (Global_19647 == 1)
	{
		return 0;
	}
	if (Global_19681.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_19678))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_19681.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_19678 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19663)
	{
		SYSTEM::WAIT(0);
	}
	func_83();
	func_82();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
	{
		Global_8157 = 0;
		Global_19681.f_1 = 7;
		func_23(&(Global_7558[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
			{
				Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_7558[iParam0 /*15*/].f_9) == 0)
		{
			Global_19679 = SYSTEM::START_NEW_SCRIPT(&(Global_7558[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7558[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_23(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_24()
{
	if (func_40())
	{
		if (func_60(2, Global_19653, 0))
		{
			func_38();
			Global_19685 = Global_19661;
			func_35();
			return;
		}
	}
	if (Global_19660)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19660 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[1])
					{
						func_33();
						Global_19661 = 1;
					}
					break;
				
				case 1:
					if (Global_8120[2])
					{
						func_33();
						Global_19661 = 2;
					}
					break;
				
				case 2:
					if (Global_8120[3])
					{
						func_33();
						func_31();
						Global_19661 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_19661 = 4;
					}
					break;
				
				case 3:
					if (Global_8120[4])
					{
						func_33();
						Global_19661 = 4;
					}
					break;
				
				case 4:
					if (Global_8120[5])
					{
						func_33();
						Global_19661 = 5;
					}
					break;
				
				case 5:
					if (Global_8120[6])
					{
						func_33();
						func_31();
						Global_19661 = 6;
					}
					break;
				
				case 6:
					if (Global_8120[7])
					{
						func_33();
						Global_19661 = 7;
					}
					break;
				
				case 7:
					if (Global_8120[8])
					{
						func_33();
						Global_19661 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_19661 = 0;
					}
					break;
				
				case 8:
					if (Global_8120[0])
					{
						func_33();
						func_31();
						Global_19661 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[8])
					{
						func_29();
						func_26();
						Global_19661 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_19661 = 7;
					}
					break;
				
				case 1:
					if (Global_8120[0])
					{
						func_29();
						Global_19661 = 0;
					}
					else if (Global_8120[8])
					{
						func_26();
						func_33();
					}
					else
					{
						func_26();
					}
					break;
				
				case 2:
					if (Global_8120[1])
					{
						func_29();
						Global_19661 = 1;
					}
					break;
				
				case 3:
					if (Global_8120[2])
					{
						func_29();
						func_26();
						Global_19661 = 2;
					}
					break;
				
				case 4:
					if (Global_8120[3])
					{
						func_29();
						Global_19661 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_19869 = 1;
						Global_19661 = 2;
					}
					break;
				
				case 5:
					if (Global_8120[4])
					{
						func_29();
						Global_19661 = 4;
					}
					break;
				
				case 6:
					if (Global_8120[5])
					{
						func_26();
						func_29();
						Global_19661 = 5;
					}
					break;
				
				case 7:
					if (Global_8120[6])
					{
						func_29();
						Global_19661 = 6;
					}
					break;
				
				case 8:
					if (Global_8120[7])
					{
						func_29();
						Global_19661 = 7;
					}
					break;
				}
			}
	}
	if (Global_19660 == 0)
	{
		if (func_60(2, Global_19656, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 2:
					if (Global_8120[0] == 1)
					{
						Global_19661 = 0;
					}
					else
					{
						Global_19661 = 1;
						Global_19869 = 1;
					}
					break;
				
				case 5:
					Global_19661 = 3;
					break;
				
				case 6:
					Global_19661 = 7;
					break;
				
				case 7:
					if (Global_8120[Global_19661 + 1] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 6;
						Global_19869 = 1;
					}
					break;
				
				case 8:
					Global_19661 = 6;
					break;
				
				default:
					Global_19661++;
					break;
			}
			if (Global_19869 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19655, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					Global_19661 = 2;
					break;
				
				case 1:
					if (Global_8120[0] == 1)
					{
						Global_19661 = 0;
					}
					else
					{
						Global_19661 = 2;
						Global_19869 = 1;
					}
					break;
				
				case 3:
					Global_19661 = 5;
					break;
				
				case 6:
					if (Global_8120[8] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 7;
						Global_19869 = 1;
					}
					break;
				
				default:
					Global_19661 = (Global_19661 - 1);
					break;
			}
			if (Global_19869 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19657, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[6])
					{
						Global_19661 = 6;
					}
					break;
				
				case 1:
					if (Global_8120[7])
					{
						Global_19661 = 7;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 4;
					}
					break;
				
				case 2:
					if (Global_8120[8])
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 5;
					}
					break;
				
				case 3:
					if (Global_8120[0])
					{
						Global_19661 = 0;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 6;
					}
					break;
				
				case 4:
					if (Global_8120[1])
					{
						Global_19661 = 1;
					}
					break;
				
				case 5:
					if (Global_8120[2])
					{
						Global_19661 = 2;
					}
					break;
				
				case 6:
					if (Global_8120[3])
					{
						Global_19661 = 3;
					}
					break;
				
				case 7:
					if (Global_8120[4])
					{
						Global_19661 = 4;
					}
					break;
				
				case 8:
					if (Global_8120[5])
					{
						Global_19661 = 5;
					}
					break;
			}
			if (Global_19869 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19658, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[3])
					{
						Global_19661 = 3;
					}
					break;
				
				case 1:
					if (Global_8120[4])
					{
						Global_19661 = 4;
					}
					break;
				
				case 2:
					if (Global_8120[5])
					{
						Global_19661 = 5;
					}
					break;
				
				case 3:
					if (Global_8120[6])
					{
						Global_19661 = 6;
					}
					break;
				
				case 4:
					if (Global_8120[7])
					{
						Global_19661 = 7;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 1;
					}
					break;
				
				case 5:
					if (Global_8120[8])
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 2;
					}
					break;
				
				case 6:
					if (Global_8120[0])
					{
						Global_19661 = 0;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 3;
					}
					break;
				
				case 7:
					if (Global_8120[1])
					{
						Global_19661 = 1;
					}
					break;
				
				case 8:
					if (Global_8120[2])
					{
						Global_19661 = 2;
					}
					break;
			}
			if (Global_19869 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_7558[23 /*15*/].f_10 == 57)
	{
		if (Global_19660 == 1 && Global_19661 == 8)
		{
			if (iLocal_124 == 0)
			{
				iLocal_124 = 1;
				func_25(12);
			}
		}
	}
}

void func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2540612.f_5188.f_7[iVar0]), iVar1);
}

void func_26()
{
	func_109(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19670, true);
	func_27();
}

void func_27()
{
	if (func_28())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
	}
}

int func_28()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4271302 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	func_109(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19670, true);
	func_30();
}

void func_30()
{
	if (func_28())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
	}
}

void func_31()
{
	func_109(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19670, true);
	func_32();
}

void func_32()
{
	if (func_28())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(1);
		}
	}
}

void func_33()
{
	func_109(Global_19662, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19670, true);
	func_34();
}

void func_34()
{
	if (func_28())
	{
		if (Global_19869 == 0)
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_CELL_CAM_MOVE_FINGER(3);
		}
	}
}

void func_35()
{
	MISC::SET_BIT(&Global_7553, 9);
	func_37(10, "CELL_16", 0, "appSettings", 24, 1, 1, 0, 0);
	func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_71 = 0;
	while (iLocal_71 < 9)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_71);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(25);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		func_36(&(Global_7558[10 /*15*/]));
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(225);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iLocal_71++;
	}
	Global_8084[0] = 10;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[10 /*15*/].f_10);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_36(&(Global_7558[10 /*15*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(255);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19();
	func_109(Global_19662, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_78();
}

void func_36(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7558[iParam0 /*15*/]), sParam1, 16);
	Global_7558[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_7558[iParam0 /*15*/].f_5), sParam3, 16);
	Global_7558[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_7558[iParam0 /*15*/].f_10 = iParam4;
	Global_7558[iParam0 /*15*/].f_11 = iParam5;
	Global_7558[iParam0 /*15*/].f_12 = iParam6;
	Global_7558[iParam0 /*15*/].f_13 = iParam7;
	Global_7558[iParam0 /*15*/].f_14 = iParam8;
	if (Global_7558[iParam0 /*15*/].f_12 == 0)
	{
		Global_7558[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_13 == 0)
	{
		Global_7558[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_7558[iParam0 /*15*/].f_14 == 0)
	{
		Global_7558[iParam0 /*15*/].f_14 = 0;
	}
}

void func_38()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19670, true);
		func_39();
	}
}

void func_39()
{
	if (func_28())
	{
		MOBILE::_CELL_CAM_MOVE_FINGER(5);
	}
}

int func_40()
{
	return 0;
}

void func_41()
{
	if (func_60(2, Global_19653, 0))
	{
		func_38();
		MISC::CLEAR_BIT(&Global_7553, 9);
		func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_81(1);
		func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
		func_78();
	}
}

void func_42()
{
	if (Global_19660)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19660 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19661)
			{
				case 6:
					if (Global_8120[7])
					{
						func_33();
						Global_19661 = 7;
					}
					break;
				
				case 7:
					if (Global_8120[6])
					{
						func_29();
						Global_19661 = 6;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19661)
			{
				case 6:
					if (Global_8120[7])
					{
						func_33();
						Global_19661 = 7;
					}
					break;
				
				case 7:
					if (Global_8120[6])
					{
						func_29();
						Global_19661 = 6;
					}
					break;
				}
			}
	}
	if (Global_19660 == 0)
	{
		if (func_60(2, Global_19656, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 2:
					Global_19661 = 0;
					break;
				
				case 5:
					Global_19661 = 3;
					break;
				
				case 7:
					if (Global_8120[Global_19661 + 1] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 6;
						Global_19869 = 1;
					}
					break;
				
				case 8:
					Global_19661 = 6;
					break;
				
				default:
					Global_19661++;
					break;
			}
			if (Global_19869 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19655, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					Global_19661 = 2;
					break;
				
				case 3:
					Global_19661 = 5;
					break;
				
				case 6:
					if (Global_8120[8] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 7;
						Global_19869 = 1;
					}
					break;
				
				default:
					Global_19661 = (Global_19661 - 1);
					break;
			}
			if (Global_19869 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_43()
{
	if (Global_19660)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19660 = 0;
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[1])
					{
						func_33();
						Global_19661 = 1;
					}
					break;
				
				case 1:
					if (Global_8120[2])
					{
						func_33();
						Global_19661 = 2;
					}
					break;
				
				case 2:
					if (Global_8120[3])
					{
						func_33();
						func_31();
						Global_19661 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_19661 = 4;
					}
					break;
				
				case 3:
					if (Global_8120[4])
					{
						func_33();
						Global_19661 = 4;
					}
					break;
				
				case 4:
					if (Global_8120[5])
					{
						func_33();
						Global_19661 = 5;
					}
					break;
				
				case 5:
					if (Global_8120[6])
					{
						func_33();
						func_31();
						Global_19661 = 6;
					}
					break;
				
				case 6:
					if (Global_8120[7])
					{
						func_33();
						Global_19661 = 7;
					}
					break;
				
				case 7:
					if (Global_8120[8])
					{
						func_33();
						Global_19661 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_19661 = 0;
					}
					break;
				
				case 8:
					if (Global_8120[0])
					{
						func_33();
						func_31();
						Global_19661 = 0;
					}
					break;
				}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[8])
					{
						func_29();
						func_26();
						Global_19661 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_19661 = 7;
					}
					break;
				
				case 1:
					if (Global_8120[0])
					{
						func_29();
						Global_19661 = 0;
					}
					break;
				
				case 2:
					if (Global_8120[1])
					{
						func_29();
						Global_19661 = 1;
					}
					break;
				
				case 3:
					if (Global_8120[2])
					{
						func_29();
						func_26();
						Global_19661 = 2;
					}
					break;
				
				case 4:
					if (Global_8120[3])
					{
						func_29();
						Global_19661 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_19869 = 1;
						Global_19661 = 2;
					}
					break;
				
				case 5:
					if (Global_8120[4])
					{
						func_29();
						Global_19661 = 4;
					}
					break;
				
				case 6:
					if (Global_8120[5])
					{
						func_26();
						func_29();
						Global_19661 = 5;
					}
					break;
				
				case 7:
					if (Global_8120[6])
					{
						func_29();
						Global_19661 = 6;
					}
					break;
				
				case 8:
					if (Global_8120[7])
					{
						func_29();
						Global_19661 = 7;
					}
					break;
				}
			}
	}
	if (Global_19660 == 0)
	{
		if (func_60(2, Global_19656, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 2:
					Global_19661 = 0;
					break;
				
				case 5:
					Global_19661 = 3;
					break;
				
				case 7:
					if (Global_8120[Global_19661 + 1] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 6;
						Global_19869 = 1;
					}
					break;
				
				case 8:
					Global_19661 = 6;
					break;
				
				default:
					Global_19661++;
					break;
			}
			if (Global_19869 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19655, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					Global_19661 = 2;
					break;
				
				case 3:
					Global_19661 = 5;
					break;
				
				case 6:
					if (Global_8120[8] == 1)
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19661 = 7;
						Global_19869 = 1;
					}
					break;
				
				default:
					Global_19661 = (Global_19661 - 1);
					break;
			}
			if (Global_19869 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19657, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[6])
					{
						Global_19661 = 6;
					}
					break;
				
				case 1:
					if (Global_8120[7])
					{
						Global_19661 = 7;
					}
					break;
				
				case 2:
					if (Global_8120[8])
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 5;
					}
					break;
				
				case 3:
					if (Global_8120[0])
					{
						Global_19661 = 0;
					}
					break;
				
				case 4:
					if (Global_8120[1])
					{
						Global_19661 = 1;
					}
					break;
				
				case 5:
					if (Global_8120[2])
					{
						Global_19661 = 2;
					}
					break;
				
				case 6:
					if (Global_8120[3])
					{
						Global_19661 = 3;
					}
					break;
				
				case 7:
					if (Global_8120[4])
					{
						Global_19661 = 4;
					}
					break;
				
				case 8:
					if (Global_8120[5])
					{
						Global_19661 = 5;
					}
					break;
			}
			if (Global_19869 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19658, 0))
		{
			Global_19869 = 0;
			switch (Global_19661)
			{
				case 0:
					if (Global_8120[3])
					{
						Global_19661 = 3;
					}
					break;
				
				case 1:
					if (Global_8120[4])
					{
						Global_19661 = 4;
					}
					break;
				
				case 2:
					if (Global_8120[5])
					{
						Global_19661 = 5;
					}
					break;
				
				case 3:
					if (Global_8120[6])
					{
						Global_19661 = 6;
					}
					break;
				
				case 4:
					if (Global_8120[7])
					{
						Global_19661 = 7;
					}
					break;
				
				case 5:
					if (Global_8120[8])
					{
						Global_19661 = 8;
					}
					else
					{
						Global_19869 = 1;
						Global_19661 = 2;
					}
					break;
				
				case 6:
					if (Global_8120[0])
					{
						Global_19661 = 0;
					}
					break;
				
				case 7:
					if (Global_8120[1])
					{
						Global_19661 = 1;
					}
					break;
				
				case 8:
					if (Global_8120[2])
					{
						Global_19661 = 2;
					}
					break;
			}
			if (Global_19869 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_19660 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_44()
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_73))
	{
		iLocal_74 = 0;
		iLocal_72 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_73);
		if (Global_19865 == 0)
		{
			Global_19685 = iLocal_72;
		}
		else
		{
			Global_19686 = iLocal_72;
		}
		if (iLocal_72 < 0)
		{
			iLocal_72 = 0;
		}
		Global_19684 = Global_8084[iLocal_72];
		if (MISC::IS_BIT_SET(Global_7552, 10))
		{
			Global_19684 = 2;
			MISC::CLEAR_BIT(&Global_7552, 10);
		}
		if (iLocal_122 == 1)
		{
			Global_19685 = 1;
			Global_19684 = 0;
			Global_2550685 = 0;
			iLocal_122 = 0;
		}
		iVar0 = 0;
		if (Global_76833)
		{
			if (Global_19684 == 24 && func_40())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_19679))
		{
			iVar0 = 1;
		}
		if (Global_19684 == 3)
		{
			if (MISC::IS_BIT_SET(Global_7552, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || MISC::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false)) || GRAPHICS::GET_USINGNIGHTVISION())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_76833)
				{
					if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, true);
						if (iLocal_113 != joaat("weapon_unarmed"))
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_19684 == 2)
		{
			if (MISC::IS_BIT_SET(Global_7552, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_19684 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7558[Global_19684 /*15*/]), "CELL_BENWEB"))
		{
			if (MISC::IS_BIT_SET(Global_7552, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_76833)
		{
			if (Global_19684 == 15 || Global_19684 == 5)
			{
			}
			else
			{
				if (Global_19684 == 23)
				{
					if (((MISC::IS_BIT_SET(Global_4271024, 4) == 0 && Global_1573931 == 0) && MISC::IS_BIT_SET(Global_4271024, 20) == 0) && MISC::IS_BIT_SET(Global_4271024, 22) == 0)
					{
					}
					if ((((MISC::IS_BIT_SET(Global_4271024, 20) == 1 && MISC::IS_BIT_SET(Global_4271024, 4) == 0) && Global_1573931 == 0) && MISC::IS_BIT_SET(Global_4271024, 22) == 0) && MISC::IS_BIT_SET(Global_4271024, 26) == 0)
					{
						iVar0 = 1;
						MISC::SET_BIT(&Global_4271024, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_19684 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					MISC::CLEAR_BIT(&Global_7551, 17);
					Global_19681.f_1 = 7;
					if (MISC::IS_BIT_SET(Global_7551, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_7558[Global_19684 /*15*/].f_5));
						MISC::SET_BIT(&Global_7551, 23);
					}
				}
				else
				{
					if (Global_19684 == 2 || Global_19684 == 3)
					{
					}
					func_45();
				}
			}
		}
		else
		{
			switch (Global_19684)
			{
				case 3:
					if (Global_110911 == 1)
					{
						iVar0 = 1;
					}
					break;
				
				case 8:
					iVar0 = 1;
					break;
				
				case 15:
					iVar0 = 1;
					break;
				
				case 16:
					iVar0 = 1;
					MISC::SET_BIT(&Global_7551, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_19867 == 0)
					{
						if ((Global_7555 == 0 && iLocal_75 == 0) && Global_41631 == 15)
						{
							iLocal_75 = 1;
							func_38();
							if (!Global_111858.f_14047.f_85)
							{
							}
						}
					}
					else
					{
						func_45();
					}
					break;
				
				default:
					break;
			}
			if (CUTSCENE::_0x5EDEF0CF8C1DAB3C())
			{
				if (Global_19684 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_80(14))
			{
				if (Global_19684 != 3 && Global_19684 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7551, 17);
				Global_19681.f_1 = 7;
				if (MISC::IS_BIT_SET(Global_7551, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_7558[Global_19684 /*15*/].f_5));
					MISC::SET_BIT(&Global_7551, 23);
				}
			}
			else if (Global_19684 != 20)
			{
				if (Global_111858.f_14047.f_86 == 0)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("paparazzo3b")) > 0)
					{
						if (Global_19684 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									func_76("CELL_38", -1);
									Global_111858.f_14047.f_86 = 1;
								}
							}
						}
					}
				}
				func_45();
			}
		}
	}
}

void func_45()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19670, true);
	}
}

void func_46()
{
	if (Global_19647 == 0)
	{
		if (func_15(Global_19634[Global_19626 /*3*/], Global_19627[Global_19626 /*3*/], Global_19641, Global_19641, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7552, 24);
			MISC::SET_BIT(&Global_7552, 26);
		}
	}
}

void func_47()
{
	if (Global_19647 == 0)
	{
		if (func_15(Global_19627[Global_19626 /*3*/], Global_19634[Global_19626 /*3*/], Global_19641, Global_19641, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7552, 25);
			if (Global_21018)
			{
				MISC::CLEAR_BIT(&Global_7552, 27);
			}
		}
	}
}

void func_48()
{
	if (Global_19647 == 0 && Global_19621 == 0)
	{
		if (func_15(Global_19634[Global_19626 /*3*/], Global_19627[Global_19626 /*3*/], Global_19641, Global_19641, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4271303 = 0;
		}
	}
}

void func_49()
{
	float fVar0;
	float fVar1;
	
	if (MISC::IS_BIT_SET(Global_7553, 2))
	{
		MISC::SET_BIT(&Global_7552, 8);
		MISC::SET_BIT(&Global_7551, 14);
		Global_19621 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19641, 0);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) < 1)
	{
		fVar0 = func_15(Global_19627[Global_19626 /*3*/], Global_19634[Global_19626 /*3*/], Global_19644, Global_19641, 450f, 1);
		if (fVar0 >= 1f)
		{
			MISC::SET_BIT(&Global_7552, 8);
			MISC::SET_BIT(&Global_7551, 14);
			Global_19621 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7553, 2);
			iLocal_82 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			MISC::SET_BIT(&Global_7552, 8);
		}
	}
	else
	{
		if (iLocal_82 == 0)
		{
			Local_83 = { Global_19634[Global_19626 /*3*/] };
			Local_83.x = (Local_83.x - 10f);
			Local_83.f_1 = (Local_83.f_1 + 20f);
			iLocal_82 = 1;
		}
		fVar1 = func_15(Global_19627[Global_19626 /*3*/], Local_83, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			MISC::SET_BIT(&Global_7552, 8);
			MISC::SET_BIT(&Global_7551, 14);
			Global_19621 = 0;
			iLocal_18 = 0;
			MISC::CLEAR_BIT(&Global_7553, 2);
			iLocal_82 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			MISC::SET_BIT(&Global_7552, 8);
		}
	}
}

void func_50()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_106);
	}
	else
	{
		iLocal_102 = MISC::GET_GAME_TIMER();
		iLocal_107 = (iLocal_102 - iLocal_101);
	}
	if (iLocal_107 > 4000)
	{
		iLocal_89 = func_101();
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_106 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_101 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_51()
{
	if (Global_19680 == 1)
	{
		func_116();
		if (Global_19659 == 0)
		{
			if (func_60(2, Global_19651, 0))
			{
				if (MISC::IS_BIT_SET(Global_7552, 8))
				{
					if (Global_21052 == 0)
					{
						func_45();
						Global_19659 = 1;
						Global_19680 = 3;
						Global_21054 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_19659 == 0)
		{
			if (func_60(2, Global_19650, 0))
			{
				if (MISC::IS_BIT_SET(Global_7552, 8))
				{
					func_38();
					Global_19659 = 1;
					Global_19680 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					}
					func_57();
					func_56();
				}
			}
		}
	}
	else
	{
		if (iLocal_99 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7551, 27))
			{
				iLocal_99 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_19681.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_19624)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
							else if (!MISC::IS_BIT_SET(Global_7553, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), true);
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Global_7551, 27))
			{
				iLocal_99 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_19680 == 0)
		{
			if (Global_19659 == 0)
			{
				if (func_60(2, Global_19649, 0) || Global_2550685 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (MISC::IS_BIT_SET(Global_7552, 8))
							{
								switch (Global_19681.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_19864 == 0)
										{
											if (Global_19865 == 1)
											{
												func_45();
												Global_19865 = 0;
												func_109(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_83();
												func_82();
												func_81(1);
												func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_19670, true);
												}
												iLocal_18 = 0;
												Global_19681.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_19681.f_1 = 3;
										break;
									
									case 7:
										if (MISC::IS_BIT_SET(Global_7551, 23) == 1)
										{
										}
										if ((Global_8159 - Global_8158) > Global_8160 && MISC::IS_BIT_SET(Global_7551, 23) == 0)
										{
											if (MISC::IS_BIT_SET(Global_7552, 0))
											{
											}
											else
											{
												func_45();
												Global_8157 = 1;
												Global_19681.f_1 = 6;
												if (Global_76833)
												{
													func_109(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_4271300), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_7554 = 99;
												if (Global_2550685 == 0)
												{
													func_52();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_6866 == 132)
										{
											if (Global_2547287.f_1 || MISC::IS_BIT_SET(Global_7552, 20))
											{
												func_45();
												func_74();
											}
										}
										else
										{
											func_45();
											func_74();
											Global_21054 = 1;
										}
										break;
									
									case 9:
										if (Global_21005 == 0)
										{
											Global_19681.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2550685 == 1)
								{
									iLocal_122 = 1;
									Global_2550685 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_52()
{
	char cVar0[24];
	
	if (Global_19664 == 1)
	{
		return;
	}
	if (Global_19681.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
	{
		if (Global_76833)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19681.f_1)
	{
		case 6:
			func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_8156);
			if (Global_8156 == 1)
			{
				func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19685;
			}
			else
			{
				func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19686), -1082130432, -1082130432, -1082130432);
				Global_19661 = Global_19686;
			}
			if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19866 == 0)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7551, 17);
			}
			else if (Global_76833)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				MISC::CLEAR_BIT(&Global_7551, 17);
			}
			else
			{
				if (Global_19865 == 1)
				{
					if (Global_19669)
					{
						func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19669)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				MISC::SET_BIT(&Global_7551, 17);
			}
			if (Global_76833)
			{
				func_78();
				MISC::CLEAR_BIT(&Global_7553, 9);
				func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19685), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_109(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_79(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
			if (MISC::IS_BIT_SET(Global_7551, 20))
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19680 == 1)
			{
				func_103();
				func_109(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_21018)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21020);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300");
					func_36("CELL_217");
					func_36("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (func_55(Global_6866, Global_19681) == 0)
				{
					func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_217", &(Global_1848[Global_6866 /*29*/].f_3), 0);
				}
				func_109(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_21005 == 4 || Global_21005 == 3)
			{
				func_109(Global_19662, "SET_THEME", SYSTEM::TO_FLOAT(Global_111858.f_14047[Global_19681 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_103();
				if (Global_21018)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21020);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_36("CELL_300");
					func_36("CELL_219");
					func_36("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_21263)
					{
						StringCopy(&cVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&cVar0, "CELL_211", 24);
					}
					if (func_55(Global_6866, Global_19681) == 0)
					{
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", &cVar0, "CELL_195", 0);
					}
					else
					{
						func_109(Global_19662, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), &cVar0, &(Global_1848[Global_6866 /*29*/].f_3), 0);
					}
				}
				func_109(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_53();
			break;
		
		default:
			break;
	}
}

void func_53()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
	{
		func_54();
		if (Global_19680 == 1)
		{
			if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21052)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_7551, 20))
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
		}
		else
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
			if (MISC::IS_BIT_SET(Global_7551, 20))
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_54()
{
	if (Global_76833)
	{
		func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::CLEAR_BIT(&Global_7551, 17);
	}
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

void func_56()
{
	if (Global_21018)
	{
		if (Global_76833)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
			{
				if (!MISC::IS_PC_VERSION())
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					MISC::SET_BIT(&(Global_2540612.f_1792), 15);
				}
			}
		}
	}
}

void func_57()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19662))
	{
		if (!Global_21013)
		{
			func_79(Global_19662, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19662, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			MISC::CLEAR_BIT(&Global_7551, 17);
			if (MISC::IS_BIT_SET(Global_7551, 20))
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19669)
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19624)
				{
					func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19662, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_21018)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21020);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				func_36("CELL_300");
				func_36("CELL_219");
				func_36("CELL_219");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (func_55(Global_6866, Global_19681) == 0)
			{
				func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6866 /*10*/].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1848[Global_6866 /*29*/].f_3), &(Global_1848[Global_6866 /*29*/].f_7), "CELL_219", &(Global_1848[Global_6866 /*29*/].f_3), 0);
			}
		}
		func_109(Global_19662, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_58()
{
	Global_19871 = 0;
	func_59();
}

void func_59()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19680 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22016 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21005 = 6;
		Global_19681.f_1 = Global_19683;
		return;
	}
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, iParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_61()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_62(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77081, 0);
}

void func_63(int iParam0)
{
	if (func_65())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_7())
		{
			func_5(1, 1);
		}
		else
		{
			func_5(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7552, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 30);
	}
	if (!func_64())
	{
		Global_19681.f_1 = 3;
	}
}

int func_64()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return MISC::IS_BIT_SET(Global_1689733, 19);
}

void func_66()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_75() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76833)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_76833)
			{
				if (((((iVar2 == 15 || iVar2 == 16) || iVar2 == 17) || iVar2 == 18) || iVar2 == 19) || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					iVar0 = 1;
				}
			}
			else if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 1;
			}
			if (!Global_19624)
			{
				if (Global_6866 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
							}
							else
							{
								if (Global_76833)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
								}
								MISC::SET_BIT(&Global_7551, 11);
								TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_68()
{
	if ((MISC::IS_BIT_SET(Global_7551, 14) && Global_4271303 == 0) && Global_19621 == 0)
	{
		if (func_73())
		{
		}
		else
		{
			func_69();
		}
		if (Global_19681.f_1 == 9)
		{
			if (Global_21018 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_69()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19634[Global_19626 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19621 = 1;
	}
}

void func_70()
{
	if ((MISC::IS_BIT_SET(Global_7551, 14) && Global_4271303 == 0) && Global_19621 == 0)
	{
		if (iLocal_76 == 0)
		{
			if (MISC::IS_BIT_SET(Global_7552, 26))
			{
				MISC::CLEAR_BIT(&Global_7552, 24);
				MISC::CLEAR_BIT(&Global_7552, 25);
				MISC::CLEAR_BIT(&Global_7552, 27);
				MISC::CLEAR_BIT(&Global_7552, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						func_69();
					}
					else if (func_72() == 0)
					{
						func_69();
					}
				}
			}
		}
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (func_72())
			{
				func_71();
			}
		}
		else if (func_73())
		{
		}
		else if (func_72())
		{
			func_71();
		}
		if (Global_19681.f_1 == 9)
		{
			if (Global_21018 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_71()
{
	struct<2> Var0;
	
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19627[Global_19626 /*3*/].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4271303 = 1;
	}
}

int func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			if (Global_19624 == 0)
			{
				if (Global_6866 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Global_21005 != 2)
						{
						}
					}
				}
			}
		}
		if (func_80(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || (PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(MISC::IS_BIT_SET(Global_4456448.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1655233))))
		{
			return 0;
		}
		if (Global_110906)
		{
			return 0;
		}
	}
	if (Global_76833)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4271302 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_111858.f_14047.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_73()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!Global_76833)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::IS_BIT_SET(Global_7551, 11))
			{
				if (!Global_19624)
				{
					TASK::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_76833)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				}
				MISC::CLEAR_BIT(&Global_7551, 11);
			}
		}
	}
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	iVar0 = CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
	iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_76(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_77()
{
	MOBILE::GET_MOBILE_PHONE_RENDER_ID(&iLocal_86);
	if (iLocal_86 == -1)
	{
	}
}

void func_78()
{
	if (Global_76833)
	{
		if (func_40() == 0)
		{
			return;
		}
		func_79(Global_19662, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		MISC::SET_BIT(&Global_7551, 17);
	}
}

void func_79(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_36(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_36(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_36(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_36(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_36(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_80(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_80(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462473)
							{
								if (iVar1 == 14)
								{
									func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_36(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_79(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_82()
{
	if (Global_76833 == 0)
	{
		Global_7558[14 /*15*/].f_4 = -99;
		Global_7558[4 /*15*/].f_4 = -99;
		if (Global_2462473)
		{
			if (func_80(14))
			{
				func_37(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_37(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_37(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_83()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7558[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_76833 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_84(iVar2, Global_19681) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_37(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41631 == 15 && func_62(0) == 0) && Global_7556 == 0)
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 0;
			Global_7557 = 255;
		}
		else
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19867 = 1;
			Global_7557 = 42;
		}
		if (iVar1 == 1)
		{
			func_37(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_37(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_111858.f_14047.f_89 == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111858.f_14047.f_88 == 1)
		{
			func_37(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_37(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_37(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_37(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_37(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_37(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_37(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_37(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_37(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_4271024, 4) == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_37(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_37(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_37(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_37(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_37(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_37(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_37(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_37(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_37(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_37(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_37(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_37(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_37(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_37(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_37(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_37(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_4271024, 4) == 1)
		{
			if (Global_1573931)
			{
				func_37(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 20) == 1)
			{
				func_37(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 22) == 1)
			{
				func_37(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (MISC::IS_BIT_SET(Global_4271024, 26) == 1)
			{
				func_37(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((MISC::IS_BIT_SET(Global_4271024, 4) == 0 && Global_1573931 == 0) && MISC::IS_BIT_SET(Global_4271024, 20) == 0) && MISC::IS_BIT_SET(Global_4271024, 22) == 0) && MISC::IS_BIT_SET(Global_4271024, 26) == 0)
		{
			func_37(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_84(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_19[iParam1];
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_88() == 0)
		{
			return 0;
		}
	}
	if (func_86(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!func_86(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

bool func_86(int* iParam0)
{
	if (func_87())
	{
		*iParam0 = 10;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(iParam0);
}

bool func_87()
{
	return Global_31244;
}

int func_88()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_89()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_115 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)));
	}
	switch (iLocal_115)
	{
		case 0:
			iLocal_90 = 5;
			break;
		
		case 1:
			iLocal_90 = 5;
			break;
		
		case 2:
			iLocal_90 = 4;
			break;
		
		case 3:
			iLocal_90 = 4;
			break;
		
		case 4:
			iLocal_90 = 3;
			break;
		
		case 5:
			iLocal_90 = 2;
			break;
		
		default:
			iLocal_90 = 3;
			break;
	}
	iLocal_116 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	if (iLocal_116 < 2)
	{
		if (iLocal_90 > 2)
		{
			iLocal_90 = (iLocal_90 - 1);
		}
	}
	if (iLocal_117 == 1 || func_90())
	{
		iLocal_90 = 0;
	}
	func_109(Global_19662, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1082130432, -1082130432, -1082130432);
}

int func_90()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = func_96();
		if (func_95(iVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iVar4 = 0;
			while (iVar4 < Global_111858.f_7684.f_136)
			{
				if (MISC::IS_BIT_SET(Global_111858.f_7684[iVar4 /*15*/].f_2, iVar0))
				{
					if (func_93(Var1, func_94(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111858.f_7684.f_764)
			{
				if (MISC::IS_BIT_SET(Global_111858.f_7684.f_651[iVar4 /*14*/].f_2, iVar0))
				{
					if (func_93(Var1, func_92(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111858.f_7684.f_866)
			{
				if (MISC::IS_BIT_SET(Global_111858.f_7684.f_765[iVar4 /*10*/].f_2, iVar0))
				{
					if (func_93(Var1, func_91(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
	}
	return 0;
}

int func_91(int iParam0)
{
	return Global_111858.f_7684.f_765[iParam0 /*10*/].f_7;
}

int func_92(int iParam0)
{
	return Global_111858.f_7684.f_651[iParam0 /*14*/].f_7;
}

int func_93(struct<3> Param0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_41632)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_41632[iParam3 /*5*/]) <= (Global_41632[iParam3 /*5*/].f_3 * Global_41632[iParam3 /*5*/].f_3))
		{
			return 1;
		}
		else if (Global_41632[iParam3 /*5*/].f_4 != -1)
		{
			return func_93(Param0, Global_41632[iParam3 /*5*/].f_4);
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	return Global_111858.f_7684[iParam0 /*15*/].f_7;
}

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

var func_96()
{
	func_97();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_97()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_99(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_98(PLAYER::PLAYER_PED_ID());
			if (func_95(iVar0) && (!func_80(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_95(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

int func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_99(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_99(int iParam0)
{
	if (func_95(iParam0))
	{
		return func_100(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_100(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_101()
{
	func_117();
	return Global_111858.f_14047[Global_19681 /*20*/].f_8;
}

struct<13> func_102(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_103()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Global_19681 == 0)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 1)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 2)
		{
			switch (Global_111858.f_14047[Global_19681 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_19681 == 3)
		{
			switch (Global_4271300)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

int func_104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2552060[iParam0 /*3*/][func_105(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_106();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

var func_106()
{
	return Global_1312763;
}

void func_107()
{
	if (func_80(14))
	{
		if (Global_2462473)
		{
			if (Global_19681.f_1 == 6)
			{
				if (Global_19661 == 7)
				{
					func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_19661 = 6;
					func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_19681.f_1 == 6)
		{
			func_109(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_92 = CLOCK::GET_CLOCK_MINUTES();
	if (iLocal_92 != Global_7554)
	{
		Global_7554 = iLocal_92;
		iLocal_91 = CLOCK::GET_CLOCK_HOURS();
		iLocal_93 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_93)
		{
			case 0:
				StringCopy(&Local_94, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&Local_94, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&Local_94, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&Local_94, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&Local_94, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&Local_94, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&Local_94, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&Local_94, "CELL_206", 16);
				break;
		}
		func_79(Global_19662, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_91), SYSTEM::TO_FLOAT(iLocal_92), -1f, -1f, -1f, &Local_94, 0, 0, 0, 0);
		if (Global_19624 == 0)
		{
			func_89();
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iLocal_100 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_108()
{
	if (Global_76833)
	{
		StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_19624)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_19681)
		{
			case 0:
				StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_19644 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_19626 = 0;
		Global_19627[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_19634[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_19626 = 0;
		Global_19627[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_19634[0 /*3*/] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_19609 = { Global_19627[Global_19626 /*3*/] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19627[Global_19626 /*3*/]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19644, 0);
	Global_19621 = 1;
}

void func_109(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_110()
{
	Global_2547287.f_1 = 0;
	Global_2547287 = 0;
	Global_2547287.f_2 = 0;
	Global_2547287.f_33 = -1;
	Global_2547287.f_34 = -1;
	StringCopy(&(Global_2547287.f_4), "", 64);
	StringCopy(&(Global_2547287.f_39[0 /*16*/]), "", 64);
	Global_2547287.f_38 = 0;
	Global_2547287.f_56 = 0;
	Global_2547287.f_57 = 0;
	Global_2547287.f_58 = -2;
	Global_2547287.f_3 = 0;
	func_111(&(Global_2547287.f_20));
}

void func_111(var uParam0)
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

void func_112()
{
	Global_2547287.f_2 = 1;
	Global_2547287.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::NETWORK_SESSION_IS_IN_VOICE_SESSION())
		{
			while (NETWORK::NETWORK_SESSION_IS_VOICE_SESSION_BUSY())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2547287 = 0;
			Global_2547287.f_2 = 0;
		}
		else if (func_113(Global_2547287.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2547287.f_20)))
			{
				if (!NETWORK::NETWORK_IS_FRIEND_HANDLE_ONLINE(&(Global_2547287.f_20)))
				{
					func_110();
				}
			}
		}
		else
		{
			func_110();
		}
	}
	else
	{
		func_110();
	}
	if (Global_2547287.f_37)
	{
		func_63(0);
	}
	Global_2547287.f_37 = 0;
	Global_2547287.f_3 = 0;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_114()
{
	Global_19871 = 0;
	func_10();
}

void func_115(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_116()
{
	PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19650);
		PAD::SET_INPUT_EXCLUSIVE(0, Global_19651);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
	}
	if (Global_76833)
	{
		Global_111858.f_14047[3 /*20*/].f_10 = func_104(1197, -1, 0);
	}
	if (MISC::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((MISC::GET_GAME_TIMER() - iLocal_118) >= 300 || iLocal_118 == 0) || iLocal_118 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_118 = MISC::GET_GAME_TIMER();
		}
	}
	else if (Global_111858.f_14047[Global_19681 /*20*/].f_10 == 1)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_118) >= 300 || iLocal_118 == 0) || iLocal_118 > MISC::GET_GAME_TIMER())
		{
			PAD::SET_PAD_SHAKE(0, 100, 100);
			iLocal_118 = MISC::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_76833)
			{
				if (!MISC::ARE_STRINGS_EQUAL(&(Global_8356[3 /*2811*/][1 /*281*/].f_144[func_104(1198, -1, 0) /*6*/]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_8356[3 /*2811*/][1 /*281*/].f_144[func_104(1198, -1, 0) /*6*/]), PLAYER::PLAYER_PED_ID(), true);
				}
			}
			else if (!MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14047[Global_19681 /*20*/].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_111858.f_14047[Global_19681 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_111858.f_14047[Global_19681 /*20*/].f_11), PLAYER::PLAYER_PED_ID(), true);
					}
				}
			}
		}
	}
}

void func_117()
{
	if (func_80(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_96();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

