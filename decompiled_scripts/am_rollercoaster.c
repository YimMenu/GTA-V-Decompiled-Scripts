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
	fLocal_26 = 80f;
	fLocal_27 = 140f;
	fLocal_28 = 180f;
	iLocal_33 = 30000;
	fLocal_36 = 2.55f;
	iLocal_720 = -1;
	iLocal_727 = 788045382;
	iLocal_729 = 1;
	sLocal_2578 = "anim@mp_rollarcoaster";
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (bVar0)
	{
		if (!func_236(ScriptParam_0))
		{
			func_234();
		}
		func_232();
		func_225();
	}
	while (true)
	{
		func_224();
		if (func_214())
		{
			func_234();
		}
		if (((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1645.555f, -1123.872f, 17.3436f, 300f, 300f, 300f, 0, 1, 0) || func_213()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || func_212())
		{
			func_234();
		}
		func_204();
		if (GAMEPLAY::IS_BIT_SET(uLocal_31, 6))
		{
			if (!Global_98796.f_1417)
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_31, 6);
			}
		}
		if (iLocal_728)
		{
			iLocal_728 = 0;
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1649.667f, -1129.053f, 17.3438f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 332.318f);
		}
		switch (func_203(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_202() > 0)
				{
					Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()] = 1;
				}
				break;
			
			case 1:
				if (func_202() > 1)
				{
					if (func_196())
					{
						Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
					}
				}
				break;
			
			case 2:
				if (func_202() == 2)
				{
					func_13();
				}
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_202())
			{
				case 0:
					if (func_11())
					{
						Local_2623.f_1 = 1;
					}
					break;
				
				case 1:
					if (func_10())
					{
						Local_2623.f_1 = 2;
					}
					break;
				
				case 2:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_2623)
	{
		case 0:
			Local_2623 = 1;
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_2623.f_2, 1))
			{
				iLocal_33 = 30000;
				GAMEPLAY::SET_BIT(&(Local_2623.f_2), 5);
				GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 1);
				GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 3);
				GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 6);
				Local_2623 = 2;
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_2623.f_2, 3))
			{
				func_9(&(Local_2623.f_93));
				GAMEPLAY::SET_BIT(&(Local_2623.f_2), 3);
			}
			else
			{
				if ((30000 - func_8(&(Local_2623.f_93), 0, 0)) < 3000 && !(30000 - func_8(&(Local_2623.f_93), 0, 0)) < 0)
				{
					GAMEPLAY::SET_BIT(&(Local_2623.f_2), 6);
				}
				if (func_6(&(Local_2623.f_93), iLocal_33, 0))
				{
					if (func_5())
					{
						GAMEPLAY::SET_BIT(&(Local_2623.f_2), 5);
						GAMEPLAY::SET_BIT(&(Local_2623.f_2), 1);
					}
					else
					{
						iLocal_33 = 1000;
						GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 5);
						GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 3);
					}
				}
			}
			break;
		
		case 2:
			if (func_4())
			{
				Local_2623 = 3;
			}
			break;
		
		case 3:
			if (Local_1440.f_4 == 1)
			{
				GAMEPLAY::SET_BIT(&(Local_2623.f_2), 4);
				iVar0 = func_3();
				while (iVar0 >= 0)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 3))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 4);
						}
					}
					iVar0 = (iVar0 + -1);
				}
				if (GAMEPLAY::IS_BIT_SET(Local_2623.f_2, 4))
				{
					Local_2623 = 4;
					GAMEPLAY::CLEAR_BIT(&(Local_2623.f_2), 4);
				}
			}
			break;
		
		case 4:
			if (func_2())
			{
				Local_2623 = 1;
			}
			break;
	}
}

int func_2()
{
	iVar0 = func_3();
	while (iVar0 >= 0)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (((Local_2718[iVar0].f_1 != 4 || GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 0)) || !GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 10)) || !GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 11))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_3()
{
	if (Global_2457997)
	{
		return 32;
	}
	return (32 - Global_2457998);
}

int func_4()
{
	iVar0 = func_3();
	while (iVar0 >= 0)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 8))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_5()
{
	iVar0 = func_3();
	while (iVar0 >= 0)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 6) || GAMEPLAY::IS_BIT_SET(Local_2718[iVar0].f_2, 7))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
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

void func_7(var uParam0, bool bParam1, bool bParam2)
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

int func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_10()
{
	return 1;
}

int func_11()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_12(iVar1, 0, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar1), -1659.01f, -1143.129f, 17.4192f, 500f, 500f, 500f, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	Global_2537071.f_5122 = 0;
	switch (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1)
	{
		case 0:
			if (Local_2623 >= 1)
			{
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 1;
			}
			break;
		
		case 1:
			if (Local_2623 >= 2)
			{
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 2;
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_31, 5))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 6))
					{
						func_182();
					}
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2623.f_12[Local_1445].f_3, 0.3f, 0.3f, 1.5f, 0, 1, 0))
					{
						if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							UI::CLEAR_HELP(1);
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 6) && !GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
						{
							Local_2623.f_3[Local_1445] = 0;
							GAMEPLAY::CLEAR_BIT(&uLocal_31, 5);
							Local_1445 = -1;
						}
					}
					else if (((((((!func_181(0) && !func_177(PLAYER::PLAYER_ID())) && !func_176(PLAYER::PLAYER_ID(), 21)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !GAMEPLAY::IS_BIT_SET(Local_2623.f_2, 6)) && !func_175(PLAYER::PLAYER_PED_ID())) && !func_174(PLAYER::PLAYER_ID()))
					{
						if (!func_167())
						{
							if (Local_2623.f_12[Local_1445].f_9 < 2)
							{
								if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									func_166("AMRC_ENTER", Global_262145.f_7788, -1);
								}
								Global_2537071.f_5122 = 1;
								if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51))
								{
									if (func_165(1) >= Global_262145.f_7788 || NETWORKCASH::NETWORK_CAN_SPEND_MONEY(Global_262145.f_7788, 0, 0, 1, -1, 0))
									{
										if (func_164())
										{
											func_152(1643659499, Global_262145.f_7788, &iVar0, 0, 1, 0);
											Global_4263954[iVar0].f_1 = 1;
										}
										else
										{
											NETWORKCASH::_NETWORK_SPENT_BUY_FERRISWHEEL_OR_ROLLERCOASTER(Global_262145.f_7788, 1, 0, 1);
										}
										GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 6);
									}
									else if (!GAMEPLAY::IS_BIT_SET(uLocal_31, 6))
									{
										func_148(0, 31, 5);
										GAMEPLAY::SET_BIT(&uLocal_31, 6);
									}
								}
							}
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
					else if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						UI::CLEAR_HELP(1);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(Local_2623.f_2, 5))
				{
					func_146();
				}
				func_145();
				GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 5);
			}
			break;
		
		case 2:
			if (Local_2623 >= 3)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 5))
				{
					if (func_144(iLocal_719))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
						{
							AUDIO::PLAY_STREAM_FROM_PED(PLAYER::PLAYER_PED_ID());
							iLocal_729 = 1;
						}
						else
						{
							AUDIO::PLAY_STREAM_FROM_OBJECT(iLocal_721[2]);
						}
						iLocal_719 = 0;
						GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 8);
						Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 3;
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 8))
			{
				func_143();
			}
			break;
		
		case 3:
			if (Local_2623 == 4)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Ride_Stop", iLocal_721[1], "DLC_IND_ROLLERCOASTER_SOUNDS", 0, 0);
				iLocal_717 = 0;
				Global_2544353 = 0.3f;
				iLocal_720 = -1;
				iLocal_32 = 0;
				iLocal_35 = 0;
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3 = 0;
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 3);
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 4);
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
				if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 7);
				}
				func_137();
				func_137();
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 4;
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
				{
					if (iLocal_720 != -1)
					{
						if (Local_1440.f_4 != iLocal_720 && Local_1440.f_4 == 22)
						{
							GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
						}
					}
					iLocal_720 = Local_1440.f_4;
					func_136();
					func_122();
					func_60();
					func_59();
					if (!GAMEPLAY::IS_BIT_SET(uLocal_31, 3))
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_58("AMRC_HELPTEXT", -1);
							GAMEPLAY::SET_BIT(&uLocal_31, 3);
						}
					}
					func_57();
					if (Local_1440.f_4 == 0)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 1);
							GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
							iLocal_729 = 1;
						}
						CONTROLS::DISABLE_CONTROL_ACTION(2, 203, 1);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 3))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 4))
					{
						func_50(1);
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 2);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 2))
					{
						if (Local_1440.f_4 == 1)
						{
							if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3 >= 1)
							{
								GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 3);
							}
							else
							{
								Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3++;
								GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 2);
							}
						}
					}
					else if (Local_1440.f_4 > 1)
					{
						GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 2);
					}
				}
			}
			break;
		
		case 4:
			if (Local_2623 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 10);
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 11);
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_1 = 1;
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 7))
				{
					func_14();
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 10))
				{
					StringCopy(&cLocal_2591, "safety_bar_exit_roller_car", 32);
					iVar1 = 0;
					while (iVar1 < iLocal_721)
					{
						ENTITY::PLAY_ENTITY_ANIM(iLocal_721[iVar1], &cLocal_2591, sLocal_2578, 8f, 0, 1, 0, 0, 0);
						iVar1++;
					}
					func_9(&uLocal_2621);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bar_Unlock_And_Raise", iLocal_721[1], "DLC_IND_ROLLERCOASTER_SOUNDS", 0, 0);
					GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 10);
				}
				if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 10) && !GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 11))
				{
					if (func_6(&uLocal_2621, 1000, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bar_Unlock_And_Raise", iLocal_721[1], "DLC_IND_ROLLERCOASTER_SOUNDS", 0, 0);
						GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 11);
					}
				}
			}
			break;
	}
}

void func_14()
{
	if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
	{
		if (func_49(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2616)
			{
				case 0:
					if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
					}
					func_47(func_48(0));
					StringCopy(&cLocal_2599, "safety_bar_exit_player_", 64);
					if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
					{
						StringConCat(&cLocal_2599, "one", 64);
					}
					else
					{
						StringConCat(&cLocal_2599, "two", 64);
					}
					func_46(func_48(0), Local_1445, 0);
					uLocal_2620 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_713, 0f, 0f, 139.96f, 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_2620, sLocal_2578, &cLocal_2599, 8f, -8f, 131072, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_2620);
					iLocal_2616 = 1;
					break;
				
				case 1:
					iVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_2620);
					if (iVar0 != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.99f)
						{
							StringCopy(&cLocal_2579, "exit_player_", 24);
							if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
							{
								StringConCat(&cLocal_2579, "one", 24);
							}
							else
							{
								StringConCat(&cLocal_2579, "two", 24);
							}
							uLocal_2619 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_713, 0f, 0f, 139.96f, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_2619, sLocal_2578, &cLocal_2579, 8f, -8f, 131072, 0, 1148846080, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_2619);
							iLocal_2616 = 2;
						}
					}
					break;
				
				case 2:
					iVar0 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_2619);
					if (iVar0 != -1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) > 0.99f)
						{
							AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							if (func_49(PLAYER::PLAYER_PED_ID()))
							{
								func_31(PLAYER::PLAYER_ID(), 1, 0, 0);
							}
							func_18(0);
							func_17(0);
							GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 0);
							GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 7);
							Global_1590535[PLAYER::PLAYER_ID()].f_749 = 0;
							NETWORK::_0xC505036A35AFD01B(0);
							GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_730);
							GAMEPLAY::CLEAR_BIT(&uLocal_31, 2);
							iLocal_729 = 1;
							iLocal_2616 = 0;
							func_15(25);
						}
					}
					break;
				}
			}
	}
}

void func_15(int iParam0)
{
	if (Global_262145.f_8571)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_16()].f_6174.f_4111[iVar0] == iParam0)
		{
			if (Global_1312570.f_1[iVar0] == -1)
			{
				Global_1312570.f_1[iVar0] = iParam0;
				Global_1312570 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_16()
{
	iVar0 = 0;
	return iVar0;
}

void func_17(bool bParam0)
{
	if (bParam0)
	{
		uLocal_726 = VEHICLE::CREATE_VEHICLE(iLocal_727, -1622.154f, -1089.806f, 4.336f, 57.5266f, 0, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uLocal_726, false, 0);
		ENTITY::SET_ENTITY_COLLISION(uLocal_726, false, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_726, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_726, 0))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_726, iLocal_721[(Local_1445 / 2)], 0, Local_1445.f_1, 0f, 0f, 180f, 0, 0, 0, 0, 2, 1);
		}
	}
	else
	{
		VEHICLE::DELETE_VEHICLE(&uLocal_726);
	}
}

void func_18(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_31, 7))
		{
			func_29(0, 0);
			GAMEPLAY::SET_BIT(&uLocal_31, 7);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_31, 7))
	{
		func_19();
		GAMEPLAY::CLEAR_BIT(&uLocal_31, 7);
	}
}

void func_19()
{
	if (Global_1312418.f_1 == 1)
	{
		func_20(7, 0, 1);
		Global_1312418.f_1 = 0;
		Global_1628237[PLAYER::PLAYER_ID()].f_9 = 0;
	}
}

void func_20(int iParam0, int iParam1, bool bParam2)
{
	if (func_28())
	{
		if (iParam1 == 1)
		{
			if (Global_2537071.f_4395 == -1)
			{
				Global_2537071.f_4395 = Global_262145.f_26393;
			}
			func_27(&(Global_2537071.f_4393), 0, 0);
			if (bParam2)
			{
				if (Global_2537071.f_4398 == -1)
				{
					Global_2537071.f_4398 = Global_262145.f_26394;
				}
				func_27(&(Global_2537071.f_4396), 0, 0);
			}
			else
			{
				Global_1312418 = 0;
				Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
				func_26(1);
			}
		}
		else
		{
			Global_1312418 = 0;
			Global_1628237[PLAYER::PLAYER_ID()].f_8 = 0;
			func_26(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_25()) && !func_21(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		unk_0x35EEC6C2BC821A71(0, -1, -1, iParam0);
	}
}

int func_21(int iParam0)
{
	if (func_22(iParam0, 1, 0))
	{
		if (Global_1590535[iParam0] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_22(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_23(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590535[iParam0] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	return func_24(iParam0);
}

bool func_24(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1590535[iParam0].f_13.f_1, 0);
}

bool func_25()
{
	return Global_2450632.f_740;
}

void func_26(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_28())
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
			{
				Global_1312418.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_12(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), -1569615261, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312418.f_1 == 0 || Global_1312418.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_27(var uParam0, bool bParam1, bool bParam2)
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

bool func_28()
{
	return Global_1312418;
}

void func_29(int iParam0, int iParam1)
{
	if (!func_22(PLAYER::PLAYER_ID(), 1, 0) || iParam1)
	{
		if (!func_28())
		{
			Global_1312418.f_1 = 1;
			Global_1628237[PLAYER::PLAYER_ID()].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312418.f_2 = 1;
			}
			func_30(7, 0, -1);
		}
	}
}

void func_30(int iParam0, int iParam1, int iParam2)
{
	if (!func_28() || iParam1)
	{
		Global_1312418 = 1;
		func_26(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_25()) && !func_21(PLAYER::PLAYER_ID())) && !func_177(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 1;
		}
		Global_1628237[PLAYER::PLAYER_ID()].f_8 = 1;
		unk_0x35EEC6C2BC821A71(1, iParam0, iParam2, -1);
	}
}

void func_31(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_45())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_43())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar14 || (!func_40(PLAYER::PLAYER_ID(), 0) && !func_39()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2425662[iParam0].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_36(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_35(uVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar27, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_0x7350823473013C02(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_34();
					func_33();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425662[iParam0].f_245 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405072.f_2672)
				{
					Global_2405072.f_2672 = 0;
				}
			}
			else
			{
				if (!func_35(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_REGISTER(iVar27, 1);
						}
					}
					if (func_32(Global_4456448.f_232883))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312854)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_32(int iParam0)
{
	return iParam0 == 17;
}

void func_33()
{
	Global_2439138.f_1233 = 0;
	Global_2439138.f_1234 = 0;
	Global_2439138.f_1235 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2439138.f_1240 = -1;
	Global_2439138.f_1241 = 0;
	Global_2405072.f_2683 = { Var0 };
}

void func_34()
{
	Global_2405072.f_694 = 0;
	Global_2405072.f_2726 = 0;
	Global_2405072.f_512 = 0;
	Global_2405072.f_600 = 0;
	Global_2425662[PLAYER::PLAYER_ID()].f_207 = 0;
	Global_2405072.f_2681 = 0;
}

int func_35(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_36(int iParam0, int iParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::_NETWORK_GET_PED_PLAYER(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_38();
			}
			else if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_40(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::_0x419594E137637120(iParam0, iParam1, 1);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(iParam0, iParam1);
		}
		UI::KEY_HUD_COLOUR(iParam0, iParam1);
		func_37(-2008016205, iParam0);
	}
}

void func_37(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, iParam1, 1);
	}
}

void func_38()
{
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 2);
			GAMEPLAY::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_39()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_40(int iParam0, int iParam1)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_41(-1, 0) == 8;
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

int func_41(int iParam0, bool bParam1)
{
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_42();
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

int func_42()
{
	return Global_1312745;
}

int func_43()
{
	if (func_44() == 0)
	{
		return 1;
	}
	return 0;
}

int func_44()
{
	return Global_1312467.f_18;
}

int func_45()
{
	if (Global_1590535[PLAYER::PLAYER_ID()].f_35 && !Global_2451426.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_46(int iParam0, int iParam1, int iParam2)
{
	Var0 = -1113502121;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam0);
	}
}

void func_47(int iParam0)
{
	Var0 = -279432987;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_48(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_49(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_50(bool bParam0)
{
	GAMEPLAY::SET_BIT(&(Local_2623.f_2), 0);
	if (bParam0)
	{
		if (iLocal_717 != 0)
		{
			fLocal_718 = (IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), iLocal_717)) / 1000f);
		}
		iLocal_717 = NETWORK::_0x89023FBBF9200E9F();
	}
	if (fLocal_718 > 0.5f)
	{
		GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 12);
	}
	Local_1440 = { func_54(Global_2544352, Local_1440.f_4) };
	fVar0 = func_53();
	if (Local_1440.f_4 < 20)
	{
		if (Global_2544353 < 3f)
		{
			Global_2544353 = (Global_2544353 + 0.3f);
		}
		else
		{
			Global_2544353 = (Global_2544353 - 0.3f);
		}
		if (GAMEPLAY::ABSF((Global_2544353 - 3f)) < 0.3f)
		{
			Global_2544353 = 3f;
		}
	}
	else
	{
		Global_2544353 = (Global_2544353 + (fVar0 * fLocal_718));
		Global_2544353 = (Global_2544353 * 1f);
	}
	if ((Global_2544352 < Local_1452[1].f_3 && (Global_2544352 + (Global_2544353 * fLocal_718)) >= Local_1452[1].f_3) && Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3 >= 1)
	{
		Global_2544352 = Local_1452[1].f_3;
		GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 4);
	}
	else
	{
		Global_2544352 = (Global_2544352 + (Global_2544353 * fLocal_718));
	}
	bVar1 = false;
	if (Global_2544353 >= 0f)
	{
		if (Global_2544352 >= Local_1452[(iLocal_716 - 1)].f_3)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 12))
			{
				Global_2544352 = (Global_2544352 - Local_1452[(iLocal_716 - 1)].f_3);
			}
			else
			{
				Global_2544352 = Local_1452[1].f_3;
			}
			Local_1440.f_4 = 0;
		}
		iVar2 = func_52(Local_1440.f_4);
		while (!bVar1)
		{
			if (Global_2544352 < Local_1452[iVar2].f_3)
			{
				bVar1 = true;
				if (Local_1440.f_4 != (iVar2 - 1))
				{
					if (Local_1452[(iVar2 - 1)].f_4 != Global_2544353)
					{
						Global_2544353 = Local_1452[(iVar2 - 1)].f_4;
					}
				}
				Local_1440.f_4 = (iVar2 - 1);
			}
			iVar2 = func_52(iVar2);
		}
	}
	else
	{
		if (Global_2544352 < 0f)
		{
			Global_2544352 = (Global_2544352 + Local_1452[(iLocal_716 - 1)].f_3);
			Local_1440.f_4 = (iLocal_716 - 2);
		}
		iVar2 = Local_1440.f_4;
		while (!bVar1)
		{
			if (Local_1452[iVar2].f_3 < Global_2544352)
			{
				bVar1 = true;
				Local_1440.f_4 = iVar2;
			}
			iVar2 = func_51(iVar2);
		}
	}
	func_137();
	GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 12);
}

int func_51(int iParam0)
{
	iVar0 = (iParam0 - 1);
	if (iVar0 < 0)
	{
		iVar0 = (iLocal_716 - 2);
	}
	return iVar0;
}

int func_52(int iParam0)
{
	iVar0 = iParam0 + 1;
	if (iVar0 >= iLocal_716)
	{
		iVar0 = 1;
	}
	return iVar0;
}

float func_53()
{
	iVar0 = func_52(Local_1440.f_4);
	fVar1 = (Local_1452[Local_1440.f_4].f_2 - Local_1452[iVar0].f_2);
	fVar2 = (Local_1452[iVar0].f_3 - Local_1452[Local_1440.f_4].f_3);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 + Local_1452[224].f_3);
	}
	fVar3 = GAMEPLAY::ASIN((fVar1 / fVar2));
	return (10f * SYSTEM::SIN(fVar3));
}

Vector3 func_54(float fParam0, int iParam1)
{
	func_56(&Var0);
	if (fParam0 < 0f)
	{
		fParam0 = (fParam0 + Local_1452[(iLocal_716 - 1)].f_3);
	}
	if (Global_2544353 >= 0f)
	{
		iVar3 = iParam1;
		iVar4 = func_52(iParam1);
	}
	else
	{
		iVar3 = func_52(iParam1);
		iVar4 = iParam1;
	}
	fVar5 = GAMEPLAY::ABSF((Local_1452[iVar4].f_3 - Local_1452[iVar3].f_3));
	fVar6 = (fParam0 - Local_1452[iVar3].f_3);
	fVar7 = (fVar6 / fVar5);
	Var8 = { func_55(iVar4) - func_55(iVar3) };
	if (Global_2544353 >= 0f)
	{
		Var0 = { func_55(iVar3) + Var8 * Vector(fVar7, fVar7, fVar7) };
	}
	else
	{
		Var0 = { func_55(iVar3) - Var8 * Vector(fVar7, fVar7, fVar7) };
	}
	return Var0;
}

Vector3 func_55(int iParam0)
{
	return Local_1452[iParam0];
}

void func_56(var uParam0)
{
	*uParam0 = { -1E-10f, -1E-10f, -1E-10f };
}

void func_57()
{
	if (!UI::IS_PAUSE_MENU_ACTIVE())
	{
		if ((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_enter_player_one", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_enter_player_two", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_exit_player_one", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_exit_player_two", 3))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 1);
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 1);
			}
			iLocal_729 = 1;
			GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
		}
	}
}

void func_58(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_59()
{
	if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 9))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_idle_a_player_one", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_idle_a_player_two", 3))
			{
				switch (iLocal_2618)
				{
					case 0:
						StringCopy(&cLocal_2599, "hands_up_enter_player_", 64);
						if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
						{
							StringConCat(&cLocal_2599, "one", 64);
						}
						else
						{
							StringConCat(&cLocal_2599, "two", 64);
						}
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 8f, -8f, -1, 2, 0, 0, 0, 0);
						iLocal_2618 = 1;
						break;
					
					case 1:
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599) > 0.99f)
							{
								StringCopy(&cLocal_2599, "hands_up_idle_a_player_", 64);
								if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
								{
									StringConCat(&cLocal_2599, "one", 64);
								}
								else
								{
									StringConCat(&cLocal_2599, "two", 64);
								}
								AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 8f, -8f, -1, 1, 0, 0, 0, 0);
								iLocal_2618 = 0;
								GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
								iLocal_729 = 1;
							}
						}
						break;
					}
			}
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_idle_a_player_one", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_idle_a_player_two", 3))
		{
			StringCopy(&cLocal_2599, "hands_up_exit_player_", 64);
			if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
			{
				StringConCat(&cLocal_2599, "one", 64);
			}
			else
			{
				StringConCat(&cLocal_2599, "two", 64);
			}
			AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 8f, -8f, -1, 2, 0, 0, 0, 0);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599) > 0.99f)
			{
				StringCopy(&cLocal_2599, "safety_bar_grip_move_a_player_", 64);
				if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
				{
					StringConCat(&cLocal_2599, "one", 64);
				}
				else
				{
					StringConCat(&cLocal_2599, "two", 64);
				}
				AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 8f, -8f, -1, 1, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 9);
				iLocal_729 = 1;
			}
		}
	}
}

void func_60()
{
	if (iLocal_35 < Global_262145.f_7791)
	{
		if (NETWORK::NETWORK_PLAYER_HAS_HEADSET(PLAYER::PLAYER_ID()))
		{
			func_119(iLocal_32, 300, "AMRC_SCRM_L", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
			fLocal_34 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
			if (fLocal_34 > 0f)
			{
				iLocal_32++;
				if (iLocal_32 >= 300)
				{
					func_118(1);
					func_61(0, PLAYER::PLAYER_PED_ID(), "AMRC_SCRM_R", -875716015, -1915191729, Global_262145.f_7790, 1, -1, 0, 0, 0);
					iLocal_35 = (iLocal_35 + Global_262145.f_7790);
					iLocal_32 = 0;
				}
			}
		}
	}
}

int func_61(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_62(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_62(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	iVar0 = func_71(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_67(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_63(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_63(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	Var0 = { func_65(iParam0, 1) };
	if (iParam0 == func_64(PLAYER::PLAYER_PED_ID()))
	{
		func_118(1);
	}
	func_67(Var0, iParam1, 0, sParam2, uParam3);
}

int func_64(var uParam0)
{
	return uParam0;
}

Vector3 func_65(int iParam0, bool bParam1)
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_66(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = Var3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.z + 0.18f);
	}
	else
	{
		fVar13 = (Var7.z + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_66(var uParam0)
{
	return uParam0;
}

void func_67(struct<3> Param0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2439138.f_1290[iVar0].f_6 == 0 || Global_2439138.f_1290[iVar0].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2439138.f_1290[iVar1] = { Param0 };
			Global_2439138.f_1290[iVar1].f_6 = 1;
			Global_2439138.f_1290[iVar1].f_4 = func_70(Global_2439138.f_1290[iVar1], &Global_1312317, &Global_1312318);
			Global_2439138.f_1290[iVar1].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2439138.f_1290[iVar1].f_3 = iParam3;
			Global_2439138.f_1290[iVar1].f_8 = iParam4;
			Global_2439138.f_1290[iVar1].f_9 = func_69();
			Global_2439138.f_1290[iVar1].f_10 = func_68();
			StringCopy(&(Global_2439138.f_1290[iVar1].f_22), sParam5, 16);
			Global_2439138.f_1290[iVar1].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_68()
{
	if (Global_2439138.f_1891)
	{
		Global_2439138.f_1891 = 0;
		return 1;
	}
	Global_2439138.f_1891 = 0;
	return 0;
}

var func_69()
{
	uVar0 = Global_2439138.f_1893;
	Global_2439138.f_1893 = 1;
	return uVar0;
}

float func_70(struct<3> Param0, var uParam3, var uParam4)
{
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_71(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	uVar0 = func_72(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_72(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	if (func_117(PLAYER::PLAYER_ID()) || func_116(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9635 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9635;
		}
	}
	else if (func_113() || func_109(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22774 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22774;
		}
	}
	else if (Global_262145.f_6635 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6635;
	}
	if (func_108(uParam2))
	{
	}
	if (func_107())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_105(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_104(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_101(0, &iVar1);
					break;
				
				case 3:
					func_101(1, &iVar1);
					break;
				
				case 1:
					func_97(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1686714)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_94(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_83((func_93(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590535[PLAYER::PLAYER_ID()].f_39.f_2 != -1)
				{
					func_94(1165, iVar1, -1);
				}
				func_77(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_73((func_75(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_73((func_75(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_73(int iParam0)
{
	if (func_107())
	{
		Global_1590535[PLAYER::PLAYER_ID()].f_211.f_5 = iParam0;
		func_74(-1804740956, iParam0);
	}
}

void func_74(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_75(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_12(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_76(-1804740956);
			}
			else
			{
				return Global_1590535[iParam0].f_211.f_5;
			}
		}
		else
		{
			return func_76(-1804740956);
		}
	}
	return 0;
}

int func_76(int iParam0)
{
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_77(int iParam0)
{
	Var0 = { func_82(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_80(func_81(&Var0));
			if (iVar13 == 0)
			{
				func_79(&Global_1387915, iParam0);
				func_78(-1446982891, Global_1387915);
			}
			else if (iVar13 == 1)
			{
				func_79(&Global_1387916, iParam0);
				func_78(-1676857426, Global_1387916);
			}
			else if (iVar13 == 2)
			{
				func_79(&Global_1387917, iParam0);
				func_78(1280806976, Global_1387917);
			}
			else if (iVar13 == 3)
			{
				func_79(&Global_1387918, iParam0);
				func_78(-1096682281, Global_1387918);
			}
			else if (iVar13 == 4)
			{
				func_79(&Global_1387919, iParam0);
				func_78(1894078811, Global_1387919);
			}
		}
	}
}

void func_78(int iParam0, var uParam1)
{
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case 406381289:
			Global_1387910 = uParam1;
			break;
		
		case 1669900865:
			Global_1387912 = uParam1;
			break;
		
		case 54164875:
			Global_1387912 = uParam1;
			break;
		
		case -842450336:
			Global_1387913 = uParam1;
			break;
		
		case -1576871964:
			Global_1387914 = uParam1;
			break;
		
		case -1446982891:
			Global_1387915 = uParam1;
			break;
		
		case -1676857426:
			Global_1387916 = uParam1;
			break;
		
		case 1280806976:
			Global_1387917 = uParam1;
			break;
		
		case -1096682281:
			Global_1387918 = uParam1;
			break;
		
		case 1894078811:
			Global_1387919 = uParam1;
			break;
		
		case -1566025259:
			Global_1387920 = uParam1;
			break;
		
		case -621080327:
			Global_1387921 = uParam1;
			break;
		
		case 1021002722:
			Global_1387922 = uParam1;
			break;
		
		case -1670771646:
			Global_1387923 = uParam1;
			break;
		
		case -1992420464:
			Global_1387924 = uParam1;
			break;
		
		case -386175531:
			Global_1387925 = uParam1;
			break;
		
		case -203536263:
			Global_1387926 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_79(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_80(int iParam0)
{
	if (iParam0 == Global_1387910)
	{
		return 0;
	}
	else if (iParam0 == Global_1387911)
	{
		return 1;
	}
	else if (iParam0 == Global_1387912)
	{
		return 2;
	}
	else if (iParam0 == Global_1387913)
	{
		return 3;
	}
	else if (iParam0 == Global_1387914)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_81(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2460605;
		}
	}
	return Global_2460605;
}

struct<13> func_82(int iParam0)
{
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_83(int iParam0, int iParam1, int iParam2)
{
	if (func_107())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9603 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388060[func_92(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388060[func_92(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9602 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_91(PLAYER::PLAYER_ID()))
		{
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_1 = iParam0;
			Global_1590535[PLAYER::PLAYER_ID()].f_211.f_6 = func_89(iParam0, 1);
		}
		func_88(639, iParam0, -1, 1);
		func_87(640, func_89(iParam0, 1), -1, 1, 0);
		Global_1388060[func_92(-1)] = iParam0;
		func_84(-1109644434, 7, 0);
	}
}

void func_84(int iParam0, int iParam1, int iParam2)
{
	if (func_86(iParam1, iParam2))
	{
		iVar0 = func_85();
		Global_2460557[iVar0] = iParam1;
		Global_2460568[iVar0] = iParam0;
	}
}

int func_85()
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

int func_86(int iParam0, var uParam1)
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

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0][func_92(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = Global_2548434[iParam0][func_92(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1387988[func_92(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1387994[func_92(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388000[func_92(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388006[func_92(iParam2)] = iParam1;
			break;
		
		case 8726:
			Global_1388012[func_92(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1387958[func_92(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1387964[func_92(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1387970[func_92(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1387976[func_92(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1387982[func_92(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1387928[func_92(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1387934[func_92(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1387940[func_92(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1387946[func_92(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1387952[func_92(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388018[func_92(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388024[func_92(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388030[func_92(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388036[func_92(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388042[func_92(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388048[func_92(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1388054[func_92(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388060[func_92(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388066[func_92(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2586065[0][func_92(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2586065[1][func_92(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2586065[2][func_92(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2586065[3][func_92(iParam2)] = iParam1;
			break;
		
		case 10016:
			Global_2586214[func_92(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388072[func_92(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388078[func_92(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388084[func_92(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388090[func_92(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388096[func_92(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2586138[0][func_92(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2586138[1][func_92(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2586138[2][func_92(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2586138[3][func_92(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2586138[4][func_92(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2586217[0][func_92(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2586217[1][func_92(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2586217[2][func_92(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2586217[3][func_92(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2586217[4][func_92(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2586233[0][func_92(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2586233[1][func_92(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2586233[2][func_92(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2586233[3][func_92(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2586233[4][func_92(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2586138[5][func_92(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2586065[4][func_92(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2586249[func_92(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2586258[func_92(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2586252[func_92(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2586261[func_92(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2586255[func_92(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2586264[func_92(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2586267[func_92(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2586138[6][func_92(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2586065[5][func_92(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2586138[7][func_92(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2586065[6][func_92(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2586138[8][func_92(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2586065[7][func_92(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2586138[9][func_92(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2586065[8][func_92(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2586138[10][func_92(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2586065[9][func_92(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2586138[11][func_92(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2586065[10][func_92(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2586138[12][func_92(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2586065[11][func_92(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2586138[13][func_92(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2586065[12][func_92(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2586138[14][func_92(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2586065[13][func_92(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2586138[15][func_92(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2586065[14][func_92(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2586138[16][func_92(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2586065[15][func_92(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2586138[17][func_92(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2586065[16][func_92(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2586065[17][func_92(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2586065[18][func_92(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2586065[19][func_92(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2586065[20][func_92(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2586270[func_92(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2586273[func_92(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2586276[func_92(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2586279[func_92(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2586282[func_92(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2586285[func_92(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2586288[func_92(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2586291[func_92(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2586294[func_92(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2586297[func_92(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2586300[func_92(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2586303[func_92(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2586306[func_92(iParam2)] = iParam1;
			break;
		
		case 8900:
			Global_2586309[func_92(iParam2)] = iParam1;
			break;
		
		case 8534:
			Global_2586065[21][func_92(iParam2)] = iParam1;
			break;
		
		case 8977:
			Global_2586138[23][func_92(iParam2)] = iParam1;
			break;
		
		case 8975:
			Global_2586065[22][func_92(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2586138[24][func_92(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2586065[23][func_92(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_89(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_90(iParam0, 0);
}

int func_90(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_291133[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_291133[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_91(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2439138.f_1, iParam0);
	}
	return 1;
}

int func_92(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_42();
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

int func_93(int iParam0)
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388060[func_92(-1)];
			}
			else if (func_91(iParam0))
			{
				return Global_1590535[iParam0].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388060[func_92(-1)];
	}
	return 0;
}

void func_94(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_96(iParam0, func_92(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_95(iParam0))
	{
		func_87(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_88(iParam0, iVar0, iParam2, 1);
	}
}

int func_95(int iParam0)
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

int func_96(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2548434[iParam0][func_92(iParam1)];
		if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_97(int iParam0)
{
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_100(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_99(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_98(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_98(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_98(int iParam0, int iParam1)
{
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_99(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2513218 = { func_82(iParam0) };
		Global_2513231 = { func_82(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513218))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2513231))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513148, 35, &Global_2513218);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2513183, 35, &Global_2513231);
				if (Global_2513148 == Global_2513183)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_220, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_101(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_12(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_99(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_12(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_102(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_99(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_98(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_98(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_102(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_103(iParam0), func_103(iParam1));
	return 0f;
}

Vector3 func_103(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_104(int iParam0)
{
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_98(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_105(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_93(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_93(PLAYER::PLAYER_ID());
		}
	}
	if (func_106(8000, 0, 0) > 0)
	{
		if (func_106(8000, 0, 0) < (iParam0 + func_93(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_106(8000, 0, 0) - func_93(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_106(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_291133[iParam0];
}

int func_107()
{
	return 1;
}

int func_108(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_109(int iParam0)
{
	return func_110(func_111(iParam0));
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_111(int iParam0)
{
	if (func_112(iParam0, 0))
	{
		return Global_1628237[iParam0].f_11.f_33;
	}
	return -1;
}

int func_112(int iParam0, int iParam1)
{
	if (Global_1628237[iParam0].f_11.f_33 != -1 || (iParam1 && Global_1628237[iParam0].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_113()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_115();
	}
	return func_114(Global_4456448.f_194990);
}

int func_114(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5008[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_115()
{
	return Global_2450632.f_17;
}

bool func_116(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 2;
}

bool func_117(int iParam0)
{
	return Global_2425662[iParam0].f_115 == 7;
}

void func_118(int iParam0)
{
	Global_2439138.f_1891 = iParam0;
}

void func_119(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_121(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_120(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = iParam3;
		Global_1378678.f_1135.f_183[iVar0] = iParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0] = iParam6;
		Global_1378678.f_1135.f_227[iVar0].f_1 = iParam7;
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

void func_120(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_121(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1378678.f_6293[iParam0], iParam1);
}

void func_122()
{
	if (!Local_2623 >= 4)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_31, 2))
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_730))
			{
				if (iLocal_729)
				{
					Local_1431 = { func_135() };
					func_133(&uLocal_731);
					if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_enter_player_one", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_enter_player_two", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_exit_player_one", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, "hands_up_exit_player_two", 3))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 1))
						{
							func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 203, 1), "AMRC_HANDSLOWER", &uLocal_731, 0);
						}
						else
						{
							func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 203, 1), "AMRC_HANDSRAISE", &uLocal_731, 0);
						}
					}
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 80, 1), "AMRC_CINEMATIC", &uLocal_731, 0);
					}
					else
					{
						func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1), "AMRC_CINEMATIC", &uLocal_731, 0);
					}
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 0, 1), "AMRC_CHANGEVIEW", &uLocal_731, 0);
					}
					else
					{
						func_132(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 217, 1), "AMRC_CHANGEVIEW", &uLocal_731, 0);
					}
					iLocal_729 = 0;
				}
				UI::SET_TEXT_RENDER_ID(UI::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::_0xC6372ECD45D73BCD(0);
				func_131(1);
				func_130(1);
				func_123(&uLocal_730, &Local_1431, &uLocal_731, func_129(&uLocal_731));
			}
		}
		else
		{
			uLocal_730 = unk_0x67D02A194A2FC2BD("instructional_buttons");
			GAMEPLAY::SET_BIT(&uLocal_31, 2);
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_730);
		GAMEPLAY::CLEAR_BIT(&uLocal_31, 2);
		iLocal_729 = 1;
	}
}

void func_123(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam3 == 1 || CONTROLS::_0x6CD79468A1E595C6(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		func_128(uParam2);
	}
	if (Global_1315716 < 2)
	{
		func_130(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_689, iVar0))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
					if (!GAMEPLAY::IS_BIT_SET(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0].f_54;
						iVar2 = uParam2->f_1[iVar0].f_55;
						iVar3 = uParam2->f_1[iVar0].f_56;
						func_127(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar2, 1));
						if (iVar3 < 361)
						{
							func_127(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar1, iVar3, 1));
						}
					}
					else
					{
						uVar4 = uParam2->f_1[iVar0].f_54;
						uVar5 = uParam2->f_1[iVar0].f_55;
						func_127(CONTROLS::_0x80C2FD58D720C801(uVar4, uVar5, 1));
					}
					if (GAMEPLAY::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (GAMEPLAY::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else if (GAMEPLAY::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						func_126(&(uParam2->f_1[iVar0].f_32));
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (GAMEPLAY::IS_BIT_SET(uParam2->f_691, iVar0))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(1);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam2->f_1[iVar0].f_55);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
					func_127(&(uParam2->f_1[iVar0]));
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[iVar0].f_16)))
					{
						func_127(&(uParam2->f_1[iVar0].f_16));
					}
					if (GAMEPLAY::IS_BIT_SET(uParam2->f_686, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						if (uParam2->f_694 == iVar0)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[iVar0].f_36, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_36);
							if (GAMEPLAY::IS_BIT_SET(uParam2->f_687, iVar0))
							{
								UI::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[iVar0].f_37);
							}
						}
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else if (GAMEPLAY::IS_BIT_SET(uParam2->f_688, iVar0))
					{
						GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(&(uParam2->f_1[iVar0].f_32));
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[iVar0].f_38));
						GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
					}
					else
					{
						func_126(&(uParam2->f_1[iVar0].f_32));
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(361);
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar0++;
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(uParam2->f_699);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_125(*uParam0, uParam1);
	}
	func_124();
}

void func_124()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_125(var uParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_126(var uParam0)
{
	GRAPHICS::_BEGIN_TEXT_COMMAND_SCALEFORM(uParam0);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM();
}

void func_127(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

void func_128(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_129(var uParam0)
{
	return uParam0->f_692;
}

void func_130(int iParam0)
{
	Global_1315716 = iParam0;
}

void func_131(int iParam0)
{
	Global_1378678.f_1121 = iParam0;
}

void func_132(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_133(var uParam0)
{
	func_134(uParam0);
	uParam0->f_692 = 1;
}

void func_134(var uParam0)
{
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0].f_32), "", 16);
		uParam0->f_1[iVar0].f_36 = 0;
		uParam0->f_1[iVar0].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0].f_38), "", 64);
		uParam0->f_1[iVar0].f_54 = 2;
		uParam0->f_1[iVar0].f_55 = 361;
		uParam0->f_1[iVar0].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

struct<9> func_135()
{
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_136()
{
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_726, 0))
	{
		CAM::_0xE9EA16D6E54CDCA4(uLocal_726, 1);
	}
}

void func_137()
{
	iVar0 = 0;
	while (iVar0 < iLocal_721)
	{
		iVar1 = func_142((Global_2544352 - (fLocal_36 * IntToFloat(iVar0))), Local_1440.f_4);
		Var2 = { func_54((Global_2544352 - (fLocal_36 * IntToFloat(iVar0))), iVar1) };
		ENTITY::SET_ENTITY_COORDS(iLocal_721[iVar0], Var2, 1, 0, 0, 1);
		func_138(iVar0, iVar1, (Global_2544352 - (fLocal_36 * IntToFloat(iVar0))));
		iVar0++;
	}
}

void func_138(int iParam0, int iParam1, float fParam2)
{
	iVar0 = func_51(iParam1);
	iVar1 = iParam1;
	iVar2 = func_52(iParam1);
	iVar3 = func_52(iVar2);
	if (fParam2 < 0f)
	{
		fParam2 = (fParam2 + Local_1452[(iLocal_716 - 1)].f_3);
	}
	fVar20 = ((fParam2 - Local_1452[iVar1].f_3) / (Local_1452[iVar2].f_3 - Local_1452[iVar1].f_3));
	if (fVar20 < 0.5f)
	{
		fVar4 = (fVar20 + 0.5f);
		func_139(func_140(iVar0, iVar1), &(uVar5[0]), &(uVar5[1]), &(uVar5[2]), &(uVar5[3]));
		func_139(func_140(iVar1, iVar2), &(uVar10[0]), &(uVar10[1]), &(uVar10[2]), &(uVar10[3]));
	}
	else
	{
		fVar4 = (fVar20 - 0.5f);
		func_139(func_140(iVar1, iVar2), &(uVar5[0]), &(uVar5[1]), &(uVar5[2]), &(uVar5[3]));
		func_139(func_140(iVar2, iVar3), &(uVar10[0]), &(uVar10[1]), &(uVar10[2]), &(uVar10[3]));
	}
	GAMEPLAY::_0xF2F6A2FA49278625(fVar4, uVar5[0], uVar5[1], uVar5[2], uVar5[3], uVar10[0], uVar10[1], uVar10[2], uVar10[3], &(uVar15[0]), &(uVar15[1]), &(uVar15[2]), &(uVar15[3]));
	ENTITY::SET_ENTITY_QUATERNION(iLocal_721[iParam0], uVar15[0], uVar15[1], uVar15[2], uVar15[3]);
}

void func_139(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6)
{
	fVar0 = (Param0.y / 2f);
	fVar1 = (Param0.z / 2f);
	fVar2 = (Param0.x / 2f);
	fVar3 = SYSTEM::SIN(fVar0);
	fVar4 = SYSTEM::SIN(fVar1);
	fVar5 = SYSTEM::SIN(fVar2);
	fVar6 = SYSTEM::COS(fVar0);
	fVar7 = SYSTEM::COS(fVar1);
	fVar8 = SYSTEM::COS(fVar2);
	*uParam3 = (((fVar5 * fVar6) * fVar7) - ((fVar8 * fVar3) * fVar4));
	*uParam4 = (((fVar8 * fVar3) * fVar7) + ((fVar5 * fVar6) * fVar4));
	*uParam5 = (((fVar8 * fVar6) * fVar4) - ((fVar5 * fVar3) * fVar7));
	*uParam6 = (((fVar8 * fVar6) * fVar7) + ((fVar5 * fVar3) * fVar4));
}

Vector3 func_140(int iParam0, int iParam1)
{
	Var0 = { func_141(Local_1452[iParam1] - Local_1452[iParam0]) };
	fVar3 = GAMEPLAY::ATAN2(Var0.x, Var0.y);
	fVar4 = GAMEPLAY::ATAN2(Var0.z, SYSTEM::SQRT(((Var0.x * Var0.x) + (Var0.y * Var0.y))));
	return -fVar4, 0f, (-fVar3 - 180f);
}

Vector3 func_141(struct<3> Param0)
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

int func_142(float fParam0, int iParam1)
{
	if (fParam0 <= 0f)
	{
		fParam0 = (fParam0 + Local_1452[(iLocal_716 - 1)].f_3);
		iParam1 = (iLocal_716 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 >= 0)
	{
		if (Local_1452[iVar0].f_3 < fParam0)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_143()
{
	switch (iLocal_2617)
	{
		case 0:
			StringCopy(&cLocal_2591, "safety_bar_enter_roller_car", 32);
			iVar0 = 0;
			while (iVar0 < iLocal_721)
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_721[iVar0], &cLocal_2591, sLocal_2578, 8f, 0, 1, 0, 0, 0);
				iVar0++;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bar_Lower_And_Lock", iLocal_721[1], "DLC_IND_ROLLERCOASTER_SOUNDS", 0, 0);
			if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
			{
				StringCopy(&cLocal_2599, "safety_bar_enter_player_", 64);
				if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
				{
					StringConCat(&cLocal_2599, "one", 64);
				}
				else
				{
					StringConCat(&cLocal_2599, "two", 64);
				}
				AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 8f, -8f, -1, 2, 0, 0, 0, 0);
			}
			iLocal_2617 = 1;
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599, 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), sLocal_2578, &cLocal_2599) > 0.2f)
					{
						GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 8);
						iLocal_2617 = 0;
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 8);
				iLocal_2617 = 0;
			}
			break;
	}
}

int func_144(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
	{
		if (!AUDIO::LOAD_STREAM_WITH_START_OFFSET("Player_Ride", 0, "DLC_IND_ROLLERCOASTER_SOUNDS"))
		{
			return 0;
		}
	}
	else if (!AUDIO::LOAD_STREAM_WITH_START_OFFSET("Ambient_Ride", iParam0, "DLC_IND_ROLLERCOASTER_SOUNDS"))
	{
		return 0;
	}
	return 1;
}

void func_145()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_31, 5))
	{
		iVar0 = 0;
		while (iVar0 < Local_2623.f_12)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2623.f_12[iVar0].f_3, 0.3f, 0.3f, 1.5f, 0, 1, 0))
			{
				if (!Local_2623.f_3[iVar0])
				{
					Local_1445 = iVar0;
					GAMEPLAY::SET_BIT(&uLocal_31, 5);
					Local_2623.f_3[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_146()
{
	if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1652.717f, -1089.217f, 12.1492f, 40f, 40f, 40f, 0, 1, 0) && !Global_1590535[PLAYER::PLAYER_ID()].f_748 == 1) && !func_177(PLAYER::PLAYER_ID()))
	{
		if ((30000 - func_8(&(Local_2623.f_93), 0, 0)) >= 0)
		{
			func_147((30000 - func_8(&(Local_2623.f_93), 0, 0)), "AMRC_TIMER", 0, 0, -1, 0, 13, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
		else
		{
			func_147(0, "AMRC_TIMER", 0, 0, -1, 0, 13, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		}
	}
}

void func_147(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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

void func_148(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x883D79C4071E18B3())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_22(PLAYER::PLAYER_ID(), 1, 0))
	{
		return;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 199) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (UI::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_151())
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_98796.f_1417 && !NETWORK::_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			UI::_SET_WARNING_MESSAGE_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2461734 = iParam1;
			Global_98796.f_1417 = 1;
			Global_98796.f_1418 = iParam2;
		}
	}
}

int func_149()
{
	if (func_150())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_150()
{
	return Global_2461181;
}

bool func_151()
{
	return Global_2461839;
}

void func_152(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_164())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_153(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_153(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
			if (iParam1 > 0 || Global_262145.f_27584)
			{
				func_153(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
			func_153(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_153(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bVar0 = false;
	if (!func_164())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!UNK3::_0xB24F0944DA203D9E(func_42()) || UNK3::_0x810E8431C0614BF9())
		{
			Global_4264536 = 1;
			return 0;
		}
		if (Global_2461839)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4264537 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4263954[iVar2].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || UNK3::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_160(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4263954[*uParam0].f_66.f_8 = 1;
					Global_4263954[*uParam0].f_66.f_12 = 1;
				}
			}
			Global_4264521 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4264535 = 1;
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4264538 = iParam4;
			Global_4264540 = iParam3;
			Global_4264541 = 1;
			Global_4264539 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_159(1, iParam4);
			Global_4264535 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_154(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_154(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2425662[PLAYER::PLAYER_ID()].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_155(iParam0);
	}
}

void func_155(int iParam0)
{
	bVar0 = false;
	if (!func_164())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_158(iParam0))
		{
			if (!bVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!bVar0)
		{
			UNK3::_NETWORK_SHOP_END_SERVICE(Global_4263954[iParam0].f_66);
		}
		func_156(&(Global_4263954[iParam0]));
	}
}

void func_156(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_157(&(uParam0->f_14));
	func_157(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_157(var uParam0)
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

int func_158(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4263954[iParam0].f_66.f_5 == 1;
	}
	return 0;
}

void func_159(int iParam0, var uParam1)
{
	Global_2463019 = uParam1;
	Global_2463018 = iParam0;
}

int func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4263954[iVar0].f_66.f_2 == 0)
		{
			if (!func_164())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4263954[iVar0].f_66.f_2 = 1;
			Global_4263954[iVar0].f_66.f_1 = uParam5;
			Global_4263954[iVar0].f_66.f_3 = iParam1;
			Global_4263954[iVar0].f_66.f_4 = uParam2;
			Global_4263954[iVar0].f_66.f_7 = uParam3;
			Global_4263954[iVar0].f_66.f_5 = 0;
			Global_4263954[iVar0].f_66 = iParam0;
			Global_4263954[iVar0].f_66.f_6 = iParam4;
			Global_4263954[iVar0].f_66.f_11 = uParam8;
			Global_4263954[iVar0].f_66.f_10 = uParam7;
			Global_4263954[iVar0].f_66.f_13 = iParam9;
			Global_4263954[iVar0].f_66.f_12 = 0;
			Global_4263954[iVar0].f_66.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4263954[iVar0].f_66.f_18 = 0;
			Global_4264521 = 0;
			if (bParam6)
			{
				Global_4263954[iVar0].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_161(Global_4263954[iVar0], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_161(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 285918879;
	Var0.y = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_163(Var0.y);
	if ((Global_262145.f_23568 && !Global_262145.f_23569) && !Global_262145.f_23570)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_162();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_162()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_163(int iParam0)
{
	if (iParam0 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_164()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_165(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = NETWORKCASH::NETWORK_GET_VC_BANK_BALANCE();
	}
	iVar0 = (iVar0 + NETWORKCASH::NETWORK_GET_VC_WALLET_BALANCE(-1));
	return iVar0;
}

void func_166(char* sParam0, var uParam1, int iParam2)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam2);
}

bool func_167()
{
	return (((func_173() || func_169()) || func_168() == 2) || func_168() == 16);
}

int func_168()
{
	return Global_968397;
}

int func_169()
{
	if (((func_172() || func_212()) || func_171()) || func_170())
	{
		return 1;
	}
	return 0;
}

bool func_170()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 1);
}

bool func_171()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 2);
}

bool func_172()
{
	return Global_2450632.f_598;
}

bool func_173()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 5);
}

int func_174(int iParam0)
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

int func_175(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (DLC1::_0x341DE7ED1D2A1BFD(DLC1::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11)), 1148412551, 0))
	{
		return 1;
	}
	return 0;
}

bool func_176(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2425662[iParam0].f_208, iParam1);
}

int func_177(int iParam0)
{
	if (func_180(iParam0))
	{
		return 1;
	}
	if (func_178(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_179(iParam0, 9);
	}
	return 0;
}

bool func_179(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1628237[iParam0].f_11.f_4, iParam1);
}

int func_180(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1628237[iVar0].f_1, 0);
	}
	return 0;
}

int func_181(int iParam0)
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

void func_182()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
	{
		func_190(0);
		if (!func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 6);
			return;
		}
		switch (iLocal_2615)
		{
			case 0:
				if ((Local_1445 % 2) != 0)
				{
					Local_1445.f_1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_721[(Local_1445 / 2)], Local_2623.f_12[(Local_1445 / 2)]) };
					fVar4 = 0f;
				}
				else
				{
					Local_1445.f_1 = { 0f, 0f, 1f };
					fVar4 = -1.017f;
				}
				Local_713 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_721[(Local_1445 / 2)], 0f, fVar4, 0f) };
				func_31(PLAYER::PLAYER_ID(), 0, 260, 0);
				func_18(1);
				Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 = Local_2623.f_12[Local_1445].f_9;
				StringCopy(&cLocal_2579, "enter_player_", 24);
				StringCopy(&Local_2585, "idle_a_player_", 24);
				if (Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_4 == 0)
				{
					StringConCat(&cLocal_2579, "one", 24);
					StringConCat(&Local_2585, "one", 24);
				}
				else
				{
					StringConCat(&cLocal_2579, "two", 24);
					StringConCat(&Local_2585, "two", 24);
				}
				func_46(func_48(0), Local_1445, 0);
				AI::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_2623.f_12[Local_1445].f_3, 1f, -1, 229.3511f, 0.2f);
				Global_1590535[PLAYER::PLAYER_ID()].f_749 = 1;
				NETWORK::_0xC505036A35AFD01B(1);
				func_184();
				iLocal_2615 = 1;
				break;
			
			case 1:
				if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0 && AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
				{
					uLocal_2619 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_713, 0f, 0f, 139.96f, 2, 1, 0, 1065353216, 0, 1065353216);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_2619, sLocal_2578, &cLocal_2579, 8f, -8f, 131072, 0, 1148846080, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_2619);
					iLocal_2615 = 2;
				}
				break;
			
			case 2:
				Local_2585 = { Local_2585 };
				iVar3 = NETWORK::_NETWORK_UNLINK_NETWORKED_SYNCHRONISED_SCENE(uLocal_2619);
				if (iVar3 != -1)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar3) > 0.99f)
					{
						uLocal_2619 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_713, 0f, 0f, 139.96f, 2, 0, 1, 1065353216, 0, 1065353216);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_2619, sLocal_2578, &Local_2585, 8f, -8f, 131072, 0, 1148846080, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_2619);
						iLocal_2615 = 3;
					}
				}
				break;
			
			case 3:
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_721[(Local_1445 / 2)], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_721[(Local_1445 / 2)], 0, Var0, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) - 139.96f), 0, 0, 0, 0, 2, 1);
				NETWORK::_0x267C78C60E806B9A(PLAYER::PLAYER_PED_ID(), 1);
				func_183(func_48(0), (Local_1445 / 2), Var0, 0f, 0f, 180f);
				func_17(1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 203, 1);
				Local_1445.f_4 = { Local_2623.f_12[Local_1445].f_6 };
				GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 0);
				GAMEPLAY::CLEAR_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 6);
				iLocal_2615 = 0;
				break;
			}
	}
}

void func_183(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5)
{
	Var0 = -117759879;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = { Param2 };
	Var0.f_6 = { Param5 };
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

void func_184()
{
	if (func_189() || func_188())
	{
		func_187();
		func_185();
	}
}

void func_185()
{
	if ((!func_213() && !func_186()) && Global_2451425)
	{
		Global_4456448.f_194990 = 0;
	}
}

bool func_186()
{
	return Global_2450632.f_591;
}

void func_187()
{
	Global_2450632.f_656 = 1;
}

var func_188()
{
	return Global_2450632.f_635;
}

bool func_189()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632.f_2, 11);
}

void func_190(int iParam0)
{
	if (func_195())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_181(0))
		{
			func_191(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_7357, 2);
	}
}

void func_191(int iParam0)
{
	if (func_195())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_194())
		{
			func_193(1, 1);
		}
		else
		{
			func_193(0, 0);
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
	if (!func_192())
	{
		Global_19486.f_1 = 3;
	}
}

int func_192()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_193(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_181(0))
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

bool func_194()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 5);
}

bool func_195()
{
	return GAMEPLAY::IS_BIT_SET(Global_1687687, 19);
}

int func_196()
{
	STREAMING::REQUEST_MODEL(iLocal_727);
	STREAMING::REQUEST_MODEL(1543894721);
	STREAMING::REQUEST_MODEL(525880110);
	STREAMING::REQUEST_ANIM_DICT(sLocal_2578);
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_727))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_2578))
	{
		return 0;
	}
	func_200(func_201(1, 1));
	if (STREAMING::HAS_MODEL_LOADED(1543894721) && STREAMING::HAS_MODEL_LOADED(525880110))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_721)
		{
			iVar1 = func_142((Global_2544352 - (fLocal_36 * IntToFloat(iVar0))), Local_1440.f_4);
			Var2 = { func_54((Global_2544352 - (fLocal_36 * IntToFloat(iVar0))), iVar1) };
			if (iVar0 == 0)
			{
				iLocal_721[0] = OBJECT::CREATE_OBJECT(1543894721, func_55(1), 0, 0, 0);
			}
			else
			{
				iLocal_721[iVar0] = OBJECT::CREATE_OBJECT(525880110, Var2, 0, 0, 0);
				func_138(iVar0, iVar1, (Global_2544352 - (fLocal_36 * IntToFloat(iVar0))));
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_721[iVar0], true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_721[iVar0], 300);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_721[iVar0], 1);
			iVar0++;
		}
		Global_2544352 = Local_1452[1].f_3;
		func_50(0);
		iVar0 = 0;
		while (iVar0 < iLocal_721)
		{
			StringCopy(&cLocal_2591, "idle_a_roller_car", 32);
			if (func_49(iLocal_721[iVar0]))
			{
				ENTITY::PLAY_ENTITY_ANIM(iLocal_721[iVar0], &cLocal_2591, sLocal_2578, 8f, 1, 0, 0, 0, 0);
			}
			iVar0++;
		}
		func_199();
		GAMEPLAY::SET_BIT(&(Local_2623.f_2), 5);
		iLocal_717 = 0;
		func_198(func_48(0));
		func_197(func_48(0));
		func_137();
		return 1;
	}
	return 0;
}

void func_197(int iParam0)
{
	Var0 = -1139402294;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_198(int iParam0)
{
	Var0 = 1275459638;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_199()
{
	Local_2623.f_12[0].f_3 = { -1644.316f, -1123.53f, 17.3447f };
	Local_2623.f_12[1].f_3 = { -1644.92f, -1124.281f, 17.3447f };
	Local_2623.f_12[2].f_3 = { -1645.845f, -1125.413f, 17.3447f };
	Local_2623.f_12[3].f_3 = { -1646.562f, -1126.302f, 17.3447f };
	Local_2623.f_12[4].f_3 = { -1647.498f, -1127.438f, 17.3447f };
	Local_2623.f_12[5].f_3 = { -1648.23f, -1128.184f, 17.3447f };
	Local_2623.f_12[6].f_3 = { -1649.233f, -1129.399f, 17.3447f };
	Local_2623.f_12[7].f_3 = { -1649.937f, -1130.203f, 17.3447f };
	Local_2623.f_12[0].f_6 = { -1641.914f, -1125.268f, 17.3424f };
	Local_2623.f_12[1].f_6 = { -1642.606f, -1126.24f, 17.3424f };
	Local_2623.f_12[2].f_6 = { -1643.573f, -1127.39f, 17.3424f };
	Local_2623.f_12[3].f_6 = { -1644.271f, -1128.2f, 17.3424f };
	Local_2623.f_12[4].f_6 = { -1645.343f, -1129.313f, 17.3424f };
	Local_2623.f_12[5].f_6 = { -1645.966f, -1130.067f, 17.3424f };
	Local_2623.f_12[6].f_6 = { -1647.022f, -1131.291f, 17.3424f };
	Local_2623.f_12[7].f_6 = { -1647.645f, -1132.016f, 17.3424f };
	Local_2623.f_12[0] = { -1644.153f, -1125.433f, 18.3447f };
	Local_2623.f_12[1] = { -1645.723f, -1127.408f, 18.3447f };
	Local_2623.f_12[2] = { -1647.315f, -1129.374f, 18.3447f };
	Local_2623.f_12[3] = { -1648.95f, -1131.299f, 18.3447f };
}

void func_200(int iParam0)
{
	Var0 = -1681513459;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

int func_201(int iParam0, bool bParam1)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_12(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_40(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_202()
{
	return Local_2623.f_1;
}

int func_203(int iParam0)
{
	return Local_2718[iParam0];
}

void func_204()
{
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 2);
				if (func_12(Var2.f_1, 0, 1))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var2.f_1))
					{
						switch (Var2)
						{
							case 1275459638:
								func_211(iVar0);
								break;
							
							case -117759879:
								func_210(iVar0);
								break;
							
							case -279432987:
								func_209(iVar0);
								break;
							
							case -693027289:
								func_208(iVar0);
								break;
							
							case -1139402294:
								func_206(iVar0);
								break;
							
							case -1113502121:
								func_205(iVar0);
								break;
							}
						}
				}
				break;
		}
		iVar0++;
	}
}

void func_205(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Var0.y)].f_2, 0))
			{
				Local_2623.f_12[Var0.z].f_9 = (Local_2623.f_12[Var0.z].f_9 - 1);
			}
			else
			{
				Local_2623.f_12[Var0.z].f_9++;
			}
		}
	}
}

void func_206(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
		{
			func_207(func_163(Var0.f_1), Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3);
		}
	}
}

void func_207(int iParam0, var uParam1)
{
	Var0 = -693027289;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2544352;
	Var0.f_3 = Global_2544353;
	Var0.f_4 = AUDIO::GET_STREAM_PLAY_TIME();
	Var0.f_5 = uParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

void func_208(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		Global_2544352 = Var0.f_2;
		Global_2544353 = Var0.f_3;
		iLocal_719 = Var0.f_4;
		Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_3 = Var0.f_5;
		GAMEPLAY::SET_BIT(&(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2), 5);
	}
}

void func_209(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		uVar2 = PLAYER::GET_PLAYER_PED(Var0.f_1);
		if (func_49(uVar2))
		{
			ENTITY::DETACH_ENTITY(uVar2, 0, 1);
		}
	}
}

void func_210(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		uVar9 = PLAYER::GET_PLAYER_PED(Var0.f_1);
		if (func_12(Var0.f_1, 1, 1))
		{
			NETWORK::_0x267C78C60E806B9A(uVar9, 1);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar9, iLocal_721[Var0.f_2], 0, Var0.f_3, Var0.f_6, 0, 0, 0, 0, 2, 1);
		}
	}
}

void func_211(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
		{
			NETWORK::_0x267C78C60E806B9A(PLAYER::PLAYER_PED_ID(), 1);
			func_183(func_163(Var0.f_1), (Local_1445 / 2), Local_1445.f_1, 0f, 0f, 180f);
		}
	}
}

bool func_212()
{
	return GAMEPLAY::IS_BIT_SET(Global_2450632, 20);
}

bool func_213()
{
	return Global_1590535[PLAYER::PLAYER_ID()].f_196 != 0;
}

int func_214()
{
	func_221(&uVar0);
	if (Global_1312854 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_220())
	{
		return 1;
	}
	if (Global_2462922)
	{
		return 1;
	}
	if (func_219())
	{
		return 1;
	}
	if (func_218(159))
	{
		if (!func_172())
		{
			return 1;
		}
	}
	if (func_218(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_215() != 0)
	{
		if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_215()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_215()
{
	switch (func_217())
	{
		case 0:
			return func_216();
			break;
		
		case 2:
			return -47565502;
			break;
	}
	return 0;
}

int func_216()
{
	switch (Global_2463024)
	{
		case 0:
			return -931834499;
		
		default:
	}
	return -931834499;
}

int func_217()
{
	return Global_30768;
}

int func_218(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_219()
{
	return Global_2460680;
}

bool func_220()
{
	return Global_2450632.f_593;
}

void func_221(var uParam0)
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
					func_222(iVar0);
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

void func_222(int iParam0)
{
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_223(uVar4, &bVar5))
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

int func_223(int iParam0, var uParam1)
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

void func_224()
{
	SYSTEM::WAIT(0);
}

void func_225()
{
	func_231(-1659.01f, -1143.129f, 17.4192f);
	func_231(-1643.524f, -1124.681f, 17.4326f);
	func_231(-1639.621f, -1120.021f, 17.6357f);
	func_231(-1638.199f, -1118.316f, 17.9966f);
	func_231(-1637.011f, -1116.896f, 18.5407f);
	func_231(-1635.772f, -1115.417f, 19.2558f);
	func_231(-1634.227f, -1113.569f, 20.1725f);
	func_231(-1632.692f, -1111.734f, 21.0835f);
	func_231(-1631.179f, -1109.922f, 21.9826f);
	func_231(-1629.692f, -1108.145f, 22.865f);
	func_231(-1628.243f, -1106.411f, 23.7252f);
	func_231(-1626.84f, -1104.733f, 24.558f);
	func_231(-1625.491f, -1103.12f, 25.3588f);
	func_231(-1624.206f, -1101.582f, 26.1218f);
	func_231(-1622.992f, -1100.13f, 26.8424f);
	func_231(-1620.721f, -1097.416f, 28.1892f);
	func_231(-1618.866f, -1095.196f, 29.2895f);
	func_231(-1617.533f, -1093.603f, 30.0795f);
	func_231(-1616.778f, -1092.699f, 30.5401f);
	func_231(-1615.677f, -1091.388f, 30.9156f);
	func_231(-1614.829f, -1090.377f, 31.0008f);
	func_231(-1614.011f, -1089.406f, 30.9417f);
	func_231(-1612.615f, -1087.747f, 30.3463f);
	func_231(-1610.992f, -1085.82f, 29.1724f);
	func_231(-1609.228f, -1083.725f, 27.949f);
	func_231(-1608.295f, -1082.615f, 27.4861f);
	func_231(-1606.937f, -1081.002f, 27.4328f);
	func_231(-1605.471f, -1079.258f, 27.5762f);
	func_231(-1604.159f, -1077.701f, 28.0216f);
	func_231(-1602.511f, -1075.749f, 28.5244f);
	func_231(-1600.932f, -1073.873f, 28.9813f);
	func_231(-1599.342f, -1071.983f, 29.1756f);
	func_231(-1597.851f, -1070.067f, 29.1552f);
	func_231(-1596.723f, -1067.995f, 29.0611f);
	func_231(-1596.123f, -1065.708f, 28.9503f);
	func_231(-1595.991f, -1063.354f, 28.8316f);
	func_231(-1596.365f, -1061.041f, 28.7074f);
	func_231(-1597.254f, -1058.857f, 28.577f);
	func_231(-1598.562f, -1056.894f, 28.4423f);
	func_231(-1600.27f, -1055.292f, 28.3045f);
	func_231(-1602.288f, -1054.077f, 28.163f);
	func_231(-1604.497f, -1053.295f, 28.019f);
	func_231(-1606.845f, -1053.063f, 27.8712f);
	func_231(-1609.193f, -1053.3f, 27.7214f);
	func_231(-1611.416f, -1054.029f, 27.5695f);
	func_231(-1613.432f, -1055.248f, 27.4148f);
	func_231(-1615.167f, -1056.844f, 27.2581f);
	func_231(-1616.486f, -1058.782f, 27.0998f);
	func_231(-1617.371f, -1060.964f, 26.9395f);
	func_231(-1617.803f, -1063.281f, 26.7771f);
	func_231(-1617.669f, -1065.625f, 26.6138f);
	func_231(-1617.071f, -1067.903f, 26.4484f);
	func_231(-1616.006f, -1069.994f, 26.2817f);
	func_231(-1614.489f, -1071.798f, 26.1132f);
	func_231(-1612.646f, -1073.265f, 25.9435f);
	func_231(-1610.523f, -1074.272f, 25.7722f);
	func_231(-1608.231f, -1074.807f, 25.5996f);
	func_231(-1605.875f, -1074.877f, 25.4258f);
	func_231(-1603.576f, -1074.385f, 25.251f);
	func_231(-1601.417f, -1073.441f, 25.0748f);
	func_231(-1599.508f, -1072.067f, 24.8974f);
	func_231(-1597.961f, -1070.289f, 24.7188f);
	func_231(-1596.798f, -1068.241f, 24.5393f);
	func_231(-1596.121f, -1065.987f, 24.3586f);
	func_231(-1595.946f, -1063.637f, 24.177f);
	func_231(-1596.242f, -1061.301f, 23.9942f);
	func_231(-1597.079f, -1059.097f, 23.8103f);
	func_231(-1598.345f, -1057.109f, 23.6258f);
	func_231(-1599.996f, -1055.426f, 23.44f);
	func_231(-1601.991f, -1054.172f, 23.2534f);
	func_231(-1604.195f, -1053.339f, 23.0661f);
	func_231(-1606.533f, -1053.01f, 22.8773f);
	func_231(-1608.881f, -1053.199f, 22.6882f);
	func_231(-1611.144f, -1053.85f, 22.4984f);
	func_231(-1613.199f, -1055.015f, 22.3068f);
	func_231(-1614.982f, -1056.581f, 22.1126f);
	func_231(-1616.545f, -1058.398f, 21.7888f);
	func_231(-1618.098f, -1060.261f, 21.3373f);
	func_231(-1619.583f, -1062.043f, 20.7536f);
	func_231(-1621.058f, -1063.813f, 20.1778f);
	func_231(-1622.535f, -1065.582f, 19.6021f);
	func_231(-1624.009f, -1067.352f, 19.0262f);
	func_231(-1625.482f, -1069.119f, 18.4527f);
	func_231(-1626.88f, -1070.806f, 17.9515f);
	func_231(-1628.218f, -1072.426f, 17.7058f);
	func_231(-1629.509f, -1073.975f, 17.7076f);
	func_231(-1631.046f, -1075.816f, 17.7079f);
	func_231(-1632.36f, -1077.393f, 17.7079f);
	func_231(-1633.897f, -1079.234f, 17.7081f);
	func_231(-1635.397f, -1080.972f, 17.7074f);
	func_231(-1636.924f, -1082.801f, 17.7074f);
	func_231(-1638.383f, -1084.535f, 17.8395f);
	func_231(-1639.644f, -1086.005f, 18.3624f);
	func_231(-1640.985f, -1087.563f, 19.3675f);
	func_231(-1642.482f, -1089.276f, 20.5799f);
	func_231(-1644.108f, -1091.096f, 21.5914f);
	func_231(-1645.844f, -1092.97f, 21.9359f);
	func_231(-1647.561f, -1094.781f, 21.6225f);
	func_231(-1649.239f, -1096.506f, 20.9627f);
	func_231(-1650.894f, -1098.148f, 20.1969f);
	func_231(-1652.535f, -1099.704f, 19.525f);
	func_231(-1654.248f, -1101.247f, 18.9923f);
	func_231(-1656.05f, -1102.794f, 18.5631f);
	func_231(-1657.911f, -1104.315f, 18.2393f);
	func_231(-1659.798f, -1105.782f, 18.0219f);
	func_231(-1661.681f, -1107.168f, 17.911f);
	func_231(-1663.525f, -1108.445f, 17.9064f);
	func_231(-1665.293f, -1109.582f, 18.0057f);
	func_231(-1667.317f, -1110.773f, 18.2989f);
	func_231(-1669.263f, -1111.836f, 18.8213f);
	func_231(-1671.144f, -1112.787f, 19.5262f);
	func_231(-1673.022f, -1113.685f, 20.3691f);
	func_231(-1674.958f, -1114.582f, 21.2989f);
	func_231(-1676.995f, -1115.534f, 22.249f);
	func_231(-1679.084f, -1116.478f, 23.1368f);
	func_231(-1681.219f, -1117.389f, 23.9532f);
	func_231(-1683.374f, -1118.29f, 24.6845f);
	func_231(-1685.517f, -1119.208f, 25.3158f);
	func_231(-1687.62f, -1120.167f, 25.8329f);
	func_231(-1689.705f, -1121.188f, 26.2178f);
	func_231(-1691.772f, -1122.315f, 26.5427f);
	func_231(-1693.635f, -1123.75f, 26.845f);
	func_231(-1695.254f, -1125.474f, 27.1175f);
	func_231(-1696.581f, -1127.444f, 27.3373f);
	func_231(-1697.574f, -1129.602f, 27.5003f);
	func_231(-1698.207f, -1131.882f, 27.623f);
	func_231(-1698.465f, -1134.234f, 27.7231f);
	func_231(-1698.344f, -1136.602f, 27.7949f);
	func_231(-1697.841f, -1138.921f, 27.8328f);
	func_231(-1696.972f, -1141.131f, 27.8321f);
	func_231(-1695.759f, -1143.174f, 27.7892f);
	func_231(-1694.234f, -1144.995f, 27.7019f);
	func_231(-1692.435f, -1146.544f, 27.5687f);
	func_231(-1690.415f, -1147.784f, 27.39f);
	func_231(-1688.226f, -1148.682f, 27.1671f);
	func_231(-1685.926f, -1149.218f, 26.9025f);
	func_231(-1683.576f, -1149.376f, 26.5994f);
	func_231(-1681.237f, -1149.161f, 26.2631f);
	func_231(-1678.968f, -1148.578f, 25.8985f);
	func_231(-1676.825f, -1147.645f, 25.5118f);
	func_231(-1674.862f, -1146.388f, 25.1091f);
	func_231(-1673.124f, -1144.839f, 24.6968f);
	func_231(-1671.654f, -1143.039f, 24.2822f);
	func_231(-1670.486f, -1141.031f, 23.8716f);
	func_231(-1669.649f, -1138.865f, 23.472f);
	func_231(-1669.163f, -1136.595f, 23.0898f);
	func_231(-1669.04f, -1134.274f, 22.7307f);
	func_231(-1669.284f, -1131.962f, 22.4006f);
	func_231(-1669.888f, -1129.713f, 22.1045f);
	func_231(-1670.841f, -1127.585f, 21.8463f);
	func_231(-1672.12f, -1125.632f, 21.6294f);
	func_231(-1673.694f, -1123.904f, 21.4559f);
	func_231(-1675.523f, -1122.444f, 21.327f);
	func_231(-1677.563f, -1121.29f, 21.2429f);
	func_231(-1679.762f, -1120.476f, 21.2021f);
	func_231(-1682.064f, -1120.019f, 21.2025f);
	func_231(-1684.41f, -1119.933f, 21.2408f);
	func_231(-1686.742f, -1120.221f, 21.3125f);
	func_231(-1689f, -1120.877f, 21.4123f);
	func_231(-1691.128f, -1121.884f, 21.5343f);
	func_231(-1693.069f, -1123.218f, 21.672f);
	func_231(-1694.779f, -1124.849f, 21.8191f);
	func_231(-1695.93f, -1126.324f, 21.9029f);
	func_231(-1696.878f, -1127.99f, 21.9873f);
	func_231(-1697.674f, -1129.878f, 22.0778f);
	func_231(-1698.292f, -1131.96f, 22.1685f);
	func_231(-1698.699f, -1134.206f, 22.2533f);
	func_231(-1698.866f, -1136.587f, 22.3261f);
	func_231(-1698.764f, -1139.072f, 22.3807f);
	func_231(-1698.363f, -1141.633f, 22.4112f);
	func_231(-1697.633f, -1144.24f, 22.4113f);
	func_231(-1696.546f, -1146.863f, 22.3751f);
	func_231(-1695.061f, -1149.484f, 22.295f);
	func_231(-1693.239f, -1151.881f, 22.1555f);
	func_231(-1691.225f, -1153.872f, 21.965f);
	func_231(-1689.074f, -1155.483f, 21.737f);
	func_231(-1686.842f, -1156.74f, 21.485f);
	func_231(-1684.583f, -1157.674f, 21.2224f);
	func_231(-1682.351f, -1158.311f, 20.9625f);
	func_231(-1680.161f, -1158.67f, 20.7161f);
	func_231(-1678.176f, -1158.802f, 20.5023f);
	func_231(-1676.344f, -1158.712f, 20.3287f);
	func_231(-1674.755f, -1158.437f, 20.2097f);
	func_231(-1672.606f, -1157.658f, 20.0965f);
	func_231(-1670.584f, -1156.442f, 19.9803f);
	func_231(-1668.831f, -1154.866f, 19.8642f);
	func_231(-1667.418f, -1152.986f, 19.7482f);
	func_231(-1666.452f, -1150.833f, 19.6319f);
	func_231(-1665.911f, -1148.538f, 19.5158f);
	func_231(-1665.817f, -1146.181f, 19.3996f);
	func_231(-1666.207f, -1143.862f, 19.2836f);
	func_231(-1667.073f, -1141.668f, 19.1674f);
	func_231(-1668.339f, -1139.679f, 19.0512f);
	func_231(-1669.962f, -1137.965f, 18.935f);
	func_231(-1671.913f, -1136.65f, 18.8189f);
	func_231(-1674.087f, -1135.737f, 18.7028f);
	func_231(-1676.397f, -1135.256f, 18.5866f);
	func_231(-1678.751f, -1135.237f, 18.4705f);
	func_231(-1681.058f, -1135.73f, 18.3543f);
	func_231(-1683.23f, -1136.65f, 18.2382f);
	func_231(-1685.187f, -1137.968f, 18.1219f);
	func_231(-1686.824f, -1139.661f, 18.0059f);
	func_231(-1688.081f, -1141.657f, 17.8896f);
	func_231(-1688.938f, -1143.855f, 17.7735f);
	func_231(-1689.359f, -1146.177f, 17.6571f);
	func_231(-1689.26f, -1148.532f, 17.5411f);
	func_231(-1688.71f, -1150.826f, 17.425f);
	func_231(-1687.733f, -1152.976f, 17.3087f);
	func_231(-1686.342f, -1154.887f, 17.1759f);
	func_231(-1684.573f, -1156.462f, 17.0021f);
	func_231(-1682.54f, -1157.669f, 16.7987f);
	func_231(-1680.313f, -1158.466f, 16.5838f);
	func_231(-1677.973f, -1158.77f, 16.3415f);
	func_231(-1675.626f, -1158.601f, 16.0948f);
	func_231(-1673.361f, -1157.994f, 15.9205f);
	func_231(-1671.255f, -1156.966f, 15.8075f);
	func_231(-1669.435f, -1155.511f, 15.7719f);
	func_231(-1667.848f, -1153.66f, 15.766f);
	func_231(-1666.33f, -1151.852f, 15.7703f);
	func_231(-1664.875f, -1150.117f, 15.8984f);
	func_231(-1663.46f, -1148.431f, 16.198f);
	func_231(-1662.033f, -1146.731f, 16.6412f);
	func_231(-1660.556f, -1144.97f, 17.1643f);
	func_231(-1659.01f, -1143.129f, 17.4192f);
	func_230((iLocal_716 - 1), Local_1452[0]);
	func_226();
	Local_1452[1].f_4 = 0.3f;
	Local_1452[2].f_4 = 0.3f;
	Local_1452[3].f_4 = 3f;
	Local_1452[4].f_4 = 3f;
	Local_1452[5].f_4 = 3f;
	Local_1452[6].f_4 = 3f;
	Local_1452[7].f_4 = 3f;
	Local_1452[8].f_4 = 3f;
	Local_1452[9].f_4 = 3f;
	Local_1452[10].f_4 = 3f;
	Local_1452[11].f_4 = 3f;
	Local_1452[12].f_4 = 3f;
	Local_1452[13].f_4 = 3f;
	Local_1452[14].f_4 = 3f;
	Local_1452[15].f_4 = 3f;
	Local_1452[16].f_4 = 3f;
	Local_1452[17].f_4 = 3f;
	Local_1452[18].f_4 = 3f;
	Local_1452[19].f_4 = 3f;
	Local_1452[20].f_4 = 3f;
	Local_1452[21].f_4 = 3f;
	Local_1452[22].f_4 = 3.1794f;
	Local_1452[23].f_4 = 4.8025f;
	Local_1452[24].f_4 = 6.7585f;
	Local_1452[25].f_4 = 8.3448f;
	Local_1452[26].f_4 = 8.8436f;
	Local_1452[27].f_4 = 8.9045f;
	Local_1452[28].f_4 = 8.7073f;
	Local_1452[29].f_4 = 8.1965f;
	Local_1452[30].f_4 = 7.5921f;
	Local_1452[31].f_4 = 7.0097f;
	Local_1452[32].f_4 = 6.6959f;
	Local_1452[33].f_4 = 6.7221f;
	Local_1452[34].f_4 = 6.8771f;
	Local_1452[35].f_4 = 7.0232f;
	Local_1452[36].f_4 = 7.18f;
	Local_1452[37].f_4 = 7.3457f;
	Local_1452[38].f_4 = 7.5605f;
	Local_1452[39].f_4 = 7.6956f;
	Local_1452[40].f_4 = 7.8806f;
	Local_1452[41].f_4 = 8.0659f;
	Local_1452[42].f_4 = 8.2597f;
	Local_1452[43].f_4 = 8.4085f;
	Local_1452[44].f_4 = 8.6081f;
	Local_1452[45].f_4 = 8.7629f;
	Local_1452[46].f_4 = 8.9647f;
	Local_1452[47].f_4 = 9.1286f;
	Local_1452[48].f_4 = 9.2889f;
	Local_1452[49].f_4 = 9.4513f;
	Local_1452[50].f_4 = 9.6107f;
	Local_1452[51].f_4 = 9.8224f;
	Local_1452[52].f_4 = 9.9849f;
	Local_1452[53].f_4 = 10.1485f;
	Local_1452[54].f_4 = 10.3112f;
	Local_1452[55].f_4 = 10.4793f;
	Local_1452[56].f_4 = 10.648f;
	Local_1452[57].f_4 = 10.7657f;
	Local_1452[58].f_4 = 10.9378f;
	Local_1452[59].f_4 = 11.1113f;
	Local_1452[60].f_4 = 11.285f;
	Local_1452[61].f_4 = 11.4038f;
	Local_1452[62].f_4 = 11.5785f;
	Local_1452[63].f_4 = 11.7563f;
	Local_1452[64].f_4 = 11.8826f;
	Local_1452[65].f_4 = 12.0063f;
	Local_1452[66].f_4 = 12.1858f;
	Local_1452[67].f_4 = 12.311f;
	Local_1452[68].f_4 = 12.4905f;
	Local_1452[69].f_4 = 12.6186f;
	Local_1452[70].f_4 = 12.752f;
	Local_1452[71].f_4 = 12.9366f;
	Local_1452[72].f_4 = 13.069f;
	Local_1452[73].f_4 = 13.2002f;
	Local_1452[74].f_4 = 13.3271f;
	Local_1452[75].f_4 = 13.5131f;
	Local_1452[76].f_4 = 13.6428f;
	Local_1452[77].f_4 = 13.8557f;
	Local_1452[78].f_4 = 14.1467f;
	Local_1452[79].f_4 = 14.7078f;
	Local_1452[80].f_4 = 15.0933f;
	Local_1452[81].f_4 = 15.4812f;
	Local_1452[82].f_4 = 15.6897f;
	Local_1452[83].f_4 = 16.072f;
	Local_1452[84].f_4 = 16.4288f;
	Local_1452[85].f_4 = 16.6158f;
	Local_1452[86].f_4 = 16.615f;
	Local_1452[87].f_4 = 16.6148f;
	Local_1452[88].f_4 = 16.6148f;
	Local_1452[89].f_4 = 16.6147f;
	Local_1452[90].f_4 = 16.6151f;
	Local_1452[91].f_4 = 16.6151f;
	Local_1452[92].f_4 = 16.5645f;
	Local_1452[93].f_4 = 16.145f;
	Local_1452[94].f_4 = 15.4464f;
	Local_1452[95].f_4 = 14.6939f;
	Local_1452[96].f_4 = 14.0775f;
	Local_1452[97].f_4 = 13.7741f;
	Local_1452[98].f_4 = 13.9723f;
	Local_1452[99].f_4 = 14.39f;
	Local_1452[100].f_4 = 14.8988f;
	Local_1452[101].f_4 = 15.3516f;
	Local_1452[102].f_4 = 15.7118f;
	Local_1452[103].f_4 = 15.9945f;
	Local_1452[104].f_4 = 16.2069f;
	Local_1452[105].f_4 = 16.3518f;
	Local_1452[106].f_4 = 16.3944f;
	Local_1452[107].f_4 = 16.3977f;
	Local_1452[108].f_4 = 16.3236f;
	Local_1452[109].f_4 = 16.1241f;
	Local_1452[110].f_4 = 15.9292f;
	Local_1452[111].f_4 = 15.4375f;
	Local_1452[112].f_4 = 14.8409f;
	Local_1452[113].f_4 = 14.2057f;
	Local_1452[114].f_4 = 13.5752f;
	Local_1452[115].f_4 = 12.7336f;
	Local_1452[116].f_4 = 12.2095f;
	Local_1452[117].f_4 = 11.5221f;
	Local_1452[118].f_4 = 11.0986f;
	Local_1452[119].f_4 = 10.6031f;
	Local_1452[120].f_4 = 10.2269f;
	Local_1452[121].f_4 = 9.9111f;
	Local_1452[122].f_4 = 9.5337f;
	Local_1452[123].f_4 = 9.2694f;
	Local_1452[124].f_4 = 9.0583f;
	Local_1452[125].f_4 = 8.8516f;
	Local_1452[126].f_4 = 8.7288f;
	Local_1452[127].f_4 = 8.6021f;
	Local_1452[128].f_4 = 8.51f;
	Local_1452[129].f_4 = 8.4733f;
	Local_1452[130].f_4 = 8.4742f;
	Local_1452[131].f_4 = 8.5294f;
	Local_1452[132].f_4 = 8.6157f;
	Local_1452[133].f_4 = 8.7849f;
	Local_1452[134].f_4 = 8.9639f;
	Local_1452[135].f_4 = 9.2546f;
	Local_1452[136].f_4 = 9.514f;
	Local_1452[137].f_4 = 9.8293f;
	Local_1452[138].f_4 = 10.1114f;
	Local_1452[139].f_4 = 10.5312f;
	Local_1452[140].f_4 = 10.9067f;
	Local_1452[141].f_4 = 11.1773f;
	Local_1452[142].f_4 = 11.5836f;
	Local_1452[143].f_4 = 11.9962f;
	Local_1452[144].f_4 = 12.2748f;
	Local_1452[145].f_4 = 12.6632f;
	Local_1452[146].f_4 = 12.9328f;
	Local_1452[147].f_4 = 13.1711f;
	Local_1452[148].f_4 = 13.3959f;
	Local_1452[149].f_4 = 13.6873f;
	Local_1452[150].f_4 = 13.8612f;
	Local_1452[151].f_4 = 14.0083f;
	Local_1452[152].f_4 = 14.1297f;
	Local_1452[153].f_4 = 14.2155f;
	Local_1452[154].f_4 = 14.2732f;
	Local_1452[155].f_4 = 14.3011f;
	Local_1452[156].f_4 = 14.3008f;
	Local_1452[157].f_4 = 14.2746f;
	Local_1452[158].f_4 = 14.2251f;
	Local_1452[159].f_4 = 14.1577f;
	Local_1452[160].f_4 = 14.0733f;
	Local_1452[161].f_4 = 13.9385f;
	Local_1452[162].f_4 = 13.8385f;
	Local_1452[163].f_4 = 13.7996f;
	Local_1452[164].f_4 = 13.7301f;
	Local_1452[165].f_4 = 13.6586f;
	Local_1452[166].f_4 = 13.5902f;
	Local_1452[167].f_4 = 13.5308f;
	Local_1452[168].f_4 = 13.482f;
	Local_1452[169].f_4 = 13.4313f;
	Local_1452[170].f_4 = 13.4127f;
	Local_1452[171].f_4 = 13.4126f;
	Local_1452[172].f_4 = 13.433f;
	Local_1452[173].f_4 = 13.4949f;
	Local_1452[174].f_4 = 13.6046f;
	Local_1452[175].f_4 = 13.761f;
	Local_1452[176].f_4 = 13.8937f;
	Local_1452[177].f_4 = 14.1199f;
	Local_1452[178].f_4 = 14.2919f;
	Local_1452[179].f_4 = 14.4699f;
	Local_1452[180].f_4 = 14.6443f;
	Local_1452[181].f_4 = 14.7383f;
	Local_1452[182].f_4 = 14.889f;
	Local_1452[183].f_4 = 14.9538f;
	Local_1452[184].f_4 = 15.0334f;
	Local_1452[185].f_4 = 15.1141f;
	Local_1452[186].f_4 = 15.1923f;
	Local_1452[187].f_4 = 15.2712f;
	Local_1452[188].f_4 = 15.3499f;
	Local_1452[189].f_4 = 15.4286f;
	Local_1452[190].f_4 = 15.5073f;
	Local_1452[191].f_4 = 15.5512f;
	Local_1452[192].f_4 = 15.6299f;
	Local_1452[193].f_4 = 15.7082f;
	Local_1452[194].f_4 = 15.7859f;
	Local_1452[195].f_4 = 15.8647f;
	Local_1452[196].f_4 = 15.9434f;
	Local_1452[197].f_4 = 16.0226f;
	Local_1452[198].f_4 = 16.0645f;
	Local_1452[199].f_4 = 16.1422f;
	Local_1452[200].f_4 = 16.2213f;
	Local_1452[201].f_4 = 16.2996f;
	Local_1452[202].f_4 = 16.3783f;
	Local_1452[203].f_4 = 16.4226f;
	Local_1452[204].f_4 = 16.5003f;
	Local_1452[205].f_4 = 16.5796f;
	Local_1452[206].f_4 = 16.6622f;
	Local_1452[207].f_4 = 16.7055f;
	Local_1452[208].f_4 = 16.7837f;
	Local_1452[209].f_4 = 16.8729f;
	Local_1452[210].f_4 = 16.9907f;
	Local_1452[211].f_4 = 17.0661f;
	Local_1452[212].f_4 = 17.2127f;
	Local_1452[213].f_4 = 17.3761f;
	Local_1452[214].f_4 = 17.4689f;
	Local_1452[215].f_4 = 17.5883f;
	Local_1452[216].f_4 = 17.6648f;
	Local_1452[217].f_4 = 17.6783f;
	Local_1452[218].f_4 = 17.6822f;
	Local_1452[219].f_4 = 17.6806f;
	Local_1452[220].f_4 = 17.5908f;
	Local_1452[221].f_4 = 17.371f;
	Local_1452[222].f_4 = 17.1986f;
	Local_1452[223].f_4 = 16.8458f;
}

void func_226()
{
	fVar1 = 0f;
	iVar0 = 0;
	while (iVar0 < Local_1452)
	{
		if (!func_227(iVar0))
		{
			Local_1452[iVar0].f_3 = fVar1;
			if (iVar0 < 224)
			{
				fVar1 = (fVar1 + SYSTEM::VDIST(func_55(iVar0), func_55(iVar0 + 1)));
			}
		}
		else
		{
			return;
		}
		iVar0++;
	}
}

bool func_227(int iParam0)
{
	return func_228(Local_1452[iParam0]);
}

bool func_228(struct<3> Param0)
{
	return func_229(Param0, -1E-10f, -1E-10f, -1E-10f, 0);
}

bool func_229(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.y == Param3.y);
	}
	return ((Param0.x == Param3.x && Param0.y == Param3.y) && Param0.z == Param3.z);
}

void func_230(int iParam0, struct<3> Param1)
{
	if (iParam0 >= 0 && iParam0 <= 225)
	{
		Local_1452[iParam0] = { Param1 };
	}
}

void func_231(struct<3> Param0)
{
	if (iLocal_716 < 225 && iLocal_716 >= 0)
	{
		func_230(iLocal_716, Param0);
		iLocal_716++;
	}
}

void func_232()
{
	iVar0 = 0;
	while (iVar0 < Local_1452)
	{
		func_233(iVar0);
		iVar0++;
	}
}

void func_233(int iParam0)
{
	func_56(&(Local_1452[iParam0]));
	Local_1452[iParam0].f_3 = 0f;
}

void func_234()
{
	iVar0 = 0;
	while (iVar0 < iLocal_721)
	{
		OBJECT::DELETE_OBJECT(&(iLocal_721[iVar0]));
		iVar0++;
	}
	AUDIO::STOP_STREAM();
	Global_2544352 = 0f;
	Global_2544353 = 0f;
	Global_2537071.f_5122 = 0;
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_730);
	Global_1590535[PLAYER::PLAYER_ID()].f_749 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_12(PLAYER::PLAYER_ID(), 1, 1))
		{
			NETWORK::_0x267C78C60E806B9A(PLAYER::PLAYER_PED_ID(), 0);
		}
		VEHICLE::DELETE_VEHICLE(&uLocal_726);
		if (GAMEPLAY::IS_BIT_SET(Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()].f_2, 0))
		{
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		func_18(0);
	}
	func_235();
}

void func_235()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_236(struct<21> Param0)
{
	func_239(func_240(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_237(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_2623, 95);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_2718, 161);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Global_2544352 = 0f;
	Global_2544353 = 0f;
	Local_2718[NETWORK::PARTICIPANT_ID_TO_INT()] = 0;
	return 1;
}

int func_237(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_235();
			}
			else
			{
				return 0;
			}
		}
		if (!func_238())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_235();
					}
					else
					{
						return 0;
					}
				}
				if (func_220())
				{
					if (!bParam2)
					{
						func_235();
					}
					else
					{
						return 0;
					}
				}
				if (func_218(157))
				{
					if (!bParam2)
					{
						func_235();
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
					func_235();
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
				func_235();
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
			func_235();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_238()
{
	return Global_1312854;
}

void func_239(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_235();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 137:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 148:
			return 2;
		
		case 153:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
			return 4;
		
		case 151:
			return 2;
		
		case 152:
			return 2;
		
		case 134:
			return 1;
		
		case 154:
			return 2;
		
		case 155:
		case 156:
		case 157:
		case 158:
		case 159:
		case 160:
			return 0;
		
		case 176:
			return 1;
		
		case 161:
			return 4;
		
		case 164:
			return 4;
		
		case 165:
			return 1;
		
		case 166:
			return 1;
		
		case 172:
			return 1;
		
		case 168:
			return 2;
		
		case 173:
			return 1;
		
		case 169:
			return 1;
		
		case 167:
			return 2;
		
		case 170:
			return 8;
		
		case 171:
			return 8;
		
		case 174:
			return 1;
		
		case 162:
			return 16;
		
		case 163:
			return 32;
		
		default:
	}
	return 0;
}

