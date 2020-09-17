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
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_19661 = 145;
	GAMEPLAY::CLEAR_BIT(&Global_7357, 8);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 14);
	GAMEPLAY::CLEAR_BIT(&Global_4269765, 3);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 10);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 9);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 26);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 23);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 24);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 27);
	GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
	GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
	Global_2547059 = 0;
	iLocal_122 = 0;
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
	Global_19452 = 0;
	iLocal_74 = 0;
	Global_19430 = 0;
	Global_19470 = 0;
	Global_19471 = 0;
	func_117();
	Global_19417 = { Global_19449 };
	Global_19490 = 4;
	Global_19491 = 0;
	Global_7961 = 1;
	Global_19466 = Global_19490;
	if (Global_19468 == 0)
	{
		Global_19469 = 0;
		if (Global_76622)
		{
			Global_19467 = unk_0x67D02A194A2FC2BD("cellphone_ifruit");
			iLocal_88 = 1;
			if (iLocal_88 == 1)
			{
			}
		}
		else if (Global_19429)
		{
			Global_19474 = 1;
			Global_19467 = unk_0x67D02A194A2FC2BD("cellphone_prologue");
		}
		else
		{
			Global_19467 = unk_0x67D02A194A2FC2BD(&(Global_111638.f_14046[Global_19486]));
		}
		SYSTEM::SETTIMERA(0);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467) && Global_19469 == 0)
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				Global_19469 = 1;
			}
			if (GAMEPLAY::IS_PC_VERSION())
			{
				if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						Global_19469 = 1;
					}
				}
			}
			if (Global_19485 == 1)
			{
				func_116();
			}
		}
		if (Global_19469 == 1)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				func_115(Global_19467, "SHUTDOWN_MOVIE");
			}
			SYSTEM::WAIT(0);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
			Global_19427 = 0;
			Global_19468 = 0;
			Global_19662 = 0;
			if (Global_111638.f_14046.f_84 == 1)
			{
				Global_111638.f_14046.f_84 = 0;
				UI::CLEAR_FLOATING_HELP(0, 1);
			}
			Global_19430 = 1;
			Global_19486.f_1 = 3;
			func_114();
			Global_19474 = 0;
			MOBILE::DESTROY_MOBILE_PHONE();
			GAMEPLAY::CLEAR_BIT(&Global_7356, 9);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 27);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 5);
			GAMEPLAY::CLEAR_BIT(&Global_7357, 21);
			GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
			Global_19664 = 0;
			Global_21865 = 0;
			Global_21864 = 0;
			Global_20818 = 0;
			func_112();
			func_110();
			Global_4270044 = 0;
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		Global_19410 = 0.1f;
		Global_19411 = 0.38f;
		Global_19412 = 0.195f;
		Global_19413 = 0.05f;
		if ((GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION()) || GAMEPLAY::IS_PC_VERSION())
		{
			UI::GET_HUD_COLOUR(18, &uLocal_108, &uLocal_109, &uLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(uLocal_108), SYSTEM::TO_FLOAT(uLocal_109), SYSTEM::TO_FLOAT(uLocal_110), -1082130432);
			UI::GET_HUD_COLOUR(9, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			UI::GET_HUD_COLOUR(6, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
		}
		else
		{
			UI::GET_HUD_COLOUR(9, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 2f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			UI::GET_HUD_COLOUR(126, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 1f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
			UI::GET_HUD_COLOUR(6, &iLocal_108, &iLocal_109, &iLocal_110, &uLocal_111);
			func_109(Global_19467, "SET_SOFT_KEYS_COLOUR", 3f, SYSTEM::TO_FLOAT(iLocal_108), SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432);
		}
		if (Global_19469 == 0)
		{
		}
		func_108();
		if (Global_76622)
		{
			StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
		}
		Global_19468 = 1;
	}
	Global_7359 = 99;
	func_107();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iLocal_100 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	if (UI::IS_RADAR_HIDDEN())
	{
		Global_21819 = 1;
	}
	else
	{
		Global_21819 = 0;
	}
	func_109(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	Global_19428 = 1;
	if (Global_76622)
	{
		Global_19666 = 0;
		Global_4270041 = func_104(2028, -1, 0);
		if (Global_4270041 < 1 || Global_4270041 > 7)
		{
			Global_4270041 = 1;
		}
		func_109(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_4270041), -1082130432, -1082130432, -1082130432, -1082130432);
		func_103();
		Global_4270042 = func_104(2027, -1, 0);
		if (Global_4270042 == 0)
		{
			Var16 = { func_102(PLAYER::PLAYER_ID()) };
			iVar29 = 0;
			if (NETWORK::_0x72D918C99BCACC54(0) == 0)
			{
			}
			if (Global_4270045 == 1)
			{
			}
			if ((NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var16) && NETWORK::_0x72D918C99BCACC54(0)) && Global_4270045 == 0)
			{
				if (NETWORK::_0x5835D9CD92E83184(&Var16, &uVar0))
				{
				}
				else
				{
					iVar29 = 1;
				}
				if (iVar29 == 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_BACKGROUND_CREW_IMAGE");
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_2000");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&uVar0);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					func_109(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			else
			{
				func_109(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else
		{
			func_109(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_4270042), -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	else
	{
		if (Global_19429)
		{
			Global_19666 = 0;
		}
		else if (Global_111638.f_14046.f_88 == 1 || Global_111638.f_14046.f_89 == 1)
		{
			Global_19666 = 0;
		}
		else
		{
			Global_19666 = 0;
		}
		func_109(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
		if (Global_8160 == 0)
		{
			func_109(Global_19467, "SET_BACKGROUND_IMAGE", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_9), -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_SCALE(575f);
		}
		func_103();
	}
	iLocal_89 = func_101();
	if (Global_19429 == 0)
	{
		func_89();
	}
	Global_19464 = 0;
	Global_19665 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_7356, 9);
	Global_2460675 = 0;
	if (func_85(0) && NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		Global_2460675 = 1;
	}
	func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_83();
	func_82();
	func_81(1);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Pull_Out", &Global_19475, 1);
	SYSTEM::SETTIMERB(0);
	while (Global_19486.f_1 < 6 && Global_19469 == 0)
	{
		SYSTEM::WAIT(0);
		if (SYSTEM::TIMERB() > 10000)
		{
			Global_19469 = 1;
		}
		if (Global_19486.f_1 < 4)
		{
			Global_19469 = 1;
		}
	}
	if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
	{
		if (func_80(14))
		{
			func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
		}
		if (Global_8161[Global_19486][0].f_259 == 2)
		{
			func_109(Global_19467, "SET_SLEEP_MODE", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		else
		{
			func_109(Global_19467, "SET_SLEEP_MODE", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
		if (Global_19474)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19474)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		if (Global_19666 == 0)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else if (Global_76622)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			if (Global_19665 == 1)
			{
				if (Global_19474)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			GAMEPLAY::SET_BIT(&Global_7356, 17);
		}
		func_78();
	}
	Global_19472 = 1;
	func_77();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uLocal_106 = NETWORK::GET_NETWORK_TIME();
	}
	else
	{
		iLocal_101 = GAMEPLAY::GET_GAME_TIMER();
	}
	if (Global_19662 == 1)
	{
		if (Global_8161[Global_19486][0].f_259 == 2)
		{
			if (Global_111638.f_14046.f_84 == 0)
			{
				Global_111638.f_14046.f_84 = 1;
				if (Global_19431 == 0)
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
	if (Global_76622 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER() + 375;
	}
	if (func_75())
	{
		iLocal_80 = 1;
	}
	else
	{
		iLocal_80 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
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
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (Global_76622 == 0)
		{
			iLocal_103 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_105 = 0;
		}
	}
	GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (GAMEPLAY::IS_BIT_SET(Global_4269765, 24))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 > 6)
				{
					GAMEPLAY::CLEAR_BIT(&Global_4269765, 24);
					func_83();
					func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_81(1);
					if (Global_19486.f_1 == 6)
					{
						func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
			}
		}
		if (func_73())
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		}
		if (Global_76622 == 0)
		{
			if (iLocal_76)
			{
				if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
				{
					iLocal_76 = 0;
				}
			}
			if (Global_19486.f_1 > 4)
			{
				if ((GAMEPLAY::IS_BIT_SET(Global_7356, 14) && Global_4270044 == 0) && Global_19426 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (func_72())
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_19432[Global_19431].f_1 != Local_77.f_1)
							{
								func_70();
							}
						}
						else
						{
							MOBILE::GET_MOBILE_PHONE_POSITION(&Local_77);
							if (Global_19439[Global_19431].f_1 != Local_77.f_1)
							{
								if (!func_73())
								{
								}
								if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1870099198) < 1)
								{
									func_68();
								}
							}
						}
						if (iLocal_81 == 0)
						{
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_81 = 1;
								func_68();
								func_74();
							}
						}
						else if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_81 = 0;
							func_70();
							if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
							{
								if (Global_20805 != 2)
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
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
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
								if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
								{
									CONTROLS::DISABLE_CONTROL_ACTION(0, 26, 1);
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
		if (Global_2460675 == 1)
		{
			if (!func_85(0) || !NETWORK::NETWORK_IS_SIGNED_ONLINE())
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) == 0)
				{
					if (Global_19486.f_1 > 3)
					{
						Global_19471 = 1;
						func_66();
						func_63(0);
						Global_2460675 = 0;
					}
				}
			}
		}
		if (Global_19667 == 0)
		{
			if ((Global_41431 != 15 || Global_7361 == 1) || func_62(0))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						Global_7362 = 42;
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83();
						func_82();
						func_81(1);
						func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19667 = 1;
			}
		}
		else if ((Global_41431 == 15 && func_62(0) == 0) && Global_7361 == 0)
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					Global_7362 = 255;
					func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83();
					func_82();
					func_81(1);
					func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19667 = 0;
		}
		if (Global_19668 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
			{
				if (!Global_19665)
				{
					if (Global_19486.f_1 == 6)
					{
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_83();
						func_82();
						func_81(1);
						func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
					}
				}
				Global_19668 = 1;
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_7357, 3))
		{
			if (!Global_19665)
			{
				if (Global_19486.f_1 == 6)
				{
					func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_83();
					func_82();
					func_81(1);
					func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19466), -1082130432, -1082130432, -1082130432);
				}
			}
			Global_19668 = 0;
		}
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_19414.f_1 != Global_19432[Global_19431].f_1 || func_75())
			{
				if (Global_19486.f_1 > 3)
				{
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(361769742) == 0)
					{
						if (Global_76622)
						{
							if (Global_19486.f_1 == 9)
							{
								if (Global_20858 == 1 || GAMEPLAY::IS_BIT_SET(Global_7357, 23))
								{
									CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
								}
							}
							else
							{
								CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
							}
						}
						else
						{
							CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
						}
					}
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
						if (GAMEPLAY::IS_BIT_SET(Global_7356, 17))
						{
							CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19457);
						}
					}
					if (!func_61() && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1641206367) == 0)
					{
						CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19458);
					}
				}
			}
			if (Global_19414.f_1 == Global_19432[Global_19431].f_1)
			{
			}
		}
		if (!CONTROLS::_IS_INPUT_DISABLED(2))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
		}
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			if (!Global_73825)
			{
				if (!func_73())
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(0, 180);
					CONTROLS::SET_INPUT_EXCLUSIVE(0, 181);
					CONTROLS::ENABLE_CONTROL_ACTION(0, 180, 1);
					CONTROLS::ENABLE_CONTROL_ACTION(0, 181, 1);
				}
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19460);
				if (!func_61())
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19461);
				}
				if (Global_19486.f_1 > 4)
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19463);
				}
			}
		}
		if (func_60(2, Global_19454, 0))
		{
			iLocal_98 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (iLocal_75 == 1)
		{
			if (!CONTROLS::IS_CONTROL_PRESSED(2, Global_19455))
			{
				Global_7360 = 1;
				iLocal_75 = 0;
			}
			if (!Global_19486.f_1 > 3)
			{
				iLocal_75 = 0;
			}
		}
		if (iLocal_98)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, Global_19454))
			{
				if (SYSTEM::TIMERA() > 5000)
				{
					Global_19486.f_1 = 3;
					func_58();
				}
			}
			else
			{
				iLocal_98 = 0;
			}
		}
		Global_7964 = GAMEPLAY::GET_GAME_TIMER();
		if (Global_19473)
		{
			func_77();
			Global_19472 = 1;
			Global_19473 = 0;
		}
		if (Global_19664 == 0)
		{
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			func_51();
			func_50();
			UI::SET_TEXT_RENDER_ID(iLocal_86);
			if (Global_19472 == 1)
			{
				GRAPHICS::_SET_2D_LAYER(4);
				if (Global_19429)
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				func_107();
			}
			if (Global_19426 == 1)
			{
				if (Global_19486.f_1 > 3)
				{
					func_49();
				}
			}
			else if (Global_19486.f_1 > 3)
			{
				if (Global_4270044 == 1)
				{
					func_48();
				}
				if (GAMEPLAY::IS_BIT_SET(Global_7357, 25))
				{
					if (Global_76622 == 1)
					{
						func_47();
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_7357, 24))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_7357, 26))
					{
						if (func_60(2, Global_19453, 0))
						{
							GAMEPLAY::SET_BIT(&Global_7357, 25);
							GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
							GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				else if (Global_76622 == 1)
				{
					func_46();
				}
			}
		}
		if (iLocal_74)
		{
			if (Global_19486.f_1 == 6)
			{
				func_44();
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_7356, 23))
		{
			if (Global_19486.f_1 == 5 || Global_19486.f_1 == 6)
			{
				if (Global_19664 == 0)
				{
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) < 1 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1870099198) < 1)
					{
						if (Global_19429 == 0)
						{
							if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
							{
								if (!Global_76622)
								{
									if (iLocal_75 == 0)
									{
										if (!func_80(14))
										{
											func_43();
										}
										else if (Global_2460675)
										{
											func_42();
										}
									}
								}
								else if (GAMEPLAY::IS_BIT_SET(Global_7358, 9))
								{
									func_41();
								}
								else
								{
									func_24();
								}
							}
						}
						if (GAMEPLAY::IS_BIT_SET(Global_7356, 9))
						{
							func_22(0, 0, 1, 1);
						}
						else if (Global_21864 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4269765, 3))
							{
								if (Global_76622)
								{
									func_21();
								}
								func_20();
								func_18();
							}
						}
						else
						{
							if (Global_76622)
							{
								func_21();
							}
							if (!GAMEPLAY::IS_BIT_SET(Global_4269765, 3))
							{
								if (Global_21864 == 1)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_4269765, 1))
									{
										if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
										{
											if (Global_76622)
											{
												func_22(7, 0, 1, 0);
											}
											else
											{
												Global_21865 = 0;
											}
											Global_21864 = 0;
											GAMEPLAY::CLEAR_BIT(&Global_4269765, 1);
										}
									}
									else if (GAMEPLAY::IS_BIT_SET(Global_7356, 14))
									{
										func_22(7, 0, 1, 0);
										Global_21864 = 0;
									}
								}
								else
								{
									if (Global_21864 == 3)
									{
										func_22(1, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 2)
									{
										func_22(14, 0, 1, 0);
										Global_21864 = 0;
									}
									if (Global_21864 == 4)
									{
										func_22(23, 0, 1, 0);
										Global_21864 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		else if (SCRIPT::HAS_SCRIPT_LOADED(&(Global_7363[Global_19489].f_5)))
		{
			if (Global_19489 == 0)
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489].f_9) == 0)
				{
					Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489].f_5), 4000);
				}
			}
			else
			{
				iVar32 = 0;
				if (Global_19489 == 23)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 0 && Global_1573926 == 0)
					{
					}
				}
				if (Global_19489 == 2 || iVar32 == 1)
				{
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489].f_9) == 0)
					{
						Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489].f_5), 4592);
					}
				}
				else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[Global_19489].f_9) == 0)
				{
					Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[Global_19489].f_5), 2552);
				}
			}
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[Global_19489].f_5));
			Global_7359 = 99;
			GAMEPLAY::CLEAR_BIT(&Global_7356, 23);
		}
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			if (UI::IS_PAUSE_MENU_ACTIVE())
			{
				CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
			}
		}
		if (Global_19486.f_1 == 1)
		{
			func_9();
		}
		if (Global_19486.f_1 == 0)
		{
			func_9();
		}
		if (Global_19486.f_1 == 3)
		{
			func_9();
		}
		else
		{
			if (Global_20818)
			{
				if (Global_19486.f_1 == 9)
				{
					if (Global_76622)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_7357, 31))
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_7357, 27))
							{
								if (func_8())
								{
									if (!GAMEPLAY::IS_BIT_SET(Global_7356, 9))
									{
										if (func_60(2, Global_19458, 0))
										{
											if (!GAMEPLAY::IS_PC_VERSION())
											{
												if (!Global_19485 == 1)
												{
													if (Global_19486.f_1 > 6)
													{
														GAMEPLAY::SET_BIT(&Global_7357, 24);
														GAMEPLAY::SET_BIT(&Global_7357, 27);
														GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
														GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
														GAMEPLAY::SET_BIT(&(Global_2537071.f_1732), 17);
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
			if (Global_19469 == 1)
			{
				Global_19471 = 1;
				func_63(0);
			}
			if (Global_19470 == 1)
			{
				Global_19471 = 1;
				func_63(0);
			}
			if (Global_76622)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_7358, 0))
				{
					if (UI::IS_PAUSE_MENU_ACTIVE() && !func_7())
					{
						if (Global_2543673.f_1 == 1)
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
						GAMEPLAY::SET_BIT(&Global_7357, 4);
					}
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) == 1f)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1653468))
						{
							func_5(1, 1);
						}
						else
						{
							Global_19471 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				if (func_80(14))
				{
					if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[0] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[1]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111638.f_28045[2])
					{
						iLocal_123 = 0;
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_123 = 1;
					}
				}
				if ((((((((((((((PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-2136899894) > 0) || Global_76883 == 1) || func_3(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID()), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || GRAPHICS::_IS_NIGHTVISION_INACTIVE()) || iLocal_123)
				{
					if (!Global_19429)
					{
						GAMEPLAY::SET_BIT(&Global_7357, 4);
					}
				}
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (Global_76622 == 0)
					{
						if (iLocal_105 == 0)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									iLocal_103 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_105 = 1;
								}
							}
						}
						else
						{
							iLocal_104 = GAMEPLAY::GET_GAME_TIMER();
							iLocal_107 = (iLocal_104 - iLocal_103);
							if (iLocal_107 < 4000)
							{
								GAMEPLAY::SET_BIT(&Global_7357, 4);
							}
							else
							{
								iLocal_105 = 0;
							}
						}
					}
				}
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					if (Global_76622)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, 1);
						if (iLocal_113 != -1569615261 && Global_19486.f_1 < 7)
						{
							GAMEPLAY::SET_BIT(&Global_7357, 4);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uLocal_114 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_MODEL(uLocal_114) == 771711535 || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1066334226)
					{
						iLocal_117 = 1;
					}
					else
					{
						iLocal_117 = 0;
					}
					if (((((ENTITY::GET_ENTITY_MODEL(iLocal_114) == 782665360 || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1006919392) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -692292317) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1435527158) || iLocal_117) || VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_114, 0) == 0)
					{
						GAMEPLAY::SET_BIT(&Global_7357, 4);
					}
					if (((((((((((((((ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1600252419 || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1860900134) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -2096818938) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1917016601) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1255698084) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -114627507) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1924433270) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -32236122) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1897744184) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1881846085) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1180875963) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 682434785) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -749299473) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -32878452) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1043222410) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -692292317)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_114))
						{
							iVar33 = func_2(PLAYER::PLAYER_PED_ID(), iLocal_114);
							if (iVar33 != -2)
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1860900134 || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -114627507)
								{
									if (iVar33 == 3)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1917016601 || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1255698084)
								{
									if (iVar33 == 2 || iVar33 == 1)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1180875963)
								{
									if (iVar33 == 1)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == 682434785)
								{
									if (iVar33 == 3)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1924433270)
								{
									if (iVar33 == 3)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == -32236122)
								{
									if (iVar33 == 1)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == 1897744184)
								{
									if (iVar33 == 0)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1881846085)
								{
									if (iVar33 == -1)
									{
										GAMEPLAY::SET_BIT(&Global_7357, 4);
									}
								}
								if (VEHICLE::_0xE33FFA906CE74880(iLocal_114, iVar33))
								{
									GAMEPLAY::SET_BIT(&Global_7357, 4);
								}
							}
						}
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 69))
					{
						if (Global_76622 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								bVar34 = true;
								if (ENTITY::GET_ENTITY_MODEL(iLocal_114) == 886810209 && ENTITY::IS_ENTITY_IN_WATER(iLocal_114))
								{
									bVar34 = false;
								}
								if (((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_114)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_114))) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == 771711535) || ENTITY::GET_ENTITY_MODEL(iLocal_114) == -1066334226)
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
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 24))
					{
						if (Global_76622 == 0)
						{
							if (Global_19486.f_1 == 6 || Global_19486.f_1 == 7)
							{
								func_63(0);
							}
						}
					}
					iLocal_117 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_37, 17) && (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1653468))
					{
						func_5(1, 1);
					}
					else
					{
						Global_19471 = 1;
						func_66();
						func_63(0);
					}
				}
				if (Global_76622 == 0)
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_19471 = 1;
							func_66();
							func_63(0);
						}
					}
					if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
					{
						if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							Global_19471 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				else if (func_73())
				{
					if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) < iLocal_100)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							Global_19471 = 1;
							func_66();
							func_63(0);
						}
					}
				}
				if (CAM::IS_AIM_CAM_ACTIVE())
				{
					if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_73())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, 1);
							if ((iLocal_113 == 100416529 || iLocal_113 == 205991906) || iLocal_113 == 856002082)
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
									Global_19471 = 1;
									func_66();
									func_63(0);
								}
							}
						}
					}
				}
				if (PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()))
				{
					Global_19471 = 1;
					func_66();
					func_63(0);
				}
				if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_19471 = 1;
					func_66();
					func_63(0);
				}
				if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
				{
					Global_19471 = 1;
					func_66();
					func_63(0);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_76622 == 0)
					{
						Global_19471 = 1;
						func_66();
						func_63(0);
					}
				}
			}
			else
			{
				iVar35 = 0;
				if (((Global_76622 && Global_2543673.f_1) && Global_2543673.f_37) && Global_19486.f_1 == 9)
				{
					iVar35 = 1;
					if (!GAMEPLAY::IS_BIT_SET(Global_7357, 24))
					{
						if (GAMEPLAY::IS_BIT_SET(Global_7357, 26))
						{
							GAMEPLAY::SET_BIT(&Global_7357, 25);
							GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
							GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
						}
					}
				}
				if (iVar35 == 0)
				{
					Global_19471 = 1;
					func_66();
					func_63(0);
				}
			}
		}
		if (Global_19464 == 1)
		{
			func_1();
		}
		if (Global_19485 == 2)
		{
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_1()
{
	if (!CONTROLS::IS_CONTROL_PRESSED(2, Global_19455) && !CONTROLS::IS_CONTROL_PRESSED(2, Global_19454))
	{
		Global_19464 = 0;
	}
}

int func_2(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(uParam1, 0))
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
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 3, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4, 0) == iParam0)
			{
				return 4;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 5, 0) == iParam0)
			{
				return 5;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 6, 0) == iParam0)
			{
				return 6;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 7, 0) == iParam0)
			{
				return 3;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 8, 0) == iParam0)
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
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42383[iVar0] == -1)
		{
			if (iParam0 == Global_42383[iVar0].f_1)
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

int func_6(int iParam0)
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

bool func_7()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_8()
{
	return Global_2543673.f_1;
}

void func_9()
{
	Global_21864 = 0;
	Global_21865 = 0;
	CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	if (Global_19452 == 0)
	{
		MOBILE::SET_MOBILE_PHONE_SCALE(500f);
		if (func_72())
		{
			iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
		}
		else
		{
			iLocal_18 = 0;
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(1);
		Global_19452 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
	}
	if (Global_111638.f_14046.f_84 == 1)
	{
		Global_111638.f_14046.f_84 = 0;
		UI::CLEAR_FLOATING_HELP(0, 1);
	}
	fVar0 = 350f;
	if (GAMEPLAY::IS_BIT_SET(Global_7356, 30) || GAMEPLAY::IS_BIT_SET(Global_7358, 2))
	{
		fVar0 = 25f;
	}
	Var1 = { Global_19446 };
	if (Global_19471 == 1)
	{
		Var1 = { -45f, 45f, 25f };
	}
	if ((GAMEPLAY::IS_BIT_SET(Global_7357, 26) || GAMEPLAY::IS_BIT_SET(Global_7356, 30)) || GAMEPLAY::IS_BIT_SET(Global_7358, 2))
	{
		Local_119 = { Global_19432[Global_19431] };
	}
	else
	{
		Local_119 = { Global_19439[Global_19431] };
	}
	fVar4 = func_15(Local_119, Global_19432[Global_19431], Global_19446, Var1, fVar0, 0);
	if (!iLocal_87 && fVar4 >= 1f)
	{
		MOBILE::DESTROY_MOBILE_PHONE();
		iLocal_87 = 1;
	}
	if (iLocal_87 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_18) > 500)
	{
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (Global_19486.f_1 == 3)
		{
		}
		if (Global_19486.f_1 == 1)
		{
		}
		if (Global_19486.f_1 == 0)
		{
		}
		MOBILE::SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(0);
		Global_19427 = 0;
		Global_19468 = 0;
		Global_19662 = 0;
		if (Global_111638.f_14046.f_84 == 1)
		{
			Global_111638.f_14046.f_84 = 0;
			UI::CLEAR_FLOATING_HELP(0, 1);
		}
		Global_19430 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
		}
		if (Global_21819 == 0)
		{
		}
		Global_19664 = 0;
		if (func_12(0))
		{
			func_11();
		}
		GAMEPLAY::CLEAR_BIT(&Global_7357, 8);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 14);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 9);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 27);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 30);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 5);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 19);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 21);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 24);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 27);
		GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
		GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
		Global_2547059 = 0;
		iLocal_122 = 0;
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_10();
		}
		SYSTEM::SETTIMERA(0);
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[2].f_9) == 0)
		{
			while (SCRIPT::IS_THREAD_ACTIVE(Global_19484))
			{
				SYSTEM::WAIT(0);
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
				{
					UI::SET_TEXT_RENDER_ID(iLocal_86);
					GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_19467, Global_19406, Global_19407, Global_19408, Global_19409, 255, 255, 255, 255, 0);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					SCRIPT::TERMINATE_THREAD(Global_19484);
				}
			}
		}
		Global_19474 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
		{
			func_115(Global_19467, "SHUTDOWN_MOVIE");
		}
		SYSTEM::WAIT(0);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&Global_19467);
		Global_19452 = 0;
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (Global_2543673.f_1)
			{
				if (Global_76622)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hang_Up", &Global_19475, 1);
				}
			}
		}
		func_112();
		func_110();
		Global_20818 = 0;
		Global_4270044 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_10()
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

void func_11()
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
	GAMEPLAY::CLEAR_BIT(&Global_7356, 25);
	GAMEPLAY::SET_BIT(&Global_7357, 11);
}

int func_12(int iParam0)
{
	if (Global_41431 == 15)
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
	return func_14(iParam0, Global_41431);
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
	if (Global_4270044 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_7356, 14) && Global_19486.f_1 < 4)
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
			if (Global_19439[Global_19431].f_1 == Var0.f_1)
			{
				Global_4270044 = 1;
			}
		}
	}
	if (func_72() && Global_4270044 == 0)
	{
		return 2f;
	}
	if (iLocal_18 == 0)
	{
		iLocal_18 = GAMEPLAY::GET_GAME_TIMER();
	}
	fVar3 = func_17((SYSTEM::TO_FLOAT((GAMEPLAY::GET_GAME_TIMER() - iLocal_18)) / fParam12), 0f, 1f);
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
		Global_19414 = { func_16(Param0, Param3, fVar4) };
		Global_19417 = { func_16(Param6, Param9, fVar4) };
	}
	else
	{
		Global_19414 = { Param3 };
		Global_19417 = { Param9 };
	}
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19414);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19417, 0);
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
	if (Global_19464 == 0)
	{
		if (func_60(2, Global_19458, 0))
		{
			if (Global_76622 == 0)
			{
				if (Global_19666)
				{
					if (Global_19665 == 0)
					{
						Global_19665 = 1;
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(2);
						func_19();
						func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19491;
					}
					else
					{
						Global_19665 = 0;
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_81(1);
						func_19();
						func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
						Global_19466 = Global_19490;
					}
				}
			}
		}
	}
}

void func_19()
{
	if (Global_19666 == 0)
	{
		func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
	else if (Global_76622)
	{
		func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
	else
	{
		if (Global_19665 == 1)
		{
			if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else if (Global_19474)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
		}
		else
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
		}
		GAMEPLAY::SET_BIT(&Global_7356, 17);
	}
}

void func_20()
{
	if (GAMEPLAY::IS_BIT_SET(Global_7357, 10) || iLocal_122 == 1)
	{
		Global_7963 = GAMEPLAY::GET_GAME_TIMER();
		Global_7962 = 0;
		Global_19464 = 1;
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
		uLocal_73 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
		iLocal_74 = 1;
	}
	else if (Global_19464 == 0)
	{
		if (func_60(2, Global_19455, 0))
		{
			if (iLocal_75 == 0)
			{
				Global_7963 = GAMEPLAY::GET_GAME_TIMER();
				Global_7962 = 0;
				Global_19464 = 1;
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "GET_CURRENT_SELECTION");
				uLocal_73 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
				iLocal_74 = 1;
			}
		}
	}
}

void func_21()
{
	if (Global_19464 == 0)
	{
		if (func_60(2, Global_19453, 1))
		{
			if (func_104(2090, -1, 0) == 1)
			{
				if (Global_111638.f_14046[Global_19486].f_17 == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_7357, 3))
					{
						if (!Global_19429)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4269765, 3))
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_7356, 14))
								{
									Global_19464 = 1;
									GAMEPLAY::SET_BIT(&Global_4269765, 3);
									func_22(3, 0, 1, 0);
									Global_21864 = 0;
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
	if (Global_76622 == 0)
	{
		if (func_80(14))
		{
			if (Global_21864 == 2 || Global_21864 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_19486.f_1 == 9)
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
	if (Global_19452 == 1)
	{
		return 0;
	}
	if (Global_19486.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_19483))
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
		{
			if (Global_19486.f_1 < 4)
			{
				func_23("cellphone_flashhand");
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-754107665) == 0)
				{
					Global_19483 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_19468)
	{
		SYSTEM::WAIT(0);
	}
	func_83();
	func_82();
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
	{
		Global_7962 = 0;
		Global_19486.f_1 = 7;
		func_23(&(Global_7363[iParam0].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
			{
				Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_7363[iParam0].f_9) == 0)
		{
			Global_19484 = SYSTEM::START_NEW_SCRIPT(&(Global_7363[iParam0].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_7363[iParam0].f_5));
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
		if (func_60(2, Global_19458, 0))
		{
			func_38();
			Global_19490 = Global_19466;
			func_35();
			return;
		}
	}
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_33();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_33();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_33();
						func_31();
						Global_19466 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_33();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_33();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_33();
						func_31();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_33();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_33();
						Global_19466 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_33();
						func_31();
						Global_19466 = 0;
					}
					else
					{
						func_29();
						func_31();
					}
					break;
				}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_29();
						func_26();
						Global_19466 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_29();
						Global_19466 = 0;
					}
					else if (Global_7925[8])
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
					if (Global_7925[1])
					{
						func_29();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_29();
						func_26();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_29();
						Global_19466 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_29();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_26();
						func_29();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_29();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_29();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_60(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 1;
						Global_19669 = 1;
					}
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 6:
					Global_19466 = 7;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 1:
					if (Global_7925[0] == 1)
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19466 = 2;
						Global_19669 = 1;
					}
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
	if (Global_7363[23].f_10 == 57)
	{
		if (Global_19465 == 1 && Global_19466 == 8)
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
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2537071.f_5124.f_7[iVar0]), iVar1);
}

void func_26()
{
	func_109(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_27();
}

void func_27()
{
	if (func_28())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_28()
{
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4270043 || iVar2)
	{
		return 1;
	}
	return 1;
}

void func_29()
{
	func_109(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_30();
}

void func_30()
{
	if (func_28())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(3);
		}
		else
		{
			MOBILE::_MOVE_FINGER(4);
		}
	}
}

void func_31()
{
	func_109(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_32();
}

void func_32()
{
	if (func_28())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_33()
{
	func_109(Global_19467, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_19475, 1);
	func_34();
}

void func_34()
{
	if (func_28())
	{
		if (Global_19669 == 0)
		{
			MOBILE::_MOVE_FINGER(4);
		}
		else
		{
			MOBILE::_MOVE_FINGER(3);
		}
	}
}

void func_35()
{
	GAMEPLAY::SET_BIT(&Global_7358, 9);
	func_37(10, "CELL_16", 0, "appSettings", 24, 1, 1, 0, 0);
	func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	iLocal_71 = 0;
	while (iLocal_71 < 9)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iLocal_71);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(25);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		func_36(&(Global_7363[10]));
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(225);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		iLocal_71++;
	}
	Global_7889[0] = 10;
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[10].f_10);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
	func_36(&(Global_7363[10]));
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(255);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	func_19();
	func_109(Global_19467, "DISPLAY_VIEW", 4f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432);
	func_78();
}

void func_36(char* sParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(sParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_37(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_7363[iParam0]), sParam1, 16);
	Global_7363[iParam0].f_4 = iParam2;
	StringCopy(&(Global_7363[iParam0].f_5), sParam3, 16);
	Global_7363[iParam0].f_9 = GAMEPLAY::GET_HASH_KEY(sParam3);
	Global_7363[iParam0].f_10 = iParam4;
	Global_7363[iParam0].f_11 = iParam5;
	Global_7363[iParam0].f_12 = iParam6;
	Global_7363[iParam0].f_13 = iParam7;
	Global_7363[iParam0].f_14 = iParam8;
	if (Global_7363[iParam0].f_12 == 0)
	{
		Global_7363[iParam0].f_12 = 0;
	}
	if (Global_7363[iParam0].f_13 == 0)
	{
		Global_7363[iParam0].f_13 = 0;
	}
	if (Global_7363[iParam0].f_14 == 0)
	{
		Global_7363[iParam0].f_14 = 0;
	}
}

void func_38()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_19475, 1);
		func_39();
	}
}

void func_39()
{
	if (func_28())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_40()
{
	return 0;
}

void func_41()
{
	if (func_60(2, Global_19458, 0))
	{
		func_38();
		GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
		func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_81(1);
		func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
		func_78();
	}
}

void func_42()
{
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_33();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_29();
						Global_19466 = 6;
					}
					break;
				}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 6:
					if (Global_7925[7])
					{
						func_33();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_29();
						Global_19466 = 6;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_60(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_43()
{
	if (Global_19465)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			Global_19465 = 0;
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[1])
					{
						func_33();
						Global_19466 = 1;
					}
					break;
				
				case 1:
					if (Global_7925[2])
					{
						func_33();
						Global_19466 = 2;
					}
					break;
				
				case 2:
					if (Global_7925[3])
					{
						func_33();
						func_31();
						Global_19466 = 3;
					}
					else
					{
						func_29();
						func_31();
						Global_19466 = 4;
					}
					break;
				
				case 3:
					if (Global_7925[4])
					{
						func_33();
						Global_19466 = 4;
					}
					break;
				
				case 4:
					if (Global_7925[5])
					{
						func_33();
						Global_19466 = 5;
					}
					break;
				
				case 5:
					if (Global_7925[6])
					{
						func_33();
						func_31();
						Global_19466 = 6;
					}
					break;
				
				case 6:
					if (Global_7925[7])
					{
						func_33();
						Global_19466 = 7;
					}
					break;
				
				case 7:
					if (Global_7925[8])
					{
						func_33();
						Global_19466 = 8;
					}
					else
					{
						func_29();
						func_31();
						Global_19466 = 0;
					}
					break;
				
				case 8:
					if (Global_7925[0])
					{
						func_33();
						func_31();
						Global_19466 = 0;
					}
					break;
				}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
		{
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[8])
					{
						func_29();
						func_26();
						Global_19466 = 8;
					}
					else
					{
						func_33();
						func_26();
						Global_19466 = 7;
					}
					break;
				
				case 1:
					if (Global_7925[0])
					{
						func_29();
						Global_19466 = 0;
					}
					break;
				
				case 2:
					if (Global_7925[1])
					{
						func_29();
						Global_19466 = 1;
					}
					break;
				
				case 3:
					if (Global_7925[2])
					{
						func_29();
						func_26();
						Global_19466 = 2;
					}
					break;
				
				case 4:
					if (Global_7925[3])
					{
						func_29();
						Global_19466 = 3;
					}
					else
					{
						func_26();
						func_33();
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 5:
					if (Global_7925[4])
					{
						func_29();
						Global_19466 = 4;
					}
					break;
				
				case 6:
					if (Global_7925[5])
					{
						func_26();
						func_29();
						Global_19466 = 5;
					}
					break;
				
				case 7:
					if (Global_7925[6])
					{
						func_29();
						Global_19466 = 6;
					}
					break;
				
				case 8:
					if (Global_7925[7])
					{
						func_29();
						Global_19466 = 7;
					}
					break;
				}
			}
	}
	if (Global_19465 == 0)
	{
		if (func_60(2, Global_19461, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 2:
					Global_19466 = 0;
					break;
				
				case 5:
					Global_19466 = 3;
					break;
				
				case 7:
					if (Global_7925[Global_19466 + 1] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 6;
						Global_19669 = 1;
					}
					break;
				
				case 8:
					Global_19466 = 6;
					break;
				
				default:
					Global_19466++;
					break;
			}
			if (Global_19669 == 1)
			{
				func_29();
			}
			else
			{
				func_33();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19460, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					Global_19466 = 2;
					break;
				
				case 3:
					Global_19466 = 5;
					break;
				
				case 6:
					if (Global_7925[8] == 1)
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19466 = 7;
						Global_19669 = 1;
					}
					break;
				
				default:
					Global_19466 = (Global_19466 - 1);
					break;
			}
			if (Global_19669 == 1)
			{
				func_33();
			}
			else
			{
				func_29();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19462, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 1:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 2:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 4:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 5:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 7:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 8:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_31();
			}
			else
			{
				func_26();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
		if (func_60(2, Global_19463, 0))
		{
			Global_19669 = 0;
			switch (Global_19466)
			{
				case 0:
					if (Global_7925[3])
					{
						Global_19466 = 3;
					}
					break;
				
				case 1:
					if (Global_7925[4])
					{
						Global_19466 = 4;
					}
					break;
				
				case 2:
					if (Global_7925[5])
					{
						Global_19466 = 5;
					}
					break;
				
				case 3:
					if (Global_7925[6])
					{
						Global_19466 = 6;
					}
					break;
				
				case 4:
					if (Global_7925[7])
					{
						Global_19466 = 7;
					}
					break;
				
				case 5:
					if (Global_7925[8])
					{
						Global_19466 = 8;
					}
					else
					{
						Global_19669 = 1;
						Global_19466 = 2;
					}
					break;
				
				case 6:
					if (Global_7925[0])
					{
						Global_19466 = 0;
					}
					break;
				
				case 7:
					if (Global_7925[1])
					{
						Global_19466 = 1;
					}
					break;
				
				case 8:
					if (Global_7925[2])
					{
						Global_19466 = 2;
					}
					break;
			}
			if (Global_19669 == 1)
			{
				func_26();
			}
			else
			{
				func_31();
			}
			Global_19465 = 1;
			SYSTEM::SETTIMERA(0);
		}
	}
}

void func_44()
{
	if (GRAPHICS::_0x768FF8961BA904D6(uLocal_73))
	{
		iLocal_74 = 0;
		iLocal_72 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_73);
		if (Global_19665 == 0)
		{
			Global_19490 = iLocal_72;
		}
		else
		{
			Global_19491 = iLocal_72;
		}
		if (iLocal_72 < 0)
		{
			iLocal_72 = 0;
		}
		Global_19489 = Global_7889[iLocal_72];
		if (GAMEPLAY::IS_BIT_SET(Global_7357, 10))
		{
			Global_19489 = 2;
			GAMEPLAY::CLEAR_BIT(&Global_7357, 10);
		}
		if (iLocal_122 == 1)
		{
			Global_19490 = 1;
			Global_19489 = 0;
			Global_2547059 = 0;
			iLocal_122 = 0;
		}
		iVar0 = 0;
		if (Global_76622)
		{
			if (Global_19489 == 24 && func_40())
			{
			}
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_19484))
		{
			iVar0 = 1;
		}
		if (Global_19489 == 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
			{
				iVar0 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (((((((PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) || GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_DRIVEABLE(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID()), 0)) || GRAPHICS::_IS_NIGHTVISION_INACTIVE())
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) == 0)
					{
						iVar0 = 1;
					}
					uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(uVar1) < 0f)
					{
						iVar0 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
				{
					iVar0 = 1;
				}
				if (Global_76622)
				{
					if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_113, 1);
						if (iLocal_113 != -1569615261)
						{
							iVar0 = 1;
						}
					}
				}
			}
		}
		if (Global_19489 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_19489 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[Global_19489]), "CELL_BENWEB"))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
			{
				iVar0 = 1;
			}
		}
		if (Global_76622)
		{
			if (Global_19489 == 15 || Global_19489 == 5)
			{
			}
			else
			{
				if (Global_19489 == 23)
				{
					if (((GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 0 && Global_1573926 == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 22) == 0)
					{
					}
					if ((((GAMEPLAY::IS_BIT_SET(Global_4269765, 20) == 1 && GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 0) && Global_1573926 == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 22) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 26) == 0)
					{
						iVar0 = 1;
						GAMEPLAY::SET_BIT(&Global_4269765, 21);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
					{
						if (Global_19489 == 3)
						{
							iVar0 = 1;
						}
					}
				}
				if (iVar0 == 0)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
					GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
					Global_19486.f_1 = 7;
					if (GAMEPLAY::IS_BIT_SET(Global_7356, 23))
					{
					}
					else
					{
						func_38();
						SCRIPT::REQUEST_SCRIPT(&(Global_7363[Global_19489].f_5));
						GAMEPLAY::SET_BIT(&Global_7356, 23);
					}
				}
				else
				{
					if (Global_19489 == 2 || Global_19489 == 3)
					{
					}
					func_45();
				}
			}
		}
		else
		{
			switch (Global_19489)
			{
				case 3:
					if (Global_110691 == 1)
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
					GAMEPLAY::SET_BIT(&Global_7356, 26);
					break;
				
				case 5:
					iVar0 = 1;
					break;
				
				case 20:
					iVar0 = 1;
					if (Global_19667 == 0)
					{
						if ((Global_7360 == 0 && iLocal_75 == 0) && Global_41431 == 15)
						{
							iLocal_75 = 1;
							func_38();
							if (!Global_111638.f_14046.f_85)
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
				if (Global_19489 != 0)
				{
					iVar0 = 1;
				}
			}
			if (func_80(14))
			{
				if (Global_19489 != 3 && Global_19489 != 14)
				{
					iVar0 = 1;
				}
			}
			if (iVar0 == 0)
			{
				func_38();
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
				Global_19486.f_1 = 7;
				if (GAMEPLAY::IS_BIT_SET(Global_7356, 23))
				{
				}
				else
				{
					SCRIPT::REQUEST_SCRIPT(&(Global_7363[Global_19489].f_5));
					GAMEPLAY::SET_BIT(&Global_7356, 23);
				}
			}
			else if (Global_19489 != 20)
			{
				if (Global_111638.f_14046.f_86 == 0)
				{
					if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1357264198) > 0)
					{
						if (Global_19489 == 3)
						{
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									func_76("CELL_38", -1);
									Global_111638.f_14046.f_86 = 1;
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
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_19475, 1);
	}
}

void func_46()
{
	if (Global_19452 == 0)
	{
		if (func_15(Global_19439[Global_19431], Global_19432[Global_19431], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_7357, 24);
			GAMEPLAY::SET_BIT(&Global_7357, 26);
		}
	}
}

void func_47()
{
	if (Global_19452 == 0)
	{
		if (func_15(Global_19432[Global_19431], Global_19439[Global_19431], Global_19446, Global_19446, 350f, 1) >= 1f)
		{
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
			if (Global_20818)
			{
				GAMEPLAY::CLEAR_BIT(&Global_7357, 27);
			}
		}
	}
}

void func_48()
{
	if (Global_19452 == 0 && Global_19426 == 0)
	{
		if (func_15(Global_19439[Global_19431], Global_19432[Global_19431], Global_19446, Global_19446, 350f, 0) >= 1f)
		{
			iLocal_18 = 0;
			Global_4270044 = 0;
		}
	}
}

void func_49()
{
	if (GAMEPLAY::IS_BIT_SET(Global_7358, 2))
	{
		GAMEPLAY::SET_BIT(&Global_7357, 8);
		GAMEPLAY::SET_BIT(&Global_7356, 14);
		Global_19426 = 0;
		iLocal_18 = 0;
		MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19446, 0);
	}
	else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1870099198) < 1)
	{
		fVar0 = func_15(Global_19432[Global_19431], Global_19439[Global_19431], Global_19449, Global_19446, 450f, 1);
		if (fVar0 >= 1f)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 8);
			GAMEPLAY::SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
			iLocal_82 = 0;
		}
		else if (fVar0 >= 0.75f)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 8);
		}
	}
	else
	{
		if (iLocal_82 == 0)
		{
			Local_83 = { Global_19439[Global_19431] };
			Local_83.x = (Local_83.x - 10f);
			Local_83.y = (Local_83.y + 20f);
			iLocal_82 = 1;
		}
		fVar1 = func_15(Global_19432[Global_19431], Local_83, -90f, 0f, 90f, -90f, 0f, 90f, 450f, 1);
		if (fVar1 >= 1f)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 8);
			GAMEPLAY::SET_BIT(&Global_7356, 14);
			Global_19426 = 0;
			iLocal_18 = 0;
			GAMEPLAY::CLEAR_BIT(&Global_7358, 2);
			iLocal_82 = 0;
		}
		else if (fVar1 >= 0.75f)
		{
			GAMEPLAY::SET_BIT(&Global_7357, 8);
		}
	}
}

void func_50()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_106);
	}
	else
	{
		iLocal_102 = GAMEPLAY::GET_GAME_TIMER();
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
			uLocal_106 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			iLocal_101 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
}

void func_51()
{
	if (Global_19485 == 1)
	{
		func_116();
		if (Global_19464 == 0)
		{
			if (func_60(2, Global_19456, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_7357, 8))
				{
					if (Global_20852 == 0)
					{
						func_45();
						Global_19464 = 1;
						Global_19485 = 3;
						Global_20854 = 1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
		}
		if (Global_19464 == 0)
		{
			if (func_60(2, Global_19455, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_7357, 8))
				{
					func_38();
					Global_19464 = 1;
					Global_19485 = 2;
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
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
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 27))
			{
				iLocal_99 = 1;
				SYSTEM::SETTIMERB(0);
			}
		}
		else
		{
			if (Global_19486.f_1 > 3)
			{
				if (SYSTEM::TIMERB() > 1500)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (Global_19429)
							{
								AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
							else if (!GAMEPLAY::IS_BIT_SET(Global_7358, 5))
							{
								AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
							}
						}
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_7356, 27))
			{
				iLocal_99 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		if (Global_19485 == 0)
		{
			if (Global_19464 == 0)
			{
				if (func_60(2, Global_19454, 0) || Global_2547059 == 1)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (GAMEPLAY::IS_BIT_SET(Global_7357, 8))
							{
								switch (Global_19486.f_1)
								{
									case 3:
										break;
									
									case 4:
										break;
									
									case 6:
										if (Global_19664 == 0)
										{
											if (Global_19665 == 1)
											{
												func_45();
												Global_19665 = 0;
												func_109(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
												func_83();
												func_82();
												func_81(1);
												func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
											}
											else
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													AUDIO::PLAY_SOUND_FRONTEND(-1, "Put_Away", &Global_19475, 1);
												}
												iLocal_18 = 0;
												Global_19486.f_1 = 3;
											}
										}
										break;
									
									case 5:
										Global_19486.f_1 = 3;
										break;
									
									case 7:
										if (GAMEPLAY::IS_BIT_SET(Global_7356, 23) == 1)
										{
										}
										if ((Global_7964 - Global_7963) > Global_7965 && GAMEPLAY::IS_BIT_SET(Global_7356, 23) == 0)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_7357, 0))
											{
											}
											else
											{
												func_45();
												Global_7962 = 1;
												Global_19486.f_1 = 6;
												if (Global_76622)
												{
													func_109(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_4270041), -1082130432, -1082130432, -1082130432, -1082130432);
												}
												Global_7359 = 99;
												if (Global_2547059 == 0)
												{
													func_52();
												}
											}
										}
										break;
									
									case 8:
										break;
									
									case 10:
										if (Global_6671 == 132)
										{
											if (Global_2543673.f_1 || GAMEPLAY::IS_BIT_SET(Global_7357, 20))
											{
												func_45();
												func_74();
											}
										}
										else
										{
											func_45();
											func_74();
											Global_20854 = 1;
										}
										break;
									
									case 9:
										if (Global_20805 == 0)
										{
											Global_19486.f_1 = 3;
										}
										break;
									
									default:
										break;
								}
								if (Global_2547059 == 1)
								{
									iLocal_122 = 1;
									Global_2547059 = 0;
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
	if (Global_19469 == 1)
	{
		return;
	}
	if (Global_19486.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (Global_76622)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_19486.f_1)
	{
		case 6:
			func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_81(Global_7961);
			if (Global_7961 == 1)
			{
				func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19490;
			}
			else
			{
				func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19491), -1082130432, -1082130432, -1082130432);
				Global_19466 = Global_19491;
			}
			if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_19666 == 0)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else if (Global_76622)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			}
			else
			{
				if (Global_19665 == 1)
				{
					if (Global_19474)
					{
						func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_19474)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_7356, 17);
			}
			if (Global_76622)
			{
				func_78();
				GAMEPLAY::CLEAR_BIT(&Global_7358, 9);
				func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19490), -1082130432, -1082130432, -1082130432);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_109(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_79(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_19485 == 1)
			{
				func_103();
				func_109(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_36("CELL_300");
					func_36("CELL_217");
					func_36("CELL_217");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else if (func_55(Global_6671, Global_19486) == 0)
				{
					func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_217", &(Global_1798[Global_6671].f_3), 0);
				}
				func_109(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_20805 == 4 || Global_20805 == 3)
			{
				func_109(Global_19467, "SET_THEME", SYSTEM::TO_FLOAT(Global_111638.f_14046[Global_19486].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_103();
				if (Global_20818)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
					GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
					GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					func_36("CELL_300");
					func_36("CELL_219");
					func_36("CELL_219");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					if (Global_21063)
					{
						StringCopy(&Var0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&Var0, "CELL_211", 24);
					}
					if (func_55(Global_6671, Global_19486) == 0)
					{
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", &Var0, "CELL_195", 0);
					}
					else
					{
						func_109(Global_19467, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), &Var0, &(Global_1798[Global_6671].f_3), 0);
					}
				}
				func_109(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_53();
			break;
		
		default:
			break;
	}
}

void func_53()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		func_54();
		if (Global_19485 == 1)
		{
			if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20852)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
		}
		else
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_54()
{
	if (Global_76622)
	{
		func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
	}
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0].f_24[iParam1];
}

void func_56()
{
	if (Global_20818)
	{
		if (Global_76622)
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
			{
				if (!GAMEPLAY::IS_PC_VERSION())
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 8f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Global_2537071.f_1732), 15);
				}
			}
		}
	}
}

void func_57()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_19467))
	{
		if (!Global_20813)
		{
			func_79(Global_19467, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_79(Global_19467, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_7356, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 20))
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_19474)
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_19429)
				{
					func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_79(Global_19467, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_20818)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
				GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM("CELL_CONDFON");
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_20820);
				GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
				func_36("CELL_300");
				func_36("CELL_219");
				func_36("CELL_219");
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			else if (func_55(Global_6671, Global_19486) == 0)
			{
				func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_6671].f_4), "CELL_300", "CELL_219", "CELL_195", 0);
			}
			else
			{
				func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_1798[Global_6671].f_3), &(Global_1798[Global_6671].f_7), "CELL_219", &(Global_1798[Global_6671].f_3), 0);
			}
		}
		func_109(Global_19467, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_58()
{
	Global_19671 = 0;
	func_59();
}

void func_59()
{
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19485 == 1)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_21816 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_20805 = 6;
		Global_19486.f_1 = Global_19488;
		return;
	}
}

int func_60(int iParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, iParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && CONTROLS::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(361769742) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_62(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-448212099) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_76870, 0);
}

void func_63(int iParam0)
{
	if (func_65())
	{
		return;
	}
	if (Global_19664)
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
	if (!func_64())
	{
		Global_19486.f_1 = 3;
	}
}

int func_64()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

void func_66()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_67()
{
	iVar0 = 0;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_75() && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = 1;
		}
	}
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && iVar1 == 0)
		{
			iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			if (Global_76622)
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
			if (!Global_19429)
			{
				if (Global_6671 != 128)
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
							}
							else
							{
								if (Global_76622)
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 0);
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 0);
								}
								GAMEPLAY::SET_BIT(&Global_7356, 11);
								AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 1, 1);
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
	if ((GAMEPLAY::IS_BIT_SET(Global_7356, 14) && Global_4270044 == 0) && Global_19426 == 0)
	{
		if (func_73())
		{
		}
		else
		{
			func_69();
		}
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_69()
{
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19439[Global_19431].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_19426 = 1;
	}
}

void func_70()
{
	if ((GAMEPLAY::IS_BIT_SET(Global_7356, 14) && Global_4270044 == 0) && Global_19426 == 0)
	{
		if (iLocal_76 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7357, 26))
			{
				GAMEPLAY::CLEAR_BIT(&Global_7357, 24);
				GAMEPLAY::CLEAR_BIT(&Global_7357, 25);
				GAMEPLAY::CLEAR_BIT(&Global_7357, 27);
				GAMEPLAY::CLEAR_BIT(&Global_7357, 26);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
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
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
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
		if (Global_19486.f_1 == 9)
		{
			if (Global_20818 == 0)
			{
				iLocal_76 = 1;
			}
		}
	}
}

void func_71()
{
	MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
	if (Global_19432[Global_19431].f_1 == Var0.f_1)
	{
	}
	else
	{
		Global_4270044 = 1;
	}
}

int func_72()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			if (Global_19429 == 0)
			{
				if (Global_6671 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_20805 != 2)
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
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_0x4F32C0D5A90A9B40())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_110686)
		{
			return 0;
		}
	}
	if (Global_76622)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_0x4F32C0D5A90A9B40()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iVar3))) || ENTITY::GET_ENTITY_MODEL(iVar3) == -1030275036) || ENTITY::GET_ENTITY_MODEL(iVar3) == -616331036) || ENTITY::GET_ENTITY_MODEL(iVar3) == 782665360) || ENTITY::GET_ENTITY_MODEL(iVar3) == 771711535) || ENTITY::GET_ENTITY_MODEL(iVar3) == -1066334226) || ENTITY::GET_ENTITY_MODEL(iVar3) == 1070967343)
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4270043 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(361769742) > 0 || Global_111638.f_14046.f_89)
		{
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-622120100) > 0)
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-50326605) > 0)
	{
		return 1;
	}
	return 0;
}

void func_74()
{
	if (!Global_76622)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_7356, 11))
			{
				if (!Global_19429)
				{
					AI::TASK_USE_MOBILE_PHONE(PLAYER::PLAYER_PED_ID(), 0, 1);
				}
				if (Global_76622)
				{
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 244, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, 1);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, 1);
				}
				GAMEPLAY::CLEAR_BIT(&Global_7356, 11);
			}
		}
	}
}

int func_75()
{
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		return 1;
	}
	return 0;
}

void func_76(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
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
	if (Global_76622)
	{
		if (func_40() == 0)
		{
			return;
		}
		func_79(Global_19467, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(&Global_7356, 17);
	}
}

void func_79(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char[4] cParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(cParam7))
	{
		func_36(cParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_36(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_36(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_36(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_36(iParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

bool func_80(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_81(int iParam0)
{
	Global_21873 = 0;
	Global_7961 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_7925[iVar0] = 0;
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
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar2 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2460675)
							{
								if (iVar1 == 14)
								{
									func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							Global_7925[iVar0] = 1;
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
				if (iParam0 == Global_7363[iVar1].f_11)
				{
					if (iVar0 == Global_7363[iVar1].f_4)
					{
						if (Global_7925[iVar0] == 0)
						{
							Global_7889[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111638.f_14136[iVar3].f_24 != 0)
									{
										if (Global_111638.f_14136[iVar3].f_28 == 0)
										{
											if (Global_111638.f_14136[iVar3].f_99[Global_19486] == 1)
											{
												Global_21873++;
											}
										}
									}
									iVar3++;
								}
								func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21873), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76622)
								{
									iVar4 = 0;
									iVar4 = Global_4268499;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268500[iVar5].f_24 != 0)
										{
											if (Global_4268500[iVar5].f_28 == 0)
											{
												if (Global_4268500[iVar5].f_99[Global_19486] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19486)
									{
										case 0:
											iVar6 = Global_42607;
											break;
										
										case 1:
											iVar6 = Global_42608;
											break;
										
										case 2:
											iVar6 = Global_42609;
											break;
										
										default:
											break;
									}
									func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(Global_21868), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7362);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_7357, 3))
								{
									iVar8 = 42;
									Global_19668 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19668 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_7363[iVar1]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_7357, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_19467, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_7363[iVar1].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_36(&(Global_7363[iVar1]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_7363[iVar1].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626881.f_1;
								func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							else
							{
								func_79(Global_19467, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7363[iVar1].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7363[iVar1]), 0, 0, 0, 0);
							}
							Global_7925[iVar0] = 1;
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
	if (Global_76622 == 0)
	{
		Global_7363[14].f_4 = -99;
		Global_7363[4].f_4 = -99;
		if (Global_2460675)
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
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_7363[iVar0].f_4 = -99;
		iVar0++;
	}
	if (Global_76622 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (func_84(iVar2, Global_19486) == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_37(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_37(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_37(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_41431 == 15 && func_62(0) == 0) && Global_7361 == 0)
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 0;
			Global_7362 = 255;
		}
		else
		{
			func_37(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_19667 = 1;
			Global_7362 = 42;
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
		if (Global_111638.f_14046.f_89 == 1)
		{
			func_37(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_111638.f_14046.f_88 == 1)
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
		if (GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 1)
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
		if (!GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 1)
		{
			if (Global_1573926)
			{
				func_37(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269765, 20) == 1)
			{
				func_37(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269765, 22) == 1)
			{
				func_37(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269765, 26) == 1)
			{
				func_37(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((GAMEPLAY::IS_BIT_SET(Global_4269765, 4) == 0 && Global_1573926 == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 22) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269765, 26) == 0)
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
	return Global_1798[iParam0].f_19[iParam1];
}

int func_85(int iParam0)
{
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
	if (func_86(&iVar0) && GAMEPLAY::GET_PROFILE_SETTING(903) == 1)
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

int func_86(var uParam0)
{
	if (func_87())
	{
		*uParam0 = 10;
		return 1;
	}
	return NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(uParam0);
}

bool func_87()
{
	return Global_31044;
}

int func_88()
{
	if (GAMEPLAY::IS_ORBIS_VERSION())
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
		iLocal_115 = ZONE::GET_ZONE_SCUMMINESS(ZONE::GET_ZONE_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)));
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
	iLocal_116 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
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
	func_109(Global_19467, "SET_PROVIDER_ICON", SYSTEM::TO_FLOAT(iLocal_89), SYSTEM::TO_FLOAT(iLocal_90), -1082130432, -1082130432, -1082130432);
}

int func_90()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = func_96();
		if (func_95(iVar0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_136)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7683[iVar4].f_2, iVar0))
				{
					if (func_93(Var1, func_94(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_764)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7683.f_651[iVar4].f_2, iVar0))
				{
					if (func_93(Var1, func_92(iVar4)))
					{
						return 1;
					}
				}
				iVar4++;
			}
			iVar4 = 0;
			while (iVar4 < Global_111638.f_7683.f_866)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_111638.f_7683.f_765[iVar4].f_2, iVar0))
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
	return Global_111638.f_7683.f_765[iParam0].f_7;
}

int func_92(int iParam0)
{
	return Global_111638.f_7683.f_651[iParam0].f_7;
}

int func_93(struct<3> Param0, int iParam3)
{
	if (iParam3 != -1)
	{
		if (iParam3 >= Global_41432)
		{
			return 0;
		}
		if (SYSTEM::VDIST2(Param0, Global_41432[iParam3]) <= (Global_41432[iParam3].f_3 * Global_41432[iParam3].f_3))
		{
			return 1;
		}
		else if (Global_41432[iParam3].f_4 != -1)
		{
			return func_93(Param0, Global_41432[iParam3].f_4);
		}
	}
	return 0;
}

int func_94(int iParam0)
{
	return Global_111638.f_7683[iParam0].f_7;
}

bool func_95(int iParam0)
{
	return iParam0 < 3;
}

var func_96()
{
	func_97();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_97()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_99(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_98(PLAYER::PLAYER_PED_ID());
			if (func_95(iVar0) && (!func_80(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_95(Global_111638.f_2358.f_539.f_4321))
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

int func_98(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
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
	return Global_1798[iParam0];
}

int func_101()
{
	func_117();
	return Global_111638.f_14046[Global_19486].f_8;
}

struct<13> func_102(var uParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_103()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_19486 == 0)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
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
		if (Global_19486 == 1)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
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
		if (Global_19486 == 2)
		{
			switch (Global_111638.f_14046[Global_19486].f_6)
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
		if (Global_19486 == 3)
		{
			switch (Global_4270041)
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
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_105(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_105(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_106();
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

var func_106()
{
	return Global_1312745;
}

void func_107()
{
	if (func_80(14))
	{
		if (Global_2460675)
		{
			if (Global_19486.f_1 == 6)
			{
				if (Global_19466 == 7)
				{
					func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432);
				}
				else
				{
					Global_19466 = 6;
					func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
				}
			}
		}
		else if (Global_19486.f_1 == 6)
		{
			func_109(Global_19467, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(6), -1082130432, -1082130432, -1082130432);
		}
	}
	iLocal_92 = TIME::GET_CLOCK_MINUTES();
	if (iLocal_92 != Global_7359)
	{
		Global_7359 = iLocal_92;
		iLocal_91 = TIME::GET_CLOCK_HOURS();
		iLocal_93 = TIME::GET_CLOCK_DAY_OF_WEEK();
		switch (iLocal_93)
		{
			case 0:
				StringCopy(&cLocal_94, "CELL_920", 16);
				break;
			
			case 1:
				StringCopy(&cLocal_94, "CELL_921", 16);
				break;
			
			case 2:
				StringCopy(&cLocal_94, "CELL_922", 16);
				break;
			
			case 3:
				StringCopy(&cLocal_94, "CELL_923", 16);
				break;
			
			case 4:
				StringCopy(&cLocal_94, "CELL_924", 16);
				break;
			
			case 5:
				StringCopy(&cLocal_94, "CELL_925", 16);
				break;
			
			case 6:
				StringCopy(&cLocal_94, "CELL_926", 16);
				break;
			
			default:
				StringCopy(&cLocal_94, "CELL_206", 16);
				break;
		}
		func_79(Global_19467, "SET_TITLEBAR_TIME", SYSTEM::TO_FLOAT(iLocal_91), SYSTEM::TO_FLOAT(iLocal_92), -1f, -1f, -1f, &cLocal_94, 0, 0, 0, 0);
		if (Global_19429 == 0)
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
	if (Global_76622)
	{
		StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
		MOBILE::CREATE_MOBILE_PHONE(0);
	}
	else if (Global_19429)
	{
		MOBILE::CREATE_MOBILE_PHONE(4);
		StringCopy(&Global_19475, "Phone_SoundSet_Prologue", 24);
	}
	else
	{
		switch (Global_19486)
		{
			case 0:
				StringCopy(&Global_19475, "Phone_SoundSet_Michael", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			
			case 2:
				StringCopy(&Global_19475, "Phone_SoundSet_Trevor", 24);
				MOBILE::CREATE_MOBILE_PHONE(1);
				break;
			
			case 1:
				StringCopy(&Global_19475, "Phone_SoundSet_Franklin", 24);
				MOBILE::CREATE_MOBILE_PHONE(2);
				break;
			
			default:
				StringCopy(&Global_19475, "Phone_SoundSet_Default", 24);
				MOBILE::CREATE_MOBILE_PHONE(0);
				break;
			}
	}
	Global_19449 = { -90f, -130f, 0f };
	if (GRAPHICS::GET_IS_HIDEF())
	{
		Global_19431 = 0;
		Global_19432[0] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -158.8f), -113f };
		Global_19439[0] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 117.2f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -53.3f), -113f };
	}
	else
	{
		Global_19431 = 0;
		Global_19432[0] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -121.8f), -91.5f };
		Global_19439[0] = { (GRAPHICS::GET_SAFE_ZONE_SIZE() * 85.7f), (GRAPHICS::GET_SAFE_ZONE_SIZE() * -35.3f), -91.5f };
	}
	Global_19414 = { Global_19432[Global_19431] };
	MOBILE::SET_MOBILE_PHONE_POSITION(Global_19432[Global_19431]);
	MOBILE::SET_MOBILE_PHONE_ROTATION(Global_19449, 0);
	Global_19426 = 1;
}

void func_109(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_110()
{
	Global_2543673.f_1 = 0;
	Global_2543673 = 0;
	Global_2543673.f_2 = 0;
	Global_2543673.f_33 = -1;
	Global_2543673.f_34 = -1;
	StringCopy(&(Global_2543673.f_4), "", 64);
	StringCopy(&(Global_2543673.f_39[0]), "", 64);
	Global_2543673.f_38 = 0;
	Global_2543673.f_56 = 0;
	Global_2543673.f_57 = 0;
	Global_2543673.f_58 = -2;
	Global_2543673.f_3 = 0;
	func_111(&(Global_2543673.f_20));
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
	Global_2543673.f_2 = 1;
	Global_2543673.f_38 = 1;
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (NETWORK::_0x855BC38818F6F684())
		{
			while (NETWORK::_0xEF0912DDF7C4CB4B())
			{
				SYSTEM::WAIT(0);
			}
			NETWORK::NETWORK_SESSION_VOICE_LEAVE();
			Global_2543673 = 0;
			Global_2543673.f_2 = 0;
		}
		else if (func_113(Global_2543673.f_20))
		{
			if (NETWORK::NETWORK_IS_FRIEND(&(Global_2543673.f_20)))
			{
				if (!NETWORK::_0x87EB7A3FFCB314DB(&(Global_2543673.f_20)))
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
	if (Global_2543673.f_37)
	{
		func_63(0);
	}
	Global_2543673.f_37 = 0;
	Global_2543673.f_3 = 0;
}

bool func_113(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_114()
{
	Global_19671 = 0;
	func_10();
}

void func_115(var uParam0, char* sParam1)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0, sParam1);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_116()
{
	CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19455);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_19456);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
	}
	if (Global_76622)
	{
		Global_111638.f_14046[3].f_10 = func_104(1197, -1, 0);
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
		{
		}
		else if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_118) >= 300 || iLocal_118 == 0) || iLocal_118 > GAMEPLAY::GET_GAME_TIMER())
		{
			CONTROLS::SET_PAD_SHAKE(0, 100, 100);
			iLocal_118 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else if (Global_111638.f_14046[Global_19486].f_10 == 1)
	{
		if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_118) >= 300 || iLocal_118 == 0) || iLocal_118 > GAMEPLAY::GET_GAME_TIMER())
		{
			CONTROLS::SET_PAD_SHAKE(0, 100, 100);
			iLocal_118 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!AUDIO::IS_PED_RINGTONE_PLAYING(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_76622)
			{
				if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_8161[3][1].f_144[func_104(1198, -1, 0)]), "Silent Ringtone Dummy"))
				{
					AUDIO::PLAY_PED_RINGTONE(&(Global_8161[3][1].f_144[func_104(1198, -1, 0)]), PLAYER::PLAYER_PED_ID(), 1);
				}
			}
			else if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_111638.f_14046[Global_19486].f_11), "Silent Ringtone Dummy"))
			{
				if (!Global_8161[Global_19486][0].f_259 == 1)
				{
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
						{
						}
						else
						{
							AUDIO::PLAY_PED_RINGTONE(&(Global_111638.f_14046[Global_19486].f_11), PLAYER::PLAYER_PED_ID(), 1);
						}
					}
					else
					{
						AUDIO::PLAY_PED_RINGTONE(&(Global_111638.f_14046[Global_19486].f_11), PLAYER::PLAYER_PED_ID(), 1);
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
		Global_19486 = func_96();
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

