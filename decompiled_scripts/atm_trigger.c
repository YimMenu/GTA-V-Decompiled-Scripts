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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	fLocal_210 = ((0.05f + 0.275f) - 0.01f);
	iLocal_243 = 1;
	Local_501 = { 0f, -0.7f, 1f };
	Local_504 = { 0f, -0.8f, 1f };
	fLocal_519 = -1f;
	fLocal_520 = -1f;
	iLocal_592 = 3000;
	iLocal_593 = -1;
	iLocal_599 = -1;
	iLocal_600 = -1;
	func_109();
	if (Global_37197)
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_30770)
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iScriptParam_0))
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iScriptParam_0);
	if (func_102(ENTITY::GET_ENTITY_COORDS(iScriptParam_0, 1)))
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_101(13) || func_101(14))
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar2 = true;
	Local_496 = { ENTITY::GET_ENTITY_COORDS(iScriptParam_0, 1) };
	Local_496.z = (Local_496.z + 1f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		Local_507 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_0, Local_501) };
	}
	else
	{
		Local_507 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iScriptParam_0, Local_504) };
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_507, &fVar3, 0, 0))
	{
		Local_507.z = (fVar3 + 1f);
	}
	SYSTEM::SETTIMERA(0);
	AUDIO::HINT_SCRIPT_AUDIO_BANK("ATM", 0, -1);
	while (bVar2)
	{
		iLocal_592 = (iLocal_592 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		bVar4 = false;
		SYSTEM::SETTIMERA(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iScriptParam_0, 0))
			{
				func_103();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		if (Global_76622 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_517 = 1;
			if (func_89())
			{
				func_103();
				SCRIPT::TERMINATE_THIS_THREAD();
			}
		}
		else if (iLocal_517)
		{
			if (func_89())
			{
				func_103();
				SCRIPT::TERMINATE_THIS_THREAD();
				iLocal_517 = 0;
			}
		}
		bVar5 = true;
		if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && !CUTSCENE::IS_CUTSCENE_PLAYING()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar1 && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_101(15))
				{
					if (!Global_111638.f_20559.f_100)
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (Global_76622)
							{
								func_88("ATM_1TM_TUT", -1);
							}
							else if (!func_87("ATM_1TM_TUT"))
							{
								func_84("ATM_1TM_TUT", 2, 0, -1, 10000, 7, 0, 0, 0);
							}
						}
					}
					if (func_83("ATM_1TM_TUT"))
					{
						Global_111638.f_20559.f_100 = 1;
					}
				}
				if ((((((((((((((!PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !func_82(0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_496, 1f, 1f, 1f, 0, 1, 1)) && !PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0)) && !func_81()) && !func_80(iScriptParam_0, 0)) && !func_79()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 4f) && func_77(PLAYER::PLAYER_ID()) != 171) && !func_76(Global_4456448.f_232883)) && !func_75(Global_4456448.f_232883)) && !func_74(Global_4456448.f_232883)) && !MISC::IS_BIT_SET(Global_4456448.f_28, 1)) && !func_73(PLAYER::PLAYER_ID()))
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Local_496, 2f, 0))
					{
						bVar5 = false;
					}
					bVar6 = false;
					if (func_71(PLAYER::PLAYER_ID()))
					{
						bVar5 = true;
						bVar6 = true;
						if (!bLocal_516)
						{
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("SHOP_JUGG_NONE");
								HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("GB_COUT_ATM");
								HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, -1);
							}
						}
					}
					if (TASK::IS_SCENARIO_OCCUPIED(Local_496, 2f, 1))
					{
						bVar6 = true;
					}
					if (Global_76622)
					{
						if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
						{
							bVar6 = true;
						}
					}
					if (HUD::IS_PAUSE_MENU_ACTIVE())
					{
						bVar6 = true;
					}
					if (!bVar6)
					{
						if (iLocal_593 == -1)
						{
							func_70(&iLocal_593, 4, "FINH_ATMNEAR", 0, 0, 0, 0);
						}
						bVar4 = true;
						if (func_69(iLocal_593, 1))
						{
							Global_42344 = 1;
							while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ATM", 0, -1) && !func_64(iScriptParam_0, 1))
							{
								SYSTEM::WAIT(0);
							}
							SYSTEM::WAIT(100);
							StringCopy(&Var7, "", 64);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
								if (func_63(0, &Var7))
								{
									TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_507, 1f, 5000, ENTITY::GET_ENTITY_HEADING(iScriptParam_0), 0.25f);
									iLocal_499 = 0;
								}
							}
							SYSTEM::WAIT(100);
							SYSTEM::WAIT(100);
							if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									iLocal_515 = func_62(1, 1, 1, 1);
									iLocal_598 = 1;
									if (Global_76622)
									{
										iLocal_556[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
										HUD::SET_MULTIPLAYER_WALLET_CASH();
										HUD::SET_MULTIPLAYER_BANK_CASH();
										Global_2547056 = 1;
									}
									iVar0 = 0;
									AUDIO::START_AUDIO_SCENE("ATM_PLAYER_SCENE");
									func_6(0, &iVar0, iScriptParam_0, bVar5);
									AUDIO::STOP_AUDIO_SCENE("ATM_PLAYER_SCENE");
									if (Global_76622)
									{
										Global_2547056 = 0;
										HUD::REMOVE_MULTIPLAYER_WALLET_CASH();
										HUD::REMOVE_MULTIPLAYER_BANK_CASH();
									}
									if (!bVar5 || Global_76622)
									{
										if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
										{
											if (!bVar5)
											{
												PED::_0xF1C03A5352243A30(PLAYER::PLAYER_PED_ID());
												TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
											}
											if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
													{
														PED::_0xF1C03A5352243A30(PLAYER::PLAYER_PED_ID());
														if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
														{
															TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
														}
													}
													if (func_63(1, &Var7))
													{
														STREAMING::REMOVE_ANIM_DICT(&Var7);
													}
													if (func_63(2, &Var7))
													{
														STREAMING::REMOVE_ANIM_DICT(&Var7);
													}
													if (func_63(3, &Var7))
													{
														if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500))
														{
															PED::DETACH_SYNCHRONIZED_SCENE(iLocal_500);
															iLocal_500 = -1;
														}
														iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iScriptParam_0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
														NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &Var7, "exit", 8f, -4f, 5, 0, 1148846080, 0);
														NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
														STREAMING::REMOVE_ANIM_DICT(&Var7);
													}
												}
											}
										}
									}
									iVar23 = 0;
									while (iVar23 < 1000 && !func_64(iScriptParam_0, 1))
									{
										iVar23 = (iVar23 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
										PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
										PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
										PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
										PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
										PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
										PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
										SYSTEM::WAIT(0);
									}
									if (Global_76622)
									{
										iLocal_556[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
									}
									iLocal_598 = 0;
								}
							}
							func_4(&iLocal_593);
						}
					}
					else
					{
						func_4(&iLocal_593);
						SYSTEM::WAIT(250);
					}
				}
				else
				{
					func_4(&iLocal_593);
					bVar24 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
					{
						if (!BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
						{
							bVar24 = true;
						}
					}
					else
					{
						bVar24 = true;
					}
					if (bVar24)
					{
						bVar2 = false;
					}
				}
			}
		}
		else
		{
			bVar2 = false;
		}
		if (!bVar4)
		{
			if (iLocal_593 != -1)
			{
				func_4(&iLocal_593);
			}
		}
		SYSTEM::WAIT(0);
	}
	if (bLocal_514)
	{
		func_1(-706733491, 13, 0);
	}
	func_103();
}

void func_1(int iParam0, int iParam1, int iParam2)
{
	if (func_3(iParam1, iParam2))
	{
		iVar0 = func_2();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_2()
{
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2460557[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_3(int iParam0, var uParam1)
{
	if (Global_1312865)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312877) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_4(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_5(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0])
		{
			Global_42151[iVar0].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_5(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42151[iVar0].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_6(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	Global_58693 = 1;
	bVar0 = false;
	iLocal_594 = unk_0x67D02A194A2FC2BD("ATM");
	iLocal_595 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (func_61(uParam2))
	{
		if (func_60(4))
		{
			func_59(4, 0);
			iLocal_597 = 1;
		}
	}
	iVar1 = MISC::GET_GAME_TIMER();
	CAM::INVALIDATE_IDLE_CAM();
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_594) && !func_64(uParam2, 1))
	{
		SYSTEM::WAIT(0);
		func_56();
		func_55(uParam2);
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_595) && !func_64(uParam2, 1))
	{
		SYSTEM::WAIT(0);
		func_56();
		func_55(uParam2);
	}
	func_53(0, 0);
	while ((MISC::GET_GAME_TIMER() - iVar1) < iParam0)
	{
		SYSTEM::WAIT(0);
		func_56();
		func_55(uParam2);
		if (func_52())
		{
			return;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER() + 3500;
	bVar3 = false;
	bVar4 = true;
	bVar5 = false;
	iLocal_601 = 1;
	iLocal_591 = 0;
	while (bVar4)
	{
		iLocal_591 = (iLocal_591 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_40();
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		}
		if (!Global_76622)
		{
			if (MISC::GET_GAME_TIMER() > iVar2)
			{
				bVar3 = true;
			}
		}
		else if (iVar2 > 0)
		{
			if (MISC::GET_GAME_TIMER() > iVar2)
			{
				bVar3 = true;
				iVar2 = -1;
			}
		}
		else if (iVar2 == -1)
		{
			bVar3 = true;
		}
		if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_PAUSE_MENU_ACTIVE())
		{
			bVar3 = false;
		}
		iVar6 = 0;
		if (func_80(uParam2, 1))
		{
			iVar6 = 1;
		}
		if (bVar3)
		{
			PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		}
		if (MISC::GET_GAME_TIMER() > iVar2)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_595, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		switch (*iParam1)
		{
			case 4:
			case 8:
				bVar3 = false;
				break;
			
			case 11:
			case 10:
				bVar3 = true;
				break;
		}
		if (bVar3)
		{
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || iVar6) && bVar5)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "PIN_BUTTON", "ATM_SOUNDS", 1);
				if (Global_76622)
				{
					switch (*iParam1)
					{
						case 0:
							bVar4 = false;
							iLocal_515 = func_62(0, 1, iLocal_515, 1);
							break;
						
						case 1:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 2:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 3:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 5:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 6:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 7:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 9:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 10:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
						
						case 11:
							iLocal_601 = 1;
							*iParam1 = 0;
							break;
					}
				}
				else
				{
					iLocal_515 = func_62(0, 1, iLocal_515, 0);
					bVar4 = false;
				}
			}
		}
		if (!bVar5)
		{
			if (!Global_76622)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_594, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_32(iLocal_594);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_594, "UPDATE_TEXT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar5 = true;
		}
		if (Global_76622)
		{
			if (iLocal_601)
			{
				while (iLocal_601)
				{
					iLocal_601 = 0;
					func_26(uParam2, iLocal_594, iParam1);
				}
			}
		}
		if (Global_76622)
		{
			func_25(iLocal_594);
		}
		if (bVar3)
		{
			PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
			PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
			if (Global_76622)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 201) || (PAD::IS_CONTROL_JUST_PRESSED(2, 237) && !HUD::_0x3D9ACB1EB139E702()))
				{
					func_9(uParam2, iParam1);
				}
			}
			func_8(iLocal_594);
		}
		if ((!bVar0 && !Global_76622) && !bParam3)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_496, 2f, -1);
			bVar0 = true;
		}
		func_55(uParam2);
	}
	if (Global_76622)
	{
		func_7(iLocal_594);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_594);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_595);
	iLocal_594 = 0;
	iLocal_595 = 0;
	Global_58693 = 0;
}

void func_7(int iParam0)
{
	if (iLocal_518)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_CURSOR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iLocal_518 = 0;
		fLocal_519 = -1f;
	}
}

void func_8(int iParam0)
{
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 187))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_INPUT_EVENT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(11);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (!Global_76622)
	{
		return;
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		fVar2 = (1f + (Global_73961 * SYSTEM::TIMESTEP()));
		if (PAD::IS_CONTROL_PRESSED(2, 242) || PAD::IS_CONTROL_PRESSED(2, 187))
		{
			iVar1 = -200;
		}
		if (PAD::IS_CONTROL_PRESSED(2, 241) || PAD::IS_CONTROL_PRESSED(2, 188))
		{
			iVar1 = 200;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ANALOG_STICK_INPUT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((SYSTEM::TO_FLOAT(iVar1) * fVar2));
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
		iVar0 = (PAD::GET_CONTROL_VALUE(2, 197) - 128);
		iVar1 = (PAD::GET_CONTROL_VALUE(2, 198) - 128);
		if (iVar0 < 10 && iVar0 > -10)
		{
			iVar0 = 0;
		}
		if (iVar1 < 10 && iVar1 > -10)
		{
			iVar1 = 0;
		}
		fVar2 = (1f + (Global_73961 * SYSTEM::TIMESTEP()));
		if (!iLocal_602 == iVar0 || !iLocal_603 == iVar1)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_ANALOG_STICK_INPUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((-SYSTEM::TO_FLOAT(iVar0) * fVar2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((-SYSTEM::TO_FLOAT(iVar1) * fVar2));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_602 = iVar0;
			iLocal_603 = iVar1;
		}
	}
}

void func_9(var uParam0, var uParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_594, "SET_INPUT_SELECT");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_594, "GET_CURRENT_SELECTION");
	uVar0 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
	while (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uVar0) && !func_64(uParam0, 1))
	{
		func_40();
	}
	iLocal_600 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uVar0);
	switch (*uParam1)
	{
		case 0:
			switch (iLocal_600)
			{
				case 2:
					func_24(uParam1, 3);
					break;
				
				case 1:
					func_24(uParam1, 7);
					break;
				
				case 3:
					func_24(uParam1, 1);
					break;
			}
			return;
		
		case 1:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
				
				case 2:
					func_24(uParam1, 6);
					break;
			}
			return;
		
		case 2:
			if (func_23())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 3);
						break;
					
					case 2:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
					}
			}
			return;
		
		case 6:
			if (func_22())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 7);
						break;
					
					case 2:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
					}
			}
			return;
		
		case 3:
			if (!func_23())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 4:
						func_24(uParam1, 0);
						iLocal_596 = 0;
						break;
					
					case 8:
						iLocal_596 = 0;
						func_24(uParam1, 1);
						break;
					
					case 1:
						func_24(uParam1, 5);
						iLocal_596 = func_21(0, 1);
						break;
					
					case 2:
						func_24(uParam1, 5);
						iLocal_596 = func_21(1, 1);
						break;
					
					case 3:
						func_24(uParam1, 5);
						iLocal_596 = func_21(2, 1);
						break;
					
					case 5:
						func_24(uParam1, 5);
						iLocal_596 = func_21(3, 1);
						break;
					
					case 6:
						func_24(uParam1, 5);
						iLocal_596 = func_21(4, 1);
						break;
					
					case 7:
						func_24(uParam1, 5);
						iLocal_596 = func_21(5, 1);
						break;
					}
			}
			return;
		
		case 7:
			if (!func_22())
			{
				switch (iLocal_600)
				{
					case 1:
						func_24(uParam1, 0);
						break;
				}
			}
			else
			{
				switch (iLocal_600)
				{
					case 4:
						func_24(uParam1, 0);
						iLocal_596 = 0;
						break;
					
					case 8:
						iLocal_596 = 0;
						func_24(uParam1, 1);
						break;
					
					case 1:
						func_24(uParam1, 9);
						iLocal_596 = func_21(0, 0);
						break;
					
					case 2:
						func_24(uParam1, 9);
						iLocal_596 = func_21(1, 0);
						break;
					
					case 3:
						func_24(uParam1, 9);
						iLocal_596 = func_21(2, 0);
						break;
					
					case 5:
						func_24(uParam1, 9);
						iLocal_596 = func_21(3, 0);
						break;
					
					case 6:
						func_24(uParam1, 9);
						iLocal_596 = func_21(4, 0);
						break;
					
					case 7:
						func_24(uParam1, 9);
						iLocal_596 = func_21(5, 0);
						break;
					}
			}
			return;
		
		case 5:
			switch (iLocal_600)
			{
				case 1:
					if (func_20(uParam0, iLocal_596))
					{
						func_24(uParam1, 4);
					}
					else
					{
						func_24(uParam1, 10);
					}
					iLocal_596 = 0;
					break;
				
				case 2:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 9:
			switch (iLocal_600)
			{
				case 1:
					if (func_10(uParam0, iLocal_596))
					{
						func_24(uParam1, 8);
					}
					else
					{
						func_24(uParam1, 10);
					}
					iLocal_596 = 0;
					break;
				
				case 2:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 10:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		case 11:
			switch (iLocal_600)
			{
				case 1:
					func_24(uParam1, 0);
					break;
			}
			return;
		
		default:
	}
}

int func_10(var uParam0, int iParam1)
{
	iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	if (iParam1 > iVar0)
	{
		return 0;
	}
	if (func_19())
	{
		if (NETSHOPPING::_0x613F125BA3BD2EB9())
		{
			return 0;
		}
		NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar1, &uVar2);
		if (iVar1 != 8)
		{
			return 0;
		}
		if (NETSHOPPING::_NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(func_18(791613967), iParam1))
		{
			iVar3 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS();
			while (iVar3 == 1 && !func_64(uParam0, 1))
			{
				iVar3 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
				func_40();
			}
			if (iVar3 == 3)
			{
				NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED();
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
	iLocal_599 = MONEY::WITHDRAW_VC(iParam1);
	bLocal_514 = true;
	if (Global_76622 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_11(1918, 1, -1);
	}
	return 1;
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_15(iParam0, func_16(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_14(iParam0))
	{
		func_13(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_12(iParam0, iVar0, iParam2, 1);
	}
}

void func_12(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_16(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_16(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_16(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_16(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_16(uParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_16(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_16(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_16(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_16(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_16(uParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_16(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_16(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_16(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_16(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_16(uParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_16(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_16(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_16(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_16(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_16(uParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_16(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_16(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_16(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_16(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_16(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_16(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_16(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_16(uParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_16(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_16(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_16(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_16(uParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_16(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_16(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_16(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_16(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_16(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_16(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_16(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_16(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_16(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_16(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_16(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_16(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_16(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_16(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_16(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_16(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_16(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_16(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_16(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_16(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_16(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_16(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_16(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_16(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_16(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_16(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_16(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_16(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_16(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_16(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_16(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_16(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_16(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_16(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_16(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_16(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_16(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_16(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_16(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_16(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_16(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_16(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_16(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_16(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_16(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_16(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_16(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_16(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_16(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_16(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_16(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_16(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_16(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_16(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_16(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_16(uParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_16(uParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_16(uParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_16(uParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_16(uParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_16(uParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_16(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_13(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_16(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_14(int iParam0)
{
	if (Global_1387909)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8726:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8728:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8730:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8732:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8731:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 10016:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
			case 8534:
			case 8975:
			case 8977:
			case 8978:
			case 8980:
				return 1;
				break;
			}
	}
	return 0;
}

int func_15(int iParam0, var uParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_16(uParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_16(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
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

var func_17()
{
	return Global_1312745;
}

int func_18(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_19()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_20(var uParam0, int iParam1)
{
	if (!MONEY::_NETWORK_CAN_SPEND_MONEY_2(iParam1, 0, 0, 0, &uVar0, -1, 0))
	{
		return 0;
	}
	if (func_19())
	{
		if (NETSHOPPING::_0x613F125BA3BD2EB9())
		{
			return 0;
		}
		NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar1, &uVar2);
		if (iVar1 != 8)
		{
			return 0;
		}
		if (NETSHOPPING::_NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(func_18(791613967), iParam1))
		{
			iVar3 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
			while (iVar3 == 1 && !func_64(uParam0, 1))
			{
				iVar3 = NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_GET_STATUS_2();
				func_40();
			}
			if (iVar3 == 3)
			{
				NETSHOPPING::_NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED();
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
	MONEY::DEPOSIT_VC(iParam1);
	if (Global_76622 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_11(1918, 1, -1);
	}
	bLocal_514 = true;
	return 1;
}

int func_21(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (iParam1 == 1)
	{
		iVar0 = MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
	}
	else
	{
		iVar0 = MONEY::NETWORK_GET_VC_BANK_BALANCE();
	}
	if (iVar0 == 0)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			if (50 > iVar0)
			{
				return iVar0;
			}
			return 50;
		
		case 1:
			if (500 > iVar0 && iVar0 > 50)
			{
				return iVar0;
			}
			return 500;
		
		case 2:
			if (2500 > iVar0 && iVar0 > 500)
			{
				return iVar0;
			}
			return 2500;
		
		case 3:
			if (10000 > iVar0 && iVar0 > 2500)
			{
				return iVar0;
			}
			return 10000;
		
		case 4:
			if (100000 > iVar0 && iVar0 > 10000)
			{
				return iVar0;
			}
			return 100000;
		
		case 5:
			if (10000000 > iVar0 && iVar0 > 100000)
			{
				return iVar0;
			}
			return 10000000;
		
		default:
	}
	return 0;
}

int func_22()
{
	if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(0, 0))
	{
		return 1;
	}
	return 0;
}

int func_23()
{
	if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(0, 1))
	{
		return 1;
	}
	return 0;
}

void func_24(var uParam0, int iParam1)
{
	iLocal_601 = 1;
	*uParam0 = iParam1;
}

void func_25(int iParam0)
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_518 == 0)
		{
			if (PAD::_IS_USING_KEYBOARD(2))
			{
				if (fLocal_519 == -1f)
				{
					fLocal_519 = PAD::GET_CONTROL_NORMAL(2, 239);
					fLocal_520 = PAD::GET_CONTROL_NORMAL(2, 240);
				}
				else if (fLocal_519 != PAD::GET_CONTROL_NORMAL(2, 239) || fLocal_520 != PAD::GET_CONTROL_NORMAL(2, 240))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_CURSOR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					iLocal_518 = 1;
				}
			}
			else
			{
				fLocal_519 = -1f;
			}
		}
		else if ((((((!PAD::_IS_USING_KEYBOARD(2) || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || PAD::IS_CONTROL_JUST_PRESSED(2, 189)) || PAD::IS_CONTROL_JUST_PRESSED(2, 190)) || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SHOW_CURSOR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			fLocal_519 = -1f;
			iLocal_518 = 0;
		}
		if (iLocal_518)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(2, 239);
			fVar1 = PAD::GET_CONTROL_NORMAL(2, 240);
			if (((fVar0 >= 0f && fVar0 <= 1f) && fVar1 >= 0f) && fVar1 <= 1f)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MOUSE_INPUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

void func_26(var uParam0, int iParam1, var uParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0 = 0;
	bVar1 = false;
	bVar2 = false;
	switch (*uParam2)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_31("MPATM_SER");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			func_31("MPATM_DIDM");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MPATM_WITM");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			func_31("MPATM_LOG");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MENU");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_LOG");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MPATM_BACK");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_29(iParam1) > 13)
			{
				bVar1 = true;
				bVar2 = true;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_TRANSACTIONS");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_31("MPATM_PEND");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0 = MISC::GET_GAME_TIMER() + 1000;
			while (iVar0 > MISC::GET_GAME_TIMER() && !func_64(uParam0, 1))
			{
				func_40();
			}
			func_24(uParam2, 11);
			break;
		
		case 8:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_31("MPATM_PEND");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (func_28(uParam0))
			{
				func_24(uParam2, 11);
			}
			else
			{
				func_24(uParam2, 10);
			}
			break;
		
		case 2:
			if (func_23())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_XDOL");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(MONEY::NETWORK_GET_VC_BANK_BALANCE(), 1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MO_YES");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_31("MO_NO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_NODO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 6:
			if (func_22())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_XDOL2");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(MONEY::NETWORK_GET_VC_BANK_BALANCE(), 1);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MO_YES");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_31("MO_NO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_NODO2");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 3:
			if (!func_23())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_NODO");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_DITMT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(0, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(0, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(1, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(1, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(2, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(2, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(3, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(3, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(4, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(4, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= func_21(5, 1))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(5, 1), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_CASH_OPTIONS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 5:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_CONF");
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iLocal_596, 1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MO_YES");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			func_31("MO_NO");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 7:
			if (!func_22())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_NODO2");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_31("MPATM_WITMT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(0, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(0, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(1, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(1, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(2, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(2, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
				func_31("MPATM_BACK");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(3, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(5);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(3, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(4, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(4, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= func_21(5, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(func_21(5, 0), 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_CASH_OPTIONS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
		
		case 9:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATC_CONFW");
			HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iLocal_596, 1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MO_YES");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			func_31("MO_NO");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 10:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_31("MPATM_ERR");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MPATM_BACK");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 11:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			func_31("MPATM_TRANCOM");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("MPATM_BACK");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_MESSAGE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	func_53(bVar1, bVar2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam1, "DISPLAY_BALANCE");
	func_27(PLAYER::GET_PLAYER_NAME(PLAYER::GET_PLAYER_INDEX()));
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_ACBA");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_27(MONEY::NETWORK_GET_STRING_BANK_BALANCE());
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_27(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_28(var uParam0)
{
	iVar0 = iLocal_599;
	iVar1 = MISC::GET_GAME_TIMER() + 1000;
	while (!MONEY::_0xE154B48B68EF72BC(iVar0) && !func_64(uParam0, 1))
	{
		func_40();
	}
	while (iVar1 > MISC::GET_GAME_TIMER() && !func_64(uParam0, 1))
	{
		func_40();
	}
	return MONEY::_0x6FCF8DDEA146C45B(iVar0);
}

int func_29(int iParam0)
{
	iVar0 = 2;
	if (Global_2097152[func_30()].f_10753 > 15)
	{
		Global_2097152[func_30()].f_10753 = 0;
	}
	iVar1 = (Global_2097152[func_30()].f_10753 - 1);
	if (iVar1 < 0)
	{
		iVar1 = 15;
	}
	iVar2 = 16;
	iVar3 = 0;
	while (iVar2 > 0)
	{
		if (Global_2097152[func_30()].f_10753.f_1[iVar1] > 0 && Global_2097152[func_30()].f_10753.f_132[iVar1] != 1262307134)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			iVar3++;
			switch (Global_2097152[func_30()].f_10753.f_115[iVar1])
			{
				case 4:
				case 2:
				case 1:
				case 6:
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					break;
				
				case 0:
				case 3:
				case 5:
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					break;
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2097152[func_30()].f_10753.f_1[iVar1]);
			switch (Global_2097152[func_30()].f_10753.f_115[iVar1])
			{
				case 0:
					func_31("MPATM_PLCHLDR_WDR");
					break;
				
				case 1:
					func_31("MPATM_PLCHLDR_CAD");
					break;
				
				case 2:
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_PLCHLDR_CRF");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2097152[func_30()].f_10753.f_18[iVar1]));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					break;
				
				case 3:
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("MPATM_PLCHLDR_CST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2097152[func_30()].f_10753.f_18[iVar1]));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					break;
				
				case 4:
					func_31("MPATM_PLCHLDR_BRT");
					break;
				
				case 5:
					if (Global_2097152[func_30()].f_10753.f_132[iVar1] != 0)
					{
						iVar4 = Global_2097152[func_30()].f_10753.f_132[iVar1];
						switch (iVar4)
						{
							case 2129044656:
								func_31("MONEY_SPENT_CONTACT_SERVICE");
								break;
							
							case -2061062157:
								func_31("MONEY_SPENT_PROPERTY_UTIL");
								break;
							
							case -632380201:
								func_31("MONEY_SPENT_JOB_ACTIVITY");
								break;
							
							case 1262307134:
								func_31("MONEY_SPENT_BETTING");
								break;
							
							case 1238791730:
								func_31("MONEY_SPENT_STYLE_ENT");
								break;
							
							case 478532527:
								func_31("MONEY_SPENT_HEALTHCARE");
								break;
							
							case -152954333:
								func_31("MONEY_SPENT_FROM_DEBUG");
								break;
							
							case -1763470753:
								func_31("MONEY_SPENT_DROPPED_STOLEN");
								break;
							
							case 1013304474:
								func_31("MONEY_SPENT_VEH_MAINTENANCE");
								break;
							
							case -1995364556:
								func_31("MONEY_SPENT_HOLDUPS");
								break;
							
							case -804615011:
								func_31("MONEY_SPENT_PASSIVEMODE");
								break;
						}
					}
					else
					{
						func_31("MPATM_PLCHLDR_PRCH");
					}
					break;
				
				case 6:
					if (Global_2097152[func_30()].f_10753.f_132[iVar1] != 0)
					{
						iVar5 = Global_2097152[func_30()].f_10753.f_132[iVar1];
						switch (iVar5)
						{
							case 1639475247:
								func_31("MONEY_EARN_JOBS");
								break;
							
							case -296514299:
								func_31("MONEY_EARN_SELLING_VEH");
								break;
							
							case -1267463912:
								func_31("MONEY_EARN_BETTING");
								break;
							
							case -368618205:
								func_31("MONEY_EARN_GOOD_SPORT");
								break;
							
							case 41126866:
								func_31("MONEY_EARN_PICKED_UP");
								break;
							
							case 414439973:
								func_31("MONEY_EARN_SHARED");
								break;
							
							case 765901839:
								func_31("MONEY_EARN_JOBSHARED");
								break;
							
							case -871326891:
								func_31("MONEY_EARN_ROCKSTAR_AWARD");
								break;
							
							case 645760435:
								func_31("MONEY_EARN_REFUND");
								break;
							
							case -1392064501:
								func_31("MONEY_EARN_JOB_BONUS");
								break;
							
							case -1378221995:
								func_31("MONEY_EARN_HEIST_JOB");
								break;
						}
					}
					else
					{
						func_31("MPATM_PLCHLDR_REF");
					}
					break;
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
		iVar1 = (iVar1 - 1);
		if (iVar1 == -1)
		{
			iVar1 = 15;
		}
		iVar2 = (iVar2 - 1);
	}
	return iVar3;
}

int func_30()
{
	iVar0 = 0;
	return iVar0;
}

void func_31(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_32(int iParam0)
{
	iVar0 = Global_111638.f_28045[func_34()].f_17;
	if (iVar0 == 4 || iVar0 == 3)
	{
		return;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_31("W_BA_LGOF");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	switch (iVar0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("ACCNA_MIKE");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("ACCNA_TREVOR");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			func_31("ACCNA_FRANKLIN");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_31("W_BA_ATL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(Global_58686[iVar0]));
	func_31("W_BA_BAL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar1 = 4;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 11;
	iVar4 = Global_111638.f_20559.f_233[iVar0];
	if (!iVar4 < 11)
	{
		iVar4 = 11;
	}
	iVar5 = (Global_111638.f_20559.f_233[iVar0].f_1 - 1);
	if (iVar5 > -1)
	{
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (iVar5 < 0)
			{
				iVar5 = 10;
			}
			iVar3 = 0;
			if (Global_111638.f_20559.f_233[iVar0].f_2[iVar5] == 1)
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_111638.f_20559.f_233[iVar0].f_2[iVar5].f_2);
			func_31(func_33(Global_111638.f_20559.f_233[iVar0].f_2[iVar5].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar5 = (iVar5 - 1);
			iVar1++;
			iVar2++;
		}
	}
}

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 31:
			return "ACCNA_SIM";
			break;
		
		case 32:
			return "ACCNA_LES";
			break;
		
		case 33:
			return "ACCNA_AMA";
			break;
		
		case 34:
			return "ACCNA_JIM";
			break;
		
		case 35:
			return "ACCNA_TRA";
			break;
		
		case 36:
			return "ACCNA_OSC";
			break;
		
		case 37:
			return "ACCNA_ABI";
			break;
		
		case 38:
			return "ACCNA_BUR";
			break;
		
		case 3:
			return "ACCNA_MIKE";
			break;
		
		case 24:
			return "ACCNA_DRFR";
			break;
		
		case 25:
			return "ACCNA_STRP";
			break;
		
		case 39:
			return "ACCNA_MRSPOKE";
			break;
		
		case 40:
			return "ACCNA_GOL_CLU";
			break;
		
		case 4:
			return "ACCNA_CBELL";
			break;
		
		case 5:
			return "ACCNA_WHIZZ";
			break;
		
		case 6:
			return "ACCNA_MCHON";
			break;
		
		case 7:
			return "ACCNA_DSACH";
			break;
		
		case 8:
			return "ACCNA_LSANH";
			break;
		
		case 9:
			return "ACCNA_CRAPKI";
			break;
		
		case 10:
			return "ACCNA_VCLEAN";
			break;
		
		case 11:
			return "ACCNA_CSUX";
			break;
		
		case 12:
			return "ACCNA_VBEU";
			break;
		
		case 13:
			return "ACCNA_ANAT";
			break;
		
		case 14:
			return "ACCNA_BAHAMA";
			break;
		
		case 15:
			return "ACCNA_BAR_BY";
			break;
		
		case 16:
			return "ACCNA_BAR_BI";
			break;
		
		case 17:
			return "ACCNA_BAR_HI";
			break;
		
		case 18:
			return "ACCNA_BAR_MO";
			break;
		
		case 19:
			return "ACCNA_BAR_SH";
			break;
		
		case 20:
			return "ACCNA_BAR_SI";
			break;
		
		case 21:
			return "ACCNA_TAXI";
			break;
		
		case 22:
			return "ACCNA_DTRAF";
			break;
		
		case 23:
			return "ACCNA_REPO";
			break;
		
		case 26:
			return "ACCNA_HUNT";
			break;
		
		case 27:
			return "ACCNA_RANGE";
			break;
		
		case 28:
			return "ACCNA_RACES";
			break;
		
		case 29:
			return "ACCNA_EPS_ST";
			break;
		
		case 30:
			return "ACCNA_EPS_RB";
			break;
		
		case 2:
			return "ACCNA_BROKERA";
			break;
		
		case 85:
			return "ACCNA_CARSITE";
			break;
		
		case 86:
			return "ACCNA_ARMYSITE";
			break;
		
		case 87:
			return "ACCNA_PLANESITE";
			break;
		
		case 88:
			return "ACCNA_BOATSITE";
			break;
		
		case 89:
			return "ACCNA_BIKESITE";
			break;
		
		case 90:
			return "ACCNA_AUTOSITE";
			break;
		
		case 91:
			return "ACCNA_LOSSSITE";
			break;
		
		case 92:
			return "ACCNA_ARENASITE";
			break;
		
		case 96:
			return "ACCNA_CASHDEP";
			break;
		
		case 95:
			return "ACCNA_BAILBONDS";
			break;
		
		case 97:
			return "ACCNA_HOFFSHORE";
			break;
		
		case 98:
			return "ACCNA_SNACK";
			break;
		
		case 41:
			return "S_H_01";
			break;
		
		case 42:
			return "S_H_02";
			break;
		
		case 43:
			return "S_H_03";
			break;
		
		case 44:
			return "S_H_04";
			break;
		
		case 45:
			return "S_H_05";
			break;
		
		case 46:
			return "S_H_06";
			break;
		
		case 47:
			return "S_H_07";
			break;
		
		case 48:
			return "S_CL_01";
			break;
		
		case 49:
			return "S_CL_02";
			break;
		
		case 50:
			return "S_CL_03";
			break;
		
		case 51:
			return "S_CL_04";
			break;
		
		case 52:
			return "S_CL_05";
			break;
		
		case 53:
			return "S_CL_06";
			break;
		
		case 54:
			return "S_CL_07";
			break;
		
		case 55:
			return "S_CM_01";
			break;
		
		case 56:
			return "S_CM_03";
			break;
		
		case 57:
			return "S_CM_04";
			break;
		
		case 58:
			return "S_CM_05";
			break;
		
		case 59:
			return "S_CH_01";
			break;
		
		case 60:
			return "S_CH_02";
			break;
		
		case 61:
			return "S_CH_03";
			break;
		
		case 62:
			return "S_CA_01";
			break;
		
		case 63:
			return "S_T_01";
			break;
		
		case 64:
			return "S_T_02";
			break;
		
		case 65:
			return "S_T_03";
			break;
		
		case 66:
			return "S_T_04";
			break;
		
		case 67:
			return "S_T_05";
			break;
		
		case 68:
			return "S_T_06";
			break;
		
		case 69:
			return "S_G_01";
			break;
		
		case 70:
			return "S_G_02";
			break;
		
		case 71:
			return "S_G_03";
			break;
		
		case 72:
			return "S_G_04";
			break;
		
		case 73:
			return "S_G_05";
			break;
		
		case 74:
			return "S_G_06";
			break;
		
		case 75:
			return "S_G_07";
			break;
		
		case 76:
			return "S_G_08";
			break;
		
		case 77:
			return "S_G_09";
			break;
		
		case 78:
			return "S_G_10";
			break;
		
		case 79:
			return "S_G_11";
			break;
		
		case 80:
			return "S_MO_01";
			break;
		
		case 81:
			return "S_MO_05";
			break;
		
		case 82:
			return "S_MO_06";
			break;
		
		case 83:
			return "S_MO_07";
			break;
		
		case 84:
			return "S_MO_08";
			break;
		
		case 131:
			return "S_MO_09";
			break;
		
		case 99:
			return "ACCNA_TOWING";
			break;
		
		case 100:
			return "ACCNA_TAXI_LOT";
			break;
		
		case 101:
			return "ACCNA_ARMS";
			break;
		
		case 102:
			return "ACCNA_SONAR";
			break;
		
		case 103:
			return "ACCNA_CARMOD";
			break;
		
		case 104:
			return "ACCNA_VCINEMA";
			break;
		
		case 105:
			return "ACCNA_DCINEMA";
			break;
		
		case 106:
			return "ACCNA_MCINEMA";
			break;
		
		case 107:
			return "ACCNA_GOLF";
			break;
		
		case 108:
			return "ACCNA_CSCRAP";
			break;
		
		case 109:
			return "ACCNA_SMOKE";
			break;
		
		case 110:
			return "ACCNA_TEQUILA";
			break;
		
		case 111:
			return "ACCNA_PITCHERS";
			break;
		
		case 112:
			return "ACCNA_HEN";
			break;
		
		case 113:
			return "ACCNA_HOOKIES";
			break;
		
		case 114:
			return "ACCNA_MARINA";
			break;
		
		case 115:
			return "ACCNA_HANGAR";
			break;
		
		case 116:
			return "ACCNA_HELIPAD";
			break;
		
		case 117:
			return "ACCNA_GARAGE";
			break;
		
		case 118:
			return "ACCNA_PD_VB";
			break;
		
		case 119:
			return "ACCNA_PD_SC";
			break;
		
		case 120:
			return "ACCNA_PD_DT";
			break;
		
		case 121:
			return "ACCNA_PD_RH";
			break;
		
		case 122:
			return "ACCNA_PD_SS";
			break;
		
		case 123:
			return "ACCNA_PD_PB";
			break;
		
		case 124:
			return "ACCNA_PD_HW";
			break;
		
		case 125:
			return "ACCNA_H_RH";
			break;
		
		case 126:
			return "ACCNA_H_SC";
			break;
		
		case 127:
			return "ACCNA_H_DT";
			break;
		
		case 128:
			return "ACCNA_H_SS";
			break;
		
		case 129:
			return "ACCNA_H_PB";
			break;
		
		case 93:
			return "ACCNA_CONSIT";
			break;
		
		case 94:
			return "ACCNA_TRMSITE";
			break;
		
		case 130:
			return "ACCNA_DYNPROP";
			break;
	}
	return "";
}

int func_34()
{
	func_35();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_35()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_38(Global_111638.f_2358.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_37(PLAYER::PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_101(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_36(Global_111638.f_2358.f_539.f_4321))
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

bool func_36(int iParam0)
{
	return iParam0 < 3;
}

int func_37(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_38(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_38(int iParam0)
{
	if (func_36(iParam0))
	{
		return func_39(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_39(int iParam0)
{
	return Global_1798[iParam0];
}

void func_40()
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	func_56();
	if (Global_76622)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	Global_2462917 = 1;
	PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_594, 255, 255, 255, 255, 0);
	func_50();
	func_44(0);
	func_41(1);
	SYSTEM::WAIT(0);
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_43();
	}
	func_42(4, -1);
	func_42(6, -1);
	func_42(7, -1);
	func_42(3, -1);
	func_42(1, -1);
	func_42(2, -1);
	func_42(11, -1);
	func_42(13, -1);
	func_42(14, -1);
	func_42(16, -1);
}

void func_42(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1377170.f_1047), iParam0);
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

void func_43()
{
	Global_2537071.f_4532 = 0;
}

void func_44(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_82(0))
		{
			func_45(iParam0);
		}
		MISC::SET_BIT(&Global_7357, 2);
	}
}

void func_45(int iParam0)
{
	if (func_49())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_48())
		{
			func_47(1, 1);
		}
		else
		{
			func_47(0, 0);
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
	if (!func_46())
	{
		Global_19486.f_1 = 3;
	}
}

int func_46()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_47(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_82(0))
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

bool func_48()
{
	return MISC::IS_BIT_SET(Global_1687687, 5);
}

bool func_49()
{
	return MISC::IS_BIT_SET(Global_1687687, 19);
}

void func_50()
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_51();
}

void func_51()
{
	Global_22211.f_134 = 1;
}

int func_52()
{
	uVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(uVar0, 0))
	{
		return 1;
	}
	if (iLocal_495 == 0)
	{
		iLocal_495 = ENTITY::GET_ENTITY_HEALTH(iVar0);
		return 0;
	}
	iVar1 = ENTITY::GET_ENTITY_HEALTH(iVar0);
	if (iLocal_495 != iVar1)
	{
		iLocal_495 = iVar1;
		return 1;
	}
	return 0;
}

void func_53(bool bParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "SET_CLEAR_SPACE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(200);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	iVar0 = 0;
	if (Global_76622)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
		func_54(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, 1));
		func_31("MPATM_SELECT");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(201);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		iVar0++;
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			bParam1 = false;
		}
		if (bParam0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
			if (bParam1)
			{
				func_54(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 198, 1));
			}
			else
			{
				func_54(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, 7, 1));
			}
			func_31("MPATM_NAV");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(361);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iVar0++;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
	func_54(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
	func_31("MPATM_EXIT");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(202);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	iVar0++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_595, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_54(var uParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

void func_55(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_63(0, &sVar0);
	func_63(1, &sVar16);
	func_63(2, &sVar32);
	func_63(3, &sVar48);
	STREAMING::REQUEST_ANIM_DICT(&sVar48);
	STREAMING::REQUEST_ANIM_DICT(&sVar0);
	iVar64 = 3;
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == -1667301416)
	{
		iVar64 = 3;
	}
	switch (iLocal_499)
	{
		case 0:
			GRAPHICS::DRAW_DEBUG_TEXT("walk", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) == 7 && STREAMING::HAS_ANIM_DICT_LOADED(&sVar0))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_500);
						iLocal_500 = -1;
					}
					iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(uParam0, 2), 2, 0, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar0, "enter", 4f, -2f, 5, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
					STREAMING::REMOVE_ANIM_DICT(&sVar0);
					iLocal_499 = 1;
				}
			}
			break;
		
		case 1:
			GRAPHICS::DRAW_DEBUG_TEXT("enter", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 64, 256, 64, 64);
			STREAMING::REQUEST_ANIM_DICT(&sVar16);
			STREAMING::REQUEST_ANIM_DICT(&sVar32);
			iVar65 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_500);
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar16) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65)))
			{
				iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
				iLocal_499 = 2;
			}
			break;
		
		case 2:
			GRAPHICS::DRAW_DEBUG_TEXT("base", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 32, 32, 256, 128);
			iVar65 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_500);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65))
			{
				iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar65 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_500);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar65, 0f);
				}
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar32) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar65) >= 0.99f))
			{
				iVar66 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar64);
				if ((((MISC::ARE_STRINGS_EQUAL(&cLocal_510, "idle_a") && iVar66 == 0) || (MISC::ARE_STRINGS_EQUAL(&cLocal_510, "idle_b") && iVar66 == 1)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_510, "idle_c") && iVar66 == 2)) || (MISC::ARE_STRINGS_EQUAL(&cLocal_510, "idle_d") && iVar66 == 3))
				{
					iVar66++;
					if (iVar66 >= iVar64)
					{
						iVar66 = 0;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				switch (iVar66)
				{
					case 0:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar32, "idle_a", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
						StringCopy(&cLocal_510, "idle_a", 16);
						iLocal_499 = 3;
						break;
					
					case 1:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar32, "idle_b", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
						StringCopy(&cLocal_510, "idle_b", 16);
						iLocal_499 = 3;
						break;
					
					case 2:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar32, "idle_c", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
						StringCopy(&cLocal_510, "idle_c", 16);
						iLocal_499 = 3;
						break;
					
					case 3:
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar32, "idle_d", 4f, -2f, 5, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
						StringCopy(&cLocal_510, "idle_d", 16);
						iLocal_499 = 3;
						break;
					
					default:
						StringCopy(&cLocal_510, "idle_XXX", 16);
						break;
					}
			}
			break;
		
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar32, "idle_a", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_a", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar32, "idle_b", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_b", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar32, "idle_c", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_c", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &sVar32, "idle_d", 2))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_d", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			else
			{
				GRAPHICS::DRAW_DEBUG_TEXT("idle_XXX", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 256, 64, 64, 64);
			}
			iVar65 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_500);
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				iVar65 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_500);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar65, 0f);
				}
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(&sVar16) && (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar65) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar65) >= 0.99f))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_500))
				{
					PED::DETACH_SYNCHRONIZED_SCENE(iLocal_500);
					iLocal_500 = -1;
				}
				iLocal_500 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_507, ENTITY::GET_ENTITY_ROTATION(iParam0, 2), 2, 0, 1, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_500, &sVar16, "base", 4f, -2f, 5, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_500);
				iLocal_499 = 2;
				return;
			}
			break;
	}
}

void func_56()
{
	func_57(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 239, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 240, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	}
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (func_58())
		{
			Global_2450632.f_37 = 1;
		}
	}
	else
	{
		Global_2450632.f_37 = 0;
	}
}

bool func_58()
{
	return MISC::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_94753, iParam0))
		{
			MISC::SET_BIT(&Global_94753, iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_94753, iParam0))
	{
		MISC::CLEAR_BIT(&Global_94753, iParam0);
	}
}

bool func_60(int iParam0)
{
	return MISC::IS_BIT_SET(Global_94754, iParam0);
}

bool func_61(int iParam0)
{
	bVar0 = ENTITY::IS_ENTITY_AT_COORD(uParam0, 130.1504f, -1291.626f, 28.2714f, 0.01f, 0.01f, 0.01f, 0, 1, 0);
	return bVar0;
}

int func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_63(int iParam0, char* sParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		StringCopy(sParam1, "", 64);
		return 0;
	}
	if (func_89())
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 1885233650)
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@enter", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "mini@atmenter", 64);
				}
				return 1;
				break;
			
			case 1:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@base", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "mini@atmbase", 64);
				}
				return 1;
				break;
			
			case 2:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@idle_a", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@idle_a", 64);
				}
				return 1;
				break;
			
			case 3:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@male@exit", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "mini@atmexit", 64);
				}
				return 1;
				break;
		}
	}
	else if (iVar0 == -1667301416)
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@enter", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@enter", 64);
				}
				return 1;
				break;
			
			case 1:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@base", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@base", 64);
				}
				return 1;
				break;
			
			case 2:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@idle_a", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@idle_a", 64);
				}
				return 1;
				break;
			
			case 3:
				StringCopy(sParam1, "anim@amb@prop_human_atm@interior@female@exit", 64);
				if (!STREAMING::DOES_ANIM_DICT_EXIST(sParam1))
				{
					StringCopy(sParam1, "mini@atmexit", 64);
				}
				return 1;
				break;
			}
	}
	StringCopy(sParam1, "", 64);
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (NETWORK::_0xD313DE83394AF134())
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (OBJECT::HAS_OBJECT_BEEN_BROKEN(iParam0, 0))
		{
			return 1;
		}
	}
	if (func_68(0))
	{
		return 1;
	}
	if (iParam1 && iLocal_591 > 1000)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_496, 1.5f, 1.5f, 1.5f, 0, 1, 1))
		{
			return 1;
		}
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		return 1;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(uVar0))
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	if (func_67())
	{
		return 1;
	}
	if (Global_76622 && func_66())
	{
		return 0;
	}
	if (!Global_76622 && func_65())
	{
		return 0;
	}
	if (Global_76622 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_89())
		{
			return 1;
		}
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iLocal_556[iVar1] && NETWORK::PARTICIPANT_ID_TO_INT() != iVar1)
			{
				return 1;
			}
			iVar1++;
		}
	}
	return 0;
}

var func_65()
{
	return Global_73826;
}

var func_66()
{
	return Global_1662476;
}

int func_67()
{
	if (iLocal_590 == 0)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		iLocal_590 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var0 - Vector(3f, 0f, 0f), 0.33f, 2, PLAYER::PLAYER_PED_ID(), 4);
		return iLocal_589;
	}
	else
	{
		iVar3 = 0;
		iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_590, &iVar3, &uVar4, &uVar7, &uVar10);
		if (iVar11 == 2)
		{
			iLocal_589 = 0;
			if (iVar3 != 0)
			{
				iLocal_590 = 0;
				if (ENTITY::IS_ENTITY_A_VEHICLE(uVar10) && !NETWORK::_0x21D04D7BC538C146(uVar10))
				{
					iLocal_589 = 1;
				}
			}
			return iLocal_589;
		}
		else
		{
			if (iVar11 == 0)
			{
				iLocal_590 = 0;
			}
			return iLocal_589;
		}
	}
	return 0;
}

bool func_68(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_69(int iParam0, bool bParam1)
{
	iVar0 = func_5(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_82(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42151[iVar0] == 1 && Global_42151[iVar0].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42151[iVar0].f_29)
				{
					return 0;
				}
			}
			Global_42151[iVar0].f_5 = 1;
			Global_42151[iVar0].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42151[iVar0] == 0)
			{
			}
			if (Global_42151[iVar0].f_7)
			{
			}
		}
	}
	return 0;
}

void func_70(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1974937116) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_4(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42151[iVar0])
		{
			Global_42151[iVar0] = 1;
			Global_42151[iVar0].f_1 = Global_42352;
			Global_42352++;
			Global_42151[iVar0].f_4 = 0;
			Global_42151[iVar0].f_29 = 0;
			Global_42151[iVar0].f_5 = 0;
			Global_42151[iVar0].f_2 = iParam1;
			StringCopy(&(Global_42151[iVar0].f_8), sParam2, 16);
			Global_42151[iVar0].f_6 = iParam3;
			Global_42151[iVar0].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_42151[iVar0].f_7 = 0;
			Global_42151[iVar0].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_42151[iVar0].f_12 = 1;
				StringCopy(&(Global_42151[iVar0].f_13), sParam4, 64);
				Global_42151[iVar0].f_30 = iParam6;
			}
			else
			{
				Global_42151[iVar0].f_12 = 0;
				Global_42151[iVar0].f_30 = 0;
			}
			*iParam0 = Global_42151[iVar0].f_1;
			return;
		}
		iVar0++;
	}
}

bool func_71(int iParam0)
{
	return func_72(iParam0) == 1119849093;
}

int func_72(int iParam0)
{
	return Global_1628237[iParam0].f_595;
}

int func_73(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2513889;
	}
	else
	{
		uVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == 1885233650 || iVar1 == -1667301416)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_74(int iParam0)
{
	return iParam0 == 50;
}

bool func_75(int iParam0)
{
	return iParam0 == 58;
}

bool func_76(int iParam0)
{
	return iParam0 == 13;
}

int func_77(int iParam0)
{
	if (func_78(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_79()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1, 0) == PLAYER::PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

int func_80(var uParam0, int iParam1)
{
	if (iLocal_592 < 3000)
	{
		return 1;
	}
	if (func_64(uParam0, iParam1))
	{
		iLocal_592 = 0;
		return 1;
	}
	return 0;
}

int func_81()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-1424752554) > 0)
	{
		return 1;
	}
	return 0;
}

int func_82(int iParam0)
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

bool func_83(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_84(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_85(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_85(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
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
		if (MISC::ARE_STRINGS_EQUAL(&(Global_111638.f_20405[iVar0]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_86();
	}
}

void func_86()
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

int func_87(char* sParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_111638.f_20405[iVar0])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_88(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_89()
{
	func_97(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_96())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_95())
	{
		return 1;
	}
	if (func_94(159))
	{
		if (!func_93())
		{
			return 1;
		}
	}
	if (func_94(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_90() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_90()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_90()
{
	switch (func_92())
	{
		case 0:
			return func_91();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_91()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_92()
{
	return Global_30768;
}

bool func_93()
{
	return Global_2450632.f_598;
}

int func_94(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_95()
{
	return Global_2460680;
}

bool func_96()
{
	return Global_2450632.f_593;
}

void func_97(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1853120870:
					func_98(iVar0);
					break;
				
				case 589125870:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.z == 653923311)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_98(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_100(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_99(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_99(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

bool func_101(int iParam0)
{
	return Global_41431 == iParam0;
}

int func_102(struct<3> Param0)
{
	if ((Param0.x == 129.6975f && Param0.y == -1290.842f) && Param0.z == 28.27142f)
	{
		return 1;
	}
	if ((Param0.x == 130.5791f && Param0.y == -1292.369f) && Param0.z == 28.27142f)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if (iLocal_598)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(PLAYER::PLAYER_PED_ID()))
				{
					PED::_0xF1C03A5352243A30(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	func_106("ATM_1TM_TUT", 1);
	if (iLocal_593 != -1)
	{
		func_4(&iLocal_593);
	}
	if (iLocal_594 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_594);
	}
	func_105();
	func_104();
	Global_58693 = 0;
	func_62(0, 1, iLocal_515, 1);
	if (iLocal_597)
	{
		func_59(4, 1);
		iLocal_597 = 0;
	}
}

void func_104()
{
	if (Global_73826)
	{
	}
	Global_73826 = 0;
}

void func_105()
{
	if (Global_1662476)
	{
	}
	Global_1662476 = 0;
}

void func_106(char* sParam0, int iParam1)
{
	if (Global_110278 && iParam1)
	{
		if (func_83(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
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
				func_108(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_107((Global_111638.f_20405.f_145 - 1));
			Global_111638.f_20405.f_145 = (Global_111638.f_20405.f_145 - 1);
			func_86();
			return;
		}
		iVar0++;
	}
}

void func_107(int iParam0)
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

void func_108(int iParam0, int iParam1)
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

void func_109()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!NETWORK::_NETWORK_IS_THIS_SCRIPT_MARKED(32, 0, -1))
		{
			func_103();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		func_111(0, -1, 0);
		NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&iLocal_521, 35);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_556, 33);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iLocal_521[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (!func_110())
		{
			func_103();
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_103();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

int func_110()
{
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_96())
		{
			return 0;
		}
		if (func_94(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_111(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_113();
			}
			else
			{
				return 0;
			}
		}
		if (!func_112())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_113();
					}
					else
					{
						return 0;
					}
				}
				if (func_96())
				{
					if (!bParam2)
					{
						func_113();
					}
					else
					{
						return 0;
					}
				}
				if (func_94(157))
				{
					if (!bParam2)
					{
						func_113();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_113();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_113();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_113();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_112()
{
	return Global_1312854;
}

void func_113()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

